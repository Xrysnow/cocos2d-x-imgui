#include "lua_implot_auto.hpp"
#include "../implot/implot.h"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"
#include "imgui_lua.hpp"
using lua::luaval_to_native;
using lua::native_to_luaval;
namespace implot {
using ::ImPlotFlags_;
using ::ImPlotAxisFlags_;
using ::ImPlotCol_;
using ::ImPlotStyleVar_;
using ::ImPlotMarker_;
using ::ImPlotColormap_;
using ::ImPlotLocation_;
using ::ImPlotOrientation_;
using ::ImPlotYAxis_;
using ::ImPlotStyle;
namespace ImPlot { using namespace ::ImPlot; }
}

#ifndef LUA_CHECK_COBJ_TYPE
	#ifdef LUA_DEBUG
		#define LUA_CHECK_COBJ_TYPE(L, TYPE, NAME) if(!tolua_isusertype((L), 1, (TYPE), 0, nullptr)) { return luaL_error((L), "invalid 'cobj' in '%s': '%s', expects '%s'", NAME, tolua_typename((L), 1), (TYPE)); }
	#else
		#define LUA_CHECK_COBJ_TYPE(L, TYPE, NAME) (void)(TYPE);
	#endif
#endif
#ifndef LUA_CHECK_COBJ
	#ifdef LUA_DEBUG
		#define LUA_CHECK_COBJ(L, COBJ, NAME) if(!(COBJ)) { return luaL_error((L), "invalid 'cobj' in '%s'", NAME); }
	#else
		#define LUA_CHECK_COBJ(L, COBJ, NAME)
	#endif
#endif
#ifndef LUA_CHECK_PARAMETER
	#define LUA_CHECK_PARAMETER(L, OK, NAME) if(!(OK)) { return luaL_error((L), "invalid arguments in '%s'", NAME); }
#endif
#ifndef LUA_PARAMETER_ERROR
	#define LUA_PARAMETER_ERROR(L, NAME, ARGC, EXPECT) return luaL_error((L), "wrong number of arguments in '%s': %d, expects %s", NAME, (ARGC), EXPECT);
#endif

int lua_register_x_implot_ImPlotFlags_(lua_State* tolua_S)
{

	tolua_module(tolua_S, "ImPlotFlags", 0);
	tolua_beginmodule(tolua_S,"ImPlotFlags");
		tolua_constant(tolua_S, "None", (lua_Number)implot::ImPlotFlags_::ImPlotFlags_None);
		tolua_constant(tolua_S, "NoTitle", (lua_Number)implot::ImPlotFlags_::ImPlotFlags_NoTitle);
		tolua_constant(tolua_S, "NoLegend", (lua_Number)implot::ImPlotFlags_::ImPlotFlags_NoLegend);
		tolua_constant(tolua_S, "NoMenus", (lua_Number)implot::ImPlotFlags_::ImPlotFlags_NoMenus);
		tolua_constant(tolua_S, "NoBoxSelect", (lua_Number)implot::ImPlotFlags_::ImPlotFlags_NoBoxSelect);
		tolua_constant(tolua_S, "NoMousePos", (lua_Number)implot::ImPlotFlags_::ImPlotFlags_NoMousePos);
		tolua_constant(tolua_S, "NoHighlight", (lua_Number)implot::ImPlotFlags_::ImPlotFlags_NoHighlight);
		tolua_constant(tolua_S, "NoChild", (lua_Number)implot::ImPlotFlags_::ImPlotFlags_NoChild);
		tolua_constant(tolua_S, "Equal", (lua_Number)implot::ImPlotFlags_::ImPlotFlags_Equal);
		tolua_constant(tolua_S, "YAxis2", (lua_Number)implot::ImPlotFlags_::ImPlotFlags_YAxis2);
		tolua_constant(tolua_S, "YAxis3", (lua_Number)implot::ImPlotFlags_::ImPlotFlags_YAxis3);
		tolua_constant(tolua_S, "Query", (lua_Number)implot::ImPlotFlags_::ImPlotFlags_Query);
		tolua_constant(tolua_S, "Crosshairs", (lua_Number)implot::ImPlotFlags_::ImPlotFlags_Crosshairs);
		tolua_constant(tolua_S, "AntiAliased", (lua_Number)implot::ImPlotFlags_::ImPlotFlags_AntiAliased);
		tolua_constant(tolua_S, "CanvasOnly", (lua_Number)implot::ImPlotFlags_::ImPlotFlags_CanvasOnly);
	tolua_endmodule(tolua_S);

	return 1;
}

int lua_register_x_implot_ImPlotAxisFlags_(lua_State* tolua_S)
{

	tolua_module(tolua_S, "ImPlotAxisFlags", 0);
	tolua_beginmodule(tolua_S,"ImPlotAxisFlags");
		tolua_constant(tolua_S, "None", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_None);
		tolua_constant(tolua_S, "NoLabel", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_NoLabel);
		tolua_constant(tolua_S, "NoGridLines", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_NoGridLines);
		tolua_constant(tolua_S, "NoTickMarks", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_NoTickMarks);
		tolua_constant(tolua_S, "NoTickLabels", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_NoTickLabels);
		tolua_constant(tolua_S, "Foreground", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_Foreground);
		tolua_constant(tolua_S, "LogScale", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_LogScale);
		tolua_constant(tolua_S, "Time", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_Time);
		tolua_constant(tolua_S, "Invert", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_Invert);
		tolua_constant(tolua_S, "NoInitialFit", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_NoInitialFit);
		tolua_constant(tolua_S, "AutoFit", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_AutoFit);
		tolua_constant(tolua_S, "RangeFit", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_RangeFit);
		tolua_constant(tolua_S, "LockMin", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_LockMin);
		tolua_constant(tolua_S, "LockMax", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_LockMax);
		tolua_constant(tolua_S, "Lock", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_Lock);
		tolua_constant(tolua_S, "NoDecorations", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_NoDecorations);
	tolua_endmodule(tolua_S);

	return 1;
}

int lua_register_x_implot_ImPlotCol_(lua_State* tolua_S)
{

	tolua_module(tolua_S, "ImPlotCol", 0);
	tolua_beginmodule(tolua_S,"ImPlotCol");
		tolua_constant(tolua_S, "Line", (lua_Number)implot::ImPlotCol_::ImPlotCol_Line);
		tolua_constant(tolua_S, "Fill", (lua_Number)implot::ImPlotCol_::ImPlotCol_Fill);
		tolua_constant(tolua_S, "MarkerOutline", (lua_Number)implot::ImPlotCol_::ImPlotCol_MarkerOutline);
		tolua_constant(tolua_S, "MarkerFill", (lua_Number)implot::ImPlotCol_::ImPlotCol_MarkerFill);
		tolua_constant(tolua_S, "ErrorBar", (lua_Number)implot::ImPlotCol_::ImPlotCol_ErrorBar);
		tolua_constant(tolua_S, "FrameBg", (lua_Number)implot::ImPlotCol_::ImPlotCol_FrameBg);
		tolua_constant(tolua_S, "PlotBg", (lua_Number)implot::ImPlotCol_::ImPlotCol_PlotBg);
		tolua_constant(tolua_S, "PlotBorder", (lua_Number)implot::ImPlotCol_::ImPlotCol_PlotBorder);
		tolua_constant(tolua_S, "LegendBg", (lua_Number)implot::ImPlotCol_::ImPlotCol_LegendBg);
		tolua_constant(tolua_S, "LegendBorder", (lua_Number)implot::ImPlotCol_::ImPlotCol_LegendBorder);
		tolua_constant(tolua_S, "LegendText", (lua_Number)implot::ImPlotCol_::ImPlotCol_LegendText);
		tolua_constant(tolua_S, "TitleText", (lua_Number)implot::ImPlotCol_::ImPlotCol_TitleText);
		tolua_constant(tolua_S, "InlayText", (lua_Number)implot::ImPlotCol_::ImPlotCol_InlayText);
		tolua_constant(tolua_S, "XAxis", (lua_Number)implot::ImPlotCol_::ImPlotCol_XAxis);
		tolua_constant(tolua_S, "XAxisGrid", (lua_Number)implot::ImPlotCol_::ImPlotCol_XAxisGrid);
		tolua_constant(tolua_S, "YAxis", (lua_Number)implot::ImPlotCol_::ImPlotCol_YAxis);
		tolua_constant(tolua_S, "YAxisGrid", (lua_Number)implot::ImPlotCol_::ImPlotCol_YAxisGrid);
		tolua_constant(tolua_S, "YAxis2", (lua_Number)implot::ImPlotCol_::ImPlotCol_YAxis2);
		tolua_constant(tolua_S, "YAxisGrid2", (lua_Number)implot::ImPlotCol_::ImPlotCol_YAxisGrid2);
		tolua_constant(tolua_S, "YAxis3", (lua_Number)implot::ImPlotCol_::ImPlotCol_YAxis3);
		tolua_constant(tolua_S, "YAxisGrid3", (lua_Number)implot::ImPlotCol_::ImPlotCol_YAxisGrid3);
		tolua_constant(tolua_S, "Selection", (lua_Number)implot::ImPlotCol_::ImPlotCol_Selection);
		tolua_constant(tolua_S, "Query", (lua_Number)implot::ImPlotCol_::ImPlotCol_Query);
		tolua_constant(tolua_S, "Crosshairs", (lua_Number)implot::ImPlotCol_::ImPlotCol_Crosshairs);
		tolua_constant(tolua_S, "COUNT", (lua_Number)implot::ImPlotCol_::ImPlotCol_COUNT);
	tolua_endmodule(tolua_S);

	return 1;
}

int lua_register_x_implot_ImPlotStyleVar_(lua_State* tolua_S)
{

	tolua_module(tolua_S, "ImPlotStyleVar", 0);
	tolua_beginmodule(tolua_S,"ImPlotStyleVar");
		tolua_constant(tolua_S, "LineWeight", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_LineWeight);
		tolua_constant(tolua_S, "Marker", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_Marker);
		tolua_constant(tolua_S, "MarkerSize", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_MarkerSize);
		tolua_constant(tolua_S, "MarkerWeight", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_MarkerWeight);
		tolua_constant(tolua_S, "FillAlpha", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_FillAlpha);
		tolua_constant(tolua_S, "ErrorBarSize", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_ErrorBarSize);
		tolua_constant(tolua_S, "ErrorBarWeight", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_ErrorBarWeight);
		tolua_constant(tolua_S, "DigitalBitHeight", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_DigitalBitHeight);
		tolua_constant(tolua_S, "DigitalBitGap", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_DigitalBitGap);
		tolua_constant(tolua_S, "PlotBorderSize", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_PlotBorderSize);
		tolua_constant(tolua_S, "MinorAlpha", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_MinorAlpha);
		tolua_constant(tolua_S, "MajorTickLen", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_MajorTickLen);
		tolua_constant(tolua_S, "MinorTickLen", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_MinorTickLen);
		tolua_constant(tolua_S, "MajorTickSize", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_MajorTickSize);
		tolua_constant(tolua_S, "MinorTickSize", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_MinorTickSize);
		tolua_constant(tolua_S, "MajorGridSize", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_MajorGridSize);
		tolua_constant(tolua_S, "MinorGridSize", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_MinorGridSize);
		tolua_constant(tolua_S, "PlotPadding", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_PlotPadding);
		tolua_constant(tolua_S, "LabelPadding", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_LabelPadding);
		tolua_constant(tolua_S, "LegendPadding", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_LegendPadding);
		tolua_constant(tolua_S, "LegendInnerPadding", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_LegendInnerPadding);
		tolua_constant(tolua_S, "LegendSpacing", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_LegendSpacing);
		tolua_constant(tolua_S, "MousePosPadding", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_MousePosPadding);
		tolua_constant(tolua_S, "AnnotationPadding", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_AnnotationPadding);
		tolua_constant(tolua_S, "FitPadding", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_FitPadding);
		tolua_constant(tolua_S, "PlotDefaultSize", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_PlotDefaultSize);
		tolua_constant(tolua_S, "PlotMinSize", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_PlotMinSize);
		tolua_constant(tolua_S, "COUNT", (lua_Number)implot::ImPlotStyleVar_::ImPlotStyleVar_COUNT);
	tolua_endmodule(tolua_S);

	return 1;
}

int lua_register_x_implot_ImPlotMarker_(lua_State* tolua_S)
{

	tolua_module(tolua_S, "ImPlotMarker", 0);
	tolua_beginmodule(tolua_S,"ImPlotMarker");
		tolua_constant(tolua_S, "None", (lua_Number)implot::ImPlotMarker_::ImPlotMarker_None);
		tolua_constant(tolua_S, "Circle", (lua_Number)implot::ImPlotMarker_::ImPlotMarker_Circle);
		tolua_constant(tolua_S, "Square", (lua_Number)implot::ImPlotMarker_::ImPlotMarker_Square);
		tolua_constant(tolua_S, "Diamond", (lua_Number)implot::ImPlotMarker_::ImPlotMarker_Diamond);
		tolua_constant(tolua_S, "Up", (lua_Number)implot::ImPlotMarker_::ImPlotMarker_Up);
		tolua_constant(tolua_S, "Down", (lua_Number)implot::ImPlotMarker_::ImPlotMarker_Down);
		tolua_constant(tolua_S, "Left", (lua_Number)implot::ImPlotMarker_::ImPlotMarker_Left);
		tolua_constant(tolua_S, "Right", (lua_Number)implot::ImPlotMarker_::ImPlotMarker_Right);
		tolua_constant(tolua_S, "Cross", (lua_Number)implot::ImPlotMarker_::ImPlotMarker_Cross);
		tolua_constant(tolua_S, "Plus", (lua_Number)implot::ImPlotMarker_::ImPlotMarker_Plus);
		tolua_constant(tolua_S, "Asterisk", (lua_Number)implot::ImPlotMarker_::ImPlotMarker_Asterisk);
		tolua_constant(tolua_S, "COUNT", (lua_Number)implot::ImPlotMarker_::ImPlotMarker_COUNT);
	tolua_endmodule(tolua_S);

	return 1;
}

int lua_register_x_implot_ImPlotColormap_(lua_State* tolua_S)
{

	tolua_module(tolua_S, "ImPlotColormap", 0);
	tolua_beginmodule(tolua_S,"ImPlotColormap");
		tolua_constant(tolua_S, "Deep", (lua_Number)implot::ImPlotColormap_::ImPlotColormap_Deep);
		tolua_constant(tolua_S, "Dark", (lua_Number)implot::ImPlotColormap_::ImPlotColormap_Dark);
		tolua_constant(tolua_S, "Pastel", (lua_Number)implot::ImPlotColormap_::ImPlotColormap_Pastel);
		tolua_constant(tolua_S, "Paired", (lua_Number)implot::ImPlotColormap_::ImPlotColormap_Paired);
		tolua_constant(tolua_S, "Viridis", (lua_Number)implot::ImPlotColormap_::ImPlotColormap_Viridis);
		tolua_constant(tolua_S, "Plasma", (lua_Number)implot::ImPlotColormap_::ImPlotColormap_Plasma);
		tolua_constant(tolua_S, "Hot", (lua_Number)implot::ImPlotColormap_::ImPlotColormap_Hot);
		tolua_constant(tolua_S, "Cool", (lua_Number)implot::ImPlotColormap_::ImPlotColormap_Cool);
		tolua_constant(tolua_S, "Pink", (lua_Number)implot::ImPlotColormap_::ImPlotColormap_Pink);
		tolua_constant(tolua_S, "Jet", (lua_Number)implot::ImPlotColormap_::ImPlotColormap_Jet);
		tolua_constant(tolua_S, "Twilight", (lua_Number)implot::ImPlotColormap_::ImPlotColormap_Twilight);
		tolua_constant(tolua_S, "RdBu", (lua_Number)implot::ImPlotColormap_::ImPlotColormap_RdBu);
		tolua_constant(tolua_S, "BrBG", (lua_Number)implot::ImPlotColormap_::ImPlotColormap_BrBG);
		tolua_constant(tolua_S, "PiYG", (lua_Number)implot::ImPlotColormap_::ImPlotColormap_PiYG);
		tolua_constant(tolua_S, "Spectral", (lua_Number)implot::ImPlotColormap_::ImPlotColormap_Spectral);
		tolua_constant(tolua_S, "Greys", (lua_Number)implot::ImPlotColormap_::ImPlotColormap_Greys);
	tolua_endmodule(tolua_S);

	return 1;
}

int lua_register_x_implot_ImPlotLocation_(lua_State* tolua_S)
{

	tolua_module(tolua_S, "ImPlotLocation", 0);
	tolua_beginmodule(tolua_S,"ImPlotLocation");
		tolua_constant(tolua_S, "Center", (lua_Number)implot::ImPlotLocation_::ImPlotLocation_Center);
		tolua_constant(tolua_S, "North", (lua_Number)implot::ImPlotLocation_::ImPlotLocation_North);
		tolua_constant(tolua_S, "South", (lua_Number)implot::ImPlotLocation_::ImPlotLocation_South);
		tolua_constant(tolua_S, "West", (lua_Number)implot::ImPlotLocation_::ImPlotLocation_West);
		tolua_constant(tolua_S, "East", (lua_Number)implot::ImPlotLocation_::ImPlotLocation_East);
		tolua_constant(tolua_S, "NorthWest", (lua_Number)implot::ImPlotLocation_::ImPlotLocation_NorthWest);
		tolua_constant(tolua_S, "NorthEast", (lua_Number)implot::ImPlotLocation_::ImPlotLocation_NorthEast);
		tolua_constant(tolua_S, "SouthWest", (lua_Number)implot::ImPlotLocation_::ImPlotLocation_SouthWest);
		tolua_constant(tolua_S, "SouthEast", (lua_Number)implot::ImPlotLocation_::ImPlotLocation_SouthEast);
	tolua_endmodule(tolua_S);

	return 1;
}

int lua_register_x_implot_ImPlotOrientation_(lua_State* tolua_S)
{

	tolua_module(tolua_S, "ImPlotOrientation", 0);
	tolua_beginmodule(tolua_S,"ImPlotOrientation");
		tolua_constant(tolua_S, "Horizontal", (lua_Number)implot::ImPlotOrientation_::ImPlotOrientation_Horizontal);
		tolua_constant(tolua_S, "Vertical", (lua_Number)implot::ImPlotOrientation_::ImPlotOrientation_Vertical);
	tolua_endmodule(tolua_S);

	return 1;
}

int lua_register_x_implot_ImPlotYAxis_(lua_State* tolua_S)
{

	tolua_module(tolua_S, "ImPlotYAxis", 0);
	tolua_beginmodule(tolua_S,"ImPlotYAxis");
		tolua_constant(tolua_S, "_1", (lua_Number)implot::ImPlotYAxis_::ImPlotYAxis_1);
		tolua_constant(tolua_S, "_2", (lua_Number)implot::ImPlotYAxis_::ImPlotYAxis_2);
		tolua_constant(tolua_S, "_3", (lua_Number)implot::ImPlotYAxis_::ImPlotYAxis_3);
	tolua_endmodule(tolua_S);

	return 1;
}

int lua_x_implot_ImPlotStyle_getLineWeight(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.LineWeight getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->LineWeight);
	return 1;
}
int lua_x_implot_ImPlotStyle_setLineWeight(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.LineWeight setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->LineWeight, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getMarker(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.Marker getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Marker);
	return 1;
}
int lua_x_implot_ImPlotStyle_setMarker(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.Marker setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Marker, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getMarkerSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.MarkerSize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MarkerSize);
	return 1;
}
int lua_x_implot_ImPlotStyle_setMarkerSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.MarkerSize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MarkerSize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getMarkerWeight(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.MarkerWeight getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MarkerWeight);
	return 1;
}
int lua_x_implot_ImPlotStyle_setMarkerWeight(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.MarkerWeight setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MarkerWeight, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getFillAlpha(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.FillAlpha getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->FillAlpha);
	return 1;
}
int lua_x_implot_ImPlotStyle_setFillAlpha(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.FillAlpha setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->FillAlpha, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getErrorBarSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.ErrorBarSize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ErrorBarSize);
	return 1;
}
int lua_x_implot_ImPlotStyle_setErrorBarSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.ErrorBarSize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ErrorBarSize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getErrorBarWeight(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.ErrorBarWeight getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ErrorBarWeight);
	return 1;
}
int lua_x_implot_ImPlotStyle_setErrorBarWeight(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.ErrorBarWeight setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ErrorBarWeight, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getDigitalBitHeight(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.DigitalBitHeight getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->DigitalBitHeight);
	return 1;
}
int lua_x_implot_ImPlotStyle_setDigitalBitHeight(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.DigitalBitHeight setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->DigitalBitHeight, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getDigitalBitGap(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.DigitalBitGap getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->DigitalBitGap);
	return 1;
}
int lua_x_implot_ImPlotStyle_setDigitalBitGap(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.DigitalBitGap setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->DigitalBitGap, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getPlotBorderSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.PlotBorderSize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->PlotBorderSize);
	return 1;
}
int lua_x_implot_ImPlotStyle_setPlotBorderSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.PlotBorderSize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->PlotBorderSize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getMinorAlpha(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.MinorAlpha getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MinorAlpha);
	return 1;
}
int lua_x_implot_ImPlotStyle_setMinorAlpha(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.MinorAlpha setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MinorAlpha, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getMajorTickLen(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.MajorTickLen getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MajorTickLen);
	return 1;
}
int lua_x_implot_ImPlotStyle_setMajorTickLen(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.MajorTickLen setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MajorTickLen, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getMinorTickLen(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.MinorTickLen getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MinorTickLen);
	return 1;
}
int lua_x_implot_ImPlotStyle_setMinorTickLen(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.MinorTickLen setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MinorTickLen, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getMajorTickSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.MajorTickSize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MajorTickSize);
	return 1;
}
int lua_x_implot_ImPlotStyle_setMajorTickSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.MajorTickSize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MajorTickSize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getMinorTickSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.MinorTickSize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MinorTickSize);
	return 1;
}
int lua_x_implot_ImPlotStyle_setMinorTickSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.MinorTickSize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MinorTickSize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getMajorGridSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.MajorGridSize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MajorGridSize);
	return 1;
}
int lua_x_implot_ImPlotStyle_setMajorGridSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.MajorGridSize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MajorGridSize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getMinorGridSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.MinorGridSize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MinorGridSize);
	return 1;
}
int lua_x_implot_ImPlotStyle_setMinorGridSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.MinorGridSize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MinorGridSize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getPlotPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.PlotPadding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->PlotPadding);
	return 1;
}
int lua_x_implot_ImPlotStyle_setPlotPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.PlotPadding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->PlotPadding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getLabelPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.LabelPadding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->LabelPadding);
	return 1;
}
int lua_x_implot_ImPlotStyle_setLabelPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.LabelPadding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->LabelPadding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getLegendPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.LegendPadding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->LegendPadding);
	return 1;
}
int lua_x_implot_ImPlotStyle_setLegendPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.LegendPadding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->LegendPadding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getLegendInnerPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.LegendInnerPadding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->LegendInnerPadding);
	return 1;
}
int lua_x_implot_ImPlotStyle_setLegendInnerPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.LegendInnerPadding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->LegendInnerPadding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getLegendSpacing(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.LegendSpacing getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->LegendSpacing);
	return 1;
}
int lua_x_implot_ImPlotStyle_setLegendSpacing(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.LegendSpacing setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->LegendSpacing, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getMousePosPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.MousePosPadding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MousePosPadding);
	return 1;
}
int lua_x_implot_ImPlotStyle_setMousePosPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.MousePosPadding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MousePosPadding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getAnnotationPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.AnnotationPadding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->AnnotationPadding);
	return 1;
}
int lua_x_implot_ImPlotStyle_setAnnotationPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.AnnotationPadding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->AnnotationPadding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getFitPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.FitPadding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->FitPadding);
	return 1;
}
int lua_x_implot_ImPlotStyle_setFitPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.FitPadding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->FitPadding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getPlotDefaultSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.PlotDefaultSize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->PlotDefaultSize);
	return 1;
}
int lua_x_implot_ImPlotStyle_setPlotDefaultSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.PlotDefaultSize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->PlotDefaultSize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getPlotMinSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.PlotMinSize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->PlotMinSize);
	return 1;
}
int lua_x_implot_ImPlotStyle_setPlotMinSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.PlotMinSize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->PlotMinSize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getColormap(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.Colormap getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Colormap);
	return 1;
}
int lua_x_implot_ImPlotStyle_setColormap(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.Colormap setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Colormap, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getAntiAliasedLines(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.AntiAliasedLines getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->AntiAliasedLines);
	return 1;
}
int lua_x_implot_ImPlotStyle_setAntiAliasedLines(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.AntiAliasedLines setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->AntiAliasedLines, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getUseLocalTime(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.UseLocalTime getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->UseLocalTime);
	return 1;
}
int lua_x_implot_ImPlotStyle_setUseLocalTime(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.UseLocalTime setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->UseLocalTime, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getUseISO8601(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.UseISO8601 getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->UseISO8601);
	return 1;
}
int lua_x_implot_ImPlotStyle_setUseISO8601(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.UseISO8601 setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->UseISO8601, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlotStyle_getUse24HourClock(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.Use24HourClock getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Use24HourClock);
	return 1;
}
int lua_x_implot_ImPlotStyle_setUse24HourClock(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "implot.ImPlotStyle";
	constexpr auto LUA_FNAME = "implot.ImPlotStyle.Use24HourClock setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Use24HourClock, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
static int lua_x_implot_ImPlotStyle_finalize(lua_State* tolua_S)
{
	return 0;
}

int lua_register_x_implot_ImPlotStyle(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "implot.ImPlotStyle");
	tolua_cclass(tolua_S, "ImPlotStyle", "implot.ImPlotStyle", "", nullptr);

	tolua_beginmodule(tolua_S, "ImPlotStyle");
		tolua_variable(tolua_S, "LineWeight", lua_x_implot_ImPlotStyle_getLineWeight, lua_x_implot_ImPlotStyle_setLineWeight);
		tolua_variable(tolua_S, "Marker", lua_x_implot_ImPlotStyle_getMarker, lua_x_implot_ImPlotStyle_setMarker);
		tolua_variable(tolua_S, "MarkerSize", lua_x_implot_ImPlotStyle_getMarkerSize, lua_x_implot_ImPlotStyle_setMarkerSize);
		tolua_variable(tolua_S, "MarkerWeight", lua_x_implot_ImPlotStyle_getMarkerWeight, lua_x_implot_ImPlotStyle_setMarkerWeight);
		tolua_variable(tolua_S, "FillAlpha", lua_x_implot_ImPlotStyle_getFillAlpha, lua_x_implot_ImPlotStyle_setFillAlpha);
		tolua_variable(tolua_S, "ErrorBarSize", lua_x_implot_ImPlotStyle_getErrorBarSize, lua_x_implot_ImPlotStyle_setErrorBarSize);
		tolua_variable(tolua_S, "ErrorBarWeight", lua_x_implot_ImPlotStyle_getErrorBarWeight, lua_x_implot_ImPlotStyle_setErrorBarWeight);
		tolua_variable(tolua_S, "DigitalBitHeight", lua_x_implot_ImPlotStyle_getDigitalBitHeight, lua_x_implot_ImPlotStyle_setDigitalBitHeight);
		tolua_variable(tolua_S, "DigitalBitGap", lua_x_implot_ImPlotStyle_getDigitalBitGap, lua_x_implot_ImPlotStyle_setDigitalBitGap);
		tolua_variable(tolua_S, "PlotBorderSize", lua_x_implot_ImPlotStyle_getPlotBorderSize, lua_x_implot_ImPlotStyle_setPlotBorderSize);
		tolua_variable(tolua_S, "MinorAlpha", lua_x_implot_ImPlotStyle_getMinorAlpha, lua_x_implot_ImPlotStyle_setMinorAlpha);
		tolua_variable(tolua_S, "MajorTickLen", lua_x_implot_ImPlotStyle_getMajorTickLen, lua_x_implot_ImPlotStyle_setMajorTickLen);
		tolua_variable(tolua_S, "MinorTickLen", lua_x_implot_ImPlotStyle_getMinorTickLen, lua_x_implot_ImPlotStyle_setMinorTickLen);
		tolua_variable(tolua_S, "MajorTickSize", lua_x_implot_ImPlotStyle_getMajorTickSize, lua_x_implot_ImPlotStyle_setMajorTickSize);
		tolua_variable(tolua_S, "MinorTickSize", lua_x_implot_ImPlotStyle_getMinorTickSize, lua_x_implot_ImPlotStyle_setMinorTickSize);
		tolua_variable(tolua_S, "MajorGridSize", lua_x_implot_ImPlotStyle_getMajorGridSize, lua_x_implot_ImPlotStyle_setMajorGridSize);
		tolua_variable(tolua_S, "MinorGridSize", lua_x_implot_ImPlotStyle_getMinorGridSize, lua_x_implot_ImPlotStyle_setMinorGridSize);
		tolua_variable(tolua_S, "PlotPadding", lua_x_implot_ImPlotStyle_getPlotPadding, lua_x_implot_ImPlotStyle_setPlotPadding);
		tolua_variable(tolua_S, "LabelPadding", lua_x_implot_ImPlotStyle_getLabelPadding, lua_x_implot_ImPlotStyle_setLabelPadding);
		tolua_variable(tolua_S, "LegendPadding", lua_x_implot_ImPlotStyle_getLegendPadding, lua_x_implot_ImPlotStyle_setLegendPadding);
		tolua_variable(tolua_S, "LegendInnerPadding", lua_x_implot_ImPlotStyle_getLegendInnerPadding, lua_x_implot_ImPlotStyle_setLegendInnerPadding);
		tolua_variable(tolua_S, "LegendSpacing", lua_x_implot_ImPlotStyle_getLegendSpacing, lua_x_implot_ImPlotStyle_setLegendSpacing);
		tolua_variable(tolua_S, "MousePosPadding", lua_x_implot_ImPlotStyle_getMousePosPadding, lua_x_implot_ImPlotStyle_setMousePosPadding);
		tolua_variable(tolua_S, "AnnotationPadding", lua_x_implot_ImPlotStyle_getAnnotationPadding, lua_x_implot_ImPlotStyle_setAnnotationPadding);
		tolua_variable(tolua_S, "FitPadding", lua_x_implot_ImPlotStyle_getFitPadding, lua_x_implot_ImPlotStyle_setFitPadding);
		tolua_variable(tolua_S, "PlotDefaultSize", lua_x_implot_ImPlotStyle_getPlotDefaultSize, lua_x_implot_ImPlotStyle_setPlotDefaultSize);
		tolua_variable(tolua_S, "PlotMinSize", lua_x_implot_ImPlotStyle_getPlotMinSize, lua_x_implot_ImPlotStyle_setPlotMinSize);
		tolua_variable(tolua_S, "Colormap", lua_x_implot_ImPlotStyle_getColormap, lua_x_implot_ImPlotStyle_setColormap);
		tolua_variable(tolua_S, "AntiAliasedLines", lua_x_implot_ImPlotStyle_getAntiAliasedLines, lua_x_implot_ImPlotStyle_setAntiAliasedLines);
		tolua_variable(tolua_S, "UseLocalTime", lua_x_implot_ImPlotStyle_getUseLocalTime, lua_x_implot_ImPlotStyle_setUseLocalTime);
		tolua_variable(tolua_S, "UseISO8601", lua_x_implot_ImPlotStyle_getUseISO8601, lua_x_implot_ImPlotStyle_setUseISO8601);
		tolua_variable(tolua_S, "Use24HourClock", lua_x_implot_ImPlotStyle_getUse24HourClock, lua_x_implot_ImPlotStyle_setUse24HourClock);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(implot::ImPlotStyle).name();
	g_luaType[typeName] = "implot.ImPlotStyle";
	g_typeCast["ImPlotStyle"] = "implot.ImPlotStyle";
	return 1;
}

int lua_x_implot_ImPlot_Annotate(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.annotate";
	const int argc = lua_gettop(tolua_S);
	do {
		if (argc == 5) {
			double arg0;
			ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
			if (!ok) { break; }
			double arg1;
			ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
			if (!ok) { break; }
			ImVec2 arg2;
			ok &= luaval_to_ImVec2(tolua_S, 3, &arg2, LUA_FNAME);
			if (!ok) { break; }
			ImVec4 arg3;
			ok &= luaval_to_ImVec4(tolua_S, 4, &arg3, LUA_FNAME);
			if (!ok) { break; }
			const char* arg4;
			ok &= lua_isstring(tolua_S, 5); if (ok) arg4 = luaL_checkstring(tolua_S, 5);
			if (!ok) { break; }
			implot::ImPlot::Annotate(arg0, arg1, arg2, arg3, arg4);
			return 0;
		}
	} while (0);
	ok = true;
	do {
		if (argc == 4) {
			double arg0;
			ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
			if (!ok) { break; }
			double arg1;
			ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
			if (!ok) { break; }
			ImVec2 arg2;
			ok &= luaval_to_ImVec2(tolua_S, 3, &arg2, LUA_FNAME);
			if (!ok) { break; }
			const char* arg3;
			ok &= lua_isstring(tolua_S, 4); if (ok) arg3 = luaL_checkstring(tolua_S, 4);
			if (!ok) { break; }
			implot::ImPlot::Annotate(arg0, arg1, arg2, arg3);
			return 0;
		}
	} while (0);
	ok = true;
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "4");
}
int lua_x_implot_ImPlot_AnnotateClamped(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.annotateClamped";
	const int argc = lua_gettop(tolua_S);
	do {
		if (argc == 5) {
			double arg0;
			ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
			if (!ok) { break; }
			double arg1;
			ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
			if (!ok) { break; }
			ImVec2 arg2;
			ok &= luaval_to_ImVec2(tolua_S, 3, &arg2, LUA_FNAME);
			if (!ok) { break; }
			ImVec4 arg3;
			ok &= luaval_to_ImVec4(tolua_S, 4, &arg3, LUA_FNAME);
			if (!ok) { break; }
			const char* arg4;
			ok &= lua_isstring(tolua_S, 5); if (ok) arg4 = luaL_checkstring(tolua_S, 5);
			if (!ok) { break; }
			implot::ImPlot::AnnotateClamped(arg0, arg1, arg2, arg3, arg4);
			return 0;
		}
	} while (0);
	ok = true;
	do {
		if (argc == 4) {
			double arg0;
			ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
			if (!ok) { break; }
			double arg1;
			ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
			if (!ok) { break; }
			ImVec2 arg2;
			ok &= luaval_to_ImVec2(tolua_S, 3, &arg2, LUA_FNAME);
			if (!ok) { break; }
			const char* arg3;
			ok &= lua_isstring(tolua_S, 4); if (ok) arg3 = luaL_checkstring(tolua_S, 4);
			if (!ok) { break; }
			implot::ImPlot::AnnotateClamped(arg0, arg1, arg2, arg3);
			return 0;
		}
	} while (0);
	ok = true;
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "4");
}
int lua_x_implot_ImPlot_BeginDragDropSource(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.beginDragDropSource";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::BeginDragDropSource());
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::BeginDragDropSource(arg0));
		return 1;
	}
	if (argc == 2) {
		int arg0;
		int arg1;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::BeginDragDropSource(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 2");
}
int lua_x_implot_ImPlot_BeginDragDropSourceItem(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.beginDragDropSourceItem";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::BeginDragDropSourceItem(arg0));
		return 1;
	}
	if (argc == 2) {
		const char* arg0;
		int arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::BeginDragDropSourceItem(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_implot_ImPlot_BeginDragDropSourceX(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.beginDragDropSourceX";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::BeginDragDropSourceX());
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::BeginDragDropSourceX(arg0));
		return 1;
	}
	if (argc == 2) {
		int arg0;
		int arg1;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::BeginDragDropSourceX(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 2");
}
int lua_x_implot_ImPlot_BeginDragDropSourceY(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.beginDragDropSourceY";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::BeginDragDropSourceY());
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::BeginDragDropSourceY(arg0));
		return 1;
	}
	if (argc == 2) {
		int arg0;
		int arg1;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::BeginDragDropSourceY(arg0, arg1));
		return 1;
	}
	if (argc == 3) {
		int arg0;
		int arg1;
		int arg2;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::BeginDragDropSourceY(arg0, arg1, arg2));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 3");
}
int lua_x_implot_ImPlot_BeginDragDropTarget(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.beginDragDropTarget";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::BeginDragDropTarget());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_BeginDragDropTargetLegend(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.beginDragDropTargetLegend";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::BeginDragDropTargetLegend());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_BeginDragDropTargetX(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.beginDragDropTargetX";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::BeginDragDropTargetX());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_BeginDragDropTargetY(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.beginDragDropTargetY";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::BeginDragDropTargetY());
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::BeginDragDropTargetY(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_implot_ImPlot_BeginLegendPopup(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.beginLegendPopup";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::BeginLegendPopup(arg0));
		return 1;
	}
	if (argc == 2) {
		const char* arg0;
		int arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::BeginLegendPopup(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_implot_ImPlot_ColormapButton(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.colormapButton";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::ColormapButton(arg0));
		return 1;
	}
	if (argc == 2) {
		const char* arg0;
		ImVec2 arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::ColormapButton(arg0, arg1));
		return 1;
	}
	if (argc == 3) {
		const char* arg0;
		ImVec2 arg1;
		int arg2;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::ColormapButton(arg0, arg1, arg2));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 3");
}
int lua_x_implot_ImPlot_ColormapIcon(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.colormapIcon";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::ColormapIcon(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlot_ColormapScale(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.colormapScale";
	const int argc = lua_gettop(tolua_S);
	if (argc == 3) {
		const char* arg0;
		double arg1;
		double arg2;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::ColormapScale(arg0, arg1, arg2);
		return 0;
	}
	if (argc == 4) {
		const char* arg0;
		double arg1;
		double arg2;
		ImVec2 arg3;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg2, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 4, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::ColormapScale(arg0, arg1, arg2, arg3);
		return 0;
	}
	if (argc == 5) {
		const char* arg0;
		double arg1;
		double arg2;
		ImVec2 arg3;
		int arg4;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg2, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 4, &arg3, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 5, &arg4, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::ColormapScale(arg0, arg1, arg2, arg3, arg4);
		return 0;
	}
	if (argc == 6) {
		const char* arg0;
		double arg1;
		double arg2;
		ImVec2 arg3;
		int arg4;
		const char* arg5;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg2, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 4, &arg3, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 5, &arg4, LUA_FNAME);
		ok &= lua_isstring(tolua_S, 6); if (ok) arg5 = luaL_checkstring(tolua_S, 6);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::ColormapScale(arg0, arg1, arg2, arg3, arg4, arg5);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "3 to 6");
}
int lua_x_implot_ImPlot_EndDragDropSource(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.endDragDropSource";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::EndDragDropSource();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_EndDragDropTarget(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.endDragDropTarget";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::EndDragDropTarget();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_EndLegendPopup(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.endLegendPopup";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::EndLegendPopup();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_EndPlot(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.endPlot";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::EndPlot();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_FitNextPlotAxes(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.fitNextPlotAxes";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::FitNextPlotAxes();
		return 0;
	}
	if (argc == 1) {
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::FitNextPlotAxes(arg0);
		return 0;
	}
	if (argc == 2) {
		bool arg0;
		bool arg1;
		ok &= luaval_to_boolean(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::FitNextPlotAxes(arg0, arg1);
		return 0;
	}
	if (argc == 3) {
		bool arg0;
		bool arg1;
		bool arg2;
		ok &= luaval_to_boolean(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::FitNextPlotAxes(arg0, arg1, arg2);
		return 0;
	}
	if (argc == 4) {
		bool arg0;
		bool arg1;
		bool arg2;
		bool arg3;
		ok &= luaval_to_boolean(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 3, &arg2, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 4, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::FitNextPlotAxes(arg0, arg1, arg2, arg3);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 4");
}
int lua_x_implot_ImPlot_GetColormapColor(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.getColormapColor";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::GetColormapColor(arg0));
		return 1;
	}
	if (argc == 2) {
		int arg0;
		int arg1;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::GetColormapColor(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_implot_ImPlot_GetColormapCount(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.getColormapCount";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::GetColormapCount());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_GetColormapIndex(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.getColormapIndex";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::GetColormapIndex(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlot_GetColormapName(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.getColormapName";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::GetColormapName(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlot_GetColormapSize(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.getColormapSize";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::GetColormapSize());
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::GetColormapSize(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_implot_ImPlot_GetLastItemColor(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.getLastItemColor";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::GetLastItemColor());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_GetMarkerName(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.getMarkerName";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::GetMarkerName(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlot_GetPlotDrawList(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.getPlotDrawList";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::GetPlotDrawList());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_GetPlotLimits(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.getPlotLimits";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::GetPlotLimits());
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::GetPlotLimits(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_implot_ImPlot_GetPlotMousePos(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.getPlotMousePos";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::GetPlotMousePos());
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::GetPlotMousePos(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_implot_ImPlot_GetPlotPos(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.getPlotPos";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::GetPlotPos());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_GetPlotQuery(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.getPlotQuery";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::GetPlotQuery());
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::GetPlotQuery(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_implot_ImPlot_GetPlotSelection(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.getPlotSelection";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::GetPlotSelection());
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::GetPlotSelection(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_implot_ImPlot_GetPlotSize(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.getPlotSize";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::GetPlotSize());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_GetStyle(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.getStyle";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, &implot::ImPlot::GetStyle());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_GetStyleColorName(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.getStyleColorName";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::GetStyleColorName(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlot_HideNextItem(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.hideNextItem";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::HideNextItem();
		return 0;
	}
	if (argc == 1) {
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::HideNextItem(arg0);
		return 0;
	}
	if (argc == 2) {
		bool arg0;
		int arg1;
		ok &= luaval_to_boolean(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::HideNextItem(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 2");
}
int lua_x_implot_ImPlot_IsLegendEntryHovered(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.isLegendEntryHovered";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::IsLegendEntryHovered(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlot_IsPlotHovered(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.isPlotHovered";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::IsPlotHovered());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_IsPlotQueried(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.isPlotQueried";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::IsPlotQueried());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_IsPlotSelected(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.isPlotSelected";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::IsPlotSelected());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_IsPlotXAxisHovered(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.isPlotXAxisHovered";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::IsPlotXAxisHovered());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_IsPlotYAxisHovered(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.isPlotYAxisHovered";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::IsPlotYAxisHovered());
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::IsPlotYAxisHovered(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_implot_ImPlot_NextColormapColor(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.nextColormapColor";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, implot::ImPlot::NextColormapColor());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_PixelsToPlot(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.pixelsToPlot";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		double arg0;
		double arg1;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::PixelsToPlot(arg0, arg1));
		return 1;
	}
	if (argc == 3) {
		double arg0;
		double arg1;
		int arg2;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::PixelsToPlot(arg0, arg1, arg2));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2 to 3");
}
int lua_x_implot_ImPlot_PlotDummy(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.plotDummy";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::PlotDummy(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlot_PlotText(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.plotText";
	const int argc = lua_gettop(tolua_S);
	if (argc == 3) {
		const char* arg0;
		double arg1;
		double arg2;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::PlotText(arg0, arg1, arg2);
		return 0;
	}
	if (argc == 4) {
		const char* arg0;
		double arg1;
		double arg2;
		bool arg3;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg2, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 4, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::PlotText(arg0, arg1, arg2, arg3);
		return 0;
	}
	if (argc == 5) {
		const char* arg0;
		double arg1;
		double arg2;
		bool arg3;
		ImVec2 arg4;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg2, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 4, &arg3, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 5, &arg4, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::PlotText(arg0, arg1, arg2, arg3, arg4);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "3 to 5");
}
int lua_x_implot_ImPlot_PlotToPixels(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.plotToPixels";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		double arg0;
		double arg1;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::PlotToPixels(arg0, arg1));
		return 1;
	}
	if (argc == 3) {
		double arg0;
		double arg1;
		int arg2;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::PlotToPixels(arg0, arg1, arg2));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2 to 3");
}
int lua_x_implot_ImPlot_PopColormap(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.popColormap";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::PopColormap();
		return 0;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::PopColormap(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_implot_ImPlot_PopPlotClipRect(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.popPlotClipRect";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::PopPlotClipRect();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_PopStyleColor(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.popStyleColor";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::PopStyleColor();
		return 0;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::PopStyleColor(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_implot_ImPlot_PopStyleVar(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.popStyleVar";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::PopStyleVar();
		return 0;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::PopStyleVar(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_implot_ImPlot_PushPlotClipRect(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.pushPlotClipRect";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::PushPlotClipRect();
		return 0;
	}
	if (argc == 1) {
		double arg0;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::PushPlotClipRect(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_implot_ImPlot_SampleColormap(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.sampleColormap";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		double arg0;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::SampleColormap(arg0));
		return 1;
	}
	if (argc == 2) {
		double arg0;
		int arg1;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::SampleColormap(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_implot_ImPlot_SetLegendLocation(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.setLegendLocation";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetLegendLocation(arg0);
		return 0;
	}
	if (argc == 2) {
		int arg0;
		int arg1;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetLegendLocation(arg0, arg1);
		return 0;
	}
	if (argc == 3) {
		int arg0;
		int arg1;
		bool arg2;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetLegendLocation(arg0, arg1, arg2);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 3");
}
int lua_x_implot_ImPlot_SetMousePosLocation(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.setMousePosLocation";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetMousePosLocation(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlot_SetNextErrorBarStyle(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.setNextErrorBarStyle";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::SetNextErrorBarStyle();
		return 0;
	}
	if (argc == 1) {
		ImVec4 arg0;
		ok &= luaval_to_ImVec4(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextErrorBarStyle(arg0);
		return 0;
	}
	if (argc == 2) {
		ImVec4 arg0;
		double arg1;
		ok &= luaval_to_ImVec4(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextErrorBarStyle(arg0, arg1);
		return 0;
	}
	if (argc == 3) {
		ImVec4 arg0;
		double arg1;
		double arg2;
		ok &= luaval_to_ImVec4(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextErrorBarStyle(arg0, arg1, arg2);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 3");
}
int lua_x_implot_ImPlot_SetNextFillStyle(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.setNextFillStyle";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::SetNextFillStyle();
		return 0;
	}
	if (argc == 1) {
		ImVec4 arg0;
		ok &= luaval_to_ImVec4(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextFillStyle(arg0);
		return 0;
	}
	if (argc == 2) {
		ImVec4 arg0;
		double arg1;
		ok &= luaval_to_ImVec4(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextFillStyle(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 2");
}
int lua_x_implot_ImPlot_SetNextLineStyle(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.setNextLineStyle";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::SetNextLineStyle();
		return 0;
	}
	if (argc == 1) {
		ImVec4 arg0;
		ok &= luaval_to_ImVec4(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextLineStyle(arg0);
		return 0;
	}
	if (argc == 2) {
		ImVec4 arg0;
		double arg1;
		ok &= luaval_to_ImVec4(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextLineStyle(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 2");
}
int lua_x_implot_ImPlot_SetNextMarkerStyle(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.setNextMarkerStyle";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::SetNextMarkerStyle();
		return 0;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextMarkerStyle(arg0);
		return 0;
	}
	if (argc == 2) {
		int arg0;
		double arg1;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextMarkerStyle(arg0, arg1);
		return 0;
	}
	if (argc == 3) {
		int arg0;
		double arg1;
		ImVec4 arg2;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_ImVec4(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextMarkerStyle(arg0, arg1, arg2);
		return 0;
	}
	if (argc == 4) {
		int arg0;
		double arg1;
		ImVec4 arg2;
		double arg3;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_ImVec4(tolua_S, 3, &arg2, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 4, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextMarkerStyle(arg0, arg1, arg2, arg3);
		return 0;
	}
	if (argc == 5) {
		int arg0;
		double arg1;
		ImVec4 arg2;
		double arg3;
		ImVec4 arg4;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_ImVec4(tolua_S, 3, &arg2, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 4, &arg3, LUA_FNAME);
		ok &= luaval_to_ImVec4(tolua_S, 5, &arg4, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextMarkerStyle(arg0, arg1, arg2, arg3, arg4);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 5");
}
int lua_x_implot_ImPlot_SetNextPlotFormatX(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.setNextPlotFormatX";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextPlotFormatX(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlot_SetNextPlotFormatY(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.setNextPlotFormatY";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextPlotFormatY(arg0);
		return 0;
	}
	if (argc == 2) {
		const char* arg0;
		int arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextPlotFormatY(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_implot_ImPlot_SetNextPlotLimits(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.setNextPlotLimits";
	const int argc = lua_gettop(tolua_S);
	if (argc == 4) {
		double arg0;
		double arg1;
		double arg2;
		double arg3;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg2, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 4, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextPlotLimits(arg0, arg1, arg2, arg3);
		return 0;
	}
	if (argc == 5) {
		double arg0;
		double arg1;
		double arg2;
		double arg3;
		int arg4;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg2, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 4, &arg3, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 5, &arg4, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextPlotLimits(arg0, arg1, arg2, arg3, arg4);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "4 to 5");
}
int lua_x_implot_ImPlot_SetNextPlotLimitsX(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.setNextPlotLimitsX";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		double arg0;
		double arg1;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextPlotLimitsX(arg0, arg1);
		return 0;
	}
	if (argc == 3) {
		double arg0;
		double arg1;
		int arg2;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextPlotLimitsX(arg0, arg1, arg2);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2 to 3");
}
int lua_x_implot_ImPlot_SetNextPlotLimitsY(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.setNextPlotLimitsY";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		double arg0;
		double arg1;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextPlotLimitsY(arg0, arg1);
		return 0;
	}
	if (argc == 3) {
		double arg0;
		double arg1;
		int arg2;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextPlotLimitsY(arg0, arg1, arg2);
		return 0;
	}
	if (argc == 4) {
		double arg0;
		double arg1;
		int arg2;
		int arg3;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg2, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 4, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetNextPlotLimitsY(arg0, arg1, arg2, arg3);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2 to 4");
}
int lua_x_implot_ImPlot_SetPlotQuery(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.setPlotQuery";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		ImPlotLimits arg0;
		ok &= luaval_to_native(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetPlotQuery(arg0);
		return 0;
	}
	if (argc == 2) {
		ImPlotLimits arg0;
		int arg1;
		ok &= luaval_to_native(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetPlotQuery(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_implot_ImPlot_SetPlotYAxis(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.setPlotYAxis";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		implot::ImPlot::SetPlotYAxis(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlot_ShowColormapSelector(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.showColormapSelector";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::ShowColormapSelector(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlot_ShowStyleEditor(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.showStyleEditor";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::ShowStyleEditor();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_ShowStyleSelector(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "implot.ImPlot.showStyleSelector";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, implot::ImPlot::ShowStyleSelector(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_implot_ImPlot_ShowUserGuide(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.showUserGuide";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::ShowUserGuide();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_StyleColorsAuto(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.styleColorsAuto";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::StyleColorsAuto();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_StyleColorsClassic(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.styleColorsClassic";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::StyleColorsClassic();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_StyleColorsDark(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.styleColorsDark";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::StyleColorsDark();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_implot_ImPlot_StyleColorsLight(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "implot.ImPlot.styleColorsLight";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		implot::ImPlot::StyleColorsLight();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
static int lua_x_implot_ImPlot_finalize(lua_State* tolua_S)
{
	return 0;
}

int lua_register_x_implot_ImPlot(lua_State* tolua_S)
{
	// tolua_beginmodule(tolua_S, "ImPlot");
		tolua_function(tolua_S, "annotate", lua_x_implot_ImPlot_Annotate);
		tolua_function(tolua_S, "annotateClamped", lua_x_implot_ImPlot_AnnotateClamped);
		tolua_function(tolua_S, "beginDragDropSource", lua_x_implot_ImPlot_BeginDragDropSource);
		tolua_function(tolua_S, "beginDragDropSourceItem", lua_x_implot_ImPlot_BeginDragDropSourceItem);
		tolua_function(tolua_S, "beginDragDropSourceX", lua_x_implot_ImPlot_BeginDragDropSourceX);
		tolua_function(tolua_S, "beginDragDropSourceY", lua_x_implot_ImPlot_BeginDragDropSourceY);
		tolua_function(tolua_S, "beginDragDropTarget", lua_x_implot_ImPlot_BeginDragDropTarget);
		tolua_function(tolua_S, "beginDragDropTargetLegend", lua_x_implot_ImPlot_BeginDragDropTargetLegend);
		tolua_function(tolua_S, "beginDragDropTargetX", lua_x_implot_ImPlot_BeginDragDropTargetX);
		tolua_function(tolua_S, "beginDragDropTargetY", lua_x_implot_ImPlot_BeginDragDropTargetY);
		tolua_function(tolua_S, "beginLegendPopup", lua_x_implot_ImPlot_BeginLegendPopup);
		tolua_function(tolua_S, "colormapButton", lua_x_implot_ImPlot_ColormapButton);
		tolua_function(tolua_S, "colormapIcon", lua_x_implot_ImPlot_ColormapIcon);
		tolua_function(tolua_S, "colormapScale", lua_x_implot_ImPlot_ColormapScale);
		tolua_function(tolua_S, "endDragDropSource", lua_x_implot_ImPlot_EndDragDropSource);
		tolua_function(tolua_S, "endDragDropTarget", lua_x_implot_ImPlot_EndDragDropTarget);
		tolua_function(tolua_S, "endLegendPopup", lua_x_implot_ImPlot_EndLegendPopup);
		tolua_function(tolua_S, "endPlot", lua_x_implot_ImPlot_EndPlot);
		tolua_function(tolua_S, "fitNextPlotAxes", lua_x_implot_ImPlot_FitNextPlotAxes);
		tolua_function(tolua_S, "getColormapColor", lua_x_implot_ImPlot_GetColormapColor);
		tolua_function(tolua_S, "getColormapCount", lua_x_implot_ImPlot_GetColormapCount);
		tolua_function(tolua_S, "getColormapIndex", lua_x_implot_ImPlot_GetColormapIndex);
		tolua_function(tolua_S, "getColormapName", lua_x_implot_ImPlot_GetColormapName);
		tolua_function(tolua_S, "getColormapSize", lua_x_implot_ImPlot_GetColormapSize);
		tolua_function(tolua_S, "getLastItemColor", lua_x_implot_ImPlot_GetLastItemColor);
		tolua_function(tolua_S, "getMarkerName", lua_x_implot_ImPlot_GetMarkerName);
		tolua_function(tolua_S, "getPlotDrawList", lua_x_implot_ImPlot_GetPlotDrawList);
		tolua_function(tolua_S, "getPlotLimits", lua_x_implot_ImPlot_GetPlotLimits);
		tolua_function(tolua_S, "getPlotMousePos", lua_x_implot_ImPlot_GetPlotMousePos);
		tolua_function(tolua_S, "getPlotPos", lua_x_implot_ImPlot_GetPlotPos);
		tolua_function(tolua_S, "getPlotQuery", lua_x_implot_ImPlot_GetPlotQuery);
		tolua_function(tolua_S, "getPlotSelection", lua_x_implot_ImPlot_GetPlotSelection);
		tolua_function(tolua_S, "getPlotSize", lua_x_implot_ImPlot_GetPlotSize);
		tolua_function(tolua_S, "getStyle", lua_x_implot_ImPlot_GetStyle);
		tolua_function(tolua_S, "getStyleColorName", lua_x_implot_ImPlot_GetStyleColorName);
		tolua_function(tolua_S, "hideNextItem", lua_x_implot_ImPlot_HideNextItem);
		tolua_function(tolua_S, "isLegendEntryHovered", lua_x_implot_ImPlot_IsLegendEntryHovered);
		tolua_function(tolua_S, "isPlotHovered", lua_x_implot_ImPlot_IsPlotHovered);
		tolua_function(tolua_S, "isPlotQueried", lua_x_implot_ImPlot_IsPlotQueried);
		tolua_function(tolua_S, "isPlotSelected", lua_x_implot_ImPlot_IsPlotSelected);
		tolua_function(tolua_S, "isPlotXAxisHovered", lua_x_implot_ImPlot_IsPlotXAxisHovered);
		tolua_function(tolua_S, "isPlotYAxisHovered", lua_x_implot_ImPlot_IsPlotYAxisHovered);
		tolua_function(tolua_S, "nextColormapColor", lua_x_implot_ImPlot_NextColormapColor);
		tolua_function(tolua_S, "pixelsToPlot", lua_x_implot_ImPlot_PixelsToPlot);
		tolua_function(tolua_S, "plotDummy", lua_x_implot_ImPlot_PlotDummy);
		tolua_function(tolua_S, "plotText", lua_x_implot_ImPlot_PlotText);
		tolua_function(tolua_S, "plotToPixels", lua_x_implot_ImPlot_PlotToPixels);
		tolua_function(tolua_S, "popColormap", lua_x_implot_ImPlot_PopColormap);
		tolua_function(tolua_S, "popPlotClipRect", lua_x_implot_ImPlot_PopPlotClipRect);
		tolua_function(tolua_S, "popStyleColor", lua_x_implot_ImPlot_PopStyleColor);
		tolua_function(tolua_S, "popStyleVar", lua_x_implot_ImPlot_PopStyleVar);
		tolua_function(tolua_S, "pushPlotClipRect", lua_x_implot_ImPlot_PushPlotClipRect);
		tolua_function(tolua_S, "sampleColormap", lua_x_implot_ImPlot_SampleColormap);
		tolua_function(tolua_S, "setLegendLocation", lua_x_implot_ImPlot_SetLegendLocation);
		tolua_function(tolua_S, "setMousePosLocation", lua_x_implot_ImPlot_SetMousePosLocation);
		tolua_function(tolua_S, "setNextErrorBarStyle", lua_x_implot_ImPlot_SetNextErrorBarStyle);
		tolua_function(tolua_S, "setNextFillStyle", lua_x_implot_ImPlot_SetNextFillStyle);
		tolua_function(tolua_S, "setNextLineStyle", lua_x_implot_ImPlot_SetNextLineStyle);
		tolua_function(tolua_S, "setNextMarkerStyle", lua_x_implot_ImPlot_SetNextMarkerStyle);
		tolua_function(tolua_S, "setNextPlotFormatX", lua_x_implot_ImPlot_SetNextPlotFormatX);
		tolua_function(tolua_S, "setNextPlotFormatY", lua_x_implot_ImPlot_SetNextPlotFormatY);
		tolua_function(tolua_S, "setNextPlotLimits", lua_x_implot_ImPlot_SetNextPlotLimits);
		tolua_function(tolua_S, "setNextPlotLimitsX", lua_x_implot_ImPlot_SetNextPlotLimitsX);
		tolua_function(tolua_S, "setNextPlotLimitsY", lua_x_implot_ImPlot_SetNextPlotLimitsY);
		tolua_function(tolua_S, "setPlotQuery", lua_x_implot_ImPlot_SetPlotQuery);
		tolua_function(tolua_S, "setPlotYAxis", lua_x_implot_ImPlot_SetPlotYAxis);
		tolua_function(tolua_S, "showColormapSelector", lua_x_implot_ImPlot_ShowColormapSelector);
		tolua_function(tolua_S, "showStyleEditor", lua_x_implot_ImPlot_ShowStyleEditor);
		tolua_function(tolua_S, "showStyleSelector", lua_x_implot_ImPlot_ShowStyleSelector);
		tolua_function(tolua_S, "showUserGuide", lua_x_implot_ImPlot_ShowUserGuide);
		tolua_function(tolua_S, "styleColorsAuto", lua_x_implot_ImPlot_StyleColorsAuto);
		tolua_function(tolua_S, "styleColorsClassic", lua_x_implot_ImPlot_StyleColorsClassic);
		tolua_function(tolua_S, "styleColorsDark", lua_x_implot_ImPlot_StyleColorsDark);
		tolua_function(tolua_S, "styleColorsLight", lua_x_implot_ImPlot_StyleColorsLight);
	// tolua_endmodule(tolua_S);
	return 1;
}

int register_all_x_implot(lua_State* tolua_S)
{
	tolua_open(tolua_S);

	tolua_module(tolua_S, "implot", 0);
	tolua_beginmodule(tolua_S, "implot");

	lua_register_x_implot_ImPlotFlags_(tolua_S);
	lua_register_x_implot_ImPlotAxisFlags_(tolua_S);
	lua_register_x_implot_ImPlotCol_(tolua_S);
	lua_register_x_implot_ImPlotStyleVar_(tolua_S);
	lua_register_x_implot_ImPlotMarker_(tolua_S);
	lua_register_x_implot_ImPlotColormap_(tolua_S);
	lua_register_x_implot_ImPlotLocation_(tolua_S);
	lua_register_x_implot_ImPlotOrientation_(tolua_S);
	lua_register_x_implot_ImPlotYAxis_(tolua_S);
	lua_register_x_implot_ImPlotStyle(tolua_S);
	lua_register_x_implot_ImPlot(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

