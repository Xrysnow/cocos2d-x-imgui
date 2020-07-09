--------------------------------
-- @module ImPlot
-- @parent_module implot

implot = implot or {}

--------------------------------

--- 
function implot.endPlot()
end

--------------------------------

---  Returns a color from the Color map given an index >= 0 (modulo will be performed) 
---@param index number
---@return ImVec4
function implot.getColormapColor(index)
end

--------------------------------

---  Returns the size of the current colormap. 
---@return number
function implot.getColormapSize()
end

--------------------------------

---  Allows changing how keyboard/mouse interaction works. 
---@return implot.ImPlotInputMap
function implot.getInputMap()
end

--------------------------------

---  Returns the current or most recent plot axis range. A negative y_axis uses the current value of SetPlotYAxis (0 initially). 
---@return implot.ImPlotLimits
function implot.getPlotLimits()
end

--------------------------------

---  Returns the mouse position in x,y coordinates of the current or most recent plot. A negative y_axis uses the current value of SetPlotYAxis (0 initially). 
---@return implot.ImPlotPoint
function implot.getPlotMousePos()
end

--------------------------------

---  Get the current Plot position (top-left) in pixels. 
---@return ImVec2
function implot.getPlotPos()
end

--------------------------------

---  Returns the current or most recent plot query bounds. 
---@return implot.ImPlotLimits
function implot.getPlotQuery()
end

--------------------------------

---  Get the curent Plot size in pixels. 
---@return ImVec2
function implot.getPlotSize()
end

--------------------------------

---  Provides access to plot style structure for permanant modifications to colors, sizes, etc. 
---@return implot.ImPlotStyle
function implot.getStyle()
end

--------------------------------

---  Returns true if the plot area in the current or most recent plot is hovered. 
---@return boolean
function implot.isPlotHovered()
end

--------------------------------

---  Returns true if the current or most recent plot is being queried. 
---@return boolean
function implot.isPlotQueried()
end

--------------------------------

---  Linearly interpolates a color from the current colormap given t between 0 and 1. 
---@param t number
---@return ImVec4
function implot.lerpColormap(t)
end

--------------------------------

---  Convert pixels to a position in the current plot's coordinate system. A negative y_axis uses the current value of SetPlotYAxis (0 initially). 
---@param pix ImVec2
---@param y_axis number
---@return implot.ImPlotPoint
function implot.pixelsToPlot(pix, y_axis)
end

--------------------------------

---  Plots a text label at point x,y. 
---@param text string
---@param x number
---@param y number
---@param vertical boolean
---@param pixel_offset ImVec2
function implot.plotText(text, x, y, vertical, pixel_offset)
end

--------------------------------

---  Convert a position in the current plot's coordinate system to pixels. A negative y_axis uses the current value of SetPlotYAxis (0 initially). 
---@param plt implot.ImPlotPoint
---@param y_axis number
---@return ImVec2
function implot.plotToPixels(plt, y_axis)
end

--------------------------------

---  Pop plot clip rect. 
function implot.popPlotClipRect()
end

--------------------------------

---  Undo temporary color modification. 
function implot.popStyleColor()
end

--------------------------------

---  Undo temporary style modification. 
function implot.popStyleVar()
end

--------------------------------

---  Push clip rect for rendering to current plot area. 
function implot.pushPlotClipRect()
end

--------------------------------

---  Set the axes range limits of the next plot. Call right before BeginPlot(). If ImGuiCond_Always is used, the axes limits will be locked. 
---@param x_min number
---@param x_max number
---@param y_min number
---@param y_max number
---@param cond number
function implot.setNextPlotLimits(x_min, x_max, y_min, y_max, cond)
end

--------------------------------

---  Set the X axis range limits of the next plot. Call right before BeginPlot(). If ImGuiCond_Always is used, the X axis limits will be locked. 
---@param x_min number
---@param x_max number
---@param cond number
function implot.setNextPlotLimitsX(x_min, x_max, cond)
end

--------------------------------

---  Set the Y axis range limits of the next plot. Call right before BeginPlot(). If ImGuiCond_Always is used, the Y axis limits will be locked. 
---@param y_min number
---@param y_max number
---@param cond number
---@param y_axis number
function implot.setNextPlotLimitsY(y_min, y_max, cond, y_axis)
end

--------------------------------

---  Select which Y axis will be used for subsequent plot elements. The default is '0', or the first (left) Y axis. 
---@param y_axis number
function implot.setPlotYAxis(y_axis)
end

--------------------------------

---  Renders a vertical color scale using the current color map 
---@param scale_min number
---@param scale_max number
---@param height number
function implot.showColormapScale(scale_min, scale_max, height)
end


return nil
