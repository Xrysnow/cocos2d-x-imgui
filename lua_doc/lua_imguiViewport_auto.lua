------------------------------
--- Tag: imguiViewport
--- Date: 2023-03-10
------------------------------

local ImGuiViewportFlags = {
	None = 0,
	IsPlatformWindow = 1,
	IsPlatformMonitor = 2,
	OwnedByApp = 4,
	NoDecoration = 8,
	NoTaskBarIcon = 16,
	NoFocusOnAppearing = 32,
	NoFocusOnClick = 64,
	NoInputs = 128,
	NoRendererClear = 256,
	TopMost = 512,
	Minimized = 1024,
	NoAutoMerge = 2048,
	CanHostOtherWindows = 4096,
}
---
---@class imgui.ImGuiViewportFlags
imgui.ImGuiViewportFlags = ImGuiViewportFlags


---@class imgui.ImGuiViewport
local ImGuiViewport = {}
imgui.ImGuiViewport = ImGuiViewport

--- 1.0f = 96 DPI = No extra scale.
---@type number (float)
ImGuiViewport.DpiScale = nil

--- See ImGuiViewportFlags_
---@type ImGuiViewportFlags (ImGuiViewportFlags)
ImGuiViewport.Flags = nil

--- Unique identifier for the viewport
---@type number (ImGuiID)
ImGuiViewport.ID = nil

--- (Advanced) 0: no parent. Instruct the platform backend to setup a parentchild relationship between platform windows.
---@type number (ImGuiID)
ImGuiViewport.ParentViewportId = nil

--- Platform window requested closure (e.g. window was moved by the OS host window manager, e.g. pressing ALT-F4)
---@type boolean (bool)
ImGuiViewport.PlatformRequestClose = nil

--- Platform window requested move (e.g. window was moved by the OS host window manager, authoritative position will be OS window position)
---@type boolean (bool)
ImGuiViewport.PlatformRequestMove = nil

--- Platform window requested resize (e.g. window was resized by the OS host window manager, authoritative size will be OS window size)
---@type boolean (bool)
ImGuiViewport.PlatformRequestResize = nil

--- Platform window has been created (Platform_CreateWindow() has been called). This is false during the first frame where a viewport is being created.
---@type boolean (bool)
ImGuiViewport.PlatformWindowCreated = nil

--- Main Area: Position of the viewport (Dear ImGui coordinates are the same as OS desktopnative coordinates)
---@type ImVec2 (ImVec2)
ImGuiViewport.Pos = nil

--- Main Area: Size of the viewport.
---@type ImVec2 (ImVec2)
ImGuiViewport.Size = nil

--- Work Area: Position of the viewport minus task bars, menus bars, status bars (>= Pos)
---@type ImVec2 (ImVec2)
ImGuiViewport.WorkPos = nil

--- Work Area: Size of the viewport minus task bars, menu bars, status bars (<= Size)
---@type ImVec2 (ImVec2)
ImGuiViewport.WorkSize = nil

---@return ImVec2 @(ImVec2)
function ImGuiViewport:getCenter()
end

---@return ImVec2 @(ImVec2)
function ImGuiViewport:getWorkCenter()
end

