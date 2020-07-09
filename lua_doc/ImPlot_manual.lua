--
implot = implot or {}

--- Starts a 2D plotting context. If this function returns true, EndPlot() must
--- be called, e.g. "if (BeginPlot(...)) { ... EndPlot(); }"". #title_id must
--- be unique. If you need to avoid ID collisions or don't want to display a
--- title in the plot, use double hashes (e.g. "MyPlot##Hidden"). If #x_label
--- and/or #y_label are provided, axes labels will be displayed.
---@param title_id string
---@param x_label string @optional
---@param y_label string @optional
---@param size ImVec2 @optional
---@param flags number @optional
---@param x_flags number @optional
---@param y_flags number @optional
---@param y2_flags number @optional
---@param y3_flags number @optional
function implot.beginPlot(title_id, x_label, y_label, size, flags, x_flags, y_flags, y2_flags, y3_flags)
end

--- Plots a standard 2D line plot.
---@param label_id string
---@param values number[]
---@param count number
---@param offset number @optional
function implot.plotLine(label_id, values, count, offset)
end

--- Plots a standard 2D line plot.
---@param label_id string
---@param xs number[]
---@param ys number[]
---@param count number
---@param offset number @optional
function implot.plotLine(label_id, xs, ys, count, offset)
end

--- Plots a standard 2D line plot.
---@param label_id string
---@param data ImVec2[]
---@param count number
---@param offset number @optional
function implot.plotLine(label_id, data, count, offset)
end

--- Plots a standard 2D scatter plot.
---@param label_id string
---@param values number[]
---@param count number
---@param offset number @optional
function implot.plotScatter(label_id, values, count, offset)
end

--- Plots a standard 2D scatter plot.
---@param label_id string
---@param xs number[]
---@param ys number[]
---@param count number
---@param offset number @optional
function implot.plotScatter(label_id, xs, ys, count, offset)
end

--- Plots a standard 2D scatter plot.
---@param label_id string
---@param data ImVec2[]
---@param count number
---@param offset number @optional
function implot.plotScatter(label_id, data, count, offset)
end

--- Plots a shaded (filled) region between two lines, or a line and a horizontal reference.
---@param label_id string
---@param xs number[]
---@param ys1 number[]
---@param ys2 number[]
---@param count number
---@param offset number @optional
function implot.plotShaded(label_id, xs, ys1, ys2, count, offset)
end

--- Plots a shaded (filled) region between two lines, or a line and a horizontal reference.
---@param label_id string
---@param xs number[]
---@param ys number[]
---@param count number
---@param y_ret number @optional
---@param offset number @optional
function implot.plotShaded(label_id, xs, ys, count, y_ret, offset)
end

--- Plots a vertical bar graph.
---@param label_id string
---@param values number[]
---@param count number
---@param width number @optional
---@param shift number @optional
---@param offset number @optional
function implot.plotBars(label_id, values, count, width, shift, offset)
end

--- Plots a vertical bar graph.
---@param label_id string
---@param xs number[]
---@param ys number[]
---@param count number
---@param width number
---@param offset number @optional
function implot.plotBars(label_id, xs, ys, count, width, offset)
end

--- Plots a horizontal bar graph.
---@param label_id string
---@param values number
---@param count number
---@param height number @optional
---@param shift number @optional
---@param offset number @optional
function implot.plotBarsH(label_id, values, count, height, shift, offset)
end

--- Plots a horizontal bar graph.
---@param label_id string
---@param xs number
---@param ys number
---@param count number
---@param height number
---@param offset number @optional
function implot.plotBarsH(label_id, xs, ys, count, height, offset)
end

--- Plots vertical error bar. The label_id should match the label_id of the associated line or bar plot.
---@param label_id string
---@param xs number
---@param ys number
---@param err number
---@param count number
---@param offset number @optional
function implot.plotErrorBars(label_id, xs, ys, err, count, offset)
end

--- Plots vertical error bar. The label_id should match the label_id of the associated line or bar plot.
---@param label_id string
---@param xs number
---@param ys number
---@param neg number
---@param pos number
---@param count number
---@param offset number @optional
function implot.plotErrorBars(label_id, xs, ys, neg, pos, count, offset)
end

--- Plots horizontal error bars. The label_id should match the label_id of the associated line or bar plot.
---@param label_id string
---@param xs number
---@param ys number
---@param err number
---@param count number
---@param offset number @optional
function implot.plotErrorBarsH(label_id, xs, ys, err, count, offset)
end

--- Plots horizontal error bars. The label_id should match the label_id of the associated line or bar plot.
---@param label_id string
---@param xs number
---@param ys number
---@param neg number
---@param pos number
---@param count number
---@param offset number @optional
function implot.plotErrorBarsH(label_id, xs, ys, neg, pos, count, offset)
end

--- Plots a pie chart. If the sum of values > 1 or normalize is true, each value will be normalized. Center and radius are in plot coordinates.
---@param label_ids string[]
---@param values number[]
---@param count number
---@param x number
---@param y number
---@param radius number
---@param normalize boolean @optional
---@param label_fmt string @optional
---@param angle0 number @optional
function implot.plotPieChart(label_ids, values, count, x, y, radius, normalize, label_fmt, angle0)
end

--- Plots a 2D heatmap chart. Values are expected to be in row-major order. label_fmt can be set to NULL for no labels.
---@param label_id string
---@param values number
---@param rows number
---@param cols number
---@param scale_min number
---@param scale_max number
---@param label_fmt string @optional
---@param bounds_min implot.ImPlotPoint @optional
---@param bounds_max implot.ImPlotPoint @optional
function implot.plotHeatmap(label_id, values, rows, cols, scale_min, scale_max, label_fmt, bounds_min, bounds_max)
end

--- Plots digital data.
---@param label_id string
---@param xs number[]
---@param ys number[]
---@param count number
---@param offset number @optional
function implot.plotDigital(label_id, xs, ys, count, offset)
end

--- Temporarily modify a plot color. Don't forget to call PopStyleColor!
---@param idx number
---@param col number|ImVec4
function implot.pushStyleColor(idx, col)
end

--- Temporarily modify a style variable. Don't forget to call PopStyleVar!
---@param idx number
---@param val number
function implot.pushStyleVar(idx, val)
end

--- Switch to one of the built-in colormaps. If samples is greater than 1, the map will be linearly resampled.
---@param colormap number
---@param samples number @optional
function implot.setColormap(colormap, samples)
end

--- Sets a custom colormap.
---@param colors ImVec4[]
function implot.setColormap(colors)
end

--- Set the X axis ticks and optionally the labels for the next plot.
---@param values number[]
---@param n_ticks number
---@param labels string[] @optional
---@param show_default boolean @optional
function implot.setNextPlotTicksX(values, n_ticks, labels, show_default)
end

--- Set the X axis ticks and optionally the labels for the next plot.
---@param x_min number
---@param x_max number
---@param n_ticks number
---@param labels string @optional
---@param show_default boolean @optional
function implot.setNextPlotTicksX(x_min, x_max, n_ticks, labels, show_default)
end

--- Set the Y axis ticks and optionally the labels for the next plot.
---@param values number[]
---@param n_ticks number
---@param labels string[] @optional
---@param show_default boolean @optional
---@param y_axis number @optional
function implot.setNextPlotTicksY(values, n_ticks, labels, show_default, y_axis)
end

--- Set the Y axis ticks and optionally the labels for the next plot.
---@param x_min number
---@param x_max number
---@param n_ticks number
---@param labels string @optional
---@param show_default boolean @optional
---@param y_axis number @optional
function implot.setNextPlotTicksY(x_min, x_max, n_ticks, labels, show_default, y_axis)
end

--- Shows the ImPlot demo.
function implot.showDemoWindow(open)
end

--

---@class implot.ImPlotPoint
local ImPlotPoint = { x = 0, y = 0 }

---@class implot.ImPlotRange
local ImPlotRange = { min = 0, max = 0 }

---@class implot.ImPlotLimits
local ImPlotLimits = { x = ImPlotRange, y = ImPlotRange }

