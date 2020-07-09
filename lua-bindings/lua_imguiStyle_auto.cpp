#include "lua_imguiStyle_auto.hpp"
#include "imgui_lua.hpp"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"

#ifdef COCOS2D_DEBUG
#undef COCOS2D_DEBUG
#endif // COCOS2D_DEBUG
namespace imgui
{
    using ImGuiStyle = ImGuiStyle;
}

int lua_x_imguiStyle_ImGuiStyle_ScaleAllSizes(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiStyle",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_ScaleAllSizes'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:ScaleAllSizes");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle_ScaleAllSizes'", nullptr);
            return 0;
        }
        cobj->ScaleAllSizes(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:ScaleAllSizes", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiStyle_ImGuiStyle_ScaleAllSizes'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getAlpha(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getAlpha'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->Alpha);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getAlpha'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setAlpha(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setAlpha'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:Alpha");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->Alpha = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:Alpha", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getAlpha'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getWindowPadding(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getWindowPadding'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->WindowPadding);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getWindowPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setWindowPadding(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setWindowPadding'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGuiStyle:WindowPadding");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->WindowPadding = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:WindowPadding", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getWindowPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getWindowRounding(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getWindowRounding'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->WindowRounding);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getWindowRounding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setWindowRounding(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setWindowRounding'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:WindowRounding");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->WindowRounding = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:WindowRounding", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getWindowRounding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getWindowBorderSize(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getWindowBorderSize'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->WindowBorderSize);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getWindowBorderSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setWindowBorderSize(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setWindowBorderSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:WindowBorderSize");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->WindowBorderSize = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:WindowBorderSize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getWindowBorderSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getWindowMinSize(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getWindowMinSize'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->WindowMinSize);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getWindowMinSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setWindowMinSize(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setWindowMinSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGuiStyle:WindowMinSize");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->WindowMinSize = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:WindowMinSize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getWindowMinSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getWindowTitleAlign(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getWindowTitleAlign'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->WindowTitleAlign);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getWindowTitleAlign'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setWindowTitleAlign(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setWindowTitleAlign'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGuiStyle:WindowTitleAlign");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->WindowTitleAlign = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:WindowTitleAlign", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getWindowTitleAlign'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getChildRounding(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getChildRounding'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->ChildRounding);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getChildRounding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setChildRounding(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setChildRounding'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:ChildRounding");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->ChildRounding = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:ChildRounding", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getChildRounding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getChildBorderSize(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getChildBorderSize'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->ChildBorderSize);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getChildBorderSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setChildBorderSize(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setChildBorderSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:ChildBorderSize");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->ChildBorderSize = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:ChildBorderSize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getChildBorderSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getPopupRounding(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getPopupRounding'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->PopupRounding);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getPopupRounding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setPopupRounding(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setPopupRounding'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:PopupRounding");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->PopupRounding = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:PopupRounding", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getPopupRounding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getPopupBorderSize(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getPopupBorderSize'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->PopupBorderSize);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getPopupBorderSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setPopupBorderSize(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setPopupBorderSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:PopupBorderSize");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->PopupBorderSize = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:PopupBorderSize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getPopupBorderSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getFramePadding(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getFramePadding'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->FramePadding);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getFramePadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setFramePadding(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setFramePadding'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGuiStyle:FramePadding");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->FramePadding = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:FramePadding", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getFramePadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getFrameRounding(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getFrameRounding'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->FrameRounding);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getFrameRounding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setFrameRounding(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setFrameRounding'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:FrameRounding");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->FrameRounding = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:FrameRounding", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getFrameRounding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getFrameBorderSize(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getFrameBorderSize'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->FrameBorderSize);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getFrameBorderSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setFrameBorderSize(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setFrameBorderSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:FrameBorderSize");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->FrameBorderSize = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:FrameBorderSize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getFrameBorderSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getItemSpacing(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getItemSpacing'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->ItemSpacing);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getItemSpacing'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setItemSpacing(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setItemSpacing'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGuiStyle:ItemSpacing");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->ItemSpacing = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:ItemSpacing", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getItemSpacing'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getItemInnerSpacing(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getItemInnerSpacing'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->ItemInnerSpacing);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getItemInnerSpacing'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setItemInnerSpacing(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setItemInnerSpacing'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGuiStyle:ItemInnerSpacing");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->ItemInnerSpacing = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:ItemInnerSpacing", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getItemInnerSpacing'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getTouchExtraPadding(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getTouchExtraPadding'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->TouchExtraPadding);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getTouchExtraPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setTouchExtraPadding(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setTouchExtraPadding'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGuiStyle:TouchExtraPadding");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->TouchExtraPadding = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:TouchExtraPadding", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getTouchExtraPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getIndentSpacing(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getIndentSpacing'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->IndentSpacing);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getIndentSpacing'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setIndentSpacing(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setIndentSpacing'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:IndentSpacing");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->IndentSpacing = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:IndentSpacing", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getIndentSpacing'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getColumnsMinSpacing(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getColumnsMinSpacing'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->ColumnsMinSpacing);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getColumnsMinSpacing'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setColumnsMinSpacing(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setColumnsMinSpacing'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:ColumnsMinSpacing");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->ColumnsMinSpacing = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:ColumnsMinSpacing", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getColumnsMinSpacing'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getScrollbarSize(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getScrollbarSize'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->ScrollbarSize);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getScrollbarSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setScrollbarSize(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setScrollbarSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:ScrollbarSize");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->ScrollbarSize = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:ScrollbarSize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getScrollbarSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getScrollbarRounding(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getScrollbarRounding'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->ScrollbarRounding);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getScrollbarRounding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setScrollbarRounding(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setScrollbarRounding'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:ScrollbarRounding");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->ScrollbarRounding = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:ScrollbarRounding", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getScrollbarRounding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getGrabMinSize(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getGrabMinSize'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->GrabMinSize);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getGrabMinSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setGrabMinSize(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setGrabMinSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:GrabMinSize");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->GrabMinSize = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:GrabMinSize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getGrabMinSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getGrabRounding(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getGrabRounding'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->GrabRounding);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getGrabRounding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setGrabRounding(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setGrabRounding'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:GrabRounding");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->GrabRounding = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:GrabRounding", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getGrabRounding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getTabRounding(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getTabRounding'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->TabRounding);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getTabRounding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setTabRounding(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setTabRounding'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:TabRounding");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->TabRounding = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:TabRounding", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getTabRounding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getTabBorderSize(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getTabBorderSize'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->TabBorderSize);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getTabBorderSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setTabBorderSize(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setTabBorderSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:TabBorderSize");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->TabBorderSize = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:TabBorderSize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getTabBorderSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getButtonTextAlign(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getButtonTextAlign'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->ButtonTextAlign);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getButtonTextAlign'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setButtonTextAlign(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setButtonTextAlign'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGuiStyle:ButtonTextAlign");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->ButtonTextAlign = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:ButtonTextAlign", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getButtonTextAlign'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getSelectableTextAlign(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getSelectableTextAlign'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->SelectableTextAlign);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getSelectableTextAlign'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setSelectableTextAlign(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setSelectableTextAlign'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGuiStyle:SelectableTextAlign");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->SelectableTextAlign = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:SelectableTextAlign", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getSelectableTextAlign'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getDisplayWindowPadding(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getDisplayWindowPadding'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->DisplayWindowPadding);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getDisplayWindowPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setDisplayWindowPadding(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setDisplayWindowPadding'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGuiStyle:DisplayWindowPadding");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->DisplayWindowPadding = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:DisplayWindowPadding", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getDisplayWindowPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getDisplaySafeAreaPadding(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getDisplaySafeAreaPadding'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->DisplaySafeAreaPadding);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getDisplaySafeAreaPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setDisplaySafeAreaPadding(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setDisplaySafeAreaPadding'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGuiStyle:DisplaySafeAreaPadding");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->DisplaySafeAreaPadding = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:DisplaySafeAreaPadding", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getDisplaySafeAreaPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getMouseCursorScale(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getMouseCursorScale'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->MouseCursorScale);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getMouseCursorScale'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setMouseCursorScale(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setMouseCursorScale'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:MouseCursorScale");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->MouseCursorScale = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:MouseCursorScale", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getMouseCursorScale'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getAntiAliasedLines(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getAntiAliasedLines'", nullptr);
        return 0;
    }
#endif
    tolua_pushboolean(tolua_S,(bool)cobj->AntiAliasedLines);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getAntiAliasedLines'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setAntiAliasedLines(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setAntiAliasedLines'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiStyle:AntiAliasedLines");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->AntiAliasedLines = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:AntiAliasedLines", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getAntiAliasedLines'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getAntiAliasedFill(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getAntiAliasedFill'", nullptr);
        return 0;
    }
#endif
    tolua_pushboolean(tolua_S,(bool)cobj->AntiAliasedFill);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getAntiAliasedFill'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setAntiAliasedFill(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setAntiAliasedFill'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiStyle:AntiAliasedFill");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->AntiAliasedFill = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:AntiAliasedFill", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getAntiAliasedFill'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getCurveTessellationTol(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getCurveTessellationTol'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->CurveTessellationTol);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getCurveTessellationTol'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setCurveTessellationTol(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setCurveTessellationTol'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:CurveTessellationTol");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->CurveTessellationTol = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:CurveTessellationTol", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getCurveTessellationTol'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getWindowMenuButtonPosition(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getWindowMenuButtonPosition'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->WindowMenuButtonPosition);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getWindowMenuButtonPosition'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setWindowMenuButtonPosition(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setWindowMenuButtonPosition'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGuiStyle:WindowMenuButtonPosition");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->WindowMenuButtonPosition = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:WindowMenuButtonPosition", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getWindowMenuButtonPosition'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getColorButtonPosition(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getColorButtonPosition'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->ColorButtonPosition);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getColorButtonPosition'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setColorButtonPosition(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setColorButtonPosition'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGuiStyle:ColorButtonPosition");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->ColorButtonPosition = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:ColorButtonPosition", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getColorButtonPosition'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_getCircleSegmentMaxError(lua_State* tolua_S)
{
    imgui::ImGuiStyle* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_getCircleSegmentMaxError'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->CircleSegmentMaxError);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getCircleSegmentMaxError'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiStyle_ImGuiStyle_setCircleSegmentMaxError(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiStyle* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiStyle", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiStyle_ImGuiStyle_setCircleSegmentMaxError'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiStyle:CircleSegmentMaxError");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiStyle_ImGuiStyle'", nullptr);
            return 0;
        }
        cobj->CircleSegmentMaxError = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiStyle:CircleSegmentMaxError", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiStyle_ImGuiStyle_getCircleSegmentMaxError'.", &tolua_err);
    return 0;
#endif
}
static int lua_x_imguiStyle_ImGuiStyle_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ImGuiStyle)");
    return 0;
}

int lua_register_x_imguiStyle_ImGuiStyle(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"imgui.ImGuiStyle");
    tolua_cclass(tolua_S,"ImGuiStyle","imgui.ImGuiStyle","",nullptr);

    tolua_beginmodule(tolua_S,"ImGuiStyle");
        tolua_function(tolua_S,"scaleAllSizes",lua_x_imguiStyle_ImGuiStyle_ScaleAllSizes);
        tolua_variable(tolua_S,"Alpha", lua_x_imguiStyle_ImGuiStyle_getAlpha, lua_x_imguiStyle_ImGuiStyle_setAlpha);
        tolua_variable(tolua_S,"WindowPadding", lua_x_imguiStyle_ImGuiStyle_getWindowPadding, lua_x_imguiStyle_ImGuiStyle_setWindowPadding);
        tolua_variable(tolua_S,"WindowRounding", lua_x_imguiStyle_ImGuiStyle_getWindowRounding, lua_x_imguiStyle_ImGuiStyle_setWindowRounding);
        tolua_variable(tolua_S,"WindowBorderSize", lua_x_imguiStyle_ImGuiStyle_getWindowBorderSize, lua_x_imguiStyle_ImGuiStyle_setWindowBorderSize);
        tolua_variable(tolua_S,"WindowMinSize", lua_x_imguiStyle_ImGuiStyle_getWindowMinSize, lua_x_imguiStyle_ImGuiStyle_setWindowMinSize);
        tolua_variable(tolua_S,"WindowTitleAlign", lua_x_imguiStyle_ImGuiStyle_getWindowTitleAlign, lua_x_imguiStyle_ImGuiStyle_setWindowTitleAlign);
        tolua_variable(tolua_S,"ChildRounding", lua_x_imguiStyle_ImGuiStyle_getChildRounding, lua_x_imguiStyle_ImGuiStyle_setChildRounding);
        tolua_variable(tolua_S,"ChildBorderSize", lua_x_imguiStyle_ImGuiStyle_getChildBorderSize, lua_x_imguiStyle_ImGuiStyle_setChildBorderSize);
        tolua_variable(tolua_S,"PopupRounding", lua_x_imguiStyle_ImGuiStyle_getPopupRounding, lua_x_imguiStyle_ImGuiStyle_setPopupRounding);
        tolua_variable(tolua_S,"PopupBorderSize", lua_x_imguiStyle_ImGuiStyle_getPopupBorderSize, lua_x_imguiStyle_ImGuiStyle_setPopupBorderSize);
        tolua_variable(tolua_S,"FramePadding", lua_x_imguiStyle_ImGuiStyle_getFramePadding, lua_x_imguiStyle_ImGuiStyle_setFramePadding);
        tolua_variable(tolua_S,"FrameRounding", lua_x_imguiStyle_ImGuiStyle_getFrameRounding, lua_x_imguiStyle_ImGuiStyle_setFrameRounding);
        tolua_variable(tolua_S,"FrameBorderSize", lua_x_imguiStyle_ImGuiStyle_getFrameBorderSize, lua_x_imguiStyle_ImGuiStyle_setFrameBorderSize);
        tolua_variable(tolua_S,"ItemSpacing", lua_x_imguiStyle_ImGuiStyle_getItemSpacing, lua_x_imguiStyle_ImGuiStyle_setItemSpacing);
        tolua_variable(tolua_S,"ItemInnerSpacing", lua_x_imguiStyle_ImGuiStyle_getItemInnerSpacing, lua_x_imguiStyle_ImGuiStyle_setItemInnerSpacing);
        tolua_variable(tolua_S,"TouchExtraPadding", lua_x_imguiStyle_ImGuiStyle_getTouchExtraPadding, lua_x_imguiStyle_ImGuiStyle_setTouchExtraPadding);
        tolua_variable(tolua_S,"IndentSpacing", lua_x_imguiStyle_ImGuiStyle_getIndentSpacing, lua_x_imguiStyle_ImGuiStyle_setIndentSpacing);
        tolua_variable(tolua_S,"ColumnsMinSpacing", lua_x_imguiStyle_ImGuiStyle_getColumnsMinSpacing, lua_x_imguiStyle_ImGuiStyle_setColumnsMinSpacing);
        tolua_variable(tolua_S,"ScrollbarSize", lua_x_imguiStyle_ImGuiStyle_getScrollbarSize, lua_x_imguiStyle_ImGuiStyle_setScrollbarSize);
        tolua_variable(tolua_S,"ScrollbarRounding", lua_x_imguiStyle_ImGuiStyle_getScrollbarRounding, lua_x_imguiStyle_ImGuiStyle_setScrollbarRounding);
        tolua_variable(tolua_S,"GrabMinSize", lua_x_imguiStyle_ImGuiStyle_getGrabMinSize, lua_x_imguiStyle_ImGuiStyle_setGrabMinSize);
        tolua_variable(tolua_S,"GrabRounding", lua_x_imguiStyle_ImGuiStyle_getGrabRounding, lua_x_imguiStyle_ImGuiStyle_setGrabRounding);
        tolua_variable(tolua_S,"TabRounding", lua_x_imguiStyle_ImGuiStyle_getTabRounding, lua_x_imguiStyle_ImGuiStyle_setTabRounding);
        tolua_variable(tolua_S,"TabBorderSize", lua_x_imguiStyle_ImGuiStyle_getTabBorderSize, lua_x_imguiStyle_ImGuiStyle_setTabBorderSize);
        tolua_variable(tolua_S,"ButtonTextAlign", lua_x_imguiStyle_ImGuiStyle_getButtonTextAlign, lua_x_imguiStyle_ImGuiStyle_setButtonTextAlign);
        tolua_variable(tolua_S,"SelectableTextAlign", lua_x_imguiStyle_ImGuiStyle_getSelectableTextAlign, lua_x_imguiStyle_ImGuiStyle_setSelectableTextAlign);
        tolua_variable(tolua_S,"DisplayWindowPadding", lua_x_imguiStyle_ImGuiStyle_getDisplayWindowPadding, lua_x_imguiStyle_ImGuiStyle_setDisplayWindowPadding);
        tolua_variable(tolua_S,"DisplaySafeAreaPadding", lua_x_imguiStyle_ImGuiStyle_getDisplaySafeAreaPadding, lua_x_imguiStyle_ImGuiStyle_setDisplaySafeAreaPadding);
        tolua_variable(tolua_S,"MouseCursorScale", lua_x_imguiStyle_ImGuiStyle_getMouseCursorScale, lua_x_imguiStyle_ImGuiStyle_setMouseCursorScale);
        tolua_variable(tolua_S,"AntiAliasedLines", lua_x_imguiStyle_ImGuiStyle_getAntiAliasedLines, lua_x_imguiStyle_ImGuiStyle_setAntiAliasedLines);
        tolua_variable(tolua_S,"AntiAliasedFill", lua_x_imguiStyle_ImGuiStyle_getAntiAliasedFill, lua_x_imguiStyle_ImGuiStyle_setAntiAliasedFill);
        tolua_variable(tolua_S,"CurveTessellationTol", lua_x_imguiStyle_ImGuiStyle_getCurveTessellationTol, lua_x_imguiStyle_ImGuiStyle_setCurveTessellationTol);
        tolua_variable(tolua_S,"WindowMenuButtonPosition", lua_x_imguiStyle_ImGuiStyle_getWindowMenuButtonPosition, lua_x_imguiStyle_ImGuiStyle_setWindowMenuButtonPosition);
        tolua_variable(tolua_S,"ColorButtonPosition", lua_x_imguiStyle_ImGuiStyle_getColorButtonPosition, lua_x_imguiStyle_ImGuiStyle_setColorButtonPosition);
        tolua_variable(tolua_S,"CircleSegmentMaxError", lua_x_imguiStyle_ImGuiStyle_getCircleSegmentMaxError, lua_x_imguiStyle_ImGuiStyle_setCircleSegmentMaxError);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(imgui::ImGuiStyle).name();
    g_luaType[typeName] = "imgui.ImGuiStyle";
    g_typeCast["ImGuiStyle"] = "imgui.ImGuiStyle";
    return 1;
}
TOLUA_API int register_all_x_imguiStyle(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"imgui",0);
	tolua_beginmodule(tolua_S,"imgui");

	lua_register_x_imguiStyle_ImGuiStyle(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

