#include "CCImGuiLayer.h"
#include "imgui/imgui.h"
#include "imgui_impl_cocos2dx.h"
#include "CCIMGUI.h"

using namespace cocos2d;

ImGuiLayer* ImGuiLayer::create()
{
	ImGuiLayer* pRet = new(std::nothrow) ImGuiLayer();
	if (pRet && pRet->init())
	{
		pRet->autorelease();
		return pRet;
	}
	delete pRet;
	return nullptr;
}

bool ImGuiLayer::init()
{
    // super init first
	if (!Layer::init())
    {
        return false;
    }

    setGLProgram(GLProgramCache::getInstance()->getGLProgram(GLProgram::SHADER_NAME_POSITION_COLOR));

	// note: when at the first click to focus the window, this will not take effect
    auto listener = EventListenerTouchOneByOne::create();
    listener->setSwallowTouches(true);
    listener->onTouchBegan = [](Touch* touch, Event*) -> bool {
        return ImGui::IsAnyWindowHovered();
    };
    getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);
    return true;
}

void ImGuiLayer::visit(Renderer *renderer, const Mat4 &parentTransform, uint32_t parentFlags)
{
    Layer::visit(renderer, parentTransform, parentFlags);
    _command.init(_globalZOrder);
    _command.func = CC_CALLBACK_0(ImGuiLayer::onDraw, this);
    Director::getInstance()->getRenderer()->addCommand(&_command);
}

void ImGuiLayer::onDraw()
{
    getGLProgram()->use();

    // create frame
    ImGui_ImplCocos2dx_NewFrame();

    // draw all gui
    CCIMGUI::getInstance()->update();

    // render
    glUseProgram(0);
    ImGui::Render();
    ImGui_ImplCocos2dx_RenderDrawData(ImGui::GetDrawData());
}
