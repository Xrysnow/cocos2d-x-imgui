#include "lua_imgui_auto.hpp"
#include "imgui_lua.hpp"
#include "lua_conversion.hpp"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"

#ifdef COCOS2D_DEBUG
#undef COCOS2D_DEBUG
#endif // COCOS2D_DEBUG
namespace imgui
{
	namespace ImGui
	{
	    using namespace ::ImGui;
	}
}
using namespace lua;

int lua_x_imgui_ImGui_AlignTextToFramePadding(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_AlignTextToFramePadding'", nullptr);
            return 0;
        }
        imgui::ImGui::AlignTextToFramePadding();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:AlignTextToFramePadding",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_AlignTextToFramePadding'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_ArrowButton(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        const char* arg0;
        int arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:ArrowButton"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImGui:ArrowButton");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_ArrowButton'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::ArrowButton(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:ArrowButton",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_ArrowButton'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_BeginChildFrame(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        unsigned int arg0;
        ImVec2 arg1;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImGui:BeginChildFrame");
        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImGui:BeginChildFrame");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginChildFrame'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginChildFrame(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 3)
    {
        unsigned int arg0;
        ImVec2 arg1;
        int arg2;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImGui:BeginChildFrame");
        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImGui:BeginChildFrame");
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "imgui.ImGui:BeginChildFrame");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginChildFrame'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginChildFrame(arg0, arg1, arg2);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:BeginChildFrame",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_BeginChildFrame'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_BeginCombo(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        const char* arg0;
        const char* arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:BeginCombo"); arg0 = arg0_tmp.c_str();
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "imgui.ImGui:BeginCombo"); arg1 = arg1_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginCombo'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginCombo(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 3)
    {
        const char* arg0;
        const char* arg1;
        int arg2;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:BeginCombo"); arg0 = arg0_tmp.c_str();
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "imgui.ImGui:BeginCombo"); arg1 = arg1_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "imgui.ImGui:BeginCombo");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginCombo'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginCombo(arg0, arg1, arg2);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:BeginCombo",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_BeginCombo'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_BeginDragDropSource(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginDragDropSource'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginDragDropSource();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:BeginDragDropSource");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginDragDropSource'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginDragDropSource(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:BeginDragDropSource",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_BeginDragDropSource'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_BeginDragDropTarget(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginDragDropTarget'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginDragDropTarget();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:BeginDragDropTarget",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_BeginDragDropTarget'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_BeginGroup(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginGroup'", nullptr);
            return 0;
        }
        imgui::ImGui::BeginGroup();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:BeginGroup",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_BeginGroup'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_BeginMainMenuBar(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginMainMenuBar'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginMainMenuBar();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:BeginMainMenuBar",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_BeginMainMenuBar'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_BeginMenu(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:BeginMenu"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginMenu'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginMenu(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 2)
    {
        const char* arg0;
        bool arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:BeginMenu"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "imgui.ImGui:BeginMenu");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginMenu'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginMenu(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:BeginMenu",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_BeginMenu'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_BeginMenuBar(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginMenuBar'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginMenuBar();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:BeginMenuBar",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_BeginMenuBar'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_BeginPopup(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:BeginPopup"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginPopup'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginPopup(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 2)
    {
        const char* arg0;
        int arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:BeginPopup"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImGui:BeginPopup");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginPopup'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginPopup(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:BeginPopup",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_BeginPopup'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_BeginPopupContextItem(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginPopupContextItem'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginPopupContextItem();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:BeginPopupContextItem"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginPopupContextItem'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginPopupContextItem(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 2)
    {
        const char* arg0;
        int arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:BeginPopupContextItem"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImGui:BeginPopupContextItem");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginPopupContextItem'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginPopupContextItem(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:BeginPopupContextItem",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_BeginPopupContextItem'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_BeginPopupContextVoid(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginPopupContextVoid'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginPopupContextVoid();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:BeginPopupContextVoid"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginPopupContextVoid'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginPopupContextVoid(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 2)
    {
        const char* arg0;
        int arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:BeginPopupContextVoid"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImGui:BeginPopupContextVoid");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginPopupContextVoid'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginPopupContextVoid(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:BeginPopupContextVoid",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_BeginPopupContextVoid'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_BeginPopupContextWindow(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginPopupContextWindow'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginPopupContextWindow();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:BeginPopupContextWindow"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginPopupContextWindow'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginPopupContextWindow(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 2)
    {
        const char* arg0;
        int arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:BeginPopupContextWindow"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImGui:BeginPopupContextWindow");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginPopupContextWindow'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginPopupContextWindow(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:BeginPopupContextWindow",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_BeginPopupContextWindow'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_BeginTabBar(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:BeginTabBar"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginTabBar'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginTabBar(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 2)
    {
        const char* arg0;
        int arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:BeginTabBar"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImGui:BeginTabBar");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginTabBar'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::BeginTabBar(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:BeginTabBar",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_BeginTabBar'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_BeginTooltip(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BeginTooltip'", nullptr);
            return 0;
        }
        imgui::ImGui::BeginTooltip();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:BeginTooltip",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_BeginTooltip'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_Bullet(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_Bullet'", nullptr);
            return 0;
        }
        imgui::ImGui::Bullet();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:Bullet",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_Bullet'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_BulletText(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:BulletText"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_BulletText'", nullptr);
            return 0;
        }
        imgui::ImGui::BulletText("%s", arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:BulletText",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_BulletText'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_Button(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:Button"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_Button'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::Button(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 2)
    {
        const char* arg0;
        ImVec2 arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:Button"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImGui:Button");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_Button'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::Button(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:Button",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_Button'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_CalcItemWidth(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_CalcItemWidth'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::CalcItemWidth();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:CalcItemWidth",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_CalcItemWidth'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_CalcTextSize(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:CalcTextSize"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_CalcTextSize'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::CalcTextSize(arg0);
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    if (argc == 2)
    {
        const char* arg0;
        const char* arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:CalcTextSize"); arg0 = arg0_tmp.c_str();
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "imgui.ImGui:CalcTextSize"); arg1 = arg1_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_CalcTextSize'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::CalcTextSize(arg0, arg1);
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    if (argc == 3)
    {
        const char* arg0;
        const char* arg1;
        bool arg2;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:CalcTextSize"); arg0 = arg0_tmp.c_str();
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "imgui.ImGui:CalcTextSize"); arg1 = arg1_tmp.c_str();
        ok &= luaval_to_boolean(tolua_S, 4,&arg2, "imgui.ImGui:CalcTextSize");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_CalcTextSize'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::CalcTextSize(arg0, arg1, arg2);
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    if (argc == 4)
    {
        const char* arg0;
        const char* arg1;
        bool arg2;
        double arg3;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:CalcTextSize"); arg0 = arg0_tmp.c_str();
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "imgui.ImGui:CalcTextSize"); arg1 = arg1_tmp.c_str();
        ok &= luaval_to_boolean(tolua_S, 4,&arg2, "imgui.ImGui:CalcTextSize");
        ok &= luaval_to_number(tolua_S, 5,&arg3, "imgui.ImGui:CalcTextSize");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_CalcTextSize'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::CalcTextSize(arg0, arg1, arg2, arg3);
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:CalcTextSize",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_CalcTextSize'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_CaptureKeyboardFromApp(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_CaptureKeyboardFromApp'", nullptr);
            return 0;
        }
        imgui::ImGui::CaptureKeyboardFromApp();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGui:CaptureKeyboardFromApp");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_CaptureKeyboardFromApp'", nullptr);
            return 0;
        }
        imgui::ImGui::CaptureKeyboardFromApp(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:CaptureKeyboardFromApp",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_CaptureKeyboardFromApp'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_CaptureMouseFromApp(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_CaptureMouseFromApp'", nullptr);
            return 0;
        }
        imgui::ImGui::CaptureMouseFromApp();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGui:CaptureMouseFromApp");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_CaptureMouseFromApp'", nullptr);
            return 0;
        }
        imgui::ImGui::CaptureMouseFromApp(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:CaptureMouseFromApp",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_CaptureMouseFromApp'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_CloseCurrentPopup(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_CloseCurrentPopup'", nullptr);
            return 0;
        }
        imgui::ImGui::CloseCurrentPopup();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:CloseCurrentPopup",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_CloseCurrentPopup'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_ColorButton(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        const char* arg0;
        ImVec4 arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:ColorButton"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_ImVec4(tolua_S, 3, &arg1, "imgui.ImGui:ColorButton");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_ColorButton'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::ColorButton(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 3)
    {
        const char* arg0;
        ImVec4 arg1;
        int arg2;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:ColorButton"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_ImVec4(tolua_S, 3, &arg1, "imgui.ImGui:ColorButton");
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "imgui.ImGui:ColorButton");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_ColorButton'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::ColorButton(arg0, arg1, arg2);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 4)
    {
        const char* arg0;
        ImVec4 arg1;
        int arg2;
        ImVec2 arg3;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:ColorButton"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_ImVec4(tolua_S, 3, &arg1, "imgui.ImGui:ColorButton");
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "imgui.ImGui:ColorButton");
        ok &= luaval_to_ImVec2(tolua_S, 5, &arg3, "imgui.ImGui:ColorButton");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_ColorButton'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::ColorButton(arg0, arg1, arg2, arg3);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:ColorButton",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_ColorButton'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_ColorConvertFloat4ToU32(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        ImVec4 arg0;
        ok &= luaval_to_ImVec4(tolua_S, 2, &arg0, "imgui.ImGui:ColorConvertFloat4ToU32");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_ColorConvertFloat4ToU32'", nullptr);
            return 0;
        }
        unsigned int ret = imgui::ImGui::ColorConvertFloat4ToU32(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:ColorConvertFloat4ToU32",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_ColorConvertFloat4ToU32'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_ColorConvertU32ToFloat4(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImGui:ColorConvertU32ToFloat4");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_ColorConvertU32ToFloat4'", nullptr);
            return 0;
        }
        ImVec4 ret = imgui::ImGui::ColorConvertU32ToFloat4(arg0);
        ImVec4_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:ColorConvertU32ToFloat4",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_ColorConvertU32ToFloat4'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_Columns(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_Columns'", nullptr);
            return 0;
        }
        imgui::ImGui::Columns();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:Columns");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_Columns'", nullptr);
            return 0;
        }
        imgui::ImGui::Columns(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        int arg0;
        const char* arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:Columns");
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "imgui.ImGui:Columns"); arg1 = arg1_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_Columns'", nullptr);
            return 0;
        }
        imgui::ImGui::Columns(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3)
    {
        int arg0;
        const char* arg1;
        bool arg2;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:Columns");
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "imgui.ImGui:Columns"); arg1 = arg1_tmp.c_str();
        ok &= luaval_to_boolean(tolua_S, 4,&arg2, "imgui.ImGui:Columns");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_Columns'", nullptr);
            return 0;
        }
        imgui::ImGui::Columns(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:Columns",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_Columns'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_DebugCheckVersionAndDataLayout(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 7)
    {
        const char* arg0;
        unsigned int arg1;
        unsigned int arg2;
        unsigned int arg3;
        unsigned int arg4;
        unsigned int arg5;
        unsigned int arg6;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:DebugCheckVersionAndDataLayout"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_uint32(tolua_S, 3,&arg1, "imgui.ImGui:DebugCheckVersionAndDataLayout");
        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImGui:DebugCheckVersionAndDataLayout");
        ok &= luaval_to_uint32(tolua_S, 5,&arg3, "imgui.ImGui:DebugCheckVersionAndDataLayout");
        ok &= luaval_to_uint32(tolua_S, 6,&arg4, "imgui.ImGui:DebugCheckVersionAndDataLayout");
        ok &= luaval_to_uint32(tolua_S, 7,&arg5, "imgui.ImGui:DebugCheckVersionAndDataLayout");
        ok &= luaval_to_uint32(tolua_S, 8,&arg6, "imgui.ImGui:DebugCheckVersionAndDataLayout");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_DebugCheckVersionAndDataLayout'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::DebugCheckVersionAndDataLayout(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:DebugCheckVersionAndDataLayout",argc, 7);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_DebugCheckVersionAndDataLayout'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_DestroyPlatformWindows(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_DestroyPlatformWindows'", nullptr);
            return 0;
        }
        imgui::ImGui::DestroyPlatformWindows();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:DestroyPlatformWindows",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_DestroyPlatformWindows'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_DockSpace(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImGui:DockSpace");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_DockSpace'", nullptr);
            return 0;
        }
        imgui::ImGui::DockSpace(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        unsigned int arg0;
        ImVec2 arg1;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImGui:DockSpace");
        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImGui:DockSpace");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_DockSpace'", nullptr);
            return 0;
        }
        imgui::ImGui::DockSpace(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3)
    {
        unsigned int arg0;
        ImVec2 arg1;
        int arg2;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImGui:DockSpace");
        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImGui:DockSpace");
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "imgui.ImGui:DockSpace");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_DockSpace'", nullptr);
            return 0;
        }
        imgui::ImGui::DockSpace(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:DockSpace",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_DockSpace'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_DockSpaceOverViewport(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_DockSpaceOverViewport'", nullptr);
            return 0;
        }
        unsigned int ret = imgui::ImGui::DockSpaceOverViewport();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    if (argc == 1)
    {
        ImGuiViewport* arg0;
        ok &= luaval_to_native(tolua_S, 2, &arg0, "DockSpaceOverViewport");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_DockSpaceOverViewport'", nullptr);
            return 0;
        }
        unsigned int ret = imgui::ImGui::DockSpaceOverViewport(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    if (argc == 2)
    {
        ImGuiViewport* arg0;
        int arg1;
        ok &= luaval_to_native(tolua_S, 2, &arg0, "DockSpaceOverViewport");
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImGui:DockSpaceOverViewport");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_DockSpaceOverViewport'", nullptr);
            return 0;
        }
        unsigned int ret = imgui::ImGui::DockSpaceOverViewport(arg0, arg1);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:DockSpaceOverViewport",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_DockSpaceOverViewport'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_Dummy(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGui:Dummy");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_Dummy'", nullptr);
            return 0;
        }
        imgui::ImGui::Dummy(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:Dummy",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_Dummy'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_EndChildFrame(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_EndChildFrame'", nullptr);
            return 0;
        }
        imgui::ImGui::EndChildFrame();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:EndChildFrame",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_EndChildFrame'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_EndCombo(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_EndCombo'", nullptr);
            return 0;
        }
        imgui::ImGui::EndCombo();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:EndCombo",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_EndCombo'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_EndDragDropSource(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_EndDragDropSource'", nullptr);
            return 0;
        }
        imgui::ImGui::EndDragDropSource();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:EndDragDropSource",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_EndDragDropSource'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_EndDragDropTarget(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_EndDragDropTarget'", nullptr);
            return 0;
        }
        imgui::ImGui::EndDragDropTarget();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:EndDragDropTarget",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_EndDragDropTarget'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_EndFrame(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_EndFrame'", nullptr);
            return 0;
        }
        imgui::ImGui::EndFrame();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:EndFrame",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_EndFrame'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_EndGroup(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_EndGroup'", nullptr);
            return 0;
        }
        imgui::ImGui::EndGroup();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:EndGroup",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_EndGroup'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_EndMainMenuBar(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_EndMainMenuBar'", nullptr);
            return 0;
        }
        imgui::ImGui::EndMainMenuBar();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:EndMainMenuBar",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_EndMainMenuBar'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_EndMenu(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_EndMenu'", nullptr);
            return 0;
        }
        imgui::ImGui::EndMenu();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:EndMenu",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_EndMenu'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_EndMenuBar(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_EndMenuBar'", nullptr);
            return 0;
        }
        imgui::ImGui::EndMenuBar();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:EndMenuBar",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_EndMenuBar'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_EndPopup(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_EndPopup'", nullptr);
            return 0;
        }
        imgui::ImGui::EndPopup();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:EndPopup",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_EndPopup'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_EndTabBar(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_EndTabBar'", nullptr);
            return 0;
        }
        imgui::ImGui::EndTabBar();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:EndTabBar",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_EndTabBar'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_EndTabItem(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_EndTabItem'", nullptr);
            return 0;
        }
        imgui::ImGui::EndTabItem();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:EndTabItem",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_EndTabItem'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_EndTooltip(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_EndTooltip'", nullptr);
            return 0;
        }
        imgui::ImGui::EndTooltip();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:EndTooltip",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_EndTooltip'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_FindViewportByID(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImGui:FindViewportByID");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_FindViewportByID'", nullptr);
            return 0;
        }
        ImGuiViewport* ret = imgui::ImGui::FindViewportByID(arg0);
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:FindViewportByID",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_FindViewportByID'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetBackgroundDrawList(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 1)
        {
            ImGuiViewport* arg0;
            ok &= luaval_to_native(tolua_S, 2, &arg0, "GetBackgroundDrawList");
            if (!ok) { break; }
            ImDrawList* ret = imgui::ImGui::GetBackgroundDrawList(arg0);
            native_to_luaval(tolua_S, ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 0)
        {
            ImDrawList* ret = imgui::ImGui::GetBackgroundDrawList();
            native_to_luaval(tolua_S, ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "imgui.ImGui:GetBackgroundDrawList",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetBackgroundDrawList'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetClipboardText(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetClipboardText'", nullptr);
            return 0;
        }
        const char* ret = imgui::ImGui::GetClipboardText();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetClipboardText",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetClipboardText'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetColumnIndex(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetColumnIndex'", nullptr);
            return 0;
        }
        int ret = imgui::ImGui::GetColumnIndex();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetColumnIndex",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetColumnIndex'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetColumnOffset(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetColumnOffset'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetColumnOffset();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:GetColumnOffset");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetColumnOffset'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetColumnOffset(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetColumnOffset",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetColumnOffset'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetColumnWidth(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetColumnWidth'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetColumnWidth();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:GetColumnWidth");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetColumnWidth'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetColumnWidth(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetColumnWidth",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetColumnWidth'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetColumnsCount(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetColumnsCount'", nullptr);
            return 0;
        }
        int ret = imgui::ImGui::GetColumnsCount();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetColumnsCount",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetColumnsCount'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetContentRegionAvail(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetContentRegionAvail'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::GetContentRegionAvail();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetContentRegionAvail",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetContentRegionAvail'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetContentRegionMax(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetContentRegionMax'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::GetContentRegionMax();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetContentRegionMax",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetContentRegionMax'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetCursorPos(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetCursorPos'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::GetCursorPos();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetCursorPos",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetCursorPos'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetCursorPosX(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetCursorPosX'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetCursorPosX();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetCursorPosX",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetCursorPosX'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetCursorPosY(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetCursorPosY'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetCursorPosY();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetCursorPosY",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetCursorPosY'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetCursorScreenPos(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetCursorScreenPos'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::GetCursorScreenPos();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetCursorScreenPos",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetCursorScreenPos'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetCursorStartPos(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetCursorStartPos'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::GetCursorStartPos();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetCursorStartPos",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetCursorStartPos'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetFontSize(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetFontSize'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetFontSize();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetFontSize",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetFontSize'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetFontTexUvWhitePixel(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetFontTexUvWhitePixel'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::GetFontTexUvWhitePixel();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetFontTexUvWhitePixel",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetFontTexUvWhitePixel'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetForegroundDrawList(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 1)
        {
            ImGuiViewport* arg0;
            ok &= luaval_to_native(tolua_S, 2, &arg0, "GetForegroundDrawList");
            if (!ok) { break; }
            ImDrawList* ret = imgui::ImGui::GetForegroundDrawList(arg0);
            native_to_luaval(tolua_S, ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 0)
        {
            ImDrawList* ret = imgui::ImGui::GetForegroundDrawList();
            native_to_luaval(tolua_S, ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "imgui.ImGui:GetForegroundDrawList",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetForegroundDrawList'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetFrameCount(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetFrameCount'", nullptr);
            return 0;
        }
        int ret = imgui::ImGui::GetFrameCount();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetFrameCount",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetFrameCount'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetFrameHeight(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetFrameHeight'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetFrameHeight();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetFrameHeight",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetFrameHeight'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetFrameHeightWithSpacing(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetFrameHeightWithSpacing'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetFrameHeightWithSpacing();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetFrameHeightWithSpacing",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetFrameHeightWithSpacing'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetID(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 2)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:GetID"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "imgui.ImGui:GetID"); arg1 = arg1_tmp.c_str();
            if (!ok) { break; }
            unsigned int ret = imgui::ImGui::GetID(arg0, arg1);
            tolua_pushnumber(tolua_S,(lua_Number)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 1)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:GetID"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            unsigned int ret = imgui::ImGui::GetID(arg0);
            tolua_pushnumber(tolua_S,(lua_Number)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "imgui.ImGui:GetID",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetID'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetItemRectMax(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetItemRectMax'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::GetItemRectMax();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetItemRectMax",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetItemRectMax'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetItemRectMin(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetItemRectMin'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::GetItemRectMin();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetItemRectMin",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetItemRectMin'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetItemRectSize(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetItemRectSize'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::GetItemRectSize();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetItemRectSize",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetItemRectSize'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetKeyIndex(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:GetKeyIndex");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetKeyIndex'", nullptr);
            return 0;
        }
        int ret = imgui::ImGui::GetKeyIndex(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetKeyIndex",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetKeyIndex'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetKeyPressedAmount(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 3)
    {
        int arg0;
        double arg1;
        double arg2;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:GetKeyPressedAmount");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImGui:GetKeyPressedAmount");
        ok &= luaval_to_number(tolua_S, 4,&arg2, "imgui.ImGui:GetKeyPressedAmount");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetKeyPressedAmount'", nullptr);
            return 0;
        }
        int ret = imgui::ImGui::GetKeyPressedAmount(arg0, arg1, arg2);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetKeyPressedAmount",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetKeyPressedAmount'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetMainViewport(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetMainViewport'", nullptr);
            return 0;
        }
        ImGuiViewport* ret = imgui::ImGui::GetMainViewport();
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetMainViewport",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetMainViewport'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetMouseCursor(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetMouseCursor'", nullptr);
            return 0;
        }
        int ret = imgui::ImGui::GetMouseCursor();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetMouseCursor",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetMouseCursor'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetMouseDragDelta(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetMouseDragDelta'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::GetMouseDragDelta();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:GetMouseDragDelta");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetMouseDragDelta'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::GetMouseDragDelta(arg0);
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    if (argc == 2)
    {
        int arg0;
        double arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:GetMouseDragDelta");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImGui:GetMouseDragDelta");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetMouseDragDelta'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::GetMouseDragDelta(arg0, arg1);
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetMouseDragDelta",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetMouseDragDelta'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetMousePos(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetMousePos'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::GetMousePos();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetMousePos",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetMousePos'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetMousePosOnOpeningCurrentPopup(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetMousePosOnOpeningCurrentPopup'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::GetMousePosOnOpeningCurrentPopup();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetMousePosOnOpeningCurrentPopup",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetMousePosOnOpeningCurrentPopup'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetScrollMaxX(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetScrollMaxX'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetScrollMaxX();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetScrollMaxX",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetScrollMaxX'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetScrollMaxY(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetScrollMaxY'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetScrollMaxY();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetScrollMaxY",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetScrollMaxY'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetScrollX(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetScrollX'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetScrollX();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetScrollX",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetScrollX'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetScrollY(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetScrollY'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetScrollY();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetScrollY",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetScrollY'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetStyleColorName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:GetStyleColorName");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetStyleColorName'", nullptr);
            return 0;
        }
        const char* ret = imgui::ImGui::GetStyleColorName(arg0);
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetStyleColorName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetStyleColorName'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetStyleColorVec4(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:GetStyleColorVec4");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetStyleColorVec4'", nullptr);
            return 0;
        }
        const ImVec4& ret = imgui::ImGui::GetStyleColorVec4(arg0);
        ImVec4_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetStyleColorVec4",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetStyleColorVec4'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetTextLineHeight(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetTextLineHeight'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetTextLineHeight();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetTextLineHeight",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetTextLineHeight'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetTextLineHeightWithSpacing(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetTextLineHeightWithSpacing'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetTextLineHeightWithSpacing();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetTextLineHeightWithSpacing",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetTextLineHeightWithSpacing'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetTime(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetTime'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetTime();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetTime",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetTime'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetTreeNodeToLabelSpacing(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetTreeNodeToLabelSpacing'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetTreeNodeToLabelSpacing();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetTreeNodeToLabelSpacing",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetTreeNodeToLabelSpacing'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetVersion(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetVersion'", nullptr);
            return 0;
        }
        const char* ret = imgui::ImGui::GetVersion();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetVersion",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetVersion'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetWindowContentRegionMax(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetWindowContentRegionMax'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::GetWindowContentRegionMax();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetWindowContentRegionMax",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetWindowContentRegionMax'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetWindowContentRegionMin(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetWindowContentRegionMin'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::GetWindowContentRegionMin();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetWindowContentRegionMin",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetWindowContentRegionMin'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetWindowContentRegionWidth(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetWindowContentRegionWidth'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetWindowContentRegionWidth();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetWindowContentRegionWidth",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetWindowContentRegionWidth'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetWindowDockID(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetWindowDockID'", nullptr);
            return 0;
        }
        unsigned int ret = imgui::ImGui::GetWindowDockID();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetWindowDockID",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetWindowDockID'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetWindowDpiScale(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetWindowDpiScale'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetWindowDpiScale();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetWindowDpiScale",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetWindowDpiScale'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetWindowDrawList(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetWindowDrawList'", nullptr);
            return 0;
        }
        ImDrawList* ret = imgui::ImGui::GetWindowDrawList();
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetWindowDrawList",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetWindowDrawList'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetWindowHeight(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetWindowHeight'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetWindowHeight();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetWindowHeight",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetWindowHeight'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetWindowPos(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetWindowPos'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::GetWindowPos();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetWindowPos",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetWindowPos'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetWindowSize(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetWindowSize'", nullptr);
            return 0;
        }
        ImVec2 ret = imgui::ImGui::GetWindowSize();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetWindowSize",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetWindowSize'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetWindowViewport(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetWindowViewport'", nullptr);
            return 0;
        }
        ImGuiViewport* ret = imgui::ImGui::GetWindowViewport();
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetWindowViewport",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetWindowViewport'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_GetWindowWidth(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_GetWindowWidth'", nullptr);
            return 0;
        }
        double ret = imgui::ImGui::GetWindowWidth();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:GetWindowWidth",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_GetWindowWidth'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_Indent(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_Indent'", nullptr);
            return 0;
        }
        imgui::ImGui::Indent();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:Indent");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_Indent'", nullptr);
            return 0;
        }
        imgui::ImGui::Indent(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:Indent",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_Indent'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_InvisibleButton(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        const char* arg0;
        ImVec2 arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:InvisibleButton"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImGui:InvisibleButton");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_InvisibleButton'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::InvisibleButton(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:InvisibleButton",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_InvisibleButton'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsAnyItemActive(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsAnyItemActive'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsAnyItemActive();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsAnyItemActive",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsAnyItemActive'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsAnyItemFocused(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsAnyItemFocused'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsAnyItemFocused();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsAnyItemFocused",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsAnyItemFocused'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsAnyItemHovered(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsAnyItemHovered'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsAnyItemHovered();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsAnyItemHovered",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsAnyItemHovered'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsAnyMouseDown(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsAnyMouseDown'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsAnyMouseDown();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsAnyMouseDown",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsAnyMouseDown'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsItemActivated(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsItemActivated'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsItemActivated();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsItemActivated",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsItemActivated'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsItemActive(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsItemActive'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsItemActive();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsItemActive",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsItemActive'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsItemClicked(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsItemClicked'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsItemClicked();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:IsItemClicked");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsItemClicked'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsItemClicked(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsItemClicked",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsItemClicked'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsItemDeactivated(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsItemDeactivated'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsItemDeactivated();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsItemDeactivated",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsItemDeactivated'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsItemDeactivatedAfterEdit(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsItemDeactivatedAfterEdit'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsItemDeactivatedAfterEdit();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsItemDeactivatedAfterEdit",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsItemDeactivatedAfterEdit'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsItemEdited(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsItemEdited'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsItemEdited();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsItemEdited",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsItemEdited'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsItemFocused(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsItemFocused'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsItemFocused();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsItemFocused",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsItemFocused'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsItemHovered(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsItemHovered'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsItemHovered();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:IsItemHovered");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsItemHovered'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsItemHovered(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsItemHovered",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsItemHovered'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsItemToggledOpen(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsItemToggledOpen'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsItemToggledOpen();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsItemToggledOpen",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsItemToggledOpen'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsItemVisible(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsItemVisible'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsItemVisible();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsItemVisible",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsItemVisible'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsKeyDown(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:IsKeyDown");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsKeyDown'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsKeyDown(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsKeyDown",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsKeyDown'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsKeyPressed(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:IsKeyPressed");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsKeyPressed'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsKeyPressed(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 2)
    {
        int arg0;
        bool arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:IsKeyPressed");
        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "imgui.ImGui:IsKeyPressed");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsKeyPressed'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsKeyPressed(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsKeyPressed",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsKeyPressed'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsKeyReleased(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:IsKeyReleased");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsKeyReleased'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsKeyReleased(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsKeyReleased",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsKeyReleased'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsMouseClicked(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:IsMouseClicked");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsMouseClicked'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsMouseClicked(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 2)
    {
        int arg0;
        bool arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:IsMouseClicked");
        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "imgui.ImGui:IsMouseClicked");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsMouseClicked'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsMouseClicked(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsMouseClicked",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsMouseClicked'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsMouseDoubleClicked(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:IsMouseDoubleClicked");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsMouseDoubleClicked'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsMouseDoubleClicked(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsMouseDoubleClicked",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsMouseDoubleClicked'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsMouseDown(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:IsMouseDown");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsMouseDown'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsMouseDown(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsMouseDown",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsMouseDown'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsMouseDragging(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:IsMouseDragging");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsMouseDragging'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsMouseDragging(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 2)
    {
        int arg0;
        double arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:IsMouseDragging");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImGui:IsMouseDragging");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsMouseDragging'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsMouseDragging(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsMouseDragging",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsMouseDragging'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsMouseHoveringRect(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGui:IsMouseHoveringRect");
        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImGui:IsMouseHoveringRect");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsMouseHoveringRect'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsMouseHoveringRect(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 3)
    {
        ImVec2 arg0;
        ImVec2 arg1;
        bool arg2;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGui:IsMouseHoveringRect");
        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImGui:IsMouseHoveringRect");
        ok &= luaval_to_boolean(tolua_S, 4,&arg2, "imgui.ImGui:IsMouseHoveringRect");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsMouseHoveringRect'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsMouseHoveringRect(arg0, arg1, arg2);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsMouseHoveringRect",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsMouseHoveringRect'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsMouseReleased(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:IsMouseReleased");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsMouseReleased'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsMouseReleased(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsMouseReleased",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsMouseReleased'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsPopupOpen(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:IsPopupOpen"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsPopupOpen'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsPopupOpen(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 2)
    {
        const char* arg0;
        int arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:IsPopupOpen"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImGui:IsPopupOpen");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsPopupOpen'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsPopupOpen(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsPopupOpen",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsPopupOpen'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsRectVisible(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 2)
        {
            ImVec2 arg0;
            ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGui:IsRectVisible");
            if (!ok) { break; }
            ImVec2 arg1;
            ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImGui:IsRectVisible");
            if (!ok) { break; }
            bool ret = imgui::ImGui::IsRectVisible(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 1)
        {
            ImVec2 arg0;
            ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGui:IsRectVisible");
            if (!ok) { break; }
            bool ret = imgui::ImGui::IsRectVisible(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "imgui.ImGui:IsRectVisible",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsRectVisible'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsWindowAppearing(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsWindowAppearing'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsWindowAppearing();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsWindowAppearing",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsWindowAppearing'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsWindowCollapsed(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsWindowCollapsed'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsWindowCollapsed();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsWindowCollapsed",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsWindowCollapsed'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsWindowDocked(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsWindowDocked'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsWindowDocked();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsWindowDocked",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsWindowDocked'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsWindowFocused(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsWindowFocused'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsWindowFocused();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:IsWindowFocused");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsWindowFocused'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsWindowFocused(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsWindowFocused",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsWindowFocused'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_IsWindowHovered(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsWindowHovered'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsWindowHovered();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:IsWindowHovered");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_IsWindowHovered'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::IsWindowHovered(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:IsWindowHovered",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_IsWindowHovered'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_LabelText(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        const char* arg0;
        const char* arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:LabelText"); arg0 = arg0_tmp.c_str();
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "imgui.ImGui:LabelText"); arg1 = arg1_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_LabelText'", nullptr);
            return 0;
        }
        imgui::ImGui::LabelText(arg0, "%s", arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:LabelText",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_LabelText'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_ListBoxFooter(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_ListBoxFooter'", nullptr);
            return 0;
        }
        imgui::ImGui::ListBoxFooter();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:ListBoxFooter",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_ListBoxFooter'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_LoadIniSettingsFromDisk(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:LoadIniSettingsFromDisk"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_LoadIniSettingsFromDisk'", nullptr);
            return 0;
        }
        imgui::ImGui::LoadIniSettingsFromDisk(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:LoadIniSettingsFromDisk",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_LoadIniSettingsFromDisk'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_LoadIniSettingsFromMemory(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:LoadIniSettingsFromMemory"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_LoadIniSettingsFromMemory'", nullptr);
            return 0;
        }
        imgui::ImGui::LoadIniSettingsFromMemory(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        const char* arg0;
        unsigned int arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:LoadIniSettingsFromMemory"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_uint32(tolua_S, 3,&arg1, "imgui.ImGui:LoadIniSettingsFromMemory");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_LoadIniSettingsFromMemory'", nullptr);
            return 0;
        }
        imgui::ImGui::LoadIniSettingsFromMemory(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:LoadIniSettingsFromMemory",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_LoadIniSettingsFromMemory'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_LogButtons(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_LogButtons'", nullptr);
            return 0;
        }
        imgui::ImGui::LogButtons();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:LogButtons",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_LogButtons'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_LogFinish(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_LogFinish'", nullptr);
            return 0;
        }
        imgui::ImGui::LogFinish();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:LogFinish",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_LogFinish'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_LogText(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:LogText"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_LogText'", nullptr);
            return 0;
        }
        imgui::ImGui::LogText("%s", arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:LogText",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_LogText'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_LogToClipboard(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_LogToClipboard'", nullptr);
            return 0;
        }
        imgui::ImGui::LogToClipboard();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:LogToClipboard");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_LogToClipboard'", nullptr);
            return 0;
        }
        imgui::ImGui::LogToClipboard(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:LogToClipboard",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_LogToClipboard'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_LogToFile(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_LogToFile'", nullptr);
            return 0;
        }
        imgui::ImGui::LogToFile();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:LogToFile");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_LogToFile'", nullptr);
            return 0;
        }
        imgui::ImGui::LogToFile(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        int arg0;
        const char* arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:LogToFile");
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "imgui.ImGui:LogToFile"); arg1 = arg1_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_LogToFile'", nullptr);
            return 0;
        }
        imgui::ImGui::LogToFile(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:LogToFile",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_LogToFile'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_LogToTTY(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_LogToTTY'", nullptr);
            return 0;
        }
        imgui::ImGui::LogToTTY();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:LogToTTY");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_LogToTTY'", nullptr);
            return 0;
        }
        imgui::ImGui::LogToTTY(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:LogToTTY",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_LogToTTY'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_NewFrame(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_NewFrame'", nullptr);
            return 0;
        }
        imgui::ImGui::NewFrame();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:NewFrame",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_NewFrame'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_NewLine(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_NewLine'", nullptr);
            return 0;
        }
        imgui::ImGui::NewLine();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:NewLine",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_NewLine'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_NextColumn(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_NextColumn'", nullptr);
            return 0;
        }
        imgui::ImGui::NextColumn();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:NextColumn",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_NextColumn'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_OpenPopup(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:OpenPopup"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_OpenPopup'", nullptr);
            return 0;
        }
        imgui::ImGui::OpenPopup(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        const char* arg0;
        int arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:OpenPopup"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImGui:OpenPopup");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_OpenPopup'", nullptr);
            return 0;
        }
        imgui::ImGui::OpenPopup(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:OpenPopup",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_OpenPopup'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_OpenPopupContextItem(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_OpenPopupContextItem'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::OpenPopupContextItem();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:OpenPopupContextItem"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_OpenPopupContextItem'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::OpenPopupContextItem(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 2)
    {
        const char* arg0;
        int arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:OpenPopupContextItem"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImGui:OpenPopupContextItem");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_OpenPopupContextItem'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::OpenPopupContextItem(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:OpenPopupContextItem",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_OpenPopupContextItem'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_PopAllowKeyboardFocus(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_PopAllowKeyboardFocus'", nullptr);
            return 0;
        }
        imgui::ImGui::PopAllowKeyboardFocus();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:PopAllowKeyboardFocus",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_PopAllowKeyboardFocus'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_PopButtonRepeat(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_PopButtonRepeat'", nullptr);
            return 0;
        }
        imgui::ImGui::PopButtonRepeat();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:PopButtonRepeat",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_PopButtonRepeat'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_PopClipRect(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_PopClipRect'", nullptr);
            return 0;
        }
        imgui::ImGui::PopClipRect();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:PopClipRect",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_PopClipRect'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_PopFont(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_PopFont'", nullptr);
            return 0;
        }
        imgui::ImGui::PopFont();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:PopFont",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_PopFont'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_PopID(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_PopID'", nullptr);
            return 0;
        }
        imgui::ImGui::PopID();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:PopID",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_PopID'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_PopItemWidth(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_PopItemWidth'", nullptr);
            return 0;
        }
        imgui::ImGui::PopItemWidth();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:PopItemWidth",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_PopItemWidth'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_PopStyleColor(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_PopStyleColor'", nullptr);
            return 0;
        }
        imgui::ImGui::PopStyleColor();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:PopStyleColor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_PopStyleColor'", nullptr);
            return 0;
        }
        imgui::ImGui::PopStyleColor(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:PopStyleColor",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_PopStyleColor'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_PopStyleVar(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_PopStyleVar'", nullptr);
            return 0;
        }
        imgui::ImGui::PopStyleVar();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:PopStyleVar");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_PopStyleVar'", nullptr);
            return 0;
        }
        imgui::ImGui::PopStyleVar(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:PopStyleVar",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_PopStyleVar'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_PopTextWrapPos(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_PopTextWrapPos'", nullptr);
            return 0;
        }
        imgui::ImGui::PopTextWrapPos();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:PopTextWrapPos",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_PopTextWrapPos'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_ProgressBar(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:ProgressBar");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_ProgressBar'", nullptr);
            return 0;
        }
        imgui::ImGui::ProgressBar(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        double arg0;
        ImVec2 arg1;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:ProgressBar");
        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImGui:ProgressBar");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_ProgressBar'", nullptr);
            return 0;
        }
        imgui::ImGui::ProgressBar(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3)
    {
        double arg0;
        ImVec2 arg1;
        const char* arg2;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:ProgressBar");
        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImGui:ProgressBar");
        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "imgui.ImGui:ProgressBar"); arg2 = arg2_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_ProgressBar'", nullptr);
            return 0;
        }
        imgui::ImGui::ProgressBar(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:ProgressBar",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_ProgressBar'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_PushAllowKeyboardFocus(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGui:PushAllowKeyboardFocus");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_PushAllowKeyboardFocus'", nullptr);
            return 0;
        }
        imgui::ImGui::PushAllowKeyboardFocus(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:PushAllowKeyboardFocus",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_PushAllowKeyboardFocus'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_PushButtonRepeat(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGui:PushButtonRepeat");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_PushButtonRepeat'", nullptr);
            return 0;
        }
        imgui::ImGui::PushButtonRepeat(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:PushButtonRepeat",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_PushButtonRepeat'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_PushClipRect(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 3)
    {
        ImVec2 arg0;
        ImVec2 arg1;
        bool arg2;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGui:PushClipRect");
        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImGui:PushClipRect");
        ok &= luaval_to_boolean(tolua_S, 4,&arg2, "imgui.ImGui:PushClipRect");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_PushClipRect'", nullptr);
            return 0;
        }
        imgui::ImGui::PushClipRect(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:PushClipRect",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_PushClipRect'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_PushItemWidth(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:PushItemWidth");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_PushItemWidth'", nullptr);
            return 0;
        }
        imgui::ImGui::PushItemWidth(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:PushItemWidth",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_PushItemWidth'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_PushTextWrapPos(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_PushTextWrapPos'", nullptr);
            return 0;
        }
        imgui::ImGui::PushTextWrapPos();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:PushTextWrapPos");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_PushTextWrapPos'", nullptr);
            return 0;
        }
        imgui::ImGui::PushTextWrapPos(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:PushTextWrapPos",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_PushTextWrapPos'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_RadioButton(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        const char* arg0;
        bool arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:RadioButton"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "imgui.ImGui:RadioButton");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_RadioButton'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::RadioButton(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:RadioButton",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_RadioButton'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_Render(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_Render'", nullptr);
            return 0;
        }
        imgui::ImGui::Render();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:Render",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_Render'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_RenderPlatformWindowsDefault(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_RenderPlatformWindowsDefault'", nullptr);
            return 0;
        }
        imgui::ImGui::RenderPlatformWindowsDefault();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:RenderPlatformWindowsDefault",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_RenderPlatformWindowsDefault'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_ResetMouseDragDelta(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_ResetMouseDragDelta'", nullptr);
            return 0;
        }
        imgui::ImGui::ResetMouseDragDelta();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:ResetMouseDragDelta");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_ResetMouseDragDelta'", nullptr);
            return 0;
        }
        imgui::ImGui::ResetMouseDragDelta(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:ResetMouseDragDelta",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_ResetMouseDragDelta'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SameLine(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SameLine'", nullptr);
            return 0;
        }
        imgui::ImGui::SameLine();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:SameLine");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SameLine'", nullptr);
            return 0;
        }
        imgui::ImGui::SameLine(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        double arg0;
        double arg1;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:SameLine");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImGui:SameLine");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SameLine'", nullptr);
            return 0;
        }
        imgui::ImGui::SameLine(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SameLine",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SameLine'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SaveIniSettingsToDisk(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:SaveIniSettingsToDisk"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SaveIniSettingsToDisk'", nullptr);
            return 0;
        }
        imgui::ImGui::SaveIniSettingsToDisk(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SaveIniSettingsToDisk",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SaveIniSettingsToDisk'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_Separator(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_Separator'", nullptr);
            return 0;
        }
        imgui::ImGui::Separator();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:Separator",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_Separator'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetClipboardText(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:SetClipboardText"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetClipboardText'", nullptr);
            return 0;
        }
        imgui::ImGui::SetClipboardText(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetClipboardText",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetClipboardText'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetColorEditOptions(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:SetColorEditOptions");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetColorEditOptions'", nullptr);
            return 0;
        }
        imgui::ImGui::SetColorEditOptions(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetColorEditOptions",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetColorEditOptions'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetColumnOffset(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        int arg0;
        double arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:SetColumnOffset");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImGui:SetColumnOffset");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetColumnOffset'", nullptr);
            return 0;
        }
        imgui::ImGui::SetColumnOffset(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetColumnOffset",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetColumnOffset'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetColumnWidth(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        int arg0;
        double arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:SetColumnWidth");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImGui:SetColumnWidth");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetColumnWidth'", nullptr);
            return 0;
        }
        imgui::ImGui::SetColumnWidth(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetColumnWidth",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetColumnWidth'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetCursorPos(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGui:SetCursorPos");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetCursorPos'", nullptr);
            return 0;
        }
        imgui::ImGui::SetCursorPos(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetCursorPos",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetCursorPos'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetCursorPosX(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:SetCursorPosX");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetCursorPosX'", nullptr);
            return 0;
        }
        imgui::ImGui::SetCursorPosX(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetCursorPosX",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetCursorPosX'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetCursorPosY(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:SetCursorPosY");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetCursorPosY'", nullptr);
            return 0;
        }
        imgui::ImGui::SetCursorPosY(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetCursorPosY",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetCursorPosY'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetCursorScreenPos(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGui:SetCursorScreenPos");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetCursorScreenPos'", nullptr);
            return 0;
        }
        imgui::ImGui::SetCursorScreenPos(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetCursorScreenPos",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetCursorScreenPos'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetItemAllowOverlap(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetItemAllowOverlap'", nullptr);
            return 0;
        }
        imgui::ImGui::SetItemAllowOverlap();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetItemAllowOverlap",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetItemAllowOverlap'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetItemDefaultFocus(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetItemDefaultFocus'", nullptr);
            return 0;
        }
        imgui::ImGui::SetItemDefaultFocus();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetItemDefaultFocus",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetItemDefaultFocus'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetKeyboardFocusHere(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetKeyboardFocusHere'", nullptr);
            return 0;
        }
        imgui::ImGui::SetKeyboardFocusHere();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:SetKeyboardFocusHere");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetKeyboardFocusHere'", nullptr);
            return 0;
        }
        imgui::ImGui::SetKeyboardFocusHere(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetKeyboardFocusHere",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetKeyboardFocusHere'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetMouseCursor(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGui:SetMouseCursor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetMouseCursor'", nullptr);
            return 0;
        }
        imgui::ImGui::SetMouseCursor(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetMouseCursor",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetMouseCursor'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetNextItemOpen(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGui:SetNextItemOpen");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetNextItemOpen'", nullptr);
            return 0;
        }
        imgui::ImGui::SetNextItemOpen(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        bool arg0;
        int arg1;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGui:SetNextItemOpen");
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImGui:SetNextItemOpen");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetNextItemOpen'", nullptr);
            return 0;
        }
        imgui::ImGui::SetNextItemOpen(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetNextItemOpen",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetNextItemOpen'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetNextItemWidth(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:SetNextItemWidth");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetNextItemWidth'", nullptr);
            return 0;
        }
        imgui::ImGui::SetNextItemWidth(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetNextItemWidth",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetNextItemWidth'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetNextWindowBgAlpha(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:SetNextWindowBgAlpha");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetNextWindowBgAlpha'", nullptr);
            return 0;
        }
        imgui::ImGui::SetNextWindowBgAlpha(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetNextWindowBgAlpha",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetNextWindowBgAlpha'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetNextWindowCollapsed(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGui:SetNextWindowCollapsed");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetNextWindowCollapsed'", nullptr);
            return 0;
        }
        imgui::ImGui::SetNextWindowCollapsed(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        bool arg0;
        int arg1;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGui:SetNextWindowCollapsed");
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImGui:SetNextWindowCollapsed");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetNextWindowCollapsed'", nullptr);
            return 0;
        }
        imgui::ImGui::SetNextWindowCollapsed(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetNextWindowCollapsed",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetNextWindowCollapsed'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetNextWindowContentSize(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGui:SetNextWindowContentSize");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetNextWindowContentSize'", nullptr);
            return 0;
        }
        imgui::ImGui::SetNextWindowContentSize(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetNextWindowContentSize",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetNextWindowContentSize'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetNextWindowDockID(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImGui:SetNextWindowDockID");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetNextWindowDockID'", nullptr);
            return 0;
        }
        imgui::ImGui::SetNextWindowDockID(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        unsigned int arg0;
        int arg1;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImGui:SetNextWindowDockID");
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImGui:SetNextWindowDockID");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetNextWindowDockID'", nullptr);
            return 0;
        }
        imgui::ImGui::SetNextWindowDockID(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetNextWindowDockID",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetNextWindowDockID'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetNextWindowFocus(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetNextWindowFocus'", nullptr);
            return 0;
        }
        imgui::ImGui::SetNextWindowFocus();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetNextWindowFocus",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetNextWindowFocus'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetNextWindowPos(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGui:SetNextWindowPos");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetNextWindowPos'", nullptr);
            return 0;
        }
        imgui::ImGui::SetNextWindowPos(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        ImVec2 arg0;
        int arg1;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGui:SetNextWindowPos");
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImGui:SetNextWindowPos");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetNextWindowPos'", nullptr);
            return 0;
        }
        imgui::ImGui::SetNextWindowPos(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3)
    {
        ImVec2 arg0;
        int arg1;
        ImVec2 arg2;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGui:SetNextWindowPos");
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImGui:SetNextWindowPos");
        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImGui:SetNextWindowPos");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetNextWindowPos'", nullptr);
            return 0;
        }
        imgui::ImGui::SetNextWindowPos(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetNextWindowPos",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetNextWindowPos'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetNextWindowSize(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGui:SetNextWindowSize");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetNextWindowSize'", nullptr);
            return 0;
        }
        imgui::ImGui::SetNextWindowSize(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        ImVec2 arg0;
        int arg1;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGui:SetNextWindowSize");
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImGui:SetNextWindowSize");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetNextWindowSize'", nullptr);
            return 0;
        }
        imgui::ImGui::SetNextWindowSize(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetNextWindowSize",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetNextWindowSize'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetNextWindowSizeConstraints(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGui:SetNextWindowSizeConstraints");
        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImGui:SetNextWindowSizeConstraints");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetNextWindowSizeConstraints'", nullptr);
            return 0;
        }
        imgui::ImGui::SetNextWindowSizeConstraints(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetNextWindowSizeConstraints",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetNextWindowSizeConstraints'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetNextWindowViewport(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImGui:SetNextWindowViewport");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetNextWindowViewport'", nullptr);
            return 0;
        }
        imgui::ImGui::SetNextWindowViewport(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetNextWindowViewport",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetNextWindowViewport'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetScrollFromPosX(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:SetScrollFromPosX");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetScrollFromPosX'", nullptr);
            return 0;
        }
        imgui::ImGui::SetScrollFromPosX(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        double arg0;
        double arg1;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:SetScrollFromPosX");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImGui:SetScrollFromPosX");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetScrollFromPosX'", nullptr);
            return 0;
        }
        imgui::ImGui::SetScrollFromPosX(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetScrollFromPosX",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetScrollFromPosX'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetScrollFromPosY(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:SetScrollFromPosY");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetScrollFromPosY'", nullptr);
            return 0;
        }
        imgui::ImGui::SetScrollFromPosY(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        double arg0;
        double arg1;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:SetScrollFromPosY");
        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImGui:SetScrollFromPosY");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetScrollFromPosY'", nullptr);
            return 0;
        }
        imgui::ImGui::SetScrollFromPosY(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetScrollFromPosY",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetScrollFromPosY'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetScrollHereX(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetScrollHereX'", nullptr);
            return 0;
        }
        imgui::ImGui::SetScrollHereX();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:SetScrollHereX");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetScrollHereX'", nullptr);
            return 0;
        }
        imgui::ImGui::SetScrollHereX(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetScrollHereX",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetScrollHereX'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetScrollHereY(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetScrollHereY'", nullptr);
            return 0;
        }
        imgui::ImGui::SetScrollHereY();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:SetScrollHereY");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetScrollHereY'", nullptr);
            return 0;
        }
        imgui::ImGui::SetScrollHereY(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetScrollHereY",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetScrollHereY'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetScrollX(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:SetScrollX");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetScrollX'", nullptr);
            return 0;
        }
        imgui::ImGui::SetScrollX(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetScrollX",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetScrollX'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetScrollY(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:SetScrollY");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetScrollY'", nullptr);
            return 0;
        }
        imgui::ImGui::SetScrollY(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetScrollY",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetScrollY'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetTabItemClosed(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:SetTabItemClosed"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetTabItemClosed'", nullptr);
            return 0;
        }
        imgui::ImGui::SetTabItemClosed(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetTabItemClosed",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetTabItemClosed'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetTooltip(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:SetTooltip"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetTooltip'", nullptr);
            return 0;
        }
        imgui::ImGui::SetTooltip("%s", arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetTooltip",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetTooltip'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetWindowCollapsed(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        const char* arg0;
        bool arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:SetWindowCollapsed"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "imgui.ImGui:SetWindowCollapsed");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetWindowCollapsed'", nullptr);
            return 0;
        }
        imgui::ImGui::SetWindowCollapsed(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3)
    {
        const char* arg0;
        bool arg1;
        int arg2;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:SetWindowCollapsed"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "imgui.ImGui:SetWindowCollapsed");
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "imgui.ImGui:SetWindowCollapsed");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetWindowCollapsed'", nullptr);
            return 0;
        }
        imgui::ImGui::SetWindowCollapsed(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetWindowCollapsed",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetWindowCollapsed'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetWindowFocus(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:SetWindowFocus"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetWindowFocus'", nullptr);
            return 0;
        }
        imgui::ImGui::SetWindowFocus(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetWindowFocus",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetWindowFocus'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetWindowFontScale(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:SetWindowFontScale");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetWindowFontScale'", nullptr);
            return 0;
        }
        imgui::ImGui::SetWindowFontScale(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetWindowFontScale",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetWindowFontScale'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetWindowPos(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        const char* arg0;
        ImVec2 arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:SetWindowPos"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImGui:SetWindowPos");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetWindowPos'", nullptr);
            return 0;
        }
        imgui::ImGui::SetWindowPos(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3)
    {
        const char* arg0;
        ImVec2 arg1;
        int arg2;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:SetWindowPos"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImGui:SetWindowPos");
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "imgui.ImGui:SetWindowPos");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetWindowPos'", nullptr);
            return 0;
        }
        imgui::ImGui::SetWindowPos(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetWindowPos",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetWindowPos'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SetWindowSize(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        const char* arg0;
        ImVec2 arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:SetWindowSize"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImGui:SetWindowSize");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetWindowSize'", nullptr);
            return 0;
        }
        imgui::ImGui::SetWindowSize(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3)
    {
        const char* arg0;
        ImVec2 arg1;
        int arg2;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:SetWindowSize"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImGui:SetWindowSize");
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "imgui.ImGui:SetWindowSize");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SetWindowSize'", nullptr);
            return 0;
        }
        imgui::ImGui::SetWindowSize(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SetWindowSize",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SetWindowSize'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_ShowFontSelector(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:ShowFontSelector"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_ShowFontSelector'", nullptr);
            return 0;
        }
        imgui::ImGui::ShowFontSelector(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:ShowFontSelector",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_ShowFontSelector'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_ShowStyleSelector(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:ShowStyleSelector"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_ShowStyleSelector'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::ShowStyleSelector(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:ShowStyleSelector",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_ShowStyleSelector'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_ShowUserGuide(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_ShowUserGuide'", nullptr);
            return 0;
        }
        imgui::ImGui::ShowUserGuide();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:ShowUserGuide",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_ShowUserGuide'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_SmallButton(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:SmallButton"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_SmallButton'", nullptr);
            return 0;
        }
        bool ret = imgui::ImGui::SmallButton(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:SmallButton",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_SmallButton'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_Spacing(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_Spacing'", nullptr);
            return 0;
        }
        imgui::ImGui::Spacing();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:Spacing",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_Spacing'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_Text(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:Text"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_Text'", nullptr);
            return 0;
        }
        imgui::ImGui::Text("%s", arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:Text",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_Text'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_TextColored(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        ImVec4 arg0;
        const char* arg1;
        ok &= luaval_to_ImVec4(tolua_S, 2, &arg0, "imgui.ImGui:TextColored");
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "imgui.ImGui:TextColored"); arg1 = arg1_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_TextColored'", nullptr);
            return 0;
        }
        imgui::ImGui::TextColored(arg0, "%s", arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:TextColored",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_TextColored'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_TextDisabled(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:TextDisabled"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_TextDisabled'", nullptr);
            return 0;
        }
        imgui::ImGui::TextDisabled("%s", arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:TextDisabled",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_TextDisabled'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_TextUnformatted(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:TextUnformatted"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_TextUnformatted'", nullptr);
            return 0;
        }
        imgui::ImGui::TextUnformatted(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        const char* arg0;
        const char* arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:TextUnformatted"); arg0 = arg0_tmp.c_str();
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "imgui.ImGui:TextUnformatted"); arg1 = arg1_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_TextUnformatted'", nullptr);
            return 0;
        }
        imgui::ImGui::TextUnformatted(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:TextUnformatted",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_TextUnformatted'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_TextWrapped(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:TextWrapped"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_TextWrapped'", nullptr);
            return 0;
        }
        imgui::ImGui::TextWrapped("%s", arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:TextWrapped",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_TextWrapped'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_TreeNode(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 2)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:TreeNode"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "imgui.ImGui:TreeNode"); arg1 = arg1_tmp.c_str();
            if (!ok) { break; }
            bool ret = imgui::ImGui::TreeNode(arg0, "%s", arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 1)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:TreeNode"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            bool ret = imgui::ImGui::TreeNode(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "imgui.ImGui:TreeNode",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_TreeNode'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_TreeNodeEx(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 3)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:TreeNodeEx"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImGui:TreeNodeEx");
            if (!ok) { break; }
            const char* arg2;
            std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "imgui.ImGui:TreeNodeEx"); arg2 = arg2_tmp.c_str();
            if (!ok) { break; }
            bool ret = imgui::ImGui::TreeNodeEx(arg0, arg1, "%s", arg2);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 1)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:TreeNodeEx"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            bool ret = imgui::ImGui::TreeNodeEx(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 2)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:TreeNodeEx"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImGui:TreeNodeEx");
            if (!ok) { break; }
            bool ret = imgui::ImGui::TreeNodeEx(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "imgui.ImGui:TreeNodeEx",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_TreeNodeEx'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_TreePop(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_TreePop'", nullptr);
            return 0;
        }
        imgui::ImGui::TreePop();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:TreePop",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_TreePop'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_TreePush(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 0)
        {
            imgui::ImGui::TreePush();
            lua_settop(tolua_S, 1);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 1)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGui:TreePush"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            imgui::ImGui::TreePush(arg0);
            lua_settop(tolua_S, 1);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "imgui.ImGui:TreePush",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_TreePush'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_Unindent(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_Unindent'", nullptr);
            return 0;
        }
        imgui::ImGui::Unindent();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGui:Unindent");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_Unindent'", nullptr);
            return 0;
        }
        imgui::ImGui::Unindent(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:Unindent",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_Unindent'.",&tolua_err);
#endif
    return 0;
}
int lua_x_imgui_ImGui_UpdatePlatformWindows(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ImGui",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imgui_ImGui_UpdatePlatformWindows'", nullptr);
            return 0;
        }
        imgui::ImGui::UpdatePlatformWindows();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ImGui:UpdatePlatformWindows",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imgui_ImGui_UpdatePlatformWindows'.",&tolua_err);
#endif
    return 0;
}
static int lua_x_imgui_ImGui_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ImGui)");
    return 0;
}

std::vector<luaL_Reg> register_all_x_imgui(lua_State* tolua_S)
{
    std::vector<luaL_Reg> f = {
        { "destroyPlatformWindows", lua_x_imgui_ImGui_DestroyPlatformWindows },
		{ "showUserGuide", lua_x_imgui_ImGui_ShowUserGuide },
		{ "beginTooltip", lua_x_imgui_ImGui_BeginTooltip },
		{ "isItemEdited", lua_x_imgui_ImGui_IsItemEdited },
		{ "setScrollHereY", lua_x_imgui_ImGui_SetScrollHereY },
		{ "setScrollHereX", lua_x_imgui_ImGui_SetScrollHereX },
		{ "getBackgroundDrawList", lua_x_imgui_ImGui_GetBackgroundDrawList },
		{ "isKeyPressed", lua_x_imgui_ImGui_IsKeyPressed },
		{ "endTabBar", lua_x_imgui_ImGui_EndTabBar },
		{ "endTabItem", lua_x_imgui_ImGui_EndTabItem },
		{ "setWindowPos", lua_x_imgui_ImGui_SetWindowPos },
		{ "beginPopupContextWindow", lua_x_imgui_ImGui_BeginPopupContextWindow },
		{ "setColumnOffset", lua_x_imgui_ImGui_SetColumnOffset },
		{ "isMouseDoubleClicked", lua_x_imgui_ImGui_IsMouseDoubleClicked },
		{ "getFontTexUvWhitePixel", lua_x_imgui_ImGui_GetFontTexUvWhitePixel },
		{ "labelText", lua_x_imgui_ImGui_LabelText },
		{ "textWrapped", lua_x_imgui_ImGui_TextWrapped },
		{ "getTime", lua_x_imgui_ImGui_GetTime },
		{ "endTooltip", lua_x_imgui_ImGui_EndTooltip },
		{ "getScrollMaxX", lua_x_imgui_ImGui_GetScrollMaxX },
		{ "getScrollMaxY", lua_x_imgui_ImGui_GetScrollMaxY },
		{ "endMainMenuBar", lua_x_imgui_ImGui_EndMainMenuBar },
		{ "nextColumn", lua_x_imgui_ImGui_NextColumn },
		{ "loadIniSettingsFromDisk", lua_x_imgui_ImGui_LoadIniSettingsFromDisk },
		{ "findViewportByID", lua_x_imgui_ImGui_FindViewportByID },
		{ "getContentRegionAvail", lua_x_imgui_ImGui_GetContentRegionAvail },
		{ "isRectVisible", lua_x_imgui_ImGui_IsRectVisible },
		{ "getCursorPos", lua_x_imgui_ImGui_GetCursorPos },
		{ "getTextLineHeight", lua_x_imgui_ImGui_GetTextLineHeight },
		{ "indent", lua_x_imgui_ImGui_Indent },
		{ "endMenu", lua_x_imgui_ImGui_EndMenu },
		{ "getCursorScreenPos", lua_x_imgui_ImGui_GetCursorScreenPos },
		{ "openPopup", lua_x_imgui_ImGui_OpenPopup },
		{ "getItemRectMax", lua_x_imgui_ImGui_GetItemRectMax },
		{ "treeNodeEx", lua_x_imgui_ImGui_TreeNodeEx },
		{ "setScrollX", lua_x_imgui_ImGui_SetScrollX },
		{ "getStyleColorName", lua_x_imgui_ImGui_GetStyleColorName },
		{ "getWindowViewport", lua_x_imgui_ImGui_GetWindowViewport },
		{ "setTabItemClosed", lua_x_imgui_ImGui_SetTabItemClosed },
		{ "logText", lua_x_imgui_ImGui_LogText },
		{ "getWindowDpiScale", lua_x_imgui_ImGui_GetWindowDpiScale },
		{ "setWindowFontScale", lua_x_imgui_ImGui_SetWindowFontScale },
		{ "isMouseHoveringRect", lua_x_imgui_ImGui_IsMouseHoveringRect },
		{ "isItemHovered", lua_x_imgui_ImGui_IsItemHovered },
		{ "setScrollY", lua_x_imgui_ImGui_SetScrollY },
		{ "getFontSize", lua_x_imgui_ImGui_GetFontSize },
		{ "getWindowSize", lua_x_imgui_ImGui_GetWindowSize },
		{ "render", lua_x_imgui_ImGui_Render },
		{ "colorConvertFloat4ToU32", lua_x_imgui_ImGui_ColorConvertFloat4ToU32 },
		{ "isItemDeactivatedAfterEdit", lua_x_imgui_ImGui_IsItemDeactivatedAfterEdit },
		{ "colorConvertU32ToFloat4", lua_x_imgui_ImGui_ColorConvertU32ToFloat4 },
		{ "getMouseDragDelta", lua_x_imgui_ImGui_GetMouseDragDelta },
		{ "renderPlatformWindowsDefault", lua_x_imgui_ImGui_RenderPlatformWindowsDefault },
		{ "getColumnsCount", lua_x_imgui_ImGui_GetColumnsCount },
		{ "setColorEditOptions", lua_x_imgui_ImGui_SetColorEditOptions },
		{ "endPopup", lua_x_imgui_ImGui_EndPopup },
		{ "getWindowContentRegionMax", lua_x_imgui_ImGui_GetWindowContentRegionMax },
		{ "loadIniSettingsFromMemory", lua_x_imgui_ImGui_LoadIniSettingsFromMemory },
		{ "getColumnIndex", lua_x_imgui_ImGui_GetColumnIndex },
		{ "setColumnWidth", lua_x_imgui_ImGui_SetColumnWidth },
		{ "isMouseClicked", lua_x_imgui_ImGui_IsMouseClicked },
		{ "getItemRectSize", lua_x_imgui_ImGui_GetItemRectSize },
		{ "getWindowContentRegionMin", lua_x_imgui_ImGui_GetWindowContentRegionMin },
		{ "popFont", lua_x_imgui_ImGui_PopFont },
		{ "popButtonRepeat", lua_x_imgui_ImGui_PopButtonRepeat },
		{ "beginMainMenuBar", lua_x_imgui_ImGui_BeginMainMenuBar },
		{ "textDisabled", lua_x_imgui_ImGui_TextDisabled },
		{ "setNextItemWidth", lua_x_imgui_ImGui_SetNextItemWidth },
		{ "beginMenuBar", lua_x_imgui_ImGui_BeginMenuBar },
		{ "beginPopupContextVoid", lua_x_imgui_ImGui_BeginPopupContextVoid },
		{ "popStyleVar", lua_x_imgui_ImGui_PopStyleVar },
		{ "getClipboardText", lua_x_imgui_ImGui_GetClipboardText },
		{ "getMouseCursor", lua_x_imgui_ImGui_GetMouseCursor },
		{ "setTooltip", lua_x_imgui_ImGui_SetTooltip },
		{ "isItemActivated", lua_x_imgui_ImGui_IsItemActivated },
		{ "logToFile", lua_x_imgui_ImGui_LogToFile },
		{ "getFrameCount", lua_x_imgui_ImGui_GetFrameCount },
		{ "calcItemWidth", lua_x_imgui_ImGui_CalcItemWidth },
		{ "pushButtonRepeat", lua_x_imgui_ImGui_PushButtonRepeat },
		{ "smallButton", lua_x_imgui_ImGui_SmallButton },
		{ "setNextWindowFocus", lua_x_imgui_ImGui_SetNextWindowFocus },
		{ "isWindowAppearing", lua_x_imgui_ImGui_IsWindowAppearing },
		{ "closeCurrentPopup", lua_x_imgui_ImGui_CloseCurrentPopup },
		{ "getColumnOffset", lua_x_imgui_ImGui_GetColumnOffset },
		{ "isItemToggledOpen", lua_x_imgui_ImGui_IsItemToggledOpen },
		{ "dummy", lua_x_imgui_ImGui_Dummy },
		{ "setWindowCollapsed", lua_x_imgui_ImGui_SetWindowCollapsed },
		{ "popItemWidth", lua_x_imgui_ImGui_PopItemWidth },
		{ "getKeyIndex", lua_x_imgui_ImGui_GetKeyIndex },
		{ "pushItemWidth", lua_x_imgui_ImGui_PushItemWidth },
		{ "logButtons", lua_x_imgui_ImGui_LogButtons },
		{ "separator", lua_x_imgui_ImGui_Separator },
		{ "isAnyMouseDown", lua_x_imgui_ImGui_IsAnyMouseDown },
		{ "getScrollY", lua_x_imgui_ImGui_GetScrollY },
		{ "getScrollX", lua_x_imgui_ImGui_GetScrollX },
		{ "getForegroundDrawList", lua_x_imgui_ImGui_GetForegroundDrawList },
		{ "isMouseReleased", lua_x_imgui_ImGui_IsMouseReleased },
        { "openPopupContextItem", lua_x_imgui_ImGui_OpenPopupContextItem },
		{ "pushTextWrapPos", lua_x_imgui_ImGui_PushTextWrapPos },
		{ "setNextWindowSize", lua_x_imgui_ImGui_SetNextWindowSize },
		{ "showStyleSelector", lua_x_imgui_ImGui_ShowStyleSelector },
		{ "setNextWindowContentSize", lua_x_imgui_ImGui_SetNextWindowContentSize },
		{ "getWindowContentRegionWidth", lua_x_imgui_ImGui_GetWindowContentRegionWidth },
		{ "getTreeNodeToLabelSpacing", lua_x_imgui_ImGui_GetTreeNodeToLabelSpacing },
		{ "getTextLineHeightWithSpacing", lua_x_imgui_ImGui_GetTextLineHeightWithSpacing },
		{ "popAllowKeyboardFocus", lua_x_imgui_ImGui_PopAllowKeyboardFocus },
		{ "radioButton", lua_x_imgui_ImGui_RadioButton },
		{ "progressBar", lua_x_imgui_ImGui_ProgressBar },
		{ "calcTextSize", lua_x_imgui_ImGui_CalcTextSize },
		{ "endMenuBar", lua_x_imgui_ImGui_EndMenuBar },
		{ "sameLine", lua_x_imgui_ImGui_SameLine },
        { "debugCheckVersionAndDataLayout", lua_x_imgui_ImGui_DebugCheckVersionAndDataLayout },
		{ "popStyleColor", lua_x_imgui_ImGui_PopStyleColor },
		{ "arrowButton", lua_x_imgui_ImGui_ArrowButton },
		{ "getVersion", lua_x_imgui_ImGui_GetVersion },
		{ "setMouseCursor", lua_x_imgui_ImGui_SetMouseCursor },
		{ "resetMouseDragDelta", lua_x_imgui_ImGui_ResetMouseDragDelta },
		{ "dockSpaceOverViewport", lua_x_imgui_ImGui_DockSpaceOverViewport },
		{ "getItemRectMin", lua_x_imgui_ImGui_GetItemRectMin },
		{ "beginPopupContextItem", lua_x_imgui_ImGui_BeginPopupContextItem },
		{ "newLine", lua_x_imgui_ImGui_NewLine },
		{ "isAnyItemFocused", lua_x_imgui_ImGui_IsAnyItemFocused },
		{ "isItemFocused", lua_x_imgui_ImGui_IsItemFocused },
		{ "isWindowHovered", lua_x_imgui_ImGui_IsWindowHovered },
		{ "logFinish", lua_x_imgui_ImGui_LogFinish },
		{ "popClipRect", lua_x_imgui_ImGui_PopClipRect },
		{ "logToClipboard", lua_x_imgui_ImGui_LogToClipboard },
		{ "pushClipRect", lua_x_imgui_ImGui_PushClipRect },
		{ "columns", lua_x_imgui_ImGui_Columns },
		{ "isKeyReleased", lua_x_imgui_ImGui_IsKeyReleased },
		{ "setScrollFromPosX", lua_x_imgui_ImGui_SetScrollFromPosX },
		{ "setScrollFromPosY", lua_x_imgui_ImGui_SetScrollFromPosY },
		{ "setNextWindowDockID", lua_x_imgui_ImGui_SetNextWindowDockID },
		{ "getWindowWidth", lua_x_imgui_ImGui_GetWindowWidth },
		{ "popID", lua_x_imgui_ImGui_PopID },
		{ "dockSpace", lua_x_imgui_ImGui_DockSpace },
		{ "setItemDefaultFocus", lua_x_imgui_ImGui_SetItemDefaultFocus },
		{ "isWindowCollapsed", lua_x_imgui_ImGui_IsWindowCollapsed },
		{ "updatePlatformWindows", lua_x_imgui_ImGui_UpdatePlatformWindows },
		{ "isMouseDown", lua_x_imgui_ImGui_IsMouseDown },
		{ "isItemActive", lua_x_imgui_ImGui_IsItemActive },
		{ "unindent", lua_x_imgui_ImGui_Unindent },
		{ "treeNode", lua_x_imgui_ImGui_TreeNode },
		{ "bullet", lua_x_imgui_ImGui_Bullet },
		{ "isKeyDown", lua_x_imgui_ImGui_IsKeyDown },
		{ "setNextItemOpen", lua_x_imgui_ImGui_SetNextItemOpen },
		{ "getCursorStartPos", lua_x_imgui_ImGui_GetCursorStartPos },
		{ "beginGroup", lua_x_imgui_ImGui_BeginGroup },
		{ "isAnyItemActive", lua_x_imgui_ImGui_IsAnyItemActive },
		{ "treePop", lua_x_imgui_ImGui_TreePop },
		{ "beginPopup", lua_x_imgui_ImGui_BeginPopup },
		{ "setNextWindowPos", lua_x_imgui_ImGui_SetNextWindowPos },
		{ "setNextWindowSizeConstraints", lua_x_imgui_ImGui_SetNextWindowSizeConstraints },
		{ "beginDragDropTarget", lua_x_imgui_ImGui_BeginDragDropTarget },
		{ "showFontSelector", lua_x_imgui_ImGui_ShowFontSelector },
		{ "colorButton", lua_x_imgui_ImGui_ColorButton },
		{ "beginDragDropSource", lua_x_imgui_ImGui_BeginDragDropSource },
		{ "setWindowFocus", lua_x_imgui_ImGui_SetWindowFocus },
		{ "popTextWrapPos", lua_x_imgui_ImGui_PopTextWrapPos },
		{ "endDragDropTarget", lua_x_imgui_ImGui_EndDragDropTarget },
		{ "beginCombo", lua_x_imgui_ImGui_BeginCombo },
		{ "text", lua_x_imgui_ImGui_Text },
		{ "getMainViewport", lua_x_imgui_ImGui_GetMainViewport },
		{ "endGroup", lua_x_imgui_ImGui_EndGroup },
		{ "setNextWindowBgAlpha", lua_x_imgui_ImGui_SetNextWindowBgAlpha },
		{ "captureMouseFromApp", lua_x_imgui_ImGui_CaptureMouseFromApp },
		{ "isItemClicked", lua_x_imgui_ImGui_IsItemClicked },
		{ "setItemAllowOverlap", lua_x_imgui_ImGui_SetItemAllowOverlap },
		{ "getContentRegionMax", lua_x_imgui_ImGui_GetContentRegionMax },
		{ "invisibleButton", lua_x_imgui_ImGui_InvisibleButton },
		{ "captureKeyboardFromApp", lua_x_imgui_ImGui_CaptureKeyboardFromApp },
		{ "isPopupOpen", lua_x_imgui_ImGui_IsPopupOpen },
		{ "setCursorScreenPos", lua_x_imgui_ImGui_SetCursorScreenPos },
		{ "setKeyboardFocusHere", lua_x_imgui_ImGui_SetKeyboardFocusHere },
		{ "isMouseDragging", lua_x_imgui_ImGui_IsMouseDragging },
		{ "textColored", lua_x_imgui_ImGui_TextColored },
		{ "getKeyPressedAmount", lua_x_imgui_ImGui_GetKeyPressedAmount },
		{ "setClipboardText", lua_x_imgui_ImGui_SetClipboardText },
		{ "alignTextToFramePadding", lua_x_imgui_ImGui_AlignTextToFramePadding },
		{ "getFrameHeight", lua_x_imgui_ImGui_GetFrameHeight },
		{ "bulletText", lua_x_imgui_ImGui_BulletText },
		{ "setNextWindowCollapsed", lua_x_imgui_ImGui_SetNextWindowCollapsed },
		{ "spacing", lua_x_imgui_ImGui_Spacing },
		{ "listBoxFooter", lua_x_imgui_ImGui_ListBoxFooter },
		{ "getCursorPosY", lua_x_imgui_ImGui_GetCursorPosY },
		{ "getCursorPosX", lua_x_imgui_ImGui_GetCursorPosX },
		{ "getWindowPos", lua_x_imgui_ImGui_GetWindowPos },
		{ "endCombo", lua_x_imgui_ImGui_EndCombo },
		{ "getWindowHeight", lua_x_imgui_ImGui_GetWindowHeight },
		{ "endChildFrame", lua_x_imgui_ImGui_EndChildFrame },
		{ "isItemVisible", lua_x_imgui_ImGui_IsItemVisible },
		{ "beginTabBar", lua_x_imgui_ImGui_BeginTabBar },
		{ "treePush", lua_x_imgui_ImGui_TreePush },
		{ "setWindowSize", lua_x_imgui_ImGui_SetWindowSize },
		{ "getColumnWidth", lua_x_imgui_ImGui_GetColumnWidth },
		{ "saveIniSettingsToDisk", lua_x_imgui_ImGui_SaveIniSettingsToDisk },
		{ "button", lua_x_imgui_ImGui_Button },
		{ "getWindowDrawList", lua_x_imgui_ImGui_GetWindowDrawList },
		{ "getMousePos", lua_x_imgui_ImGui_GetMousePos },
		{ "getMousePosOnOpeningCurrentPopup", lua_x_imgui_ImGui_GetMousePosOnOpeningCurrentPopup },
		{ "isWindowFocused", lua_x_imgui_ImGui_IsWindowFocused },
		{ "isWindowDocked", lua_x_imgui_ImGui_IsWindowDocked },
		{ "pushAllowKeyboardFocus", lua_x_imgui_ImGui_PushAllowKeyboardFocus },
		{ "setCursorPos", lua_x_imgui_ImGui_SetCursorPos },
		{ "getWindowDockID", lua_x_imgui_ImGui_GetWindowDockID },
		{ "isAnyItemHovered", lua_x_imgui_ImGui_IsAnyItemHovered },
		{ "setCursorPosY", lua_x_imgui_ImGui_SetCursorPosY },
		{ "setCursorPosX", lua_x_imgui_ImGui_SetCursorPosX },
		{ "textUnformatted", lua_x_imgui_ImGui_TextUnformatted },
		{ "getFrameHeightWithSpacing", lua_x_imgui_ImGui_GetFrameHeightWithSpacing },
		{ "logToTTY", lua_x_imgui_ImGui_LogToTTY },
		{ "endFrame", lua_x_imgui_ImGui_EndFrame },
		{ "beginMenu", lua_x_imgui_ImGui_BeginMenu },
		{ "getID", lua_x_imgui_ImGui_GetID },
		{ "isItemDeactivated", lua_x_imgui_ImGui_IsItemDeactivated },
		{ "setNextWindowViewport", lua_x_imgui_ImGui_SetNextWindowViewport },
		{ "getStyleColorVec4", lua_x_imgui_ImGui_GetStyleColorVec4 },
		{ "endDragDropSource", lua_x_imgui_ImGui_EndDragDropSource },
		{ "newFrame", lua_x_imgui_ImGui_NewFrame },
		{ "beginChildFrame", lua_x_imgui_ImGui_BeginChildFrame },
    };

    return f;
}
