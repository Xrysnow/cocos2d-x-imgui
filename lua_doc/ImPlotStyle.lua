--------------------------------
-- @module ImPlotStyle
-- @parent_module implot

---@class implot.ImPlotStyle
local ImPlotStyle = {}
implot.ImPlotStyle = ImPlotStyle
--------------------------------

---  = 1, line weight in pixels 
---@type number
ImPlotStyle.LineWeight = nil

--------------------------------

---  = ImPlotMarker_None, marker specification 
---@type number
ImPlotStyle.Marker = nil

--------------------------------

---  = 4, marker size in pixels (roughly the marker's "radius") 
---@type number
ImPlotStyle.MarkerSize = nil

--------------------------------

---  = 1, outline weight of markers in pixels 
---@type number
ImPlotStyle.MarkerWeight = nil

--------------------------------

---  = 1, alpha modifier applied to plot fills 
---@type number
ImPlotStyle.FillAlpha = nil

--------------------------------

---  = 5, error bar whisker width in pixels 
---@type number
ImPlotStyle.ErrorBarSize = nil

--------------------------------

---  = 1.5, error bar whisker weight in pixels 
---@type number
ImPlotStyle.ErrorBarWeight = nil

--------------------------------

---  = 8, digital channels bit height (at y = 1.0f) in pixels 
---@type number
ImPlotStyle.DigitalBitHeight = nil

--------------------------------

---  = 4, digital channels bit padding gap in pixels 
---@type number
ImPlotStyle.DigitalBitGap = nil



return nil
