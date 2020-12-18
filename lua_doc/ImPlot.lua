--------------------------------
-- @module ImPlot
-- @parent_module implot

implot = implot or {}
--------------------------------

--- 
---@param x number
---@param y number
---@param pix_offset ImVec2
---@param color ImVec4
---@param fmt string
---@overload fun(x:number, y:number, pix_offset:ImVec2, fmt:string)
function implot.annotate(x, y, pix_offset, color, fmt)
end

--------------------------------

--- 
---@param x number
---@param y number
---@param pix_offset ImVec2
---@param color ImVec4
---@param fmt string
---@overload fun(x:number, y:number, pix_offset:ImVec2, fmt:string)
function implot.annotateClamped(x, y, pix_offset, color, fmt)
end

--------------------------------

---  Begin a drag and drop source from a legend entry. The only supported flag is SourceNoPreviewTooltip 
---@param label_id string
---@param flags number
---@return boolean
function implot.beginLegendDragDropSource(label_id, flags)
end

--------------------------------

---  Begin a popup for a legend entry. 
---@param label_id string
---@param mouse_button number
---@return boolean
function implot.beginLegendPopup(label_id, mouse_button)
end

--------------------------------

---  End legend drag and drop source. 
function implot.endLegendDragDropSource()
end

--------------------------------

---  End a popup for a legend entry. 
function implot.endLegendPopup()
end

--------------------------------

---  Only call EndPlot() if BeginPlot() returns true! Typically called at the end
--- of an if statement conditioned on BeginPlot(). 
function implot.endPlot()
end

--------------------------------

---  Fits the next plot axes to all plotted data if they are unlocked (equivalent to double-clicks). 
function implot.fitNextPlotAxes()
end

--------------------------------

---  Returns a color from the Color map given an index >= 0 (modulo will be performed). 
---@param index number
---@return ImVec4
function implot.getColormapColor(index)
end

--------------------------------

---  Returns a null terminated string name for a built-in colormap. 
---@param colormap number
---@return string
function implot.getColormapName(colormap)
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

---  Gets the last item primary color (i.e. its legend icon color) 
---@return ImVec4
function implot.getLastItemColor()
end

--------------------------------

---  Returns the null terminated string name for an ImPlotMarker. 
---@param idx number
---@return string
function implot.getMarkerName(idx)
end

--------------------------------

---  Get the plot draw list for rendering to the current plot area. 
---@return imgui.ImDrawList
function implot.getPlotDrawList()
end

--------------------------------

---  Returns the current plot axis range. A negative y_axis uses the current value of SetPlotYAxis (ImPlotYAxis_1 initially). 
---@return implot.ImPlotLimits
function implot.getPlotLimits()
end

--------------------------------

---  Returns the mouse position in x,y coordinates of the current plot. A negative y_axis uses the current value of SetPlotYAxis (ImPlotYAxis_1 initially). 
---@return implot.ImPlotPoint
function implot.getPlotMousePos()
end

--------------------------------

---  Get the current Plot position (top-left) in pixels. 
---@return ImVec2
function implot.getPlotPos()
end

--------------------------------

---  Returns the current plot query bounds. Query must be enabled with ImPlotFlags_Query. 
---@return implot.ImPlotLimits
function implot.getPlotQuery()
end

--------------------------------

---  Get the curent Plot size in pixels. 
---@return ImVec2
function implot.getPlotSize()
end

--------------------------------

--- 
---@return implot.ImPlotStyle
function implot.getStyle()
end

--------------------------------

---  Returns the null terminated string name for an ImPlotCol. 
---@param idx number
---@return string
function implot.getStyleColorName(idx)
end

--------------------------------

---  Hides or shows the next plot item (i.e. as if it were toggled from the legend). Use ImGuiCond_Always if you need to forcefully set this every frame. 
function implot.hideNextItem()
end

--------------------------------

---  Returns true if a plot item legend entry is hovered. 
---@param label_id string
---@return boolean
function implot.isLegendEntryHovered(label_id)
end

--------------------------------

---  Returns true if the plot area in the current plot is hovered. 
---@return boolean
function implot.isPlotHovered()
end

--------------------------------

---  Returns true if the current plot is being queried. Query must be enabled with ImPlotFlags_Query. 
---@return boolean
function implot.isPlotQueried()
end

--------------------------------

---  Returns true if the XAxis plot area in the current plot is hovered. 
---@return boolean
function implot.isPlotXAxisHovered()
end

--------------------------------

---  Returns true if the YAxis[n] plot area in the current plot is hovered. 
---@return boolean
function implot.isPlotYAxisHovered()
end

--------------------------------

---  Linearly interpolates a color from the current colormap given t between 0 and 1. 
---@param t number
---@return ImVec4
function implot.lerpColormap(t)
end

--------------------------------

---  Returns the next unused colormap color and advances the colormap. Can be used to skip colors if desired. 
---@return ImVec4
function implot.nextColormapColor()
end

--------------------------------

--- 
---@param x number
---@param y number
---@param y_axis number
---@return implot.ImPlotPoint
function implot.pixelsToPlot(x, y, y_axis)
end

--------------------------------

---  Plots an dummy item (i.e. adds a legend entry colored by ImPlotCol_Line) 
---@param label_id string
function implot.plotDummy(label_id)
end

--------------------------------

---  Plots a centered text label at point x,y with optional pixel offset.
--- Text color can be changed with ImPlot::PushStyleColor(ImPlotCol_InlayText, ...). 
---@param text string
---@param x number
---@param y number
---@param vertical boolean
---@param pixel_offset ImVec2
function implot.plotText(text, x, y, vertical, pixel_offset)
end

--------------------------------

--- 
---@param x number
---@param y number
---@param y_axis number
---@return ImVec2
function implot.plotToPixels(x, y, y_axis)
end

--------------------------------

---  Undo temporary colormap modification. 
function implot.popColormap()
end

--------------------------------

---  Pop plot clip rect. 
function implot.popPlotClipRect()
end

--------------------------------

---  Undo temporary color modification. Undo multiple pushes at once by increasing count. 
function implot.popStyleColor()
end

--------------------------------

---  Undo temporary style modification. Undo multiple pushes at once by increasing count. 
function implot.popStyleVar()
end

--------------------------------

---  Push clip rect for rendering to current plot area. 
function implot.pushPlotClipRect()
end

--------------------------------

---  Set the location of the current plot's legend. 
---@param location number
---@param orientation number
---@param outside boolean
function implot.setLegendLocation(location, orientation, outside)
end

--------------------------------

---  Set the location of the current plot's mouse position text (default = South|East). 
---@param location number
function implot.setMousePosLocation(location)
end

--------------------------------

---  Set the error bar style for the next item only. 
function implot.setNextErrorBarStyle()
end

--------------------------------

---  Set the fill color for the next item only. 
function implot.setNextFillStyle()
end

--------------------------------

---  Set the line color and weight for the next item only. 
function implot.setNextLineStyle()
end

--------------------------------

---  Set the marker style for the next item only. 
function implot.setNextMarkerStyle()
end

--------------------------------

---  Set the axes range limits of the next plot. Call right before BeginPlot(). If ImGuiCond_Always is used, the axes limits will be locked. 
---@param xmin number
---@param xmax number
---@param ymin number
---@param ymax number
---@param cond number
function implot.setNextPlotLimits(xmin, xmax, ymin, ymax, cond)
end

--------------------------------

---  Set the X axis range limits of the next plot. Call right before BeginPlot(). If ImGuiCond_Always is used, the X axis limits will be locked. 
---@param xmin number
---@param xmax number
---@param cond number
function implot.setNextPlotLimitsX(xmin, xmax, cond)
end

--------------------------------

---  Set the Y axis range limits of the next plot. Call right before BeginPlot(). If ImGuiCond_Always is used, the Y axis limits will be locked. 
---@param ymin number
---@param ymax number
---@param cond number
---@param y_axis number
function implot.setNextPlotLimitsY(ymin, ymax, cond, y_axis)
end

--------------------------------

---  Select which Y axis will be used for subsequent plot elements. The default is ImPlotYAxis_1, or the first (left) Y axis. Enable 2nd and 3rd axes with ImPlotFlags_YAxisX. 
---@param y_axis number
function implot.setPlotYAxis(y_axis)
end

--------------------------------

---  Renders a vertical color scale using the current color map. Call this outside of Begin/EndPlot. 
---@param scale_min number
---@param scale_max number
---@param height number
function implot.showColormapScale(scale_min, scale_max, height)
end

--------------------------------

---  Shows ImPlot colormap selector dropdown menu. 
---@param label string
---@return boolean
function implot.showColormapSelector(label)
end

--------------------------------

---  Shows ImPlot style editor block (not a window). 
function implot.showStyleEditor()
end

--------------------------------

---  Shows ImPlot style selector dropdown menu. 
---@param label string
---@return boolean
function implot.showStyleSelector(label)
end

--------------------------------

---  Add basic help/info block (not a window): how to manipulate ImPlot as an end-user. 
function implot.showUserGuide()
end

--------------------------------

--- 
function implot.styleColorsAuto()
end

--------------------------------

--- 
function implot.styleColorsClassic()
end

--------------------------------

--- 
function implot.styleColorsDark()
end

--------------------------------

--- 
function implot.styleColorsLight()
end



return nil
