--
implot = implot or {}

-------------------------------------------------------------------------------
-- Begin/End Plot
-------------------------------------------------------------------------------

--- Starts a 2D plotting context. If this function returns true, EndPlot() must
--- be called, e.g. "if (BeginPlot(...)) { ... EndPlot(); }". #title_id must
--- be unique. If you need to avoid ID collisions or don't want to display a
--- title in the plot, use double hashes (e.g. "MyPlot##Hidden" or "##NoTitle").
--- If #x_label and/or #y_label are provided, axes labels will be displayed.
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

-------------------------------------------------------------------------------
-- Plot Items
-------------------------------------------------------------------------------

-- The template functions below are explicitly instantiated in implot_items.cpp.
-- They are not intended to be used generically with custom types. You will get
-- a linker error if you try! All functions support the following scalar types:
--
-- float, double, ImS8, ImU8, ImS16, ImU16, ImS32, ImU32, ImS64, ImU64
--
--
-- If you need to plot custom or non-homogenous data you have a few options:
--
-- 1. If your data is a simple struct/class (e.g. Vector2f), you can use striding.
--    This is the most performant option if applicable.
--
--    struct Vector2f { float X, Y; };
--    ...
--    Vector2f data[42];
--    ImPlot::PlotLine("line", &data[0].x, &data[0].y, 42, 0, sizeof(Vector2f)); // or sizeof(float)*2
--
-- 2. Write a custom getter function or C++ lambda and pass it and your data to
--    an ImPlot function post-fixed with a G (e.g. PlotScatterG). This has a
--    slight performance cost, but probably not enough to worry about.
--
--    ImPlotPoint MyDataGetter(void* data, int idx) {
--        MyData* my_data = (MyData*)data;
--        ImPlotPoint p;
--        p.x = my_data->GetTime(idx);
--        p.y = my_data->GetValue(idx);
--        return p
--    }
--    ...
--    MyData my_data;
--    ImPlot::PlotScatterG("scatter", MyDataGetter, &my_data, my_data.Size());
--
-- NB: All types are converted to double before plotting. You may loose information
-- if you try plotting extremely large 64-bit integral types. Proceed with caution!

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
---@param dtype number @ImGuiDataType
---@param values ffi.cdata
---@param count number
---@param offset number @optional
---@param stride number @optional
function implot.plotLineC(label_id, dtype, values, count, offset, stride)
end

--- Plots a standard 2D line plot.
---@param label_id string
---@param dtype number @ImGuiDataType
---@param xs ffi.cdata
---@param ys ffi.cdata
---@param count number
---@param offset number @optional
---@param stride number @optional
function implot.plotLineC(label_id, dtype, xs, ys, count, offset, stride)
end

-------------------------------------------------------------------------------

--- Plots a standard 2D scatter plot. Default marker is ImPlotMarker_Circle.
---@param label_id string
---@param values number[]
---@param count number
---@param xscale number @optional
---@param x0 number @optional
---@param offset number @optional
function implot.plotScatter(label_id, values, count, xscale, x0, offset)
end

--- Plots a standard 2D scatter plot. Default marker is ImPlotMarker_Circle.
---@param label_id string
---@param xs number[]
---@param ys number[]
---@param count number
---@param offset number @optional
function implot.plotScatter(label_id, xs, ys, count, offset)
end

--- Plots a standard 2D scatter plot. Default marker is ImPlotMarker_Circle.
---@param label_id string
---@param dtype number @ImGuiDataType
---@param values ffi.cdata
---@param count number
---@param xscale number @optional
---@param x0 number @optional
---@param offset number @optional
---@param stride number @optional
function implot.plotScatterC(label_id, dtype, values, count, xscale, x0, offset, stride)
end

--- Plots a standard 2D scatter plot. Default marker is ImPlotMarker_Circle.
---@param label_id string
---@param dtype number @ImGuiDataType
---@param xs ffi.cdata
---@param ys ffi.cdata
---@param count number
---@param offset number @optional
---@param stride number @optional
function implot.plotScatterC(label_id, dtype, xs, ys, count, offset, stride)
end

-------------------------------------------------------------------------------

--- Plots a a stairstep graph. The y value is continued constantly from every x position,
--- i.e. the interval [x[i], x[i+1]) has the value y[i].
---@param label_id string
---@param values number[]
---@param count number
---@param xscale number @optional
---@param x0 number @optional
---@param offset number @optional
function implot.plotStairs(label_id, values, count, xscale, x0, offset)
end

--- Plots a a stairstep graph. The y value is continued constantly from every x position,
--- i.e. the interval [x[i], x[i+1]) has the value y[i].
---@param label_id string
---@param xs number[]
---@param ys number[]
---@param count number
---@param offset number @optional
function implot.plotStairs(label_id, xs, ys, count, offset)
end

--- Plots a a stairstep graph. The y value is continued constantly from every x position,
--- i.e. the interval [x[i], x[i+1]) has the value y[i].
---@param label_id string
---@param dtype number @ImGuiDataType
---@param values ffi.cdata
---@param count number
---@param xscale number @optional
---@param x0 number @optional
---@param offset number @optional
---@param stride number @optional
function implot.plotStairsC(label_id, dtype, values, count, xscale, x0, offset, stride)
end

--- Plots a a stairstep graph. The y value is continued constantly from every x position,
--- i.e. the interval [x[i], x[i+1]) has the value y[i].
---@param label_id string
---@param dtype number @ImGuiDataType
---@param xs ffi.cdata
---@param ys ffi.cdata
---@param count number
---@param offset number @optional
---@param stride number @optional
function implot.plotStairsC(label_id, dtype, xs, ys, count, offset, stride)
end

-------------------------------------------------------------------------------

--- Plots a shaded (filled) region between two lines, or a line and a horizontal reference.
---@param label_id string
---@param values number[]
---@param count number
---@param y_ref number @optional
---@param xscale number @optional
---@param x0 number @optional
---@param offset number @optional
function implot.plotShaded(label_id, values, count, y_ref, xscale, x0, offset)
end

--- Plots a shaded (filled) region between two lines, or a line and a horizontal reference.
---@param label_id string
---@param xs number[]
---@param ys number[]
---@param count number
---@param y_ref number @optional
---@param offset number @optional
function implot.plotShaded(label_id, xs, ys, count, y_ref, offset)
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
---@param dtype number @ImGuiDataType
---@param values ffi.cdata
---@param count number
---@param y_ref number @optional
---@param xscale number @optional
---@param x0 number @optional
---@param offset number @optional
---@param stride number @optional
function implot.plotShadedC(label_id, dtype, values, count, y_ref, xscale, x0, offset, stride)
end

--- Plots a shaded (filled) region between two lines, or a line and a horizontal reference.
---@param label_id string
---@param dtype number @ImGuiDataType
---@param xs ffi.cdata
---@param ys ffi.cdata
---@param count number
---@param y_ref number @optional
---@param offset number @optional
---@param stride number @optional
function implot.plotShadedC(label_id, dtype, xs, ys, count, y_ref, offset, stride)
end

--- Plots a shaded (filled) region between two lines, or a line and a horizontal reference.
---@param label_id string
---@param dtype number @ImGuiDataType
---@param xs ffi.cdata
---@param ys1 ffi.cdata
---@param ys2 ffi.cdata
---@param count number
---@param offset number @optional
---@param stride number @optional
function implot.plotShadedC(label_id, dtype, xs, ys1, ys2, count, offset, stride)
end

-------------------------------------------------------------------------------

--- Plots a vertical bar graph. #width and #shift are in X units.
---@param label_id string
---@param values number[]
---@param count number
---@param width number @optional
---@param shift number @optional
---@param offset number @optional
function implot.plotBars(label_id, values, count, width, shift, offset)
end

--- Plots a vertical bar graph. #width and #shift are in X units.
---@param label_id string
---@param xs number[]
---@param ys number[]
---@param count number
---@param width number
---@param offset number @optional
function implot.plotBars(label_id, xs, ys, count, width, offset)
end

--- Plots a vertical bar graph. #width and #shift are in X units.
---@param label_id string
---@param dtype number @ImGuiDataType
---@param values ffi.cdata
---@param count number
---@param width number @optional
---@param shift number @optional
---@param offset number @optional
---@param stride number @optional
function implot.plotBarsC(label_id, dtype, values, count, width, shift, offset, stride)
end

--- Plots a vertical bar graph. #width and #shift are in X units.
---@param label_id string
---@param dtype number @ImGuiDataType
---@param xs ffi.cdata
---@param ys ffi.cdata
---@param count number
---@param width number
---@param offset number @optional
---@param stride number @optional
function implot.plotBarsC(label_id, dtype, xs, ys, count, width, offset, stride)
end

-------------------------------------------------------------------------------

--- Plots a horizontal bar graph. #height and #shift are in Y units.
---@param label_id string
---@param values number[]
---@param count number
---@param height number @optional
---@param shift number @optional
---@param offset number @optional
function implot.plotBarsH(label_id, values, count, height, shift, offset)
end

--- Plots a horizontal bar graph. #height and #shift are in Y units.
---@param label_id string
---@param xs number[]
---@param ys number[]
---@param count number
---@param height number
---@param offset number @optional
function implot.plotBarsH(label_id, xs, ys, count, height, offset)
end

--- Plots a horizontal bar graph. #height and #shift are in Y units.
---@param label_id string
---@param dtype number @ImGuiDataType
---@param values ffi.cdata
---@param count number
---@param height number @optional
---@param shift number @optional
---@param offset number @optional
---@param stride number @optional
function implot.plotBarsHC(label_id, dtype, values, count, height, shift, offset, stride)
end

--- Plots a horizontal bar graph. #height and #shift are in Y units.
---@param label_id string
---@param dtype number @ImGuiDataType
---@param xs ffi.cdata
---@param ys ffi.cdata
---@param count number
---@param height number
---@param offset number @optional
---@param stride number @optional
function implot.plotBarsHC(label_id, dtype, xs, ys, count, height, offset, stride)
end

-------------------------------------------------------------------------------

--- Plots vertical error bar. The label_id should be the same as the label_id of the associated line or bar plot.
---@param label_id string
---@param xs number[]
---@param ys number[]
---@param err number[]
---@param count number
---@param offset number @optional
function implot.plotErrorBars(label_id, xs, ys, err, count, offset)
end

--- Plots vertical error bar. The label_id should be the same as the label_id of the associated line or bar plot.
---@param label_id string
---@param xs number[]
---@param ys number[]
---@param neg number[]
---@param pos number[]
---@param count number
---@param offset number @optional
function implot.plotErrorBars(label_id, xs, ys, neg, pos, count, offset)
end

--- Plots vertical error bar. The label_id should be the same as the label_id of the associated line or bar plot.
---@param label_id string
---@param dtype number @ImGuiDataType
---@param xs number[]
---@param ys number[]
---@param err number[]
---@param count number
---@param offset number @optional
---@param stride number @optional
function implot.plotErrorBarsC(label_id, dtype, xs, ys, err, count, offset, stride)
end

--- Plots vertical error bar. The label_id should be the same as the label_id of the associated line or bar plot.
---@param label_id string
---@param dtype number @ImGuiDataType
---@param xs number[]
---@param ys number[]
---@param neg number[]
---@param pos number[]
---@param count number
---@param offset number @optional
---@param stride number @optional
function implot.plotErrorBarsC(label_id, dtype, xs, ys, neg, pos, count, offset, stride)
end

-------------------------------------------------------------------------------

--- Plots horizontal error bars. The label_id should be the same as the label_id of the associated line or bar plot.
---@param label_id string
---@param xs number[]
---@param ys number[]
---@param err number[]
---@param count number
---@param offset number @optional
function implot.plotErrorBarsH(label_id, xs, ys, err, count, offset)
end

--- Plots horizontal error bars. The label_id should be the same as the label_id of the associated line or bar plot.
---@param label_id string
---@param xs number[]
---@param ys number[]
---@param neg number[]
---@param pos number[]
---@param count number
---@param offset number @optional
function implot.plotErrorBarsH(label_id, xs, ys, neg, pos, count, offset)
end

--- Plots horizontal error bars. The label_id should be the same as the label_id of the associated line or bar plot.
---@param label_id string
---@param dtype number @ImGuiDataType
---@param xs number[]
---@param ys number[]
---@param err number[]
---@param count number
---@param offset number @optional
---@param stride number @optional
function implot.plotErrorBarsHC(label_id, dtype, xs, ys, err, count, offset, stride)
end

--- Plots horizontal error bars. The label_id should be the same as the label_id of the associated line or bar plot.
---@param label_id string
---@param dtype number @ImGuiDataType
---@param xs number[]
---@param ys number[]
---@param neg number[]
---@param pos number[]
---@param count number
---@param offset number @optional
---@param stride number @optional
function implot.plotErrorBarsHC(label_id, dtype, xs, ys, neg, pos, count, offset, stride)
end

-------------------------------------------------------------------------------

--- Plots vertical stems.
---@param label_id string
---@param values number[]
---@param count number
---@param y_ref number @optional
---@param xscale number @optional
---@param x0 number @optional
---@param offset number @optional
function implot.plotStems(label_id, values, count, y_ref, xscale, x0, offset)
end

--- Plots vertical stems.
---@param label_id string
---@param xs number[]
---@param ys number[]
---@param count number
---@param y_ref number @optional
---@param offset number @optional
function implot.plotStems(label_id, xs, ys, count, y_ref, offset)
end

--- Plots vertical stems.
---@param label_id string
---@param dtype number @ImGuiDataType
---@param values ffi.cdata
---@param count number
---@param y_ref number @optional
---@param xscale number @optional
---@param x0 number @optional
---@param offset number @optional
---@param stride number @optional
function implot.plotStemsC(label_id, dtype, values, count, y_ref, xscale, x0, offset, stride)
end

--- Plots vertical stems.
---@param label_id string
---@param dtype number @ImGuiDataType
---@param xs ffi.cdata
---@param ys ffi.cdata
---@param count number
---@param y_ref number @optional
---@param offset number @optional
---@param stride number @optional
function implot.plotStemsC(label_id, dtype, xs, ys, count, y_ref, offset, stride)
end


-------------------------------------------------------------------------------

--- Plots a pie chart. If the sum of values > 1 or normalize is true, each value will be normalized.
--- Center and radius are in plot units. #label_fmt can be set to NULL for no labels.
---@param label_ids string[]
---@param values number[]
---@param count number
---@param x number
---@param y number
---@param radius number
---@param normalize boolean @optional, false
---@param label_fmt string @optional, '%.1f'
---@param angle0 number @optional, 90
function implot.plotPieChart(label_ids, values, count, x, y, radius, normalize, label_fmt, angle0)
end

--- Plots a pie chart. If the sum of values > 1 or normalize is true, each value will be normalized.
--- Center and radius are in plot units. #label_fmt can be set to NULL for no labels.
---@param label_ids string[]
---@param dtype number @ImGuiDataType
---@param values ffi.cdata
---@param count number
---@param x number
---@param y number
---@param radius number
---@param normalize boolean @optional, false
---@param label_fmt string @optional, '%.1f'
---@param angle0 number @optional, 90
function implot.plotPieChartC(label_ids, dtype, values, count, x, y, radius, normalize, label_fmt, angle0)
end

-------------------------------------------------------------------------------

--- Plots a 2D heatmap chart. Values are expected to be in row-major order.
--- #label_fmt can be set to NULL for no labels.
---@param label_id string
---@param values number[]
---@param rows number
---@param cols number
---@param scale_min number
---@param scale_max number
---@param label_fmt string @optional, '%.1f'
---@param bounds_min implot.ImPlotPoint @optional, (0, 0)
---@param bounds_max implot.ImPlotPoint @optional, (1, 1)
function implot.plotHeatmap(label_id, values, rows, cols, scale_min, scale_max, label_fmt, bounds_min, bounds_max)
end

--- Plots a 2D heatmap chart. Values are expected to be in row-major order.
--- #label_fmt can be set to NULL for no labels.
---@param label_id string
---@param dtype number @ImGuiDataType
---@param values ffi.cdata
---@param rows number
---@param cols number
---@param scale_min number
---@param scale_max number
---@param label_fmt string @optional, '%.1f'
---@param bounds_min implot.ImPlotPoint @optional, (0, 0)
---@param bounds_max implot.ImPlotPoint @optional, (1, 1)
function implot.plotHeatmapC(label_id, dtype, values, rows, cols, scale_min, scale_max, label_fmt, bounds_min, bounds_max)
end

-------------------------------------------------------------------------------

--- Plots digital data. Digital plots do not respond to y drag or zoom,
--- and are always referenced to the bottom of the plot.
---@param label_id string
---@param xs number[]
---@param ys number[]
---@param count number
---@param offset number @optional
function implot.plotDigital(label_id, xs, ys, count, offset)
end

--- Plots digital data. Digital plots do not respond to y drag or zoom,
--- and are always referenced to the bottom of the plot.
---@param label_id string
---@param dtype number @ImGuiDataType
---@param xs ffi.cdata
---@param ys ffi.cdata
---@param count number
---@param offset number @optional
---@param stride number @optional
function implot.plotDigitalC(label_id, dtype, xs, ys, count, offset, stride)
end

-------------------------------------------------------------------------------

--- Plots an axis-aligned image. #bounds_min/bounds_max are in plot coordinatse (y-up)
--- and #uv0/uv1 are in texture coordinates (y-down).
---@param label_id string
---@param texture cc.Texture2D
---@param bounds_min implot.ImPlotPoint
---@param bounds_max table
---@param uv0 ImVec2 @optional, (0, 0)
---@param uv1 ImVec2 @optional, (1, 1)
---@param tint_col ImVec4 @optional, (1, 1, 1, 1)
function implot.plotImage(label_id, texture, bounds_min, bounds_max, uv0, uv1, tint_col)
end

--- Plots an axis-aligned image. #bounds_min/bounds_max are in plot coordinatse (y-up)
--- and #uv0/uv1 are in texture coordinates (y-down).
---@param label_id string
---@param sprite cc.Sprite
---@param bounds_min implot.ImPlotPoint
---@param bounds_max table
---@param tint_col ImVec4 @optional, (1, 1, 1, 1)
function implot.plotImage(label_id, sprite, bounds_min, bounds_max, tint_col)
end

-------------------------------------------------------------------------------
-- Plot Utils
-------------------------------------------------------------------------------

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
---@param y_axis number @optional, ImPlotYAxis
function implot.setNextPlotTicksY(values, n_ticks, labels, show_default, y_axis)
end

--- Set the Y axis ticks and optionally the labels for the next plot.
---@param x_min number
---@param x_max number
---@param n_ticks number
---@param labels string @optional
---@param show_default boolean @optional
---@param y_axis number @optional, ImPlotYAxis
function implot.setNextPlotTicksY(x_min, x_max, n_ticks, labels, show_default, y_axis)
end

-------------------------------------------------------------------------------
-- Plot Tools
-------------------------------------------------------------------------------

-- The following functions MUST be called between Begin/EndPlot!

--- Shows a draggable vertical guide line at an x-value. #col defaults to ImGuiCol_Text.
---@param id string
---@param x_value number
---@param show_label boolean @optional, true
---@param col ImVec4 @optional, IMPLOT_AUTO_COL
---@param thickness number @optional, 1
---@return boolean,number
function imlpot.dragLineX(id, x_value, show_label, col, thickness)
end

--- Shows a draggable horizontal guide line at a y-value. #col defaults to ImGuiCol_Text.
---@param id string
---@param y_value number
---@param show_label boolean @optional, true
---@param col ImVec4 @optional, IMPLOT_AUTO_COL
---@param thickness number @optional, 1
---@return boolean,number
function imlpot.dragLineY(id, y_value, show_label, col, thickness)
end

--- Shows a draggable point at x,y. #col defaults to ImGuiCol_Text.
---@param id string
---@param x number
---@param y number
---@param show_label boolean @optional, true
---@param col ImVec4 @optional, IMPLOT_AUTO_COL
---@param radius number @optional, 4
---@return boolean,number,number
function imlpot.dragLinePoint(id, x, y, show_label, col, radius)
end

-------------------------------------------------------------------------------
-- Plot and Item Styling
-------------------------------------------------------------------------------

-- Use PushStyleX to temporarily modify your ImPlotStyle. The modification
-- will last until the matching call to PopStyleX. You MUST call a pop for
-- every push, otherwise you will leak memory! This behaves just like ImGui.

--- Temporarily modify a plot color. Don't forget to call PopStyleColor!
---@param idx number
---@param col number|ImVec4
function implot.pushStyleColor(idx, col)
end

--- Temporarily modify a style variable. Don't forget to call PopStyleVar!
---@param idx number
---@param val number|ImVec2
function implot.pushStyleVar(idx, val)
end

-------------------------------------------------------------------------------
-- Colormaps
-------------------------------------------------------------------------------

-- Item styling is based on Colormaps when the relevant ImPlotCol is set to
-- IMPLOT_AUTO_COL (default). Several built in colormaps are available and can be
-- toggled in the demo. You can push/pop or set your own colormaps as well.

-- The Colormap data will be ignored and a custom color will be used if you have either:
--     1) Modified an item style color in your ImPlotStyle to anything but IMPLOT_AUTO_COL.
--     2) Pushed an item style color using PushStyleColor().
--     3) Set the next item style with a SetNextXStyle function.

--- Temporarily switch to one of the built-in colormaps.
---@param colormap number @ImPlotColormap
function implot.pushColormap(colormap)
end

--- Permanently sets a custom colormap. The colors will be copied to internal memory.
---@param colormap ImVec4[]
function implot.setColormap(colormap)
end

--- Permanently switch to one of the built-in colormaps. If samples is greater than 1,
--- the map will be linearly resampled. Don't call this each frame.
---@param colormap number @ImPlotColormap
---@param samples number @optional
function implot.setColormap(colormap, samples)
end

-------------------------------------------------------------------------------
-- Miscellaneous
-------------------------------------------------------------------------------

--- Shows ImPlot metrics/debug information.
---@param p_popen boolean @optional
---@return boolean|nil
function implot.showMetricsWindow(p_popen)
end

-------------------------------------------------------------------------------
-- Demo (add implot_demo.cpp to your sources!)
-------------------------------------------------------------------------------

--- Shows the ImPlot demo.
---@param p_popen boolean @optional
---@return boolean|nil
function implot.showDemoWindow(p_popen)
end

-------------------------------------------------------------------------------

---@class implot.ImPlotPoint
local ImPlotPoint = { x = 0, y = 0 }

---@class implot.ImPlotRange
local ImPlotRange = { min = 0, max = 0 }

---@class implot.ImPlotLimits
local ImPlotLimits = { x = ImPlotRange, y = ImPlotRange }

