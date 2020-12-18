--------------------------------
-- @module ImPlotAxisFlags_
-- @parent_module implot

---  Options for plot axes (X and Y).
---@class implot.ImPlotAxisFlags
local ImPlotAxisFlags = {}
implot.ImPlotAxisFlags = ImPlotAxisFlags
implot.AxisFlags = ImPlotAxisFlags

---  default
---@type number
ImPlotAxisFlags.None = 0
---  no grid lines will be displayed
---@type number
ImPlotAxisFlags.NoGridLines = 1
---  no tick marks will be displayed
---@type number
ImPlotAxisFlags.NoTickMarks = 2
---  no text labels will be displayed
---@type number
ImPlotAxisFlags.NoTickLabels = 4
---  a logartithmic (base 10) axis scale will be used (mutually exclusive with ImPlotAxisFlags_Time)
---@type number
ImPlotAxisFlags.LogScale = 8
---  axis will display date/time formatted labels (mutually exclusive with ImPlotAxisFlags_LogScale)
---@type number
ImPlotAxisFlags.Time = 16
---  the axis will be inverted
---@type number
ImPlotAxisFlags.Invert = 32
---  the axis minimum value will be locked when panning/zooming
---@type number
ImPlotAxisFlags.LockMin = 64
---  the axis maximum value will be locked when panning/zooming
---@type number
ImPlotAxisFlags.LockMax = 128
--- 
---@type number
ImPlotAxisFlags.Lock = 192
--- 
---@type number
ImPlotAxisFlags.NoDecorations = 7

--------------------------------
-- @module ImPlotCol_
-- @parent_module implot

---  Plot styling colors.
---@class implot.ImPlotCol
local ImPlotCol = {}
implot.ImPlotCol = ImPlotCol
implot.Col = ImPlotCol

---  plot line/outline color (defaults to next unused color in current colormap)
---@type number
ImPlotCol.Line = 0
---  plot fill color for bars (defaults to the current line color)
---@type number
ImPlotCol.Fill = 1
---  marker outline color (defaults to the current line color)
---@type number
ImPlotCol.MarkerOutline = 2
---  marker fill color (defaults to the current line color)
---@type number
ImPlotCol.MarkerFill = 3
---  error bar color (defaults to ImGuiCol_Text)
---@type number
ImPlotCol.ErrorBar = 4
---  plot frame background color (defaults to ImGuiCol_FrameBg)
---@type number
ImPlotCol.FrameBg = 5
---  plot area background color (defaults to ImGuiCol_WindowBg)
---@type number
ImPlotCol.PlotBg = 6
---  plot area border color (defaults to ImGuiCol_Border)
---@type number
ImPlotCol.PlotBorder = 7
---  legend background color (defaults to ImGuiCol_PopupBg)
---@type number
ImPlotCol.LegendBg = 8
---  legend border color (defaults to ImPlotCol_PlotBorder)
---@type number
ImPlotCol.LegendBorder = 9
---  legend text color (defaults to ImPlotCol_InlayText)
---@type number
ImPlotCol.LegendText = 10
---  plot title text color (defaults to ImGuiCol_Text)
---@type number
ImPlotCol.TitleText = 11
---  color of text appearing inside of plots (defaults to ImGuiCol_Text)
---@type number
ImPlotCol.InlayText = 12
---  x-axis label and tick lables color (defaults to ImGuiCol_Text)
---@type number
ImPlotCol.XAxis = 13
---  x-axis grid color (defaults to 25% ImPlotCol_XAxis)
---@type number
ImPlotCol.XAxisGrid = 14
---  y-axis label and tick labels color (defaults to ImGuiCol_Text)
---@type number
ImPlotCol.YAxis = 15
---  y-axis grid color (defaults to 25% ImPlotCol_YAxis)
---@type number
ImPlotCol.YAxisGrid = 16
---  2nd y-axis label and tick labels color (defaults to ImGuiCol_Text)
---@type number
ImPlotCol.YAxis2 = 17
---  2nd y-axis grid/label color (defaults to 25% ImPlotCol_YAxis2)
---@type number
ImPlotCol.YAxisGrid2 = 18
---  3rd y-axis label and tick labels color (defaults to ImGuiCol_Text)
---@type number
ImPlotCol.YAxis3 = 19
---  3rd y-axis grid/label color (defaults to 25% ImPlotCol_YAxis3)
---@type number
ImPlotCol.YAxisGrid3 = 20
---  box-selection color (defaults to yellow)
---@type number
ImPlotCol.Selection = 21
---  box-query color (defaults to green)
---@type number
ImPlotCol.Query = 22
---  crosshairs color (defaults to ImPlotCol_PlotBorder)
---@type number
ImPlotCol.Crosshairs = 23
---  crosshairs color (defaults to ImPlotCol_PlotBorder)
---@type number
ImPlotCol.COUNT = 24

--------------------------------
-- @module ImPlotColormap_
-- @parent_module implot

---  Built-in colormaps
---@class implot.ImPlotColormap
local ImPlotColormap = {}
implot.ImPlotColormap = ImPlotColormap
implot.Colormap = ImPlotColormap

---  ImPlot default colormap         (n=10)
---@type number
ImPlotColormap.Default = 0
---  a.k.a. seaborn deep             (n=10)
---@type number
ImPlotColormap.Deep = 1
---  a.k.a. matplotlib "Set1"        (n=9)
---@type number
ImPlotColormap.Dark = 2
---  a.k.a. matplotlib "Pastel1"     (n=9)
---@type number
ImPlotColormap.Pastel = 3
---  a.k.a. matplotlib "Paired"      (n=12)
---@type number
ImPlotColormap.Paired = 4
---  a.k.a. matplotlib "viridis"     (n=11)
---@type number
ImPlotColormap.Viridis = 5
---  a.k.a. matplotlib "plasma"      (n=11)
---@type number
ImPlotColormap.Plasma = 6
---  a.k.a. matplotlib/MATLAB "hot"  (n=11)
---@type number
ImPlotColormap.Hot = 7
---  a.k.a. matplotlib/MATLAB "cool" (n=11)
---@type number
ImPlotColormap.Cool = 8
---  a.k.a. matplotlib/MATLAB "pink" (n=11)
---@type number
ImPlotColormap.Pink = 9
---  a.k.a. MATLAB "jet"             (n=11)
---@type number
ImPlotColormap.Jet = 10

--------------------------------
-- @module ImPlotFlags_
-- @parent_module implot

---  Options for plots.
---@class implot.ImPlotFlags
local ImPlotFlags = {}
implot.ImPlotFlags = ImPlotFlags
implot.Flags = ImPlotFlags

---  default
---@type number
ImPlotFlags.None = 0
---  the plot title will not be displayed (titles are also hidden if preceeded by double hashes, e.g. "##MyPlot")
---@type number
ImPlotFlags.NoTitle = 1
---  the legend will not be displayed
---@type number
ImPlotFlags.NoLegend = 2
---  the user will not be able to open context menus with double-right click
---@type number
ImPlotFlags.NoMenus = 4
---  the user will not be able to box-select with right-mouse
---@type number
ImPlotFlags.NoBoxSelect = 8
---  the mouse position, in plot coordinates, will not be displayed inside of the plot
---@type number
ImPlotFlags.NoMousePos = 16
---  plot items will not be highlighted when their legend entry is hovered
---@type number
ImPlotFlags.NoHighlight = 32
---  a child window region will not be used to capture mouse scroll (can boost performance for single ImGui window applications)
---@type number
ImPlotFlags.NoChild = 64
---  primary x and y axes will be constrained to have the same units/pixel (does not apply to auxiliary y axes)
---@type number
ImPlotFlags.Equal = 128
---  enable a 2nd y-axis on the right side
---@type number
ImPlotFlags.YAxis2 = 256
---  enable a 3rd y-axis on the right side
---@type number
ImPlotFlags.YAxis3 = 512
---  the user will be able to draw query rects with middle-mouse
---@type number
ImPlotFlags.Query = 1024
---  the default mouse cursor will be replaced with a crosshair when hovered
---@type number
ImPlotFlags.Crosshairs = 2048
---  plot lines will be software anti-aliased (not recommended for density plots, prefer MSAA)
---@type number
ImPlotFlags.AntiAliased = 4096
---  plot lines will be software anti-aliased (not recommended for density plots, prefer MSAA)
---@type number
ImPlotFlags.CanvasOnly = 31

--------------------------------
-- @module ImPlotLocation_
-- @parent_module implot

---  Used to position items on a plot (e.g. legends, labels, etc.)
---@class implot.ImPlotLocation
local ImPlotLocation = {}
implot.ImPlotLocation = ImPlotLocation
implot.Location = ImPlotLocation

---  center-center
---@type number
ImPlotLocation.Center = 0
---  top-center
---@type number
ImPlotLocation.North = 1
---  bottom-center
---@type number
ImPlotLocation.South = 2
---  center-left
---@type number
ImPlotLocation.West = 4
---  center-right
---@type number
ImPlotLocation.East = 8
---  top-left
---@type number
ImPlotLocation.NorthWest = 5
---  top-right
---@type number
ImPlotLocation.NorthEast = 9
---  bottom-left
---@type number
ImPlotLocation.SouthWest = 6
---  bottom-right
---@type number
ImPlotLocation.SouthEast = 10

--------------------------------
-- @module ImPlotMarker_
-- @parent_module implot

---  Marker specifications.
---@class implot.ImPlotMarker
local ImPlotMarker = {}
implot.ImPlotMarker = ImPlotMarker
implot.Marker = ImPlotMarker

---  no marker
---@type number
ImPlotMarker.None = -1
---  a circle marker
---@type number
ImPlotMarker.Circle = 0
---  a square maker
---@type number
ImPlotMarker.Square = 1
---  a diamond marker
---@type number
ImPlotMarker.Diamond = 2
---  an upward-pointing triangle marker
---@type number
ImPlotMarker.Up = 3
---  an downward-pointing triangle marker
---@type number
ImPlotMarker.Down = 4
---  an leftward-pointing triangle marker
---@type number
ImPlotMarker.Left = 5
---  an rightward-pointing triangle marker
---@type number
ImPlotMarker.Right = 6
---  a cross marker (not fillable)
---@type number
ImPlotMarker.Cross = 7
---  a plus marker (not fillable)
---@type number
ImPlotMarker.Plus = 8
---  a asterisk marker (not fillable)
---@type number
ImPlotMarker.Asterisk = 9
---  a asterisk marker (not fillable)
---@type number
ImPlotMarker.COUNT = 10

--------------------------------
-- @module ImPlotOrientation_
-- @parent_module implot

---  Used to orient items on a plot (e.g. legends, labels, etc.)
---@class implot.ImPlotOrientation
local ImPlotOrientation = {}
implot.ImPlotOrientation = ImPlotOrientation
implot.Orientation = ImPlotOrientation

---  left/right
---@type number
ImPlotOrientation.Horizontal = 0
---  up/down
---@type number
ImPlotOrientation.Vertical = 1

--------------------------------
-- @module ImPlotStyleVar_
-- @parent_module implot

---  Plot styling variables.
---@class implot.ImPlotStyleVar
local ImPlotStyleVar = {}
implot.ImPlotStyleVar = ImPlotStyleVar
implot.StyleVar = ImPlotStyleVar

---  float,  plot item line weight in pixels
---@type number
ImPlotStyleVar.LineWeight = 0
---  int,    marker specification
---@type number
ImPlotStyleVar.Marker = 1
---  float,  marker size in pixels (roughly the marker's "radius")
---@type number
ImPlotStyleVar.MarkerSize = 2
---  float,  plot outline weight of markers in pixels
---@type number
ImPlotStyleVar.MarkerWeight = 3
---  float,  alpha modifier applied to all plot item fills
---@type number
ImPlotStyleVar.FillAlpha = 4
---  float,  error bar whisker width in pixels
---@type number
ImPlotStyleVar.ErrorBarSize = 5
---  float,  error bar whisker weight in pixels
---@type number
ImPlotStyleVar.ErrorBarWeight = 6
---  float,  digital channels bit height (at 1) in pixels
---@type number
ImPlotStyleVar.DigitalBitHeight = 7
---  float,  digital channels bit padding gap in pixels
---@type number
ImPlotStyleVar.DigitalBitGap = 8
---  float,  thickness of border around plot area
---@type number
ImPlotStyleVar.PlotBorderSize = 9
---  float,  alpha multiplier applied to minor axis grid lines
---@type number
ImPlotStyleVar.MinorAlpha = 10
---  ImVec2, major tick lengths for X and Y axes
---@type number
ImPlotStyleVar.MajorTickLen = 11
---  ImVec2, minor tick lengths for X and Y axes
---@type number
ImPlotStyleVar.MinorTickLen = 12
---  ImVec2, line thickness of major ticks
---@type number
ImPlotStyleVar.MajorTickSize = 13
---  ImVec2, line thickness of minor ticks
---@type number
ImPlotStyleVar.MinorTickSize = 14
---  ImVec2, line thickness of major grid lines
---@type number
ImPlotStyleVar.MajorGridSize = 15
---  ImVec2, line thickness of minor grid lines
---@type number
ImPlotStyleVar.MinorGridSize = 16
---  ImVec2, padding between widget frame and plot area, labels, or outside legends (i.e. main padding)
---@type number
ImPlotStyleVar.PlotPadding = 17
---  ImVec2, padding between axes labels, tick labels, and plot edge
---@type number
ImPlotStyleVar.LabelPadding = 18
---  ImVec2, legend padding from plot edges
---@type number
ImPlotStyleVar.LegendPadding = 19
---  ImVec2, legend inner padding from legend edges
---@type number
ImPlotStyleVar.LegendInnerPadding = 20
---  ImVec2, spacing between legend entries
---@type number
ImPlotStyleVar.LegendSpacing = 21
---  ImVec2, padding between plot edge and interior info text
---@type number
ImPlotStyleVar.MousePosPadding = 22
---  ImVec2, text padding around annotation labels
---@type number
ImPlotStyleVar.AnnotationPadding = 23
---  ImVec2, default size used when ImVec2(0,0) is passed to BeginPlot
---@type number
ImPlotStyleVar.PlotDefaultSize = 24
---  ImVec2, minimum size plot frame can be when shrunk
---@type number
ImPlotStyleVar.PlotMinSize = 25
---  ImVec2, minimum size plot frame can be when shrunk
---@type number
ImPlotStyleVar.COUNT = 26

--------------------------------
-- @module ImPlotYAxis_
-- @parent_module implot

---  Enums for different y-axes.
---@class implot.ImPlotYAxis
local ImPlotYAxis = {}
implot.ImPlotYAxis = ImPlotYAxis
implot.YAxis = ImPlotYAxis

---  left (default)
---@type number
ImPlotYAxis._1 = 0
---  first on right side
---@type number
ImPlotYAxis._2 = 1
---  second on right side
---@type number
ImPlotYAxis._3 = 2

return nil
