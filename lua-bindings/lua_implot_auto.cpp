#include "lua_implot_auto.hpp"
#include "../implot/implot.h"
#include "imgui_lua.hpp"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"

#ifdef COCOS2D_DEBUG
#undef COCOS2D_DEBUG
#endif
#define COCOS2D_DEBUG 0
namespace implot
{
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
    using ::ImPlotInputMap;
    namespace ImPlot
    {
        using namespace ::ImPlot;
    }
}
using namespace lua;

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
        tolua_constant(tolua_S, "NoGridLines", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_NoGridLines);
        tolua_constant(tolua_S, "NoTickMarks", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_NoTickMarks);
        tolua_constant(tolua_S, "NoTickLabels", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_NoTickLabels);
        tolua_constant(tolua_S, "LogScale", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_LogScale);
        tolua_constant(tolua_S, "Time", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_Time);
        tolua_constant(tolua_S, "Invert", (lua_Number)implot::ImPlotAxisFlags_::ImPlotAxisFlags_Invert);
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
        tolua_constant(tolua_S, "Default", (lua_Number)implot::ImPlotColormap_::ImPlotColormap_Default);
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
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getLineWeight'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->LineWeight);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getLineWeight'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setLineWeight(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setLineWeight'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlotStyle:LineWeight");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->LineWeight = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:LineWeight", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getLineWeight'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getMarker(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getMarker'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->Marker);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMarker'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setMarker(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setMarker'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlotStyle:Marker");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->Marker = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:Marker", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMarker'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getMarkerSize(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getMarkerSize'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->MarkerSize);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMarkerSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setMarkerSize(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setMarkerSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlotStyle:MarkerSize");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->MarkerSize = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:MarkerSize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMarkerSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getMarkerWeight(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getMarkerWeight'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->MarkerWeight);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMarkerWeight'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setMarkerWeight(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setMarkerWeight'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlotStyle:MarkerWeight");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->MarkerWeight = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:MarkerWeight", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMarkerWeight'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getFillAlpha(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getFillAlpha'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->FillAlpha);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getFillAlpha'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setFillAlpha(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setFillAlpha'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlotStyle:FillAlpha");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->FillAlpha = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:FillAlpha", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getFillAlpha'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getErrorBarSize(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getErrorBarSize'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->ErrorBarSize);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getErrorBarSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setErrorBarSize(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setErrorBarSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlotStyle:ErrorBarSize");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->ErrorBarSize = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:ErrorBarSize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getErrorBarSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getErrorBarWeight(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getErrorBarWeight'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->ErrorBarWeight);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getErrorBarWeight'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setErrorBarWeight(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setErrorBarWeight'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlotStyle:ErrorBarWeight");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->ErrorBarWeight = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:ErrorBarWeight", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getErrorBarWeight'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getDigitalBitHeight(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getDigitalBitHeight'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->DigitalBitHeight);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getDigitalBitHeight'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setDigitalBitHeight(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setDigitalBitHeight'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlotStyle:DigitalBitHeight");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->DigitalBitHeight = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:DigitalBitHeight", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getDigitalBitHeight'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getDigitalBitGap(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getDigitalBitGap'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->DigitalBitGap);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getDigitalBitGap'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setDigitalBitGap(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setDigitalBitGap'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlotStyle:DigitalBitGap");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->DigitalBitGap = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:DigitalBitGap", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getDigitalBitGap'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getPlotBorderSize(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getPlotBorderSize'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->PlotBorderSize);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getPlotBorderSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setPlotBorderSize(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setPlotBorderSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlotStyle:PlotBorderSize");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->PlotBorderSize = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:PlotBorderSize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getPlotBorderSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getMinorAlpha(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getMinorAlpha'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->MinorAlpha);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMinorAlpha'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setMinorAlpha(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setMinorAlpha'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlotStyle:MinorAlpha");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->MinorAlpha = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:MinorAlpha", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMinorAlpha'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getMajorTickLen(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getMajorTickLen'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->MajorTickLen);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMajorTickLen'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setMajorTickLen(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setMajorTickLen'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "implot.ImPlotStyle:MajorTickLen");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->MajorTickLen = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:MajorTickLen", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMajorTickLen'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getMinorTickLen(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getMinorTickLen'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->MinorTickLen);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMinorTickLen'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setMinorTickLen(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setMinorTickLen'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "implot.ImPlotStyle:MinorTickLen");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->MinorTickLen = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:MinorTickLen", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMinorTickLen'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getMajorTickSize(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getMajorTickSize'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->MajorTickSize);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMajorTickSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setMajorTickSize(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setMajorTickSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "implot.ImPlotStyle:MajorTickSize");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->MajorTickSize = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:MajorTickSize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMajorTickSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getMinorTickSize(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getMinorTickSize'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->MinorTickSize);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMinorTickSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setMinorTickSize(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setMinorTickSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "implot.ImPlotStyle:MinorTickSize");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->MinorTickSize = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:MinorTickSize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMinorTickSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getMajorGridSize(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getMajorGridSize'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->MajorGridSize);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMajorGridSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setMajorGridSize(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setMajorGridSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "implot.ImPlotStyle:MajorGridSize");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->MajorGridSize = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:MajorGridSize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMajorGridSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getMinorGridSize(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getMinorGridSize'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->MinorGridSize);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMinorGridSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setMinorGridSize(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setMinorGridSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "implot.ImPlotStyle:MinorGridSize");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->MinorGridSize = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:MinorGridSize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMinorGridSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getPlotPadding(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getPlotPadding'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->PlotPadding);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getPlotPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setPlotPadding(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setPlotPadding'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "implot.ImPlotStyle:PlotPadding");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->PlotPadding = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:PlotPadding", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getPlotPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getLabelPadding(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getLabelPadding'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->LabelPadding);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getLabelPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setLabelPadding(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setLabelPadding'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "implot.ImPlotStyle:LabelPadding");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->LabelPadding = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:LabelPadding", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getLabelPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getLegendPadding(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getLegendPadding'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->LegendPadding);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getLegendPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setLegendPadding(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setLegendPadding'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "implot.ImPlotStyle:LegendPadding");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->LegendPadding = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:LegendPadding", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getLegendPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getLegendInnerPadding(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getLegendInnerPadding'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->LegendInnerPadding);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getLegendInnerPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setLegendInnerPadding(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setLegendInnerPadding'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "implot.ImPlotStyle:LegendInnerPadding");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->LegendInnerPadding = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:LegendInnerPadding", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getLegendInnerPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getLegendSpacing(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getLegendSpacing'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->LegendSpacing);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getLegendSpacing'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setLegendSpacing(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setLegendSpacing'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "implot.ImPlotStyle:LegendSpacing");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->LegendSpacing = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:LegendSpacing", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getLegendSpacing'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getMousePosPadding(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getMousePosPadding'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->MousePosPadding);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMousePosPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setMousePosPadding(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setMousePosPadding'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "implot.ImPlotStyle:MousePosPadding");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->MousePosPadding = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:MousePosPadding", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getMousePosPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getAnnotationPadding(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getAnnotationPadding'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->AnnotationPadding);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getAnnotationPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setAnnotationPadding(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setAnnotationPadding'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "implot.ImPlotStyle:AnnotationPadding");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->AnnotationPadding = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:AnnotationPadding", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getAnnotationPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getPlotDefaultSize(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getPlotDefaultSize'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->PlotDefaultSize);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getPlotDefaultSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setPlotDefaultSize(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setPlotDefaultSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "implot.ImPlotStyle:PlotDefaultSize");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->PlotDefaultSize = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:PlotDefaultSize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getPlotDefaultSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getPlotMinSize(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getPlotMinSize'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->PlotMinSize);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getPlotMinSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setPlotMinSize(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setPlotMinSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "implot.ImPlotStyle:PlotMinSize");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->PlotMinSize = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:PlotMinSize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getPlotMinSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getAntiAliasedLines(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getAntiAliasedLines'", nullptr);
        return 0;
    }
#endif
    tolua_pushboolean(tolua_S,(bool)cobj->AntiAliasedLines);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getAntiAliasedLines'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setAntiAliasedLines(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setAntiAliasedLines'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "implot.ImPlotStyle:AntiAliasedLines");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->AntiAliasedLines = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:AntiAliasedLines", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getAntiAliasedLines'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getUseLocalTime(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getUseLocalTime'", nullptr);
        return 0;
    }
#endif
    tolua_pushboolean(tolua_S,(bool)cobj->UseLocalTime);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getUseLocalTime'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setUseLocalTime(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setUseLocalTime'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "implot.ImPlotStyle:UseLocalTime");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->UseLocalTime = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:UseLocalTime", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getUseLocalTime'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getUseISO8601(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getUseISO8601'", nullptr);
        return 0;
    }
#endif
    tolua_pushboolean(tolua_S,(bool)cobj->UseISO8601);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getUseISO8601'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setUseISO8601(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setUseISO8601'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "implot.ImPlotStyle:UseISO8601");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->UseISO8601 = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:UseISO8601", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getUseISO8601'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_getUse24HourClock(lua_State* tolua_S)
{
    implot::ImPlotStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_getUse24HourClock'", nullptr);
        return 0;
    }
#endif
    tolua_pushboolean(tolua_S,(bool)cobj->Use24HourClock);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getUse24HourClock'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotStyle_setUse24HourClock(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotStyle_setUse24HourClock'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "implot.ImPlotStyle:Use24HourClock");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotStyle'", nullptr);
            return 0;
        }
        cobj->Use24HourClock = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotStyle:Use24HourClock", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotStyle_getUse24HourClock'.", &tolua_err);
    return 0;
#endif
}
static int lua_x_implot_ImPlotStyle_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ImPlotStyle)");
    return 0;
}

int lua_register_x_implot_ImPlotStyle(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"implot.ImPlotStyle");
    tolua_cclass(tolua_S,"ImPlotStyle","implot.ImPlotStyle","",nullptr);

    tolua_beginmodule(tolua_S,"ImPlotStyle");
        tolua_variable(tolua_S,"LineWeight", lua_x_implot_ImPlotStyle_getLineWeight, lua_x_implot_ImPlotStyle_setLineWeight);
        tolua_variable(tolua_S,"Marker", lua_x_implot_ImPlotStyle_getMarker, lua_x_implot_ImPlotStyle_setMarker);
        tolua_variable(tolua_S,"MarkerSize", lua_x_implot_ImPlotStyle_getMarkerSize, lua_x_implot_ImPlotStyle_setMarkerSize);
        tolua_variable(tolua_S,"MarkerWeight", lua_x_implot_ImPlotStyle_getMarkerWeight, lua_x_implot_ImPlotStyle_setMarkerWeight);
        tolua_variable(tolua_S,"FillAlpha", lua_x_implot_ImPlotStyle_getFillAlpha, lua_x_implot_ImPlotStyle_setFillAlpha);
        tolua_variable(tolua_S,"ErrorBarSize", lua_x_implot_ImPlotStyle_getErrorBarSize, lua_x_implot_ImPlotStyle_setErrorBarSize);
        tolua_variable(tolua_S,"ErrorBarWeight", lua_x_implot_ImPlotStyle_getErrorBarWeight, lua_x_implot_ImPlotStyle_setErrorBarWeight);
        tolua_variable(tolua_S,"DigitalBitHeight", lua_x_implot_ImPlotStyle_getDigitalBitHeight, lua_x_implot_ImPlotStyle_setDigitalBitHeight);
        tolua_variable(tolua_S,"DigitalBitGap", lua_x_implot_ImPlotStyle_getDigitalBitGap, lua_x_implot_ImPlotStyle_setDigitalBitGap);
        tolua_variable(tolua_S,"PlotBorderSize", lua_x_implot_ImPlotStyle_getPlotBorderSize, lua_x_implot_ImPlotStyle_setPlotBorderSize);
        tolua_variable(tolua_S,"MinorAlpha", lua_x_implot_ImPlotStyle_getMinorAlpha, lua_x_implot_ImPlotStyle_setMinorAlpha);
        tolua_variable(tolua_S,"MajorTickLen", lua_x_implot_ImPlotStyle_getMajorTickLen, lua_x_implot_ImPlotStyle_setMajorTickLen);
        tolua_variable(tolua_S,"MinorTickLen", lua_x_implot_ImPlotStyle_getMinorTickLen, lua_x_implot_ImPlotStyle_setMinorTickLen);
        tolua_variable(tolua_S,"MajorTickSize", lua_x_implot_ImPlotStyle_getMajorTickSize, lua_x_implot_ImPlotStyle_setMajorTickSize);
        tolua_variable(tolua_S,"MinorTickSize", lua_x_implot_ImPlotStyle_getMinorTickSize, lua_x_implot_ImPlotStyle_setMinorTickSize);
        tolua_variable(tolua_S,"MajorGridSize", lua_x_implot_ImPlotStyle_getMajorGridSize, lua_x_implot_ImPlotStyle_setMajorGridSize);
        tolua_variable(tolua_S,"MinorGridSize", lua_x_implot_ImPlotStyle_getMinorGridSize, lua_x_implot_ImPlotStyle_setMinorGridSize);
        tolua_variable(tolua_S,"PlotPadding", lua_x_implot_ImPlotStyle_getPlotPadding, lua_x_implot_ImPlotStyle_setPlotPadding);
        tolua_variable(tolua_S,"LabelPadding", lua_x_implot_ImPlotStyle_getLabelPadding, lua_x_implot_ImPlotStyle_setLabelPadding);
        tolua_variable(tolua_S,"LegendPadding", lua_x_implot_ImPlotStyle_getLegendPadding, lua_x_implot_ImPlotStyle_setLegendPadding);
        tolua_variable(tolua_S,"LegendInnerPadding", lua_x_implot_ImPlotStyle_getLegendInnerPadding, lua_x_implot_ImPlotStyle_setLegendInnerPadding);
        tolua_variable(tolua_S,"LegendSpacing", lua_x_implot_ImPlotStyle_getLegendSpacing, lua_x_implot_ImPlotStyle_setLegendSpacing);
        tolua_variable(tolua_S,"MousePosPadding", lua_x_implot_ImPlotStyle_getMousePosPadding, lua_x_implot_ImPlotStyle_setMousePosPadding);
        tolua_variable(tolua_S,"AnnotationPadding", lua_x_implot_ImPlotStyle_getAnnotationPadding, lua_x_implot_ImPlotStyle_setAnnotationPadding);
        tolua_variable(tolua_S,"PlotDefaultSize", lua_x_implot_ImPlotStyle_getPlotDefaultSize, lua_x_implot_ImPlotStyle_setPlotDefaultSize);
        tolua_variable(tolua_S,"PlotMinSize", lua_x_implot_ImPlotStyle_getPlotMinSize, lua_x_implot_ImPlotStyle_setPlotMinSize);
        tolua_variable(tolua_S,"AntiAliasedLines", lua_x_implot_ImPlotStyle_getAntiAliasedLines, lua_x_implot_ImPlotStyle_setAntiAliasedLines);
        tolua_variable(tolua_S,"UseLocalTime", lua_x_implot_ImPlotStyle_getUseLocalTime, lua_x_implot_ImPlotStyle_setUseLocalTime);
        tolua_variable(tolua_S,"UseISO8601", lua_x_implot_ImPlotStyle_getUseISO8601, lua_x_implot_ImPlotStyle_setUseISO8601);
        tolua_variable(tolua_S,"Use24HourClock", lua_x_implot_ImPlotStyle_getUse24HourClock, lua_x_implot_ImPlotStyle_setUse24HourClock);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(implot::ImPlotStyle).name();
    g_luaType[typeName] = "implot.ImPlotStyle";
    g_typeCast["ImPlotStyle"] = "implot.ImPlotStyle";
    return 1;
}

int lua_x_implot_ImPlotInputMap_getPanButton(lua_State* tolua_S)
{
    implot::ImPlotInputMap* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_getPanButton'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->PanButton);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getPanButton'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_setPanButton(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotInputMap* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_setPanButton'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlotInputMap:PanButton");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotInputMap'", nullptr);
            return 0;
        }
        cobj->PanButton = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotInputMap:PanButton", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getPanButton'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_getPanMod(lua_State* tolua_S)
{
    implot::ImPlotInputMap* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_getPanMod'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->PanMod);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getPanMod'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_setPanMod(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotInputMap* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_setPanMod'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlotInputMap:PanMod");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotInputMap'", nullptr);
            return 0;
        }
        cobj->PanMod = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotInputMap:PanMod", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getPanMod'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_getFitButton(lua_State* tolua_S)
{
    implot::ImPlotInputMap* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_getFitButton'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->FitButton);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getFitButton'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_setFitButton(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotInputMap* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_setFitButton'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlotInputMap:FitButton");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotInputMap'", nullptr);
            return 0;
        }
        cobj->FitButton = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotInputMap:FitButton", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getFitButton'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_getContextMenuButton(lua_State* tolua_S)
{
    implot::ImPlotInputMap* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_getContextMenuButton'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->ContextMenuButton);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getContextMenuButton'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_setContextMenuButton(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotInputMap* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_setContextMenuButton'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlotInputMap:ContextMenuButton");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotInputMap'", nullptr);
            return 0;
        }
        cobj->ContextMenuButton = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotInputMap:ContextMenuButton", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getContextMenuButton'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_getBoxSelectButton(lua_State* tolua_S)
{
    implot::ImPlotInputMap* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_getBoxSelectButton'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->BoxSelectButton);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getBoxSelectButton'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_setBoxSelectButton(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotInputMap* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_setBoxSelectButton'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlotInputMap:BoxSelectButton");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotInputMap'", nullptr);
            return 0;
        }
        cobj->BoxSelectButton = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotInputMap:BoxSelectButton", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getBoxSelectButton'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_getBoxSelectMod(lua_State* tolua_S)
{
    implot::ImPlotInputMap* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_getBoxSelectMod'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->BoxSelectMod);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getBoxSelectMod'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_setBoxSelectMod(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotInputMap* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_setBoxSelectMod'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlotInputMap:BoxSelectMod");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotInputMap'", nullptr);
            return 0;
        }
        cobj->BoxSelectMod = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotInputMap:BoxSelectMod", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getBoxSelectMod'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_getBoxSelectCancelButton(lua_State* tolua_S)
{
    implot::ImPlotInputMap* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_getBoxSelectCancelButton'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->BoxSelectCancelButton);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getBoxSelectCancelButton'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_setBoxSelectCancelButton(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotInputMap* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_setBoxSelectCancelButton'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlotInputMap:BoxSelectCancelButton");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotInputMap'", nullptr);
            return 0;
        }
        cobj->BoxSelectCancelButton = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotInputMap:BoxSelectCancelButton", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getBoxSelectCancelButton'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_getQueryButton(lua_State* tolua_S)
{
    implot::ImPlotInputMap* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_getQueryButton'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->QueryButton);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getQueryButton'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_setQueryButton(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotInputMap* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_setQueryButton'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlotInputMap:QueryButton");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotInputMap'", nullptr);
            return 0;
        }
        cobj->QueryButton = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotInputMap:QueryButton", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getQueryButton'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_getQueryMod(lua_State* tolua_S)
{
    implot::ImPlotInputMap* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_getQueryMod'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->QueryMod);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getQueryMod'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_setQueryMod(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotInputMap* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_setQueryMod'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlotInputMap:QueryMod");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotInputMap'", nullptr);
            return 0;
        }
        cobj->QueryMod = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotInputMap:QueryMod", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getQueryMod'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_getQueryToggleMod(lua_State* tolua_S)
{
    implot::ImPlotInputMap* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_getQueryToggleMod'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->QueryToggleMod);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getQueryToggleMod'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_setQueryToggleMod(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotInputMap* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_setQueryToggleMod'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlotInputMap:QueryToggleMod");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotInputMap'", nullptr);
            return 0;
        }
        cobj->QueryToggleMod = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotInputMap:QueryToggleMod", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getQueryToggleMod'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_getHorizontalMod(lua_State* tolua_S)
{
    implot::ImPlotInputMap* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_getHorizontalMod'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->HorizontalMod);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getHorizontalMod'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_setHorizontalMod(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotInputMap* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_setHorizontalMod'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlotInputMap:HorizontalMod");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotInputMap'", nullptr);
            return 0;
        }
        cobj->HorizontalMod = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotInputMap:HorizontalMod", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getHorizontalMod'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_getVerticalMod(lua_State* tolua_S)
{
    implot::ImPlotInputMap* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_getVerticalMod'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->VerticalMod);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getVerticalMod'.", &tolua_err);
    return 0;
#endif
}
int lua_x_implot_ImPlotInputMap_setVerticalMod(lua_State* tolua_S)
{
    int argc = 0;
    implot::ImPlotInputMap* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "implot.ImPlotInputMap", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (implot::ImPlotInputMap*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_implot_ImPlotInputMap_setVerticalMod'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlotInputMap:VerticalMod");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_implot_ImPlotInputMap'", nullptr);
            return 0;
        }
        cobj->VerticalMod = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "implot.ImPlotInputMap:VerticalMod", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_implot_ImPlotInputMap_getVerticalMod'.", &tolua_err);
    return 0;
#endif
}
static int lua_x_implot_ImPlotInputMap_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ImPlotInputMap)");
    return 0;
}

int lua_register_x_implot_ImPlotInputMap(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"implot.ImPlotInputMap");
    tolua_cclass(tolua_S,"ImPlotInputMap","implot.ImPlotInputMap","",nullptr);

    tolua_beginmodule(tolua_S,"ImPlotInputMap");
        tolua_variable(tolua_S,"PanButton", lua_x_implot_ImPlotInputMap_getPanButton, lua_x_implot_ImPlotInputMap_setPanButton);
        tolua_variable(tolua_S,"PanMod", lua_x_implot_ImPlotInputMap_getPanMod, lua_x_implot_ImPlotInputMap_setPanMod);
        tolua_variable(tolua_S,"FitButton", lua_x_implot_ImPlotInputMap_getFitButton, lua_x_implot_ImPlotInputMap_setFitButton);
        tolua_variable(tolua_S,"ContextMenuButton", lua_x_implot_ImPlotInputMap_getContextMenuButton, lua_x_implot_ImPlotInputMap_setContextMenuButton);
        tolua_variable(tolua_S,"BoxSelectButton", lua_x_implot_ImPlotInputMap_getBoxSelectButton, lua_x_implot_ImPlotInputMap_setBoxSelectButton);
        tolua_variable(tolua_S,"BoxSelectMod", lua_x_implot_ImPlotInputMap_getBoxSelectMod, lua_x_implot_ImPlotInputMap_setBoxSelectMod);
        tolua_variable(tolua_S,"BoxSelectCancelButton", lua_x_implot_ImPlotInputMap_getBoxSelectCancelButton, lua_x_implot_ImPlotInputMap_setBoxSelectCancelButton);
        tolua_variable(tolua_S,"QueryButton", lua_x_implot_ImPlotInputMap_getQueryButton, lua_x_implot_ImPlotInputMap_setQueryButton);
        tolua_variable(tolua_S,"QueryMod", lua_x_implot_ImPlotInputMap_getQueryMod, lua_x_implot_ImPlotInputMap_setQueryMod);
        tolua_variable(tolua_S,"QueryToggleMod", lua_x_implot_ImPlotInputMap_getQueryToggleMod, lua_x_implot_ImPlotInputMap_setQueryToggleMod);
        tolua_variable(tolua_S,"HorizontalMod", lua_x_implot_ImPlotInputMap_getHorizontalMod, lua_x_implot_ImPlotInputMap_setHorizontalMod);
        tolua_variable(tolua_S,"VerticalMod", lua_x_implot_ImPlotInputMap_getVerticalMod, lua_x_implot_ImPlotInputMap_setVerticalMod);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(implot::ImPlotInputMap).name();
    g_luaType[typeName] = "implot.ImPlotInputMap";
    g_typeCast["ImPlotInputMap"] = "implot.ImPlotInputMap";
    return 1;
}

int lua_x_implot_ImPlot_Annotate(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 5)
        {
            double arg0;
            ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlot:Annotate");
            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:Annotate");
            if (!ok) { break; }
            ImVec2 arg2;
            ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "implot.ImPlot:Annotate");
            if (!ok) { break; }
            ImVec4 arg3;
            ok &= luaval_to_ImVec4(tolua_S, 5, &arg3, "implot.ImPlot:Annotate");
            if (!ok) { break; }
            const char* arg4;
            std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp, "implot.ImPlot:Annotate"); arg4 = arg4_tmp.c_str();
            if (!ok) { break; }
            implot::ImPlot::Annotate(arg0, arg1, arg2, arg3, "%s", arg4);
            lua_settop(tolua_S, 1);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 4)
        {
            double arg0;
            ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlot:Annotate");
            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:Annotate");
            if (!ok) { break; }
            ImVec2 arg2;
            ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "implot.ImPlot:Annotate");
            if (!ok) { break; }
            const char* arg3;
            std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp, "implot.ImPlot:Annotate"); arg3 = arg3_tmp.c_str();
            if (!ok) { break; }
            implot::ImPlot::Annotate(arg0, arg1, arg2, "%s", arg3);
            lua_settop(tolua_S, 1);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "implot.ImPlot:Annotate",argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_Annotate'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_AnnotateClamped(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 5)
        {
            double arg0;
            ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlot:AnnotateClamped");
            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:AnnotateClamped");
            if (!ok) { break; }
            ImVec2 arg2;
            ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "implot.ImPlot:AnnotateClamped");
            if (!ok) { break; }
            ImVec4 arg3;
            ok &= luaval_to_ImVec4(tolua_S, 5, &arg3, "implot.ImPlot:AnnotateClamped");
            if (!ok) { break; }
            const char* arg4;
            std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp, "implot.ImPlot:AnnotateClamped"); arg4 = arg4_tmp.c_str();
            if (!ok) { break; }
            implot::ImPlot::AnnotateClamped(arg0, arg1, arg2, arg3, "%s", arg4);
            lua_settop(tolua_S, 1);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 4)
        {
            double arg0;
            ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlot:AnnotateClamped");
            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:AnnotateClamped");
            if (!ok) { break; }
            ImVec2 arg2;
            ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "implot.ImPlot:AnnotateClamped");
            if (!ok) { break; }
            const char* arg3;
            std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp, "implot.ImPlot:AnnotateClamped"); arg3 = arg3_tmp.c_str();
            if (!ok) { break; }
            implot::ImPlot::AnnotateClamped(arg0, arg1, arg2, "%s", arg3);
            lua_settop(tolua_S, 1);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "implot.ImPlot:AnnotateClamped",argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_AnnotateClamped'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_BeginLegendDragDropSource(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "implot.ImPlot:BeginLegendDragDropSource"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_BeginLegendDragDropSource'", nullptr);
            return 0;
        }
        bool ret = implot::ImPlot::BeginLegendDragDropSource(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 2)
    {
        const char* arg0;
        int arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "implot.ImPlot:BeginLegendDragDropSource"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "implot.ImPlot:BeginLegendDragDropSource");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_BeginLegendDragDropSource'", nullptr);
            return 0;
        }
        bool ret = implot::ImPlot::BeginLegendDragDropSource(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:BeginLegendDragDropSource",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_BeginLegendDragDropSource'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_BeginLegendPopup(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "implot.ImPlot:BeginLegendPopup"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_BeginLegendPopup'", nullptr);
            return 0;
        }
        bool ret = implot::ImPlot::BeginLegendPopup(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 2)
    {
        const char* arg0;
        int arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "implot.ImPlot:BeginLegendPopup"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "implot.ImPlot:BeginLegendPopup");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_BeginLegendPopup'", nullptr);
            return 0;
        }
        bool ret = implot::ImPlot::BeginLegendPopup(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:BeginLegendPopup",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_BeginLegendPopup'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_EndLegendDragDropSource(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_EndLegendDragDropSource'", nullptr);
            return 0;
        }
        implot::ImPlot::EndLegendDragDropSource();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:EndLegendDragDropSource",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_EndLegendDragDropSource'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_EndLegendPopup(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_EndLegendPopup'", nullptr);
            return 0;
        }
        implot::ImPlot::EndLegendPopup();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:EndLegendPopup",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_EndLegendPopup'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_EndPlot(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_EndPlot'", nullptr);
            return 0;
        }
        implot::ImPlot::EndPlot();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:EndPlot",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_EndPlot'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_FitNextPlotAxes(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_FitNextPlotAxes'", nullptr);
            return 0;
        }
        implot::ImPlot::FitNextPlotAxes();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "implot.ImPlot:FitNextPlotAxes");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_FitNextPlotAxes'", nullptr);
            return 0;
        }
        implot::ImPlot::FitNextPlotAxes(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        bool arg0;
        bool arg1;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "implot.ImPlot:FitNextPlotAxes");
        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "implot.ImPlot:FitNextPlotAxes");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_FitNextPlotAxes'", nullptr);
            return 0;
        }
        implot::ImPlot::FitNextPlotAxes(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3)
    {
        bool arg0;
        bool arg1;
        bool arg2;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "implot.ImPlot:FitNextPlotAxes");
        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "implot.ImPlot:FitNextPlotAxes");
        ok &= luaval_to_boolean(tolua_S, 4,&arg2, "implot.ImPlot:FitNextPlotAxes");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_FitNextPlotAxes'", nullptr);
            return 0;
        }
        implot::ImPlot::FitNextPlotAxes(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 4)
    {
        bool arg0;
        bool arg1;
        bool arg2;
        bool arg3;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "implot.ImPlot:FitNextPlotAxes");
        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "implot.ImPlot:FitNextPlotAxes");
        ok &= luaval_to_boolean(tolua_S, 4,&arg2, "implot.ImPlot:FitNextPlotAxes");
        ok &= luaval_to_boolean(tolua_S, 5,&arg3, "implot.ImPlot:FitNextPlotAxes");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_FitNextPlotAxes'", nullptr);
            return 0;
        }
        implot::ImPlot::FitNextPlotAxes(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:FitNextPlotAxes",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_FitNextPlotAxes'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_GetColormapColor(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:GetColormapColor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_GetColormapColor'", nullptr);
            return 0;
        }
        ImVec4 ret = implot::ImPlot::GetColormapColor(arg0);
        ImVec4_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:GetColormapColor",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_GetColormapColor'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_GetColormapName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:GetColormapName");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_GetColormapName'", nullptr);
            return 0;
        }
        const char* ret = implot::ImPlot::GetColormapName(arg0);
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:GetColormapName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_GetColormapName'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_GetColormapSize(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_GetColormapSize'", nullptr);
            return 0;
        }
        int ret = implot::ImPlot::GetColormapSize();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:GetColormapSize",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_GetColormapSize'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_GetInputMap(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_GetInputMap'", nullptr);
            return 0;
        }
        implot::ImPlotInputMap& ret = implot::ImPlot::GetInputMap();
        native_to_luaval(tolua_S, &ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:GetInputMap",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_GetInputMap'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_GetLastItemColor(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_GetLastItemColor'", nullptr);
            return 0;
        }
        ImVec4 ret = implot::ImPlot::GetLastItemColor();
        ImVec4_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:GetLastItemColor",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_GetLastItemColor'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_GetMarkerName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:GetMarkerName");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_GetMarkerName'", nullptr);
            return 0;
        }
        const char* ret = implot::ImPlot::GetMarkerName(arg0);
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:GetMarkerName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_GetMarkerName'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_GetPlotDrawList(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_GetPlotDrawList'", nullptr);
            return 0;
        }
        ImDrawList* ret = implot::ImPlot::GetPlotDrawList();
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:GetPlotDrawList",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_GetPlotDrawList'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_GetPlotLimits(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_GetPlotLimits'", nullptr);
            return 0;
        }
        ImPlotLimits ret = implot::ImPlot::GetPlotLimits();
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:GetPlotLimits");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_GetPlotLimits'", nullptr);
            return 0;
        }
        ImPlotLimits ret = implot::ImPlot::GetPlotLimits(arg0);
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:GetPlotLimits",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_GetPlotLimits'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_GetPlotMousePos(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_GetPlotMousePos'", nullptr);
            return 0;
        }
        ImPlotPoint ret = implot::ImPlot::GetPlotMousePos();
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:GetPlotMousePos");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_GetPlotMousePos'", nullptr);
            return 0;
        }
        ImPlotPoint ret = implot::ImPlot::GetPlotMousePos(arg0);
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:GetPlotMousePos",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_GetPlotMousePos'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_GetPlotPos(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_GetPlotPos'", nullptr);
            return 0;
        }
        ImVec2 ret = implot::ImPlot::GetPlotPos();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:GetPlotPos",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_GetPlotPos'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_GetPlotQuery(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_GetPlotQuery'", nullptr);
            return 0;
        }
        ImPlotLimits ret = implot::ImPlot::GetPlotQuery();
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:GetPlotQuery");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_GetPlotQuery'", nullptr);
            return 0;
        }
        ImPlotLimits ret = implot::ImPlot::GetPlotQuery(arg0);
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:GetPlotQuery",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_GetPlotQuery'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_GetPlotSize(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_GetPlotSize'", nullptr);
            return 0;
        }
        ImVec2 ret = implot::ImPlot::GetPlotSize();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:GetPlotSize",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_GetPlotSize'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_GetStyle(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_GetStyle'", nullptr);
            return 0;
        }
        implot::ImPlotStyle& ret = implot::ImPlot::GetStyle();
        native_to_luaval(tolua_S, &ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:GetStyle",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_GetStyle'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_GetStyleColorName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:GetStyleColorName");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_GetStyleColorName'", nullptr);
            return 0;
        }
        const char* ret = implot::ImPlot::GetStyleColorName(arg0);
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:GetStyleColorName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_GetStyleColorName'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_HideNextItem(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_HideNextItem'", nullptr);
            return 0;
        }
        implot::ImPlot::HideNextItem();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "implot.ImPlot:HideNextItem");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_HideNextItem'", nullptr);
            return 0;
        }
        implot::ImPlot::HideNextItem(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        bool arg0;
        int arg1;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "implot.ImPlot:HideNextItem");
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "implot.ImPlot:HideNextItem");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_HideNextItem'", nullptr);
            return 0;
        }
        implot::ImPlot::HideNextItem(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:HideNextItem",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_HideNextItem'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_IsLegendEntryHovered(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "implot.ImPlot:IsLegendEntryHovered"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_IsLegendEntryHovered'", nullptr);
            return 0;
        }
        bool ret = implot::ImPlot::IsLegendEntryHovered(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:IsLegendEntryHovered",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_IsLegendEntryHovered'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_IsPlotHovered(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_IsPlotHovered'", nullptr);
            return 0;
        }
        bool ret = implot::ImPlot::IsPlotHovered();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:IsPlotHovered",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_IsPlotHovered'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_IsPlotQueried(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_IsPlotQueried'", nullptr);
            return 0;
        }
        bool ret = implot::ImPlot::IsPlotQueried();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:IsPlotQueried",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_IsPlotQueried'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_IsPlotXAxisHovered(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_IsPlotXAxisHovered'", nullptr);
            return 0;
        }
        bool ret = implot::ImPlot::IsPlotXAxisHovered();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:IsPlotXAxisHovered",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_IsPlotXAxisHovered'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_IsPlotYAxisHovered(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_IsPlotYAxisHovered'", nullptr);
            return 0;
        }
        bool ret = implot::ImPlot::IsPlotYAxisHovered();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:IsPlotYAxisHovered");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_IsPlotYAxisHovered'", nullptr);
            return 0;
        }
        bool ret = implot::ImPlot::IsPlotYAxisHovered(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:IsPlotYAxisHovered",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_IsPlotYAxisHovered'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_LerpColormap(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlot:LerpColormap");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_LerpColormap'", nullptr);
            return 0;
        }
        ImVec4 ret = implot::ImPlot::LerpColormap(arg0);
        ImVec4_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:LerpColormap",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_LerpColormap'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_NextColormapColor(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_NextColormapColor'", nullptr);
            return 0;
        }
        ImVec4 ret = implot::ImPlot::NextColormapColor();
        ImVec4_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:NextColormapColor",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_NextColormapColor'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_PixelsToPlot(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        double arg0;
        double arg1;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlot:PixelsToPlot");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:PixelsToPlot");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_PixelsToPlot'", nullptr);
            return 0;
        }
        ImPlotPoint ret = implot::ImPlot::PixelsToPlot(arg0, arg1);
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    if (argc == 3)
    {
        double arg0;
        double arg1;
        int arg2;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlot:PixelsToPlot");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:PixelsToPlot");
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "implot.ImPlot:PixelsToPlot");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_PixelsToPlot'", nullptr);
            return 0;
        }
        ImPlotPoint ret = implot::ImPlot::PixelsToPlot(arg0, arg1, arg2);
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:PixelsToPlot",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_PixelsToPlot'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_PlotDummy(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "implot.ImPlot:PlotDummy"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_PlotDummy'", nullptr);
            return 0;
        }
        implot::ImPlot::PlotDummy(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:PlotDummy",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_PlotDummy'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_PlotText(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 3)
    {
        const char* arg0;
        double arg1;
        double arg2;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "implot.ImPlot:PlotText"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:PlotText");
        ok &= luaval_to_number(tolua_S, 4,&arg2, "implot.ImPlot:PlotText");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_PlotText'", nullptr);
            return 0;
        }
        implot::ImPlot::PlotText(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 4)
    {
        const char* arg0;
        double arg1;
        double arg2;
        bool arg3;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "implot.ImPlot:PlotText"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:PlotText");
        ok &= luaval_to_number(tolua_S, 4,&arg2, "implot.ImPlot:PlotText");
        ok &= luaval_to_boolean(tolua_S, 5,&arg3, "implot.ImPlot:PlotText");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_PlotText'", nullptr);
            return 0;
        }
        implot::ImPlot::PlotText(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 5)
    {
        const char* arg0;
        double arg1;
        double arg2;
        bool arg3;
        ImVec2 arg4;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "implot.ImPlot:PlotText"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:PlotText");
        ok &= luaval_to_number(tolua_S, 4,&arg2, "implot.ImPlot:PlotText");
        ok &= luaval_to_boolean(tolua_S, 5,&arg3, "implot.ImPlot:PlotText");
        ok &= luaval_to_ImVec2(tolua_S, 6, &arg4, "implot.ImPlot:PlotText");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_PlotText'", nullptr);
            return 0;
        }
        implot::ImPlot::PlotText(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:PlotText",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_PlotText'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_PlotToPixels(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        double arg0;
        double arg1;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlot:PlotToPixels");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:PlotToPixels");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_PlotToPixels'", nullptr);
            return 0;
        }
        ImVec2 ret = implot::ImPlot::PlotToPixels(arg0, arg1);
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    if (argc == 3)
    {
        double arg0;
        double arg1;
        int arg2;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlot:PlotToPixels");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:PlotToPixels");
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "implot.ImPlot:PlotToPixels");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_PlotToPixels'", nullptr);
            return 0;
        }
        ImVec2 ret = implot::ImPlot::PlotToPixels(arg0, arg1, arg2);
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:PlotToPixels",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_PlotToPixels'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_PopColormap(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_PopColormap'", nullptr);
            return 0;
        }
        implot::ImPlot::PopColormap();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:PopColormap");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_PopColormap'", nullptr);
            return 0;
        }
        implot::ImPlot::PopColormap(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:PopColormap",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_PopColormap'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_PopPlotClipRect(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_PopPlotClipRect'", nullptr);
            return 0;
        }
        implot::ImPlot::PopPlotClipRect();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:PopPlotClipRect",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_PopPlotClipRect'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_PopStyleColor(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_PopStyleColor'", nullptr);
            return 0;
        }
        implot::ImPlot::PopStyleColor();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:PopStyleColor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_PopStyleColor'", nullptr);
            return 0;
        }
        implot::ImPlot::PopStyleColor(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:PopStyleColor",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_PopStyleColor'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_PopStyleVar(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_PopStyleVar'", nullptr);
            return 0;
        }
        implot::ImPlot::PopStyleVar();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:PopStyleVar");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_PopStyleVar'", nullptr);
            return 0;
        }
        implot::ImPlot::PopStyleVar(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:PopStyleVar",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_PopStyleVar'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_PushPlotClipRect(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_PushPlotClipRect'", nullptr);
            return 0;
        }
        implot::ImPlot::PushPlotClipRect();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:PushPlotClipRect",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_PushPlotClipRect'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_SetLegendLocation(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:SetLegendLocation");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetLegendLocation'", nullptr);
            return 0;
        }
        implot::ImPlot::SetLegendLocation(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        int arg0;
        int arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:SetLegendLocation");
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "implot.ImPlot:SetLegendLocation");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetLegendLocation'", nullptr);
            return 0;
        }
        implot::ImPlot::SetLegendLocation(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3)
    {
        int arg0;
        int arg1;
        bool arg2;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:SetLegendLocation");
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "implot.ImPlot:SetLegendLocation");
        ok &= luaval_to_boolean(tolua_S, 4,&arg2, "implot.ImPlot:SetLegendLocation");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetLegendLocation'", nullptr);
            return 0;
        }
        implot::ImPlot::SetLegendLocation(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:SetLegendLocation",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_SetLegendLocation'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_SetMousePosLocation(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:SetMousePosLocation");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetMousePosLocation'", nullptr);
            return 0;
        }
        implot::ImPlot::SetMousePosLocation(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:SetMousePosLocation",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_SetMousePosLocation'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_SetNextErrorBarStyle(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextErrorBarStyle'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextErrorBarStyle();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        ImVec4 arg0;
        ok &= luaval_to_ImVec4(tolua_S, 2, &arg0, "implot.ImPlot:SetNextErrorBarStyle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextErrorBarStyle'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextErrorBarStyle(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        ImVec4 arg0;
        double arg1;
        ok &= luaval_to_ImVec4(tolua_S, 2, &arg0, "implot.ImPlot:SetNextErrorBarStyle");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:SetNextErrorBarStyle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextErrorBarStyle'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextErrorBarStyle(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3)
    {
        ImVec4 arg0;
        double arg1;
        double arg2;
        ok &= luaval_to_ImVec4(tolua_S, 2, &arg0, "implot.ImPlot:SetNextErrorBarStyle");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:SetNextErrorBarStyle");
        ok &= luaval_to_number(tolua_S, 4,&arg2, "implot.ImPlot:SetNextErrorBarStyle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextErrorBarStyle'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextErrorBarStyle(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:SetNextErrorBarStyle",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_SetNextErrorBarStyle'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_SetNextFillStyle(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextFillStyle'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextFillStyle();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        ImVec4 arg0;
        ok &= luaval_to_ImVec4(tolua_S, 2, &arg0, "implot.ImPlot:SetNextFillStyle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextFillStyle'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextFillStyle(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        ImVec4 arg0;
        double arg1;
        ok &= luaval_to_ImVec4(tolua_S, 2, &arg0, "implot.ImPlot:SetNextFillStyle");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:SetNextFillStyle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextFillStyle'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextFillStyle(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:SetNextFillStyle",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_SetNextFillStyle'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_SetNextLineStyle(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextLineStyle'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextLineStyle();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        ImVec4 arg0;
        ok &= luaval_to_ImVec4(tolua_S, 2, &arg0, "implot.ImPlot:SetNextLineStyle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextLineStyle'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextLineStyle(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        ImVec4 arg0;
        double arg1;
        ok &= luaval_to_ImVec4(tolua_S, 2, &arg0, "implot.ImPlot:SetNextLineStyle");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:SetNextLineStyle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextLineStyle'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextLineStyle(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:SetNextLineStyle",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_SetNextLineStyle'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_SetNextMarkerStyle(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextMarkerStyle'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextMarkerStyle();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:SetNextMarkerStyle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextMarkerStyle'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextMarkerStyle(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        int arg0;
        double arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:SetNextMarkerStyle");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:SetNextMarkerStyle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextMarkerStyle'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextMarkerStyle(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3)
    {
        int arg0;
        double arg1;
        ImVec4 arg2;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:SetNextMarkerStyle");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:SetNextMarkerStyle");
        ok &= luaval_to_ImVec4(tolua_S, 4, &arg2, "implot.ImPlot:SetNextMarkerStyle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextMarkerStyle'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextMarkerStyle(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 4)
    {
        int arg0;
        double arg1;
        ImVec4 arg2;
        double arg3;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:SetNextMarkerStyle");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:SetNextMarkerStyle");
        ok &= luaval_to_ImVec4(tolua_S, 4, &arg2, "implot.ImPlot:SetNextMarkerStyle");
        ok &= luaval_to_number(tolua_S, 5,&arg3, "implot.ImPlot:SetNextMarkerStyle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextMarkerStyle'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextMarkerStyle(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 5)
    {
        int arg0;
        double arg1;
        ImVec4 arg2;
        double arg3;
        ImVec4 arg4;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:SetNextMarkerStyle");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:SetNextMarkerStyle");
        ok &= luaval_to_ImVec4(tolua_S, 4, &arg2, "implot.ImPlot:SetNextMarkerStyle");
        ok &= luaval_to_number(tolua_S, 5,&arg3, "implot.ImPlot:SetNextMarkerStyle");
        ok &= luaval_to_ImVec4(tolua_S, 6, &arg4, "implot.ImPlot:SetNextMarkerStyle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextMarkerStyle'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextMarkerStyle(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:SetNextMarkerStyle",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_SetNextMarkerStyle'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_SetNextPlotLimits(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 4)
    {
        double arg0;
        double arg1;
        double arg2;
        double arg3;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlot:SetNextPlotLimits");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:SetNextPlotLimits");
        ok &= luaval_to_number(tolua_S, 4,&arg2, "implot.ImPlot:SetNextPlotLimits");
        ok &= luaval_to_number(tolua_S, 5,&arg3, "implot.ImPlot:SetNextPlotLimits");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextPlotLimits'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextPlotLimits(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 5)
    {
        double arg0;
        double arg1;
        double arg2;
        double arg3;
        int arg4;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlot:SetNextPlotLimits");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:SetNextPlotLimits");
        ok &= luaval_to_number(tolua_S, 4,&arg2, "implot.ImPlot:SetNextPlotLimits");
        ok &= luaval_to_number(tolua_S, 5,&arg3, "implot.ImPlot:SetNextPlotLimits");
        ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4, "implot.ImPlot:SetNextPlotLimits");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextPlotLimits'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextPlotLimits(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:SetNextPlotLimits",argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_SetNextPlotLimits'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_SetNextPlotLimitsX(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        double arg0;
        double arg1;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlot:SetNextPlotLimitsX");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:SetNextPlotLimitsX");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextPlotLimitsX'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextPlotLimitsX(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3)
    {
        double arg0;
        double arg1;
        int arg2;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlot:SetNextPlotLimitsX");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:SetNextPlotLimitsX");
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "implot.ImPlot:SetNextPlotLimitsX");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextPlotLimitsX'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextPlotLimitsX(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:SetNextPlotLimitsX",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_SetNextPlotLimitsX'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_SetNextPlotLimitsY(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        double arg0;
        double arg1;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlot:SetNextPlotLimitsY");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:SetNextPlotLimitsY");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextPlotLimitsY'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextPlotLimitsY(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3)
    {
        double arg0;
        double arg1;
        int arg2;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlot:SetNextPlotLimitsY");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:SetNextPlotLimitsY");
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "implot.ImPlot:SetNextPlotLimitsY");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextPlotLimitsY'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextPlotLimitsY(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 4)
    {
        double arg0;
        double arg1;
        int arg2;
        int arg3;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlot:SetNextPlotLimitsY");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:SetNextPlotLimitsY");
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "implot.ImPlot:SetNextPlotLimitsY");
        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "implot.ImPlot:SetNextPlotLimitsY");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetNextPlotLimitsY'", nullptr);
            return 0;
        }
        implot::ImPlot::SetNextPlotLimitsY(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:SetNextPlotLimitsY",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_SetNextPlotLimitsY'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_SetPlotYAxis(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "implot.ImPlot:SetPlotYAxis");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_SetPlotYAxis'", nullptr);
            return 0;
        }
        implot::ImPlot::SetPlotYAxis(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:SetPlotYAxis",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_SetPlotYAxis'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_ShowColormapScale(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 3)
    {
        double arg0;
        double arg1;
        double arg2;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "implot.ImPlot:ShowColormapScale");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "implot.ImPlot:ShowColormapScale");
        ok &= luaval_to_number(tolua_S, 4,&arg2, "implot.ImPlot:ShowColormapScale");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_ShowColormapScale'", nullptr);
            return 0;
        }
        implot::ImPlot::ShowColormapScale(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:ShowColormapScale",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_ShowColormapScale'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_ShowColormapSelector(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "implot.ImPlot:ShowColormapSelector"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_ShowColormapSelector'", nullptr);
            return 0;
        }
        bool ret = implot::ImPlot::ShowColormapSelector(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:ShowColormapSelector",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_ShowColormapSelector'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_ShowStyleEditor(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_ShowStyleEditor'", nullptr);
            return 0;
        }
        implot::ImPlot::ShowStyleEditor();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:ShowStyleEditor",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_ShowStyleEditor'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_ShowStyleSelector(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "implot.ImPlot:ShowStyleSelector"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_ShowStyleSelector'", nullptr);
            return 0;
        }
        bool ret = implot::ImPlot::ShowStyleSelector(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:ShowStyleSelector",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_ShowStyleSelector'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_ShowUserGuide(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_ShowUserGuide'", nullptr);
            return 0;
        }
        implot::ImPlot::ShowUserGuide();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:ShowUserGuide",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_ShowUserGuide'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_StyleColorsAuto(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_StyleColorsAuto'", nullptr);
            return 0;
        }
        implot::ImPlot::StyleColorsAuto();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:StyleColorsAuto",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_StyleColorsAuto'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_StyleColorsClassic(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_StyleColorsClassic'", nullptr);
            return 0;
        }
        implot::ImPlot::StyleColorsClassic();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:StyleColorsClassic",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_StyleColorsClassic'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_StyleColorsDark(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_StyleColorsDark'", nullptr);
            return 0;
        }
        implot::ImPlot::StyleColorsDark();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:StyleColorsDark",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_StyleColorsDark'.",&tolua_err);
#endif
    return 0;
}
int lua_x_implot_ImPlot_StyleColorsLight(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"implot.ImPlot",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_StyleColorsLight'", nullptr);
            return 0;
        }
        implot::ImPlot::StyleColorsLight();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:StyleColorsLight",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_StyleColorsLight'.",&tolua_err);
#endif
    return 0;
}
static int lua_x_implot_ImPlot_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ImPlot)");
    return 0;
}

int lua_register_x_implot_ImPlot(lua_State* tolua_S)
{
    tolua_module(tolua_S, "_auto", 0);
    tolua_beginmodule(tolua_S,"_auto");
        tolua_function(tolua_S,"annotate", lua_x_implot_ImPlot_Annotate);
        tolua_function(tolua_S,"annotateClamped", lua_x_implot_ImPlot_AnnotateClamped);
        tolua_function(tolua_S,"beginLegendDragDropSource", lua_x_implot_ImPlot_BeginLegendDragDropSource);
        tolua_function(tolua_S,"beginLegendPopup", lua_x_implot_ImPlot_BeginLegendPopup);
        tolua_function(tolua_S,"endLegendDragDropSource", lua_x_implot_ImPlot_EndLegendDragDropSource);
        tolua_function(tolua_S,"endLegendPopup", lua_x_implot_ImPlot_EndLegendPopup);
        tolua_function(tolua_S,"endPlot", lua_x_implot_ImPlot_EndPlot);
        tolua_function(tolua_S,"fitNextPlotAxes", lua_x_implot_ImPlot_FitNextPlotAxes);
        tolua_function(tolua_S,"getColormapColor", lua_x_implot_ImPlot_GetColormapColor);
        tolua_function(tolua_S,"getColormapName", lua_x_implot_ImPlot_GetColormapName);
        tolua_function(tolua_S,"getColormapSize", lua_x_implot_ImPlot_GetColormapSize);
        tolua_function(tolua_S,"getInputMap", lua_x_implot_ImPlot_GetInputMap);
        tolua_function(tolua_S,"getLastItemColor", lua_x_implot_ImPlot_GetLastItemColor);
        tolua_function(tolua_S,"getMarkerName", lua_x_implot_ImPlot_GetMarkerName);
        tolua_function(tolua_S,"getPlotDrawList", lua_x_implot_ImPlot_GetPlotDrawList);
        tolua_function(tolua_S,"getPlotLimits", lua_x_implot_ImPlot_GetPlotLimits);
        tolua_function(tolua_S,"getPlotMousePos", lua_x_implot_ImPlot_GetPlotMousePos);
        tolua_function(tolua_S,"getPlotPos", lua_x_implot_ImPlot_GetPlotPos);
        tolua_function(tolua_S,"getPlotQuery", lua_x_implot_ImPlot_GetPlotQuery);
        tolua_function(tolua_S,"getPlotSize", lua_x_implot_ImPlot_GetPlotSize);
        tolua_function(tolua_S,"getStyle", lua_x_implot_ImPlot_GetStyle);
        tolua_function(tolua_S,"getStyleColorName", lua_x_implot_ImPlot_GetStyleColorName);
        tolua_function(tolua_S,"hideNextItem", lua_x_implot_ImPlot_HideNextItem);
        tolua_function(tolua_S,"isLegendEntryHovered", lua_x_implot_ImPlot_IsLegendEntryHovered);
        tolua_function(tolua_S,"isPlotHovered", lua_x_implot_ImPlot_IsPlotHovered);
        tolua_function(tolua_S,"isPlotQueried", lua_x_implot_ImPlot_IsPlotQueried);
        tolua_function(tolua_S,"isPlotXAxisHovered", lua_x_implot_ImPlot_IsPlotXAxisHovered);
        tolua_function(tolua_S,"isPlotYAxisHovered", lua_x_implot_ImPlot_IsPlotYAxisHovered);
        tolua_function(tolua_S,"lerpColormap", lua_x_implot_ImPlot_LerpColormap);
        tolua_function(tolua_S,"nextColormapColor", lua_x_implot_ImPlot_NextColormapColor);
        tolua_function(tolua_S,"pixelsToPlot", lua_x_implot_ImPlot_PixelsToPlot);
        tolua_function(tolua_S,"plotDummy", lua_x_implot_ImPlot_PlotDummy);
        tolua_function(tolua_S,"plotText", lua_x_implot_ImPlot_PlotText);
        tolua_function(tolua_S,"plotToPixels", lua_x_implot_ImPlot_PlotToPixels);
        tolua_function(tolua_S,"popColormap", lua_x_implot_ImPlot_PopColormap);
        tolua_function(tolua_S,"popPlotClipRect", lua_x_implot_ImPlot_PopPlotClipRect);
        tolua_function(tolua_S,"popStyleColor", lua_x_implot_ImPlot_PopStyleColor);
        tolua_function(tolua_S,"popStyleVar", lua_x_implot_ImPlot_PopStyleVar);
        tolua_function(tolua_S,"pushPlotClipRect", lua_x_implot_ImPlot_PushPlotClipRect);
        tolua_function(tolua_S,"setLegendLocation", lua_x_implot_ImPlot_SetLegendLocation);
        tolua_function(tolua_S,"setMousePosLocation", lua_x_implot_ImPlot_SetMousePosLocation);
        tolua_function(tolua_S,"setNextErrorBarStyle", lua_x_implot_ImPlot_SetNextErrorBarStyle);
        tolua_function(tolua_S,"setNextFillStyle", lua_x_implot_ImPlot_SetNextFillStyle);
        tolua_function(tolua_S,"setNextLineStyle", lua_x_implot_ImPlot_SetNextLineStyle);
        tolua_function(tolua_S,"setNextMarkerStyle", lua_x_implot_ImPlot_SetNextMarkerStyle);
        tolua_function(tolua_S,"setNextPlotLimits", lua_x_implot_ImPlot_SetNextPlotLimits);
        tolua_function(tolua_S,"setNextPlotLimitsX", lua_x_implot_ImPlot_SetNextPlotLimitsX);
        tolua_function(tolua_S,"setNextPlotLimitsY", lua_x_implot_ImPlot_SetNextPlotLimitsY);
        tolua_function(tolua_S,"setPlotYAxis", lua_x_implot_ImPlot_SetPlotYAxis);
        tolua_function(tolua_S,"showColormapScale", lua_x_implot_ImPlot_ShowColormapScale);
        tolua_function(tolua_S,"showColormapSelector", lua_x_implot_ImPlot_ShowColormapSelector);
        tolua_function(tolua_S,"showStyleEditor", lua_x_implot_ImPlot_ShowStyleEditor);
        tolua_function(tolua_S,"showStyleSelector", lua_x_implot_ImPlot_ShowStyleSelector);
        tolua_function(tolua_S,"showUserGuide", lua_x_implot_ImPlot_ShowUserGuide);
        tolua_function(tolua_S,"styleColorsAuto", lua_x_implot_ImPlot_StyleColorsAuto);
        tolua_function(tolua_S,"styleColorsClassic", lua_x_implot_ImPlot_StyleColorsClassic);
        tolua_function(tolua_S,"styleColorsDark", lua_x_implot_ImPlot_StyleColorsDark);
        tolua_function(tolua_S,"styleColorsLight", lua_x_implot_ImPlot_StyleColorsLight);
    tolua_endmodule(tolua_S);
    return 1;
}
TOLUA_API int register_all_x_implot(lua_State* tolua_S)
{
	tolua_open(tolua_S);

	tolua_module(tolua_S, "implot", 0);
	tolua_beginmodule(tolua_S, "implot");

	lua_register_x_implot_ImPlotStyleVar_(tolua_S);
	lua_register_x_implot_ImPlotCol_(tolua_S);
	lua_register_x_implot_ImPlotMarker_(tolua_S);
	lua_register_x_implot_ImPlotLocation_(tolua_S);
	lua_register_x_implot_ImPlotYAxis_(tolua_S);
	lua_register_x_implot_ImPlotColormap_(tolua_S);
	lua_register_x_implot_ImPlotFlags_(tolua_S);
	lua_register_x_implot_ImPlot(tolua_S);
	lua_register_x_implot_ImPlotInputMap(tolua_S);
	lua_register_x_implot_ImPlotAxisFlags_(tolua_S);
	lua_register_x_implot_ImPlotStyle(tolua_S);
	lua_register_x_implot_ImPlotOrientation_(tolua_S);

	tolua_endmodule(tolua_S);

    // make functions static
    luaL_dostring(tolua_S, R"__(
for k, v in pairs(implot._auto) do
    implot[k] = function(...)
        return v(nil, ...)
    end
end
)__");
    luaL_dostring(tolua_S, R"__(
implot.Flags = implot.ImPlotFlags
implot.AxisFlags = implot.ImPlotAxisFlags
implot.Col = implot.ImPlotCol
implot.StyleVar = implot.ImPlotStyleVar
implot.Marker = implot.ImPlotMarker
implot.Colormap = implot.ImPlotColormap
implot.Location = implot.ImPlotLocation
implot.Orientation = implot.ImPlotOrientation
implot.YAxis = implot.ImPlotYAxis
)__");

	return 1;
}

