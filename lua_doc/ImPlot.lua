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

---  Turns the current plot's plotting area into a drag and drop source. Don't forget to call EndDragDropSource! 
---@return boolean
function implot.beginDragDropSource()
end

--------------------------------

---  Turns an item in the current plot's legend into drag and drop source. Don't forget to call EndDragDropSource! 
---@param label_id string
---@param flags number
---@return boolean
function implot.beginDragDropSourceItem(label_id, flags)
end

--------------------------------

---  Turns the current plot's X-axis into a drag and drop source. Don't forget to call EndDragDropSource! 
---@return boolean
function implot.beginDragDropSourceX()
end

--------------------------------

---  Turns the current plot's Y-axis into a drag and drop source. Don't forget to call EndDragDropSource! 
---@return boolean
function implot.beginDragDropSourceY()
end

--------------------------------

---  Turns the current plot's plotting area into a drag and drop target. Don't forget to call EndDragDropTarget! 
---@return boolean
function implot.beginDragDropTarget()
end

--------------------------------

---  Turns the current plot's legend into a drag and drop target. Don't forget to call EndDragDropTarget! 
---@return boolean
function implot.beginDragDropTargetLegend()
end

--------------------------------

---  Turns the current plot's X-axis into a drag and drop target. Don't forget to call EndDragDropTarget! 
---@return boolean
function implot.beginDragDropTargetX()
end

--------------------------------

---  Turns the current plot's Y-Axis into a drag and drop target. Don't forget to call EndDragDropTarget! 
---@return boolean
function implot.beginDragDropTargetY()
end

--------------------------------

---  Begin a popup for a legend entry. 
---@param label_id string
---@param mouse_button number
---@return boolean
function implot.beginLegendPopup(label_id, mouse_button)
end

--------------------------------

---  Shows a button with a colormap gradient brackground. 
---@param label string
---@param size ImVec2
---@param cmap number
---@return boolean
function implot.colormapButton(label, size, cmap)
end

--------------------------------

--- 
---@param cmap number
function implot.colormapIcon(cmap)
end

--------------------------------

---  Shows a vertical color scale with linear spaced ticks using the specified color map. Use double hashes to hide label (e.g. "##NoLabel"). 
---@param label string
---@param scale_min number
---@param scale_max number
---@param size ImVec2
---@param cmap number
---@param fmt string
function implot.colormapScale(label, scale_min, scale_max, size, cmap, fmt)
end

--------------------------------

---  Ends a drag and drop source (currently just an alias for ImGui::EndDragDropSource). 
function implot.endDragDropSource()
end

--------------------------------

---  Ends a drag and drop target (currently just an alias for ImGui::EndDragDropTarget). 
function implot.endDragDropTarget()
end

--------------------------------

---  End a popup for a legend entry. 
function implot.endLegendPopup()
end

--------------------------------

---  Only call EndPlot() if BeginPlot() returns true! Typically called at the end
--- of an if statement conditioned on BeginPlot(). See example above. 
function implot.endPlot()
end

--------------------------------

---  Fits the next plot axes to all plotted data if they are unlocked (equivalent to double-clicks). 
function implot.fitNextPlotAxes()
end

--------------------------------

---  Returns a color from a colormap given an index >= 0 (modulo will be performed). 
---@param idx number
---@param cmap number
---@return ImVec4
function implot.getColormapColor(idx, cmap)
end

--------------------------------

---  Returns the number of available colormaps (i.e. the built-in + user-added count). 
---@return number
function implot.getColormapCount()
end

--------------------------------

---  Returns an index number for a colormap given a valid string name. Returns -1 if name is invalid. 
---@param name string
---@return number
function implot.getColormapIndex(name)
end

--------------------------------

---  Returns a null terminated string name for a colormap given an index. Returns NULL if index is invalid. 
---@param cmap number
---@return string
function implot.getColormapName(cmap)
end

--------------------------------

---  Returns the size of a colormap. 
---@return number
function implot.getColormapSize()
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

---  Get the plot draw list for custom rendering to the current plot area. Call between Begin/EndPlot. 
---@return ImDrawList
function implot.getPlotDrawList()
end

--------------------------------

---  Returns the current plot axis range. A negative y_axis uses the current value of SetPlotYAxis (ImPlotYAxis_1 initially). 
---@return ImPlotLimits
function implot.getPlotLimits()
end

--------------------------------

---  Returns the mouse position in x,y coordinates of the current plot. A negative y_axis uses the current value of SetPlotYAxis (ImPlotYAxis_1 initially). 
---@return ImPlotPoint
function implot.getPlotMousePos()
end

--------------------------------

---  Get the current Plot position (top-left) in pixels. 
---@return ImVec2
function implot.getPlotPos()
end

--------------------------------

---  Returns the current plot query bounds. Query must be enabled with ImPlotFlags_Query. 
---@return ImPlotLimits
function implot.getPlotQuery()
end

--------------------------------

---  Returns the current plot box selection bounds. 
---@return ImPlotLimits
function implot.getPlotSelection()
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

---  Returns true if the current plot is being queried or has an active query. Query must be enabled with ImPlotFlags_Query. 
---@return boolean
function implot.isPlotQueried()
end

--------------------------------

---  Returns true if the current plot is being box selected. 
---@return boolean
function implot.isPlotSelected()
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

---  Returns the next color from the current colormap and advances the colormap for the current plot.
--- Can also be used with no return value to skip colors if desired. You need to call this between Begin/EndPlot! 
---@return ImVec4
function implot.nextColormapColor()
end

--------------------------------

--- 
---@param x number
---@param y number
---@param y_axis number
---@return ImPlotPoint
function implot.pixelsToPlot(x, y, y_axis)
end

--------------------------------

---  Plots a dummy item (i.e. adds a legend entry colored by ImPlotCol_Line) 
---@param label_id string
function implot.plotDummy(label_id)
end

--------------------------------

---  Plots a centered text label at point x,y with an optional pixel offset. Text color can be changed with implot.:PushStyleColor(ImPlotCol_InlayText, ...). 
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

---  Undo temporary colormap modification(s). Undo multiple pushes at once by increasing count. 
function implot.popColormap()
end

--------------------------------

---  Pop plot clip rect. Call between Begin/EndPlot. 
function implot.popPlotClipRect()
end

--------------------------------

---  Undo temporary style color modification(s). Undo multiple pushes at once by increasing count. 
function implot.popStyleColor()
end

--------------------------------

---  Undo temporary style variable modification(s). Undo multiple pushes at once by increasing count. 
function implot.popStyleVar()
end

--------------------------------

---  Push clip rect for rendering to current plot area. The rect can be expanded or contracted by #expand pixels. Call between Begin/EndPlot.
--- IMPLOT_API void PushPlotClipRect(float expand=0); 
function implot.pushPlotClipRect()
end

--------------------------------

---  Sample a color from the current colormap given t between 0 and 1. 
---@param t number
---@param cmap number
---@return ImVec4
function implot.sampleColormap(t, cmap)
end

--------------------------------

---  Set the location of the current plot's legend (default = North|West). 
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

---  Set the format for numeric X axis labels (default="%g"). Formated values will be doubles (i.e. don't supply %d, %i, etc.). Not applicable if ImPlotAxisFlags_Time enabled. 
---@param fmt string
function implot.setNextPlotFormatX(fmt)
end

--------------------------------

---  Set the format for numeric Y axis labels (default="%g"). Formated values will be doubles (i.e. don't supply %d, %i, etc.). 
---@param fmt string
---@param y_axis number
function implot.setNextPlotFormatY(fmt, y_axis)
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

---  Set the current plot query bounds. Query must be enabled with ImPlotFlags_Query. 
---@param query ImPlotLimits
---@param y_axis number
function implot.setPlotQuery(query, y_axis)
end

--------------------------------

---  Select which Y axis will be used for subsequent plot elements. The default is ImPlotYAxis_1, or the first (left) Y axis. Enable 2nd and 3rd axes with ImPlotFlags_YAxisX. 
---@param y_axis number
function implot.setPlotYAxis(y_axis)
end

--------------------------------

---  Shows ImPlot colormap selector dropdown menu. 
---@param label string
---@return boolean
function implot.showColormapSelector(label)
end

--------------------------------

---  Add basic help/info block for end users (not a window). 
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

---  Style plot colors for current ImGui style (default). 
function implot.styleColorsAuto()
end

--------------------------------

---  Style plot colors for ImGui "Classic". 
function implot.styleColorsClassic()
end

--------------------------------

---  Style plot colors for ImGui "Dark". 
function implot.styleColorsDark()
end

--------------------------------

---  Style plot colors for ImGui "Light". 
function implot.styleColorsLight()
end



return nil
