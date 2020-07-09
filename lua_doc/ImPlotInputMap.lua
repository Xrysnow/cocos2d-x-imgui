--------------------------------
-- @module ImPlotInputMap
-- @parent_module implot

---@class implot.ImPlotInputMap
local ImPlotInputMap = {}
implot.ImPlotInputMap = ImPlotInputMap
--------------------------------

---  LMB      enables panning when held 
---@type number
ImPlotInputMap.PanButton = nil

--------------------------------

---  none     optional modifier that must be held for panning 
---@type number
ImPlotInputMap.PanMod = nil

--------------------------------

---  LMB      fits visible data when double clicked 
---@type number
ImPlotInputMap.FitButton = nil

--------------------------------

---  RMB      opens plot context menu (if enabled) when double clicked 
---@type number
ImPlotInputMap.ContextMenuButton = nil

--------------------------------

---  RMB      begins box selection when pressed and confirms selection when released 
---@type number
ImPlotInputMap.BoxSelectButton = nil

--------------------------------

---  none     optional modifier that must be held for box selection 
---@type number
ImPlotInputMap.BoxSelectMod = nil

--------------------------------

---  LMB      cancels active box selection when pressed 
---@type number
ImPlotInputMap.BoxSelectCancelButton = nil

--------------------------------

---  MMB      begins query selection when pressed and end query selection when released 
---@type number
ImPlotInputMap.QueryButton = nil

--------------------------------

---  none     optional modifier that must be held for query selection 
---@type number
ImPlotInputMap.QueryMod = nil

--------------------------------

---  Ctrl     when held, active box selections turn into queries 
---@type number
ImPlotInputMap.QueryToggleMod = nil

--------------------------------

---  Alt      expands active box selection/query horizontally to plot edge when held 
---@type number
ImPlotInputMap.HorizontalMod = nil

--------------------------------

---  Shift    expands active box selection/query vertically to plot edge when held 
---@type number
ImPlotInputMap.VerticalMod = nil



return nil
