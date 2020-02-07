#include "imgui_impl_cocos2dx.h"
#include "cocos2d.h"
#include "renderer/backend/Backend.h"

#ifdef CC_PLATFORM_PC
// GLFW
#ifdef _WIN32

#include "../external/glfw3/include/win32/glfw3.h"
#undef APIENTRY
#ifndef GLFW_EXPOSE_NATIVE_WIN32
#define GLFW_EXPOSE_NATIVE_WIN32
#endif
#include "../external/glfw3/include/win32/glfw3native.h"   // for glfwGetWin32Window

#else

#include <glfw3.h>

#endif // _WIN32

#endif // CC_PLATFORM_PC

using namespace cocos2d;
using namespace backend;

// GLFW data
static double               g_Time = 0.0;
static bool                 g_MouseJustPressed[5] = { false, false, false, false, false };
static ImVec2               g_CursorPos = ImVec2(-FLT_MAX, -FLT_MAX);

#ifdef CC_PLATFORM_PC
static GLFWcursor*          g_MouseCursors[ImGuiMouseCursor_COUNT] = { nullptr };
// Chain GLFW callbacks: our callbacks will call the user's previously installed callbacks, if any.
static GLFWmousebuttonfun   g_PrevUserCallbackMousebutton = nullptr;
static GLFWscrollfun        g_PrevUserCallbackScroll = nullptr;
static GLFWkeyfun           g_PrevUserCallbackKey = nullptr;
static GLFWcharfun          g_PrevUserCallbackChar = nullptr;
#endif // CC_PLATFORM_PC

static std::string ATTR_NAME_POSITION = "Position";
static std::string ATTR_NAME_TEXCOORD = "UV";
static std::string ATTR_NAME_COLOR = "Color";
static IndexFormat INDEX_FORMAT = sizeof(ImDrawIdx) == 2 ? IndexFormat::U_SHORT : IndexFormat::U_INT;
static VertexLayout VERTEX_LAYOUT;

// Uniforms location
static UniformLocation g_UniformLocationTex;
static UniformLocation g_UniformLocationProjMtx;
// Vertex attributes location
static int g_AttribLocationVtxPos;
static int g_AttribLocationVtxUV;
static int g_AttribLocationVtxColor;

static Texture2D* g_FontTexture = nullptr;
static Program* g_Program = nullptr;
static Mat4 g_Projection;

static std::vector<std::shared_ptr<CallbackCommand>> g_CallbackCommands;
static std::vector<std::shared_ptr<CustomCommand>> g_CustomCommands;
static Vector<ProgramState*> g_ProgramStates;

#ifdef CC_PLATFORM_PC
static GLFWwindow* ImGui_ImplCocos2dx_GetWindow()
{
	const auto glv = (GLViewImpl*)Director::getInstance()->getOpenGLView();
	return glv->getWindow();
}
#endif // CC_PLATFORM_PC

static void ImGui_ImplCocos2dx_SetupRenderState(ImDrawData* draw_data, int fb_width, int fb_height)
{
	const auto renderer = Director::getInstance()->getRenderer();
	auto setup = std::make_shared<CallbackCommand>();
	g_CallbackCommands.push_back(setup);
	setup->init(0.f);
	setup->func = [=]()
	{
		renderer->setCullMode(backend::CullMode::NONE);
		renderer->setDepthTest(false);
		renderer->setScissorTest(true);
		renderer->setViewPort(0, 0, fb_width, fb_height);
	};
	renderer->addCommand(setup.get());

	const auto L = draw_data->DisplayPos.x;
    const auto R = draw_data->DisplayPos.x + draw_data->DisplaySize.x;
    const auto T = draw_data->DisplayPos.y;
    const auto B = draw_data->DisplayPos.y + draw_data->DisplaySize.y;
	Mat4::createOrthographicOffCenter(L, R, B, T, -1.f, 1.f, &g_Projection);
}

typedef struct SavedRenderState
{
	backend::CullMode cull;
	Viewport vp;
	ScissorRect scissorRect;
	bool scissorTest;
	bool depthTest;
} SavedRenderState;
static SavedRenderState g_SavedRenderState;

void ImGui_ImplCocos2dx_RenderDrawData(ImDrawData* draw_data)
{
	g_CallbackCommands.clear();
	g_CustomCommands.clear();
	g_ProgramStates.clear();

    // Avoid rendering when minimized, scale coordinates for retina displays
	// (screen coordinates != framebuffer coordinates)
    int fb_width = (int)(draw_data->DisplaySize.x * draw_data->FramebufferScale.x);
    int fb_height = (int)(draw_data->DisplaySize.y * draw_data->FramebufferScale.y);
    if (fb_width <= 0 || fb_height <= 0)
        return;

	const auto renderer = Director::getInstance()->getRenderer();

	auto store = std::make_shared<CallbackCommand>();
	g_CallbackCommands.push_back(store);
	store->init(0.f);
	store->func = [renderer]()
	{
		g_SavedRenderState.cull = renderer->getCullMode();
		g_SavedRenderState.vp = renderer->getViewport();
		g_SavedRenderState.scissorTest = renderer->getScissorTest();
		g_SavedRenderState.scissorRect = renderer->getScissorRect();
		g_SavedRenderState.depthTest = renderer->getDepthTest();
	};
	renderer->addCommand(store.get());

    ImGui_ImplCocos2dx_SetupRenderState(draw_data, fb_width, fb_height);

    // Will project scissor/clipping rectangles into framebuffer space
    ImVec2 clip_off = draw_data->DisplayPos;         // (0,0) unless using multi-viewports
    ImVec2 clip_scale = draw_data->FramebufferScale; // (1,1) unless using retina display which are often (2,2)

    // Render command lists
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        size_t ibuffer_offset = 0;

        // Upload vertex/index buffers
		const auto vsize = cmd_list->VtxBuffer.Size * sizeof(ImDrawVert);
		IM_ASSERT(vsize > 0);
		auto vbuffer = backend::Device::getInstance()->newBuffer(
			vsize, BufferType::VERTEX, BufferUsage::STATIC);
		vbuffer->updateData(cmd_list->VtxBuffer.Data, vsize);
		const auto isize = cmd_list->IdxBuffer.Size * sizeof(ImDrawIdx);
		IM_ASSERT(isize > 0);
		auto ibuffer = backend::Device::getInstance()->newBuffer(
			isize, BufferType::INDEX, BufferUsage::STATIC);
		ibuffer->updateData(cmd_list->IdxBuffer.Data, isize);

        for (int cmd_i = 0; cmd_i < cmd_list->CmdBuffer.Size; cmd_i++)
        {
            const ImDrawCmd* pcmd = &cmd_list->CmdBuffer[cmd_i];
            if (pcmd->UserCallback != nullptr)
            {
                // User callback, registered via ImDrawList::AddCallback()
                // (ImDrawCallback_ResetRenderState is a special callback value used by the user
                // to request the renderer to reset render state.)
                if (pcmd->UserCallback == ImDrawCallback_ResetRenderState)
                    ImGui_ImplCocos2dx_SetupRenderState(draw_data, fb_width, fb_height);
                else
                {
					auto callback = std::make_shared<CallbackCommand>();
					g_CallbackCommands.push_back(callback);
					callback->func = [=]()
					{
						pcmd->UserCallback(cmd_list, pcmd);
					};
                }
            }
            else
            {
                // Project scissor/clipping rectangles into framebuffer space
                ImVec4 clip_rect;
                clip_rect.x = (pcmd->ClipRect.x - clip_off.x) * clip_scale.x;
                clip_rect.y = (pcmd->ClipRect.y - clip_off.y) * clip_scale.y;
                clip_rect.z = (pcmd->ClipRect.z - clip_off.x) * clip_scale.x;
                clip_rect.w = (pcmd->ClipRect.w - clip_off.y) * clip_scale.y;

                if (clip_rect.x < fb_width && clip_rect.y < fb_height &&
					clip_rect.z >= 0.0f && clip_rect.w >= 0.0f)
                {
					// Apply scissor/clipping rectangle
					auto callback = std::make_shared<CallbackCommand>();
					g_CallbackCommands.push_back(callback);
					callback->func = [=]()
					{
						renderer->setScissorRect(
							clip_rect.x,
							fb_height - clip_rect.w,
							clip_rect.z - clip_rect.x,
							clip_rect.w - clip_rect.y);
					};
					renderer->addCommand(callback.get());
					auto tex = (Texture2D*)pcmd->TextureId;
                	auto cmd = std::make_shared<CustomCommand>();
					g_CustomCommands.push_back(cmd);
					cmd->init(0.f, BlendFunc::ALPHA_NON_PREMULTIPLIED);
					// create new ProgramState
					auto state = new ProgramState(g_Program);
					state->autorelease();
					g_ProgramStates.pushBack(state);
					auto& desc = cmd->getPipelineDescriptor();
					desc.programState = state;
					// setup attributes for ImDrawVert
					*desc.programState->getVertexLayout() = VERTEX_LAYOUT;
					desc.programState->setUniform(g_UniformLocationProjMtx, &g_Projection, sizeof(Mat4));
					desc.programState->setTexture(g_UniformLocationTex, 0, tex->getBackendTexture());
					// set vertex/index buffer
					cmd->setIndexBuffer(ibuffer, INDEX_FORMAT);
					cmd->setVertexBuffer(vbuffer);
					cmd->setDrawType(CustomCommand::DrawType::ELEMENT);
					cmd->setPrimitiveType(PrimitiveType::TRIANGLE);
					cmd->setIndexDrawInfo(ibuffer_offset, pcmd->ElemCount);
					renderer->addCommand(cmd.get());
                }
            }
			ibuffer_offset += pcmd->ElemCount;
        }
    }

	auto restore = std::make_shared<CallbackCommand>();
	g_CallbackCommands.push_back(restore);
	restore->init(0.f);
	restore->func = [renderer]()
	{
		renderer->setCullMode(g_SavedRenderState.cull);
		auto& vp = g_SavedRenderState.vp;
		renderer->setViewPort(vp.x, vp.y, vp.w, vp.h);
		renderer->setScissorTest(g_SavedRenderState.scissorTest);
		auto& sc = g_SavedRenderState.scissorRect;
		renderer->setScissorRect(sc.x, sc.y, sc.width, sc.height);
		renderer->setDepthTest(g_SavedRenderState.depthTest);
	};
	renderer->addCommand(restore.get());
}

static const char* ImGui_ImplCocos2dx_GetClipboardText(void* user_data)
{
#ifdef CC_PLATFORM_PC
    return glfwGetClipboardString((GLFWwindow*)user_data);
#else
	return "";
#endif
}

static void ImGui_ImplCocos2dx_SetClipboardText(void* user_data, const char* text)
{
#ifdef CC_PLATFORM_PC
    glfwSetClipboardString((GLFWwindow*)user_data, text);
#else
#endif
}

#ifdef CC_PLATFORM_PC

void ImGui_ImplCocos2dx_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods)
{
    if (g_PrevUserCallbackMousebutton != nullptr)
        g_PrevUserCallbackMousebutton(window, button, action, mods);

    if (action == GLFW_PRESS && button >= 0 && button < IM_ARRAYSIZE(g_MouseJustPressed))
        g_MouseJustPressed[button] = true;
}

void ImGui_ImplCocos2dx_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset)
{
    if (g_PrevUserCallbackScroll != nullptr)
        g_PrevUserCallbackScroll(window, xoffset, yoffset);

    ImGuiIO& io = ImGui::GetIO();
    io.MouseWheelH += (float)xoffset;
    io.MouseWheel += (float)yoffset;
}

void ImGui_ImplCocos2dx_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (g_PrevUserCallbackKey != nullptr)
        g_PrevUserCallbackKey(window, key, scancode, action, mods);

    ImGuiIO& io = ImGui::GetIO();
    if (action == GLFW_PRESS)
        io.KeysDown[key] = true;
    if (action == GLFW_RELEASE)
        io.KeysDown[key] = false;

    // Modifiers are not reliable across systems
    io.KeyCtrl = io.KeysDown[GLFW_KEY_LEFT_CONTROL] || io.KeysDown[GLFW_KEY_RIGHT_CONTROL];
    io.KeyShift = io.KeysDown[GLFW_KEY_LEFT_SHIFT] || io.KeysDown[GLFW_KEY_RIGHT_SHIFT];
    io.KeyAlt = io.KeysDown[GLFW_KEY_LEFT_ALT] || io.KeysDown[GLFW_KEY_RIGHT_ALT];
    io.KeySuper = io.KeysDown[GLFW_KEY_LEFT_SUPER] || io.KeysDown[GLFW_KEY_RIGHT_SUPER];
}

void ImGui_ImplCocos2dx_CharCallback(GLFWwindow* window, unsigned int c)
{
    if (g_PrevUserCallbackChar != nullptr)
        g_PrevUserCallbackChar(window, c);

    ImGuiIO& io = ImGui::GetIO();
    io.AddInputCharacter(c);
}

#endif // CC_PLATFORM_PC

bool ImGui_ImplCocos2dx_CreateFontsTexture()
{
    // Build texture atlas
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pixels;
    int width, height;
	// Load as RGBA 32-bits (75% of the memory is wasted, but default font is so small)
	// because it is more likely to be compatible with user's existing shaders.
	// If your ImTextureId represent a higher-level concept than just a GL texture id,
	// consider calling GetTexDataAsAlpha8() instead to save on GPU memory.
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height);
	//LOG("imgui: create fonts texture of %d x %d", width, height);

	if(!g_FontTexture)
		g_FontTexture = new Texture2D();

	g_FontTexture->setAntiAliasTexParameters();
	g_FontTexture->initWithData(pixels, width*height * 4,
		backend::PixelFormat::RGBA8888, width, height, Size(width, height));
	io.Fonts->TexID = (ImTextureID)g_FontTexture;
    return true;
}

void ImGui_ImplCocos2dx_DestroyFontsTexture()
{
	if (g_FontTexture)
	{
		ImGui::GetIO().Fonts->TexID = nullptr;
		CC_SAFE_DELETE(g_FontTexture);
	}
}

bool ImGui_ImplCocos2dx_CreateDeviceObjects()
{
    static auto vertex_shader_glsl_120 =
        "uniform mat4 ProjMtx;\n"
        "attribute vec2 Position;\n"
        "attribute vec2 UV;\n"
        "attribute vec4 Color;\n"
        "varying vec2 Frag_UV;\n"
        "varying vec4 Frag_Color;\n"
        "void main()\n"
        "{\n"
        "    Frag_UV = UV;\n"
        "    Frag_Color = Color;\n"
        "    gl_Position = ProjMtx * vec4(Position.xy,0,1);\n"
        "}\n";

	static auto fragment_shader_glsl_120 =
        "#ifdef GL_ES\n"
        "    precision mediump float;\n"
        "#endif\n"
        "uniform sampler2D Texture;\n"
        "varying vec2 Frag_UV;\n"
        "varying vec4 Frag_Color;\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = Frag_Color * texture2D(Texture, Frag_UV.st);\n"
        "}\n";

	auto vertex_shader = vertex_shader_glsl_120;
	auto fragment_shader = fragment_shader_glsl_120;

	g_Program = backend::Device::getInstance()->newProgram(vertex_shader, fragment_shader);
	IM_ASSERT(g_Program);
	if (!g_Program)
		return false;

	g_UniformLocationTex = g_Program->getUniformLocation("Texture");
    g_UniformLocationProjMtx = g_Program->getUniformLocation("ProjMtx");
    g_AttribLocationVtxPos = g_Program->getAttributeLocation(ATTR_NAME_POSITION);
    g_AttribLocationVtxUV = g_Program->getAttributeLocation(ATTR_NAME_TEXCOORD);
    g_AttribLocationVtxColor = g_Program->getAttributeLocation(ATTR_NAME_COLOR);
	IM_ASSERT(bool(g_UniformLocationTex));
	IM_ASSERT(bool(g_UniformLocationProjMtx));
	IM_ASSERT(g_AttribLocationVtxPos >= 0);
	IM_ASSERT(g_AttribLocationVtxUV >= 0);
	IM_ASSERT(g_AttribLocationVtxColor >= 0);

	VERTEX_LAYOUT.setAttribute(ATTR_NAME_POSITION, g_AttribLocationVtxPos,
		VertexFormat::FLOAT2, 0, false);
	VERTEX_LAYOUT.setAttribute(ATTR_NAME_TEXCOORD, g_AttribLocationVtxUV,
		VertexFormat::FLOAT2, offsetof(ImDrawVert, uv), false);
	VERTEX_LAYOUT.setAttribute(ATTR_NAME_COLOR, g_AttribLocationVtxColor,
		VertexFormat::UBYTE4, offsetof(ImDrawVert, col), true);
	VERTEX_LAYOUT.setLayout(sizeof(ImDrawVert));

    ImGui_ImplCocos2dx_CreateFontsTexture();

    return true;
}

void ImGui_ImplCocos2dx_DestroyDeviceObjects()
{
	CC_SAFE_RELEASE_NULL(g_Program);
    ImGui_ImplCocos2dx_DestroyFontsTexture();
}

bool ImGui_ImplCocos2dx_Init(bool install_callbacks)
{
    g_Time = 0.0;
    ImGui::CreateContext();

    // Setup back-end capabilities flags
    ImGuiIO& io = ImGui::GetIO();
#ifdef CC_PLATFORM_PC
    const auto window = ImGui_ImplCocos2dx_GetWindow();
	// We can honor GetMouseCursor() values (optional)
    io.BackendFlags |= ImGuiBackendFlags_HasMouseCursors;
	// We can honor io.WantSetMousePos requests (optional, rarely used)
    io.BackendFlags |= ImGuiBackendFlags_HasSetMousePos;
#endif // CC_PLATFORM_PC
    io.BackendPlatformName = "imgui_impl_cocos";
	// disable auto load and save
	io.IniFilename = nullptr;

#ifdef CC_PLATFORM_PC
    // Keyboard mapping. ImGui will use those indices to peek into the io.KeysDown[] array.
    io.KeyMap[ImGuiKey_Tab] = GLFW_KEY_TAB;
    io.KeyMap[ImGuiKey_LeftArrow] = GLFW_KEY_LEFT;
    io.KeyMap[ImGuiKey_RightArrow] = GLFW_KEY_RIGHT;
    io.KeyMap[ImGuiKey_UpArrow] = GLFW_KEY_UP;
    io.KeyMap[ImGuiKey_DownArrow] = GLFW_KEY_DOWN;
    io.KeyMap[ImGuiKey_PageUp] = GLFW_KEY_PAGE_UP;
    io.KeyMap[ImGuiKey_PageDown] = GLFW_KEY_PAGE_DOWN;
    io.KeyMap[ImGuiKey_Home] = GLFW_KEY_HOME;
    io.KeyMap[ImGuiKey_End] = GLFW_KEY_END;
    io.KeyMap[ImGuiKey_Insert] = GLFW_KEY_INSERT;
    io.KeyMap[ImGuiKey_Delete] = GLFW_KEY_DELETE;
    io.KeyMap[ImGuiKey_Backspace] = GLFW_KEY_BACKSPACE;
    io.KeyMap[ImGuiKey_Space] = GLFW_KEY_SPACE;
    io.KeyMap[ImGuiKey_Enter] = GLFW_KEY_ENTER;
    io.KeyMap[ImGuiKey_Escape] = GLFW_KEY_ESCAPE;
    io.KeyMap[ImGuiKey_A] = GLFW_KEY_A;
    io.KeyMap[ImGuiKey_C] = GLFW_KEY_C;
    io.KeyMap[ImGuiKey_V] = GLFW_KEY_V;
    io.KeyMap[ImGuiKey_X] = GLFW_KEY_X;
    io.KeyMap[ImGuiKey_Y] = GLFW_KEY_Y;
    io.KeyMap[ImGuiKey_Z] = GLFW_KEY_Z;

    io.SetClipboardTextFn = ImGui_ImplCocos2dx_SetClipboardText;
    io.GetClipboardTextFn = ImGui_ImplCocos2dx_GetClipboardText;
    io.ClipboardUserData = window;
//#if CC_TARGET_PLATFORM == CC_PLATFORM_WIN32
//    io.ImeWindowHandle = (void*)glfwGetWin32Window(g_Window);
//#endif

    g_MouseCursors[ImGuiMouseCursor_Arrow] = glfwCreateStandardCursor(GLFW_ARROW_CURSOR);
    g_MouseCursors[ImGuiMouseCursor_TextInput] = glfwCreateStandardCursor(GLFW_IBEAM_CURSOR);
    g_MouseCursors[ImGuiMouseCursor_ResizeAll] = glfwCreateStandardCursor(GLFW_ARROW_CURSOR);   // FIXME: GLFW doesn't have this.
    g_MouseCursors[ImGuiMouseCursor_ResizeNS] = glfwCreateStandardCursor(GLFW_VRESIZE_CURSOR);
    g_MouseCursors[ImGuiMouseCursor_ResizeEW] = glfwCreateStandardCursor(GLFW_HRESIZE_CURSOR);
    g_MouseCursors[ImGuiMouseCursor_ResizeNESW] = glfwCreateStandardCursor(GLFW_ARROW_CURSOR);  // FIXME: GLFW doesn't have this.
    g_MouseCursors[ImGuiMouseCursor_ResizeNWSE] = glfwCreateStandardCursor(GLFW_ARROW_CURSOR);  // FIXME: GLFW doesn't have this.
    g_MouseCursors[ImGuiMouseCursor_Hand] = glfwCreateStandardCursor(GLFW_HAND_CURSOR);

    // Chain GLFW callbacks: our callbacks will call the user's previously installed callbacks, if any.
    g_PrevUserCallbackMousebutton = nullptr;
    g_PrevUserCallbackScroll = nullptr;
    g_PrevUserCallbackKey = nullptr;
    g_PrevUserCallbackChar = nullptr;
    if (install_callbacks)
    {
        g_PrevUserCallbackMousebutton = glfwSetMouseButtonCallback(window, ImGui_ImplCocos2dx_MouseButtonCallback);
        g_PrevUserCallbackScroll = glfwSetScrollCallback(window, ImGui_ImplCocos2dx_ScrollCallback);
        g_PrevUserCallbackKey = glfwSetKeyCallback(window, ImGui_ImplCocos2dx_KeyCallback);
        g_PrevUserCallbackChar = glfwSetCharCallback(window, ImGui_ImplCocos2dx_CharCallback);
    }
#else
	auto e = cocos2d::EventListenerMouse::create();
	e->onMouseDown = [](cocos2d::EventMouse* ev)
	{
		const auto b = (int)ev->getMouseButton();
		if (0 <= b && b < 5)
			g_MouseJustPressed[b] = true;
	};
	e->onMouseUp = [](cocos2d::EventMouse* ev)
	{
		const auto b = (int)ev->getMouseButton();
		if (0 <= b && b < 5)
			g_MouseJustPressed[b] = false;
	};
	e->onMouseMove = [](cocos2d::EventMouse* ev)
	{
		g_CursorPos.x = ev->getCursorX();
		g_CursorPos.y = ev->getCursorY();
	};
	e->onMouseScroll = [](cocos2d::EventMouse* ev)
	{
		auto& _io = ImGui::GetIO();
		_io.MouseWheelH += (float)ev->getScrollX();
		_io.MouseWheel += (float)ev->getScrollY();
	};
	cocos2d::Director::getInstance()->getEventDispatcher()->addEventListenerWithFixedPriority(e, 1);
	auto e2 = cocos2d::EventListenerKeyboard::create();
	using KeyCode = cocos2d::EventKeyboard::KeyCode;
	e2->onKeyPressed = [](auto k, auto ev)
	{
		auto& _io = ImGui::GetIO();
		_io.KeysDown[(int)k] = true;
		// Modifiers are not reliable across systems
		_io.KeyCtrl = _io.KeysDown[(int)KeyCode::KEY_LEFT_CTRL] || _io.KeysDown[(int)KeyCode::KEY_RIGHT_CTRL];
		_io.KeyShift = _io.KeysDown[(int)KeyCode::KEY_LEFT_SHIFT] || _io.KeysDown[(int)KeyCode::KEY_RIGHT_SHIFT];
		_io.KeyAlt = _io.KeysDown[(int)KeyCode::KEY_LEFT_ALT] || _io.KeysDown[(int)KeyCode::KEY_RIGHT_ALT];
		_io.KeySuper = _io.KeysDown[(int)KeyCode::KEY_HYPER];
	};
	e2->onKeyReleased = [](auto k, auto ev)
	{
		auto& _io = ImGui::GetIO();
		_io.KeysDown[(int)k] = false;
		// Modifiers are not reliable across systems
		_io.KeyCtrl = _io.KeysDown[(int)KeyCode::KEY_LEFT_CTRL] || _io.KeysDown[(int)KeyCode::KEY_RIGHT_CTRL];
		_io.KeyShift = _io.KeysDown[(int)KeyCode::KEY_LEFT_SHIFT] || _io.KeysDown[(int)KeyCode::KEY_RIGHT_SHIFT];
		_io.KeyAlt = _io.KeysDown[(int)KeyCode::KEY_LEFT_ALT] || _io.KeysDown[(int)KeyCode::KEY_RIGHT_ALT];
		_io.KeySuper = _io.KeysDown[(int)KeyCode::KEY_HYPER];
	};
	cocos2d::Director::getInstance()->getEventDispatcher()->addEventListenerWithFixedPriority(e2, 1);
#endif // CC_PLATFORM_PC
    return true;
}

void ImGui_ImplCocos2dx_Shutdown()
{
#ifdef CC_PLATFORM_PC
    for (ImGuiMouseCursor cursor_n = 0; cursor_n < ImGuiMouseCursor_COUNT; cursor_n++)
    {
        glfwDestroyCursor(g_MouseCursors[cursor_n]);
        g_MouseCursors[cursor_n] = nullptr;
    }
#endif // CC_PLATFORM_PC
    ImGui_ImplCocos2dx_DestroyDeviceObjects();
}

static void ImGui_ImplCocos2dx_UpdateMousePosAndButtons()
{
#ifdef CC_PLATFORM_PC
	const auto g_Window = ImGui_ImplCocos2dx_GetWindow();
    // Update buttons
    ImGuiIO& io = ImGui::GetIO();
    for (int i = 0; i < IM_ARRAYSIZE(io.MouseDown); i++)
    {
        // If a mouse press event came, always pass it as "mouse held this frame", so we don't miss click-release events that are shorter than 1 frame.
        io.MouseDown[i] = g_MouseJustPressed[i] || glfwGetMouseButton(g_Window, i) != 0;
        g_MouseJustPressed[i] = false;
    }

    // Update mouse position
    const ImVec2 mouse_pos_backup = io.MousePos;
    io.MousePos = ImVec2(-FLT_MAX, -FLT_MAX);
#ifdef __EMSCRIPTEN__
    const bool focused = true; // Emscripten
#else
    const bool focused = glfwGetWindowAttrib(g_Window, GLFW_FOCUSED) != 0;
#endif
    if (focused)
    {
        if (io.WantSetMousePos)
        {
            glfwSetCursorPos(g_Window, (double)mouse_pos_backup.x, (double)mouse_pos_backup.y);
        }
        else
        {
            double mouse_x, mouse_y;
            glfwGetCursorPos(g_Window, &mouse_x, &mouse_y);
            io.MousePos = ImVec2((float)mouse_x, (float)mouse_y);
        }
    }
#else
	// Update buttons
	ImGuiIO& io = ImGui::GetIO();
	for (int i = 0; i < IM_ARRAYSIZE(io.MouseDown); i++)
	{
		// If a mouse press event came, always pass it as "mouse held this frame", so we don't miss click-release events that are shorter than 1 frame.
		io.MouseDown[i] = g_MouseJustPressed[i];
		g_MouseJustPressed[i] = false;
	}
	// Update mouse position
	const ImVec2 mouse_pos_backup = io.MousePos;
	io.MousePos = ImVec2(-FLT_MAX, -FLT_MAX);
	if (io.WantSetMousePos)
	{
	}
	else
	{
		io.MousePos = g_CursorPos;
	}
#endif // CC_PLATFORM_PC
}

static void ImGui_ImplCocos2dx_UpdateMouseCursor()
{
#ifdef CC_PLATFORM_PC
	const auto g_Window = ImGui_ImplCocos2dx_GetWindow();
	ImGuiIO& io = ImGui::GetIO();
    if ((io.ConfigFlags & ImGuiConfigFlags_NoMouseCursorChange) || glfwGetInputMode(g_Window, GLFW_CURSOR) == GLFW_CURSOR_DISABLED)
        return;

    ImGuiMouseCursor imgui_cursor = ImGui::GetMouseCursor();
    if (imgui_cursor == ImGuiMouseCursor_None || io.MouseDrawCursor)
    {
        // Hide OS mouse cursor if imgui is drawing it or if it wants no cursor
        glfwSetInputMode(g_Window, GLFW_CURSOR, GLFW_CURSOR_HIDDEN);
    }
    else
    {
        // Show OS mouse cursor
        // FIXME-PLATFORM: Unfocused windows seems to fail changing the mouse cursor with GLFW 3.2, but 3.3 works here.
        glfwSetCursor(g_Window, g_MouseCursors[imgui_cursor] ? g_MouseCursors[imgui_cursor] : g_MouseCursors[ImGuiMouseCursor_Arrow]);
        glfwSetInputMode(g_Window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
    }
#endif // CC_PLATFORM_PC
}

static void ImGui_ImplCocos2dx_UpdateGamepads()
{
    ImGuiIO& io = ImGui::GetIO();
    memset(io.NavInputs, 0, sizeof(io.NavInputs));
    if ((io.ConfigFlags & ImGuiConfigFlags_NavEnableGamepad) == 0)
        return;

    // Update gamepad inputs
    int axes_count = 0, buttons_count = 0;
#ifdef CC_PLATFORM_PC
    #define MAP_BUTTON(NAV_NO, BUTTON_NO)       {\
    	if (buttons_count > BUTTON_NO && buttons[BUTTON_NO] == GLFW_PRESS) io.NavInputs[NAV_NO] = 1.0f; }
    #define MAP_ANALOG(NAV_NO, AXIS_NO, V0, V1) {\
    	float v = (axes_count > AXIS_NO) ? axes[AXIS_NO] : V0;\
    	v = (v - V0) / (V1 - V0);\
    	if (v > 1.0f) v = 1.0f;\
    	if (io.NavInputs[NAV_NO] < v) io.NavInputs[NAV_NO] = v; }
    const float* axes = glfwGetJoystickAxes(GLFW_JOYSTICK_1, &axes_count);
    const unsigned char* buttons = glfwGetJoystickButtons(GLFW_JOYSTICK_1, &buttons_count);
    MAP_BUTTON(ImGuiNavInput_Activate,   0);     // Cross / A
    MAP_BUTTON(ImGuiNavInput_Cancel,     1);     // Circle / B
    MAP_BUTTON(ImGuiNavInput_Menu,       2);     // Square / X
    MAP_BUTTON(ImGuiNavInput_Input,      3);     // Triangle / Y
    MAP_BUTTON(ImGuiNavInput_DpadLeft,   13);    // D-Pad Left
    MAP_BUTTON(ImGuiNavInput_DpadRight,  11);    // D-Pad Right
    MAP_BUTTON(ImGuiNavInput_DpadUp,     10);    // D-Pad Up
    MAP_BUTTON(ImGuiNavInput_DpadDown,   12);    // D-Pad Down
    MAP_BUTTON(ImGuiNavInput_FocusPrev,  4);     // L1 / LB
    MAP_BUTTON(ImGuiNavInput_FocusNext,  5);     // R1 / RB
    MAP_BUTTON(ImGuiNavInput_TweakSlow,  4);     // L1 / LB
    MAP_BUTTON(ImGuiNavInput_TweakFast,  5);     // R1 / RB
    MAP_ANALOG(ImGuiNavInput_LStickLeft, 0,  -0.3f,  -0.9f);
    MAP_ANALOG(ImGuiNavInput_LStickRight,0,  +0.3f,  +0.9f);
    MAP_ANALOG(ImGuiNavInput_LStickUp,   1,  +0.3f,  +0.9f);
    MAP_ANALOG(ImGuiNavInput_LStickDown, 1,  -0.3f,  -0.9f);
    #undef MAP_BUTTON
    #undef MAP_ANALOG
#else
	//TODO:
#endif // CC_PLATFORM_PC
    if (axes_count > 0 && buttons_count > 0)
        io.BackendFlags |= ImGuiBackendFlags_HasGamepad;
    else
        io.BackendFlags &= ~ImGuiBackendFlags_HasGamepad;
}

void ImGui_ImplCocos2dx_NewFrame()
{
    if (!g_FontTexture)
        ImGui_ImplCocos2dx_CreateDeviceObjects();

    ImGuiIO& io = ImGui::GetIO();
    IM_ASSERT(io.Fonts->IsBuilt() &&
		"Font atlas not built! Missing call to renderer _NewFrame() function?");

    // Setup display size (every frame to accommodate for window resizing)
    int w, h;
    int buffer_w, buffer_h;
#ifdef CC_PLATFORM_PC
	const auto g_Window = ImGui_ImplCocos2dx_GetWindow();
	glfwGetWindowSize(g_Window, &w, &h);
    glfwGetFramebufferSize(g_Window, &buffer_w, &buffer_h);
#else
	auto glv = cocos2d::Director::getInstance()->getOpenGLView();
	const auto frame_size = glv->getFrameSize();
	//const auto buffer_size = glv->getDesignResolutionSize();
	w = buffer_w = frame_size.width;
	h = buffer_h = frame_size.height;
#endif // CC_PLATFORM_PC
    io.DisplaySize = ImVec2((float)w, (float)h);
    if (w > 0 && h > 0)
        io.DisplayFramebufferScale = ImVec2((float)buffer_w / w, (float)buffer_h / h);

    // Setup time step
	io.DeltaTime = Director::getInstance()->getDeltaTime();

    ImGui_ImplCocos2dx_UpdateMousePosAndButtons();
    ImGui_ImplCocos2dx_UpdateMouseCursor();

    // Update game controllers (if enabled and available)
    ImGui_ImplCocos2dx_UpdateGamepads();

    ImGui::NewFrame();
}
