--------------------------------
-- @module ImGuiIO
-- @parent_module imgui

---@class imgui.ImGuiIO
local ImGuiIO = {}
imgui.ImGuiIO = ImGuiIO
--------------------------------

---  Queue new character input 
---@param c number
---@return imgui.ImGuiIO
function ImGuiIO:addInputCharacter(c)
end

--------------------------------

---  Queue new character input from an UTF-16 character, it can be a surrogate 
---@param c number
---@return imgui.ImGuiIO
function ImGuiIO:addInputCharacterUTF16(c)
end

--------------------------------

---  Queue new characters input from an UTF-8 string 
---@param str string
---@return imgui.ImGuiIO
function ImGuiIO:addInputCharactersUTF8(str)
end

--------------------------------

---  Clear the text input buffer manually 
---@return imgui.ImGuiIO
function ImGuiIO:clearInputCharacters()
end

--------------------------------

---  See ImGuiConfigFlags_ enum. Set by user/application. Gamepad/keyboard navigation options, etc.
--- = 0 
---@type number
ImGuiIO.ConfigFlags = nil

--------------------------------

---  See ImGuiBackendFlags_ enum. Set by backend (imgui_impl_xxx files or custom backend) to communicate features supported by the backend.
--- = 0 
---@type number
ImGuiIO.BackendFlags = nil

--------------------------------

---  Main display size, in pixels.
--- <unset>         
---@type ImVec2
ImGuiIO.DisplaySize = nil

--------------------------------

---  Time elapsed since last frame, in seconds.
--- = 1.0f/60.0f    
---@type number
ImGuiIO.DeltaTime = nil

--------------------------------

---  Minimum time between saving positions/sizes to .ini file, in seconds.
--- = 5.0f          
---@type number
ImGuiIO.IniSavingRate = nil

--------------------------------

---  Path to .ini file. Set NULL to disable automatic .ini loading/saving, if e.g. you want to manually load/save from memory.
--- = "imgui.ini"   
---@type string
ImGuiIO.IniFilename = nil

--------------------------------

---  Path to .log file (default parameter to ImGui::LogToFile when no file is specified).
--- = "imgui_log.txt" 
---@type string
ImGuiIO.LogFilename = nil

--------------------------------

---  Time for a double-click, in seconds.
--- = 0.30f         
---@type number
ImGuiIO.MouseDoubleClickTime = nil

--------------------------------

---  Distance threshold to stay in to validate a double-click, in pixels.
--- = 6.0f          
---@type number
ImGuiIO.MouseDoubleClickMaxDist = nil

--------------------------------

---  Distance threshold before considering we are dragging.
--- = 6.0f          
---@type number
ImGuiIO.MouseDragThreshold = nil

--------------------------------

---  When holding a key/button, time before it starts repeating, in seconds (for buttons in Repeat mode, etc.).
--- = 0.250f        
---@type number
ImGuiIO.KeyRepeatDelay = nil

--------------------------------

---  When holding a key/button, rate at which it repeats, in seconds.
--- = 0.050f        
---@type number
ImGuiIO.KeyRepeatRate = nil

--------------------------------

---  Load, rasterize and pack one or more fonts into a single texture.
--- <auto>          
---@type imgui.ImFontAtlas
ImGuiIO.Fonts = nil

--------------------------------

---  Global scale all fonts
--- = 1.0f          
---@type number
ImGuiIO.FontGlobalScale = nil

--------------------------------

---  Allow user scaling text of individual window with CTRL+Wheel.
--- = false         
---@type boolean
ImGuiIO.FontAllowUserScaling = nil

--------------------------------

---  Font to use on NewFrame(). Use NULL to uses Fonts->Fonts[0].
--- = NULL          
---@type imgui.ImFont
ImGuiIO.FontDefault = nil

--------------------------------

---  For retina display or other situations where window coordinates are different from framebuffer coordinates. This generally ends up in ImDrawData::FramebufferScale.
--- = (1, 1)        
---@type ImVec2
ImGuiIO.DisplayFramebufferScale = nil

--------------------------------

---  Simplified docking mode: disable window splitting, so docking is limited to merging multiple windows together into tab-bars.
--- = false 
---@type boolean
ImGuiIO.ConfigDockingNoSplit = nil

--------------------------------

---  Enable docking with holding Shift key (reduce visual noise, allows dropping in wider space)
--- = false 
---@type boolean
ImGuiIO.ConfigDockingWithShift = nil

--------------------------------

--- [BETA] [FIXME: This currently creates regression with auto-sizing and general overhead] Make every single floating window display within a docking node.
--- = false
---@type boolean
ImGuiIO.ConfigDockingAlwaysTabBar = nil

--------------------------------

---  [BETA] Make window or viewport transparent when docking and only display docking boxes on the target viewport. Useful if rendering of multiple viewport cannot be synced. Best used with ConfigViewportsNoAutoMerge.
--- = false 
---@type boolean
ImGuiIO.ConfigDockingTransparentPayload = nil

--------------------------------

---  Set to make all floating imgui windows always create their own viewport. Otherwise, they are merged into the main host viewports when overlapping it.
--- = false 
---@type boolean
ImGuiIO.ConfigViewportsNoAutoMerge = nil

--------------------------------

---  Disable default OS task bar icon flag for secondary viewports. When a viewport doesn't want a task bar icon, ImGuiViewportFlags_NoTaskBarIcon will be set on it.
--- = false 
---@type boolean
ImGuiIO.ConfigViewportsNoTaskBarIcon = nil

--------------------------------

---  Disable default OS window decoration flag for secondary viewports. When a viewport doesn't want window decorations, ImGuiViewportFlags_NoDecoration will be set on it. Enabling decoration can create subsequent issues at OS levels (e.g. minimum window size).
--- = true 
---@type boolean
ImGuiIO.ConfigViewportsNoDecoration = nil

--------------------------------

---  Disable default OS parenting to main viewport for secondary viewports. By default, viewports are marked with ParentViewportId = <main_viewport>, expecting the platform backend to setup a parent/child relationship between the OS windows (some backend may ignore this). Set to true if you want the default to be 0, then all viewports will be top-level OS windows.
--- = false 
---@type boolean
ImGuiIO.ConfigViewportsNoDefaultParent = nil

--------------------------------

---  Request ImGui to draw a mouse cursor for you (if you are on a platform without a mouse cursor). Cannot be easily renamed to 'io.ConfigXXX' because this is frequently used by backend implementations.
--- = false         
---@type boolean
ImGuiIO.MouseDrawCursor = nil

--------------------------------

---  OS X style: Text editing cursor movement using Alt instead of Ctrl, Shortcuts using Cmd/Super instead of Ctrl, Line/Text Start and End using Cmd+Arrows instead of Home/End, Double click selects by word instead of selecting whole text, Multi-selection in lists uses Cmd/Super instead of Ctrl (was called io.OptMacOSXBehaviors prior to 1.63)
--- = defined(__APPLE__) 
---@type boolean
ImGuiIO.ConfigMacOSXBehaviors = nil

--------------------------------

---  Set to false to disable blinking cursor, for users who consider it distracting. (was called: io.OptCursorBlink prior to 1.63)
--- = true          
---@type boolean
ImGuiIO.ConfigInputTextCursorBlink = nil

--------------------------------

---  Enable resizing of windows from their edges and from the lower-left corner. This requires (io.BackendFlags & ImGuiBackendFlags_HasMouseCursors) because it needs mouse cursor feedback. (This used to be a per-window ImGuiWindowFlags_ResizeFromAnySide flag)
--- = true          
---@type boolean
ImGuiIO.ConfigWindowsResizeFromEdges = nil

--------------------------------

---  [BETA] Set to true to only allow moving windows when clicked+dragged from the title bar. Windows without a title bar are not affected.
--- = false      
---@type boolean
ImGuiIO.ConfigWindowsMoveFromTitleBarOnly = nil

--------------------------------

--- [BETA] Free transient windows/tables memory buffers when unused for given amount of time. Set to -1.0f to disable.
--- = 60.0f
---@type number
ImGuiIO.ConfigMemoryCompactTimer = nil

--------------------------------

---  = NULL 
---@type string
ImGuiIO.BackendPlatformName = nil

--------------------------------

---  = NULL 
---@type string
ImGuiIO.BackendRendererName = nil

--------------------------------

---  Mouse position, in pixels. Set to ImVec2(-FLT_MAX, -FLT_MAX) if mouse is unavailable (on another screen, etc.) 
---@type ImVec2
ImGuiIO.MousePos = nil

--------------------------------

---  Mouse wheel Vertical: 1 unit scrolls about 5 lines text. 
---@type number
ImGuiIO.MouseWheel = nil

--------------------------------

---  Mouse wheel Horizontal. Most users don't have a mouse with an horizontal wheel, may not be filled by all backends. 
---@type number
ImGuiIO.MouseWheelH = nil

--------------------------------

---  (Optional) When using multiple viewports: viewport the OS mouse cursor is hovering _IGNORING_ viewports with the ImGuiViewportFlags_NoInputs flag, and _REGARDLESS_ of whether another viewport is focused. Set io.BackendFlags |= ImGuiBackendFlags_HasMouseHoveredViewport if you can provide this info. If you don't imgui will infer the value using the rectangles and last focused time of the viewports it knows about (ignoring other OS windows). 
---@type number
ImGuiIO.MouseHoveredViewport = nil

--------------------------------

---  Keyboard modifier pressed: Control 
---@type boolean
ImGuiIO.KeyCtrl = nil

--------------------------------

---  Keyboard modifier pressed: Shift 
---@type boolean
ImGuiIO.KeyShift = nil

--------------------------------

---  Keyboard modifier pressed: Alt 
---@type boolean
ImGuiIO.KeyAlt = nil

--------------------------------

---  Keyboard modifier pressed: Cmd/Super/Windows 
---@type boolean
ImGuiIO.KeySuper = nil

--------------------------------

---  Set when Dear ImGui will use mouse inputs, in this case do not dispatch them to your main game/application (either way, always pass on mouse inputs to imgui). (e.g. unclicked mouse is hovering over an imgui window, widget is active, mouse was clicked over an imgui window, etc.). 
---@type boolean
ImGuiIO.WantCaptureMouse = nil

--------------------------------

---  Set when Dear ImGui will use keyboard inputs, in this case do not dispatch them to your main game/application (either way, always pass keyboard inputs to imgui). (e.g. InputText active, or an imgui window is focused and navigation is enabled, etc.). 
---@type boolean
ImGuiIO.WantCaptureKeyboard = nil

--------------------------------

---  Mobile/console: when set, you may display an on-screen keyboard. This is set by Dear ImGui when it wants textual keyboard input to happen (e.g. when a InputText widget is active). 
---@type boolean
ImGuiIO.WantTextInput = nil

--------------------------------

---  MousePos has been altered, backend should reposition mouse on next frame. Rarely used! Set only when ImGuiConfigFlags_NavEnableSetMousePos flag is enabled. 
---@type boolean
ImGuiIO.WantSetMousePos = nil

--------------------------------

---  When manual .ini load/save is active (io.IniFilename == NULL), this will be set to notify your application that you can call SaveIniSettingsToMemory() and save yourself. Important: clear io.WantSaveIniSettings yourself after saving! 
---@type boolean
ImGuiIO.WantSaveIniSettings = nil

--------------------------------

---  Keyboard/Gamepad navigation is currently allowed (will handle ImGuiKey_NavXXX events) = a window is focused and it doesn't use the ImGuiWindowFlags_NoNavInputs flag. 
---@type boolean
ImGuiIO.NavActive = nil

--------------------------------

---  Keyboard/Gamepad navigation is visible and allowed (will handle ImGuiKey_NavXXX events). 
---@type boolean
ImGuiIO.NavVisible = nil

--------------------------------

---  Application framerate estimate, in frame per second. Solely for convenience. Rolling average estimation based on io.DeltaTime over 120 frames. 
---@type number
ImGuiIO.Framerate = nil

--------------------------------

---  Vertices output during last call to Render() 
---@type number
ImGuiIO.MetricsRenderVertices = nil

--------------------------------

---  Indices output during last call to Render() = number of triangles * 3 
---@type number
ImGuiIO.MetricsRenderIndices = nil

--------------------------------

---  Number of visible windows 
---@type number
ImGuiIO.MetricsRenderWindows = nil

--------------------------------

---  Number of active windows 
---@type number
ImGuiIO.MetricsActiveWindows = nil

--------------------------------

---  Number of active allocations, updated by MemAlloc/MemFree based on current context. May be off if you have multiple imgui contexts. 
---@type number
ImGuiIO.MetricsActiveAllocations = nil

--------------------------------

---  Mouse delta. Note that this is zero if either current or previous position are invalid (-FLT_MAX,-FLT_MAX), so a disappearing/reappearing mouse won't have a huge delta. 
---@type ImVec2
ImGuiIO.MouseDelta = nil



return nil
