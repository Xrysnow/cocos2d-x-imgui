-- Main

---
---@param show boolean
function imgui.showStyleEditor(show)
end

-- Demo, Debug, Information

--- create Demo window (previously called ShowTestWindow). demonstrate most ImGui features.
--- call this to learn about the library! try to make it always available in your application!
function imgui.showDemoWindow(open)
end
--- create About window. display Dear ImGui version, credits and build/system information.
function imgui.showAboutWindow(open)
end
--- create Metrics/Debugger window. display Dear ImGui internals: windows, draw commands, various internal state, etc.
function imgui.showMetricsWindow(open)
end


-- Styles

--- new, recommended style (default)
function imgui.styleColorsDark()
end

--- classic imgui style
function imgui.styleColorsClassic()
end

--- best used with borders and a custom, thicker font
function imgui.styleColorsLight()
end

--- Windows
--- - Begin() = push window to the stack and start appending to it. End() = pop window from the stack.
--- - You may append multiple times to the same window during the same frame.
--- - Passing 'bool* p_open != NULL' shows a window-closing widget in the upper-right corner of the window,
---   which clicking will set the boolean to false when clicked.
--- - Begin() return false to indicate the window is collapsed or fully clipped, so you may early out and omit submitting
---   anything to the window. Always call a matching End() for each Begin() call, regardless of its return value!
---   (this is due to legacy reason and is inconsistent with most other functions such as BeginMenu/EndMenu, BeginPopup/EndPopup, etc.
---    where the EndXXX call should only be called if the corresponding BeginXXX function returned true.)
--- - Note that the bottom of window stack always contains a window called "Debug".
---@param name string
---@param open boolean optional, nullable
---@param flags number optional ImGuiWindowFlags
---@return boolean,boolean|nil
function imgui.begin(name, open, flags)
end

function imgui.endToLua()
end

--- Child Windows
--- - Use child windows to begin into a self-contained independent scrolling/clipping regions within a host window. Child windows can embed their own child.
--- - For each independent axis of 'size': ==0.0f: use remaining host window size / >0.0f: fixed size / <0.0f: use remaining window size minus abs(size) / Each axis can use a different mode, e.g. ImVec2(0,400).
--- - BeginChild() returns false to indicate the window is collapsed or fully clipped, so you may early out and omit submitting anything to the window.
---   Always call a matching EndChild() for each BeginChild() call, regardless of its return value (this is due to legacy reason and is inconsistent with most other functions such as BeginMenu/EndMenu, BeginPopup/EndPopup, etc. where the EndXXX call should only be called if the corresponding BeginXXX function returned true.)
---   [Important: due to legacy reason, this is inconsistent with most other functions such as BeginMenu/EndMenu,
---   BeginPopup/EndPopup, etc. where the EndXXX call should only be called if the corresponding BeginXXX function
---   returned true. Begin and BeginChild are the only odd ones out. Will be fixed in a future update.]
---@param id string
---@param size ImVec2 optional
---@param border number optional
---@param flags number optional ImGuiWindowFlags
---@return boolean
function imgui.beginChild(id, size, border, flags)
end

function imgui.endChild()
end

--
-- Parameters stacks (shared)
--

--- use NULL as a shortcut to push default font
---@param font imgui.ImFont
function imgui.pushFont(font)
end

--- get current font
---@return imgui.ImFont
function imgui.getFont()
end

---
---@param idx number ImGuiCol
---@param color ImVec4|number
function imgui.pushStyleColor(idx, color)
end

---
---@param idx number ImGuiStyleVar
---@param value number|ImVec2
function imgui.pushStyleVar(idx, value)
end

--
-- Widgets
--

---
---@param tex cc.Texture2D
---@param size ImVec2
---@param uv0 ImVec2
---@param uv1 ImVec2
---@param tint_color ImVec4
---@param border_color ImVec4
---@overload fun(sp:cc.Sprite,size:ImVec2,tint_color:ImVec4,border_color:ImVec4)
function imgui.image(tex, size, uv0, uv1, tint_color, border_color)
end

---
---@param tex cc.Texture2D
---@param size ImVec2
---@param uv0 ImVec2
---@param uv1 ImVec2
---@param frame_padding number if <0, uses default frame padding settings. 0 for no padding
---@param bg_color ImVec4
---@param tint_color ImVec4
---@return boolean
---@overload fun(sp:cc.Sprite,size:ImVec2,frame_padding:number,bg_color:ImVec4,tint_color:ImVec4):boolean
function imgui.imageButton(tex, size, uv0, uv1, frame_padding, bg_color, tint_color)
end

---
---@param label string
---@param v boolean
---@return boolean,boolean pressed, v_new
function imgui.checkbox(label, v)
end

---
---@param label string
---@param flags number
---@param flags_value number
---@return boolean,number
function imgui.checkboxFlags(label, flags, flags_value)
end

--- - Two args: use with e.g. if (RadioButton("one", my_value==1)) { my_value = 1; }
--- - Three args: shortcut to handle the above pattern when value is an integer
---@param label string
---@param v number
---@param v_button number
---@return boolean,number
---@overload fun(label:string,active:boolean):boolean
function imgui.radioButton(label, v, v_button)
end

---combo
---@param label string
---@param current_item number
---@param items string[]
---@param popup_max_height_in_items number
---@return boolean,number
function imgui.combo(label, current_item, items, popup_max_height_in_items)
end


--
-- Widgets: Drag Sliders
-- - CTRL+Click on any drag box to turn them into an input box. Manually input values aren't clamped and can go off-bounds.
-- - For all the Float2/Float3/Float4/Int2/Int3/Int4 versions of every functions, note that a 'float v[X]' function argument is the same as 'float* v', the array syntax is just a way to document the number of elements that are expected to be accessible. You can pass address of your first element out of a contiguous set, e.g. &myvector.x
-- - Adjust format string to decorate the value with a prefix, a suffix, or adapt the editing and display precision e.g. "%.3f" -> 1.234; "%5.2f secs" -> 01.23 secs; "Biscuit: %.0f" -> Biscuit: 1; etc.
-- - Format string may also be set to NULL or use the default format ("%f" or "%d").
-- - Speed are per-pixel of mouse movement (v_speed=0.2f: mouse needs to move by 5 pixels to increase value by 1). For gamepad/keyboard navigation, minimum speed is Max(v_speed, minimum_step_at_given_precision).
-- - Use v_min < v_max to clamp edits to given limits. Note that CTRL+Click manual input can override those limits.
-- - Use v_max = FLT_MAX / INT_MAX etc to avoid clamping to a maximum, same with v_min = -FLT_MAX / INT_MIN to avoid clamping to a minimum.
-- - We use the same sets of flags for DragXXX() and SliderXXX() functions as the features are the same and it makes it easier to swap them.
-- - Legacy: Pre-1.78 there are DragXXX() function signatures that takes a final `float power=1.0f' argument instead of the `ImGuiSliderFlags flags=0' argument.
--   If you get a warning converting a float to ImGuiSliderFlags, read https://github.com/ocornut/imgui/issues/3361
--

---
---@param label string
---@param value number
---@param v_speed number @optional
---@param v_min number @optional
---@param v_max number @optional
---@param format string @optional
---@param flags number @optional, ImGuiSliderFlags
---@return boolean,number
function imgui.dragFloat(label, value, v_speed, v_min, v_max, format, flags)
end

---
---@param label string
---@param array number[]
---@param v_speed number
---@param v_min number
---@param v_max number
---@param format string
---@param flags number
---@return boolean,number[]
function imgui.dragFloatN(label, array, v_speed, v_min, v_max, format, flags)
end

---
---@param label string
---@param value number
---@param v_speed number @optional
---@param v_min number @optional
---@param v_max number @optional
---@param format string @optional
---@param flags number @optional, ImGuiSliderFlags
---@return boolean,number
function imgui.dragInt(label, value, v_speed, v_min, v_max, format, flags)
end

---
---@param label string
---@param array number[]
---@param v_speed number @optional
---@param v_min number @optional
---@param v_max number @optional
---@param format string @optional
---@param flags number @optional, ImGuiSliderFlags
---@return boolean,number[]
function imgui.dragIntN(label, array, v_speed, v_min, v_max, format, flags)
end

--
-- Widgets: Regular Sliders
-- - CTRL+Click on any slider to turn them into an input box. Manually input values aren't clamped and can go off-bounds.
-- - Adjust format string to decorate the value with a prefix, a suffix, or adapt the editing and display precision e.g. "%.3f" -> 1.234; "%5.2f secs" -> 01.23 secs; "Biscuit: %.0f" -> Biscuit: 1; etc.
-- - Format string may also be set to NULL or use the default format ("%f" or "%d").
-- - Legacy: Pre-1.78 there are SliderXXX() function signatures that takes a final `float power=1.0f' argument instead of the `ImGuiSliderFlags flags=0' argument.
--   If you get a warning converting a float to ImGuiSliderFlags, read https://github.com/ocornut/imgui/issues/3361
--

---
---@param label string
---@param value number
---@param v_min number
---@param v_max number
---@param format string @optional
---@param flags number @optional, ImGuiSliderFlags
---@return boolean,number
function imgui.sliderFloat(label, value, v_min, v_max, format, flags)
end

---
---@param label string
---@param array number[]
---@param v_min number
---@param v_max number
---@param format string @optional
---@param flags number @optional, ImGuiSliderFlags
---@return boolean,number[]
function imgui.sliderFloatN(label, array, v_min, v_max, format, flags)
end

---
---@param label string
---@param v_rad number
---@param v_deg_min number
---@param v_deg_max number
---@param format string
---@return boolean,number
function imgui.sliderAngle(label, v_rad, v_deg_min, v_deg_max, format)
end

---
---@param label string
---@param value number
---@param v_min number
---@param v_max number
---@param format string
---@return boolean,number
function imgui.sliderInt(label, value, v_min, v_max, format)
end

---
---@param label string
---@param array number[]
---@param v_min number
---@param v_max number
---@param format string
---@return boolean,number[]
function imgui.sliderIntN(label, array, v_min, v_max, format, power)
end

---
---@param label string
---@param size ImVec2
---@param value number
---@param v_min number
---@param v_max number
---@param format string
---@param power number
---@return boolean,number
function imgui.vSliderFloat(label, size, value, v_min, v_max, format, power)
end

---
---@param label string
---@param size ImVec2
---@param value number
---@param v_min number
---@param v_max number
---@param format string
---@return boolean,number
function imgui.vSliderInt(label, size, value, v_min, v_max, format)
end

--
-- Widgets: Input with Keyboard
-- - If you want to use InputText() with a dynamic string type such as std::string or your own, see misc/cpp/imgui_stdlib.h
-- - Most of the ImGuiInputTextFlags flags are only useful for InputText() and not for InputFloatX, InputIntX, InputDouble etc.
--

---inputText
---@param label string
---@param str string
---@param flags number
---@return boolean,string
function imgui.inputText(label, str, flags)
end

---inputTextMultiline
---@param label string
---@param str string
---@param size ImVec2
---@param flags number
---@return boolean,string
function imgui.inputTextMultiline(label, str, size, flags)
end

---inputTextWithHint
---@param label string
---@param hint string
---@param str string
---@param flags number
---@return boolean,string
function imgui.inputTextWithHint(label, hint, str, flags)
end

---
---@param label string
---@param v number
---@param step number
---@param step_fase number
---@param format string
---@param flags number
---@return boolean,number
function imgui.inputFloat(label, v, step, step_fase, format, flags)
end

---
---@param label string
---@param v number[]
---@param step number
---@param step_fase number
---@param format string
---@param flags number
---@return boolean,number[]
function imgui.inputFloatN(label, v, step, step_fase, format, flags)
end

---
---@param label string
---@param v number
---@param step number
---@param step_fast number
---@param flags number
---@return boolean,number
function imgui.inputInt(label, v, step, step_fast, flags)
end

---
---@param label string
---@param v number[]
---@param step number
---@param step_fase number
---@param flags number
---@return boolean,number[]
function imgui.inputIntN(label, v, step, step_fase, flags)
end

--
-- Widgets: Color Editor/Picker
-- (tip: the ColorEdit* functions have a little color square that can be left-clicked to open a picker, and right-clicked to open an option menu.)
-- - Note that in C++ a 'float v[X]' function argument is the _same_ as 'float* v', the array syntax is just a way to document the number of elements that are expected to be accessible.
-- - You can pass the address of a first float element out of a contiguous structure, e.g. &myvector.x
--

---
---@param label string
---@param color number[]
---@param flags number
---@return boolean,number[]
function imgui.colorEdit3(label, color, flags)
end

---
---@param label string
---@param color number[]
---@param flags number
---@return boolean,number[]
function imgui.colorEdit4(label, color, flags)
end

---
---@param label string
---@param color number[]
---@param flags number
---@return boolean,number[]
function imgui.colorPicker3(label, color, flags)
end

---
---@param label string
---@param color number[]
---@param flags number
---@param ref_color number[]
---@return boolean,number[]
function imgui.colorPicker4(label, color, flags, ref_color)
end

--- if returning 'true' the header is open. doesn't indent nor push on ID stack. user doesn't have to call TreePop().
--- when 'open' is given, display an additional small close button on upper right of the header
---@param label string
---@param open boolean
---@param flags number
---@return boolean,boolean
---@overload fun(label:string,flags:number):boolean
function imgui.collapsingHeader(label, open, flags)
end

--
-- Widgets: Selectables
-- - A selectable highlights when hovered, and can display another color when selected.
-- - Neighbors selectable extend their highlight bounds in order to leave no gap between them.
--

--- "bool selected" carry the selection state (read-only). Selectable() is clicked is returns true so you can modify your selection state. size.x==0.0: use remaining width, size.x>0.0: specify width. size.y==0.0: use label height, size.y>0.0: specify height
---@param label string
---@param selected boolean
---@param flags number
---@param size ImVec2
---@return boolean
function imgui.selectable(label, selected, flags, size)
end

--
-- Widgets: List Boxes
-- - FIXME: To be consistent with all the newer API, ListBoxHeader/ListBoxFooter should in reality be called BeginListBox/EndListBox. Will rename them.
--

---
---@param label string
---@param current_item number
---@param items string[]
---@param height_in_items number
---@return boolean,number
function imgui.listBox(label, current_item, items, height_in_items)
end

---
---@param label string
---@param items_count number
---@param height_in_items number
---@overload fun(label:string,size:ImVec2):boolean
---@return boolean
function imgui.listBoxHeader(label, items_count, height_in_items)
end

--
-- Widgets: Data Plotting
--

---
---@param label string
---@param values number[]
---@param values_count number optional
---@param values_offset number optional
---@param overlay_text string optional, nullable
---@param scale_min number optional
---@param scale_max number optional
---@param graph_size ImVec2 optional
---@param stride number optional
function imgui.plotLines(label, values, values_count, values_offset, overlay_text, scale_min, scale_max, graph_size, stride)
end

---
---@param label string
---@param values number[]
---@param values_count number optional
---@param values_offset number optional
---@param overlay_text string optional, nullable
---@param scale_min number optional
---@param scale_max number optional
---@param graph_size ImVec2 optional
---@param stride number optional
function imgui.plotHistogram(label, values, values_count, values_offset, overlay_text, scale_min, scale_max, graph_size, stride)
end

--
-- Widgets: Menus
--

--- return true when activated. shortcuts are displayed for convenience but not processed by ImGui at the moment
---@param label string
---@param shortcut string optional, nullable
---@param selected boolean optional
---@param enabled boolean optional
---@return boolean
function imgui.menuItem(label, shortcut, selected, enabled)
end

--
-- Popups, Modals
-- The properties of popups windows are:
-- - They block normal mouse hovering detection outside them. (*)
-- - Unless modal, they can be closed by clicking anywhere outside them, or by pressing ESCAPE.
-- - Their visibility state (~bool) is held internally by imgui instead of being held by the programmer as we are used to with regular Begin() calls.
--   User can manipulate the visibility state by calling OpenPopup().
-- (*) One can use IsItemHovered(ImGuiHoveredFlags_AllowWhenBlockedByPopup) to bypass it and detect hovering even when normally blocked by a popup.
-- Those three properties are connected. The library needs to hold their visibility state because it can close popups at any time.
--

--- return true if the modal is open, and you can start outputting to it.
---@param name string
---@param open boolean optional, nullable
---@param flags number optional
---@return boolean,boolean
function imgui.beginPopupModal(name, open, flags)
end

--
-- Tab Bars, Tabs
-- [BETA API] API may evolve!
-- Note: Tabs are automatically created by the docking system. Use this to create tab bars/tabs yourself without docking being involved.
--

--- create a Tab. Returns true if the Tab is selected.
---@param name string
---@param open boolean optional, nullable
---@param flags number optional
---@return boolean,boolean
function imgui.beginTabItem(name, open, flags)
end

--
-- Drag and Drop
-- [BETA API] API may evolve!
--

--- type is a user defined string of maximum 32 characters. Strings starting with '_' are reserved for dear imgui internal types.
---@param type string
---@param value any
---@param flags number
---@return boolean
function imgui.setDragDropPayload(type, value, flags)
end

--- accept contents of a given type. If ImGuiDragDropFlags_AcceptBeforeDelivery is set you can peek into the payload before the mouse button is released.
---@param type string
---@param flags number
---@return boolean,any
function imgui.acceptDragDropPayload(type, flags)
end

--- peek directly into the current payload from anywhere. may return NULL. use ImGuiPayload::IsDataType() to test for the payload type.
---@return boolean,any
function imgui.getDragDropPayload()
end

--
-- Miscellaneous Utilities
--

--- calculate coarse clipping for large list of evenly sized items. Prefer using the ImGuiListClipper higher-level helper if you can.
---@param items_count number
---@param items_height number
---@return number,number out_items_display_start, out_items_display_end
function imgui.calcListClipping(items_count, items_height)
end

--
-- Inputs Utilities
--

--- by convention we use (-FLT_MAX,-FLT_MAX) to denote that there is no mouse
---@param mouse_pos ImVec2 optional
function imgui.isMousePosValid(mouse_pos)
end

--
-- ID
--

--- push string into the ID stack (will hash string).
--- push integer into the ID stack (will hash integer).
---@param id number|string
function imgui.pushID(id)
end

--
-- Main
--

--- access the IO structure (mouse/keyboard/gamepad inputs, time, various configuration options/flags)
---@return imgui.ImGuiIO
function imgui.getIO()
end

--- access the Style structure (colors, sizes). Always use PushStyleCol(), PushStyleVar() to modify style mid-frame.
---@return imgui.ImGuiStyle
function imgui.getStyle()
end

---
---@param idx number
---@param col ImVec4
function imgui.setStyleColor(idx, col)
end

--- return a zero-terminated string with the .ini data which you can save by your own mean. call when io.WantSaveIniSettings is set, then save data by your own mean and clear io.WantSaveIniSettings.
---@return string
function imgui.saveIniSettingsToMemory()
end

---
---@param path string
---@param size number
---@param config table
---@param ranges number
---@return imgui.ImFont
function imgui.addFontTTF(path, size, config, ranges)
end

---@return cc.Layer
function imgui.createLayer()
end

function imgui.shutdown()
end

---
---@param node cc.Node
---@param tint_color ImVec4
---@param border_color ImVec4
function imgui.ccNode(node, tint_color, border_color)
end

---
---@param node cc.Node
---@param frame_padding number if <0, uses default frame padding settings. 0 for no padding
---@param bg_color ImVec4
---@param tint_color ImVec4
---@return boolean
function imgui.ccNodeButton(node, frame_padding, bg_color, tint_color)
end

---
---@param node cc.Node
---@param col number|ImVec4
function imgui.setCCNodeColor(node, col)
end

---
---@param label cc.Label
---@param col number|ImVec4|boolean
function imgui.setCCLabelColor(label, col)
end

-- markdown

---
---@param f fun(text:string,link:string,isImage:boolean)
function imgui.setMarkdownLinkCallback(f)
end

---
---@param f fun(text:string,link:string):cc.Sprite,ImVec2,ImVec4,ImVec4
function imgui.setMarkdownImageCallback(f)
end

---
---@param index number
---@param font imgui.ImFont
---@param seperator boolean
---@param scale number optional
function imgui.setMarkdownFont(index, font, seperator, scale)
end

---
---@param icon string
function imgui.setMarkdownLinkIcon(icon)
end

---
---@param content string
function imgui.markdown(content)
end

---@class ImVec2:vec2_table
local ImVec2

---@class ImVec4:vec4_table
local ImVec4
