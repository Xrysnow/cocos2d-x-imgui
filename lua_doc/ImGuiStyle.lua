--------------------------------
-- @module ImGuiStyle
-- @parent_module imgui

---@class imgui.ImGuiStyle
local ImGuiStyle = {}
imgui.ImGuiStyle = ImGuiStyle
--------------------------------

--- 
---@param scale_factor number
---@return imgui.ImGuiStyle
function ImGuiStyle:scaleAllSizes(scale_factor)
end

--------------------------------

---  Global alpha applies to everything in ImGui. 
---@type number
ImGuiStyle.Alpha = nil

--------------------------------

---  Padding within a window. 
---@type ImVec2
ImGuiStyle.WindowPadding = nil

--------------------------------

---  Radius of window corners rounding. Set to 0.0f to have rectangular windows. Large values tend to lead to variety of artifacts and are not recommended. 
---@type number
ImGuiStyle.WindowRounding = nil

--------------------------------

---  Thickness of border around windows. Generally set to 0.0f or 1.0f. (Other values are not well tested and more CPU/GPU costly). 
---@type number
ImGuiStyle.WindowBorderSize = nil

--------------------------------

---  Minimum window size. This is a global setting. If you want to constraint individual windows, use SetNextWindowSizeConstraints(). 
---@type ImVec2
ImGuiStyle.WindowMinSize = nil

--------------------------------

---  Alignment for title bar text. Defaults to (0.0f,0.5f) for left-aligned,vertically centered. 
---@type ImVec2
ImGuiStyle.WindowTitleAlign = nil

--------------------------------

---  Side of the collapsing/docking button in the title bar (left/right). Defaults to ImGuiDir_Left. 
---@type number
ImGuiStyle.WindowMenuButtonPosition = nil

--------------------------------

---  Radius of child window corners rounding. Set to 0.0f to have rectangular windows. 
---@type number
ImGuiStyle.ChildRounding = nil

--------------------------------

---  Thickness of border around child windows. Generally set to 0.0f or 1.0f. (Other values are not well tested and more CPU/GPU costly). 
---@type number
ImGuiStyle.ChildBorderSize = nil

--------------------------------

---  Radius of popup window corners rounding. (Note that tooltip windows use WindowRounding) 
---@type number
ImGuiStyle.PopupRounding = nil

--------------------------------

---  Thickness of border around popup/tooltip windows. Generally set to 0.0f or 1.0f. (Other values are not well tested and more CPU/GPU costly). 
---@type number
ImGuiStyle.PopupBorderSize = nil

--------------------------------

---  Padding within a framed rectangle (used by most widgets). 
---@type ImVec2
ImGuiStyle.FramePadding = nil

--------------------------------

---  Radius of frame corners rounding. Set to 0.0f to have rectangular frame (used by most widgets). 
---@type number
ImGuiStyle.FrameRounding = nil

--------------------------------

---  Thickness of border around frames. Generally set to 0.0f or 1.0f. (Other values are not well tested and more CPU/GPU costly). 
---@type number
ImGuiStyle.FrameBorderSize = nil

--------------------------------

---  Horizontal and vertical spacing between widgets/lines. 
---@type ImVec2
ImGuiStyle.ItemSpacing = nil

--------------------------------

---  Horizontal and vertical spacing between within elements of a composed widget (e.g. a slider and its label). 
---@type ImVec2
ImGuiStyle.ItemInnerSpacing = nil

--------------------------------

---  Expand reactive bounding box for touch-based system where touch position is not accurate enough. Unfortunately we don't sort widgets so priority on overlap will always be given to the first widget. So don't grow this too much! 
---@type ImVec2
ImGuiStyle.TouchExtraPadding = nil

--------------------------------

---  Horizontal indentation when e.g. entering a tree node. Generally == (FontSize + FramePadding.x*2). 
---@type number
ImGuiStyle.IndentSpacing = nil

--------------------------------

---  Minimum horizontal spacing between two columns. Preferably > (FramePadding.x + 1). 
---@type number
ImGuiStyle.ColumnsMinSpacing = nil

--------------------------------

---  Width of the vertical scrollbar, Height of the horizontal scrollbar. 
---@type number
ImGuiStyle.ScrollbarSize = nil

--------------------------------

---  Radius of grab corners for scrollbar. 
---@type number
ImGuiStyle.ScrollbarRounding = nil

--------------------------------

---  Minimum width/height of a grab box for slider/scrollbar. 
---@type number
ImGuiStyle.GrabMinSize = nil

--------------------------------

---  Radius of grabs corners rounding. Set to 0.0f to have rectangular slider grabs. 
---@type number
ImGuiStyle.GrabRounding = nil

--------------------------------

---  The size in pixels of the dead-zone around zero on logarithmic sliders that cross zero. 
---@type number
ImGuiStyle.LogSliderDeadzone = nil

--------------------------------

---  Radius of upper corners of a tab. Set to 0.0f to have rectangular tabs. 
---@type number
ImGuiStyle.TabRounding = nil

--------------------------------

---  Thickness of border around tabs. 
---@type number
ImGuiStyle.TabBorderSize = nil

--------------------------------

---  Minimum width for close button to appears on an unselected tab when hovered. Set to 0.0f to always show when hovering, set to FLT_MAX to never show close button unless selected. 
---@type number
ImGuiStyle.TabMinWidthForCloseButton = nil

--------------------------------

---  Side of the color button in the ColorEdit4 widget (left/right). Defaults to ImGuiDir_Right. 
---@type number
ImGuiStyle.ColorButtonPosition = nil

--------------------------------

---  Alignment of button text when button is larger than text. Defaults to (0.5f, 0.5f) (centered). 
---@type ImVec2
ImGuiStyle.ButtonTextAlign = nil

--------------------------------

---  Alignment of selectable text. Defaults to (0.0f, 0.0f) (top-left aligned). It's generally important to keep this left-aligned if you want to lay multiple items on a same line. 
---@type ImVec2
ImGuiStyle.SelectableTextAlign = nil

--------------------------------

---  Window position are clamped to be visible within the display area by at least this amount. Only applies to regular windows. 
---@type ImVec2
ImGuiStyle.DisplayWindowPadding = nil

--------------------------------

---  If you cannot see the edges of your screen (e.g. on a TV) increase the safe area padding. Apply to popups/tooltips as well regular windows. NB: Prefer configuring your TV sets correctly! 
---@type ImVec2
ImGuiStyle.DisplaySafeAreaPadding = nil

--------------------------------

---  Scale software rendered mouse cursor (when io.MouseDrawCursor is enabled). We apply per-monitor DPI scaling over this scale. May be removed later. 
---@type number
ImGuiStyle.MouseCursorScale = nil

--------------------------------

---  Enable anti-aliased lines/borders. Disable if you are really tight on CPU/GPU. Latched at the beginning of the frame (copied to ImDrawList). 
---@type boolean
ImGuiStyle.AntiAliasedLines = nil

--------------------------------

---  Enable anti-aliased lines/borders using textures where possible. Require backend to render with bilinear filtering. Latched at the beginning of the frame (copied to ImDrawList). 
---@type boolean
ImGuiStyle.AntiAliasedLinesUseTex = nil

--------------------------------

---  Enable anti-aliased edges around filled shapes (rounded rectangles, circles, etc.). Disable if you are really tight on CPU/GPU. Latched at the beginning of the frame (copied to ImDrawList). 
---@type boolean
ImGuiStyle.AntiAliasedFill = nil

--------------------------------

---  Tessellation tolerance when using PathBezierCurveTo() without a specific number of segments. Decrease for highly tessellated curves (higher quality, more polygons), increase to reduce quality. 
---@type number
ImGuiStyle.CurveTessellationTol = nil

--------------------------------

--- Maximum error (in pixels) allowed when using AddCircle()/AddCircleFilled() or drawing rounded corner rectangles with no explicit segment count specified. Decrease for higher quality but more geometry.
---@type number
ImGuiStyle.CircleSegmentMaxError = nil



return nil
