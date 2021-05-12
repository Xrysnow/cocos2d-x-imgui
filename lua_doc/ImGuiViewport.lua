--------------------------------
-- @module ImGuiViewport
-- @parent_module imgui

---@class imgui.ImGuiViewport
local ImGuiViewport = {}
imgui.ImGuiViewport = ImGuiViewport
--------------------------------

--- 
---@return ImVec2
function ImGuiViewport:getCenter()
end

--------------------------------

--- 
---@return ImVec2
function ImGuiViewport:getWorkCenter()
end

--------------------------------

---  Unique identifier for the viewport 
---@type number
ImGuiViewport.ID = nil

--------------------------------

---  See ImGuiViewportFlags_ 
---@type number
ImGuiViewport.Flags = nil

--------------------------------

---  Main Area: Position of the viewport (Dear ImGui coordinates are the same as OS desktop/native coordinates) 
---@type ImVec2
ImGuiViewport.Pos = nil

--------------------------------

---  Main Area: Size of the viewport. 
---@type ImVec2
ImGuiViewport.Size = nil

--------------------------------

---  Work Area: Position of the viewport minus task bars, menus bars, status bars (>= Pos) 
---@type ImVec2
ImGuiViewport.WorkPos = nil

--------------------------------

---  Work Area: Size of the viewport minus task bars, menu bars, status bars (<= Size) 
---@type ImVec2
ImGuiViewport.WorkSize = nil

--------------------------------

---  1.0f = 96 DPI = No extra scale. 
---@type number
ImGuiViewport.DpiScale = nil

--------------------------------

---  (Advanced) 0: no parent. Instruct the platform backend to setup a parent/child relationship between platform windows. 
---@type number
ImGuiViewport.ParentViewportId = nil

--------------------------------

---  Platform window requested closure (e.g. window was moved by the OS / host window manager, e.g. pressing ALT-F4) 
---@type boolean
ImGuiViewport.PlatformRequestClose = nil

--------------------------------

---  Platform window requested move (e.g. window was moved by the OS / host window manager, authoritative position will be OS window position) 
---@type boolean
ImGuiViewport.PlatformRequestMove = nil

--------------------------------

---  Platform window requested resize (e.g. window was resized by the OS / host window manager, authoritative size will be OS window size) 
---@type boolean
ImGuiViewport.PlatformRequestResize = nil



return nil
