--------------------------------
-- patch 20190602
--------------------------------

--------------------------------
-- @module ImGuiViewport
-- @parent_module imgui

---@class imgui.ImGuiViewport
local ImGuiViewport = {}
imgui.ImGuiViewport = ImGuiViewport
--------------------------------

---  Unique identifier for the viewport 
---@type number
ImGuiViewport.ID = nil

--------------------------------

---  See ImGuiViewportFlags_ 
---@type number
ImGuiViewport.Flags = nil

--------------------------------

---  Position of viewport both in imgui space and in OS desktop/native space 
---@type ImVec2
ImGuiViewport.Pos = nil

--------------------------------

---  Size of viewport in pixel 
---@type ImVec2
ImGuiViewport.Size = nil

--------------------------------

---  1.0f = 96 DPI = No extra scale 
---@type number
ImGuiViewport.DpiScale = nil

--------------------------------

---  (Advanced) 0: no parent. Instruct the platform back-end to setup a parent/child relationship between platform windows. 
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
