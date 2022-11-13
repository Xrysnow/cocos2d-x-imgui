---@type imgui
local im = imgui

-------------------------------------------------------------------------------
--- Flags & Enumerations
-------------------------------------------------------------------------------

local ImGuiWindowFlags = {}
--- Flags for ImGui::Begin()
im.ImGuiWindowFlags = ImGuiWindowFlags
--- Flags for ImGui::Begin()
im.WindowFlags = ImGuiWindowFlags

ImGuiWindowFlags.None = 0
ImGuiWindowFlags.NoTitleBar = 2 ^ 0   --- Disable title-bar
ImGuiWindowFlags.NoResize = 2 ^ 1   --- Disable user resizing with the lower-right grip
ImGuiWindowFlags.NoMove = 2 ^ 2   --- Disable user moving the window
ImGuiWindowFlags.NoScrollbar = 2 ^ 3   --- Disable scrollbars (window can still scroll with mouse or programmatically)
ImGuiWindowFlags.NoScrollWithMouse = 2 ^ 4   --- Disable user vertically scrolling with mouse wheel. On child window mouse wheel will be forwarded to the parent unless NoScrollbar is also set.
ImGuiWindowFlags.NoCollapse = 2 ^ 5   --- Disable user collapsing window by double-clicking on it
ImGuiWindowFlags.AlwaysAutoResize = 2 ^ 6   --- Resize every window to its content every frame
ImGuiWindowFlags.NoBackground = 2 ^ 7   --- Disable drawing background color (WindowBg etc.) and outside border. Similar as using SetNextWindowBgAlpha(0.0f).
ImGuiWindowFlags.NoSavedSettings = 2 ^ 8   --- Never load/save settings in .ini file
ImGuiWindowFlags.NoMouseInputs = 2 ^ 9   --- Disable catching mouse hovering test with pass through.
ImGuiWindowFlags.MenuBar = 2 ^ 10  --- Has a menu-bar
ImGuiWindowFlags.HorizontalScrollbar = 2 ^ 11  --- Allow horizontal scrollbar to appear (off by default). You may use SetNextWindowContentSize(ImVec2(width0.0f)); prior to calling Begin() to specify width. Read code in imgui_demo in the "Horizontal Scrolling" section.
ImGuiWindowFlags.NoFocusOnAppearing = 2 ^ 12  --- Disable taking focus when transitioning from hidden to visible state
ImGuiWindowFlags.NoBringToFrontOnFocus = 2 ^ 13  --- Disable bringing window to front when taking focus (e.g. clicking on it or programmatically giving it focus)
ImGuiWindowFlags.AlwaysVerticalScrollbar = 2 ^ 14  --- Always show vertical scrollbar (even if ContentSize.y < Size.y)
ImGuiWindowFlags.AlwaysHorizontalScrollbar = 2 ^ 15  --- Always show horizontal scrollbar (even if ContentSize.x < Size.x)
ImGuiWindowFlags.AlwaysUseWindowPadding = 2 ^ 16  --- Ensure child windows without border uses style.WindowPadding (ignored by default for non-bordered child windows because more convenient)
ImGuiWindowFlags.NoNavInputs = 2 ^ 18  --- No gamepad/keyboard navigation within the window
ImGuiWindowFlags.NoNavFocus = 2 ^ 19  --- No focusing toward this window with gamepad/keyboard navigation (e.g. skipped by CTRL+TAB)
ImGuiWindowFlags.UnsavedDocument = 2 ^ 20  --- Append '*' to title without affecting the ID as a convenience to avoid using the ### operator. When used in a tab/docking context tab is selected on closure and closure is deferred by one frame to allow code to cancel the closure (with a confirmation popup etc.) without flicker.
ImGuiWindowFlags.NoDocking = 2 ^ 21  --- Disable docking of this window
ImGuiWindowFlags.NoNav = ImGuiWindowFlags.NoNavInputs + ImGuiWindowFlags.NoNavFocus
ImGuiWindowFlags.NoDecoration = ImGuiWindowFlags.NoTitleBar + ImGuiWindowFlags.NoResize + ImGuiWindowFlags.NoScrollbar + ImGuiWindowFlags.NoCollapse
ImGuiWindowFlags.NoInputs = ImGuiWindowFlags.NoMouseInputs + ImGuiWindowFlags.NoNavInputs + ImGuiWindowFlags.NoNavFocus

--- [Internal]
ImGuiWindowFlags.NavFlattened = 2 ^ 23  --- [BETA] Allow gamepad/keyboard navigation to cross over parent border to this child (only use on child that have no scrolling!)

--------------------------------------------------

local ImGuiInputTextFlags = {}
--- Flags for ImGui::InputText()
im.ImGuiInputTextFlags = ImGuiInputTextFlags
--- Flags for ImGui::InputText()
im.InputTextFlags = ImGuiInputTextFlags

ImGuiInputTextFlags.None = 0
ImGuiInputTextFlags.CharsDecimal = 2 ^ 0   --- Allow 0123456789.+-*/
ImGuiInputTextFlags.CharsHexadecimal = 2 ^ 1   --- Allow 0123456789ABCDEFabcdef
ImGuiInputTextFlags.CharsUppercase = 2 ^ 2   --- Turn a..z into A..Z
ImGuiInputTextFlags.CharsNoBlank = 2 ^ 3   --- Filter out spaces tabs
ImGuiInputTextFlags.AutoSelectAll = 2 ^ 4   --- Select entire text when first taking mouse focus
ImGuiInputTextFlags.EnterReturnsTrue = 2 ^ 5   --- Return 'true' when Enter is pressed (as opposed to every time the value was modified). Consider looking at the IsItemDeactivatedAfterEdit() function.
ImGuiInputTextFlags.CallbackCompletion = 2 ^ 6   --- Callback on pressing TAB (for completion handling)
ImGuiInputTextFlags.CallbackHistory = 2 ^ 7   --- Callback on pressing Up/Down arrows (for history handling)
ImGuiInputTextFlags.CallbackAlways = 2 ^ 8   --- Callback on each iteration. User code may query cursor position modify text buffer.
ImGuiInputTextFlags.CallbackCharFilter = 2 ^ 9   --- Callback on character inputs to replace or discard them. Modify 'EventChar' to replace or discard or return 1 in callback to discard.
ImGuiInputTextFlags.AllowTabInput = 2 ^ 10  --- Pressing TAB input a '\t' character into the text field
ImGuiInputTextFlags.CtrlEnterForNewLine = 2 ^ 11  --- In multi-line mode unfocus with Enter add new line with Ctrl+Enter (default is opposite: unfocus with Ctrl+Enter add line with Enter).
ImGuiInputTextFlags.NoHorizontalScroll = 2 ^ 12  --- Disable following the cursor horizontally
ImGuiInputTextFlags.AlwaysOverwrite = 2 ^ 13  --- Overwrite mode
ImGuiInputTextFlags.ReadOnly = 2 ^ 14  --- Read-only mode
ImGuiInputTextFlags.Password = 2 ^ 15  --- Password mode display all characters as '*'
ImGuiInputTextFlags.NoUndoRedo = 2 ^ 16  --- Disable undo/redo. Note that input text owns the text data while active if you want to provide your own undo/redo stack you need e.g. to call ClearActiveID().
ImGuiInputTextFlags.CharsScientific = 2 ^ 17  --- Allow 0123456789.+-*/eE (Scientific notation input)
ImGuiInputTextFlags.CallbackResize = 2 ^ 18  --- Callback on buffer capacity changes request (beyond 'buf_size' parameter value) allowing the string to grow. Notify when the string wants to be resized (for string types which hold a cache of their Size). You will be provided a new BufSize in the callback and NEED to honor it. (see misc/cpp/imgui_stdlib.h for an example of using this)
ImGuiInputTextFlags.CallbackEdit = 2 ^ 19  --- Callback on any edit (note that InputText() already returns true on edit, the callback is useful mainly to manipulate the underlying buffer while focus is active)

--------------------------------------------------

local ImGuiTreeNodeFlags = {}
--- Flags for ImGui::TreeNodeEx() ImGui::CollapsingHeader*()
im.ImGuiTreeNodeFlags = ImGuiTreeNodeFlags
--- Flags for ImGui::TreeNodeEx() ImGui::CollapsingHeader*()
im.TreeNodeFlags = ImGuiTreeNodeFlags

ImGuiTreeNodeFlags.None = 0
ImGuiTreeNodeFlags.Selected = 2 ^ 0   --- Draw as selected
ImGuiTreeNodeFlags.Framed = 2 ^ 1   --- Draw frame with background (e.g. for CollapsingHeader)
ImGuiTreeNodeFlags.AllowItemOverlap = 2 ^ 2   --- Hit testing to allow subsequent widgets to overlap this one
ImGuiTreeNodeFlags.NoTreePushOnOpen = 2 ^ 3   --- Don't do a TreePush() when open (e.g. for CollapsingHeader) = no extra indent nor pushing on ID stack
ImGuiTreeNodeFlags.NoAutoOpenOnLog = 2 ^ 4   --- Don't automatically and temporarily open node when Logging is active (by default logging will automatically open tree nodes)
ImGuiTreeNodeFlags.DefaultOpen = 2 ^ 5   --- Default node to be open
ImGuiTreeNodeFlags.OpenOnDoubleClick = 2 ^ 6   --- Need double-click to open node
ImGuiTreeNodeFlags.OpenOnArrow = 2 ^ 7   --- Only open when clicking on the arrow part. If ImGuiTreeNodeFlags.OpenOnDoubleClick is also set single-click arrow or double-click all box to open.
ImGuiTreeNodeFlags.Leaf = 2 ^ 8   --- No collapsing no arrow (use as a convenience for leaf nodes).
ImGuiTreeNodeFlags.Bullet = 2 ^ 9   --- Display a bullet instead of arrow
ImGuiTreeNodeFlags.FramePadding = 2 ^ 10  --- Use FramePadding (even for an unframed text node) to vertically align text baseline to regular widget height. Equivalent to calling AlignTextToFramePadding().
ImGuiTreeNodeFlags.SpanAllAvailWidth = 2 ^ 11  --- Extend hit box to the right-most edge, even if not framed. This is not the default in order to allow adding other items on the same line. In the future we may refactor the hit system to be front-to-back, allowing natural overlaps and then this can become the default.
ImGuiTreeNodeFlags.NoScrollOnOpen = 2 ^ 12  --- Extend hit box to the left-most and right-most edges (bypass the indented area).
ImGuiTreeNodeFlags.NavLeftJumpsBackHere = 2 ^ 13  --- (WIP) Nav: left direction may move to this TreeNode() from any of its child (items submitted between TreeNode and TreePop)
ImGuiTreeNodeFlags.CollapsingHeader = ImGuiTreeNodeFlags.Framed + ImGuiTreeNodeFlags.NoTreePushOnOpen + ImGuiTreeNodeFlags.NoAutoOpenOnLog

--------------------------------------------------

--- Flags for OpenPopup*(), BeginPopupContext*(), IsPopupOpen() functions.
--- - To be backward compatible with older API which took an 'int mouse_button = 1' argument, we need to treat
---   small flags values as a mouse button index, so we encode the mouse button in the first few bits of the flags.
---   It is therefore guaranteed to be legal to pass a mouse button index in ImGuiPopupFlags.
--- - For the same reason, we exceptionally default the ImGuiPopupFlags argument of BeginPopupContextXXX functions to 1 instead of 0.
---   IMPORTANT: because the default parameter is 1 (==ImGuiPopupFlags_MouseButtonRight), if you rely on the default parameter
---   and want to another another flag, you need to pass in the ImGuiPopupFlags_MouseButtonRight flag.
--- - Multiple buttons currently cannot be combined/or-ed in those functions (we could allow it later).

local ImGuiPopupFlags = {}
im.ImGuiPopupFlags = ImGuiPopupFlags
im.PopupFlags = ImGuiPopupFlags

ImGuiPopupFlags.None = 0
ImGuiPopupFlags.MouseButtonLeft = 0        --- For BeginPopupContext*(): open on Left Mouse release. Guaranteed to always be == 0 (same as ImGuiMouseButton_Left)
ImGuiPopupFlags.MouseButtonRight = 1        --- For BeginPopupContext*(): open on Right Mouse release. Guaranteed to always be == 1 (same as ImGuiMouseButton_Right)
ImGuiPopupFlags.MouseButtonMiddle = 2        --- For BeginPopupContext*(): open on Middle Mouse release. Guaranteed to always be == 2 (same as ImGuiMouseButton_Middle)
ImGuiPopupFlags.MouseButtonMask_ = 0x1F
ImGuiPopupFlags.MouseButtonDefault_ = 1
ImGuiPopupFlags.NoOpenOverExistingPopup = 2 ^ 5   --- For OpenPopup*(), BeginPopupContext*(): don't open if there's already a popup at the same level of the popup stack
ImGuiPopupFlags.NoOpenOverItems = 2 ^ 6   --- For BeginPopupContextWindow(): don't return true when hovering items, only when hovering empty space
ImGuiPopupFlags.AnyPopupId = 2 ^ 7   --- For IsPopupOpen(): ignore the ImGuiID parameter and test for any popup.
ImGuiPopupFlags.AnyPopupLevel = 2 ^ 8   --- For IsPopupOpen(): search/test at any level of the popup stack (default test in the current level)
ImGuiPopupFlags.AnyPopup = ImGuiPopupFlags.AnyPopupId + ImGuiPopupFlags.AnyPopupLevel

--------------------------------------------------

local ImGuiSelectableFlags = {}
--- Flags for ImGui::Selectable()
im.ImGuiSelectableFlags = ImGuiSelectableFlags
--- Flags for ImGui::Selectable()
im.SelectableFlags = ImGuiSelectableFlags

ImGuiSelectableFlags.None = 0
ImGuiSelectableFlags.DontClosePopups = 2 ^ 0   --- Clicking this don't close parent popup window
ImGuiSelectableFlags.SpanAllColumns = 2 ^ 1   --- Selectable frame can span all columns (text will still fit in current column)
ImGuiSelectableFlags.AllowDoubleClick = 2 ^ 2   --- Generate press events on double clicks too
ImGuiSelectableFlags.Disabled = 2 ^ 3    --- Cannot be selected display greyed out text

--------------------------------------------------

local ImGuiComboFlags = {}
--- Flags for ImGui::BeginCombo()
im.ImGuiComboFlags = ImGuiComboFlags
--- Flags for ImGui::BeginCombo()
im.ComboFlags = ImGuiComboFlags

ImGuiComboFlags.None = 0
ImGuiComboFlags.PopupAlignLeft = 2 ^ 0   --- Align the popup toward the left by default
ImGuiComboFlags.HeightSmall = 2 ^ 1   --- Max ~4 items visible. Tip: If you want your combo popup to be a specific size you can use SetNextWindowSizeConstraints() prior to calling BeginCombo()
ImGuiComboFlags.HeightRegular = 2 ^ 2   --- Max ~8 items visible (default)
ImGuiComboFlags.HeightLarge = 2 ^ 3   --- Max ~20 items visible
ImGuiComboFlags.HeightLargest = 2 ^ 4   --- As many fitting items as possible
ImGuiComboFlags.NoArrowButton = 2 ^ 5   --- Display on the preview box without the square arrow button
ImGuiComboFlags.NoPreview = 2 ^ 6   --- Display only a square arrow button
ImGuiComboFlags.HeightMask_ = ImGuiComboFlags.HeightSmall + ImGuiComboFlags.HeightRegular + ImGuiComboFlags.HeightLarge + ImGuiComboFlags.HeightLargest

--------------------------------------------------

local ImGuiTabBarFlags = {}
--- Flags for ImGui::BeginTabBar()
im.ImGuiTabBarFlags = ImGuiTabBarFlags
--- Flags for ImGui::BeginTabBar()
im.TabBarFlags = ImGuiTabBarFlags

ImGuiTabBarFlags.None = 0
ImGuiTabBarFlags.Reorderable = 2 ^ 0   --- Allow manually dragging tabs to re-order them + New tabs are appended at the end of list
ImGuiTabBarFlags.AutoSelectNewTabs = 2 ^ 1   --- Automatically select new tabs when they appear
ImGuiTabBarFlags.TabListPopupButton = 2 ^ 2
ImGuiTabBarFlags.NoCloseWithMiddleMouseButton = 2 ^ 3   --- Disable behavior of closing tabs (that are submitted with p_open != NULL) with middle mouse button. You can still repro this behavior on user's side with if (IsItemHovered() && IsMouseClicked(2)) *p_open = false.
ImGuiTabBarFlags.NoTabListScrollingButtons = 2 ^ 4
ImGuiTabBarFlags.NoTooltip = 2 ^ 5   --- Disable tooltips when hovering a tab
ImGuiTabBarFlags.FittingPolicyResizeDown = 2 ^ 6   --- Resize tabs when they don't fit
ImGuiTabBarFlags.FittingPolicyScroll = 2 ^ 7   --- Add scroll buttons when tabs don't fit
ImGuiTabBarFlags.FittingPolicyMask_ = ImGuiTabBarFlags.FittingPolicyResizeDown + ImGuiTabBarFlags.FittingPolicyScroll
ImGuiTabBarFlags.FittingPolicyDefault_ = ImGuiTabBarFlags.FittingPolicyResizeDown

--------------------------------------------------

local ImGuiTabItemFlags = {}
--- Flags for ImGui::BeginTabItem()
im.ImGuiTabItemFlags = ImGuiTabItemFlags
--- Flags for ImGui::BeginTabItem()
im.TabItemFlags = ImGuiTabItemFlags

ImGuiTabItemFlags.None = 0
ImGuiTabItemFlags.UnsavedDocument = 2 ^ 0   --- Append '*' to title without affecting the ID as a convenience to avoid using the ### operator. Also: tab is selected on closure and closure is deferred by one frame to allow code to undo it without flicker.
ImGuiTabItemFlags.SetSelected = 2 ^ 1   --- Trigger flag to programmatically make the tab selected when calling BeginTabItem()
ImGuiTabItemFlags.NoCloseWithMiddleMouseButton = 2 ^ 2   --- Disable behavior of closing tabs (that are submitted with p_open != NULL) with middle mouse button. You can still repro this behavior on user's side with if (IsItemHovered() && IsMouseClicked(2)) *p_open = false.
ImGuiTabItemFlags.NoPushId = 2 ^ 3    --- Don't call PushID(tab->ID)/PopID() on BeginTabItem()/EndTabItem()
ImGuiTabItemFlags.NoTooltip = 2 ^ 4    --- Disable tooltip for the given tab
ImGuiTabItemFlags.NoReorder = 2 ^ 5   --- Disable reordering this tab or having another tab cross over this tab
ImGuiTabItemFlags.Leading = 2 ^ 6   --- Enforce the tab position to the left of the tab bar (after the tab list popup button)
ImGuiTabItemFlags.Trailing = 2 ^ 7    --- Enforce the tab position to the right of the tab bar (before the scrolling buttons)

--------------------------------------------------

local ImGuiTableFlags = {}
im.ImGuiTableFlags = ImGuiTableFlags
--- Flags for ImGui::BeginTable()
--- [BETA API] API may evolve slightly! If you use this, please update to the next version when it comes out!
--- - Important! Sizing policies have complex and subtle side effects, more so than you would expect.
---   Read comments/demos carefully + experiment with live demos to get acquainted with them.
--- - The DEFAULT sizing policies are:
---    - Default to ImGuiTableFlags_SizingFixedFit    if ScrollX is on, or if host window has ImGuiWindowFlags_AlwaysAutoResize.
---    - Default to ImGuiTableFlags_SizingStretchSame if ScrollX is off.
--- - When ScrollX is off:
---    - Table defaults to ImGuiTableFlags_SizingStretchSame -> all Columns defaults to ImGuiTableColumnFlags_WidthStretch with same weight.
---    - Columns sizing policy allowed: Stretch (default), Fixed/Auto.
---    - Fixed Columns will generally obtain their requested width (unless the table cannot fit them all).
---    - Stretch Columns will share the remaining width.
---    - Mixed Fixed/Stretch columns is possible but has various side-effects on resizing behaviors.
---      The typical use of mixing sizing policies is: any number of LEADING Fixed columns, followed by one or two TRAILING Stretch columns.
---      (this is because the visible order of columns have subtle but necessary effects on how they react to manual resizing).
--- - When ScrollX is on:
---    - Table defaults to ImGuiTableFlags_SizingFixedFit -> all Columns defaults to ImGuiTableColumnFlags_WidthFixed
---    - Columns sizing policy allowed: Fixed/Auto mostly.
---    - Fixed Columns can be enlarged as needed. Table will show an horizontal scrollbar if needed.
---    - When using auto-resizing (non-resizable) fixed columns, querying the content width to use item right-alignment e.g. SetNextItemWidth(-FLT_MIN) doesn't make sense, would create a feedback loop.
---    - Using Stretch columns OFTEN DOES NOT MAKE SENSE if ScrollX is on, UNLESS you have specified a value for 'inner_width' in BeginTable().
---      If you specify a value for 'inner_width' then effectively the scrolling space is known and Stretch or mixed Fixed/Stretch columns become meaningful again.
--- - Read on documentation at the top of imgui_tables.cpp for details.
im.TableFlags = ImGuiTableFlags

-- Features
ImGuiTableFlags.None = 0
ImGuiTableFlags.Resizable = 2 ^ 0 --- Enable resizing columns.
ImGuiTableFlags.Reorderable = 2 ^ 1 --- Enable reordering columns in header row (need calling TableSetupColumn() + TableHeadersRow() to display headers)
ImGuiTableFlags.Hideable = 2 ^ 2 --- Enable hiding/disabling columns in context menu.
ImGuiTableFlags.Sortable = 2 ^ 3 --- Enable sorting. Call TableGetSortSpecs() to obtain sort specs. Also see ImGuiTableFlags_SortMulti and ImGuiTableFlags_SortTristate.
ImGuiTableFlags.NoSavedSettings = 2 ^ 4 --- Disable persisting columns order, width and sort settings in the .ini file.
ImGuiTableFlags.ContextMenuInBody = 2 ^ 5 --- Right-click on columns body/contents will display table context menu. By default it is available in TableHeadersRow().
-- Decorations
ImGuiTableFlags.RowBg = 2 ^ 6 --- Set each RowBg color with ImGuiCol_TableRowBg or ImGuiCol_TableRowBgAlt (equivalent of calling TableSetBgColor with ImGuiTableBgFlags_RowBg0 on each row manually)
ImGuiTableFlags.BordersInnerH = 2 ^ 7 --- Draw horizontal borders between rows.
ImGuiTableFlags.BordersOuterH = 2 ^ 8 --- Draw horizontal borders at the top and bottom.
ImGuiTableFlags.BordersInnerV = 2 ^ 9 --- Draw vertical borders between columns.
ImGuiTableFlags.BordersOuterV = 2 ^ 10 --- Draw vertical borders on the left and right sides.
ImGuiTableFlags.BordersH = bit.bor(ImGuiTableFlags.BordersInnerH, ImGuiTableFlags.BordersOuterH) --- Draw horizontal borders.
ImGuiTableFlags.BordersV = bit.bor(ImGuiTableFlags.BordersInnerV, ImGuiTableFlags.BordersOuterV) --- Draw vertical borders.
ImGuiTableFlags.BordersInner = bit.bor(ImGuiTableFlags.BordersInnerV, ImGuiTableFlags.BordersInnerH) --- Draw inner borders.
ImGuiTableFlags.BordersOuter = bit.bor(ImGuiTableFlags.BordersOuterV, ImGuiTableFlags.BordersOuterH) --- Draw outer borders.
ImGuiTableFlags.Borders = bit.bor(ImGuiTableFlags.BordersInner, ImGuiTableFlags.BordersOuter) --- Draw all borders.
ImGuiTableFlags.NoBordersInBody = 2 ^ 11 --- [ALPHA] Disable vertical borders in columns Body (borders will always appears in Headers). -> May move to style
ImGuiTableFlags.NoBordersInBodyUntilResize = 2 ^ 12 --- [ALPHA] Disable vertical borders in columns Body until hovered for resize (borders will always appears in Headers). -> May move to style
-- Sizing Policy (read above for defaults)
ImGuiTableFlags.SizingFixedFit = 2 ^ 13 --- Columns default to _WidthFixed or _WidthAuto (if resizable or not resizable), matching contents width.
ImGuiTableFlags.SizingFixedSame = 2 * 2 ^ 13 --- Columns default to _WidthFixed or _WidthAuto (if resizable or not resizable), matching the maximum contents width of all columns. Implicitly enable ImGuiTableFlags_NoKeepColumnsVisible.
ImGuiTableFlags.SizingStretchProp = 3 * 2 ^ 13 --- Columns default to _WidthStretch with default weights proportional to each columns contents widths.
ImGuiTableFlags.SizingStretchSame = 4 * 2 ^ 13 --- Columns default to _WidthStretch with default weights all equal, unless overridden by TableSetupColumn().
-- Sizing Extra Options
ImGuiTableFlags.NoHostExtendX = 2 ^ 16 --- Make outer width auto-fit to columns, overriding outer_size.x value. Only available when ScrollX/ScrollY are disabled and Stretch columns are not used.
ImGuiTableFlags.NoHostExtendY = 2 ^ 17 --- Make outer height stop exactly at outer_size.y (prevent auto-extending table past the limit). Only available when ScrollX/ScrollY are disabled. Data below the limit will be clipped and not visible.
ImGuiTableFlags.NoKeepColumnsVisible = 2 ^ 18 --- Disable keeping column always minimally visible when ScrollX is off and table gets too small. Not recommended if columns are resizable.
ImGuiTableFlags.PreciseWidths = 2 ^ 19 --- Disable distributing remainder width to stretched columns (width allocation on a 100-wide table with 3 columns: Without this flag: 33,33,34. With this flag: 33,33,33). With larger number of columns, resizing will appear to be less smooth.
-- Clipping
ImGuiTableFlags.NoClip = 2 ^ 20 --- Disable clipping rectangle for every individual columns (reduce draw command count, items will be able to overflow into other columns). Generally incompatible with TableSetupScrollFreeze().
-- Padding
ImGuiTableFlags.PadOuterX = 2 ^ 21 --- Default if BordersOuterV is on. Enable outer-most padding. Generally desirable if you have headers.
ImGuiTableFlags.NoPadOuterX = 2 ^ 22 --- Default if BordersOuterV is off. Disable outer-most padding.
ImGuiTableFlags.NoPadInnerX = 2 ^ 23 --- Disable inner padding between columns (double inner padding if BordersOuterV is on, single inner padding if BordersOuterV is off).
-- Scrolling
ImGuiTableFlags.ScrollX = 2 ^ 24 --- Enable horizontal scrolling. Require 'outer_size' parameter of BeginTable() to specify the container size. Changes default sizing policy. Because this create a child window, ScrollY is currently generally recommended when using ScrollX.
ImGuiTableFlags.ScrollY = 2 ^ 25 --- Enable vertical scrolling. Require 'outer_size' parameter of BeginTable() to specify the container size.
-- Sorting
ImGuiTableFlags.SortMulti = 2 ^ 26 --- Hold shift when clicking headers to sort on multiple column. TableGetSortSpecs() may return specs where (SpecsCount > 1).
ImGuiTableFlags.SortTristate = 2 ^ 27 --- Allow no sorting, disable default sorting. TableGetSortSpecs() may return specs where (SpecsCount == 0).

--------------------------------------------------

local ImGuiTableColumnFlags = {}
--- Flags for ImGui::TableSetupColumn()
im.ImGuiTableColumnFlags = ImGuiTableColumnFlags
--- Flags for ImGui::TableSetupColumn()
im.TableColumnFlags = ImGuiTableColumnFlags

-- Input configuration flags
ImGuiTableColumnFlags.None = 0
ImGuiTableColumnFlags.DefaultHide = 2 ^ 0 --- Default as a hidden/disabled column.
ImGuiTableColumnFlags.DefaultSort = 2 ^ 1 --- Default as a sorting column.
ImGuiTableColumnFlags.WidthStretch = 2 ^ 2 --- Column will stretch. Preferable with horizontal scrolling disabled (default if table sizing policy is _SizingStretchSame or _SizingStretchProp).
ImGuiTableColumnFlags.WidthFixed = 2 ^ 3 --- Column will not stretch. Preferable with horizontal scrolling enabled (default if table sizing policy is _SizingFixedFit and table is resizable).
ImGuiTableColumnFlags.NoResize = 2 ^ 4 --- Disable manual resizing.
ImGuiTableColumnFlags.NoReorder = 2 ^ 5 --- Disable manual reordering this column, this will also prevent other columns from crossing over this column.
ImGuiTableColumnFlags.NoHide = 2 ^ 6 --- Disable ability to hide/disable this column.
ImGuiTableColumnFlags.NoClip = 2 ^ 7 --- Disable clipping for this column (all NoClip columns will render in a same draw command).
ImGuiTableColumnFlags.NoSort = 2 ^ 8 --- Disable ability to sort on this field (even if ImGuiTableFlags_Sortable is set on the table).
ImGuiTableColumnFlags.NoSortAscending = 2 ^ 9 --- Disable ability to sort in the ascending direction.
ImGuiTableColumnFlags.NoSortDescending = 2 ^ 10 --- Disable ability to sort in the descending direction.
ImGuiTableColumnFlags.NoHeaderWidth = 2 ^ 11 --- Disable header text width contribution to automatic column width.
ImGuiTableColumnFlags.PreferSortAscending = 2 ^ 12 --- Make the initial sort direction Ascending when first sorting on this column (default).
ImGuiTableColumnFlags.PreferSortDescending = 2 ^ 13 --- Make the initial sort direction Descending when first sorting on this column.
ImGuiTableColumnFlags.IndentEnable = 2 ^ 14 --- Use current Indent value when entering cell (default for column 0).
ImGuiTableColumnFlags.IndentDisable = 2 ^ 15 --- Ignore current Indent value when entering cell (default for columns > 0). Indentation changes _within_ the cell will still be honored.
-- Output status flags, read-only via TableGetColumnFlags()
ImGuiTableColumnFlags.IsEnabled = 2 ^ 20 --- Status: is enabled == not hidden by user/api (referred to as "Hide" in _DefaultHide and _NoHide) flags.
ImGuiTableColumnFlags.IsVisible = 2 ^ 21 --- Status: is visible == is enabled AND not clipped by scrolling.
ImGuiTableColumnFlags.IsSorted = 2 ^ 22 --- Status: is currently part of the sort specs
ImGuiTableColumnFlags.IsHovered = 2 ^ 23 --- Status: is hovered by mouse

--------------------------------------------------

local ImGuiTableRowFlags = {}
--- Flags for ImGui::TableNextRow()
im.ImGuiTableRowFlags = ImGuiTableRowFlags
--- Flags for ImGui::TableNextRow()
im.TableRowFlags = ImGuiTableRowFlags

ImGuiTableRowFlags.None = 0
ImGuiTableRowFlags.Headers = 2 ^ 0 --- Identify header row (set default background color + width of its contents accounted different for auto column width)

--------------------------------------------------

local ImGuiTableBgTarget = {}
im.ImGuiTableBgTarget = ImGuiTableBgTarget
--- Enum for ImGui::TableSetBgColor()
--- Background colors are rendering in 3 layers:
---  - Layer 0: draw with RowBg0 color if set, otherwise draw with ColumnBg0 if set.
---  - Layer 1: draw with RowBg1 color if set, otherwise draw with ColumnBg1 if set.
---  - Layer 2: draw with CellBg color if set.
--- The purpose of the two row/columns layers is to let you decide if a background color changes should override or blend with the existing color.
--- When using ImGuiTableFlags_RowBg on the table, each row has the RowBg0 color automatically set for odd/even rows.
--- If you set the color of RowBg0 target, your color will override the existing RowBg0 color.
--- If you set the color of RowBg1 or ColumnBg1 target, your color will blend over the RowBg0 color.
im.TableBgTarget = ImGuiTableBgTarget

ImGuiTableBgTarget.None = 0
ImGuiTableBgTarget.RowBg0 = 1 --- Set row background color 0 (generally used for background, automatically set when ImGuiTableFlags_RowBg is used)
ImGuiTableBgTarget.RowBg1 = 2 --- Set row background color 1 (generally used for selection marking)
ImGuiTableBgTarget.CellBg = 3 --- Set cell background color (top-most color)

--------------------------------------------------

local ImGuiFocusedFlags = {}
--- Flags for ImGui::IsWindowFocused()
im.ImGuiFocusedFlags = ImGuiFocusedFlags
--- Flags for ImGui::IsWindowFocused()
im.FocusedFlags = ImGuiFocusedFlags

ImGuiFocusedFlags.None = 0
ImGuiFocusedFlags.ChildWindows = 2 ^ 0   --- IsWindowFocused(): Return true if any children of the window is focused
ImGuiFocusedFlags.RootWindow = 2 ^ 1   --- IsWindowFocused(): Test from root window (top most parent of the current hierarchy)
ImGuiFocusedFlags.AnyWindow = 2 ^ 2   --- IsWindowFocused(): Return true if any window is focused. Important: If you are trying to tell how to dispatch your low-level inputs, do NOT use this. Use 'io.WantCaptureMouse' instead! Please read the FAQ!
ImGuiFocusedFlags.RootAndChildWindows = ImGuiFocusedFlags.RootWindow + ImGuiFocusedFlags.ChildWindows

--------------------------------------------------

local ImGuiHoveredFlags = {}
--- Flags for ImGui::IsItemHovered() ImGui::IsWindowHovered()
--- Note: if you are trying to check whether your mouse should be dispatched to Dear ImGui or to your app, you should use 'io.WantCaptureMouse' instead! Please read the FAQ!
--- Note: windows with the ImGuiWindowFlags.NoInputs flag are ignored by IsWindowHovered() calls.
im.ImGuiHoveredFlags = ImGuiHoveredFlags
--- Flags for ImGui::IsItemHovered() ImGui::IsWindowHovered()
--- Note: if you are trying to check whether your mouse should be dispatched to Dear ImGui or to your app, you should use 'io.WantCaptureMouse' instead! Please read the FAQ!
--- Note: windows with the ImGuiWindowFlags.NoInputs flag are ignored by IsWindowHovered() calls.
im.HoveredFlags = ImGuiHoveredFlags

ImGuiHoveredFlags.None = 0        --- Return true if directly over the item/window not obstructed by another window not obstructed by an active popup or modal blocking inputs under them.
ImGuiHoveredFlags.ChildWindows = 2 ^ 0   --- IsWindowHovered() only: Return true if any children of the window is hovered
ImGuiHoveredFlags.RootWindow = 2 ^ 1   --- IsWindowHovered() only: Test from root window (top most parent of the current hierarchy)
ImGuiHoveredFlags.AnyWindow = 2 ^ 2   --- IsWindowHovered() only: Return true if any window is hovered
ImGuiHoveredFlags.AllowWhenBlockedByPopup = 2 ^ 3   --- Return true even if a popup window is normally blocking access to this item/window
--ImGuiHoveredFlags.AllowWhenBlockedByModal     = 2 ^ 4   --- Return true even if a modal popup window is normally blocking access to this item/window. FIXME-TODO: Unavailable yet.
ImGuiHoveredFlags.AllowWhenBlockedByActiveItem = 2 ^ 5   --- Return true even if an active item is blocking access to this item/window. Useful for Drag and Drop patterns.
ImGuiHoveredFlags.AllowWhenOverlapped = 2 ^ 6   --- Return true even if the position is overlapped by another window
ImGuiHoveredFlags.AllowWhenDisabled = 2 ^ 7   --- Return true even if the item is disabled
ImGuiHoveredFlags.RectOnly = ImGuiHoveredFlags.AllowWhenBlockedByPopup + ImGuiHoveredFlags.AllowWhenBlockedByActiveItem + ImGuiHoveredFlags.AllowWhenOverlapped
ImGuiHoveredFlags.RootAndChildWindows = ImGuiHoveredFlags.RootWindow + ImGuiHoveredFlags.ChildWindows

--------------------------------------------------

local ImGuiDockNodeFlags = {}
--- Flags for ImGui::DockSpace(), shared/inherited by child nodes.
--- (Some flags can be applied to individual nodes directly)
--- FIXME-DOCK: Also see ImGuiDockNodeFlagsPrivate_ which may involve using the WIP and internal DockBuilder api.
im.ImGuiDockNodeFlags = ImGuiDockNodeFlags
--- Flags for ImGui::DockSpace(), shared/inherited by child nodes.
--- (Some flags can be applied to individual nodes directly)
--- FIXME-DOCK: Also see ImGuiDockNodeFlagsPrivate_ which may involve using the WIP and internal DockBuilder api.
im.DockNodeFlags = ImGuiDockNodeFlags

ImGuiDockNodeFlags.None = 0
ImGuiDockNodeFlags.KeepAliveOnly = 2 ^ 0   --- Shared       --- Don't display the dockspace node but keep it alive. Windows docked into this dockspace node won't be undocked.
---ImGuiDockNodeFlags.NoCentralNode              = 2 ^ 1   --- Shared       --- Disable Central Node (the node which can stay empty)
ImGuiDockNodeFlags.NoDockingInCentralNode = 2 ^ 2   --- Shared       --- Disable docking inside the Central Node, which will be always kept empty.
ImGuiDockNodeFlags.PassthruCentralNode = 2 ^ 3   --- Shared       --- Enable passthru dockspace: 1) DockSpace() will render a ImGuiCol_WindowBg background covering everything excepted the Central Node when empty. Meaning the host window should probably use SetNextWindowBgAlpha(0.0f) prior to Begin() when using this. 2) When Central Node is empty: let inputs pass-through + won't display a DockingEmptyBg background. See demo for details.
ImGuiDockNodeFlags.NoSplit = 2 ^ 4   --- Shared/Local --- Disable splitting the node into smaller nodes. Useful e.g. when embedding dockspaces into a main root one (the root one may have splitting disabled to reduce confusion). Note: when turned off, existing splits will be preserved.
ImGuiDockNodeFlags.NoResize = 2 ^ 5   --- Shared/Local --- Disable resizing node using the splitter/separators. Useful with programatically setup dockspaces.
ImGuiDockNodeFlags.AutoHideTabBar = 2 ^ 6    --- Shared/Local --- Tab bar will automatically hide when there is a single window in the dock node.

--------------------------------------------------

local ImGuiDragDropFlags = {}
--- Flags for ImGui::BeginDragDropSource() ImGui::AcceptDragDropPayload()
im.ImGuiDragDropFlags = ImGuiDragDropFlags
--- Flags for ImGui::BeginDragDropSource() ImGui::AcceptDragDropPayload()
im.DragDropFlags = ImGuiDragDropFlags

ImGuiDragDropFlags.None = 0
--- BeginDragDropSource() flags
ImGuiDragDropFlags.SourceNoPreviewTooltip = 2 ^ 0   --- By default a successful call to BeginDragDropSource opens a tooltip so you can display a preview or description of the source contents. This flag disable this behavior.
ImGuiDragDropFlags.SourceNoDisableHover = 2 ^ 1   --- By default when dragging we clear data so that IsItemHovered() will return false to avoid subsequent user code submitting tooltips. This flag disable this behavior so you can still call IsItemHovered() on the source item.
ImGuiDragDropFlags.SourceNoHoldToOpenOthers = 2 ^ 2   --- Disable the behavior that allows to open tree nodes and collapsing header by holding over them while dragging a source item.
ImGuiDragDropFlags.SourceAllowNullID = 2 ^ 3   --- Allow items such as Text() Image() that have no unique identifier to be used as drag source by manufacturing a temporary identifier based on their window-relative position. This is extremely unusual within the dear imgui ecosystem and so we made it explicit.
ImGuiDragDropFlags.SourceExtern = 2 ^ 4   --- External source (from outside of imgui) won't attempt to read current item/window info. Will always return true. Only one Extern source can be active simultaneously.
ImGuiDragDropFlags.SourceAutoExpirePayload = 2 ^ 5   --- Automatically expire the payload if the source cease to be submitted (otherwise payloads are persisting while being dragged)
--- AcceptDragDropPayload() flags
ImGuiDragDropFlags.AcceptBeforeDelivery = 2 ^ 10  --- AcceptDragDropPayload() will returns true even before the mouse button is released. You can then call IsDelivery() to test if the payload needs to be delivered.
ImGuiDragDropFlags.AcceptNoDrawDefaultRect = 2 ^ 11  --- Do not draw the default highlight rectangle when hovering over target.
ImGuiDragDropFlags.AcceptNoPreviewTooltip = 2 ^ 12  --- Request hiding the BeginDragDropSource tooltip from the BeginDragDropTarget site.
ImGuiDragDropFlags.AcceptPeekOnly = ImGuiDragDropFlags.AcceptBeforeDelivery + ImGuiDragDropFlags.AcceptNoDrawDefaultRect  --- For peeking ahead and inspecting the payload before delivery.

--------------------------------------------------

local ImGuiDataType = {}
--- A primary data type
im.ImGuiDataType = ImGuiDataType
--- A primary data type
im.DataType = ImGuiDataType

ImGuiDataType.S8 = 0    --- char
ImGuiDataType.U8 = 1    --- unsigned char
ImGuiDataType.S16 = 2    --- short
ImGuiDataType.U16 = 3    --- unsigned short
ImGuiDataType.S32 = 4    --- int
ImGuiDataType.U32 = 5    --- unsigned int
ImGuiDataType.S64 = 6    --- long long / __int64
ImGuiDataType.U64 = 7    --- unsigned long long / unsigned __int64
ImGuiDataType.Float = 8    --- float
ImGuiDataType.Double = 9    --- double
ImGuiDataType.COUNT = 10

--------------------------------------------------

local ImGuiDir = {}
--- A cardinal direction
im.ImGuiDir = ImGuiDir
--- A cardinal direction
im.Dir = ImGuiDir

ImGuiDir.None = -1
ImGuiDir.Left = 0
ImGuiDir.Right = 1
ImGuiDir.Up = 2
ImGuiDir.Down = 3
ImGuiDir.COUNT = 4

--------------------------------------------------

local ImGuiSortDirection = {}
--- A sorting direction
im.ImGuiSortDirection = ImGuiSortDirection
--- A sorting direction
im.SortDirection = ImGuiSortDirection

ImGuiSortDirection.None = 0
ImGuiSortDirection.Ascending = 1 --- Ascending = 0->9, A->Z etc.
ImGuiSortDirection.Descending = 2 --- Descending = 9->0, Z->A etc.

--------------------------------------------------

local ImGuiKey = {}
--- User fill ImGuiIO.KeyMap[] array with indices into the ImGuiIO.KeysDown[512] array
im.ImGuiKey = ImGuiKey
--- User fill ImGuiIO.KeyMap[] array with indices into the ImGuiIO.KeysDown[512] array
im.Key = ImGuiKey

ImGuiKey.Tab = 0
ImGuiKey.LeftArrow = 1
ImGuiKey.RightArrow = 2
ImGuiKey.UpArrow = 3
ImGuiKey.DownArrow = 4
ImGuiKey.PageUp = 5
ImGuiKey.PageDown = 6
ImGuiKey.Home = 7
ImGuiKey.End = 8
ImGuiKey.Insert = 9
ImGuiKey.Delete = 10
ImGuiKey.Backspace = 11
ImGuiKey.Space = 12
ImGuiKey.Enter = 13
ImGuiKey.Escape = 14
ImGuiKey.A = 15    ---     for text edit CTRL+A: select all
ImGuiKey.C = 16    ---     for text edit CTRL+C: copy
ImGuiKey.V = 17    ---     for text edit CTRL+V: paste
ImGuiKey.X = 18    ---     for text edit CTRL+X: cut
ImGuiKey.Y = 19    ---     for text edit CTRL+Y: redo
ImGuiKey.Z = 20    ---     for text edit CTRL+Z: undo
ImGuiKey.COUNT = 21

--------------------------------------------------

local ImGuiKeyModFlags = {}
--- To test io.KeyMods (which is a combination of individual fields io.KeyCtrl, io.KeyShift, io.KeyAlt set by user/backend)
im.ImGuiKeyModFlags = ImGuiKeyModFlags
--- To test io.KeyMods (which is a combination of individual fields io.KeyCtrl, io.KeyShift, io.KeyAlt set by user/backend)
im.KeyModFlags = ImGuiKeyModFlags

ImGuiKeyModFlags.None = 0
ImGuiKeyModFlags.Ctrl = 2 ^ 0
ImGuiKeyModFlags.Shift = 2 ^ 1
ImGuiKeyModFlags.Alt = 2 ^ 2
ImGuiKeyModFlags.Super = 2 ^ 3

--------------------------------------------------

local ImGuiNavInput = {}
--- Gamepad/Keyboard navigation
--- Keyboard: Set io.ConfigFlags |= ImGuiConfigFlags.NavEnableKeyboard to enable. NewFrame() will automatically fill io.NavInputs[] based on your io.KeysDown[] + io.KeyMap[] arrays.
--- Gamepad:  Set io.ConfigFlags |= ImGuiConfigFlags.NavEnableGamepad to enable. Backend: set ImGuiBackendFlags.HasGamepad and fill the io.NavInputs[] fields before calling NewFrame(). Note that io.NavInputs[] is cleared by EndFrame().
--- Read instructions in imgui.cpp for more details. Download PNG/PSD at http://dearimgui.org/controls_sheets.
im.ImGuiNavInput = ImGuiNavInput
--- Gamepad/Keyboard navigation
--- Keyboard: Set io.ConfigFlags |= ImGuiConfigFlags.NavEnableKeyboard to enable. NewFrame() will automatically fill io.NavInputs[] based on your io.KeysDown[] + io.KeyMap[] arrays.
--- Gamepad:  Set io.ConfigFlags |= ImGuiConfigFlags.NavEnableGamepad to enable. Backend: set ImGuiBackendFlags.HasGamepad and fill the io.NavInputs[] fields before calling NewFrame(). Note that io.NavInputs[] is cleared by EndFrame().
--- Read instructions in imgui.cpp for more details. Download PNG/PSD at http://dearimgui.org/controls_sheets.
im.NavInput = ImGuiNavInput

--- Gamepad Mapping
ImGuiNavInput.Activate = 0   --- activate / open / toggle / tweak value       --- e.g. Cross  (PS4) A (Xbox) A (Switch) Space (Keyboard)
ImGuiNavInput.Cancel = 1   --- cancel / close / exit                        --- e.g. Circle (PS4) B (Xbox) B (Switch) Escape (Keyboard)
ImGuiNavInput.Input = 2   --- text input / on-screen keyboard              --- e.g. Triang.(PS4) Y (Xbox) X (Switch) Return (Keyboard)
ImGuiNavInput.Menu = 3   --- tap: toggle menu / hold: focus move resize --- e.g. Square (PS4) X (Xbox) Y (Switch) Alt (Keyboard)
ImGuiNavInput.DpadLeft = 4   --- move / tweak / resize window (w/ PadMenu)    --- e.g. D-pad Left/Right/Up/Down (Gamepads) Arrow keys (Keyboard)
ImGuiNavInput.DpadRight = 5   --
ImGuiNavInput.DpadUp = 6   --
ImGuiNavInput.DpadDown = 7   --
ImGuiNavInput.LStickLeft = 8   --- scroll / move window (w/ PadMenu)            --- e.g. Left Analog Stick Left/Right/Up/Down
ImGuiNavInput.LStickRight = 9   --
ImGuiNavInput.LStickUp = 10  --
ImGuiNavInput.LStickDown = 11  --
ImGuiNavInput.FocusPrev = 12  --- next window (w/ PadMenu)                     --- e.g. L1 or L2 (PS4) LB or LT (Xbox) L or ZL (Switch)
ImGuiNavInput.FocusNext = 13  --- prev window (w/ PadMenu)                     --- e.g. R1 or R2 (PS4) RB or RT (Xbox) R or ZL (Switch)
ImGuiNavInput.TweakSlow = 14  --- slower tweaks                                --- e.g. L1 or L2 (PS4) LB or LT (Xbox) L or ZL (Switch)
ImGuiNavInput.TweakFast = 15  --- faster tweaks                                --- e.g. R1 or R2 (PS4) RB or RT (Xbox) R or ZL (Switch)

--------------------------------------------------

local ImGuiConfigFlags = {}
--- Configuration flags stored in io.ConfigFlags. Set by user/application.
im.ImGuiConfigFlags = ImGuiConfigFlags
--- Configuration flags stored in io.ConfigFlags. Set by user/application.
im.ConfigFlags = ImGuiConfigFlags

ImGuiConfigFlags.None = 0
ImGuiConfigFlags.NavEnableKeyboard = 2 ^ 0   --- Master keyboard navigation enable flag. NewFrame() will automatically fill io.NavInputs[] based on io.KeysDown[].
ImGuiConfigFlags.NavEnableGamepad = 2 ^ 1   --- Master gamepad navigation enable flag. This is mostly to instruct your imgui backend to fill io.NavInputs[]. Back-end also needs to set ImGuiBackendFlags.HasGamepad.
ImGuiConfigFlags.NavEnableSetMousePos = 2 ^ 2   --- Instruct navigation to move the mouse cursor. May be useful on TV/console systems where moving a virtual mouse is awkward. Will update io.MousePos and set io.WantSetMousePos=true. If enabled you MUST honor io.WantSetMousePos requests in your backend, otherwise ImGui will react as if the mouse is jumping around back and forth.
ImGuiConfigFlags.NavNoCaptureKeyboard = 2 ^ 3   --- Instruct navigation to not set the io.WantCaptureKeyboard flag when io.NavActive is set.
ImGuiConfigFlags.NoMouse = 2 ^ 4   --- Instruct imgui to clear mouse position/buttons in NewFrame(). This allows ignoring the mouse information set by the backend.
ImGuiConfigFlags.NoMouseCursorChange = 2 ^ 5   --- Instruct backend to not alter mouse cursor shape and visibility. Use if the backend cursor changes are interfering with yours and you don't want to use SetMouseCursor() to change mouse cursor. You may want to honor requests from imgui by reading GetMouseCursor() yourself instead.

-- [BETA] Docking
ImGuiConfigFlags.DockingEnable = 2 ^ 6   --- Docking enable flags. Use SHIFT to dock window into another (or without SHIFT if io.ConfigDockingWithShift = false).

-- [BETA] Viewports
ImGuiConfigFlags.ViewportsEnable = 2 ^ 10  --- Viewport enable flags (require both ImGuiConfigFlags_PlatformHasViewports + ImGuiConfigFlags_RendererHasViewports set by the respective back-ends)

-- User storage (to allow your back-end/engine to communicate to code that may be shared between multiple projects. Those flags are not used by core ImGui)
ImGuiConfigFlags.IsSRGB = 2 ^ 20  --- Application is SRGB-aware.
ImGuiConfigFlags.IsTouchScreen = 2 ^ 21   --- Application is using a touch screen instead of a mouse.

--------------------------------------------------

local ImGuiBackendFlags = {}
--- Backend capabilities flags stored in io.BackendFlags. Set by imgui_impl_xxx or custom backend.
im.ImGuiBackendFlags = ImGuiBackendFlags
--- Backend capabilities flags stored in io.BackendFlags. Set by imgui_impl_xxx or custom backend.
im.BackendFlags = ImGuiBackendFlags

ImGuiBackendFlags.None = 0
ImGuiBackendFlags.HasGamepad = 2 ^ 0   --- Backend Platform supports gamepad and currently has one connected.
ImGuiBackendFlags.HasMouseCursors = 2 ^ 1   --- Backend Platform supports honoring GetMouseCursor() value to change the OS cursor shape.
ImGuiBackendFlags.HasSetMousePos = 2 ^ 2   --- Backend Platform supports io.WantSetMousePos requests to reposition the OS mouse position (only used if ImGuiConfigFlags_NavEnableSetMousePos is set).
ImGuiBackendFlags.RendererHasVtxOffset = 2 ^ 3   --- Backend Renderer supports ImDrawCmd::VtxOffset. This enables output of large meshes (64K+ vertices) while still using 16-bit indices.

-- [BETA] Viewports
ImGuiBackendFlags.PlatformHasViewports = 2 ^ 10  --- Backend Platform supports multiple viewports.
ImGuiBackendFlags.HasMouseHoveredViewport = 2 ^ 11  --- Backend Platform supports setting io.MouseHoveredViewport to the viewport directly under the mouse _IGNORING_ viewports with the ImGuiViewportFlags_NoInputs flag and _REGARDLESS_ of whether another viewport is focused and may be capturing the mouse. This information is _NOT EASY_ to provide correctly with most high-level engines! Don't set this without studying _carefully_ how the backends handle ImGuiViewportFlags_NoInputs!
ImGuiBackendFlags.RendererHasViewports = 2 ^ 12   --- Backend Renderer supports multiple viewports.

--------------------------------------------------

local ImGuiCol = {}
--- Enumeration for PushStyleColor() / PopStyleColor()
im.ImGuiCol = ImGuiCol
--- Enumeration for PushStyleColor() / PopStyleColor()
im.Col = ImGuiCol

ImGuiCol.Text = 0
ImGuiCol.TextDisabled = 1
ImGuiCol.WindowBg = 2 --- Background of normal windows
ImGuiCol.ChildBg = 3 --- Background of child windows
ImGuiCol.PopupBg = 4 --- Background of popups menus tooltips windows
ImGuiCol.Border = 5
ImGuiCol.BorderShadow = 6
ImGuiCol.FrameBg = 7 --- Background of checkbox radio button plot slider text input
ImGuiCol.FrameBgHovered = 8
ImGuiCol.FrameBgActive = 9
ImGuiCol.TitleBg = 10
ImGuiCol.TitleBgActive = 11
ImGuiCol.TitleBgCollapsed = 12
ImGuiCol.MenuBarBg = 13
ImGuiCol.ScrollbarBg = 14
ImGuiCol.ScrollbarGrab = 15
ImGuiCol.ScrollbarGrabHovered = 16
ImGuiCol.ScrollbarGrabActive = 17
ImGuiCol.CheckMark = 18
ImGuiCol.SliderGrab = 19
ImGuiCol.SliderGrabActive = 20
ImGuiCol.Button = 21
ImGuiCol.ButtonHovered = 22
ImGuiCol.ButtonActive = 23
ImGuiCol.Header = 24
ImGuiCol.HeaderHovered = 25
ImGuiCol.HeaderActive = 26
ImGuiCol.Separator = 27
ImGuiCol.SeparatorHovered = 28
ImGuiCol.SeparatorActive = 29
ImGuiCol.ResizeGrip = 30
ImGuiCol.ResizeGripHovered = 31
ImGuiCol.ResizeGripActive = 32
ImGuiCol.Tab = 33
ImGuiCol.TabHovered = 34
ImGuiCol.TabActive = 35
ImGuiCol.TabUnfocused = 36
ImGuiCol.TabUnfocusedActive = 37
ImGuiCol.DockingPreview = 38
ImGuiCol.DockingEmptyBg = 39 --- Background color for empty node (e.g. CentralNode with no window docked into it)
ImGuiCol.PlotLines = 40
ImGuiCol.PlotLinesHovered = 41
ImGuiCol.PlotHistogram = 42
ImGuiCol.PlotHistogramHovered = 43
ImGuiCol.TableHeaderBg = 44 --- Table header background
ImGuiCol.TableBorderStrong = 45 --- Table outer and header borders (prefer using Alpha=1.0 here)
ImGuiCol.TableBorderLight = 46 --- Table inner borders (prefer using Alpha=1.0 here)
ImGuiCol.TableRowBg = 47 --- Table row background (even rows)
ImGuiCol.TableRowBgAlt = 48 --- Table row background (odd rows)
ImGuiCol.TextSelectedBg = 49
ImGuiCol.DragDropTarget = 50
ImGuiCol.NavHighlight = 51 --- Gamepad/keyboard: current highlighted item
ImGuiCol.NavWindowingHighlight = 52 --- Highlight window when using CTRL+TAB
ImGuiCol.NavWindowingDimBg = 53 --- Darken/colorize entire screen behind the CTRL+TAB window list, when active
ImGuiCol.ModalWindowDimBg = 54 --- Darken/colorize entire screen behind a modal window, when one is active
ImGuiCol.COUNT = 55

--------------------------------------------------

local ImGuiStyleVar = {}
--- Enumeration for PushStyleVar() / PopStyleVar() to temporarily modify the ImGuiStyle structure.
--- - The enum only refers to fields of ImGuiStyle which makes sense to be pushed/popped inside UI code.
---   During initialization or between frames, feel free to just poke into ImGuiStyle directly.
--- - Tip: Use your programming IDE navigation facilities on the names in the _second column_ below to find the actual members and their description.
---   In Visual Studio IDE: CTRL+comma ("Edit.NavigateTo") can follow symbols in comments, whereas CTRL+F12 ("Edit.GoToImplementation") cannot.
---   With Visual Assist installed: ALT+G ("VAssistX.GoToImplementation") can also follow symbols in comments.
--- - When changing this enum, you need to update the associated internal table GStyleVarInfo[] accordingly. This is where we link enum values to members offset/type.
im.ImGuiStyleVar = ImGuiStyleVar
--- Enumeration for PushStyleVar() / PopStyleVar() to temporarily modify the ImGuiStyle structure.
--- - The enum only refers to fields of ImGuiStyle which makes sense to be pushed/popped inside UI code.
---   During initialization or between frames, feel free to just poke into ImGuiStyle directly.
--- - Tip: Use your programming IDE navigation facilities on the names in the _second column_ below to find the actual members and their description.
---   In Visual Studio IDE: CTRL+comma ("Edit.NavigateTo") can follow symbols in comments, whereas CTRL+F12 ("Edit.GoToImplementation") cannot.
---   With Visual Assist installed: ALT+G ("VAssistX.GoToImplementation") can also follow symbols in comments.
--- - When changing this enum, you need to update the associated internal table GStyleVarInfo[] accordingly. This is where we link enum values to members offset/type.
im.StyleVar = ImGuiStyleVar

-- Enum name ---------------------- --- Member in ImGuiStyle structure (see ImGuiStyle for descriptions)
ImGuiStyleVar.Alpha = 0  --- float     Alpha
ImGuiStyleVar.DisabledAlpha = 1  --- float     Alpha
ImGuiStyleVar.WindowPadding = 2  --- ImVec2    WindowPadding
ImGuiStyleVar.WindowRounding = 3  --- float     WindowRounding
ImGuiStyleVar.WindowBorderSize = 4  --- float     WindowBorderSize
ImGuiStyleVar.WindowMinSize = 5  --- ImVec2    WindowMinSize
ImGuiStyleVar.WindowTitleAlign = 6  --- ImVec2    WindowTitleAlign
ImGuiStyleVar.ChildRounding = 7  --- float     ChildRounding
ImGuiStyleVar.ChildBorderSize = 8  --- float     ChildBorderSize
ImGuiStyleVar.PopupRounding = 9  --- float     PopupRounding
ImGuiStyleVar.PopupBorderSize = 10  --- float     PopupBorderSize
ImGuiStyleVar.FramePadding = 11 --- ImVec2    FramePadding
ImGuiStyleVar.FrameRounding = 12 --- float     FrameRounding
ImGuiStyleVar.FrameBorderSize = 13 --- float     FrameBorderSize
ImGuiStyleVar.ItemSpacing = 14 --- ImVec2    ItemSpacing
ImGuiStyleVar.ItemInnerSpacing = 15 --- ImVec2    ItemInnerSpacing
ImGuiStyleVar.IndentSpacing = 16 --- float     IndentSpacing
ImGuiStyleVar.CellPadding = 17 --- ImVec2    CellPadding
ImGuiStyleVar.ScrollbarSize = 18 --- float     ScrollbarSize
ImGuiStyleVar.ScrollbarRounding = 19 --- float     ScrollbarRounding
ImGuiStyleVar.GrabMinSize = 20 --- float     GrabMinSize
ImGuiStyleVar.GrabRounding = 21 --- float     GrabRounding
ImGuiStyleVar.TabRounding = 22 --- float     TabRounding
ImGuiStyleVar.ButtonTextAlign = 23 --- ImVec2    ButtonTextAlign
ImGuiStyleVar.SelectableTextAlign = 24 --- ImVec2    SelectableTextAlign
ImGuiStyleVar.COUNT = 25

--------------------------------------------------

local ImGuiButtonFlags = {}
--- Flags for InvisibleButton() [extended in imgui_internal.h]
im.ImGuiButtonFlags = ImGuiButtonFlags
--- Flags for InvisibleButton() [extended in imgui_internal.h]
im.ButtonFlags = ImGuiButtonFlags

ImGuiButtonFlags.None = 0
ImGuiButtonFlags.MouseButtonLeft = 2 ^ 0   --- React on left mouse button (default)
ImGuiButtonFlags.MouseButtonRight = 2 ^ 1   --- React on right mouse button
ImGuiButtonFlags.MouseButtonMiddle = 2 ^ 2   --- React on center mouse button

--------------------------------------------------

local ImGuiColorEditFlags = {}
--- Flags for ColorEdit3() / ColorEdit4() / ColorPicker3() / ColorPicker4() / ColorButton()
im.ImGuiColorEditFlags = ImGuiColorEditFlags
--- Flags for ColorEdit3() / ColorEdit4() / ColorPicker3() / ColorPicker4() / ColorButton()
im.ColorEditFlags = ImGuiColorEditFlags

ImGuiColorEditFlags.None = 0
ImGuiColorEditFlags.NoAlpha = 2 ^ 1   ---              --- ColorEdit ColorPicker ColorButton: ignore Alpha component (will only read 3 components from the input pointer).
ImGuiColorEditFlags.NoPicker = 2 ^ 2   ---              --- ColorEdit: disable picker when clicking on color square.
ImGuiColorEditFlags.NoOptions = 2 ^ 3   ---              --- ColorEdit: disable toggling options menu when right-clicking on inputs/small preview.
ImGuiColorEditFlags.NoSmallPreview = 2 ^ 4   ---              --- ColorEdit, ColorPicker: disable color square preview next to the inputs. (e.g. to show only the inputs)
ImGuiColorEditFlags.NoInputs = 2 ^ 5   ---              --- ColorEdit, ColorPicker: disable inputs sliders/text widgets (e.g. to show only the small preview color square).
ImGuiColorEditFlags.NoTooltip = 2 ^ 6   ---              --- ColorEdit ColorPicker ColorButton: disable tooltip when hovering the preview.
ImGuiColorEditFlags.NoLabel = 2 ^ 7   ---              --- ColorEdit ColorPicker: disable display of inline text label (the label is still forwarded to the tooltip and picker).
ImGuiColorEditFlags.NoSidePreview = 2 ^ 8   ---              --- ColorPicker: disable bigger color preview on right side of the picker, use small color square preview instead.
ImGuiColorEditFlags.NoDragDrop = 2 ^ 9   ---              --- ColorEdit: disable drag and drop target. ColorButton: disable drag and drop source.
ImGuiColorEditFlags.NoBorder = 2 ^ 10   ---              --- ColorButton: disable border (which is enforced by default)

--- User Options (right-click on widget to change some of them).
ImGuiColorEditFlags.AlphaBar = 2 ^ 16  ---              --- ColorEdit ColorPicker: show vertical alpha bar/gradient in picker.
ImGuiColorEditFlags.AlphaPreview = 2 ^ 17  ---              --- ColorEdit ColorPicker ColorButton: display preview as a transparent color over a checkerboard instead of opaque.
ImGuiColorEditFlags.AlphaPreviewHalf = 2 ^ 18  ---              --- ColorEdit ColorPicker ColorButton: display half opaque / half checkerboard instead of opaque.
ImGuiColorEditFlags.HDR = 2 ^ 19  ---              --- (WIP) ColorEdit: Currently only disable 0.0f..1.0f limits in RGBA edition (note: you probably want to use ImGuiColorEditFlags.Float flag as well).
ImGuiColorEditFlags.DisplayRGB = 2 ^ 20  --- [Display]    --- ColorEdit: override _display_ type among RGB/HSV/Hex. ColorPicker: select any combination using one or more of RGB/HSV/Hex.
ImGuiColorEditFlags.DisplayHSV = 2 ^ 21  --- [Display]    --- "
ImGuiColorEditFlags.DisplayHex = 2 ^ 22  --- [Display]    --- "
ImGuiColorEditFlags.Uint8 = 2 ^ 23  --- [DataType]   --- ColorEdit ColorPicker ColorButton: _display_ values formatted as 0..255.
ImGuiColorEditFlags.Float = 2 ^ 24  --- [DataType]   --- ColorEdit ColorPicker ColorButton: _display_ values formatted as 0.0f..1.0f floats instead of 0..255 integers. No round-trip of value via integers.
ImGuiColorEditFlags.PickerHueBar = 2 ^ 25  --- [Picker]     --- ColorPicker: bar for Hue rectangle for Sat/Value.
ImGuiColorEditFlags.PickerHueWheel = 2 ^ 26  --- [Picker]     --- ColorPicker: wheel for Hue triangle for Sat/Value.
ImGuiColorEditFlags.InputRGB = 2 ^ 27  --- [Input]      --- ColorEdit ColorPicker: input and output data in RGB format.
ImGuiColorEditFlags.InputHSV = 2 ^ 28  --- [Input]      --- ColorEdit ColorPicker: input and output data in HSV format.

--- Defaults Options. You can set application defaults using SetColorEditOptions(). The intent is that you probably don't want to
--- override them in most of your calls. Let the user choose via the option menu and/or call SetColorEditOptions() once during startup.
ImGuiColorEditFlags._OptionsDefault = ImGuiColorEditFlags.Uint8 + ImGuiColorEditFlags.DisplayRGB + ImGuiColorEditFlags.InputRGB + ImGuiColorEditFlags.PickerHueBar

--------------------------------------------------

local ImGuiSliderFlags = {}
--- Flags for DragFloat(), DragInt(), SliderFloat(), SliderInt() etc.
--- We use the same sets of flags for DragXXX() and SliderXXX() functions as the features are the same and it makes it easier to swap them.
im.ImGuiSliderFlags = ImGuiSliderFlags
--- Flags for DragFloat(), DragInt(), SliderFloat(), SliderInt() etc.
--- We use the same sets of flags for DragXXX() and SliderXXX() functions as the features are the same and it makes it easier to swap them.
im.SliderFlags = ImGuiSliderFlags

ImGuiSliderFlags.None = 0
ImGuiSliderFlags.AlwaysClamp = 2 ^ 4       --- Clamp value to min/max bounds when input manually with CTRL+Click. By default CTRL+Click allows going out of bounds.
ImGuiSliderFlags.Logarithmic = 2 ^ 5       --- Make the widget logarithmic (linear otherwise). Consider using ImGuiSliderFlags_NoRoundToFormat with this if using a format-string with small amount of digits.
ImGuiSliderFlags.NoRoundToFormat = 2 ^ 6       --- Disable rounding underlying value to match precision of the display format string (e.g. %.3f values are rounded to those 3 digits)
ImGuiSliderFlags.NoInput = 2 ^ 7       --- Disable CTRL+Click or Enter key allowing to input text directly into the widget

--------------------------------------------------

local ImGuiMouseCursor = {}
--- Enumeration for GetMouseCursor()
--- User code may request backend to display given cursor by calling SetMouseCursor(), which is why we have some cursors that are marked unused here
im.ImGuiMouseCursor = ImGuiMouseCursor
--- Enumeration for GetMouseCursor()
--- User code may request backend to display given cursor by calling SetMouseCursor(), which is why we have some cursors that are marked unused here
im.MouseCursor = ImGuiMouseCursor

ImGuiMouseCursor.None = -1
ImGuiMouseCursor.Arrow = 0
ImGuiMouseCursor.TextInput = 1      --- When hovering over InputText etc.
ImGuiMouseCursor.ResizeAll = 2      --- (Unused by imgui functions)
ImGuiMouseCursor.ResizeNS = 3      --- When hovering over an horizontal border
ImGuiMouseCursor.ResizeEW = 4      --- When hovering over a vertical border or a column
ImGuiMouseCursor.ResizeNESW = 5      --- When hovering over the bottom-left corner of a window
ImGuiMouseCursor.ResizeNWSE = 6      --- When hovering over the bottom-right corner of a window
ImGuiMouseCursor.Hand = 7      --- (Unused by imgui functions. Use for e.g. hyperlinks)
ImGuiMouseCursor.COUNT = 8

--------------------------------------------------

local ImGuiCond = {}
--- Enumateration for ImGui::SetWindow***() SetNextWindow***() SetNextItem***() functions
--- Represent a condition.
--- Important: Treat as a regular enum! Do NOT combine multiple values using binary operators! All the functions above treat 0 as a shortcut to ImGuiCond_Always.
im.ImGuiCond = ImGuiCond
--- Enumateration for ImGui::SetWindow***() SetNextWindow***() SetNextItem***() functions
--- Represent a condition.
--- Important: Treat as a regular enum! Do NOT combine multiple values using binary operators! All the functions above treat 0 as a shortcut to ImGuiCond_Always.
im.Cond = ImGuiCond

ImGuiCond.None = 0   --- No condition (always set the variable), same as _Always
ImGuiCond.Always = 2 ^ 0   --- No condition (always set the variable)
ImGuiCond.Once = 2 ^ 1   --- Set the variable once per runtime session (only the first call will succeed)
ImGuiCond.FirstUseEver = 2 ^ 2   --- Set the variable if the object/window has no persistently saved data (no entry in .ini file)
ImGuiCond.Appearing = 2 ^ 3    --- Set the variable if the object/window is appearing after being hidden/inactive (or the first time)

--------------------------------------------------

local ImGuiViewportFlags = {}
--- Flags stored in ImGuiViewport::Flags, giving indications to the platform backends.
im.ImGuiViewportFlags = ImGuiViewportFlags
--- Flags stored in ImGuiViewport::Flags, giving indications to the platform backends.
im.ViewportFlags = ImGuiViewportFlags

ImGuiViewportFlags.None = 0
ImGuiViewportFlags.IsPlatformWindow = 2 ^ 0 --- Represent a Platform Window
ImGuiViewportFlags.IsPlatformMonitor = 2 ^ 1 --- Represent a Platform Monitor (unused yet)
ImGuiViewportFlags.OwnedByApp = 2 ^ 2 --- Platform Window: is created/managed by the application (rather than a dear imgui backend)
ImGuiViewportFlags.NoDecoration = 2 ^ 3 --- Platform Window: Disable platform decorations: title bar, borders, etc. (generally set all windows, but if ImGuiConfigFlags_ViewportsDecoration is set we only set this on popups/tooltips)
ImGuiViewportFlags.NoTaskBarIcon = 2 ^ 4 --- Platform Window: Disable platform task bar icon (generally set on popups/tooltips, or all windows if ImGuiConfigFlags_ViewportsNoTaskBarIcon is set)
ImGuiViewportFlags.NoFocusOnAppearing = 2 ^ 5 --- Platform Window: Don't take focus when created.
ImGuiViewportFlags.NoFocusOnClick = 2 ^ 6 --- Platform Window: Don't take focus when clicked on.
ImGuiViewportFlags.NoInputs = 2 ^ 7 --- Platform Window: Make mouse pass through so we can drag this window while peaking behind it.
ImGuiViewportFlags.NoRendererClear = 2 ^ 8 --- Platform Window: Renderer doesn't need to clear the framebuffer ahead (because we will fill it entirely).
ImGuiViewportFlags.TopMost = 2 ^ 9 --- Platform Window: Display on top (for tooltips only).
ImGuiViewportFlags.Minimized = 2 ^ 10 --- Platform Window: Window is minimized, can skip render. When minimized we tend to avoid using the viewport pos/size for clipping window or testing if they are contained in the viewport.
ImGuiViewportFlags.NoAutoMerge = 2 ^ 11 --- Platform Window: Avoid merging this window into another host window. This can only be set via ImGuiWindowClass viewport flags override (because we need to now ahead if we are going to create a viewport in the first place!).
ImGuiViewportFlags.CanHostOtherWindows = 2 ^ 12 --- Main viewport: can host multiple imgui windows (secondary viewports are associated to a single window).
