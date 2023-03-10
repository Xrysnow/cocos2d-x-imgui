------------------------------
--- Tag: imguiStyle
--- Date: 2023-03-10
------------------------------


---@class imgui.ImGuiStyle
local ImGuiStyle = {}
imgui.ImGuiStyle = ImGuiStyle

--- Global alpha applies to everything in Dear ImGui.
---@type number (float)
ImGuiStyle.Alpha = nil

--- Enable anti-aliased edges around filled shapes (rounded rectangles, circles, etc.). Disable if you are really tight on CPUGPU. Latched at the beginning of the frame (copied to ImDrawList).
---@type boolean (bool)
ImGuiStyle.AntiAliasedFill = nil

--- Enable anti-aliased linesborders. Disable if you are really tight on CPUGPU. Latched at the beginning of the frame (copied to ImDrawList).
---@type boolean (bool)
ImGuiStyle.AntiAliasedLines = nil

--- Enable anti-aliased linesborders using textures where possible. Require backend to render with bilinear filtering (NOT pointnearest filtering). Latched at the beginning of the frame (copied to ImDrawList).
---@type boolean (bool)
ImGuiStyle.AntiAliasedLinesUseTex = nil

--- Alignment of button text when button is larger than text. Defaults to (0.5f, 0.5f) (centered).
---@type ImVec2 (ImVec2)
ImGuiStyle.ButtonTextAlign = nil

--- Padding within a table cell
---@type ImVec2 (ImVec2)
ImGuiStyle.CellPadding = nil

--- Thickness of border around child windows. Generally set to 0.0f or 1.0f. (Other values are not well tested and more CPUGPU costly).
---@type number (float)
ImGuiStyle.ChildBorderSize = nil

--- Radius of child window corners rounding. Set to 0.0f to have rectangular windows.
---@type number (float)
ImGuiStyle.ChildRounding = nil

--- Maximum error (in pixels) allowed when using AddCircle()AddCircleFilled() or drawing rounded corner rectangles with no explicit segment count specified. Decrease for higher quality but more geometry.
---@type number (float)
ImGuiStyle.CircleTessellationMaxError = nil

--- Side of the color button in the ColorEdit4 widget (leftright). Defaults to ImGuiDir_Right.
---@type ImGuiDir (ImGuiDir)
ImGuiStyle.ColorButtonPosition = nil

--- Minimum horizontal spacing between two columns. Preferably > (FramePadding.x + 1).
---@type number (float)
ImGuiStyle.ColumnsMinSpacing = nil

--- Tessellation tolerance when using PathBezierCurveTo() without a specific number of segments. Decrease for highly tessellated curves (higher quality, more polygons), increase to reduce quality.
---@type number (float)
ImGuiStyle.CurveTessellationTol = nil

--- Additional alpha multiplier applied by BeginDisabled(). Multiply over current value of Alpha.
---@type number (float)
ImGuiStyle.DisabledAlpha = nil

--- If you cannot see the edges of your screen (e.g. on a TV) increase the safe area padding. Apply to popupstooltips as well regular windows. NB: Prefer configuring your TV sets correctly!
---@type ImVec2 (ImVec2)
ImGuiStyle.DisplaySafeAreaPadding = nil

--- Window position are clamped to be visible within the display area or monitors by at least this amount. Only applies to regular windows.
---@type ImVec2 (ImVec2)
ImGuiStyle.DisplayWindowPadding = nil

--- Thickness of border around frames. Generally set to 0.0f or 1.0f. (Other values are not well tested and more CPUGPU costly).
---@type number (float)
ImGuiStyle.FrameBorderSize = nil

--- Padding within a framed rectangle (used by most widgets).
---@type ImVec2 (ImVec2)
ImGuiStyle.FramePadding = nil

--- Radius of frame corners rounding. Set to 0.0f to have rectangular frame (used by most widgets).
---@type number (float)
ImGuiStyle.FrameRounding = nil

--- Minimum widthheight of a grab box for sliderscrollbar.
---@type number (float)
ImGuiStyle.GrabMinSize = nil

--- Radius of grabs corners rounding. Set to 0.0f to have rectangular slider grabs.
---@type number (float)
ImGuiStyle.GrabRounding = nil

--- Horizontal indentation when e.g. entering a tree node. Generally == (FontSize + FramePadding.x*2).
---@type number (float)
ImGuiStyle.IndentSpacing = nil

--- Horizontal and vertical spacing between within elements of a composed widget (e.g. a slider and its label).
---@type ImVec2 (ImVec2)
ImGuiStyle.ItemInnerSpacing = nil

--- Horizontal and vertical spacing between widgetslines.
---@type ImVec2 (ImVec2)
ImGuiStyle.ItemSpacing = nil

--- The size in pixels of the dead-zone around zero on logarithmic sliders that cross zero.
---@type number (float)
ImGuiStyle.LogSliderDeadzone = nil

--- Scale software rendered mouse cursor (when io.MouseDrawCursor is enabled). We apply per-monitor DPI scaling over this scale. May be removed later.
---@type number (float)
ImGuiStyle.MouseCursorScale = nil

--- Thickness of border around popuptooltip windows. Generally set to 0.0f or 1.0f. (Other values are not well tested and more CPUGPU costly).
---@type number (float)
ImGuiStyle.PopupBorderSize = nil

--- Radius of popup window corners rounding. (Note that tooltip windows use WindowRounding)
---@type number (float)
ImGuiStyle.PopupRounding = nil

--- Radius of grab corners for scrollbar.
---@type number (float)
ImGuiStyle.ScrollbarRounding = nil

--- Width of the vertical scrollbar, Height of the horizontal scrollbar.
---@type number (float)
ImGuiStyle.ScrollbarSize = nil

--- Alignment of selectable text. Defaults to (0.0f, 0.0f) (top-left aligned). It's generally important to keep this left-aligned if you want to lay multiple items on a same line.
---@type ImVec2 (ImVec2)
ImGuiStyle.SelectableTextAlign = nil

--- Thickness of border around tabs.
---@type number (float)
ImGuiStyle.TabBorderSize = nil

--- Minimum width for close button to appear on an unselected tab when hovered. Set to 0.0f to always show when hovering, set to FLT_MAX to never show close button unless selected.
---@type number (float)
ImGuiStyle.TabMinWidthForCloseButton = nil

--- Radius of upper corners of a tab. Set to 0.0f to have rectangular tabs.
---@type number (float)
ImGuiStyle.TabRounding = nil

--- Expand reactive bounding box for touch-based system where touch position is not accurate enough. Unfortunately we don't sort widgets so priority on overlap will always be given to the first widget. So don't grow this too much!
---@type ImVec2 (ImVec2)
ImGuiStyle.TouchExtraPadding = nil

--- Thickness of border around windows. Generally set to 0.0f or 1.0f. (Other values are not well tested and more CPUGPU costly).
---@type number (float)
ImGuiStyle.WindowBorderSize = nil

--- Side of the collapsingdocking button in the title bar (NoneLeftRight). Defaults to ImGuiDir_Left.
---@type ImGuiDir (ImGuiDir)
ImGuiStyle.WindowMenuButtonPosition = nil

--- Minimum window size. This is a global setting. If you want to constrain individual windows, use SetNextWindowSizeConstraints().
---@type ImVec2 (ImVec2)
ImGuiStyle.WindowMinSize = nil

--- Padding within a window.
---@type ImVec2 (ImVec2)
ImGuiStyle.WindowPadding = nil

--- Radius of window corners rounding. Set to 0.0f to have rectangular windows. Large values tend to lead to variety of artifacts and are not recommended.
---@type number (float)
ImGuiStyle.WindowRounding = nil

--- Alignment for title bar text. Defaults to (0.0f,0.5f) for left-aligned,vertically centered.
---@type ImVec2 (ImVec2)
ImGuiStyle.WindowTitleAlign = nil

---@param scale_factor number @(float)
---@return nil @(void)
function ImGuiStyle:scaleAllSizes(scale_factor)
end

