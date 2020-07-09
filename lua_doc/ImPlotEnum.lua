--------------------------------
-- @module ImPlot
-- @parent_module implot

local ImPlot = implot
--------------------------------

local ImPlotFlags = {}
---  Options for plots. 
ImPlot.ImPlotFlags = ImPlotFlags
---  Options for plots.
ImPlot.Flags = ImPlotFlags
---  the mouse position, in plot coordinates, will be displayed in the bottom-right 
ImPlotFlags.MousePos = 1
---  a legend will be displayed in the top-left 
ImPlotFlags.Legend = 2
---  plot items will be highlighted when their legend entry is hovered 
ImPlotFlags.Highlight = 4
---  the user will be able to box-select with right-mouse 
ImPlotFlags.BoxSelect = 8
---  the user will be able to draw query rects with middle-mouse 
ImPlotFlags.Query = 16
---  the user will be able to open a context menu with double-right click 
ImPlotFlags.ContextMenu = 32
---  the default mouse cursor will be replaced with a crosshair when hovered 
ImPlotFlags.Crosshairs = 64
---  plot lines will be software anti-aliased (not recommended, prefer MSAA) 
ImPlotFlags.AntiAliased = 128
---  a child window region will not be used to capture mouse scroll (can boost performance for single ImGui window applications) 
ImPlotFlags.NoChild = 256
---  enable a 2nd y-axis 
ImPlotFlags.YAxis2 = 512
---  enable a 3rd y-axis 
ImPlotFlags.YAxis3 = 1024
---  enable a 3rd y-axis 
ImPlotFlags.Default = 47
--------------------------------

local ImPlotAxisFlags = {}
---  Options for plot axes (X and Y). 
ImPlot.ImPlotAxisFlags = ImPlotAxisFlags
---  Options for plot axes (X and Y).
ImPlot.AxisFlags = ImPlotAxisFlags
---  grid lines will be displayed 
ImPlotAxisFlags.GridLines = 1
---  tick marks will be displayed for each grid line 
ImPlotAxisFlags.TickMarks = 2
---  text labels will be displayed for each grid line 
ImPlotAxisFlags.TickLabels = 4
---  the axis will be inverted 
ImPlotAxisFlags.Invert = 8
---  the axis minimum value will be locked when panning/zooming 
ImPlotAxisFlags.LockMin = 16
---  the axis maximum value will be locked when panning/zooming 
ImPlotAxisFlags.LockMax = 32
---  a logartithmic (base 10) axis scale will be used 
ImPlotAxisFlags.LogScale = 64
---  scientific notation will be used for tick labels if displayed (WIP, not very good yet) 
ImPlotAxisFlags.Scientific = 128
---  scientific notation will be used for tick labels if displayed (WIP, not very good yet) 
ImPlotAxisFlags.Default = 7
---  scientific notation will be used for tick labels if displayed (WIP, not very good yet) 
ImPlotAxisFlags.Auxiliary = 6
--------------------------------

local ImPlotCol = {}
---  Plot styling colors. 
ImPlot.ImPlotCol = ImPlotCol
---  Plot styling colors.
ImPlot.Col = ImPlotCol
---  plot line/outline color (defaults to next unused color in current colormap) 
ImPlotCol.Line = 0
---  plot fill color for bars (defaults to the current line color) 
ImPlotCol.Fill = 1
---  marker outline color (defaults to the current line color) 
ImPlotCol.MarkerOutline = 2
---  marker fill color (defaults to the current line color) 
ImPlotCol.MarkerFill = 3
---  error bar color (defaults to ImGuiCol_Text) 
ImPlotCol.ErrorBar = 4
---  plot frame background color (defaults to ImGuiCol_FrameBg) 
ImPlotCol.FrameBg = 5
---  plot area background color (defaults to ImGuiCol_WindowBg) 
ImPlotCol.PlotBg = 6
---  plot area border color (defaults to ImGuiCol_Text) 
ImPlotCol.PlotBorder = 7
---  x-axis grid/label color (defaults to 25% ImGuiCol_Text) 
ImPlotCol.XAxis = 8
---  y-axis grid/label color (defaults to 25% ImGuiCol_Text) 
ImPlotCol.YAxis = 9
---  2nd y-axis grid/label color (defaults to 25% ImGuiCol_Text) 
ImPlotCol.YAxis2 = 10
---  3rd y-axis grid/label color (defaults to 25% ImGuiCol_Text) 
ImPlotCol.YAxis3 = 11
---  box-selection color (defaults to yellow) 
ImPlotCol.Selection = 12
---  box-query color (defaults to green) 
ImPlotCol.Query = 13
---  box-query color (defaults to green) 
ImPlotCol.COUNT = 14
--------------------------------

local ImPlotStyleVar = {}
---  Plot styling variables. 
ImPlot.ImPlotStyleVar = ImPlotStyleVar
---  Plot styling variables.
ImPlot.StyleVar = ImPlotStyleVar
---  float, line weight in pixels 
ImPlotStyleVar.LineWeight = 0
---  int,   marker specification 
ImPlotStyleVar.Marker = 1
---  float, marker size in pixels (roughly the marker's "radius") 
ImPlotStyleVar.MarkerSize = 2
---  float, outline weight of markers in pixels 
ImPlotStyleVar.MarkerWeight = 3
---  float, alpha modifier applied to all plot item fills 
ImPlotStyleVar.FillAlpha = 4
---  float, error bar whisker width in pixels 
ImPlotStyleVar.ErrorBarSize = 5
---  float, error bar whisker weight in pixels 
ImPlotStyleVar.ErrorBarWeight = 6
---  float, digital channels bit height (at 1) in pixels 
ImPlotStyleVar.DigitalBitHeight = 7
---  float, digital channels bit padding gap in pixels 
ImPlotStyleVar.DigitalBitGap = 8
---  float, digital channels bit padding gap in pixels 
ImPlotStyleVar.COUNT = 9
--------------------------------

local ImPlotMarker = {}
---  Marker specifications. You can combine this with binary OR, e.g. Circle | Cross. 
ImPlot.ImPlotMarker = ImPlotMarker
---  Marker specifications. You can combine this with binary OR, e.g. Circle | Cross.
ImPlot.Marker = ImPlotMarker
---  no marker 
ImPlotMarker.None = 1
---  a circle marker will be rendered at each point 
ImPlotMarker.Circle = 2
---  a square maker will be rendered at each point 
ImPlotMarker.Square = 4
---  a diamond marker will be rendered at each point 
ImPlotMarker.Diamond = 8
---  an upward-pointing triangle marker will up rendered at each point 
ImPlotMarker.Up = 16
---  an downward-pointing triangle marker will up rendered at each point 
ImPlotMarker.Down = 32
---  an leftward-pointing triangle marker will up rendered at each point 
ImPlotMarker.Left = 64
---  an rightward-pointing triangle marker will up rendered at each point 
ImPlotMarker.Right = 128
---  a cross marker will be rendered at each point (not filled) 
ImPlotMarker.Cross = 256
---  a plus marker will be rendered at each point (not filled) 
ImPlotMarker.Plus = 512
---  a asterisk marker will be rendered at each point (not filled) 
ImPlotMarker.Asterisk = 1024
--------------------------------

local ImPlotColormap = {}
---  Built-in colormaps 
ImPlot.ImPlotColormap = ImPlotColormap
---  Built-in colormaps
ImPlot.Colormap = ImPlotColormap
---  ImPlot default colormap         (n=10) 
ImPlotColormap.Default = 0
---  a.k.a. matplotlib "Set1"        (n=9) 
ImPlotColormap.Dark = 1
---  a.k.a. matplotlib "Pastel1"     (n=9) 
ImPlotColormap.Pastel = 2
---  a.k.a. matplotlib "Paired"      (n=12) 
ImPlotColormap.Paired = 3
---  a.k.a. matplotlib "viridis"     (n=11) 
ImPlotColormap.Viridis = 4
---  a.k.a. matplotlib "plasma"      (n=11) 
ImPlotColormap.Plasma = 5
---  a.k.a. matplotlib/MATLAB "hot"  (n=11) 
ImPlotColormap.Hot = 6
---  a.k.a. matplotlib/MATLAB "cool" (n=11) 
ImPlotColormap.Cool = 7
---  a.k.a. matplotlib/MATLAB "pink" (n=11) 
ImPlotColormap.Pink = 8
---  a.k.a. MATLAB "jet"             (n=11) 
ImPlotColormap.Jet = 9
---  a.k.a. MATLAB "jet"             (n=11) 
ImPlotColormap.COUNT = 10

return nil
