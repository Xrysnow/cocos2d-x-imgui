------------------------------
--- Tag: imguiIO
--- Date: 2023-03-10
------------------------------


---@class imgui.ImGuiIO
local ImGuiIO = {}
imgui.ImGuiIO = ImGuiIO

--- Only modify via SetAppAcceptingEvents()
---@type boolean (bool)
ImGuiIO.AppAcceptingEvents = nil

--- Only modify via AddFocusEvent()
---@type boolean (bool)
ImGuiIO.AppFocusLost = nil

--- 
--- See ImGuiBackendFlags_ enum. Set by backend (imgui_impl_xxx files or custom backend) to communicate features supported by the backend.
--- = 0
---@type ImGuiBackendFlags (ImGuiBackendFlags)
ImGuiIO.BackendFlags = nil

--- = NULL
---@type string (const char*)
ImGuiIO.BackendPlatformName = nil

--- = NULL
---@type string (const char*)
ImGuiIO.BackendRendererName = nil

--- -1: unknown, 0: using AddKeyEvent(), 1: using legacy io.KeysDown[]
---@type number (ImS8)
ImGuiIO.BackendUsingLegacyKeyArrays = nil

--- 0: using AddKeyAnalogEvent(), 1: writing to legacy io.NavInputs[] directly
---@type boolean (bool)
ImGuiIO.BackendUsingLegacyNavInputArray = nil

--- 
--- [BETA] [FIXME: This currently creates regression with auto-sizing and general overhead] Make every single floating window display within a docking node.
--- = false
---@type boolean (bool)
ImGuiIO.ConfigDockingAlwaysTabBar = nil

--- 
--- Simplified docking mode: disable window splitting, so docking is limited to merging multiple windows together into tab-bars.
--- = false
---@type boolean (bool)
ImGuiIO.ConfigDockingNoSplit = nil

--- 
--- [BETA] Make window or viewport transparent when docking and only display docking boxes on the target viewport. Useful if rendering of multiple viewport cannot be synced. Best used with ConfigViewportsNoAutoMerge.
--- = false
---@type boolean (bool)
ImGuiIO.ConfigDockingTransparentPayload = nil

--- 
--- Enable docking with holding Shift key (reduce visual noise, allows dropping in wider space)
--- = false
---@type boolean (bool)
ImGuiIO.ConfigDockingWithShift = nil

--- 
--- [BETA] Enable turning DragXXX widgets into text input with a simple mouse click-release (without moving). Not desirable on devices without a keyboard.
--- = false
---@type boolean (bool)
ImGuiIO.ConfigDragClickToInputText = nil

--- 
--- See ImGuiConfigFlags_ enum. Set by userapplication. Gamepadkeyboard navigation options, etc.
--- = 0
---@type ImGuiConfigFlags (ImGuiConfigFlags)
ImGuiIO.ConfigFlags = nil

--- 
--- Enable blinking cursor (optional as some users consider it to be distracting).
--- = true
---@type boolean (bool)
ImGuiIO.ConfigInputTextCursorBlink = nil

--- 
--- [BETA] Pressing Enter will keep item active and select contents (single-line only).
--- = false
---@type boolean (bool)
ImGuiIO.ConfigInputTextEnterKeepActive = nil

--- 
--- Enable input queue trickling: some types of events submitted during the same frame (e.g. button down + up) will be spread over multiple frames, improving interactions with low framerates.
--- = true
---@type boolean (bool)
ImGuiIO.ConfigInputTrickleEventQueue = nil

--- 
--- OS X style: Text editing cursor movement using Alt instead of Ctrl, Shortcuts using CmdSuper instead of Ctrl, LineText Start and End using Cmd+Arrows instead of HomeEnd, Double click selects by word instead of selecting whole text, Multi-selection in lists uses CmdSuper instead of Ctrl.
--- = defined(__APPLE__)
---@type boolean (bool)
ImGuiIO.ConfigMacOSXBehaviors = nil

--- 
--- Timer (in seconds) to free transient windowstables memory buffers when unused. Set to -1.0f to disable.
--- = 60.0f
---@type number (float)
ImGuiIO.ConfigMemoryCompactTimer = nil

--- 
--- Set to make all floating imgui windows always create their own viewport. Otherwise, they are merged into the main host viewports when overlapping it. May also set ImGuiViewportFlags_NoAutoMerge on individual viewport.
--- = false;
---@type boolean (bool)
ImGuiIO.ConfigViewportsNoAutoMerge = nil

--- 
--- Disable default OS window decoration flag for secondary viewports. When a viewport doesn't want window decorations, ImGuiViewportFlags_NoDecoration will be set on it. Enabling decoration can create subsequent issues at OS levels (e.g. minimum window size).
--- = true
---@type boolean (bool)
ImGuiIO.ConfigViewportsNoDecoration = nil

--- 
--- Disable default OS parenting to main viewport for secondary viewports. By default, viewports are marked with ParentViewportId = <main_viewport>, expecting the platform backend to setup a parentchild relationship between the OS windows (some backend may ignore this). Set to true if you want the default to be 0, then all viewports will be top-level OS windows.
--- = false
---@type boolean (bool)
ImGuiIO.ConfigViewportsNoDefaultParent = nil

--- 
--- Disable default OS task bar icon flag for secondary viewports. When a viewport doesn't want a task bar icon, ImGuiViewportFlags_NoTaskBarIcon will be set on it.
--- = false
---@type boolean (bool)
ImGuiIO.ConfigViewportsNoTaskBarIcon = nil

--- 
--- Enable allowing to move windows only when clicking on their title bar. Does not apply to windows without a title bar.
--- = false
---@type boolean (bool)
ImGuiIO.ConfigWindowsMoveFromTitleBarOnly = nil

--- 
--- Enable resizing of windows from their edges and from the lower-left corner. This requires (io.BackendFlags & ImGuiBackendFlags_HasMouseCursors) because it needs mouse cursor feedback. (This used to be a per-window ImGuiWindowFlags_ResizeFromAnySide flag)
--- = true
---@type boolean (bool)
ImGuiIO.ConfigWindowsResizeFromEdges = nil

--- 
--- Time elapsed since last frame, in seconds. May change every frame.
--- = 1.0f60.0f
---@type number (float)
ImGuiIO.DeltaTime = nil

--- 
--- For retina display or other situations where window coordinates are different from framebuffer coordinates. This generally ends up in ImDrawData::FramebufferScale.
--- = (1, 1)
---@type ImVec2 (ImVec2)
ImGuiIO.DisplayFramebufferScale = nil

--- 
--- Main display size, in pixels (generally == GetMainViewport()->Size). May change every frame.
--- <unset>
---@type ImVec2 (ImVec2)
ImGuiIO.DisplaySize = nil

--- 
--- Allow user scaling text of individual window with CTRL+Wheel.
--- = false
---@type boolean (bool)
ImGuiIO.FontAllowUserScaling = nil

--- 
--- Font to use on NewFrame(). Use NULL to uses Fonts->Fonts[0].
--- = NULL
---@type ImFont (ImFont*)
ImGuiIO.FontDefault = nil

--- 
--- Global scale all fonts
--- = 1.0f
---@type number (float)
ImGuiIO.FontGlobalScale = nil

--- 
--- Font atlas: load, rasterize and pack one or more fonts into a single texture.
--- <auto>
---@type ImFontAtlas (ImFontAtlas*)
ImGuiIO.Fonts = nil

--- Estimate of application framerate (rolling average over 60 frames, based on io.DeltaTime), in frame per second. Solely for convenience. Slow applications may not want to use a moving average or may want to reset underlying buffers occasionally.
---@type number (float)
ImGuiIO.Framerate = nil

--- 
--- Delay on hovering before IsItemHovered(ImGuiHoveredFlags_DelayNormal) returns true.
--- = 0.30 sec
---@type number (float)
ImGuiIO.HoverDelayNormal = nil

--- 
--- Delay on hovering before IsItemHovered(ImGuiHoveredFlags_DelayShort) returns true.
--- = 0.10 sec
---@type number (float)
ImGuiIO.HoverDelayShort = nil

--- 
--- Path to .ini file (important: default "imgui.ini" is relative to current working dir!). Set NULL to disable automatic .ini loadingsaving or if you want to manually call LoadIniSettingsXXX() SaveIniSettingsXXX() functions.
--- = "imgui.ini"
---@type string (const char*)
ImGuiIO.IniFilename = nil

--- 
--- Minimum time between saving positionssizes to .ini file, in seconds.
--- = 5.0f
---@type number (float)
ImGuiIO.IniSavingRate = nil

--- For AddInputCharacterUTF16()
---@type number (ImWchar16)
ImGuiIO.InputQueueSurrogate = nil

--- Keyboard modifier down: Alt
---@type boolean (bool)
ImGuiIO.KeyAlt = nil

--- Keyboard modifier down: Control
---@type boolean (bool)
ImGuiIO.KeyCtrl = nil

--- Key mods flags (any of ImGuiMod_CtrlImGuiMod_ShiftImGuiMod_AltImGuiMod_Super flags, same as io.KeyCtrlKeyShiftKeyAltKeySuper but merged into flags). Read-only, updated by NewFrame()
---@type ImGuiKeyChord (ImGuiKeyChord)
ImGuiIO.KeyMods = nil

--- 
--- When holding a keybutton, time before it starts repeating, in seconds (for buttons in Repeat mode, etc.).
--- = 0.275f
---@type number (float)
ImGuiIO.KeyRepeatDelay = nil

--- 
--- When holding a keybutton, rate at which it repeats, in seconds.
--- = 0.050f
---@type number (float)
ImGuiIO.KeyRepeatRate = nil

--- Keyboard modifier down: Shift
---@type boolean (bool)
ImGuiIO.KeyShift = nil

--- Keyboard modifier down: CmdSuperWindows
---@type boolean (bool)
ImGuiIO.KeySuper = nil

--- = "imgui_log.txt" Path to .log file (default parameter to ImGui::LogToFile when no file is specified).
---@type string (const char*)
ImGuiIO.LogFilename = nil

--- Number of active allocations, updated by MemAllocMemFree based on current context. May be off if you have multiple imgui contexts.
---@type number (int)
ImGuiIO.MetricsActiveAllocations = nil

--- Number of active windows
---@type number (int)
ImGuiIO.MetricsActiveWindows = nil

--- Indices output during last call to Render() = number of triangles * 3
---@type number (int)
ImGuiIO.MetricsRenderIndices = nil

--- Vertices output during last call to Render()
---@type number (int)
ImGuiIO.MetricsRenderVertices = nil

--- Number of visible windows
---@type number (int)
ImGuiIO.MetricsRenderWindows = nil

--- Mouse delta. Note that this is zero if either current or previous position are invalid (-FLT_MAX,-FLT_MAX), so a disappearingreappearing mouse won't have a huge delta.
---@type ImVec2 (ImVec2)
ImGuiIO.MouseDelta = nil

--- 
--- Distance threshold to stay in to validate a double-click, in pixels.
--- = 6.0f
---@type number (float)
ImGuiIO.MouseDoubleClickMaxDist = nil

--- 
--- Time for a double-click, in seconds.
--- = 0.30f
---@type number (float)
ImGuiIO.MouseDoubleClickTime = nil

--- 
--- Distance threshold before considering we are dragging.
--- = 6.0f
---@type number (float)
ImGuiIO.MouseDragThreshold = nil

--- 
--- Request ImGui to draw a mouse cursor for you (if you are on a platform without a mouse cursor). Cannot be easily renamed to 'io.ConfigXXX' because this is frequently used by backend implementations.
--- = false
---@type boolean (bool)
ImGuiIO.MouseDrawCursor = nil

--- (Optional) Modify using io.AddMouseViewportEvent(). With multi-viewports: viewport the OS mouse is hovering. If possible _IGNORING_ viewports with the ImGuiViewportFlags_NoInputs flag is much better (few backends can handle that). Set io.BackendFlags |= ImGuiBackendFlags_HasMouseHoveredViewport if you can provide this info. If you don't imgui will infer the value using the rectangles and last focused time of the viewports it knows about (ignoring other OS windows).
---@type number (ImGuiID)
ImGuiIO.MouseHoveredViewport = nil

--- Mouse position, in pixels. Set to ImVec2(-FLT_MAX, -FLT_MAX) if mouse is unavailable (on another screen, etc.)
---@type ImVec2 (ImVec2)
ImGuiIO.MousePos = nil

--- Previous mouse position (note that MouseDelta is not necessary == MousePos-MousePosPrev, in case either position is invalid)
---@type ImVec2 (ImVec2)
ImGuiIO.MousePosPrev = nil

--- Mouse wheel Vertical: 1 unit scrolls about 5 lines text.
---@type number (float)
ImGuiIO.MouseWheel = nil

--- Mouse wheel Horizontal. Most users don't have a mouse with a horizontal wheel, may not be filled by all backends.
---@type number (float)
ImGuiIO.MouseWheelH = nil

--- KeyboardGamepad navigation is currently allowed (will handle ImGuiKey_NavXXX events) = a window is focused and it doesn't use the ImGuiWindowFlags_NoNavInputs flag.
---@type boolean (bool)
ImGuiIO.NavActive = nil

--- KeyboardGamepad navigation is visible and allowed (will handle ImGuiKey_NavXXX events).
---@type boolean (bool)
ImGuiIO.NavVisible = nil

--- TouchPen pressure (0.0f to 1.0f, should be >0.0f only when MouseDown[0] == true). Helper storage currently unused by Dear ImGui.
---@type number (float)
ImGuiIO.PenPressure = nil

--- Set when Dear ImGui will use keyboard inputs, in this case do not dispatch them to your main gameapplication (either way, always pass keyboard inputs to imgui). (e.g. InputText active, or an imgui window is focused and navigation is enabled, etc.).
---@type boolean (bool)
ImGuiIO.WantCaptureKeyboard = nil

--- Set when Dear ImGui will use mouse inputs, in this case do not dispatch them to your main gameapplication (either way, always pass on mouse inputs to imgui). (e.g. unclicked mouse is hovering over an imgui window, widget is active, mouse was clicked over an imgui window, etc.).
---@type boolean (bool)
ImGuiIO.WantCaptureMouse = nil

--- Alternative to WantCaptureMouse: (WantCaptureMouse == true && WantCaptureMouseUnlessPopupClose == false) when a click over void is expected to close a popup.
---@type boolean (bool)
ImGuiIO.WantCaptureMouseUnlessPopupClose = nil

--- When manual .ini loadsave is active (io.IniFilename == NULL), this will be set to notify your application that you can call SaveIniSettingsToMemory() and save yourself. Important: clear io.WantSaveIniSettings yourself after saving!
---@type boolean (bool)
ImGuiIO.WantSaveIniSettings = nil

--- MousePos has been altered, backend should reposition mouse on next frame. Rarely used! Set only when ImGuiConfigFlags_NavEnableSetMousePos flag is enabled.
---@type boolean (bool)
ImGuiIO.WantSetMousePos = nil

--- Mobileconsole: when set, you may display an on-screen keyboard. This is set by Dear ImGui when it wants textual keyboard input to happen (e.g. when a InputText widget is active).
---@type boolean (bool)
ImGuiIO.WantTextInput = nil

--- Queue a gainloss of focus for the application (generally based on OSplatform focus of your window)
---@param focused boolean @(bool)
---@return nil @(void)
function ImGuiIO:addFocusEvent(focused)
end

--- Queue a new character input
---@param c number @(unsigned int)
---@return nil @(void)
function ImGuiIO:addInputCharacter(c)
end

--- Queue a new character input from a UTF-16 character, it can be a surrogate
---@param c number @(ImWchar16)
---@return nil @(void)
function ImGuiIO:addInputCharacterUTF16(c)
end

--- Queue a new characters input from a UTF-8 string
---@param str string @(const char*)
---@return nil @(void)
function ImGuiIO:addInputCharactersUTF8(str)
end

--- Queue a new key downup event for analog values (e.g. ImGuiKey_Gamepad_ values). Dead-zones should be handled by the backend.
---@param key ImGuiKey @(ImGuiKey)
---@param down boolean @(bool)
---@param v number @(float)
---@return nil @(void)
function ImGuiIO:addKeyAnalogEvent(key, down, v)
end

--- Queue a new key downup event. Key should be "translated" (as in, generally ImGuiKey_A matches the key end-user would use to emit an 'A' character)
---@param key ImGuiKey @(ImGuiKey)
---@param down boolean @(bool)
---@return nil @(void)
function ImGuiIO:addKeyEvent(key, down)
end

--- Queue a mouse button change
---@param button number @(int)
---@param down boolean @(bool)
---@return nil @(void)
function ImGuiIO:addMouseButtonEvent(button, down)
end

--- Queue a mouse position update. Use -FLT_MAX,-FLT_MAX to signify no mouse (e.g. app not focused and not hovered)
---@param x number @(float)
---@param y number @(float)
---@return nil @(void)
function ImGuiIO:addMousePosEvent(x, y)
end

--- Queue a mouse hovered viewport. Requires backend to set ImGuiBackendFlags_HasMouseHoveredViewport to call this (for multi-viewport support).
---@param id number @(ImGuiID)
---@return nil @(void)
function ImGuiIO:addMouseViewportEvent(id)
end

--- Queue a mouse wheel update
---@param wh_x number @(float)
---@param wh_y number @(float)
---@return nil @(void)
function ImGuiIO:addMouseWheelEvent(wh_x, wh_y)
end

--- [Internal] Clear the text input buffer manually
---@return nil @(void)
function ImGuiIO:clearInputCharacters()
end

--- [Internal] Release all keys
---@return nil @(void)
function ImGuiIO:clearInputKeys()
end

--- Set master flag for accepting keymousetext events (default to true). Useful if you have native dialog boxes that are interrupting your application looprefresh, and you want to disable events being queued while your app is frozen.
---@param accepting_events boolean @(bool)
---@return nil @(void)
function ImGuiIO:setAppAcceptingEvents(accepting_events)
end

--- [Optional] Specify index for legacy <1.87 IsKeyXXX() functions with native indices + specify native keycode, scancode.
---@param key ImGuiKey @(ImGuiKey)
---@param native_keycode number @(int)
---@param native_scancode number @(int)
---@param native_legacy_index number @(int)
---@return nil @(void)
function ImGuiIO:setKeyEventNativeData(key, native_keycode, native_scancode, native_legacy_index)
end

--- [Optional] Specify index for legacy <1.87 IsKeyXXX() functions with native indices + specify native keycode, scancode.
---@param key ImGuiKey @(ImGuiKey)
---@param native_keycode number @(int)
---@param native_scancode number @(int)
---@return nil @(void)
function ImGuiIO:setKeyEventNativeData(key, native_keycode, native_scancode)
end

