#include "lua_ImGuiColorTextEdit_auto.hpp"
#include "../CCImGuiColorTextEdit.h"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"
#include "lua_conversion.hpp"

using namespace lua;

int lua_x_ImGuiColorTextEdit_ColorTextEdit_canRedo(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_canRedo'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_canRedo'", nullptr);
            return 0;
        }
        bool ret = cobj->canRedo();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:canRedo", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_canRedo'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_canUndo(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_canUndo'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_canUndo'", nullptr);
            return 0;
        }
        bool ret = cobj->canUndo();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:canUndo", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_canUndo'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_copy(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_copy'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_copy'", nullptr);
            return 0;
        }
        cobj->copy();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:copy", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_copy'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_create'", nullptr);
            return 0;
        }
        ImGui::ColorTextEdit* ret = ImGui::ColorTextEdit::create();
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "imgui.ColorTextEdit:create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_create'.",&tolua_err);
#endif
    return 0;
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_cut(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_cut'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_cut'", nullptr);
            return 0;
        }
        cobj->cut();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:cut", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_cut'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_delete_(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_delete_'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_delete_'", nullptr);
            return 0;
        }
        cobj->delete_();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:delete_", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_delete_'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_getCurrentLineText(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getCurrentLineText'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getCurrentLineText'", nullptr);
            return 0;
        }
        std::string ret = cobj->getCurrentLineText();
        lua_pushlstring(tolua_S,ret.c_str(),ret.length());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:getCurrentLineText", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getCurrentLineText'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_getCursorPosition(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getCursorPosition'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getCursorPosition'", nullptr);
            return 0;
        }
        auto ret = cobj->getCursorPosition();
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:getCursorPosition", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getCursorPosition'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_getPalette(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getPalette'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getPalette'", nullptr);
            return 0;
        }
        std::vector<unsigned int> ret = cobj->getPalette();
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:getPalette", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getPalette'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_getSelectedText(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getSelectedText'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getSelectedText'", nullptr);
            return 0;
        }
        std::string ret = cobj->getSelectedText();
        lua_pushlstring(tolua_S,ret.c_str(),ret.length());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:getSelectedText", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getSelectedText'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_getTabSize(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getTabSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getTabSize'", nullptr);
            return 0;
        }
        int ret = cobj->getTabSize();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:getTabSize", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getTabSize'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_getText(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getText'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getText'", nullptr);
            return 0;
        }
        std::string ret = cobj->getText();
        lua_pushlstring(tolua_S,ret.c_str(),ret.length());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:getText", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getText'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_getTextLines(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getTextLines'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getTextLines'", nullptr);
            return 0;
        }
        std::vector<std::string> ret = cobj->getTextLines();
        ccvector_std_string_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:getTextLines", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getTextLines'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_getTotalLines(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getTotalLines'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getTotalLines'", nullptr);
            return 0;
        }
        int ret = cobj->getTotalLines();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:getTotalLines", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_getTotalLines'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_hasSelection(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_hasSelection'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_hasSelection'", nullptr);
            return 0;
        }
        bool ret = cobj->hasSelection();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:hasSelection", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_hasSelection'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_insertText(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_insertText'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "imgui.ColorTextEdit:insertText");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_insertText'", nullptr);
            return 0;
        }
        cobj->insertText(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:insertText", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_insertText'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_isColorizerEnabled(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isColorizerEnabled'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isColorizerEnabled'", nullptr);
            return 0;
        }
        bool ret = cobj->isColorizerEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:isColorizerEnabled", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isColorizerEnabled'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_isCursorPositionChanged(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isCursorPositionChanged'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isCursorPositionChanged'", nullptr);
            return 0;
        }
        bool ret = cobj->isCursorPositionChanged();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:isCursorPositionChanged", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isCursorPositionChanged'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_isHandleKeyboardInputsEnabled(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isHandleKeyboardInputsEnabled'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isHandleKeyboardInputsEnabled'", nullptr);
            return 0;
        }
        bool ret = cobj->isHandleKeyboardInputsEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:isHandleKeyboardInputsEnabled", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isHandleKeyboardInputsEnabled'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_isHandleMouseInputsEnabled(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isHandleMouseInputsEnabled'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isHandleMouseInputsEnabled'", nullptr);
            return 0;
        }
        bool ret = cobj->isHandleMouseInputsEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:isHandleMouseInputsEnabled", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isHandleMouseInputsEnabled'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_isImGuiChildIgnored(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isImGuiChildIgnored'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isImGuiChildIgnored'", nullptr);
            return 0;
        }
        bool ret = cobj->isImGuiChildIgnored();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:isImGuiChildIgnored", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isImGuiChildIgnored'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_isOverwrite(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isOverwrite'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isOverwrite'", nullptr);
            return 0;
        }
        bool ret = cobj->isOverwrite();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:isOverwrite", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isOverwrite'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_isReadOnly(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isReadOnly'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isReadOnly'", nullptr);
            return 0;
        }
        bool ret = cobj->isReadOnly();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:isReadOnly", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isReadOnly'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_isShowingWhitespaces(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isShowingWhitespaces'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isShowingWhitespaces'", nullptr);
            return 0;
        }
        bool ret = cobj->isShowingWhitespaces();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:isShowingWhitespaces", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isShowingWhitespaces'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_isTextChanged(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isTextChanged'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isTextChanged'", nullptr);
            return 0;
        }
        bool ret = cobj->isTextChanged();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:isTextChanged", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_isTextChanged'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_moveBottom(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveBottom'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveBottom'", nullptr);
            return 0;
        }
        cobj->moveBottom();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ColorTextEdit:moveBottom");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveBottom'", nullptr);
            return 0;
        }
        cobj->moveBottom(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:moveBottom", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveBottom'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_moveDown(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveDown'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveDown'", nullptr);
            return 0;
        }
        cobj->moveDown();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ColorTextEdit:moveDown");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveDown'", nullptr);
            return 0;
        }
        cobj->moveDown(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2) 
    {
        int arg0;
        bool arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ColorTextEdit:moveDown");

        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "imgui.ColorTextEdit:moveDown");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveDown'", nullptr);
            return 0;
        }
        cobj->moveDown(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:moveDown", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveDown'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_moveEnd(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveEnd'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveEnd'", nullptr);
            return 0;
        }
        cobj->moveEnd();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ColorTextEdit:moveEnd");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveEnd'", nullptr);
            return 0;
        }
        cobj->moveEnd(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:moveEnd", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveEnd'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_moveHome(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveHome'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveHome'", nullptr);
            return 0;
        }
        cobj->moveHome();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ColorTextEdit:moveHome");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveHome'", nullptr);
            return 0;
        }
        cobj->moveHome(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:moveHome", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveHome'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_moveLeft(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveLeft'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveLeft'", nullptr);
            return 0;
        }
        cobj->moveLeft();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ColorTextEdit:moveLeft");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveLeft'", nullptr);
            return 0;
        }
        cobj->moveLeft(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2) 
    {
        int arg0;
        bool arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ColorTextEdit:moveLeft");

        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "imgui.ColorTextEdit:moveLeft");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveLeft'", nullptr);
            return 0;
        }
        cobj->moveLeft(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3) 
    {
        int arg0;
        bool arg1;
        bool arg2;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ColorTextEdit:moveLeft");

        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "imgui.ColorTextEdit:moveLeft");

        ok &= luaval_to_boolean(tolua_S, 4,&arg2, "imgui.ColorTextEdit:moveLeft");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveLeft'", nullptr);
            return 0;
        }
        cobj->moveLeft(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:moveLeft", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveLeft'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_moveRight(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveRight'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveRight'", nullptr);
            return 0;
        }
        cobj->moveRight();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ColorTextEdit:moveRight");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveRight'", nullptr);
            return 0;
        }
        cobj->moveRight(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2) 
    {
        int arg0;
        bool arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ColorTextEdit:moveRight");

        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "imgui.ColorTextEdit:moveRight");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveRight'", nullptr);
            return 0;
        }
        cobj->moveRight(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3) 
    {
        int arg0;
        bool arg1;
        bool arg2;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ColorTextEdit:moveRight");

        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "imgui.ColorTextEdit:moveRight");

        ok &= luaval_to_boolean(tolua_S, 4,&arg2, "imgui.ColorTextEdit:moveRight");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveRight'", nullptr);
            return 0;
        }
        cobj->moveRight(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:moveRight", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveRight'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_moveTop(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveTop'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveTop'", nullptr);
            return 0;
        }
        cobj->moveTop();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ColorTextEdit:moveTop");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveTop'", nullptr);
            return 0;
        }
        cobj->moveTop(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:moveTop", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveTop'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_moveUp(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveUp'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveUp'", nullptr);
            return 0;
        }
        cobj->moveUp();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ColorTextEdit:moveUp");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveUp'", nullptr);
            return 0;
        }
        cobj->moveUp(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2) 
    {
        int arg0;
        bool arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ColorTextEdit:moveUp");

        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "imgui.ColorTextEdit:moveUp");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveUp'", nullptr);
            return 0;
        }
        cobj->moveUp(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:moveUp", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_moveUp'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_paste(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_paste'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_paste'", nullptr);
            return 0;
        }
        cobj->paste();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:paste", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_paste'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_redo(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_redo'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_redo'", nullptr);
            return 0;
        }
        cobj->redo();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ColorTextEdit:redo");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_redo'", nullptr);
            return 0;
        }
        cobj->redo(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:redo", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_redo'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_render(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_render'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 2) 
    {
        const char* arg0;
        cocos2d::Vec2 arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ColorTextEdit:render"); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_vec2(tolua_S, 3, &arg1, "imgui.ColorTextEdit:render");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_render'", nullptr);
            return 0;
        }
        cobj->render(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3) 
    {
        const char* arg0;
        cocos2d::Vec2 arg1;
        bool arg2;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ColorTextEdit:render"); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_vec2(tolua_S, 3, &arg1, "imgui.ColorTextEdit:render");

        ok &= luaval_to_boolean(tolua_S, 4,&arg2, "imgui.ColorTextEdit:render");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_render'", nullptr);
            return 0;
        }
        cobj->render(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:render", argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_render'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_selectAll(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_selectAll'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_selectAll'", nullptr);
            return 0;
        }
        cobj->selectAll();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:selectAll", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_selectAll'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_selectWordUnderCursor(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_selectWordUnderCursor'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_selectWordUnderCursor'", nullptr);
            return 0;
        }
        cobj->selectWordUnderCursor();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:selectWordUnderCursor", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_selectWordUnderCursor'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setBreakpoints(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setBreakpoints'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        std::unordered_set<int> arg0;

        ok &= luaval_to_native(tolua_S, 2, &arg0, "imgui.ColorTextEdit:setBreakpoints");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setBreakpoints'", nullptr);
            return 0;
        }
        cobj->setBreakpoints(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setBreakpoints", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setBreakpoints'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setColorizerEnable(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setColorizerEnable'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ColorTextEdit:setColorizerEnable");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setColorizerEnable'", nullptr);
            return 0;
        }
        cobj->setColorizerEnable(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setColorizerEnable", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setColorizerEnable'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setCursorPosition(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setCursorPosition'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 2) 
    {
        int arg0;
        int arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ColorTextEdit:setCursorPosition");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ColorTextEdit:setCursorPosition");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setCursorPosition'", nullptr);
            return 0;
        }
        cobj->setCursorPosition(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setCursorPosition", argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setCursorPosition'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setErrorMarkers(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setErrorMarkers'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        std::map<int, std::string> arg0;

        ok &= luaval_to_native(tolua_S, 2, &arg0, "imgui.ColorTextEdit:setErrorMarkers");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setErrorMarkers'", nullptr);
            return 0;
        }
        cobj->setErrorMarkers(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setErrorMarkers", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setErrorMarkers'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setHandleKeyboardInputs(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setHandleKeyboardInputs'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ColorTextEdit:setHandleKeyboardInputs");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setHandleKeyboardInputs'", nullptr);
            return 0;
        }
        cobj->setHandleKeyboardInputs(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setHandleKeyboardInputs", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setHandleKeyboardInputs'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setHandleMouseInputs(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setHandleMouseInputs'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ColorTextEdit:setHandleMouseInputs");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setHandleMouseInputs'", nullptr);
            return 0;
        }
        cobj->setHandleMouseInputs(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setHandleMouseInputs", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setHandleMouseInputs'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setImGuiChildIgnored(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setImGuiChildIgnored'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ColorTextEdit:setImGuiChildIgnored");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setImGuiChildIgnored'", nullptr);
            return 0;
        }
        cobj->setImGuiChildIgnored(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setImGuiChildIgnored", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setImGuiChildIgnored'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageAngelScript(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageAngelScript'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageAngelScript'", nullptr);
            return 0;
        }
        cobj->setLanguageAngelScript();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setLanguageAngelScript", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageAngelScript'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageC(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageC'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageC'", nullptr);
            return 0;
        }
        cobj->setLanguageC();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setLanguageC", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageC'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageCPlusPlus(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageCPlusPlus'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageCPlusPlus'", nullptr);
            return 0;
        }
        cobj->setLanguageCPlusPlus();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setLanguageCPlusPlus", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageCPlusPlus'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageDefinition(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageDefinition'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 8) 
    {
        std::string arg0;
        std::unordered_set<std::string> arg1;
        std::unordered_map<std::string, std::string> arg2;
        std::unordered_map<std::string, std::string> arg3;
        std::unordered_map<std::string, ImGui::ColorTextEdit::PaletteIndex> arg4;
        std::string arg5;
        std::string arg6;
        std::string arg7;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_native(tolua_S, 3, &arg1, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_native(tolua_S, 4, &arg2, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_native(tolua_S, 5, &arg3, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_native(tolua_S, 6, &arg4, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_std_string(tolua_S, 7,&arg5, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_std_string(tolua_S, 8,&arg6, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_std_string(tolua_S, 9,&arg7, "imgui.ColorTextEdit:setLanguageDefinition");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageDefinition'", nullptr);
            return 0;
        }
        cobj->setLanguageDefinition(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 9) 
    {
        std::string arg0;
        std::unordered_set<std::string> arg1;
        std::unordered_map<std::string, std::string> arg2;
        std::unordered_map<std::string, std::string> arg3;
        std::unordered_map<std::string, ImGui::ColorTextEdit::PaletteIndex> arg4;
        std::string arg5;
        std::string arg6;
        std::string arg7;
        std::string arg8;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_native(tolua_S, 3, &arg1, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_native(tolua_S, 4, &arg2, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_native(tolua_S, 5, &arg3, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_native(tolua_S, 6, &arg4, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_std_string(tolua_S, 7,&arg5, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_std_string(tolua_S, 8,&arg6, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_std_string(tolua_S, 9,&arg7, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_std_string(tolua_S, 10,&arg8, "imgui.ColorTextEdit:setLanguageDefinition");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageDefinition'", nullptr);
            return 0;
        }
        cobj->setLanguageDefinition(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 10) 
    {
        std::string arg0;
        std::unordered_set<std::string> arg1;
        std::unordered_map<std::string, std::string> arg2;
        std::unordered_map<std::string, std::string> arg3;
        std::unordered_map<std::string, ImGui::ColorTextEdit::PaletteIndex> arg4;
        std::string arg5;
        std::string arg6;
        std::string arg7;
        std::string arg8;
        bool arg9;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_native(tolua_S, 3, &arg1, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_native(tolua_S, 4, &arg2, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_native(tolua_S, 5, &arg3, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_native(tolua_S, 6, &arg4, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_std_string(tolua_S, 7,&arg5, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_std_string(tolua_S, 8,&arg6, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_std_string(tolua_S, 9,&arg7, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_std_string(tolua_S, 10,&arg8, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_boolean(tolua_S, 11,&arg9, "imgui.ColorTextEdit:setLanguageDefinition");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageDefinition'", nullptr);
            return 0;
        }
        cobj->setLanguageDefinition(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 11) 
    {
        std::string arg0;
        std::unordered_set<std::string> arg1;
        std::unordered_map<std::string, std::string> arg2;
        std::unordered_map<std::string, std::string> arg3;
        std::unordered_map<std::string, ImGui::ColorTextEdit::PaletteIndex> arg4;
        std::string arg5;
        std::string arg6;
        std::string arg7;
        std::string arg8;
        bool arg9;
        bool arg10;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_native(tolua_S, 3, &arg1, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_native(tolua_S, 4, &arg2, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_native(tolua_S, 5, &arg3, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_native(tolua_S, 6, &arg4, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_std_string(tolua_S, 7,&arg5, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_std_string(tolua_S, 8,&arg6, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_std_string(tolua_S, 9,&arg7, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_std_string(tolua_S, 10,&arg8, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_boolean(tolua_S, 11,&arg9, "imgui.ColorTextEdit:setLanguageDefinition");

        ok &= luaval_to_boolean(tolua_S, 12,&arg10, "imgui.ColorTextEdit:setLanguageDefinition");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageDefinition'", nullptr);
            return 0;
        }
        cobj->setLanguageDefinition(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setLanguageDefinition", argc, 8);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageDefinition'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageGLSL(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageGLSL'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageGLSL'", nullptr);
            return 0;
        }
        cobj->setLanguageGLSL();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setLanguageGLSL", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageGLSL'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageHLSL(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageHLSL'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageHLSL'", nullptr);
            return 0;
        }
        cobj->setLanguageHLSL();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setLanguageHLSL", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageHLSL'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageLua(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageLua'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageLua'", nullptr);
            return 0;
        }
        cobj->setLanguageLua();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setLanguageLua", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageLua'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageSQL(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageSQL'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageSQL'", nullptr);
            return 0;
        }
        cobj->setLanguageSQL();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setLanguageSQL", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageSQL'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setPalette(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setPalette'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        std::vector<unsigned int> arg0;

        ok &= luaval_to_native(tolua_S, 2, &arg0, "imgui.ColorTextEdit:setPalette");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setPalette'", nullptr);
            return 0;
        }
        cobj->setPalette(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setPalette", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setPalette'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteDark(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteDark'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteDark'", nullptr);
            return 0;
        }
        cobj->setPaletteDark();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setPaletteDark", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteDark'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteLight(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteLight'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteLight'", nullptr);
            return 0;
        }
        cobj->setPaletteLight();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setPaletteLight", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteLight'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteRetroBlue(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteRetroBlue'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteRetroBlue'", nullptr);
            return 0;
        }
        cobj->setPaletteRetroBlue();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setPaletteRetroBlue", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteRetroBlue'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setReadOnly(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setReadOnly'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ColorTextEdit:setReadOnly");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setReadOnly'", nullptr);
            return 0;
        }
        cobj->setReadOnly(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setReadOnly", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setReadOnly'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelection(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelection'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 4) 
    {
        int arg0;
        int arg1;
        int arg2;
        int arg3;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ColorTextEdit:setSelection");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ColorTextEdit:setSelection");

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "imgui.ColorTextEdit:setSelection");

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "imgui.ColorTextEdit:setSelection");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelection'", nullptr);
            return 0;
        }
        cobj->setSelection(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 5) 
    {
        int arg0;
        int arg1;
        int arg2;
        int arg3;
        ImGui::ColorTextEdit::SelectionMode arg4;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ColorTextEdit:setSelection");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ColorTextEdit:setSelection");

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "imgui.ColorTextEdit:setSelection");

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "imgui.ColorTextEdit:setSelection");

        ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4, "imgui.ColorTextEdit:setSelection");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelection'", nullptr);
            return 0;
        }
        cobj->setSelection(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setSelection", argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelection'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelectionEnd(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelectionEnd'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 2) 
    {
        int arg0;
        int arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ColorTextEdit:setSelectionEnd");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ColorTextEdit:setSelectionEnd");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelectionEnd'", nullptr);
            return 0;
        }
        cobj->setSelectionEnd(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setSelectionEnd", argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelectionEnd'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelectionStart(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelectionStart'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 2) 
    {
        int arg0;
        int arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ColorTextEdit:setSelectionStart");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ColorTextEdit:setSelectionStart");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelectionStart'", nullptr);
            return 0;
        }
        cobj->setSelectionStart(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setSelectionStart", argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelectionStart'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setShowWhitespaces(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setShowWhitespaces'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ColorTextEdit:setShowWhitespaces");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setShowWhitespaces'", nullptr);
            return 0;
        }
        cobj->setShowWhitespaces(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setShowWhitespaces", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setShowWhitespaces'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setTabSize(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setTabSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ColorTextEdit:setTabSize");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setTabSize'", nullptr);
            return 0;
        }
        cobj->setTabSize(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setTabSize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setTabSize'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setText(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setText'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "imgui.ColorTextEdit:setText");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setText'", nullptr);
            return 0;
        }
        cobj->setText(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setText", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setText'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setTextLines(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setTextLines'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        std::vector<std::string> arg0;

        ok &= luaval_to_std_vector_string(tolua_S, 2, &arg0, "imgui.ColorTextEdit:setTextLines");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setTextLines'", nullptr);
            return 0;
        }
        cobj->setTextLines(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:setTextLines", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_setTextLines'.",&tolua_err);
    return 0;
#endif
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_undo(lua_State* tolua_S)
{
    int argc = 0;
    ImGui::ColorTextEdit* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ColorTextEdit",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_undo'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_undo'", nullptr);
            return 0;
        }
        cobj->undo();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ColorTextEdit:undo");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_undo'", nullptr);
            return 0;
        }
        cobj->undo(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ColorTextEdit:undo", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_ImGuiColorTextEdit_ColorTextEdit_undo'.",&tolua_err);
    return 0;
#endif
}
static int lua_x_ImGuiColorTextEdit_ColorTextEdit_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ColorTextEdit)");
    return 0;
}

int lua_register_x_ImGuiColorTextEdit_ColorTextEdit(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"imgui.ColorTextEdit");
    tolua_cclass(tolua_S,"ColorTextEdit","imgui.ColorTextEdit","cc.Node",nullptr);

    tolua_beginmodule(tolua_S,"ColorTextEdit");
        tolua_function(tolua_S,"insertText",lua_x_ImGuiColorTextEdit_ColorTextEdit_insertText);
        tolua_function(tolua_S,"selectAll",lua_x_ImGuiColorTextEdit_ColorTextEdit_selectAll);
        tolua_function(tolua_S,"setLanguageHLSL",lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageHLSL);
        tolua_function(tolua_S,"setShowWhitespaces",lua_x_ImGuiColorTextEdit_ColorTextEdit_setShowWhitespaces);
        tolua_function(tolua_S,"render",lua_x_ImGuiColorTextEdit_ColorTextEdit_render);
        tolua_function(tolua_S,"moveDown",lua_x_ImGuiColorTextEdit_ColorTextEdit_moveDown);
        tolua_function(tolua_S,"setBreakpoints",lua_x_ImGuiColorTextEdit_ColorTextEdit_setBreakpoints);
        tolua_function(tolua_S,"setPaletteLight",lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteLight);
        tolua_function(tolua_S,"isImGuiChildIgnored",lua_x_ImGuiColorTextEdit_ColorTextEdit_isImGuiChildIgnored);
        tolua_function(tolua_S,"getText",lua_x_ImGuiColorTextEdit_ColorTextEdit_getText);
        tolua_function(tolua_S,"setPalette",lua_x_ImGuiColorTextEdit_ColorTextEdit_setPalette);
        tolua_function(tolua_S,"setPaletteRetroBlue",lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteRetroBlue);
        tolua_function(tolua_S,"moveRight",lua_x_ImGuiColorTextEdit_ColorTextEdit_moveRight);
        tolua_function(tolua_S,"isOverwrite",lua_x_ImGuiColorTextEdit_ColorTextEdit_isOverwrite);
        tolua_function(tolua_S,"setLanguageDefinition",lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageDefinition);
        tolua_function(tolua_S,"getCurrentLineText",lua_x_ImGuiColorTextEdit_ColorTextEdit_getCurrentLineText);
        tolua_function(tolua_S,"moveUp",lua_x_ImGuiColorTextEdit_ColorTextEdit_moveUp);
        tolua_function(tolua_S,"moveEnd",lua_x_ImGuiColorTextEdit_ColorTextEdit_moveEnd);
        tolua_function(tolua_S,"cut",lua_x_ImGuiColorTextEdit_ColorTextEdit_cut);
        tolua_function(tolua_S,"getTabSize",lua_x_ImGuiColorTextEdit_ColorTextEdit_getTabSize);
        tolua_function(tolua_S,"setLanguageC",lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageC);
        tolua_function(tolua_S,"setLanguageAngelScript",lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageAngelScript);
        tolua_function(tolua_S,"selectWordUnderCursor",lua_x_ImGuiColorTextEdit_ColorTextEdit_selectWordUnderCursor);
        tolua_function(tolua_S,"isReadOnly",lua_x_ImGuiColorTextEdit_ColorTextEdit_isReadOnly);
        tolua_function(tolua_S,"paste",lua_x_ImGuiColorTextEdit_ColorTextEdit_paste);
        tolua_function(tolua_S,"moveHome",lua_x_ImGuiColorTextEdit_ColorTextEdit_moveHome);
        tolua_function(tolua_S,"setSelectionStart",lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelectionStart);
        tolua_function(tolua_S,"redo",lua_x_ImGuiColorTextEdit_ColorTextEdit_redo);
        tolua_function(tolua_S,"isColorizerEnabled",lua_x_ImGuiColorTextEdit_ColorTextEdit_isColorizerEnabled);
        tolua_function(tolua_S,"setPaletteDark",lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteDark);
        tolua_function(tolua_S,"setLanguageCPlusPlus",lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageCPlusPlus);
        tolua_function(tolua_S,"setSelectionEnd",lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelectionEnd);
        tolua_function(tolua_S,"isHandleMouseInputsEnabled",lua_x_ImGuiColorTextEdit_ColorTextEdit_isHandleMouseInputsEnabled);
        tolua_function(tolua_S,"setLanguageLua",lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageLua);
        tolua_function(tolua_S,"hasSelection",lua_x_ImGuiColorTextEdit_ColorTextEdit_hasSelection);
        tolua_function(tolua_S,"setErrorMarkers",lua_x_ImGuiColorTextEdit_ColorTextEdit_setErrorMarkers);
        tolua_function(tolua_S,"canUndo",lua_x_ImGuiColorTextEdit_ColorTextEdit_canUndo);
        tolua_function(tolua_S,"getCursorPosition",lua_x_ImGuiColorTextEdit_ColorTextEdit_getCursorPosition);
        tolua_function(tolua_S,"setCursorPosition",lua_x_ImGuiColorTextEdit_ColorTextEdit_setCursorPosition);
        tolua_function(tolua_S,"setHandleKeyboardInputs",lua_x_ImGuiColorTextEdit_ColorTextEdit_setHandleKeyboardInputs);
        tolua_function(tolua_S,"isShowingWhitespaces",lua_x_ImGuiColorTextEdit_ColorTextEdit_isShowingWhitespaces);
        tolua_function(tolua_S,"getTotalLines",lua_x_ImGuiColorTextEdit_ColorTextEdit_getTotalLines);
        tolua_function(tolua_S,"undo",lua_x_ImGuiColorTextEdit_ColorTextEdit_undo);
        tolua_function(tolua_S,"isTextChanged",lua_x_ImGuiColorTextEdit_ColorTextEdit_isTextChanged);
        tolua_function(tolua_S,"getSelectedText",lua_x_ImGuiColorTextEdit_ColorTextEdit_getSelectedText);
        tolua_function(tolua_S,"canRedo",lua_x_ImGuiColorTextEdit_ColorTextEdit_canRedo);
        tolua_function(tolua_S,"copy",lua_x_ImGuiColorTextEdit_ColorTextEdit_copy);
        tolua_function(tolua_S,"moveBottom",lua_x_ImGuiColorTextEdit_ColorTextEdit_moveBottom);
        tolua_function(tolua_S,"isCursorPositionChanged",lua_x_ImGuiColorTextEdit_ColorTextEdit_isCursorPositionChanged);
        tolua_function(tolua_S,"moveLeft",lua_x_ImGuiColorTextEdit_ColorTextEdit_moveLeft);
        tolua_function(tolua_S,"delete",lua_x_ImGuiColorTextEdit_ColorTextEdit_delete_);
        tolua_function(tolua_S,"setSelection",lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelection);
        tolua_function(tolua_S,"setTextLines",lua_x_ImGuiColorTextEdit_ColorTextEdit_setTextLines);
        tolua_function(tolua_S,"setImGuiChildIgnored",lua_x_ImGuiColorTextEdit_ColorTextEdit_setImGuiChildIgnored);
        tolua_function(tolua_S,"setLanguageSQL",lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageSQL);
        tolua_function(tolua_S,"getTextLines",lua_x_ImGuiColorTextEdit_ColorTextEdit_getTextLines);
        tolua_function(tolua_S,"setReadOnly",lua_x_ImGuiColorTextEdit_ColorTextEdit_setReadOnly);
        tolua_function(tolua_S,"setColorizerEnable",lua_x_ImGuiColorTextEdit_ColorTextEdit_setColorizerEnable);
        tolua_function(tolua_S,"getPalette",lua_x_ImGuiColorTextEdit_ColorTextEdit_getPalette);
        tolua_function(tolua_S,"setHandleMouseInputs",lua_x_ImGuiColorTextEdit_ColorTextEdit_setHandleMouseInputs);
        tolua_function(tolua_S,"setTabSize",lua_x_ImGuiColorTextEdit_ColorTextEdit_setTabSize);
        tolua_function(tolua_S,"moveTop",lua_x_ImGuiColorTextEdit_ColorTextEdit_moveTop);
        tolua_function(tolua_S,"setText",lua_x_ImGuiColorTextEdit_ColorTextEdit_setText);
        tolua_function(tolua_S,"isHandleKeyboardInputsEnabled",lua_x_ImGuiColorTextEdit_ColorTextEdit_isHandleKeyboardInputsEnabled);
        tolua_function(tolua_S,"setLanguageGLSL",lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageGLSL);
        tolua_function(tolua_S,"create", lua_x_ImGuiColorTextEdit_ColorTextEdit_create);
        {
            tolua_module(tolua_S, "PaletteIndex", 0);
            tolua_beginmodule(tolua_S,"PaletteIndex");
            {
                tolua_constant(tolua_S, "Default", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::Default);
                tolua_constant(tolua_S, "Keyword", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::Keyword);
                tolua_constant(tolua_S, "Number", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::Number);
                tolua_constant(tolua_S, "String", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::String);
                tolua_constant(tolua_S, "CharLiteral", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::CharLiteral);
                tolua_constant(tolua_S, "Punctuation", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::Punctuation);
                tolua_constant(tolua_S, "Preprocessor", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::Preprocessor);
                tolua_constant(tolua_S, "Identifier", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::Identifier);
                tolua_constant(tolua_S, "KnownIdentifier", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::KnownIdentifier);
                tolua_constant(tolua_S, "PreprocIdentifier", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::PreprocIdentifier);
                tolua_constant(tolua_S, "Comment", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::Comment);
                tolua_constant(tolua_S, "MultiLineComment", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::MultiLineComment);
                tolua_constant(tolua_S, "Background", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::Background);
                tolua_constant(tolua_S, "Cursor", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::Cursor);
                tolua_constant(tolua_S, "Selection", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::Selection);
                tolua_constant(tolua_S, "ErrorMarker", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::ErrorMarker);
                tolua_constant(tolua_S, "Breakpoint", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::Breakpoint);
                tolua_constant(tolua_S, "LineNumber", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::LineNumber);
                tolua_constant(tolua_S, "CurrentLineFill", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::CurrentLineFill);
                tolua_constant(tolua_S, "CurrentLineFillInactive", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::CurrentLineFillInactive);
                tolua_constant(tolua_S, "CurrentLineEdge", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::CurrentLineEdge);
                tolua_constant(tolua_S, "Max", (lua_Number)ImGui::ColorTextEdit::PaletteIndex::Max);
            }
            tolua_endmodule(tolua_S);
        }
        {
            tolua_module(tolua_S, "SelectionMode", 0);
            tolua_beginmodule(tolua_S,"SelectionMode");
            {
                tolua_constant(tolua_S, "Normal", (lua_Number)ImGui::ColorTextEdit::SelectionMode::Normal);
                tolua_constant(tolua_S, "Word", (lua_Number)ImGui::ColorTextEdit::SelectionMode::Word);
                tolua_constant(tolua_S, "Line", (lua_Number)ImGui::ColorTextEdit::SelectionMode::Line);
            }
            tolua_endmodule(tolua_S);
        }
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(ImGui::ColorTextEdit).name();
    g_luaType[typeName] = "imgui.ColorTextEdit";
    g_typeCast["ColorTextEdit"] = "imgui.ColorTextEdit";
    return 1;
}
TOLUA_API int register_all_x_ImGuiColorTextEdit(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"imgui",0);
	tolua_beginmodule(tolua_S,"imgui");

	lua_register_x_ImGuiColorTextEdit_ColorTextEdit(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

