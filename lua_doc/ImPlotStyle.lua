--------------------------------
-- @module ImPlotStyle
-- @parent_module implot

---@class implot.ImPlotStyle
local ImPlotStyle = {}
implot.ImPlotStyle = ImPlotStyle
--------------------------------

---  item line weight in pixels
--- = 1 
---@type number
ImPlotStyle.LineWeight = nil

--------------------------------

---  marker specification *
--- = ImPlotMarker_None 
---@type number
ImPlotStyle.Marker = nil

--------------------------------

---  marker size in pixels (roughly the marker's "radius") *
--- = 4 
---@type number
ImPlotStyle.MarkerSize = nil

--------------------------------

---  outline weight of markers in pixels *
--- = 1 
---@type number
ImPlotStyle.MarkerWeight = nil

--------------------------------

---  alpha modifier applied to plot fills *
--- = 1 
---@type number
ImPlotStyle.FillAlpha = nil

--------------------------------

---  error bar whisker width in pixels *
--- = 5 
---@type number
ImPlotStyle.ErrorBarSize = nil

--------------------------------

---  error bar whisker weight in pixels *
--- = 1.5 
---@type number
ImPlotStyle.ErrorBarWeight = nil

--------------------------------

---  digital channels bit height (at y = 1.0f) in pixels *
--- = 8 
---@type number
ImPlotStyle.DigitalBitHeight = nil

--------------------------------

---  digital channels bit padding gap in pixels *
--- = 4 
---@type number
ImPlotStyle.DigitalBitGap = nil

--------------------------------

---  line thickness of border around plot area
--- = 1 
---@type number
ImPlotStyle.PlotBorderSize = nil

--------------------------------

---  alpha multiplier applied to minor axis grid lines
--- = 0.25 
---@type number
ImPlotStyle.MinorAlpha = nil

--------------------------------

---  major tick lengths for X and Y axes
--- = 10,10 
---@type ImVec2
ImPlotStyle.MajorTickLen = nil

--------------------------------

---  minor tick lengths for X and Y axes
--- = 5,5 
---@type ImVec2
ImPlotStyle.MinorTickLen = nil

--------------------------------

---  line thickness of major ticks
--- = 1,1 
---@type ImVec2
ImPlotStyle.MajorTickSize = nil

--------------------------------

---  line thickness of minor ticks
--- = 1,1 
---@type ImVec2
ImPlotStyle.MinorTickSize = nil

--------------------------------

---  line thickness of major grid lines
--- = 1,1 
---@type ImVec2
ImPlotStyle.MajorGridSize = nil

--------------------------------

---  line thickness of minor grid lines
--- = 1,1 
---@type ImVec2
ImPlotStyle.MinorGridSize = nil

--------------------------------

---  padding between widget frame and plot area, labels, or outside legends (i.e. main padding)
--- = 10,10 
---@type ImVec2
ImPlotStyle.PlotPadding = nil

--------------------------------

---  padding between axes labels, tick labels, and plot edge
--- = 5,5 
---@type ImVec2
ImPlotStyle.LabelPadding = nil

--------------------------------

---  legend padding from plot edges
--- = 10,10 
---@type ImVec2
ImPlotStyle.LegendPadding = nil

--------------------------------

---  legend inner padding from legend edges
--- = 5,5 
---@type ImVec2
ImPlotStyle.LegendInnerPadding = nil

--------------------------------

---  spacing between legend entries
--- = 0,0 
---@type ImVec2
ImPlotStyle.LegendSpacing = nil

--------------------------------

---  padding between plot edge and interior mouse location text
--- = 10,10 
---@type ImVec2
ImPlotStyle.MousePosPadding = nil

--------------------------------

---  text padding around annotation labels
--- = 2,2 
---@type ImVec2
ImPlotStyle.AnnotationPadding = nil

--------------------------------

---  default size used when ImVec2(0,0) is passed to BeginPlot
--- = 400,300 
---@type ImVec2
ImPlotStyle.PlotDefaultSize = nil

--------------------------------

---  minimum size plot frame can be when shrunk
--- = 300,225 
---@type ImVec2
ImPlotStyle.PlotMinSize = nil

--------------------------------

---  enable global anti-aliasing on plot lines (overrides ImPlotFlags_AntiAliased)
--- = false 
---@type boolean
ImPlotStyle.AntiAliasedLines = nil

--------------------------------

---  axis labels will be formatted for your timezone when ImPlotAxisFlag_Time is enabled
--- = false 
---@type boolean
ImPlotStyle.UseLocalTime = nil

--------------------------------

---  dates will be formatted according to ISO 8601 where applicable (e.g. YYYY-MM-DD, YYYY-MM, --MM-DD, etc.)
--- = false 
---@type boolean
ImPlotStyle.UseISO8601 = nil

--------------------------------

---  times will be formatted using a 24 hour clock
--- = false 
---@type boolean
ImPlotStyle.Use24HourClock = nil



return nil
