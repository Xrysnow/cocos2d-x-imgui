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
function ImGuiViewport:getWorkPos()
end

--------------------------------

--- 
---@return ImVec2
function ImGuiViewport:getWorkSize()
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

---  Main Area: Position of the viewport (the imgui coordinates are the same as OS desktop/native coordinates) 
---@type ImVec2
ImGuiViewport.Pos = nil

--------------------------------

---  Main Area: Size of the viewport. 
---@type ImVec2
ImGuiViewport.Size = nil

--------------------------------

---  Work Area: Offset from Pos to top-left corner of Work Area. Generally (0,0) or (0,+main_menu_bar_height). Work Area is Full Area but without menu-bars/status-bars (so WorkArea always fit inside Pos/Size!) 
---@type ImVec2
ImGuiViewport.WorkOffsetMin = nil

--------------------------------

---  Work Area: Offset from Pos+Size to bottom-right corner of Work Area. Generally (0,0) or (0,-status_bar_height). 
---@type ImVec2
ImGuiViewport.WorkOffsetMax = nil

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
