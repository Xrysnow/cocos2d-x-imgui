#include "lua_implot_auto.hpp"
#include "../implot/implot.h"
#include "imgui_lua.hpp"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"

namespace implot
{
	namespace ImPlot
	{
	    using namespace ::ImPlot;
        using ImPlotFlags = ImPlotFlags_;
        using ImPlotAxisFlags = ImPlotAxisFlags_;
        using ImPlotCol = ImPlotCol_;
        using ImPlotStyleVar = ImPlotStyleVar_;
        using ImPlotMarker = ImPlotMarker_;
        using ImPlotColormap = ImPlotColormap_;
	}
    using ImPlotStyle = ImPlotStyle;
    using ImPlotInputMap = ImPlotInputMap;
}
using namespace lua;

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
        implot::ImPlotInputMap* ret = &implot::ImPlot::GetInputMap();
        native_to_luaval(tolua_S, ret);
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
        implot::ImPlotStyle* ret = &implot::ImPlot::GetStyle();
        native_to_luaval(tolua_S, ret);
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

    if (argc == 1)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "implot.ImPlot:PixelsToPlot");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_PixelsToPlot'", nullptr);
            return 0;
        }
        ImPlotPoint ret = implot::ImPlot::PixelsToPlot(arg0);
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    if (argc == 2)
    {
        ImVec2 arg0;
        int arg1;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "implot.ImPlot:PixelsToPlot");
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "implot.ImPlot:PixelsToPlot");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_PixelsToPlot'", nullptr);
            return 0;
        }
        ImPlotPoint ret = implot::ImPlot::PixelsToPlot(arg0, arg1);
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:PixelsToPlot",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_PixelsToPlot'.",&tolua_err);
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

    if (argc == 1)
    {
        ImPlotPoint arg0;
        ok &= luaval_to_native(tolua_S, 2, &arg0, "implot.ImPlot:PlotToPixels");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_PlotToPixels'", nullptr);
            return 0;
        }
        ImVec2 ret = implot::ImPlot::PlotToPixels(arg0);
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    if (argc == 2)
    {
        ImPlotPoint arg0;
        int arg1;
        ok &= luaval_to_native(tolua_S, 2, &arg0, "implot.ImPlot:PlotToPixels");
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "implot.ImPlot:PlotToPixels");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_implot_ImPlot_PlotToPixels'", nullptr);
            return 0;
        }
        ImVec2 ret = implot::ImPlot::PlotToPixels(arg0, arg1);
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "implot.ImPlot:PlotToPixels",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_implot_ImPlot_PlotToPixels'.",&tolua_err);
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
static int lua_x_implot_ImPlot_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ImPlot)");
    return 0;
}

int lua_register_x_implot_ImPlot(lua_State* tolua_S)
{
    tolua_module(tolua_S, "_auto", 0);
    tolua_beginmodule(tolua_S, "_auto");
        tolua_function(tolua_S,"getColormapSize", lua_x_implot_ImPlot_GetColormapSize);
        tolua_function(tolua_S,"plotText", lua_x_implot_ImPlot_PlotText);
        tolua_function(tolua_S,"popStyleVar", lua_x_implot_ImPlot_PopStyleVar);
        tolua_function(tolua_S,"endPlot", lua_x_implot_ImPlot_EndPlot);
        tolua_function(tolua_S,"showColormapScale", lua_x_implot_ImPlot_ShowColormapScale);
        tolua_function(tolua_S,"isPlotHovered", lua_x_implot_ImPlot_IsPlotHovered);
        tolua_function(tolua_S,"plotToPixels", lua_x_implot_ImPlot_PlotToPixels);
        tolua_function(tolua_S,"getColormapColor", lua_x_implot_ImPlot_GetColormapColor);
        tolua_function(tolua_S,"getPlotPos", lua_x_implot_ImPlot_GetPlotPos);
        tolua_function(tolua_S,"getPlotSize", lua_x_implot_ImPlot_GetPlotSize);
        tolua_function(tolua_S,"getPlotLimits", lua_x_implot_ImPlot_GetPlotLimits);
        tolua_function(tolua_S,"isPlotQueried", lua_x_implot_ImPlot_IsPlotQueried);
        tolua_function(tolua_S,"pushPlotClipRect", lua_x_implot_ImPlot_PushPlotClipRect);
        tolua_function(tolua_S,"pixelsToPlot", lua_x_implot_ImPlot_PixelsToPlot);
        tolua_function(tolua_S,"getPlotMousePos", lua_x_implot_ImPlot_GetPlotMousePos);
        tolua_function(tolua_S,"popStyleColor", lua_x_implot_ImPlot_PopStyleColor);
        tolua_function(tolua_S,"getPlotQuery", lua_x_implot_ImPlot_GetPlotQuery);
        tolua_function(tolua_S,"getInputMap", lua_x_implot_ImPlot_GetInputMap);
        tolua_function(tolua_S,"lerpColormap", lua_x_implot_ImPlot_LerpColormap);
        tolua_function(tolua_S,"setPlotYAxis", lua_x_implot_ImPlot_SetPlotYAxis);
        tolua_function(tolua_S,"getStyle", lua_x_implot_ImPlot_GetStyle);
        tolua_function(tolua_S,"setNextPlotLimits", lua_x_implot_ImPlot_SetNextPlotLimits);
        tolua_function(tolua_S,"setNextPlotLimitsX", lua_x_implot_ImPlot_SetNextPlotLimitsX);
        tolua_function(tolua_S,"setNextPlotLimitsY", lua_x_implot_ImPlot_SetNextPlotLimitsY);
        tolua_function(tolua_S,"popPlotClipRect", lua_x_implot_ImPlot_PopPlotClipRect);
    tolua_endmodule(tolua_S);
    {
        tolua_module(tolua_S, "ImPlotFlags", 0);
        tolua_beginmodule(tolua_S,"ImPlotFlags");
        {
            tolua_constant(tolua_S, "MousePos", (lua_Number)implot::ImPlot::ImPlotFlags::ImPlotFlags_MousePos);
            tolua_constant(tolua_S, "Legend", (lua_Number)implot::ImPlot::ImPlotFlags::ImPlotFlags_Legend);
            tolua_constant(tolua_S, "Highlight", (lua_Number)implot::ImPlot::ImPlotFlags::ImPlotFlags_Highlight);
            tolua_constant(tolua_S, "BoxSelect", (lua_Number)implot::ImPlot::ImPlotFlags::ImPlotFlags_BoxSelect);
            tolua_constant(tolua_S, "Query", (lua_Number)implot::ImPlot::ImPlotFlags::ImPlotFlags_Query);
            tolua_constant(tolua_S, "ContextMenu", (lua_Number)implot::ImPlot::ImPlotFlags::ImPlotFlags_ContextMenu);
            tolua_constant(tolua_S, "Crosshairs", (lua_Number)implot::ImPlot::ImPlotFlags::ImPlotFlags_Crosshairs);
            tolua_constant(tolua_S, "AntiAliased", (lua_Number)implot::ImPlot::ImPlotFlags::ImPlotFlags_AntiAliased);
            tolua_constant(tolua_S, "NoChild", (lua_Number)implot::ImPlot::ImPlotFlags::ImPlotFlags_NoChild);
            tolua_constant(tolua_S, "YAxis2", (lua_Number)implot::ImPlot::ImPlotFlags::ImPlotFlags_YAxis2);
            tolua_constant(tolua_S, "YAxis3", (lua_Number)implot::ImPlot::ImPlotFlags::ImPlotFlags_YAxis3);
            tolua_constant(tolua_S, "Default", (lua_Number)implot::ImPlot::ImPlotFlags::ImPlotFlags_Default);
        }
        tolua_endmodule(tolua_S);
    }
    {
        tolua_module(tolua_S, "ImPlotAxisFlags", 0);
        tolua_beginmodule(tolua_S,"ImPlotAxisFlags");
        {
            tolua_constant(tolua_S, "GridLines", (lua_Number)implot::ImPlot::ImPlotAxisFlags::ImPlotAxisFlags_GridLines);
            tolua_constant(tolua_S, "TickMarks", (lua_Number)implot::ImPlot::ImPlotAxisFlags::ImPlotAxisFlags_TickMarks);
            tolua_constant(tolua_S, "TickLabels", (lua_Number)implot::ImPlot::ImPlotAxisFlags::ImPlotAxisFlags_TickLabels);
            tolua_constant(tolua_S, "Invert", (lua_Number)implot::ImPlot::ImPlotAxisFlags::ImPlotAxisFlags_Invert);
            tolua_constant(tolua_S, "LockMin", (lua_Number)implot::ImPlot::ImPlotAxisFlags::ImPlotAxisFlags_LockMin);
            tolua_constant(tolua_S, "LockMax", (lua_Number)implot::ImPlot::ImPlotAxisFlags::ImPlotAxisFlags_LockMax);
            tolua_constant(tolua_S, "LogScale", (lua_Number)implot::ImPlot::ImPlotAxisFlags::ImPlotAxisFlags_LogScale);
            tolua_constant(tolua_S, "Scientific", (lua_Number)implot::ImPlot::ImPlotAxisFlags::ImPlotAxisFlags_Scientific);
            tolua_constant(tolua_S, "Default", (lua_Number)implot::ImPlot::ImPlotAxisFlags::ImPlotAxisFlags_Default);
            tolua_constant(tolua_S, "Auxiliary", (lua_Number)implot::ImPlot::ImPlotAxisFlags::ImPlotAxisFlags_Auxiliary);
        }
        tolua_endmodule(tolua_S);
    }
    {
        tolua_module(tolua_S, "ImPlotCol", 0);
        tolua_beginmodule(tolua_S,"ImPlotCol");
        {
            tolua_constant(tolua_S, "Line", (lua_Number)implot::ImPlot::ImPlotCol::ImPlotCol_Line);
            tolua_constant(tolua_S, "Fill", (lua_Number)implot::ImPlot::ImPlotCol::ImPlotCol_Fill);
            tolua_constant(tolua_S, "MarkerOutline", (lua_Number)implot::ImPlot::ImPlotCol::ImPlotCol_MarkerOutline);
            tolua_constant(tolua_S, "MarkerFill", (lua_Number)implot::ImPlot::ImPlotCol::ImPlotCol_MarkerFill);
            tolua_constant(tolua_S, "ErrorBar", (lua_Number)implot::ImPlot::ImPlotCol::ImPlotCol_ErrorBar);
            tolua_constant(tolua_S, "FrameBg", (lua_Number)implot::ImPlot::ImPlotCol::ImPlotCol_FrameBg);
            tolua_constant(tolua_S, "PlotBg", (lua_Number)implot::ImPlot::ImPlotCol::ImPlotCol_PlotBg);
            tolua_constant(tolua_S, "PlotBorder", (lua_Number)implot::ImPlot::ImPlotCol::ImPlotCol_PlotBorder);
            tolua_constant(tolua_S, "XAxis", (lua_Number)implot::ImPlot::ImPlotCol::ImPlotCol_XAxis);
            tolua_constant(tolua_S, "YAxis", (lua_Number)implot::ImPlot::ImPlotCol::ImPlotCol_YAxis);
            tolua_constant(tolua_S, "YAxis2", (lua_Number)implot::ImPlot::ImPlotCol::ImPlotCol_YAxis2);
            tolua_constant(tolua_S, "YAxis3", (lua_Number)implot::ImPlot::ImPlotCol::ImPlotCol_YAxis3);
            tolua_constant(tolua_S, "Selection", (lua_Number)implot::ImPlot::ImPlotCol::ImPlotCol_Selection);
            tolua_constant(tolua_S, "Query", (lua_Number)implot::ImPlot::ImPlotCol::ImPlotCol_Query);
            tolua_constant(tolua_S, "COUNT", (lua_Number)implot::ImPlot::ImPlotCol::ImPlotCol_COUNT);
        }
        tolua_endmodule(tolua_S);
    }
    {
        tolua_module(tolua_S, "ImPlotStyleVar", 0);
        tolua_beginmodule(tolua_S,"ImPlotStyleVar");
        {
            tolua_constant(tolua_S, "LineWeight", (lua_Number)implot::ImPlot::ImPlotStyleVar::ImPlotStyleVar_LineWeight);
            tolua_constant(tolua_S, "Marker", (lua_Number)implot::ImPlot::ImPlotStyleVar::ImPlotStyleVar_Marker);
            tolua_constant(tolua_S, "MarkerSize", (lua_Number)implot::ImPlot::ImPlotStyleVar::ImPlotStyleVar_MarkerSize);
            tolua_constant(tolua_S, "MarkerWeight", (lua_Number)implot::ImPlot::ImPlotStyleVar::ImPlotStyleVar_MarkerWeight);
            tolua_constant(tolua_S, "FillAlpha", (lua_Number)implot::ImPlot::ImPlotStyleVar::ImPlotStyleVar_FillAlpha);
            tolua_constant(tolua_S, "ErrorBarSize", (lua_Number)implot::ImPlot::ImPlotStyleVar::ImPlotStyleVar_ErrorBarSize);
            tolua_constant(tolua_S, "ErrorBarWeight", (lua_Number)implot::ImPlot::ImPlotStyleVar::ImPlotStyleVar_ErrorBarWeight);
            tolua_constant(tolua_S, "DigitalBitHeight", (lua_Number)implot::ImPlot::ImPlotStyleVar::ImPlotStyleVar_DigitalBitHeight);
            tolua_constant(tolua_S, "DigitalBitGap", (lua_Number)implot::ImPlot::ImPlotStyleVar::ImPlotStyleVar_DigitalBitGap);
            tolua_constant(tolua_S, "COUNT", (lua_Number)implot::ImPlot::ImPlotStyleVar::ImPlotStyleVar_COUNT);
        }
        tolua_endmodule(tolua_S);
    }
    {
        tolua_module(tolua_S, "ImPlotMarker", 0);
        tolua_beginmodule(tolua_S,"ImPlotMarker");
        {
            tolua_constant(tolua_S, "None", (lua_Number)implot::ImPlot::ImPlotMarker::ImPlotMarker_None);
            tolua_constant(tolua_S, "Circle", (lua_Number)implot::ImPlot::ImPlotMarker::ImPlotMarker_Circle);
            tolua_constant(tolua_S, "Square", (lua_Number)implot::ImPlot::ImPlotMarker::ImPlotMarker_Square);
            tolua_constant(tolua_S, "Diamond", (lua_Number)implot::ImPlot::ImPlotMarker::ImPlotMarker_Diamond);
            tolua_constant(tolua_S, "Up", (lua_Number)implot::ImPlot::ImPlotMarker::ImPlotMarker_Up);
            tolua_constant(tolua_S, "Down", (lua_Number)implot::ImPlot::ImPlotMarker::ImPlotMarker_Down);
            tolua_constant(tolua_S, "Left", (lua_Number)implot::ImPlot::ImPlotMarker::ImPlotMarker_Left);
            tolua_constant(tolua_S, "Right", (lua_Number)implot::ImPlot::ImPlotMarker::ImPlotMarker_Right);
            tolua_constant(tolua_S, "Cross", (lua_Number)implot::ImPlot::ImPlotMarker::ImPlotMarker_Cross);
            tolua_constant(tolua_S, "Plus", (lua_Number)implot::ImPlot::ImPlotMarker::ImPlotMarker_Plus);
            tolua_constant(tolua_S, "Asterisk", (lua_Number)implot::ImPlot::ImPlotMarker::ImPlotMarker_Asterisk);
        }
        tolua_endmodule(tolua_S);
    }
    {
        tolua_module(tolua_S, "ImPlotColormap", 0);
        tolua_beginmodule(tolua_S,"ImPlotColormap");
        {
            tolua_constant(tolua_S, "Default", (lua_Number)implot::ImPlot::ImPlotColormap::ImPlotColormap_Default);
            tolua_constant(tolua_S, "Dark", (lua_Number)implot::ImPlot::ImPlotColormap::ImPlotColormap_Dark);
            tolua_constant(tolua_S, "Pastel", (lua_Number)implot::ImPlot::ImPlotColormap::ImPlotColormap_Pastel);
            tolua_constant(tolua_S, "Paired", (lua_Number)implot::ImPlot::ImPlotColormap::ImPlotColormap_Paired);
            tolua_constant(tolua_S, "Viridis", (lua_Number)implot::ImPlot::ImPlotColormap::ImPlotColormap_Viridis);
            tolua_constant(tolua_S, "Plasma", (lua_Number)implot::ImPlot::ImPlotColormap::ImPlotColormap_Plasma);
            tolua_constant(tolua_S, "Hot", (lua_Number)implot::ImPlot::ImPlotColormap::ImPlotColormap_Hot);
            tolua_constant(tolua_S, "Cool", (lua_Number)implot::ImPlot::ImPlotColormap::ImPlotColormap_Cool);
            tolua_constant(tolua_S, "Pink", (lua_Number)implot::ImPlot::ImPlotColormap::ImPlotColormap_Pink);
            tolua_constant(tolua_S, "Jet", (lua_Number)implot::ImPlot::ImPlotColormap::ImPlotColormap_Jet);
            tolua_constant(tolua_S, "COUNT", (lua_Number)implot::ImPlot::ImPlotColormap::ImPlotColormap_COUNT);
        }
        tolua_endmodule(tolua_S);
    }
    return 1;
}
TOLUA_API int register_all_x_implot(lua_State* tolua_S)
{
	tolua_open(tolua_S);

	tolua_module(tolua_S, "implot", 0);
	tolua_beginmodule(tolua_S, "implot");

	lua_register_x_implot_ImPlotStyle(tolua_S);
	lua_register_x_implot_ImPlot(tolua_S);
	lua_register_x_implot_ImPlotInputMap(tolua_S);

	tolua_endmodule(tolua_S);

    // make functions static
    luaL_dostring(tolua_S, R"__(
for k, v in pairs(implot._auto) do
    implot[k] = function(...)
        return v(nil, ...)
    end
end
)__");
    luaL_dostring(tolua_S, R"__(implot.Flags = implot.ImPlotFlags)__");
    luaL_dostring(tolua_S, R"__(implot.AxisFlags = implot.ImPlotAxisFlags)__");
    luaL_dostring(tolua_S, R"__(implot.Col = implot.ImPlotCol)__");
    luaL_dostring(tolua_S, R"__(implot.StyleVar = implot.ImPlotStyleVar)__");
    luaL_dostring(tolua_S, R"__(implot.Marker = implot.ImPlotMarker)__");
    luaL_dostring(tolua_S, R"__(implot.Colormap = implot.ImPlotColormap)__");

	return 1;
}

