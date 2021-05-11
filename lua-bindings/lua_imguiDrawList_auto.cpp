#include "lua_imguiDrawList_auto.hpp"
#include "imgui_lua.hpp"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"

#ifdef COCOS2D_DEBUG
#undef COCOS2D_DEBUG
#endif
#define COCOS2D_DEBUG 0
namespace imgui
{
    using ImDrawList = ImDrawList;
}
using namespace lua;

int lua_x_imguiDrawList_ImDrawList_AddBezierCubic(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddBezierCubic'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 6) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        ImVec2 arg3;
        unsigned int arg4;
        double arg5;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddBezierCubic");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddBezierCubic");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:AddBezierCubic");

        ok &= luaval_to_ImVec2(tolua_S, 5, &arg3, "imgui.ImDrawList:AddBezierCubic");

        ok &= luaval_to_uint32(tolua_S, 6,&arg4, "imgui.ImDrawList:AddBezierCubic");

        ok &= luaval_to_number(tolua_S, 7,&arg5, "imgui.ImDrawList:AddBezierCubic");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddBezierCubic'", nullptr);
            return 0;
        }
        cobj->AddBezierCubic(arg0, arg1, arg2, arg3, arg4, arg5);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 7) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        ImVec2 arg3;
        unsigned int arg4;
        double arg5;
        int arg6;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddBezierCubic");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddBezierCubic");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:AddBezierCubic");

        ok &= luaval_to_ImVec2(tolua_S, 5, &arg3, "imgui.ImDrawList:AddBezierCubic");

        ok &= luaval_to_uint32(tolua_S, 6,&arg4, "imgui.ImDrawList:AddBezierCubic");

        ok &= luaval_to_number(tolua_S, 7,&arg5, "imgui.ImDrawList:AddBezierCubic");

        ok &= luaval_to_int32(tolua_S, 8,(int *)&arg6, "imgui.ImDrawList:AddBezierCubic");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddBezierCubic'", nullptr);
            return 0;
        }
        cobj->AddBezierCubic(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddBezierCubic", argc, 6);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddBezierCubic'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_AddBezierQuadratic(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddBezierQuadratic'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 5) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        unsigned int arg3;
        double arg4;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddBezierQuadratic");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddBezierQuadratic");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:AddBezierQuadratic");

        ok &= luaval_to_uint32(tolua_S, 5,&arg3, "imgui.ImDrawList:AddBezierQuadratic");

        ok &= luaval_to_number(tolua_S, 6,&arg4, "imgui.ImDrawList:AddBezierQuadratic");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddBezierQuadratic'", nullptr);
            return 0;
        }
        cobj->AddBezierQuadratic(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 6) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        unsigned int arg3;
        double arg4;
        int arg5;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddBezierQuadratic");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddBezierQuadratic");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:AddBezierQuadratic");

        ok &= luaval_to_uint32(tolua_S, 5,&arg3, "imgui.ImDrawList:AddBezierQuadratic");

        ok &= luaval_to_number(tolua_S, 6,&arg4, "imgui.ImDrawList:AddBezierQuadratic");

        ok &= luaval_to_int32(tolua_S, 7,(int *)&arg5, "imgui.ImDrawList:AddBezierQuadratic");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddBezierQuadratic'", nullptr);
            return 0;
        }
        cobj->AddBezierQuadratic(arg0, arg1, arg2, arg3, arg4, arg5);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddBezierQuadratic", argc, 5);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddBezierQuadratic'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_AddCircle(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddCircle'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 3) 
    {
        ImVec2 arg0;
        double arg1;
        unsigned int arg2;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddCircle");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImDrawList:AddCircle");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddCircle");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddCircle'", nullptr);
            return 0;
        }
        cobj->AddCircle(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 4) 
    {
        ImVec2 arg0;
        double arg1;
        unsigned int arg2;
        int arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddCircle");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImDrawList:AddCircle");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddCircle");

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "imgui.ImDrawList:AddCircle");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddCircle'", nullptr);
            return 0;
        }
        cobj->AddCircle(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 5) 
    {
        ImVec2 arg0;
        double arg1;
        unsigned int arg2;
        int arg3;
        double arg4;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddCircle");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImDrawList:AddCircle");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddCircle");

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "imgui.ImDrawList:AddCircle");

        ok &= luaval_to_number(tolua_S, 6,&arg4, "imgui.ImDrawList:AddCircle");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddCircle'", nullptr);
            return 0;
        }
        cobj->AddCircle(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddCircle", argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddCircle'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_AddCircleFilled(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddCircleFilled'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 3) 
    {
        ImVec2 arg0;
        double arg1;
        unsigned int arg2;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddCircleFilled");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImDrawList:AddCircleFilled");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddCircleFilled");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddCircleFilled'", nullptr);
            return 0;
        }
        cobj->AddCircleFilled(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 4) 
    {
        ImVec2 arg0;
        double arg1;
        unsigned int arg2;
        int arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddCircleFilled");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImDrawList:AddCircleFilled");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddCircleFilled");

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "imgui.ImDrawList:AddCircleFilled");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddCircleFilled'", nullptr);
            return 0;
        }
        cobj->AddCircleFilled(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddCircleFilled", argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddCircleFilled'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_AddDrawCmd(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddDrawCmd'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddDrawCmd'", nullptr);
            return 0;
        }
        cobj->AddDrawCmd();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddDrawCmd", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddDrawCmd'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_AddLine(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddLine'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 3) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddLine");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddLine");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddLine");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddLine'", nullptr);
            return 0;
        }
        cobj->AddLine(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 4) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;
        double arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddLine");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddLine");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddLine");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "imgui.ImDrawList:AddLine");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddLine'", nullptr);
            return 0;
        }
        cobj->AddLine(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddLine", argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddLine'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_AddNgon(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddNgon'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 4) 
    {
        ImVec2 arg0;
        double arg1;
        unsigned int arg2;
        int arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddNgon");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImDrawList:AddNgon");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddNgon");

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "imgui.ImDrawList:AddNgon");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddNgon'", nullptr);
            return 0;
        }
        cobj->AddNgon(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 5) 
    {
        ImVec2 arg0;
        double arg1;
        unsigned int arg2;
        int arg3;
        double arg4;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddNgon");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImDrawList:AddNgon");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddNgon");

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "imgui.ImDrawList:AddNgon");

        ok &= luaval_to_number(tolua_S, 6,&arg4, "imgui.ImDrawList:AddNgon");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddNgon'", nullptr);
            return 0;
        }
        cobj->AddNgon(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddNgon", argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddNgon'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_AddNgonFilled(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddNgonFilled'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 4) 
    {
        ImVec2 arg0;
        double arg1;
        unsigned int arg2;
        int arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddNgonFilled");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImDrawList:AddNgonFilled");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddNgonFilled");

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "imgui.ImDrawList:AddNgonFilled");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddNgonFilled'", nullptr);
            return 0;
        }
        cobj->AddNgonFilled(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddNgonFilled", argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddNgonFilled'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_AddQuad(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddQuad'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 5) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        ImVec2 arg3;
        unsigned int arg4;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddQuad");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddQuad");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:AddQuad");

        ok &= luaval_to_ImVec2(tolua_S, 5, &arg3, "imgui.ImDrawList:AddQuad");

        ok &= luaval_to_uint32(tolua_S, 6,&arg4, "imgui.ImDrawList:AddQuad");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddQuad'", nullptr);
            return 0;
        }
        cobj->AddQuad(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 6) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        ImVec2 arg3;
        unsigned int arg4;
        double arg5;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddQuad");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddQuad");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:AddQuad");

        ok &= luaval_to_ImVec2(tolua_S, 5, &arg3, "imgui.ImDrawList:AddQuad");

        ok &= luaval_to_uint32(tolua_S, 6,&arg4, "imgui.ImDrawList:AddQuad");

        ok &= luaval_to_number(tolua_S, 7,&arg5, "imgui.ImDrawList:AddQuad");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddQuad'", nullptr);
            return 0;
        }
        cobj->AddQuad(arg0, arg1, arg2, arg3, arg4, arg5);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddQuad", argc, 5);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddQuad'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_AddQuadFilled(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddQuadFilled'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 5) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        ImVec2 arg3;
        unsigned int arg4;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddQuadFilled");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddQuadFilled");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:AddQuadFilled");

        ok &= luaval_to_ImVec2(tolua_S, 5, &arg3, "imgui.ImDrawList:AddQuadFilled");

        ok &= luaval_to_uint32(tolua_S, 6,&arg4, "imgui.ImDrawList:AddQuadFilled");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddQuadFilled'", nullptr);
            return 0;
        }
        cobj->AddQuadFilled(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddQuadFilled", argc, 5);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddQuadFilled'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_AddRect(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddRect'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 3) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddRect");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddRect'", nullptr);
            return 0;
        }
        cobj->AddRect(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 4) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;
        double arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "imgui.ImDrawList:AddRect");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddRect'", nullptr);
            return 0;
        }
        cobj->AddRect(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 5) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;
        double arg3;
        int arg4;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4, "imgui.ImDrawList:AddRect");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddRect'", nullptr);
            return 0;
        }
        cobj->AddRect(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 6) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;
        double arg3;
        int arg4;
        double arg5;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_number(tolua_S, 7,&arg5, "imgui.ImDrawList:AddRect");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddRect'", nullptr);
            return 0;
        }
        cobj->AddRect(arg0, arg1, arg2, arg3, arg4, arg5);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddRect", argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddRect'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_AddRectFilled(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddRectFilled'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 3) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddRectFilled");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddRectFilled");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddRectFilled");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddRectFilled'", nullptr);
            return 0;
        }
        cobj->AddRectFilled(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 4) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;
        double arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddRectFilled");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddRectFilled");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddRectFilled");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "imgui.ImDrawList:AddRectFilled");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddRectFilled'", nullptr);
            return 0;
        }
        cobj->AddRectFilled(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 5) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;
        double arg3;
        int arg4;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddRectFilled");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddRectFilled");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddRectFilled");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "imgui.ImDrawList:AddRectFilled");

        ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4, "imgui.ImDrawList:AddRectFilled");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddRectFilled'", nullptr);
            return 0;
        }
        cobj->AddRectFilled(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddRectFilled", argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddRectFilled'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_AddRectFilledMultiColor(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddRectFilledMultiColor'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 6) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;
        unsigned int arg3;
        unsigned int arg4;
        unsigned int arg5;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddRectFilledMultiColor");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddRectFilledMultiColor");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddRectFilledMultiColor");

        ok &= luaval_to_uint32(tolua_S, 5,&arg3, "imgui.ImDrawList:AddRectFilledMultiColor");

        ok &= luaval_to_uint32(tolua_S, 6,&arg4, "imgui.ImDrawList:AddRectFilledMultiColor");

        ok &= luaval_to_uint32(tolua_S, 7,&arg5, "imgui.ImDrawList:AddRectFilledMultiColor");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddRectFilledMultiColor'", nullptr);
            return 0;
        }
        cobj->AddRectFilledMultiColor(arg0, arg1, arg2, arg3, arg4, arg5);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddRectFilledMultiColor", argc, 6);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddRectFilledMultiColor'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_AddTriangle(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddTriangle'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 4) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        unsigned int arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddTriangle");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddTriangle");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:AddTriangle");

        ok &= luaval_to_uint32(tolua_S, 5,&arg3, "imgui.ImDrawList:AddTriangle");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddTriangle'", nullptr);
            return 0;
        }
        cobj->AddTriangle(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 5) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        unsigned int arg3;
        double arg4;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddTriangle");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddTriangle");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:AddTriangle");

        ok &= luaval_to_uint32(tolua_S, 5,&arg3, "imgui.ImDrawList:AddTriangle");

        ok &= luaval_to_number(tolua_S, 6,&arg4, "imgui.ImDrawList:AddTriangle");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddTriangle'", nullptr);
            return 0;
        }
        cobj->AddTriangle(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddTriangle", argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddTriangle'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_AddTriangleFilled(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddTriangleFilled'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 4) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        unsigned int arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddTriangleFilled");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddTriangleFilled");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:AddTriangleFilled");

        ok &= luaval_to_uint32(tolua_S, 5,&arg3, "imgui.ImDrawList:AddTriangleFilled");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddTriangleFilled'", nullptr);
            return 0;
        }
        cobj->AddTriangleFilled(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddTriangleFilled", argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddTriangleFilled'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_ChannelsMerge(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_ChannelsMerge'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_ChannelsMerge'", nullptr);
            return 0;
        }
        cobj->ChannelsMerge();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:ChannelsMerge", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_ChannelsMerge'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_ChannelsSetCurrent(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_ChannelsSetCurrent'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImDrawList:ChannelsSetCurrent");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_ChannelsSetCurrent'", nullptr);
            return 0;
        }
        cobj->ChannelsSetCurrent(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:ChannelsSetCurrent", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_ChannelsSetCurrent'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_ChannelsSplit(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_ChannelsSplit'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImDrawList:ChannelsSplit");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_ChannelsSplit'", nullptr);
            return 0;
        }
        cobj->ChannelsSplit(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:ChannelsSplit", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_ChannelsSplit'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_CloneOutput(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_CloneOutput'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_CloneOutput'", nullptr);
            return 0;
        }
        imgui::ImDrawList* ret = cobj->CloneOutput();
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:CloneOutput", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_CloneOutput'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_GetClipRectMax(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_GetClipRectMax'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_GetClipRectMax'", nullptr);
            return 0;
        }
        ImVec2 ret = cobj->GetClipRectMax();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:GetClipRectMax", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_GetClipRectMax'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_GetClipRectMin(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_GetClipRectMin'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_GetClipRectMin'", nullptr);
            return 0;
        }
        ImVec2 ret = cobj->GetClipRectMin();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:GetClipRectMin", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_GetClipRectMin'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PathArcTo(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PathArcTo'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 4) 
    {
        ImVec2 arg0;
        double arg1;
        double arg2;
        double arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathArcTo");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImDrawList:PathArcTo");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "imgui.ImDrawList:PathArcTo");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "imgui.ImDrawList:PathArcTo");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathArcTo'", nullptr);
            return 0;
        }
        cobj->PathArcTo(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 5) 
    {
        ImVec2 arg0;
        double arg1;
        double arg2;
        double arg3;
        int arg4;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathArcTo");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImDrawList:PathArcTo");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "imgui.ImDrawList:PathArcTo");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "imgui.ImDrawList:PathArcTo");

        ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4, "imgui.ImDrawList:PathArcTo");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathArcTo'", nullptr);
            return 0;
        }
        cobj->PathArcTo(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PathArcTo", argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PathArcTo'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PathArcToFast(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PathArcToFast'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 4) 
    {
        ImVec2 arg0;
        double arg1;
        int arg2;
        int arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathArcToFast");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImDrawList:PathArcToFast");

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "imgui.ImDrawList:PathArcToFast");

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "imgui.ImDrawList:PathArcToFast");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathArcToFast'", nullptr);
            return 0;
        }
        cobj->PathArcToFast(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PathArcToFast", argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PathArcToFast'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PathBezierCubicCurveTo(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PathBezierCubicCurveTo'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 3) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathBezierCubicCurveTo");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PathBezierCubicCurveTo");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:PathBezierCubicCurveTo");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathBezierCubicCurveTo'", nullptr);
            return 0;
        }
        cobj->PathBezierCubicCurveTo(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 4) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        int arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathBezierCubicCurveTo");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PathBezierCubicCurveTo");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:PathBezierCubicCurveTo");

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "imgui.ImDrawList:PathBezierCubicCurveTo");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathBezierCubicCurveTo'", nullptr);
            return 0;
        }
        cobj->PathBezierCubicCurveTo(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PathBezierCubicCurveTo", argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PathBezierCubicCurveTo'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PathBezierQuadraticCurveTo(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PathBezierQuadraticCurveTo'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 2) 
    {
        ImVec2 arg0;
        ImVec2 arg1;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathBezierQuadraticCurveTo");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PathBezierQuadraticCurveTo");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathBezierQuadraticCurveTo'", nullptr);
            return 0;
        }
        cobj->PathBezierQuadraticCurveTo(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        int arg2;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathBezierQuadraticCurveTo");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PathBezierQuadraticCurveTo");

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "imgui.ImDrawList:PathBezierQuadraticCurveTo");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathBezierQuadraticCurveTo'", nullptr);
            return 0;
        }
        cobj->PathBezierQuadraticCurveTo(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PathBezierQuadraticCurveTo", argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PathBezierQuadraticCurveTo'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PathClear(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PathClear'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathClear'", nullptr);
            return 0;
        }
        cobj->PathClear();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PathClear", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PathClear'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PathFillConvex(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PathFillConvex'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        unsigned int arg0;

        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImDrawList:PathFillConvex");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathFillConvex'", nullptr);
            return 0;
        }
        cobj->PathFillConvex(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PathFillConvex", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PathFillConvex'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PathLineTo(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PathLineTo'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        ImVec2 arg0;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathLineTo");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathLineTo'", nullptr);
            return 0;
        }
        cobj->PathLineTo(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PathLineTo", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PathLineTo'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PathLineToMergeDuplicate(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PathLineToMergeDuplicate'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        ImVec2 arg0;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathLineToMergeDuplicate");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathLineToMergeDuplicate'", nullptr);
            return 0;
        }
        cobj->PathLineToMergeDuplicate(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PathLineToMergeDuplicate", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PathLineToMergeDuplicate'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PathRect(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PathRect'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 2) 
    {
        ImVec2 arg0;
        ImVec2 arg1;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathRect");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PathRect");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathRect'", nullptr);
            return 0;
        }
        cobj->PathRect(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        double arg2;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathRect");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PathRect");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "imgui.ImDrawList:PathRect");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathRect'", nullptr);
            return 0;
        }
        cobj->PathRect(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 4) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        double arg2;
        int arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathRect");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PathRect");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "imgui.ImDrawList:PathRect");

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "imgui.ImDrawList:PathRect");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathRect'", nullptr);
            return 0;
        }
        cobj->PathRect(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PathRect", argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PathRect'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PathStroke(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PathStroke'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        unsigned int arg0;

        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImDrawList:PathStroke");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathStroke'", nullptr);
            return 0;
        }
        cobj->PathStroke(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2) 
    {
        unsigned int arg0;
        int arg1;

        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImDrawList:PathStroke");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImDrawList:PathStroke");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathStroke'", nullptr);
            return 0;
        }
        cobj->PathStroke(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3) 
    {
        unsigned int arg0;
        int arg1;
        double arg2;

        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImDrawList:PathStroke");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImDrawList:PathStroke");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "imgui.ImDrawList:PathStroke");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathStroke'", nullptr);
            return 0;
        }
        cobj->PathStroke(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PathStroke", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PathStroke'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PopClipRect(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PopClipRect'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PopClipRect'", nullptr);
            return 0;
        }
        cobj->PopClipRect();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PopClipRect", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PopClipRect'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PopTextureID(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PopTextureID'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PopTextureID'", nullptr);
            return 0;
        }
        cobj->PopTextureID();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PopTextureID", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PopTextureID'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PrimQuadUV(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PrimQuadUV'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 9) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        ImVec2 arg3;
        ImVec2 arg4;
        ImVec2 arg5;
        ImVec2 arg6;
        ImVec2 arg7;
        unsigned int arg8;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PrimQuadUV");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PrimQuadUV");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:PrimQuadUV");

        ok &= luaval_to_ImVec2(tolua_S, 5, &arg3, "imgui.ImDrawList:PrimQuadUV");

        ok &= luaval_to_ImVec2(tolua_S, 6, &arg4, "imgui.ImDrawList:PrimQuadUV");

        ok &= luaval_to_ImVec2(tolua_S, 7, &arg5, "imgui.ImDrawList:PrimQuadUV");

        ok &= luaval_to_ImVec2(tolua_S, 8, &arg6, "imgui.ImDrawList:PrimQuadUV");

        ok &= luaval_to_ImVec2(tolua_S, 9, &arg7, "imgui.ImDrawList:PrimQuadUV");

        ok &= luaval_to_uint32(tolua_S, 10,&arg8, "imgui.ImDrawList:PrimQuadUV");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PrimQuadUV'", nullptr);
            return 0;
        }
        cobj->PrimQuadUV(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PrimQuadUV", argc, 9);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PrimQuadUV'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PrimRect(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PrimRect'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 3) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PrimRect");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PrimRect");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:PrimRect");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PrimRect'", nullptr);
            return 0;
        }
        cobj->PrimRect(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PrimRect", argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PrimRect'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PrimRectUV(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PrimRectUV'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 5) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        ImVec2 arg3;
        unsigned int arg4;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PrimRectUV");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PrimRectUV");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:PrimRectUV");

        ok &= luaval_to_ImVec2(tolua_S, 5, &arg3, "imgui.ImDrawList:PrimRectUV");

        ok &= luaval_to_uint32(tolua_S, 6,&arg4, "imgui.ImDrawList:PrimRectUV");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PrimRectUV'", nullptr);
            return 0;
        }
        cobj->PrimRectUV(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PrimRectUV", argc, 5);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PrimRectUV'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PrimReserve(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PrimReserve'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 2) 
    {
        int arg0;
        int arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImDrawList:PrimReserve");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImDrawList:PrimReserve");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PrimReserve'", nullptr);
            return 0;
        }
        cobj->PrimReserve(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PrimReserve", argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PrimReserve'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PrimUnreserve(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PrimUnreserve'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 2) 
    {
        int arg0;
        int arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImDrawList:PrimUnreserve");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImDrawList:PrimUnreserve");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PrimUnreserve'", nullptr);
            return 0;
        }
        cobj->PrimUnreserve(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PrimUnreserve", argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PrimUnreserve'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PrimVtx(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PrimVtx'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 3) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PrimVtx");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PrimVtx");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:PrimVtx");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PrimVtx'", nullptr);
            return 0;
        }
        cobj->PrimVtx(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PrimVtx", argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PrimVtx'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PrimWriteIdx(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PrimWriteIdx'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        unsigned short arg0;

        ok &= luaval_to_ushort(tolua_S, 2, &arg0, "imgui.ImDrawList:PrimWriteIdx");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PrimWriteIdx'", nullptr);
            return 0;
        }
        cobj->PrimWriteIdx(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PrimWriteIdx", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PrimWriteIdx'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PrimWriteVtx(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PrimWriteVtx'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 3) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PrimWriteVtx");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PrimWriteVtx");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:PrimWriteVtx");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PrimWriteVtx'", nullptr);
            return 0;
        }
        cobj->PrimWriteVtx(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PrimWriteVtx", argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PrimWriteVtx'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PushClipRect(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PushClipRect'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 2) 
    {
        ImVec2 arg0;
        ImVec2 arg1;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PushClipRect");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PushClipRect");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PushClipRect'", nullptr);
            return 0;
        }
        cobj->PushClipRect(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        bool arg2;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PushClipRect");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PushClipRect");

        ok &= luaval_to_boolean(tolua_S, 4,&arg2, "imgui.ImDrawList:PushClipRect");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PushClipRect'", nullptr);
            return 0;
        }
        cobj->PushClipRect(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PushClipRect", argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PushClipRect'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_PushClipRectFullScreen(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PushClipRectFullScreen'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PushClipRectFullScreen'", nullptr);
            return 0;
        }
        cobj->PushClipRectFullScreen();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PushClipRectFullScreen", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PushClipRectFullScreen'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_getFlags(lua_State* tolua_S)
{
    imgui::ImDrawList* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImDrawList", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_getFlags'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->Flags);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiDrawList_ImDrawList_getFlags'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_setFlags(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImDrawList", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_setFlags'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImDrawList:Flags");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList'", nullptr);
            return 0;
        }
        cobj->Flags = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:Flags", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiDrawList_ImDrawList_getFlags'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_get_OwnerName(lua_State* tolua_S)
{
    imgui::ImDrawList* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImDrawList", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_get_OwnerName'", nullptr);
        return 0;
    }
#endif
    tolua_pushstring(tolua_S,(const char*)cobj->_OwnerName);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiDrawList_ImDrawList_get_OwnerName'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_set_OwnerName(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImDrawList* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImDrawList", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_set_OwnerName'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImDrawList:_OwnerName"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiDrawList_ImDrawList'", nullptr);
            return 0;
        }
        cobj->_OwnerName = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:_OwnerName", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiDrawList_ImDrawList_get_OwnerName'.", &tolua_err);
    return 0;
#endif
}
static int lua_x_imguiDrawList_ImDrawList_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ImDrawList)");
    return 0;
}

int lua_register_x_imguiDrawList_ImDrawList(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"imgui.ImDrawList");
    tolua_cclass(tolua_S,"ImDrawList","imgui.ImDrawList","",nullptr);

    tolua_beginmodule(tolua_S,"ImDrawList");
        tolua_function(tolua_S,"addBezierCubic",lua_x_imguiDrawList_ImDrawList_AddBezierCubic);
        tolua_function(tolua_S,"addBezierQuadratic",lua_x_imguiDrawList_ImDrawList_AddBezierQuadratic);
        tolua_function(tolua_S,"addCircle",lua_x_imguiDrawList_ImDrawList_AddCircle);
        tolua_function(tolua_S,"addCircleFilled",lua_x_imguiDrawList_ImDrawList_AddCircleFilled);
        tolua_function(tolua_S,"addDrawCmd",lua_x_imguiDrawList_ImDrawList_AddDrawCmd);
        tolua_function(tolua_S,"addLine",lua_x_imguiDrawList_ImDrawList_AddLine);
        tolua_function(tolua_S,"addNgon",lua_x_imguiDrawList_ImDrawList_AddNgon);
        tolua_function(tolua_S,"addNgonFilled",lua_x_imguiDrawList_ImDrawList_AddNgonFilled);
        tolua_function(tolua_S,"addQuad",lua_x_imguiDrawList_ImDrawList_AddQuad);
        tolua_function(tolua_S,"addQuadFilled",lua_x_imguiDrawList_ImDrawList_AddQuadFilled);
        tolua_function(tolua_S,"addRect",lua_x_imguiDrawList_ImDrawList_AddRect);
        tolua_function(tolua_S,"addRectFilled",lua_x_imguiDrawList_ImDrawList_AddRectFilled);
        tolua_function(tolua_S,"addRectFilledMultiColor",lua_x_imguiDrawList_ImDrawList_AddRectFilledMultiColor);
        tolua_function(tolua_S,"addTriangle",lua_x_imguiDrawList_ImDrawList_AddTriangle);
        tolua_function(tolua_S,"addTriangleFilled",lua_x_imguiDrawList_ImDrawList_AddTriangleFilled);
        tolua_function(tolua_S,"channelsMerge",lua_x_imguiDrawList_ImDrawList_ChannelsMerge);
        tolua_function(tolua_S,"channelsSetCurrent",lua_x_imguiDrawList_ImDrawList_ChannelsSetCurrent);
        tolua_function(tolua_S,"channelsSplit",lua_x_imguiDrawList_ImDrawList_ChannelsSplit);
        tolua_function(tolua_S,"cloneOutput",lua_x_imguiDrawList_ImDrawList_CloneOutput);
        tolua_function(tolua_S,"getClipRectMax",lua_x_imguiDrawList_ImDrawList_GetClipRectMax);
        tolua_function(tolua_S,"getClipRectMin",lua_x_imguiDrawList_ImDrawList_GetClipRectMin);
        tolua_function(tolua_S,"pathArcTo",lua_x_imguiDrawList_ImDrawList_PathArcTo);
        tolua_function(tolua_S,"pathArcToFast",lua_x_imguiDrawList_ImDrawList_PathArcToFast);
        tolua_function(tolua_S,"pathBezierCubicCurveTo",lua_x_imguiDrawList_ImDrawList_PathBezierCubicCurveTo);
        tolua_function(tolua_S,"pathBezierQuadraticCurveTo",lua_x_imguiDrawList_ImDrawList_PathBezierQuadraticCurveTo);
        tolua_function(tolua_S,"pathClear",lua_x_imguiDrawList_ImDrawList_PathClear);
        tolua_function(tolua_S,"pathFillConvex",lua_x_imguiDrawList_ImDrawList_PathFillConvex);
        tolua_function(tolua_S,"pathLineTo",lua_x_imguiDrawList_ImDrawList_PathLineTo);
        tolua_function(tolua_S,"pathLineToMergeDuplicate",lua_x_imguiDrawList_ImDrawList_PathLineToMergeDuplicate);
        tolua_function(tolua_S,"pathRect",lua_x_imguiDrawList_ImDrawList_PathRect);
        tolua_function(tolua_S,"pathStroke",lua_x_imguiDrawList_ImDrawList_PathStroke);
        tolua_function(tolua_S,"popClipRect",lua_x_imguiDrawList_ImDrawList_PopClipRect);
        tolua_function(tolua_S,"popTextureID",lua_x_imguiDrawList_ImDrawList_PopTextureID);
        tolua_function(tolua_S,"primQuadUV",lua_x_imguiDrawList_ImDrawList_PrimQuadUV);
        tolua_function(tolua_S,"primRect",lua_x_imguiDrawList_ImDrawList_PrimRect);
        tolua_function(tolua_S,"primRectUV",lua_x_imguiDrawList_ImDrawList_PrimRectUV);
        tolua_function(tolua_S,"primReserve",lua_x_imguiDrawList_ImDrawList_PrimReserve);
        tolua_function(tolua_S,"primUnreserve",lua_x_imguiDrawList_ImDrawList_PrimUnreserve);
        tolua_function(tolua_S,"primVtx",lua_x_imguiDrawList_ImDrawList_PrimVtx);
        tolua_function(tolua_S,"primWriteIdx",lua_x_imguiDrawList_ImDrawList_PrimWriteIdx);
        tolua_function(tolua_S,"primWriteVtx",lua_x_imguiDrawList_ImDrawList_PrimWriteVtx);
        tolua_function(tolua_S,"pushClipRect",lua_x_imguiDrawList_ImDrawList_PushClipRect);
        tolua_function(tolua_S,"pushClipRectFullScreen",lua_x_imguiDrawList_ImDrawList_PushClipRectFullScreen);
        tolua_variable(tolua_S,"Flags", lua_x_imguiDrawList_ImDrawList_getFlags, lua_x_imguiDrawList_ImDrawList_setFlags);
        tolua_variable(tolua_S,"_OwnerName", lua_x_imguiDrawList_ImDrawList_get_OwnerName, lua_x_imguiDrawList_ImDrawList_set_OwnerName);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(imgui::ImDrawList).name();
    g_luaType[typeName] = "imgui.ImDrawList";
    g_typeCast["ImDrawList"] = "imgui.ImDrawList";
    return 1;
}
TOLUA_API int register_all_x_imguiDrawList(lua_State* tolua_S)
{
	tolua_open(tolua_S);

	tolua_module(tolua_S, "imgui", 0);
	tolua_beginmodule(tolua_S, "imgui");

	lua_register_x_imguiDrawList_ImDrawList(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

