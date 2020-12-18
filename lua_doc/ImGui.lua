--------------------------------
-- @module ImGui
-- @parent_module imgui

---@class imgui
imgui = imgui or {}
--------------------------------

---   vertically align upcoming text baseline to FramePadding.y so that it will align properly to regularly framed items (call if you have text on a line before a framed item) 
function imgui.alignTextToFramePadding()
end

--------------------------------

---   square button with an arrow shape 
---@param str_id string
---@param dir number
---@return boolean
function imgui.arrowButton(str_id, dir)
end

--------------------------------

---   helper to create a child window / scrolling region that looks like a normal widget frame 
---@param id number
---@param size ImVec2
---@param flags number
---@return boolean
function imgui.beginChildFrame(id, size, flags)
end

--------------------------------

--- 
---@param label string
---@param preview_value string
---@param flags number
---@return boolean
function imgui.beginCombo(label, preview_value, flags)
end

--------------------------------

---   call when the current item is active. If this return true, you can call SetDragDropPayload() + EndDragDropSource() 
---@return boolean
function imgui.beginDragDropSource()
end

--------------------------------

---   call after submitting an item that may receive a payload. If this returns true, you can call AcceptDragDropPayload() + EndDragDropTarget() 
---@return boolean
function imgui.beginDragDropTarget()
end

--------------------------------

---   lock horizontal starting position 
function imgui.beginGroup()
end

--------------------------------

---   create and append to a full screen menu-bar. 
---@return boolean
function imgui.beginMainMenuBar()
end

--------------------------------

---   create a sub-menu entry. only call EndMenu() if this returns true! 
---@param label string
---@param enabled boolean
---@return boolean
function imgui.beginMenu(label, enabled)
end

--------------------------------

---   append to menu-bar of current window (requires ImGuiWindowFlags_MenuBar flag set on parent window). 
---@return boolean
function imgui.beginMenuBar()
end

--------------------------------

---   return true if the popup is open, and you can start outputting to it. 
---@param str_id string
---@param flags number
---@return boolean
function imgui.beginPopup(str_id, flags)
end

--------------------------------

---   open+begin popup when clicked on last item. if you can pass a NULL str_id only if the previous item had an id. If you want to use that on a non-interactive item such as Text() you need to pass in an explicit ID here. read comments in .cpp! 
---@return boolean
function imgui.beginPopupContextItem()
end

--------------------------------

---   open+begin popup when clicked in void (where there are no windows). 
---@return boolean
function imgui.beginPopupContextVoid()
end

--------------------------------

---   open+begin popup when clicked on current window. 
---@return boolean
function imgui.beginPopupContextWindow()
end

--------------------------------

---   create and append into a TabBar 
---@param str_id string
---@param flags number
---@return boolean
function imgui.beginTabBar(str_id, flags)
end

--------------------------------

---   begin/append a tooltip window. to create full-featured tooltip (with any kind of items). 
function imgui.beginTooltip()
end

--------------------------------

---   draw a small circle + keep the cursor on the same line. advance cursor x position by GetTreeNodeToLabelSpacing(), same distance that TreeNode() uses 
function imgui.bullet()
end

--------------------------------

---   shortcut for Bullet()+Text() 
---@param fmt string
function imgui.bulletText(fmt)
end

--------------------------------

---   button 
---@param label string
---@param size ImVec2
---@return boolean
function imgui.button(label, size)
end

--------------------------------

---   width of item given pushed settings and current cursor position 
---@return number
function imgui.calcItemWidth()
end

--------------------------------

--- 
---@param text string
---@param text_end string
---@param hide_text_after_double_hash boolean
---@param wrap_width number
---@return ImVec2
function imgui.calcTextSize(text, text_end, hide_text_after_double_hash, wrap_width)
end

--------------------------------

---   attention: misleading name! manually override io.WantCaptureKeyboard flag next frame (said flag is entirely left for your application to handle). e.g. force capture keyboard when your widget is being hovered. This is equivalent to setting "io.WantCaptureKeyboard = want_capture_keyboard_value"; after the next NewFrame() call. 
function imgui.captureKeyboardFromApp()
end

--------------------------------

---   attention: misleading name! manually override io.WantCaptureMouse flag next frame (said flag is entirely left for your application to handle). This is equivalent to setting "io.WantCaptureMouse = want_capture_mouse_value;" after the next NewFrame() call. 
function imgui.captureMouseFromApp()
end

--------------------------------

---   manually close the popup we have begin-ed into. 
function imgui.closeCurrentPopup()
end

--------------------------------

---   display a color square/button, hover for details, return true when pressed. 
---@param desc_id string
---@param col ImVec4
---@param flags number
---@param size ImVec2
---@return boolean
function imgui.colorButton(desc_id, col, flags, size)
end

--------------------------------

--- 
---@param in_ ImVec4
---@return number
function imgui.colorConvertFloat4ToU32(in_)
end

--------------------------------

--- 
---@param in_ number
---@return ImVec4
function imgui.colorConvertU32ToFloat4(in_)
end

--------------------------------

--- 
function imgui.columns()
end

--------------------------------

--- 
---@param version_str string
---@param sz_io number
---@param sz_style number
---@param sz_vec2 number
---@param sz_vec4 number
---@param sz_drawvert number
---@param sz_drawidx number
---@return boolean
function imgui.debugCheckVersionAndDataLayout(version_str, sz_io, sz_style, sz_vec2, sz_vec4, sz_drawvert, sz_drawidx)
end

--------------------------------

---  call DestroyWindow platform functions for all viewports. call from backend Shutdown() if you need to close platform windows before imgui shutdown. otherwise will be called by DestroyContext(). 
function imgui.destroyPlatformWindows()
end

--------------------------------

--- 
---@param id number
---@param size ImVec2
---@param flags number
function imgui.dockSpace(id, size, flags)
end

--------------------------------

--- 
---@return number
function imgui.dockSpaceOverViewport()
end

--------------------------------

---   add a dummy item of given size. unlike InvisibleButton(), Dummy() won't take the mouse click or be navigable into. 
---@param size ImVec2
function imgui.dummy(size)
end

--------------------------------

---   always call EndChildFrame() regardless of BeginChildFrame() return values (which indicates a collapsed/clipped window) 
function imgui.endChildFrame()
end

--------------------------------

---   only call EndCombo() if BeginCombo() returns true! 
function imgui.endCombo()
end

--------------------------------

---   only call EndDragDropSource() if BeginDragDropSource() returns true! 
function imgui.endDragDropSource()
end

--------------------------------

---   only call EndDragDropTarget() if BeginDragDropTarget() returns true! 
function imgui.endDragDropTarget()
end

--------------------------------

---   ends the Dear ImGui frame. automatically called by Render(). If you don't need to render data (skipping rendering) you may call EndFrame() without Render()... but you'll have wasted CPU already! If you don't need to render, better to not create any windows and not call NewFrame() at all! 
function imgui.endFrame()
end

--------------------------------

---   unlock horizontal starting position + capture the whole group bounding box into one "item" (so you can use IsItemHovered() or layout primitives such as SameLine() on whole group, etc.) 
function imgui.endGroup()
end

--------------------------------

---   only call EndMainMenuBar() if BeginMainMenuBar() returns true! 
function imgui.endMainMenuBar()
end

--------------------------------

---   only call EndMenu() if BeginMenu() returns true! 
function imgui.endMenu()
end

--------------------------------

---   only call EndMenuBar() if BeginMenuBar() returns true! 
function imgui.endMenuBar()
end

--------------------------------

---   only call EndPopup() if BeginPopupXXX() returns true! 
function imgui.endPopup()
end

--------------------------------

---   only call EndTabBar() if BeginTabBar() returns true! 
function imgui.endTabBar()
end

--------------------------------

---   only call EndTabItem() if BeginTabItem() returns true! 
function imgui.endTabItem()
end

--------------------------------

--- 
function imgui.endTooltip()
end

--------------------------------

---  this is a helper for backends. 
---@param id number
---@return imgui.ImGuiViewport
function imgui.findViewportByID(id)
end

--------------------------------

---  get background draw list for the given viewport. this draw list will be the first rendering one. Useful to quickly draw shapes/text behind dear imgui contents. 
---@param viewport imgui.ImGuiViewport
---@return imgui.ImDrawList
---@overload fun():imgui.ImDrawList
function imgui.getBackgroundDrawList(viewport)
end

--------------------------------

--- 
---@return string
function imgui.getClipboardText()
end

--------------------------------

---   get current column index 
---@return number
function imgui.getColumnIndex()
end

--------------------------------

---   get position of column line (in pixels, from the left side of the contents region). pass -1 to use current column, otherwise 0..GetColumnsCount() inclusive. column 0 is typically 0.0f 
---@return number
function imgui.getColumnOffset()
end

--------------------------------

---   get column width (in pixels). pass -1 to use current column 
---@return number
function imgui.getColumnWidth()
end

--------------------------------

---   Tab Bars, Tabs 
---@return number
function imgui.getColumnsCount()
end

--------------------------------

---   == GetContentRegionMax() - GetCursorPos() 
---@return ImVec2
function imgui.getContentRegionAvail()
end

--------------------------------

---   current content boundaries (typically window boundaries including scrolling, or current column boundaries), in windows coordinates 
---@return ImVec2
function imgui.getContentRegionMax()
end

--------------------------------

---   cursor position in window coordinates (relative to window position) 
---@return ImVec2
function imgui.getCursorPos()
end

--------------------------------

---     (some functions are using window-relative coordinates, such as: GetCursorPos, GetCursorStartPos, GetContentRegionMax, GetWindowContentRegion* etc. 
---@return number
function imgui.getCursorPosX()
end

--------------------------------

---      other functions such as GetCursorScreenPos or everything in ImDrawList:: 
---@return number
function imgui.getCursorPosY()
end

--------------------------------

---   cursor position in absolute screen coordinates [0..io.DisplaySize] (useful to work with ImDrawList API) 
---@return ImVec2
function imgui.getCursorScreenPos()
end

--------------------------------

---   initial cursor position in window coordinates 
---@return ImVec2
function imgui.getCursorStartPos()
end

--------------------------------

---   get current font size (= height in pixels) of current font with current scale applied 
---@return number
function imgui.getFontSize()
end

--------------------------------

---   get UV coordinate for a while pixel, useful to draw custom shapes via the ImDrawList API 
---@return ImVec2
function imgui.getFontTexUvWhitePixel()
end

--------------------------------

---  get foreground draw list for the given viewport. this draw list will be the last rendered one. Useful to quickly draw shapes/text over dear imgui contents. 
---@param viewport imgui.ImGuiViewport
---@return imgui.ImDrawList
---@overload fun():imgui.ImDrawList
function imgui.getForegroundDrawList(viewport)
end

--------------------------------

---   get global imgui frame count. incremented by 1 every frame. 
---@return number
function imgui.getFrameCount()
end

--------------------------------

---   ~ FontSize + style.FramePadding.y * 2 
---@return number
function imgui.getFrameHeight()
end

--------------------------------

---   ~ FontSize + style.FramePadding.y * 2 + style.ItemSpacing.y (distance in pixels between 2 consecutive lines of framed widgets) 
---@return number
function imgui.getFrameHeightWithSpacing()
end

--------------------------------

---   Widgets: Text 
---@param str_id_begin string
---@param str_id_end string
---@return number
---@overload fun(str_id:string):number
function imgui.getID(str_id_begin, str_id_end)
end

--------------------------------

---   get lower-right bounding rectangle of the last item (screen space) 
---@return ImVec2
function imgui.getItemRectMax()
end

--------------------------------

---   get upper-left bounding rectangle of the last item (screen space) 
---@return ImVec2
function imgui.getItemRectMin()
end

--------------------------------

---   get size of last item 
---@return ImVec2
function imgui.getItemRectSize()
end

--------------------------------

---   map ImGuiKey_* values into user's key index. == io.KeyMap[key] 
---@param imgui_key number
---@return number
function imgui.getKeyIndex(imgui_key)
end

--------------------------------

---   uses provided repeat rate/delay. return a count, most often 0 or 1 but might be >1 if RepeatRate is small enough that DeltaTime > RepeatRate 
---@param key_index number
---@param repeat_delay number
---@param rate number
---@return number
function imgui.getKeyPressedAmount(key_index, repeat_delay, rate)
end

--------------------------------

---  main viewport. same as GetPlatformIO().MainViewport == GetPlatformIO().Viewports[0]. 
---@return imgui.ImGuiViewport
function imgui.getMainViewport()
end

--------------------------------

---   get desired cursor type, reset in ImGui::NewFrame(), this is updated during the frame. valid before Render(). If you use software rendering by setting io.MouseDrawCursor ImGui will render those for you 
---@return number
function imgui.getMouseCursor()
end

--------------------------------

---   return the delta from the initial clicking position while the mouse button is pressed or was just released. This is locked and return 0.0f until the mouse moves past a distance threshold at least once. If lock_threshold < -1.0f uses io.MouseDraggingThreshold. 
---@return ImVec2
function imgui.getMouseDragDelta()
end

--------------------------------

---   shortcut to ImGui::GetIO().MousePos provided by user, to be consistent with other calls 
---@return ImVec2
function imgui.getMousePos()
end

--------------------------------

---   retrieve backup of mouse position at the time of opening popup we have BeginPopup() into 
---@return ImVec2
function imgui.getMousePosOnOpeningCurrentPopup()
end

--------------------------------

---   get maximum scrolling amount ~~ ContentSize.x - WindowSize.x 
---@return number
function imgui.getScrollMaxX()
end

--------------------------------

---   get maximum scrolling amount ~~ ContentSize.y - WindowSize.y 
---@return number
function imgui.getScrollMaxY()
end

--------------------------------

---   get scrolling amount [0..GetScrollMaxX()] 
---@return number
function imgui.getScrollX()
end

--------------------------------

---   get scrolling amount [0..GetScrollMaxY()] 
---@return number
function imgui.getScrollY()
end

--------------------------------

---   get a string corresponding to the enum value (for display, saving, etc.). 
---@param idx number
---@return string
function imgui.getStyleColorName(idx)
end

--------------------------------

---   retrieve style color as stored in ImGuiStyle structure. use to feed back into PushStyleColor(), otherwise use GetColorU32() to get style color with style alpha baked in. 
---@param idx number
---@return ImVec4
function imgui.getStyleColorVec4(idx)
end

--------------------------------

---   ~ FontSize 
---@return number
function imgui.getTextLineHeight()
end

--------------------------------

---   ~ FontSize + style.ItemSpacing.y (distance in pixels between 2 consecutive lines of text) 
---@return number
function imgui.getTextLineHeightWithSpacing()
end

--------------------------------

---   get global imgui time. incremented by io.DeltaTime every frame. 
---@return number
function imgui.getTime()
end

--------------------------------

---   horizontal distance preceding label when using TreeNode*() or Bullet() == (g.FontSize + style.FramePadding.x*2) for a regular unframed TreeNode 
---@return number
function imgui.getTreeNodeToLabelSpacing()
end

--------------------------------

---   get the compiled version string e.g. "1.23" (essentially the compiled value for IMGUI_VERSION) 
---@return string
function imgui.getVersion()
end

--------------------------------

---   content boundaries max (roughly (0,0)+Size-Scroll) where Size can be override with SetNextWindowContentSize(), in window coordinates 
---@return ImVec2
function imgui.getWindowContentRegionMax()
end

--------------------------------

---   content boundaries min (roughly (0,0)-Scroll), in window coordinates 
---@return ImVec2
function imgui.getWindowContentRegionMin()
end

--------------------------------

---   
---@return number
function imgui.getWindowContentRegionWidth()
end

--------------------------------

--- 
---@return number
function imgui.getWindowDockID()
end

--------------------------------

---  get DPI scale currently associated to the current window's viewport. 
---@return number
function imgui.getWindowDpiScale()
end

--------------------------------

---  get draw list associated to the current window, to append your own drawing primitives 
---@return imgui.ImDrawList
function imgui.getWindowDrawList()
end

--------------------------------

---   get current window height (shortcut for GetWindowSize().y)   Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin). 
---@return number
function imgui.getWindowHeight()
end

--------------------------------

---   get current window position in screen space (useful if you want to do your own drawing via the DrawList API) 
---@return ImVec2
function imgui.getWindowPos()
end

--------------------------------

---   get current window size 
---@return ImVec2
function imgui.getWindowSize()
end

--------------------------------

---  get viewport currently associated to the current window. 
---@return imgui.ImGuiViewport
function imgui.getWindowViewport()
end

--------------------------------

---   get current window width (shortcut for GetWindowSize().x) 
---@return number
function imgui.getWindowWidth()
end

--------------------------------

---   move content position toward the right, by indent_w, or style.IndentSpacing if indent_w <= 0 
function imgui.indent()
end

--------------------------------

---   flexible button behavior without the visuals, frequently useful to build custom behaviors using the public api (along with IsItemActive, IsItemHovered, etc.) 
---@param str_id string
---@param size ImVec2
---@param flags number
---@return boolean
function imgui.invisibleButton(str_id, size, flags)
end

--------------------------------

---   is any item active? 
---@return boolean
function imgui.isAnyItemActive()
end

--------------------------------

---   is any item focused? 
---@return boolean
function imgui.isAnyItemFocused()
end

--------------------------------

---   is any item hovered? 
---@return boolean
function imgui.isAnyItemHovered()
end

--------------------------------

---   is any mouse button held 
---@return boolean
function imgui.isAnyMouseDown()
end

--------------------------------

---   was the last item just made active (item was previously inactive). 
---@return boolean
function imgui.isItemActivated()
end

--------------------------------

---   is the last item active? (e.g. button being held, text field being edited. This will continuously return true while holding mouse button on an item. Items that don't interact will always return false) 
---@return boolean
function imgui.isItemActive()
end

--------------------------------

---   is the last item clicked? (e.g. button/node just clicked on) == IsMouseClicked(mouse_button) && IsItemHovered() 
---@return boolean
function imgui.isItemClicked()
end

--------------------------------

---   was the last item just made inactive (item was previously active). Useful for Undo/Redo patterns with widgets that requires continuous editing. 
---@return boolean
function imgui.isItemDeactivated()
end

--------------------------------

---   was the last item just made inactive and made a value change when it was active? (e.g. Slider/Drag moved). Useful for Undo/Redo patterns with widgets that requires continuous editing. Note that you may get false positives (some widgets such as Combo()/ListBox()/Selectable() will return true even when clicking an already selected item). 
---@return boolean
function imgui.isItemDeactivatedAfterEdit()
end

--------------------------------

---   did the last item modify its underlying value this frame? or was pressed? This is generally the same as the "bool" return value of many widgets. 
---@return boolean
function imgui.isItemEdited()
end

--------------------------------

---   is the last item focused for keyboard/gamepad navigation? 
---@return boolean
function imgui.isItemFocused()
end

--------------------------------

---   is the last item hovered? (and usable, aka not blocked by a popup, etc.). See ImGuiHoveredFlags for more options. 
---@return boolean
function imgui.isItemHovered()
end

--------------------------------

--- was the last item open state toggled? set by TreeNode().
---@return boolean
function imgui.isItemToggledOpen()
end

--------------------------------

---   is the last item visible? (items may be out of sight because of clipping/scrolling) 
---@return boolean
function imgui.isItemVisible()
end

--------------------------------

---   is key being held. == io.KeysDown[user_key_index]. note that imgui doesn't know the semantic of each entry of io.KeysDown[]. Use your own indices/enums according to how your backend/engine stored them into io.KeysDown[]! 
---@param user_key_index number
---@return boolean
function imgui.isKeyDown(user_key_index)
end

--------------------------------

---   was key pressed (went from !Down to Down). if repeat=true, uses io.KeyRepeatDelay / KeyRepeatRate 
---@param user_key_index number
---@param repeat_ boolean
---@return boolean
function imgui.isKeyPressed(user_key_index, repeat_)
end

--------------------------------

---   was key released (went from Down to !Down).. 
---@param user_key_index number
---@return boolean
function imgui.isKeyReleased(user_key_index)
end

--------------------------------

---   did mouse button clicked (went from !Down to Down) (0=left, 1=right, 2=middle) 
---@param button number
---@param repeat_ boolean
---@return boolean
function imgui.isMouseClicked(button, repeat_)
end

--------------------------------

---   did mouse button double-clicked? (note that a double-click will also report IsMouseClicked() == true) 
---@param button number
---@return boolean
function imgui.isMouseDoubleClicked(button)
end

--------------------------------

---   is mouse button held (0=left, 1=right, 2=middle) 
---@param button number
---@return boolean
function imgui.isMouseDown(button)
end

--------------------------------

---  is mouse dragging? (if lock_threshold < -1.0f, uses io.MouseDraggingThreshold) 
---@param button number
---@param lock_threshold number
---@return boolean
function imgui.isMouseDragging(button, lock_threshold)
end

--------------------------------

---   is mouse hovering given bounding rect (in screen space). clipped by current clipping settings, but disregarding of other consideration of focus/window ordering/popup-block. 
---@param r_min ImVec2
---@param r_max ImVec2
---@param clip boolean
---@return boolean
function imgui.isMouseHoveringRect(r_min, r_max, clip)
end

--------------------------------

---   did mouse button released (went from Down to !Down) 
---@param button number
---@return boolean
function imgui.isMouseReleased(button)
end

--------------------------------

---   return true if the popup is open. 
---@param str_id string
---@param flags number
---@return boolean
function imgui.isPopupOpen(str_id, flags)
end

--------------------------------

---   test if rectangle (in screen space) is visible / not clipped. to perform coarse clipping on user's side. 
---@param rect_min ImVec2
---@param rect_max ImVec2
---@return boolean
---@overload fun(size:ImVec2):boolean
function imgui.isRectVisible(rect_min, rect_max)
end

--------------------------------

--- 
---@return boolean
function imgui.isWindowAppearing()
end

--------------------------------

--- 
---@return boolean
function imgui.isWindowCollapsed()
end

--------------------------------

---  is current window docked into another window?  
---@return boolean
function imgui.isWindowDocked()
end

--------------------------------

---   is current window focused? or its root/child, depending on flags. see flags for options. 
---@return boolean
function imgui.isWindowFocused()
end

--------------------------------

---   is current window hovered (and typically: not blocked by a popup/modal)? see flags for options. NB: If you are trying to check whether your mouse should be dispatched to imgui or to your app, you should use the 'io.WantCaptureMouse' boolean for that! Please read the FAQ! 
---@return boolean
function imgui.isWindowHovered()
end

--------------------------------

---   display text+label aligned the same way as value+label widgets 
---@param label string
---@param fmt string
function imgui.labelText(label, fmt)
end

--------------------------------

---   terminate the scrolling region. only call ListBoxFooter() if ListBoxHeader() returned true! 
function imgui.listBoxFooter()
end

--------------------------------

---   call after CreateContext() and before the first call to NewFrame(). NewFrame() automatically calls LoadIniSettingsFromDisk(io.IniFilename). 
---@param ini_filename string
function imgui.loadIniSettingsFromDisk(ini_filename)
end

--------------------------------

---   call after CreateContext() and before the first call to NewFrame() to provide .ini data from your own data source. 
---@param ini_data string
---@param ini_size number
function imgui.loadIniSettingsFromMemory(ini_data, ini_size)
end

--------------------------------

---   helper to display buttons for logging to tty/file/clipboard 
function imgui.logButtons()
end

--------------------------------

---   stop logging (close file, etc.) 
function imgui.logFinish()
end

--------------------------------

---   pass text data straight to log (without being displayed) 
---@param fmt string
function imgui.logText(fmt)
end

--------------------------------

---   start logging to OS clipboard 
function imgui.logToClipboard()
end

--------------------------------

---   start logging to file 
function imgui.logToFile()
end

--------------------------------

---   start logging to tty (stdout) 
function imgui.logToTTY()
end

--------------------------------

---   start a new Dear ImGui frame, you can submit any command from this point until Render()/EndFrame(). 
function imgui.newFrame()
end

--------------------------------

---   undo a SameLine() or force a new line when in an horizontal-layout context. 
function imgui.newLine()
end

--------------------------------

---   next column, defaults to current row or next row if the current row is finished 
function imgui.nextColumn()
end

--------------------------------

---   call to mark popup as open (don't call every frame!). 
---@param str_id string
---@param popup_flags number
function imgui.openPopup(str_id, popup_flags)
end

--------------------------------

---   helper to open popup when clicked on last item. return true when just opened. (note: actually triggers on the mouse _released_ event to be consistent with popup behaviors) 
---@return boolean
function imgui.openPopupOnItemClick()
end

--------------------------------

--- 
function imgui.popAllowKeyboardFocus()
end

--------------------------------

---   Cursor / Layout 
function imgui.popButtonRepeat()
end

--------------------------------

--- 
function imgui.popClipRect()
end

--------------------------------

--- 
function imgui.popFont()
end

--------------------------------

---   pop from the ID stack. 
function imgui.popID()
end

--------------------------------

--- 
function imgui.popItemWidth()
end

--------------------------------

---
---@param count number
function imgui.popStyleColor(count)
end

--------------------------------

---
---@param count number
function imgui.popStyleVar(count)
end

--------------------------------

--- 
function imgui.popTextWrapPos()
end

--------------------------------

--- 
---@param fraction number
---@param size_arg ImVec2
---@param overlay string
function imgui.progressBar(fraction, size_arg, overlay)
end

--------------------------------

---   allow focusing using TAB/Shift-TAB, enabled by default but you can disable it for certain widgets 
---@param allow_keyboard_focus boolean
function imgui.pushAllowKeyboardFocus(allow_keyboard_focus)
end

--------------------------------

---   in 'repeat' mode, Button*() functions return repeated true in a typematic manner (using io.KeyRepeatDelay/io.KeyRepeatRate setting). Note that you can call IsItemActive() after any Button() to tell if the button is held in the current frame. 
---@param repeat_ boolean
function imgui.pushButtonRepeat(repeat_)
end

--------------------------------

--- 
---@param clip_rect_min ImVec2
---@param clip_rect_max ImVec2
---@param intersect_with_current_clip_rect boolean
function imgui.pushClipRect(clip_rect_min, clip_rect_max, intersect_with_current_clip_rect)
end

--------------------------------

---   push width of items for common large "item+label" widgets. >0.0f: width in pixels, <0.0f align xx pixels to the right of window (so -1.0f always align width to the right side). 0.0f = default to ~2/3 of windows width,  
---@param item_width number
function imgui.pushItemWidth(item_width)
end

--------------------------------

---   push word-wrapping position for Text*() commands. < 0.0f: no wrapping; 0.0f: wrap to end of window (or column); > 0.0f: wrap at 'wrap_pos_x' position in window local space 
function imgui.pushTextWrapPos()
end

--------------------------------

---   use with e.g. if (RadioButton("one", my_value==1)) { my_value = 1; } 
---@param label string
---@param active boolean
---@return boolean
function imgui.radioButton(label, active)
end

--------------------------------

---   ends the Dear ImGui frame, finalize the draw data. You can then get call GetDrawData(). 
function imgui.render()
end

--------------------------------

---  call in main loop. will call RenderWindow/SwapBuffers platform functions for each secondary viewport which doesn't have the ImGuiViewportFlags_Minimized flag set. May be reimplemented by user for custom rendering needs. 
function imgui.renderPlatformWindowsDefault()
end

--------------------------------

---   
function imgui.resetMouseDragDelta()
end

--------------------------------

---   call between widgets or groups to layout them horizontally. X position given in window coordinates. 
function imgui.sameLine()
end

--------------------------------

---   this is automatically called (if io.IniFilename is not empty) a few seconds after any modification that should be reflected in the .ini file (and also by DestroyContext). 
---@param ini_filename string
function imgui.saveIniSettingsToDisk(ini_filename)
end

--------------------------------

---   separator, generally horizontal. inside a menu bar or in horizontal layout mode, this becomes a vertical separator. 
function imgui.separator()
end

--------------------------------

--- 
---@param text string
function imgui.setClipboardText(text)
end

--------------------------------

---   initialize current options (generally on application startup) if you want to select a default format, picker type, etc. User will be able to change many settings, unless you pass the _NoOptions flag to your calls. 
---@param flags number
function imgui.setColorEditOptions(flags)
end

--------------------------------

---   set position of column line (in pixels, from the left side of the contents region). pass -1 to use current column 
---@param column_index number
---@param offset_x number
function imgui.setColumnOffset(column_index, offset_x)
end

--------------------------------

---   set column width (in pixels). pass -1 to use current column 
---@param column_index number
---@param width number
function imgui.setColumnWidth(column_index, width)
end

--------------------------------

---      are using the main, absolute coordinate system. 
---@param local_pos ImVec2
function imgui.setCursorPos(local_pos)
end

--------------------------------

---      GetWindowPos() + GetCursorPos() == GetCursorScreenPos() etc.) 
---@param local_x number
function imgui.setCursorPosX(local_x)
end

--------------------------------

---   
---@param local_y number
function imgui.setCursorPosY(local_y)
end

--------------------------------

---   cursor position in absolute screen coordinates [0..io.DisplaySize] 
---@param pos ImVec2
function imgui.setCursorScreenPos(pos)
end

--------------------------------

---   allow last item to be overlapped by a subsequent item. sometimes useful with invisible buttons, selectables, etc. to catch unused area. 
function imgui.setItemAllowOverlap()
end

--------------------------------

---   make last item the default focused item of a window. 
function imgui.setItemDefaultFocus()
end

--------------------------------

---   focus keyboard on the next widget. Use positive 'offset' to access sub components of a multiple component widget. Use -1 to access previous widget. 
function imgui.setKeyboardFocusHere()
end

--------------------------------

---   set desired cursor type 
---@param cursor_type number
function imgui.setMouseCursor(cursor_type)
end

--------------------------------

---   set next TreeNode/CollapsingHeader open state. 
---@param is_open boolean
---@param cond number
function imgui.setNextItemOpen(is_open, cond)
end

--------------------------------

---   set width of the _next_ common large "item+label" widget. >0.0f: width in pixels, <0.0f align xx pixels to the right of window (so -1.0f always align width to the right side) 
---@param item_width number
function imgui.setNextItemWidth(item_width)
end

--------------------------------

---   set next window background color alpha. helper to easily modify ImGuiCol_WindowBg/ChildBg/PopupBg. you may also use ImGuiWindowFlags_NoBackground. 
---@param alpha number
function imgui.setNextWindowBgAlpha(alpha)
end

--------------------------------

---   set next window collapsed state. call before Begin() 
---@param collapsed boolean
---@param cond number
function imgui.setNextWindowCollapsed(collapsed, cond)
end

--------------------------------

---   set next window content size (~ enforce the range of scrollbars). not including window decorations (title bar, menu bar, etc.). set an axis to 0.0f to leave it automatic. call before Begin() 
---@param size ImVec2
function imgui.setNextWindowContentSize(size)
end

--------------------------------

---  set next window dock id (FIXME-DOCK) 
---@param dock_id number
---@param cond number
function imgui.setNextWindowDockID(dock_id, cond)
end

--------------------------------

---   set next window to be focused / front-most. call before Begin() 
function imgui.setNextWindowFocus()
end

--------------------------------

---   set next window position. call before Begin(). use pivot=(0.5f,0.5f) to center on given point, etc. 
---@param pos ImVec2
---@param cond number
---@param pivot ImVec2
function imgui.setNextWindowPos(pos, cond, pivot)
end

--------------------------------

---   set next window size. set axis to 0.0f to force an auto-fit on this axis. call before Begin() 
---@param size ImVec2
---@param cond number
function imgui.setNextWindowSize(size, cond)
end

--------------------------------

---   set next window size limits. use -1,-1 on either X/Y axis to preserve the current size. Sizes will be rounded down. Use callback to apply non-trivial programmatic constraints. 
---@param size_min ImVec2
---@param size_max ImVec2
function imgui.setNextWindowSizeConstraints(size_min, size_max)
end

--------------------------------

---  set next window viewport 
---@param viewport_id number
function imgui.setNextWindowViewport(viewport_id)
end

--------------------------------

--- adjust scrolling amount to make given position visible. Generally GetCursorStartPos() + offset to compute a valid position.
---@param local_x number
---@param center_x_ratio number
function imgui.setScrollFromPosX(local_x, center_x_ratio)
end

--------------------------------

---   adjust scrolling amount to make given position visible. Generally GetCursorStartPos() + offset to compute a valid position. 
---@param local_y number
---@param center_y_ratio number
function imgui.setScrollFromPosY(local_y, center_y_ratio)
end

--------------------------------

--- adjust scrolling amount to make current cursor position visible. center_x_ratio=0.0: left, 0.5: center, 1.0: right. When using to make a "default/current item" visible, consider using SetItemDefaultFocus() instead.
function imgui.setScrollHereX()
end

--------------------------------

---   adjust scrolling amount to make current cursor position visible. center_y_ratio=0.0: top, 0.5: center, 1.0: bottom. When using to make a "default/current item" visible, consider using SetItemDefaultFocus() instead. 
function imgui.setScrollHereY()
end

--------------------------------

---   set scrolling amount [0..GetScrollMaxX()] 
---@param scroll_x number
function imgui.setScrollX(scroll_x)
end

--------------------------------

---   set scrolling amount [0..GetScrollMaxY()] 
---@param scroll_y number
function imgui.setScrollY(scroll_y)
end

--------------------------------

---   notify TabBar or Docking system of a closed tab/window ahead (useful to reduce visual flicker on reorderable tab bars). For tab-bar: call after BeginTabBar() and before Tab submissions. Otherwise call with a window name. 
---@param tab_or_docked_window_label string
function imgui.setTabItemClosed(tab_or_docked_window_label)
end

--------------------------------

---   set a text-only tooltip, typically use with ImGui::IsItemHovered(). override any previous call to SetTooltip(). 
---@param fmt string
function imgui.setTooltip(fmt)
end

--------------------------------

---   set named window collapsed state 
---@param name string
---@param collapsed boolean
---@param cond number
function imgui.setWindowCollapsed(name, collapsed, cond)
end

--------------------------------

---   set named window to be focused / front-most. use NULL to remove focus. 
---@param name string
function imgui.setWindowFocus(name)
end

--------------------------------

---   set font scale. Adjust IO.FontGlobalScale if you want to scale all windows 
---@param scale number
function imgui.setWindowFontScale(scale)
end

--------------------------------

---   set named window position. 
---@param name string
---@param pos ImVec2
---@param cond number
function imgui.setWindowPos(name, pos, cond)
end

--------------------------------

---   set named window size. set axis to 0.0f to force an auto-fit on this axis. 
---@param name string
---@param size ImVec2
---@param cond number
function imgui.setWindowSize(name, size, cond)
end

--------------------------------

---   add font selector block (not a window), essentially a combo listing the loaded fonts. 
---@param label string
function imgui.showFontSelector(label)
end

--------------------------------

---   add style selector block (not a window), essentially a combo listing the default styles. 
---@param label string
---@return boolean
function imgui.showStyleSelector(label)
end

--------------------------------

---   add basic help/info block (not a window): how to manipulate ImGui as a end-user (mouse/keyboard controls). 
function imgui.showUserGuide()
end

--------------------------------

---   button with FramePadding=(0,0) to easily embed within text 
---@param label string
---@return boolean
function imgui.smallButton(label)
end

--------------------------------

---   add vertical spacing. 
function imgui.spacing()
end

--------------------------------

---   create a Tab behaving like a button. return true when clicked. cannot be selected in the tab bar. 
---@param label string
---@param flags number
---@return boolean
function imgui.tabItemButton(label, flags)
end

--------------------------------

---   simple formatted text 
---@param fmt string
function imgui.text(fmt)
end

--------------------------------

---   shortcut for PushStyleColor(ImGuiCol_Text, col); Text(fmt); PopStyleColor(); 
---@param col ImVec4
---@param fmt string
function imgui.textColored(col, fmt)
end

--------------------------------

---   shortcut for PushStyleColor(ImGuiCol_Text, style.Colors[ImGuiCol_TextDisabled]); Text(fmt); PopStyleColor(); 
---@param fmt string
function imgui.textDisabled(fmt)
end

--------------------------------

---   raw text without formatting. Roughly equivalent to Text("%s", text) but: A) doesn't require null terminated string if 'text_end' is specified, B) it's faster, no memory copy is done, no buffer size limits, recommended for long chunks of text. 
---@param text string
---@param text_end string
function imgui.textUnformatted(text, text_end)
end

--------------------------------

---   shortcut for PushTextWrapPos(0.0f); Text(fmt); PopTextWrapPos();. Note that this won't work on an auto-resizing window if there's no other widgets to extend the window width, yoy may need to set a size using SetNextWindowSize(). 
---@param fmt string
function imgui.textWrapped(fmt)
end

--------------------------------

---   helper variation to easily decorelate the id from the displayed string. Read the FAQ about why and how to use ID. to align arbitrary text at the same level as a TreeNode() you can use Bullet(). 
---@param str_id string
---@param fmt string
---@return boolean
---@overload fun(label:string):boolean
function imgui.treeNode(str_id, fmt)
end

--------------------------------

--- 
---@param str_id string
---@param flags number
---@param fmt string
---@return boolean
---@overload fun(label:string, flags:number):boolean
function imgui.treeNodeEx(str_id, flags, fmt)
end

--------------------------------

---   ~ Unindent()+PopId() 
function imgui.treePop()
end

--------------------------------

---   " 
---@param str_id string
---@overload fun()
function imgui.treePush(str_id)
end

--------------------------------

---   move content position back to the left, by indent_w, or style.IndentSpacing if indent_w <= 0 
function imgui.unindent()
end

--------------------------------

---  call in main loop. will call CreateWindow/ResizeWindow/etc. platform functions for each secondary viewport, and DestroyWindow for each inactive viewport. 
function imgui.updatePlatformWindows()
end



return nil
