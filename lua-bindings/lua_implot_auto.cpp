#include "lua_implot_auto.hpp"
#include "implot/implot.h"
#include "imgui_lua.hpp"

int luaReg_implot_implotImAxis(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImAxis");
	LUA_ENUM_ENTRY("X1", ImAxis_::ImAxis_X1);
	LUA_ENUM_ENTRY("X2", ImAxis_::ImAxis_X2);
	LUA_ENUM_ENTRY("X3", ImAxis_::ImAxis_X3);
	LUA_ENUM_ENTRY("Y1", ImAxis_::ImAxis_Y1);
	LUA_ENUM_ENTRY("Y2", ImAxis_::ImAxis_Y2);
	LUA_ENUM_ENTRY("Y3", ImAxis_::ImAxis_Y3);
	LUA_ENUM_ENTRY("COUNT", ImAxis_::ImAxis_COUNT);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotFlags");
	LUA_ENUM_ENTRY("None", ImPlotFlags_::ImPlotFlags_None);
	LUA_ENUM_ENTRY("NoTitle", ImPlotFlags_::ImPlotFlags_NoTitle);
	LUA_ENUM_ENTRY("NoLegend", ImPlotFlags_::ImPlotFlags_NoLegend);
	LUA_ENUM_ENTRY("NoMouseText", ImPlotFlags_::ImPlotFlags_NoMouseText);
	LUA_ENUM_ENTRY("NoInputs", ImPlotFlags_::ImPlotFlags_NoInputs);
	LUA_ENUM_ENTRY("NoMenus", ImPlotFlags_::ImPlotFlags_NoMenus);
	LUA_ENUM_ENTRY("NoBoxSelect", ImPlotFlags_::ImPlotFlags_NoBoxSelect);
	LUA_ENUM_ENTRY("NoChild", ImPlotFlags_::ImPlotFlags_NoChild);
	LUA_ENUM_ENTRY("NoFrame", ImPlotFlags_::ImPlotFlags_NoFrame);
	LUA_ENUM_ENTRY("Equal", ImPlotFlags_::ImPlotFlags_Equal);
	LUA_ENUM_ENTRY("Crosshairs", ImPlotFlags_::ImPlotFlags_Crosshairs);
	LUA_ENUM_ENTRY("CanvasOnly", ImPlotFlags_::ImPlotFlags_CanvasOnly);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotAxisFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotAxisFlags");
	LUA_ENUM_ENTRY("None", ImPlotAxisFlags_::ImPlotAxisFlags_None);
	LUA_ENUM_ENTRY("NoLabel", ImPlotAxisFlags_::ImPlotAxisFlags_NoLabel);
	LUA_ENUM_ENTRY("NoGridLines", ImPlotAxisFlags_::ImPlotAxisFlags_NoGridLines);
	LUA_ENUM_ENTRY("NoTickMarks", ImPlotAxisFlags_::ImPlotAxisFlags_NoTickMarks);
	LUA_ENUM_ENTRY("NoTickLabels", ImPlotAxisFlags_::ImPlotAxisFlags_NoTickLabels);
	LUA_ENUM_ENTRY("NoInitialFit", ImPlotAxisFlags_::ImPlotAxisFlags_NoInitialFit);
	LUA_ENUM_ENTRY("NoMenus", ImPlotAxisFlags_::ImPlotAxisFlags_NoMenus);
	LUA_ENUM_ENTRY("NoSideSwitch", ImPlotAxisFlags_::ImPlotAxisFlags_NoSideSwitch);
	LUA_ENUM_ENTRY("NoHighlight", ImPlotAxisFlags_::ImPlotAxisFlags_NoHighlight);
	LUA_ENUM_ENTRY("Opposite", ImPlotAxisFlags_::ImPlotAxisFlags_Opposite);
	LUA_ENUM_ENTRY("Foreground", ImPlotAxisFlags_::ImPlotAxisFlags_Foreground);
	LUA_ENUM_ENTRY("Invert", ImPlotAxisFlags_::ImPlotAxisFlags_Invert);
	LUA_ENUM_ENTRY("AutoFit", ImPlotAxisFlags_::ImPlotAxisFlags_AutoFit);
	LUA_ENUM_ENTRY("RangeFit", ImPlotAxisFlags_::ImPlotAxisFlags_RangeFit);
	LUA_ENUM_ENTRY("PanStretch", ImPlotAxisFlags_::ImPlotAxisFlags_PanStretch);
	LUA_ENUM_ENTRY("LockMin", ImPlotAxisFlags_::ImPlotAxisFlags_LockMin);
	LUA_ENUM_ENTRY("LockMax", ImPlotAxisFlags_::ImPlotAxisFlags_LockMax);
	LUA_ENUM_ENTRY("Lock", ImPlotAxisFlags_::ImPlotAxisFlags_Lock);
	LUA_ENUM_ENTRY("NoDecorations", ImPlotAxisFlags_::ImPlotAxisFlags_NoDecorations);
	LUA_ENUM_ENTRY("AuxDefault", ImPlotAxisFlags_::ImPlotAxisFlags_AuxDefault);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotSubplotFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotSubplotFlags");
	LUA_ENUM_ENTRY("None", ImPlotSubplotFlags_::ImPlotSubplotFlags_None);
	LUA_ENUM_ENTRY("NoTitle", ImPlotSubplotFlags_::ImPlotSubplotFlags_NoTitle);
	LUA_ENUM_ENTRY("NoLegend", ImPlotSubplotFlags_::ImPlotSubplotFlags_NoLegend);
	LUA_ENUM_ENTRY("NoMenus", ImPlotSubplotFlags_::ImPlotSubplotFlags_NoMenus);
	LUA_ENUM_ENTRY("NoResize", ImPlotSubplotFlags_::ImPlotSubplotFlags_NoResize);
	LUA_ENUM_ENTRY("NoAlign", ImPlotSubplotFlags_::ImPlotSubplotFlags_NoAlign);
	LUA_ENUM_ENTRY("ShareItems", ImPlotSubplotFlags_::ImPlotSubplotFlags_ShareItems);
	LUA_ENUM_ENTRY("LinkRows", ImPlotSubplotFlags_::ImPlotSubplotFlags_LinkRows);
	LUA_ENUM_ENTRY("LinkCols", ImPlotSubplotFlags_::ImPlotSubplotFlags_LinkCols);
	LUA_ENUM_ENTRY("LinkAllX", ImPlotSubplotFlags_::ImPlotSubplotFlags_LinkAllX);
	LUA_ENUM_ENTRY("LinkAllY", ImPlotSubplotFlags_::ImPlotSubplotFlags_LinkAllY);
	LUA_ENUM_ENTRY("ColMajor", ImPlotSubplotFlags_::ImPlotSubplotFlags_ColMajor);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotLegendFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotLegendFlags");
	LUA_ENUM_ENTRY("None", ImPlotLegendFlags_::ImPlotLegendFlags_None);
	LUA_ENUM_ENTRY("NoButtons", ImPlotLegendFlags_::ImPlotLegendFlags_NoButtons);
	LUA_ENUM_ENTRY("NoHighlightItem", ImPlotLegendFlags_::ImPlotLegendFlags_NoHighlightItem);
	LUA_ENUM_ENTRY("NoHighlightAxis", ImPlotLegendFlags_::ImPlotLegendFlags_NoHighlightAxis);
	LUA_ENUM_ENTRY("NoMenus", ImPlotLegendFlags_::ImPlotLegendFlags_NoMenus);
	LUA_ENUM_ENTRY("Outside", ImPlotLegendFlags_::ImPlotLegendFlags_Outside);
	LUA_ENUM_ENTRY("Horizontal", ImPlotLegendFlags_::ImPlotLegendFlags_Horizontal);
	LUA_ENUM_ENTRY("Sort", ImPlotLegendFlags_::ImPlotLegendFlags_Sort);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotMouseTextFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotMouseTextFlags");
	LUA_ENUM_ENTRY("None", ImPlotMouseTextFlags_::ImPlotMouseTextFlags_None);
	LUA_ENUM_ENTRY("NoAuxAxes", ImPlotMouseTextFlags_::ImPlotMouseTextFlags_NoAuxAxes);
	LUA_ENUM_ENTRY("NoFormat", ImPlotMouseTextFlags_::ImPlotMouseTextFlags_NoFormat);
	LUA_ENUM_ENTRY("ShowAlways", ImPlotMouseTextFlags_::ImPlotMouseTextFlags_ShowAlways);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotDragToolFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotDragToolFlags");
	LUA_ENUM_ENTRY("None", ImPlotDragToolFlags_::ImPlotDragToolFlags_None);
	LUA_ENUM_ENTRY("NoCursors", ImPlotDragToolFlags_::ImPlotDragToolFlags_NoCursors);
	LUA_ENUM_ENTRY("NoFit", ImPlotDragToolFlags_::ImPlotDragToolFlags_NoFit);
	LUA_ENUM_ENTRY("NoInputs", ImPlotDragToolFlags_::ImPlotDragToolFlags_NoInputs);
	LUA_ENUM_ENTRY("Delayed", ImPlotDragToolFlags_::ImPlotDragToolFlags_Delayed);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotColormapScaleFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotColormapScaleFlags");
	LUA_ENUM_ENTRY("None", ImPlotColormapScaleFlags_::ImPlotColormapScaleFlags_None);
	LUA_ENUM_ENTRY("NoLabel", ImPlotColormapScaleFlags_::ImPlotColormapScaleFlags_NoLabel);
	LUA_ENUM_ENTRY("Opposite", ImPlotColormapScaleFlags_::ImPlotColormapScaleFlags_Opposite);
	LUA_ENUM_ENTRY("Invert", ImPlotColormapScaleFlags_::ImPlotColormapScaleFlags_Invert);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotItemFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotItemFlags");
	LUA_ENUM_ENTRY("None", ImPlotItemFlags_::ImPlotItemFlags_None);
	LUA_ENUM_ENTRY("NoLegend", ImPlotItemFlags_::ImPlotItemFlags_NoLegend);
	LUA_ENUM_ENTRY("NoFit", ImPlotItemFlags_::ImPlotItemFlags_NoFit);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotLineFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotLineFlags");
	LUA_ENUM_ENTRY("None", ImPlotLineFlags_::ImPlotLineFlags_None);
	LUA_ENUM_ENTRY("Segments", ImPlotLineFlags_::ImPlotLineFlags_Segments);
	LUA_ENUM_ENTRY("Loop", ImPlotLineFlags_::ImPlotLineFlags_Loop);
	LUA_ENUM_ENTRY("SkipNaN", ImPlotLineFlags_::ImPlotLineFlags_SkipNaN);
	LUA_ENUM_ENTRY("NoClip", ImPlotLineFlags_::ImPlotLineFlags_NoClip);
	LUA_ENUM_ENTRY("Shaded", ImPlotLineFlags_::ImPlotLineFlags_Shaded);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotScatterFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotScatterFlags");
	LUA_ENUM_ENTRY("None", ImPlotScatterFlags_::ImPlotScatterFlags_None);
	LUA_ENUM_ENTRY("NoClip", ImPlotScatterFlags_::ImPlotScatterFlags_NoClip);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotStairsFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotStairsFlags");
	LUA_ENUM_ENTRY("None", ImPlotStairsFlags_::ImPlotStairsFlags_None);
	LUA_ENUM_ENTRY("PreStep", ImPlotStairsFlags_::ImPlotStairsFlags_PreStep);
	LUA_ENUM_ENTRY("Shaded", ImPlotStairsFlags_::ImPlotStairsFlags_Shaded);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotShadedFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotShadedFlags");
	LUA_ENUM_ENTRY("None", ImPlotShadedFlags_::ImPlotShadedFlags_None);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotBarsFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotBarsFlags");
	LUA_ENUM_ENTRY("None", ImPlotBarsFlags_::ImPlotBarsFlags_None);
	LUA_ENUM_ENTRY("Horizontal", ImPlotBarsFlags_::ImPlotBarsFlags_Horizontal);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotBarGroupsFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotBarGroupsFlags");
	LUA_ENUM_ENTRY("None", ImPlotBarGroupsFlags_::ImPlotBarGroupsFlags_None);
	LUA_ENUM_ENTRY("Horizontal", ImPlotBarGroupsFlags_::ImPlotBarGroupsFlags_Horizontal);
	LUA_ENUM_ENTRY("Stacked", ImPlotBarGroupsFlags_::ImPlotBarGroupsFlags_Stacked);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotErrorBarsFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotErrorBarsFlags");
	LUA_ENUM_ENTRY("None", ImPlotErrorBarsFlags_::ImPlotErrorBarsFlags_None);
	LUA_ENUM_ENTRY("Horizontal", ImPlotErrorBarsFlags_::ImPlotErrorBarsFlags_Horizontal);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotStemsFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotStemsFlags");
	LUA_ENUM_ENTRY("None", ImPlotStemsFlags_::ImPlotStemsFlags_None);
	LUA_ENUM_ENTRY("Horizontal", ImPlotStemsFlags_::ImPlotStemsFlags_Horizontal);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotInfLinesFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotInfLinesFlags");
	LUA_ENUM_ENTRY("None", ImPlotInfLinesFlags_::ImPlotInfLinesFlags_None);
	LUA_ENUM_ENTRY("Horizontal", ImPlotInfLinesFlags_::ImPlotInfLinesFlags_Horizontal);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotPieChartFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotPieChartFlags");
	LUA_ENUM_ENTRY("None", ImPlotPieChartFlags_::ImPlotPieChartFlags_None);
	LUA_ENUM_ENTRY("Normalize", ImPlotPieChartFlags_::ImPlotPieChartFlags_Normalize);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotHeatmapFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotHeatmapFlags");
	LUA_ENUM_ENTRY("None", ImPlotHeatmapFlags_::ImPlotHeatmapFlags_None);
	LUA_ENUM_ENTRY("ColMajor", ImPlotHeatmapFlags_::ImPlotHeatmapFlags_ColMajor);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotHistogramFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotHistogramFlags");
	LUA_ENUM_ENTRY("None", ImPlotHistogramFlags_::ImPlotHistogramFlags_None);
	LUA_ENUM_ENTRY("Horizontal", ImPlotHistogramFlags_::ImPlotHistogramFlags_Horizontal);
	LUA_ENUM_ENTRY("Cumulative", ImPlotHistogramFlags_::ImPlotHistogramFlags_Cumulative);
	LUA_ENUM_ENTRY("Density", ImPlotHistogramFlags_::ImPlotHistogramFlags_Density);
	LUA_ENUM_ENTRY("NoOutliers", ImPlotHistogramFlags_::ImPlotHistogramFlags_NoOutliers);
	LUA_ENUM_ENTRY("ColMajor", ImPlotHistogramFlags_::ImPlotHistogramFlags_ColMajor);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotDigitalFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotDigitalFlags");
	LUA_ENUM_ENTRY("None", ImPlotDigitalFlags_::ImPlotDigitalFlags_None);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotImageFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotImageFlags");
	LUA_ENUM_ENTRY("None", ImPlotImageFlags_::ImPlotImageFlags_None);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotTextFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotTextFlags");
	LUA_ENUM_ENTRY("None", ImPlotTextFlags_::ImPlotTextFlags_None);
	LUA_ENUM_ENTRY("Vertical", ImPlotTextFlags_::ImPlotTextFlags_Vertical);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotDummyFlags(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotDummyFlags");
	LUA_ENUM_ENTRY("None", ImPlotDummyFlags_::ImPlotDummyFlags_None);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotCond(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotCond");
	LUA_ENUM_ENTRY("None", ImPlotCond_::ImPlotCond_None);
	LUA_ENUM_ENTRY("Always", ImPlotCond_::ImPlotCond_Always);
	LUA_ENUM_ENTRY("Once", ImPlotCond_::ImPlotCond_Once);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotCol(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotCol");
	LUA_ENUM_ENTRY("Line", ImPlotCol_::ImPlotCol_Line);
	LUA_ENUM_ENTRY("Fill", ImPlotCol_::ImPlotCol_Fill);
	LUA_ENUM_ENTRY("MarkerOutline", ImPlotCol_::ImPlotCol_MarkerOutline);
	LUA_ENUM_ENTRY("MarkerFill", ImPlotCol_::ImPlotCol_MarkerFill);
	LUA_ENUM_ENTRY("ErrorBar", ImPlotCol_::ImPlotCol_ErrorBar);
	LUA_ENUM_ENTRY("FrameBg", ImPlotCol_::ImPlotCol_FrameBg);
	LUA_ENUM_ENTRY("PlotBg", ImPlotCol_::ImPlotCol_PlotBg);
	LUA_ENUM_ENTRY("PlotBorder", ImPlotCol_::ImPlotCol_PlotBorder);
	LUA_ENUM_ENTRY("LegendBg", ImPlotCol_::ImPlotCol_LegendBg);
	LUA_ENUM_ENTRY("LegendBorder", ImPlotCol_::ImPlotCol_LegendBorder);
	LUA_ENUM_ENTRY("LegendText", ImPlotCol_::ImPlotCol_LegendText);
	LUA_ENUM_ENTRY("TitleText", ImPlotCol_::ImPlotCol_TitleText);
	LUA_ENUM_ENTRY("InlayText", ImPlotCol_::ImPlotCol_InlayText);
	LUA_ENUM_ENTRY("AxisText", ImPlotCol_::ImPlotCol_AxisText);
	LUA_ENUM_ENTRY("AxisGrid", ImPlotCol_::ImPlotCol_AxisGrid);
	LUA_ENUM_ENTRY("AxisTick", ImPlotCol_::ImPlotCol_AxisTick);
	LUA_ENUM_ENTRY("AxisBg", ImPlotCol_::ImPlotCol_AxisBg);
	LUA_ENUM_ENTRY("AxisBgHovered", ImPlotCol_::ImPlotCol_AxisBgHovered);
	LUA_ENUM_ENTRY("AxisBgActive", ImPlotCol_::ImPlotCol_AxisBgActive);
	LUA_ENUM_ENTRY("Selection", ImPlotCol_::ImPlotCol_Selection);
	LUA_ENUM_ENTRY("Crosshairs", ImPlotCol_::ImPlotCol_Crosshairs);
	LUA_ENUM_ENTRY("COUNT", ImPlotCol_::ImPlotCol_COUNT);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotStyleVar(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotStyleVar");
	LUA_ENUM_ENTRY("LineWeight", ImPlotStyleVar_::ImPlotStyleVar_LineWeight);
	LUA_ENUM_ENTRY("Marker", ImPlotStyleVar_::ImPlotStyleVar_Marker);
	LUA_ENUM_ENTRY("MarkerSize", ImPlotStyleVar_::ImPlotStyleVar_MarkerSize);
	LUA_ENUM_ENTRY("MarkerWeight", ImPlotStyleVar_::ImPlotStyleVar_MarkerWeight);
	LUA_ENUM_ENTRY("FillAlpha", ImPlotStyleVar_::ImPlotStyleVar_FillAlpha);
	LUA_ENUM_ENTRY("ErrorBarSize", ImPlotStyleVar_::ImPlotStyleVar_ErrorBarSize);
	LUA_ENUM_ENTRY("ErrorBarWeight", ImPlotStyleVar_::ImPlotStyleVar_ErrorBarWeight);
	LUA_ENUM_ENTRY("DigitalBitHeight", ImPlotStyleVar_::ImPlotStyleVar_DigitalBitHeight);
	LUA_ENUM_ENTRY("DigitalBitGap", ImPlotStyleVar_::ImPlotStyleVar_DigitalBitGap);
	LUA_ENUM_ENTRY("PlotBorderSize", ImPlotStyleVar_::ImPlotStyleVar_PlotBorderSize);
	LUA_ENUM_ENTRY("MinorAlpha", ImPlotStyleVar_::ImPlotStyleVar_MinorAlpha);
	LUA_ENUM_ENTRY("MajorTickLen", ImPlotStyleVar_::ImPlotStyleVar_MajorTickLen);
	LUA_ENUM_ENTRY("MinorTickLen", ImPlotStyleVar_::ImPlotStyleVar_MinorTickLen);
	LUA_ENUM_ENTRY("MajorTickSize", ImPlotStyleVar_::ImPlotStyleVar_MajorTickSize);
	LUA_ENUM_ENTRY("MinorTickSize", ImPlotStyleVar_::ImPlotStyleVar_MinorTickSize);
	LUA_ENUM_ENTRY("MajorGridSize", ImPlotStyleVar_::ImPlotStyleVar_MajorGridSize);
	LUA_ENUM_ENTRY("MinorGridSize", ImPlotStyleVar_::ImPlotStyleVar_MinorGridSize);
	LUA_ENUM_ENTRY("PlotPadding", ImPlotStyleVar_::ImPlotStyleVar_PlotPadding);
	LUA_ENUM_ENTRY("LabelPadding", ImPlotStyleVar_::ImPlotStyleVar_LabelPadding);
	LUA_ENUM_ENTRY("LegendPadding", ImPlotStyleVar_::ImPlotStyleVar_LegendPadding);
	LUA_ENUM_ENTRY("LegendInnerPadding", ImPlotStyleVar_::ImPlotStyleVar_LegendInnerPadding);
	LUA_ENUM_ENTRY("LegendSpacing", ImPlotStyleVar_::ImPlotStyleVar_LegendSpacing);
	LUA_ENUM_ENTRY("MousePosPadding", ImPlotStyleVar_::ImPlotStyleVar_MousePosPadding);
	LUA_ENUM_ENTRY("AnnotationPadding", ImPlotStyleVar_::ImPlotStyleVar_AnnotationPadding);
	LUA_ENUM_ENTRY("FitPadding", ImPlotStyleVar_::ImPlotStyleVar_FitPadding);
	LUA_ENUM_ENTRY("PlotDefaultSize", ImPlotStyleVar_::ImPlotStyleVar_PlotDefaultSize);
	LUA_ENUM_ENTRY("PlotMinSize", ImPlotStyleVar_::ImPlotStyleVar_PlotMinSize);
	LUA_ENUM_ENTRY("COUNT", ImPlotStyleVar_::ImPlotStyleVar_COUNT);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotScale(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotScale");
	LUA_ENUM_ENTRY("Linear", ImPlotScale_::ImPlotScale_Linear);
	LUA_ENUM_ENTRY("Time", ImPlotScale_::ImPlotScale_Time);
	LUA_ENUM_ENTRY("Log10", ImPlotScale_::ImPlotScale_Log10);
	LUA_ENUM_ENTRY("SymLog", ImPlotScale_::ImPlotScale_SymLog);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotMarker(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotMarker");
	LUA_ENUM_ENTRY("None", ImPlotMarker_::ImPlotMarker_None);
	LUA_ENUM_ENTRY("Circle", ImPlotMarker_::ImPlotMarker_Circle);
	LUA_ENUM_ENTRY("Square", ImPlotMarker_::ImPlotMarker_Square);
	LUA_ENUM_ENTRY("Diamond", ImPlotMarker_::ImPlotMarker_Diamond);
	LUA_ENUM_ENTRY("Up", ImPlotMarker_::ImPlotMarker_Up);
	LUA_ENUM_ENTRY("Down", ImPlotMarker_::ImPlotMarker_Down);
	LUA_ENUM_ENTRY("Left", ImPlotMarker_::ImPlotMarker_Left);
	LUA_ENUM_ENTRY("Right", ImPlotMarker_::ImPlotMarker_Right);
	LUA_ENUM_ENTRY("Cross", ImPlotMarker_::ImPlotMarker_Cross);
	LUA_ENUM_ENTRY("Plus", ImPlotMarker_::ImPlotMarker_Plus);
	LUA_ENUM_ENTRY("Asterisk", ImPlotMarker_::ImPlotMarker_Asterisk);
	LUA_ENUM_ENTRY("COUNT", ImPlotMarker_::ImPlotMarker_COUNT);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotColormap(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotColormap");
	LUA_ENUM_ENTRY("Deep", ImPlotColormap_::ImPlotColormap_Deep);
	LUA_ENUM_ENTRY("Dark", ImPlotColormap_::ImPlotColormap_Dark);
	LUA_ENUM_ENTRY("Pastel", ImPlotColormap_::ImPlotColormap_Pastel);
	LUA_ENUM_ENTRY("Paired", ImPlotColormap_::ImPlotColormap_Paired);
	LUA_ENUM_ENTRY("Viridis", ImPlotColormap_::ImPlotColormap_Viridis);
	LUA_ENUM_ENTRY("Plasma", ImPlotColormap_::ImPlotColormap_Plasma);
	LUA_ENUM_ENTRY("Hot", ImPlotColormap_::ImPlotColormap_Hot);
	LUA_ENUM_ENTRY("Cool", ImPlotColormap_::ImPlotColormap_Cool);
	LUA_ENUM_ENTRY("Pink", ImPlotColormap_::ImPlotColormap_Pink);
	LUA_ENUM_ENTRY("Jet", ImPlotColormap_::ImPlotColormap_Jet);
	LUA_ENUM_ENTRY("Twilight", ImPlotColormap_::ImPlotColormap_Twilight);
	LUA_ENUM_ENTRY("RdBu", ImPlotColormap_::ImPlotColormap_RdBu);
	LUA_ENUM_ENTRY("BrBG", ImPlotColormap_::ImPlotColormap_BrBG);
	LUA_ENUM_ENTRY("PiYG", ImPlotColormap_::ImPlotColormap_PiYG);
	LUA_ENUM_ENTRY("Spectral", ImPlotColormap_::ImPlotColormap_Spectral);
	LUA_ENUM_ENTRY("Greys", ImPlotColormap_::ImPlotColormap_Greys);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotLocation(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotLocation");
	LUA_ENUM_ENTRY("Center", ImPlotLocation_::ImPlotLocation_Center);
	LUA_ENUM_ENTRY("North", ImPlotLocation_::ImPlotLocation_North);
	LUA_ENUM_ENTRY("South", ImPlotLocation_::ImPlotLocation_South);
	LUA_ENUM_ENTRY("West", ImPlotLocation_::ImPlotLocation_West);
	LUA_ENUM_ENTRY("East", ImPlotLocation_::ImPlotLocation_East);
	LUA_ENUM_ENTRY("NorthWest", ImPlotLocation_::ImPlotLocation_NorthWest);
	LUA_ENUM_ENTRY("NorthEast", ImPlotLocation_::ImPlotLocation_NorthEast);
	LUA_ENUM_ENTRY("SouthWest", ImPlotLocation_::ImPlotLocation_SouthWest);
	LUA_ENUM_ENTRY("SouthEast", ImPlotLocation_::ImPlotLocation_SouthEast);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_implot_implotImPlotBin(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_ENUM_DEF("ImPlotBin");
	LUA_ENUM_ENTRY("Sqrt", ImPlotBin_::ImPlotBin_Sqrt);
	LUA_ENUM_ENTRY("Sturges", ImPlotBin_::ImPlotBin_Sturges);
	LUA_ENUM_ENTRY("Rice", ImPlotBin_::ImPlotBin_Rice);
	LUA_ENUM_ENTRY("Scott", ImPlotBin_::ImPlotBin_Scott);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int lua_ImPlotStyle_AnnotationPadding_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.AnnotationPadding/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->AnnotationPadding);
	return 1;
}
int lua_ImPlotStyle_AnnotationPadding_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.AnnotationPadding/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->AnnotationPadding, 2);
	return 0;
}
int lua_ImPlotStyle_Colormap_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.Colormap/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->Colormap);
	return 1;
}
int lua_ImPlotStyle_Colormap_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.Colormap/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->Colormap, 2);
	return 0;
}
int lua_ImPlotStyle_DigitalBitGap_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.DigitalBitGap/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->DigitalBitGap);
	return 1;
}
int lua_ImPlotStyle_DigitalBitGap_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.DigitalBitGap/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->DigitalBitGap, 2);
	return 0;
}
int lua_ImPlotStyle_DigitalBitHeight_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.DigitalBitHeight/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->DigitalBitHeight);
	return 1;
}
int lua_ImPlotStyle_DigitalBitHeight_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.DigitalBitHeight/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->DigitalBitHeight, 2);
	return 0;
}
int lua_ImPlotStyle_ErrorBarSize_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.ErrorBarSize/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->ErrorBarSize);
	return 1;
}
int lua_ImPlotStyle_ErrorBarSize_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.ErrorBarSize/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->ErrorBarSize, 2);
	return 0;
}
int lua_ImPlotStyle_ErrorBarWeight_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.ErrorBarWeight/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->ErrorBarWeight);
	return 1;
}
int lua_ImPlotStyle_ErrorBarWeight_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.ErrorBarWeight/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->ErrorBarWeight, 2);
	return 0;
}
int lua_ImPlotStyle_FillAlpha_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.FillAlpha/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->FillAlpha);
	return 1;
}
int lua_ImPlotStyle_FillAlpha_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.FillAlpha/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->FillAlpha, 2);
	return 0;
}
int lua_ImPlotStyle_FitPadding_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.FitPadding/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->FitPadding);
	return 1;
}
int lua_ImPlotStyle_FitPadding_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.FitPadding/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->FitPadding, 2);
	return 0;
}
int lua_ImPlotStyle_LabelPadding_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.LabelPadding/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->LabelPadding);
	return 1;
}
int lua_ImPlotStyle_LabelPadding_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.LabelPadding/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->LabelPadding, 2);
	return 0;
}
int lua_ImPlotStyle_LegendInnerPadding_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.LegendInnerPadding/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->LegendInnerPadding);
	return 1;
}
int lua_ImPlotStyle_LegendInnerPadding_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.LegendInnerPadding/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->LegendInnerPadding, 2);
	return 0;
}
int lua_ImPlotStyle_LegendPadding_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.LegendPadding/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->LegendPadding);
	return 1;
}
int lua_ImPlotStyle_LegendPadding_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.LegendPadding/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->LegendPadding, 2);
	return 0;
}
int lua_ImPlotStyle_LegendSpacing_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.LegendSpacing/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->LegendSpacing);
	return 1;
}
int lua_ImPlotStyle_LegendSpacing_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.LegendSpacing/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->LegendSpacing, 2);
	return 0;
}
int lua_ImPlotStyle_LineWeight_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.LineWeight/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->LineWeight);
	return 1;
}
int lua_ImPlotStyle_LineWeight_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.LineWeight/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->LineWeight, 2);
	return 0;
}
int lua_ImPlotStyle_MajorGridSize_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.MajorGridSize/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->MajorGridSize);
	return 1;
}
int lua_ImPlotStyle_MajorGridSize_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.MajorGridSize/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->MajorGridSize, 2);
	return 0;
}
int lua_ImPlotStyle_MajorTickLen_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.MajorTickLen/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->MajorTickLen);
	return 1;
}
int lua_ImPlotStyle_MajorTickLen_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.MajorTickLen/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->MajorTickLen, 2);
	return 0;
}
int lua_ImPlotStyle_MajorTickSize_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.MajorTickSize/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->MajorTickSize);
	return 1;
}
int lua_ImPlotStyle_MajorTickSize_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.MajorTickSize/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->MajorTickSize, 2);
	return 0;
}
int lua_ImPlotStyle_Marker_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.Marker/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->Marker);
	return 1;
}
int lua_ImPlotStyle_Marker_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.Marker/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->Marker, 2);
	return 0;
}
int lua_ImPlotStyle_MarkerSize_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.MarkerSize/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->MarkerSize);
	return 1;
}
int lua_ImPlotStyle_MarkerSize_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.MarkerSize/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->MarkerSize, 2);
	return 0;
}
int lua_ImPlotStyle_MarkerWeight_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.MarkerWeight/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->MarkerWeight);
	return 1;
}
int lua_ImPlotStyle_MarkerWeight_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.MarkerWeight/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->MarkerWeight, 2);
	return 0;
}
int lua_ImPlotStyle_MinorAlpha_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.MinorAlpha/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->MinorAlpha);
	return 1;
}
int lua_ImPlotStyle_MinorAlpha_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.MinorAlpha/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->MinorAlpha, 2);
	return 0;
}
int lua_ImPlotStyle_MinorGridSize_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.MinorGridSize/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->MinorGridSize);
	return 1;
}
int lua_ImPlotStyle_MinorGridSize_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.MinorGridSize/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->MinorGridSize, 2);
	return 0;
}
int lua_ImPlotStyle_MinorTickLen_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.MinorTickLen/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->MinorTickLen);
	return 1;
}
int lua_ImPlotStyle_MinorTickLen_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.MinorTickLen/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->MinorTickLen, 2);
	return 0;
}
int lua_ImPlotStyle_MinorTickSize_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.MinorTickSize/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->MinorTickSize);
	return 1;
}
int lua_ImPlotStyle_MinorTickSize_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.MinorTickSize/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->MinorTickSize, 2);
	return 0;
}
int lua_ImPlotStyle_MousePosPadding_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.MousePosPadding/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->MousePosPadding);
	return 1;
}
int lua_ImPlotStyle_MousePosPadding_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.MousePosPadding/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->MousePosPadding, 2);
	return 0;
}
int lua_ImPlotStyle_PlotBorderSize_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.PlotBorderSize/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->PlotBorderSize);
	return 1;
}
int lua_ImPlotStyle_PlotBorderSize_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.PlotBorderSize/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->PlotBorderSize, 2);
	return 0;
}
int lua_ImPlotStyle_PlotDefaultSize_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.PlotDefaultSize/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->PlotDefaultSize);
	return 1;
}
int lua_ImPlotStyle_PlotDefaultSize_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.PlotDefaultSize/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->PlotDefaultSize, 2);
	return 0;
}
int lua_ImPlotStyle_PlotMinSize_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.PlotMinSize/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->PlotMinSize);
	return 1;
}
int lua_ImPlotStyle_PlotMinSize_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.PlotMinSize/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->PlotMinSize, 2);
	return 0;
}
int lua_ImPlotStyle_PlotPadding_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.PlotPadding/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->PlotPadding);
	return 1;
}
int lua_ImPlotStyle_PlotPadding_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.PlotPadding/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->PlotPadding, 2);
	return 0;
}
int lua_ImPlotStyle_Use24HourClock_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.Use24HourClock/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->Use24HourClock);
	return 1;
}
int lua_ImPlotStyle_Use24HourClock_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.Use24HourClock/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->Use24HourClock, 2);
	return 0;
}
int lua_ImPlotStyle_UseISO8601_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.UseISO8601/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->UseISO8601);
	return 1;
}
int lua_ImPlotStyle_UseISO8601_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.UseISO8601/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->UseISO8601, 2);
	return 0;
}
int lua_ImPlotStyle_UseLocalTime_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.UseLocalTime/getter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_PUSH_NATIVE(cobj->UseLocalTime);
	return 1;
}
int lua_ImPlotStyle_UseLocalTime_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotStyle.UseLocalTime/setter");
	auto cobj = LUA_TO_COBJ(ImPlotStyle*, 1);
	LUA_NATIVE_SETTER(cobj->UseLocalTime, 2);
	return 0;
}
int luaReg_implot_implotImPlotStyle(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_CLS_DEF(ImPlotStyle, "ImPlotStyle", "implot.ImPlotStyle",
		nullptr, nullptr);
	LUA_FIELD("AnnotationPadding", lua_ImPlotStyle_AnnotationPadding_getter, lua_ImPlotStyle_AnnotationPadding_setter);
	LUA_FIELD("Colormap", lua_ImPlotStyle_Colormap_getter, lua_ImPlotStyle_Colormap_setter);
	LUA_FIELD("DigitalBitGap", lua_ImPlotStyle_DigitalBitGap_getter, lua_ImPlotStyle_DigitalBitGap_setter);
	LUA_FIELD("DigitalBitHeight", lua_ImPlotStyle_DigitalBitHeight_getter, lua_ImPlotStyle_DigitalBitHeight_setter);
	LUA_FIELD("ErrorBarSize", lua_ImPlotStyle_ErrorBarSize_getter, lua_ImPlotStyle_ErrorBarSize_setter);
	LUA_FIELD("ErrorBarWeight", lua_ImPlotStyle_ErrorBarWeight_getter, lua_ImPlotStyle_ErrorBarWeight_setter);
	LUA_FIELD("FillAlpha", lua_ImPlotStyle_FillAlpha_getter, lua_ImPlotStyle_FillAlpha_setter);
	LUA_FIELD("FitPadding", lua_ImPlotStyle_FitPadding_getter, lua_ImPlotStyle_FitPadding_setter);
	LUA_FIELD("LabelPadding", lua_ImPlotStyle_LabelPadding_getter, lua_ImPlotStyle_LabelPadding_setter);
	LUA_FIELD("LegendInnerPadding", lua_ImPlotStyle_LegendInnerPadding_getter, lua_ImPlotStyle_LegendInnerPadding_setter);
	LUA_FIELD("LegendPadding", lua_ImPlotStyle_LegendPadding_getter, lua_ImPlotStyle_LegendPadding_setter);
	LUA_FIELD("LegendSpacing", lua_ImPlotStyle_LegendSpacing_getter, lua_ImPlotStyle_LegendSpacing_setter);
	LUA_FIELD("LineWeight", lua_ImPlotStyle_LineWeight_getter, lua_ImPlotStyle_LineWeight_setter);
	LUA_FIELD("MajorGridSize", lua_ImPlotStyle_MajorGridSize_getter, lua_ImPlotStyle_MajorGridSize_setter);
	LUA_FIELD("MajorTickLen", lua_ImPlotStyle_MajorTickLen_getter, lua_ImPlotStyle_MajorTickLen_setter);
	LUA_FIELD("MajorTickSize", lua_ImPlotStyle_MajorTickSize_getter, lua_ImPlotStyle_MajorTickSize_setter);
	LUA_FIELD("Marker", lua_ImPlotStyle_Marker_getter, lua_ImPlotStyle_Marker_setter);
	LUA_FIELD("MarkerSize", lua_ImPlotStyle_MarkerSize_getter, lua_ImPlotStyle_MarkerSize_setter);
	LUA_FIELD("MarkerWeight", lua_ImPlotStyle_MarkerWeight_getter, lua_ImPlotStyle_MarkerWeight_setter);
	LUA_FIELD("MinorAlpha", lua_ImPlotStyle_MinorAlpha_getter, lua_ImPlotStyle_MinorAlpha_setter);
	LUA_FIELD("MinorGridSize", lua_ImPlotStyle_MinorGridSize_getter, lua_ImPlotStyle_MinorGridSize_setter);
	LUA_FIELD("MinorTickLen", lua_ImPlotStyle_MinorTickLen_getter, lua_ImPlotStyle_MinorTickLen_setter);
	LUA_FIELD("MinorTickSize", lua_ImPlotStyle_MinorTickSize_getter, lua_ImPlotStyle_MinorTickSize_setter);
	LUA_FIELD("MousePosPadding", lua_ImPlotStyle_MousePosPadding_getter, lua_ImPlotStyle_MousePosPadding_setter);
	LUA_FIELD("PlotBorderSize", lua_ImPlotStyle_PlotBorderSize_getter, lua_ImPlotStyle_PlotBorderSize_setter);
	LUA_FIELD("PlotDefaultSize", lua_ImPlotStyle_PlotDefaultSize_getter, lua_ImPlotStyle_PlotDefaultSize_setter);
	LUA_FIELD("PlotMinSize", lua_ImPlotStyle_PlotMinSize_getter, lua_ImPlotStyle_PlotMinSize_setter);
	LUA_FIELD("PlotPadding", lua_ImPlotStyle_PlotPadding_getter, lua_ImPlotStyle_PlotPadding_setter);
	LUA_FIELD("Use24HourClock", lua_ImPlotStyle_Use24HourClock_getter, lua_ImPlotStyle_Use24HourClock_setter);
	LUA_FIELD("UseISO8601", lua_ImPlotStyle_UseISO8601_getter, lua_ImPlotStyle_UseISO8601_setter);
	LUA_FIELD("UseLocalTime", lua_ImPlotStyle_UseLocalTime_getter, lua_ImPlotStyle_UseLocalTime_setter);
	LUA_CLS_END();
	LUA_ENTRY_END(1);
	return 0;
}
int lua_ImPlotInputMap_Fit_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.Fit/getter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_PUSH_NATIVE(cobj->Fit);
	return 1;
}
int lua_ImPlotInputMap_Fit_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.Fit/setter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_NATIVE_SETTER(cobj->Fit, 2);
	return 0;
}
int lua_ImPlotInputMap_Menu_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.Menu/getter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_PUSH_NATIVE(cobj->Menu);
	return 1;
}
int lua_ImPlotInputMap_Menu_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.Menu/setter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_NATIVE_SETTER(cobj->Menu, 2);
	return 0;
}
int lua_ImPlotInputMap_OverrideMod_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.OverrideMod/getter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_PUSH_NATIVE(cobj->OverrideMod);
	return 1;
}
int lua_ImPlotInputMap_OverrideMod_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.OverrideMod/setter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_NATIVE_SETTER(cobj->OverrideMod, 2);
	return 0;
}
int lua_ImPlotInputMap_Pan_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.Pan/getter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_PUSH_NATIVE(cobj->Pan);
	return 1;
}
int lua_ImPlotInputMap_Pan_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.Pan/setter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_NATIVE_SETTER(cobj->Pan, 2);
	return 0;
}
int lua_ImPlotInputMap_PanMod_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.PanMod/getter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_PUSH_NATIVE(cobj->PanMod);
	return 1;
}
int lua_ImPlotInputMap_PanMod_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.PanMod/setter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_NATIVE_SETTER(cobj->PanMod, 2);
	return 0;
}
int lua_ImPlotInputMap_Select_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.Select/getter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_PUSH_NATIVE(cobj->Select);
	return 1;
}
int lua_ImPlotInputMap_Select_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.Select/setter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_NATIVE_SETTER(cobj->Select, 2);
	return 0;
}
int lua_ImPlotInputMap_SelectCancel_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.SelectCancel/getter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_PUSH_NATIVE(cobj->SelectCancel);
	return 1;
}
int lua_ImPlotInputMap_SelectCancel_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.SelectCancel/setter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_NATIVE_SETTER(cobj->SelectCancel, 2);
	return 0;
}
int lua_ImPlotInputMap_SelectHorzMod_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.SelectHorzMod/getter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_PUSH_NATIVE(cobj->SelectHorzMod);
	return 1;
}
int lua_ImPlotInputMap_SelectHorzMod_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.SelectHorzMod/setter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_NATIVE_SETTER(cobj->SelectHorzMod, 2);
	return 0;
}
int lua_ImPlotInputMap_SelectMod_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.SelectMod/getter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_PUSH_NATIVE(cobj->SelectMod);
	return 1;
}
int lua_ImPlotInputMap_SelectMod_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.SelectMod/setter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_NATIVE_SETTER(cobj->SelectMod, 2);
	return 0;
}
int lua_ImPlotInputMap_SelectVertMod_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.SelectVertMod/getter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_PUSH_NATIVE(cobj->SelectVertMod);
	return 1;
}
int lua_ImPlotInputMap_SelectVertMod_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.SelectVertMod/setter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_NATIVE_SETTER(cobj->SelectVertMod, 2);
	return 0;
}
int lua_ImPlotInputMap_ZoomMod_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.ZoomMod/getter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_PUSH_NATIVE(cobj->ZoomMod);
	return 1;
}
int lua_ImPlotInputMap_ZoomMod_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.ZoomMod/setter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_NATIVE_SETTER(cobj->ZoomMod, 2);
	return 0;
}
int lua_ImPlotInputMap_ZoomRate_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.ZoomRate/getter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_PUSH_NATIVE(cobj->ZoomRate);
	return 1;
}
int lua_ImPlotInputMap_ZoomRate_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("implot.ImPlotInputMap.ZoomRate/setter");
	auto cobj = LUA_TO_COBJ(ImPlotInputMap*, 1);
	LUA_NATIVE_SETTER(cobj->ZoomRate, 2);
	return 0;
}
int luaReg_implot_implotImPlotInputMap(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_CLS_DEF(ImPlotInputMap, "ImPlotInputMap", "implot.ImPlotInputMap",
		nullptr, nullptr);
	LUA_FIELD("Fit", lua_ImPlotInputMap_Fit_getter, lua_ImPlotInputMap_Fit_setter);
	LUA_FIELD("Menu", lua_ImPlotInputMap_Menu_getter, lua_ImPlotInputMap_Menu_setter);
	LUA_FIELD("OverrideMod", lua_ImPlotInputMap_OverrideMod_getter, lua_ImPlotInputMap_OverrideMod_setter);
	LUA_FIELD("Pan", lua_ImPlotInputMap_Pan_getter, lua_ImPlotInputMap_Pan_setter);
	LUA_FIELD("PanMod", lua_ImPlotInputMap_PanMod_getter, lua_ImPlotInputMap_PanMod_setter);
	LUA_FIELD("Select", lua_ImPlotInputMap_Select_getter, lua_ImPlotInputMap_Select_setter);
	LUA_FIELD("SelectCancel", lua_ImPlotInputMap_SelectCancel_getter, lua_ImPlotInputMap_SelectCancel_setter);
	LUA_FIELD("SelectHorzMod", lua_ImPlotInputMap_SelectHorzMod_getter, lua_ImPlotInputMap_SelectHorzMod_setter);
	LUA_FIELD("SelectMod", lua_ImPlotInputMap_SelectMod_getter, lua_ImPlotInputMap_SelectMod_setter);
	LUA_FIELD("SelectVertMod", lua_ImPlotInputMap_SelectVertMod_getter, lua_ImPlotInputMap_SelectVertMod_setter);
	LUA_FIELD("ZoomMod", lua_ImPlotInputMap_ZoomMod_getter, lua_ImPlotInputMap_ZoomMod_setter);
	LUA_FIELD("ZoomRate", lua_ImPlotInputMap_ZoomRate_getter, lua_ImPlotInputMap_ZoomRate_setter);
	LUA_CLS_END();
	LUA_ENTRY_END(1);
	return 0;
}
int lua_ImPlot_beginAlignedPlots(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.beginAlignedPlots");
	LUA_TRY_INVOKE_R(2, static_cast<bool(*)(const char*, bool)>(&ImPlot::BeginAlignedPlots));
	LUA_TRY_INVOKE_R(1, [](const char* arg0){{return ImPlot::BeginAlignedPlots(arg0);}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImPlot_beginDragDropSourceAxis(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.beginDragDropSourceAxis");
	LUA_TRY_INVOKE_R(2, static_cast<bool(*)(ImAxis, ImGuiDragDropFlags)>(&ImPlot::BeginDragDropSourceAxis));
	LUA_TRY_INVOKE_R(1, [](ImAxis arg0){{return ImPlot::BeginDragDropSourceAxis(std::move(arg0));}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImPlot_beginDragDropSourceItem(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.beginDragDropSourceItem");
	LUA_TRY_INVOKE_R(2, static_cast<bool(*)(const char*, ImGuiDragDropFlags)>(&ImPlot::BeginDragDropSourceItem));
	LUA_TRY_INVOKE_R(1, [](const char* arg0){{return ImPlot::BeginDragDropSourceItem(arg0);}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImPlot_beginDragDropSourcePlot(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.beginDragDropSourcePlot");
	LUA_TRY_INVOKE_R(1, static_cast<bool(*)(ImGuiDragDropFlags)>(&ImPlot::BeginDragDropSourcePlot));
	LUA_TRY_INVOKE_R(0, [](){{return ImPlot::BeginDragDropSourcePlot();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImPlot_beginDragDropTargetAxis(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.beginDragDropTargetAxis");
	LUA_TRY_INVOKE_R(1, &ImPlot::BeginDragDropTargetAxis);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImPlot_beginDragDropTargetLegend(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.beginDragDropTargetLegend");
	LUA_TRY_INVOKE_R(0, &ImPlot::BeginDragDropTargetLegend);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_beginDragDropTargetPlot(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.beginDragDropTargetPlot");
	LUA_TRY_INVOKE_R(0, &ImPlot::BeginDragDropTargetPlot);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_beginLegendPopup(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.beginLegendPopup");
	LUA_TRY_INVOKE_R(2, static_cast<bool(*)(const char*, ImGuiMouseButton)>(&ImPlot::BeginLegendPopup));
	LUA_TRY_INVOKE_R(1, [](const char* arg0){{return ImPlot::BeginLegendPopup(arg0);}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImPlot_beginPlot(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.beginPlot");
	LUA_TRY_INVOKE_R(3, static_cast<bool(*)(const char*, const ImVec2&, ImPlotFlags)>(&ImPlot::BeginPlot));
	LUA_TRY_INVOKE_R(2, [](const char* arg0,const ImVec2& arg1){{return ImPlot::BeginPlot(arg0,arg1);}});
	LUA_TRY_INVOKE_R(1, [](const char* arg0){{return ImPlot::BeginPlot(arg0);}});
	LUA_GINVOKE_FOOTER("1,2,3");
}
int lua_ImPlot_beginSubplots(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.beginSubplots");
	LUA_TRY_INVOKE_R(5, [](const char* arg0,int arg1,int arg2,const ImVec2& arg3,ImPlotSubplotFlags arg4){{return ImPlot::BeginSubplots(arg0,std::move(arg1),std::move(arg2),arg3,std::move(arg4));}});
	LUA_TRY_INVOKE_R(4, [](const char* arg0,int arg1,int arg2,const ImVec2& arg3){{return ImPlot::BeginSubplots(arg0,std::move(arg1),std::move(arg2),arg3);}});
	LUA_GINVOKE_FOOTER("4,5");
}
int lua_ImPlot_cancelPlotSelection(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.cancelPlotSelection");
	LUA_TRY_INVOKE(0, &ImPlot::CancelPlotSelection);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_colormapButton(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.colormapButton");
	LUA_TRY_INVOKE_R(3, static_cast<bool(*)(const char*, const ImVec2&, ImPlotColormap)>(&ImPlot::ColormapButton));
	LUA_TRY_INVOKE_R(2, [](const char* arg0,const ImVec2& arg1){{return ImPlot::ColormapButton(arg0,arg1);}});
	LUA_TRY_INVOKE_R(1, [](const char* arg0){{return ImPlot::ColormapButton(arg0);}});
	LUA_GINVOKE_FOOTER("1,2,3");
}
int lua_ImPlot_colormapIcon(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.colormapIcon");
	LUA_TRY_INVOKE(1, &ImPlot::ColormapIcon);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImPlot_colormapScale(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.colormapScale");
	LUA_TRY_INVOKE(7, static_cast<void(*)(const char*, double, double, const ImVec2&, const char*, ImPlotColormapScaleFlags, ImPlotColormap)>(&ImPlot::ColormapScale));
	LUA_TRY_INVOKE(6, [](const char* arg0,double arg1,double arg2,const ImVec2& arg3,const char* arg4,ImPlotColormapScaleFlags arg5){{return ImPlot::ColormapScale(arg0,std::move(arg1),std::move(arg2),arg3,arg4,std::move(arg5));}});
	LUA_TRY_INVOKE(5, [](const char* arg0,double arg1,double arg2,const ImVec2& arg3,const char* arg4){{return ImPlot::ColormapScale(arg0,std::move(arg1),std::move(arg2),arg3,arg4);}});
	LUA_TRY_INVOKE(4, [](const char* arg0,double arg1,double arg2,const ImVec2& arg3){{return ImPlot::ColormapScale(arg0,std::move(arg1),std::move(arg2),arg3);}});
	LUA_TRY_INVOKE(3, [](const char* arg0,double arg1,double arg2){{return ImPlot::ColormapScale(arg0,std::move(arg1),std::move(arg2));}});
	LUA_GINVOKE_FOOTER("3,4,5,6,7");
}
int lua_ImPlot_endAlignedPlots(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.endAlignedPlots");
	LUA_TRY_INVOKE(0, &ImPlot::EndAlignedPlots);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_endDragDropSource(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.endDragDropSource");
	LUA_TRY_INVOKE(0, &ImPlot::EndDragDropSource);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_endDragDropTarget(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.endDragDropTarget");
	LUA_TRY_INVOKE(0, &ImPlot::EndDragDropTarget);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_endLegendPopup(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.endLegendPopup");
	LUA_TRY_INVOKE(0, &ImPlot::EndLegendPopup);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_endPlot(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.endPlot");
	LUA_TRY_INVOKE(0, &ImPlot::EndPlot);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_endSubplots(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.endSubplots");
	LUA_TRY_INVOKE(0, &ImPlot::EndSubplots);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_getColormapColor(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.getColormapColor");
	LUA_TRY_INVOKE_R(2, static_cast<ImVec4(*)(int, ImPlotColormap)>(&ImPlot::GetColormapColor));
	LUA_TRY_INVOKE_R(1, [](int arg0){{return ImPlot::GetColormapColor(std::move(arg0));}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImPlot_getColormapCount(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.getColormapCount");
	LUA_TRY_INVOKE_R(0, &ImPlot::GetColormapCount);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_getColormapIndex(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.getColormapIndex");
	LUA_TRY_INVOKE_R(1, &ImPlot::GetColormapIndex);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImPlot_getColormapName(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.getColormapName");
	LUA_TRY_INVOKE_R(1, &ImPlot::GetColormapName);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImPlot_getColormapSize(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.getColormapSize");
	LUA_TRY_INVOKE_R(1, static_cast<int(*)(ImPlotColormap)>(&ImPlot::GetColormapSize));
	LUA_TRY_INVOKE_R(0, [](){{return ImPlot::GetColormapSize();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImPlot_getLastItemColor(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.getLastItemColor");
	LUA_TRY_INVOKE_R(0, &ImPlot::GetLastItemColor);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_getMarkerName(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.getMarkerName");
	LUA_TRY_INVOKE_R(1, &ImPlot::GetMarkerName);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImPlot_getPlotDrawList(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.getPlotDrawList");
	LUA_TRY_INVOKE_R(0, &ImPlot::GetPlotDrawList);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_getPlotLimits(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.getPlotLimits");
	LUA_TRY_INVOKE_R(2, static_cast<ImPlotRect(*)(ImAxis, ImAxis)>(&ImPlot::GetPlotLimits));
	LUA_TRY_INVOKE_R(1, [](ImAxis arg0){{return ImPlot::GetPlotLimits(std::move(arg0));}});
	LUA_TRY_INVOKE_R(0, [](){{return ImPlot::GetPlotLimits();}});
	LUA_GINVOKE_FOOTER("0,1,2");
}
int lua_ImPlot_getPlotMousePos(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.getPlotMousePos");
	LUA_TRY_INVOKE_R(2, static_cast<ImPlotPoint(*)(ImAxis, ImAxis)>(&ImPlot::GetPlotMousePos));
	LUA_TRY_INVOKE_R(1, [](ImAxis arg0){{return ImPlot::GetPlotMousePos(std::move(arg0));}});
	LUA_TRY_INVOKE_R(0, [](){{return ImPlot::GetPlotMousePos();}});
	LUA_GINVOKE_FOOTER("0,1,2");
}
int lua_ImPlot_getPlotPos(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.getPlotPos");
	LUA_TRY_INVOKE_R(0, &ImPlot::GetPlotPos);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_getPlotSelection(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.getPlotSelection");
	LUA_TRY_INVOKE_R(2, static_cast<ImPlotRect(*)(ImAxis, ImAxis)>(&ImPlot::GetPlotSelection));
	LUA_TRY_INVOKE_R(1, [](ImAxis arg0){{return ImPlot::GetPlotSelection(std::move(arg0));}});
	LUA_TRY_INVOKE_R(0, [](){{return ImPlot::GetPlotSelection();}});
	LUA_GINVOKE_FOOTER("0,1,2");
}
int lua_ImPlot_getPlotSize(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.getPlotSize");
	LUA_TRY_INVOKE_R(0, &ImPlot::GetPlotSize);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_getStyleColorName(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.getStyleColorName");
	LUA_TRY_INVOKE_R(1, &ImPlot::GetStyleColorName);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImPlot_hideNextItem(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.hideNextItem");
	LUA_TRY_INVOKE(2, static_cast<void(*)(bool, ImPlotCond)>(&ImPlot::HideNextItem));
	LUA_TRY_INVOKE(1, [](bool arg0){{return ImPlot::HideNextItem(std::move(arg0));}});
	LUA_TRY_INVOKE(0, [](){{return ImPlot::HideNextItem();}});
	LUA_GINVOKE_FOOTER("0,1,2");
}
int lua_ImPlot_isAxisHovered(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.isAxisHovered");
	LUA_TRY_INVOKE_R(1, &ImPlot::IsAxisHovered);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImPlot_isLegendEntryHovered(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.isLegendEntryHovered");
	LUA_TRY_INVOKE_R(1, &ImPlot::IsLegendEntryHovered);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImPlot_isPlotHovered(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.isPlotHovered");
	LUA_TRY_INVOKE_R(0, &ImPlot::IsPlotHovered);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_isPlotSelected(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.isPlotSelected");
	LUA_TRY_INVOKE_R(0, &ImPlot::IsPlotSelected);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_isSubplotsHovered(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.isSubplotsHovered");
	LUA_TRY_INVOKE_R(0, &ImPlot::IsSubplotsHovered);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_nextColormapColor(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.nextColormapColor");
	LUA_TRY_INVOKE_R(0, &ImPlot::NextColormapColor);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_pixelsToPlot(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.pixelsToPlot");
	LUA_TRY_INVOKE_R(4, static_cast<ImPlotPoint(*)(float, float, ImAxis, ImAxis)>(&ImPlot::PixelsToPlot));
	LUA_TRY_INVOKE_R(3, [](float arg0,float arg1,ImAxis arg2){{return ImPlot::PixelsToPlot(std::move(arg0),std::move(arg1),std::move(arg2));}});
	LUA_TRY_INVOKE_R(3, [](const ImVec2& arg0,ImAxis arg1,ImAxis arg2){{return ImPlot::PixelsToPlot(arg0,std::move(arg1),std::move(arg2));}});
	LUA_TRY_INVOKE_R(2, [](float arg0,float arg1){{return ImPlot::PixelsToPlot(std::move(arg0),std::move(arg1));}});
	LUA_TRY_INVOKE_R(2, [](const ImVec2& arg0,ImAxis arg1){{return ImPlot::PixelsToPlot(arg0,std::move(arg1));}});
	LUA_TRY_INVOKE_R(1, [](const ImVec2& arg0){{return ImPlot::PixelsToPlot(arg0);}});
	LUA_GINVOKE_FOOTER("1,2,3,4");
}
int lua_ImPlot_plotDummy(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.plotDummy");
	LUA_TRY_INVOKE(2, static_cast<void(*)(const char*, ImPlotDummyFlags)>(&ImPlot::PlotDummy));
	LUA_TRY_INVOKE(1, [](const char* arg0){{return ImPlot::PlotDummy(arg0);}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImPlot_plotText(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.plotText");
	LUA_TRY_INVOKE(5, static_cast<void(*)(const char*, double, double, const ImVec2&, ImPlotTextFlags)>(&ImPlot::PlotText));
	LUA_TRY_INVOKE(4, [](const char* arg0,double arg1,double arg2,const ImVec2& arg3){{return ImPlot::PlotText(arg0,std::move(arg1),std::move(arg2),arg3);}});
	LUA_TRY_INVOKE(3, [](const char* arg0,double arg1,double arg2){{return ImPlot::PlotText(arg0,std::move(arg1),std::move(arg2));}});
	LUA_GINVOKE_FOOTER("3,4,5");
}
int lua_ImPlot_plotToPixels(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.plotToPixels");
	LUA_TRY_INVOKE_R(4, static_cast<ImVec2(*)(double, double, ImAxis, ImAxis)>(&ImPlot::PlotToPixels));
	LUA_TRY_INVOKE_R(3, [](double arg0,double arg1,ImAxis arg2){{return ImPlot::PlotToPixels(std::move(arg0),std::move(arg1),std::move(arg2));}});
	LUA_TRY_INVOKE_R(3, [](const ImPlotPoint& arg0,ImAxis arg1,ImAxis arg2){{return ImPlot::PlotToPixels(arg0,std::move(arg1),std::move(arg2));}});
	LUA_TRY_INVOKE_R(2, [](double arg0,double arg1){{return ImPlot::PlotToPixels(std::move(arg0),std::move(arg1));}});
	LUA_TRY_INVOKE_R(2, [](const ImPlotPoint& arg0,ImAxis arg1){{return ImPlot::PlotToPixels(arg0,std::move(arg1));}});
	LUA_TRY_INVOKE_R(1, [](const ImPlotPoint& arg0){{return ImPlot::PlotToPixels(arg0);}});
	LUA_GINVOKE_FOOTER("1,2,3,4");
}
int lua_ImPlot_popColormap(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.popColormap");
	LUA_TRY_INVOKE(1, static_cast<void(*)(int)>(&ImPlot::PopColormap));
	LUA_TRY_INVOKE(0, [](){{return ImPlot::PopColormap();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImPlot_popPlotClipRect(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.popPlotClipRect");
	LUA_TRY_INVOKE(0, &ImPlot::PopPlotClipRect);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_popStyleColor(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.popStyleColor");
	LUA_TRY_INVOKE(1, static_cast<void(*)(int)>(&ImPlot::PopStyleColor));
	LUA_TRY_INVOKE(0, [](){{return ImPlot::PopStyleColor();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImPlot_popStyleVar(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.popStyleVar");
	LUA_TRY_INVOKE(1, static_cast<void(*)(int)>(&ImPlot::PopStyleVar));
	LUA_TRY_INVOKE(0, [](){{return ImPlot::PopStyleVar();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImPlot_pushPlotClipRect(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.pushPlotClipRect");
	LUA_TRY_INVOKE(1, static_cast<void(*)(float)>(&ImPlot::PushPlotClipRect));
	LUA_TRY_INVOKE(0, [](){{return ImPlot::PushPlotClipRect();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImPlot_sampleColormap(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.sampleColormap");
	LUA_TRY_INVOKE_R(2, static_cast<ImVec4(*)(float, ImPlotColormap)>(&ImPlot::SampleColormap));
	LUA_TRY_INVOKE_R(1, [](float arg0){{return ImPlot::SampleColormap(std::move(arg0));}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImPlot_setAxes(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setAxes");
	LUA_TRY_INVOKE(2, &ImPlot::SetAxes);
	LUA_GINVOKE_FOOTER("2");
}
int lua_ImPlot_setAxis(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setAxis");
	LUA_TRY_INVOKE(1, &ImPlot::SetAxis);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImPlot_setNextAxesLimits(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setNextAxesLimits");
	LUA_TRY_INVOKE(5, static_cast<void(*)(double, double, double, double, ImPlotCond)>(&ImPlot::SetNextAxesLimits));
	LUA_TRY_INVOKE(4, [](double arg0,double arg1,double arg2,double arg3){{return ImPlot::SetNextAxesLimits(std::move(arg0),std::move(arg1),std::move(arg2),std::move(arg3));}});
	LUA_GINVOKE_FOOTER("4,5");
}
int lua_ImPlot_setNextAxesToFit(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setNextAxesToFit");
	LUA_TRY_INVOKE(0, &ImPlot::SetNextAxesToFit);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_setNextAxisLimits(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setNextAxisLimits");
	LUA_TRY_INVOKE(4, static_cast<void(*)(ImAxis, double, double, ImPlotCond)>(&ImPlot::SetNextAxisLimits));
	LUA_TRY_INVOKE(3, [](ImAxis arg0,double arg1,double arg2){{return ImPlot::SetNextAxisLimits(std::move(arg0),std::move(arg1),std::move(arg2));}});
	LUA_GINVOKE_FOOTER("3,4");
}
int lua_ImPlot_setNextAxisToFit(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setNextAxisToFit");
	LUA_TRY_INVOKE(1, &ImPlot::SetNextAxisToFit);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImPlot_setNextErrorBarStyle(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setNextErrorBarStyle");
	LUA_TRY_INVOKE(3, static_cast<void(*)(const ImVec4&, float, float)>(&ImPlot::SetNextErrorBarStyle));
	LUA_TRY_INVOKE(2, [](const ImVec4& arg0,float arg1){{return ImPlot::SetNextErrorBarStyle(arg0,std::move(arg1));}});
	LUA_TRY_INVOKE(1, [](const ImVec4& arg0){{return ImPlot::SetNextErrorBarStyle(arg0);}});
	LUA_TRY_INVOKE(0, [](){{return ImPlot::SetNextErrorBarStyle();}});
	LUA_GINVOKE_FOOTER("0,1,2,3");
}
int lua_ImPlot_setNextFillStyle(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setNextFillStyle");
	LUA_TRY_INVOKE(2, static_cast<void(*)(const ImVec4&, float)>(&ImPlot::SetNextFillStyle));
	LUA_TRY_INVOKE(1, [](const ImVec4& arg0){{return ImPlot::SetNextFillStyle(arg0);}});
	LUA_TRY_INVOKE(0, [](){{return ImPlot::SetNextFillStyle();}});
	LUA_GINVOKE_FOOTER("0,1,2");
}
int lua_ImPlot_setNextLineStyle(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setNextLineStyle");
	LUA_TRY_INVOKE(2, static_cast<void(*)(const ImVec4&, float)>(&ImPlot::SetNextLineStyle));
	LUA_TRY_INVOKE(1, [](const ImVec4& arg0){{return ImPlot::SetNextLineStyle(arg0);}});
	LUA_TRY_INVOKE(0, [](){{return ImPlot::SetNextLineStyle();}});
	LUA_GINVOKE_FOOTER("0,1,2");
}
int lua_ImPlot_setNextMarkerStyle(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setNextMarkerStyle");
	LUA_TRY_INVOKE(5, static_cast<void(*)(ImPlotMarker, float, const ImVec4&, float, const ImVec4&)>(&ImPlot::SetNextMarkerStyle));
	LUA_TRY_INVOKE(4, [](ImPlotMarker arg0,float arg1,const ImVec4& arg2,float arg3){{return ImPlot::SetNextMarkerStyle(std::move(arg0),std::move(arg1),arg2,std::move(arg3));}});
	LUA_TRY_INVOKE(3, [](ImPlotMarker arg0,float arg1,const ImVec4& arg2){{return ImPlot::SetNextMarkerStyle(std::move(arg0),std::move(arg1),arg2);}});
	LUA_TRY_INVOKE(2, [](ImPlotMarker arg0,float arg1){{return ImPlot::SetNextMarkerStyle(std::move(arg0),std::move(arg1));}});
	LUA_TRY_INVOKE(1, [](ImPlotMarker arg0){{return ImPlot::SetNextMarkerStyle(std::move(arg0));}});
	LUA_TRY_INVOKE(0, [](){{return ImPlot::SetNextMarkerStyle();}});
	LUA_GINVOKE_FOOTER("0,1,2,3,4,5");
}
int lua_ImPlot_setupAxes(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setupAxes");
	LUA_TRY_INVOKE(4, static_cast<void(*)(const char*, const char*, ImPlotAxisFlags, ImPlotAxisFlags)>(&ImPlot::SetupAxes));
	LUA_TRY_INVOKE(3, [](const char* arg0,const char* arg1,ImPlotAxisFlags arg2){{return ImPlot::SetupAxes(arg0,arg1,std::move(arg2));}});
	LUA_TRY_INVOKE(2, [](const char* arg0,const char* arg1){{return ImPlot::SetupAxes(arg0,arg1);}});
	LUA_GINVOKE_FOOTER("2,3,4");
}
int lua_ImPlot_setupAxesLimits(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setupAxesLimits");
	LUA_TRY_INVOKE(5, static_cast<void(*)(double, double, double, double, ImPlotCond)>(&ImPlot::SetupAxesLimits));
	LUA_TRY_INVOKE(4, [](double arg0,double arg1,double arg2,double arg3){{return ImPlot::SetupAxesLimits(std::move(arg0),std::move(arg1),std::move(arg2),std::move(arg3));}});
	LUA_GINVOKE_FOOTER("4,5");
}
int lua_ImPlot_setupAxis(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setupAxis");
	LUA_TRY_INVOKE(3, static_cast<void(*)(ImAxis, const char*, ImPlotAxisFlags)>(&ImPlot::SetupAxis));
	LUA_TRY_INVOKE(2, [](ImAxis arg0,const char* arg1){{return ImPlot::SetupAxis(std::move(arg0),arg1);}});
	LUA_TRY_INVOKE(1, [](ImAxis arg0){{return ImPlot::SetupAxis(std::move(arg0));}});
	LUA_GINVOKE_FOOTER("1,2,3");
}
int lua_ImPlot_setupAxisFormat(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setupAxisFormat");
	LUA_TRY_INVOKE(2, [](ImAxis arg0,ImPlotFormatter arg1){{return ImPlot::SetupAxisFormat(std::move(arg0),std::move(arg1));}});
	LUA_TRY_INVOKE(2, static_cast<void(*)(ImAxis, const char*)>(&ImPlot::SetupAxisFormat));
	LUA_GINVOKE_FOOTER("2");
}
int lua_ImPlot_setupAxisLimits(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setupAxisLimits");
	LUA_TRY_INVOKE(4, static_cast<void(*)(ImAxis, double, double, ImPlotCond)>(&ImPlot::SetupAxisLimits));
	LUA_TRY_INVOKE(3, [](ImAxis arg0,double arg1,double arg2){{return ImPlot::SetupAxisLimits(std::move(arg0),std::move(arg1),std::move(arg2));}});
	LUA_GINVOKE_FOOTER("3,4");
}
int lua_ImPlot_setupAxisLimitsConstraints(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setupAxisLimitsConstraints");
	LUA_TRY_INVOKE(3, &ImPlot::SetupAxisLimitsConstraints);
	LUA_GINVOKE_FOOTER("3");
}
int lua_ImPlot_setupAxisScale(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setupAxisScale");
	LUA_TRY_INVOKE(3, [](ImAxis arg0,ImPlotTransform arg1,ImPlotTransform arg2){{return ImPlot::SetupAxisScale(std::move(arg0),std::move(arg1),std::move(arg2));}});
	LUA_TRY_INVOKE(2, static_cast<void(*)(ImAxis, ImPlotScale)>(&ImPlot::SetupAxisScale));
	LUA_GINVOKE_FOOTER("2,3");
}
int lua_ImPlot_setupAxisZoomConstraints(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setupAxisZoomConstraints");
	LUA_TRY_INVOKE(3, &ImPlot::SetupAxisZoomConstraints);
	LUA_GINVOKE_FOOTER("3");
}
int lua_ImPlot_setupFinish(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setupFinish");
	LUA_TRY_INVOKE(0, &ImPlot::SetupFinish);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_setupLegend(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setupLegend");
	LUA_TRY_INVOKE(2, static_cast<void(*)(ImPlotLocation, ImPlotLegendFlags)>(&ImPlot::SetupLegend));
	LUA_TRY_INVOKE(1, [](ImPlotLocation arg0){{return ImPlot::SetupLegend(std::move(arg0));}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImPlot_setupMouseText(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.setupMouseText");
	LUA_TRY_INVOKE(2, static_cast<void(*)(ImPlotLocation, ImPlotMouseTextFlags)>(&ImPlot::SetupMouseText));
	LUA_TRY_INVOKE(1, [](ImPlotLocation arg0){{return ImPlot::SetupMouseText(std::move(arg0));}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImPlot_showColormapSelector(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.showColormapSelector");
	LUA_TRY_INVOKE_R(1, &ImPlot::ShowColormapSelector);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImPlot_showInputMapSelector(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.showInputMapSelector");
	LUA_TRY_INVOKE_R(1, &ImPlot::ShowInputMapSelector);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImPlot_showStyleEditor(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.showStyleEditor");
	LUA_TRY_INVOKE(1, static_cast<void(*)(ImPlotStyle*)>(&ImPlot::ShowStyleEditor));
	LUA_TRY_INVOKE(0, [](){{return ImPlot::ShowStyleEditor();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImPlot_showStyleSelector(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.showStyleSelector");
	LUA_TRY_INVOKE_R(1, &ImPlot::ShowStyleSelector);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImPlot_showUserGuide(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.showUserGuide");
	LUA_TRY_INVOKE(0, &ImPlot::ShowUserGuide);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImPlot_styleColorsAuto(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.styleColorsAuto");
	LUA_TRY_INVOKE(1, static_cast<void(*)(ImPlotStyle*)>(&ImPlot::StyleColorsAuto));
	LUA_TRY_INVOKE(0, [](){{return ImPlot::StyleColorsAuto();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImPlot_styleColorsClassic(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.styleColorsClassic");
	LUA_TRY_INVOKE(1, static_cast<void(*)(ImPlotStyle*)>(&ImPlot::StyleColorsClassic));
	LUA_TRY_INVOKE(0, [](){{return ImPlot::StyleColorsClassic();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImPlot_styleColorsDark(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.styleColorsDark");
	LUA_TRY_INVOKE(1, static_cast<void(*)(ImPlotStyle*)>(&ImPlot::StyleColorsDark));
	LUA_TRY_INVOKE(0, [](){{return ImPlot::StyleColorsDark();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImPlot_styleColorsLight(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImPlot", "ImPlot.styleColorsLight");
	LUA_TRY_INVOKE(1, static_cast<void(*)(ImPlotStyle*)>(&ImPlot::StyleColorsLight));
	LUA_TRY_INVOKE(0, [](){{return ImPlot::StyleColorsLight();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int luaReg_implot_implot_global_functions(lua_State* lua_S)
{
	LUA_ENTRY("implot");
	LUA_METHOD("beginAlignedPlots", lua_ImPlot_beginAlignedPlots);
	LUA_METHOD("beginDragDropSourceAxis", lua_ImPlot_beginDragDropSourceAxis);
	LUA_METHOD("beginDragDropSourceItem", lua_ImPlot_beginDragDropSourceItem);
	LUA_METHOD("beginDragDropSourcePlot", lua_ImPlot_beginDragDropSourcePlot);
	LUA_METHOD("beginDragDropTargetAxis", lua_ImPlot_beginDragDropTargetAxis);
	LUA_METHOD("beginDragDropTargetLegend", lua_ImPlot_beginDragDropTargetLegend);
	LUA_METHOD("beginDragDropTargetPlot", lua_ImPlot_beginDragDropTargetPlot);
	LUA_METHOD("beginLegendPopup", lua_ImPlot_beginLegendPopup);
	LUA_METHOD("beginPlot", lua_ImPlot_beginPlot);
	LUA_METHOD("beginSubplots", lua_ImPlot_beginSubplots);
	LUA_METHOD("cancelPlotSelection", lua_ImPlot_cancelPlotSelection);
	LUA_METHOD("colormapButton", lua_ImPlot_colormapButton);
	LUA_METHOD("colormapIcon", lua_ImPlot_colormapIcon);
	LUA_METHOD("colormapScale", lua_ImPlot_colormapScale);
	LUA_METHOD("endAlignedPlots", lua_ImPlot_endAlignedPlots);
	LUA_METHOD("endDragDropSource", lua_ImPlot_endDragDropSource);
	LUA_METHOD("endDragDropTarget", lua_ImPlot_endDragDropTarget);
	LUA_METHOD("endLegendPopup", lua_ImPlot_endLegendPopup);
	LUA_METHOD("endPlot", lua_ImPlot_endPlot);
	LUA_METHOD("endSubplots", lua_ImPlot_endSubplots);
	LUA_METHOD("getColormapColor", lua_ImPlot_getColormapColor);
	LUA_METHOD("getColormapCount", lua_ImPlot_getColormapCount);
	LUA_METHOD("getColormapIndex", lua_ImPlot_getColormapIndex);
	LUA_METHOD("getColormapName", lua_ImPlot_getColormapName);
	LUA_METHOD("getColormapSize", lua_ImPlot_getColormapSize);
	LUA_METHOD("getLastItemColor", lua_ImPlot_getLastItemColor);
	LUA_METHOD("getMarkerName", lua_ImPlot_getMarkerName);
	LUA_METHOD("getPlotDrawList", lua_ImPlot_getPlotDrawList);
	LUA_METHOD("getPlotLimits", lua_ImPlot_getPlotLimits);
	LUA_METHOD("getPlotMousePos", lua_ImPlot_getPlotMousePos);
	LUA_METHOD("getPlotPos", lua_ImPlot_getPlotPos);
	LUA_METHOD("getPlotSelection", lua_ImPlot_getPlotSelection);
	LUA_METHOD("getPlotSize", lua_ImPlot_getPlotSize);
	LUA_METHOD("getStyleColorName", lua_ImPlot_getStyleColorName);
	LUA_METHOD("hideNextItem", lua_ImPlot_hideNextItem);
	LUA_METHOD("isAxisHovered", lua_ImPlot_isAxisHovered);
	LUA_METHOD("isLegendEntryHovered", lua_ImPlot_isLegendEntryHovered);
	LUA_METHOD("isPlotHovered", lua_ImPlot_isPlotHovered);
	LUA_METHOD("isPlotSelected", lua_ImPlot_isPlotSelected);
	LUA_METHOD("isSubplotsHovered", lua_ImPlot_isSubplotsHovered);
	LUA_METHOD("nextColormapColor", lua_ImPlot_nextColormapColor);
	LUA_METHOD("pixelsToPlot", lua_ImPlot_pixelsToPlot);
	LUA_METHOD("plotDummy", lua_ImPlot_plotDummy);
	LUA_METHOD("plotText", lua_ImPlot_plotText);
	LUA_METHOD("plotToPixels", lua_ImPlot_plotToPixels);
	LUA_METHOD("popColormap", lua_ImPlot_popColormap);
	LUA_METHOD("popPlotClipRect", lua_ImPlot_popPlotClipRect);
	LUA_METHOD("popStyleColor", lua_ImPlot_popStyleColor);
	LUA_METHOD("popStyleVar", lua_ImPlot_popStyleVar);
	LUA_METHOD("pushPlotClipRect", lua_ImPlot_pushPlotClipRect);
	LUA_METHOD("sampleColormap", lua_ImPlot_sampleColormap);
	LUA_METHOD("setAxes", lua_ImPlot_setAxes);
	LUA_METHOD("setAxis", lua_ImPlot_setAxis);
	LUA_METHOD("setNextAxesLimits", lua_ImPlot_setNextAxesLimits);
	LUA_METHOD("setNextAxesToFit", lua_ImPlot_setNextAxesToFit);
	LUA_METHOD("setNextAxisLimits", lua_ImPlot_setNextAxisLimits);
	LUA_METHOD("setNextAxisToFit", lua_ImPlot_setNextAxisToFit);
	LUA_METHOD("setNextErrorBarStyle", lua_ImPlot_setNextErrorBarStyle);
	LUA_METHOD("setNextFillStyle", lua_ImPlot_setNextFillStyle);
	LUA_METHOD("setNextLineStyle", lua_ImPlot_setNextLineStyle);
	LUA_METHOD("setNextMarkerStyle", lua_ImPlot_setNextMarkerStyle);
	LUA_METHOD("setupAxes", lua_ImPlot_setupAxes);
	LUA_METHOD("setupAxesLimits", lua_ImPlot_setupAxesLimits);
	LUA_METHOD("setupAxis", lua_ImPlot_setupAxis);
	LUA_METHOD("setupAxisFormat", lua_ImPlot_setupAxisFormat);
	LUA_METHOD("setupAxisLimits", lua_ImPlot_setupAxisLimits);
	LUA_METHOD("setupAxisLimitsConstraints", lua_ImPlot_setupAxisLimitsConstraints);
	LUA_METHOD("setupAxisScale", lua_ImPlot_setupAxisScale);
	LUA_METHOD("setupAxisZoomConstraints", lua_ImPlot_setupAxisZoomConstraints);
	LUA_METHOD("setupFinish", lua_ImPlot_setupFinish);
	LUA_METHOD("setupLegend", lua_ImPlot_setupLegend);
	LUA_METHOD("setupMouseText", lua_ImPlot_setupMouseText);
	LUA_METHOD("showColormapSelector", lua_ImPlot_showColormapSelector);
	LUA_METHOD("showInputMapSelector", lua_ImPlot_showInputMapSelector);
	LUA_METHOD("showStyleEditor", lua_ImPlot_showStyleEditor);
	LUA_METHOD("showStyleSelector", lua_ImPlot_showStyleSelector);
	LUA_METHOD("showUserGuide", lua_ImPlot_showUserGuide);
	LUA_METHOD("styleColorsAuto", lua_ImPlot_styleColorsAuto);
	LUA_METHOD("styleColorsClassic", lua_ImPlot_styleColorsClassic);
	LUA_METHOD("styleColorsDark", lua_ImPlot_styleColorsDark);
	LUA_METHOD("styleColorsLight", lua_ImPlot_styleColorsLight);
	LUA_ENTRY_END(1);
	return 0;
}
