#pragma once
#include "base/ccConfig.h"
#include "lua_conversion.hpp"

extern int luaReg_implot_implotImAxis(lua_State* lua_S);
extern int luaReg_implot_implotImPlotFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotAxisFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotSubplotFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotLegendFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotMouseTextFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotDragToolFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotColormapScaleFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotItemFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotLineFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotScatterFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotStairsFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotShadedFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotBarsFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotBarGroupsFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotErrorBarsFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotStemsFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotInfLinesFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotPieChartFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotHeatmapFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotHistogramFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotDigitalFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotImageFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotTextFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotDummyFlags(lua_State* lua_S);
extern int luaReg_implot_implotImPlotCond(lua_State* lua_S);
extern int luaReg_implot_implotImPlotCol(lua_State* lua_S);
extern int luaReg_implot_implotImPlotStyleVar(lua_State* lua_S);
extern int luaReg_implot_implotImPlotScale(lua_State* lua_S);
extern int luaReg_implot_implotImPlotMarker(lua_State* lua_S);
extern int luaReg_implot_implotImPlotColormap(lua_State* lua_S);
extern int luaReg_implot_implotImPlotLocation(lua_State* lua_S);
extern int luaReg_implot_implotImPlotBin(lua_State* lua_S);
extern int luaReg_implot_implotImPlotStyle(lua_State* lua_S);
extern int luaReg_implot_implotImPlotInputMap(lua_State* lua_S);
extern int luaReg_implot_implot_global_functions(lua_State* lua_S);

inline int luaReg_implot(lua_State* lua_S)
{
	luaReg_implot_implotImAxis(lua_S);
	luaReg_implot_implotImPlotFlags(lua_S);
	luaReg_implot_implotImPlotAxisFlags(lua_S);
	luaReg_implot_implotImPlotSubplotFlags(lua_S);
	luaReg_implot_implotImPlotLegendFlags(lua_S);
	luaReg_implot_implotImPlotMouseTextFlags(lua_S);
	luaReg_implot_implotImPlotDragToolFlags(lua_S);
	luaReg_implot_implotImPlotColormapScaleFlags(lua_S);
	luaReg_implot_implotImPlotItemFlags(lua_S);
	luaReg_implot_implotImPlotLineFlags(lua_S);
	luaReg_implot_implotImPlotScatterFlags(lua_S);
	luaReg_implot_implotImPlotStairsFlags(lua_S);
	luaReg_implot_implotImPlotShadedFlags(lua_S);
	luaReg_implot_implotImPlotBarsFlags(lua_S);
	luaReg_implot_implotImPlotBarGroupsFlags(lua_S);
	luaReg_implot_implotImPlotErrorBarsFlags(lua_S);
	luaReg_implot_implotImPlotStemsFlags(lua_S);
	luaReg_implot_implotImPlotInfLinesFlags(lua_S);
	luaReg_implot_implotImPlotPieChartFlags(lua_S);
	luaReg_implot_implotImPlotHeatmapFlags(lua_S);
	luaReg_implot_implotImPlotHistogramFlags(lua_S);
	luaReg_implot_implotImPlotDigitalFlags(lua_S);
	luaReg_implot_implotImPlotImageFlags(lua_S);
	luaReg_implot_implotImPlotTextFlags(lua_S);
	luaReg_implot_implotImPlotDummyFlags(lua_S);
	luaReg_implot_implotImPlotCond(lua_S);
	luaReg_implot_implotImPlotCol(lua_S);
	luaReg_implot_implotImPlotStyleVar(lua_S);
	luaReg_implot_implotImPlotScale(lua_S);
	luaReg_implot_implotImPlotMarker(lua_S);
	luaReg_implot_implotImPlotColormap(lua_S);
	luaReg_implot_implotImPlotLocation(lua_S);
	luaReg_implot_implotImPlotBin(lua_S);
	luaReg_implot_implotImPlotStyle(lua_S);
	luaReg_implot_implotImPlotInputMap(lua_S);
	luaReg_implot_implot_global_functions(lua_S);
	return 0;
}
