#include "lua_imguiFont_auto.hpp"
#include "imgui_lua.hpp"
#include "lua_conversion.hpp"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"

#ifdef COCOS2D_DEBUG
#undef COCOS2D_DEBUG
#endif
namespace imgui
{
    using ImFontConfig = ImFontConfig;
    using ImFontGlyph = ImFontGlyph;
    using ImFontAtlasCustomRect = ImFontAtlasCustomRect;
    using ImFontAtlas = ImFontAtlas;
    using ImFont = ImFont;
}
using namespace lua;

int lua_x_imguiFont_ImFontConfig_getFontDataSize(lua_State* tolua_S)
{
    imgui::ImFontConfig* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_getFontDataSize'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->FontDataSize);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getFontDataSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_setFontDataSize(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontConfig* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_setFontDataSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImFontConfig:FontDataSize");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontConfig'", nullptr);
            return 0;
        }
        cobj->FontDataSize = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontConfig:FontDataSize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getFontDataSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_getFontDataOwnedByAtlas(lua_State* tolua_S)
{
    imgui::ImFontConfig* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_getFontDataOwnedByAtlas'", nullptr);
        return 0;
    }
#endif
    tolua_pushboolean(tolua_S,(bool)cobj->FontDataOwnedByAtlas);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getFontDataOwnedByAtlas'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_setFontDataOwnedByAtlas(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontConfig* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_setFontDataOwnedByAtlas'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImFontConfig:FontDataOwnedByAtlas");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontConfig'", nullptr);
            return 0;
        }
        cobj->FontDataOwnedByAtlas = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontConfig:FontDataOwnedByAtlas", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getFontDataOwnedByAtlas'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_getFontNo(lua_State* tolua_S)
{
    imgui::ImFontConfig* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_getFontNo'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->FontNo);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getFontNo'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_setFontNo(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontConfig* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_setFontNo'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImFontConfig:FontNo");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontConfig'", nullptr);
            return 0;
        }
        cobj->FontNo = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontConfig:FontNo", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getFontNo'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_getSizePixels(lua_State* tolua_S)
{
    imgui::ImFontConfig* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_getSizePixels'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->SizePixels);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getSizePixels'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_setSizePixels(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontConfig* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_setSizePixels'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImFontConfig:SizePixels");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontConfig'", nullptr);
            return 0;
        }
        cobj->SizePixels = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontConfig:SizePixels", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getSizePixels'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_getOversampleH(lua_State* tolua_S)
{
    imgui::ImFontConfig* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_getOversampleH'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->OversampleH);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getOversampleH'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_setOversampleH(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontConfig* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_setOversampleH'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImFontConfig:OversampleH");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontConfig'", nullptr);
            return 0;
        }
        cobj->OversampleH = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontConfig:OversampleH", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getOversampleH'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_getOversampleV(lua_State* tolua_S)
{
    imgui::ImFontConfig* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_getOversampleV'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->OversampleV);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getOversampleV'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_setOversampleV(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontConfig* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_setOversampleV'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImFontConfig:OversampleV");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontConfig'", nullptr);
            return 0;
        }
        cobj->OversampleV = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontConfig:OversampleV", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getOversampleV'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_getPixelSnapH(lua_State* tolua_S)
{
    imgui::ImFontConfig* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_getPixelSnapH'", nullptr);
        return 0;
    }
#endif
    tolua_pushboolean(tolua_S,(bool)cobj->PixelSnapH);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getPixelSnapH'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_setPixelSnapH(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontConfig* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_setPixelSnapH'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImFontConfig:PixelSnapH");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontConfig'", nullptr);
            return 0;
        }
        cobj->PixelSnapH = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontConfig:PixelSnapH", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getPixelSnapH'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_getGlyphExtraSpacing(lua_State* tolua_S)
{
    imgui::ImFontConfig* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_getGlyphExtraSpacing'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->GlyphExtraSpacing);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getGlyphExtraSpacing'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_setGlyphExtraSpacing(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontConfig* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_setGlyphExtraSpacing'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImFontConfig:GlyphExtraSpacing");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontConfig'", nullptr);
            return 0;
        }
        cobj->GlyphExtraSpacing = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontConfig:GlyphExtraSpacing", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getGlyphExtraSpacing'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_getGlyphOffset(lua_State* tolua_S)
{
    imgui::ImFontConfig* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_getGlyphOffset'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->GlyphOffset);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getGlyphOffset'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_setGlyphOffset(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontConfig* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_setGlyphOffset'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImFontConfig:GlyphOffset");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontConfig'", nullptr);
            return 0;
        }
        cobj->GlyphOffset = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontConfig:GlyphOffset", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getGlyphOffset'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_getGlyphMinAdvanceX(lua_State* tolua_S)
{
    imgui::ImFontConfig* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_getGlyphMinAdvanceX'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->GlyphMinAdvanceX);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getGlyphMinAdvanceX'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_setGlyphMinAdvanceX(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontConfig* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_setGlyphMinAdvanceX'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImFontConfig:GlyphMinAdvanceX");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontConfig'", nullptr);
            return 0;
        }
        cobj->GlyphMinAdvanceX = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontConfig:GlyphMinAdvanceX", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getGlyphMinAdvanceX'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_getGlyphMaxAdvanceX(lua_State* tolua_S)
{
    imgui::ImFontConfig* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_getGlyphMaxAdvanceX'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->GlyphMaxAdvanceX);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getGlyphMaxAdvanceX'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_setGlyphMaxAdvanceX(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontConfig* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_setGlyphMaxAdvanceX'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImFontConfig:GlyphMaxAdvanceX");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontConfig'", nullptr);
            return 0;
        }
        cobj->GlyphMaxAdvanceX = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontConfig:GlyphMaxAdvanceX", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getGlyphMaxAdvanceX'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_getMergeMode(lua_State* tolua_S)
{
    imgui::ImFontConfig* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_getMergeMode'", nullptr);
        return 0;
    }
#endif
    tolua_pushboolean(tolua_S,(bool)cobj->MergeMode);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getMergeMode'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_setMergeMode(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontConfig* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_setMergeMode'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImFontConfig:MergeMode");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontConfig'", nullptr);
            return 0;
        }
        cobj->MergeMode = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontConfig:MergeMode", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getMergeMode'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_getRasterizerFlags(lua_State* tolua_S)
{
    imgui::ImFontConfig* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_getRasterizerFlags'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->RasterizerFlags);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getRasterizerFlags'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_setRasterizerFlags(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontConfig* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_setRasterizerFlags'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImFontConfig:RasterizerFlags");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontConfig'", nullptr);
            return 0;
        }
        cobj->RasterizerFlags = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontConfig:RasterizerFlags", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getRasterizerFlags'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_getRasterizerMultiply(lua_State* tolua_S)
{
    imgui::ImFontConfig* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_getRasterizerMultiply'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->RasterizerMultiply);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getRasterizerMultiply'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontConfig_setRasterizerMultiply(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontConfig* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontConfig", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontConfig_setRasterizerMultiply'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImFontConfig:RasterizerMultiply");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontConfig'", nullptr);
            return 0;
        }
        cobj->RasterizerMultiply = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontConfig:RasterizerMultiply", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontConfig_getRasterizerMultiply'.", &tolua_err);
    return 0;
#endif
}
static int lua_x_imguiFont_ImFontConfig_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ImFontConfig)");
    return 0;
}

int lua_register_x_imguiFont_ImFontConfig(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"imgui.ImFontConfig");
    tolua_cclass(tolua_S,"ImFontConfig","imgui.ImFontConfig","",nullptr);

    tolua_beginmodule(tolua_S,"ImFontConfig");
        tolua_variable(tolua_S,"FontDataSize", lua_x_imguiFont_ImFontConfig_getFontDataSize, lua_x_imguiFont_ImFontConfig_setFontDataSize);
        tolua_variable(tolua_S,"FontDataOwnedByAtlas", lua_x_imguiFont_ImFontConfig_getFontDataOwnedByAtlas, lua_x_imguiFont_ImFontConfig_setFontDataOwnedByAtlas);
        tolua_variable(tolua_S,"FontNo", lua_x_imguiFont_ImFontConfig_getFontNo, lua_x_imguiFont_ImFontConfig_setFontNo);
        tolua_variable(tolua_S,"SizePixels", lua_x_imguiFont_ImFontConfig_getSizePixels, lua_x_imguiFont_ImFontConfig_setSizePixels);
        tolua_variable(tolua_S,"OversampleH", lua_x_imguiFont_ImFontConfig_getOversampleH, lua_x_imguiFont_ImFontConfig_setOversampleH);
        tolua_variable(tolua_S,"OversampleV", lua_x_imguiFont_ImFontConfig_getOversampleV, lua_x_imguiFont_ImFontConfig_setOversampleV);
        tolua_variable(tolua_S,"PixelSnapH", lua_x_imguiFont_ImFontConfig_getPixelSnapH, lua_x_imguiFont_ImFontConfig_setPixelSnapH);
        tolua_variable(tolua_S,"GlyphExtraSpacing", lua_x_imguiFont_ImFontConfig_getGlyphExtraSpacing, lua_x_imguiFont_ImFontConfig_setGlyphExtraSpacing);
        tolua_variable(tolua_S,"GlyphOffset", lua_x_imguiFont_ImFontConfig_getGlyphOffset, lua_x_imguiFont_ImFontConfig_setGlyphOffset);
        tolua_variable(tolua_S,"GlyphMinAdvanceX", lua_x_imguiFont_ImFontConfig_getGlyphMinAdvanceX, lua_x_imguiFont_ImFontConfig_setGlyphMinAdvanceX);
        tolua_variable(tolua_S,"GlyphMaxAdvanceX", lua_x_imguiFont_ImFontConfig_getGlyphMaxAdvanceX, lua_x_imguiFont_ImFontConfig_setGlyphMaxAdvanceX);
        tolua_variable(tolua_S,"MergeMode", lua_x_imguiFont_ImFontConfig_getMergeMode, lua_x_imguiFont_ImFontConfig_setMergeMode);
        tolua_variable(tolua_S,"RasterizerFlags", lua_x_imguiFont_ImFontConfig_getRasterizerFlags, lua_x_imguiFont_ImFontConfig_setRasterizerFlags);
        tolua_variable(tolua_S,"RasterizerMultiply", lua_x_imguiFont_ImFontConfig_getRasterizerMultiply, lua_x_imguiFont_ImFontConfig_setRasterizerMultiply);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(imgui::ImFontConfig).name();
    g_luaType[typeName] = "imgui.ImFontConfig";
    g_typeCast["ImFontConfig"] = "imgui.ImFontConfig";
    return 1;
}

int lua_x_imguiFont_ImFontGlyph_getCodepoint(lua_State* tolua_S)
{
    imgui::ImFontGlyph* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_getCodepoint'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->Codepoint);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getCodepoint'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_setCodepoint(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontGlyph* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_setCodepoint'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImFontGlyph:Codepoint");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontGlyph'", nullptr);
            return 0;
        }
        cobj->Codepoint = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontGlyph:Codepoint", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getCodepoint'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_getVisible(lua_State* tolua_S)
{
    imgui::ImFontGlyph* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_getVisible'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->Visible);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getVisible'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_setVisible(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontGlyph* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_setVisible'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImFontGlyph:Visible");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontGlyph'", nullptr);
            return 0;
        }
        cobj->Visible = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontGlyph:Visible", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getVisible'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_getAdvanceX(lua_State* tolua_S)
{
    imgui::ImFontGlyph* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_getAdvanceX'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->AdvanceX);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getAdvanceX'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_setAdvanceX(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontGlyph* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_setAdvanceX'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImFontGlyph:AdvanceX");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontGlyph'", nullptr);
            return 0;
        }
        cobj->AdvanceX = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontGlyph:AdvanceX", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getAdvanceX'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_getX0(lua_State* tolua_S)
{
    imgui::ImFontGlyph* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_getX0'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->X0);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getX0'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_setX0(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontGlyph* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_setX0'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImFontGlyph:X0");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontGlyph'", nullptr);
            return 0;
        }
        cobj->X0 = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontGlyph:X0", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getX0'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_getY0(lua_State* tolua_S)
{
    imgui::ImFontGlyph* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_getY0'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->Y0);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getY0'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_setY0(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontGlyph* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_setY0'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImFontGlyph:Y0");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontGlyph'", nullptr);
            return 0;
        }
        cobj->Y0 = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontGlyph:Y0", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getY0'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_getX1(lua_State* tolua_S)
{
    imgui::ImFontGlyph* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_getX1'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->X1);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getX1'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_setX1(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontGlyph* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_setX1'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImFontGlyph:X1");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontGlyph'", nullptr);
            return 0;
        }
        cobj->X1 = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontGlyph:X1", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getX1'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_getY1(lua_State* tolua_S)
{
    imgui::ImFontGlyph* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_getY1'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->Y1);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getY1'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_setY1(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontGlyph* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_setY1'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImFontGlyph:Y1");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontGlyph'", nullptr);
            return 0;
        }
        cobj->Y1 = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontGlyph:Y1", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getY1'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_getU0(lua_State* tolua_S)
{
    imgui::ImFontGlyph* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_getU0'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->U0);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getU0'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_setU0(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontGlyph* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_setU0'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImFontGlyph:U0");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontGlyph'", nullptr);
            return 0;
        }
        cobj->U0 = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontGlyph:U0", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getU0'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_getV0(lua_State* tolua_S)
{
    imgui::ImFontGlyph* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_getV0'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->V0);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getV0'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_setV0(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontGlyph* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_setV0'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImFontGlyph:V0");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontGlyph'", nullptr);
            return 0;
        }
        cobj->V0 = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontGlyph:V0", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getV0'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_getU1(lua_State* tolua_S)
{
    imgui::ImFontGlyph* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_getU1'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->U1);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getU1'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_setU1(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontGlyph* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_setU1'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImFontGlyph:U1");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontGlyph'", nullptr);
            return 0;
        }
        cobj->U1 = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontGlyph:U1", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getU1'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_getV1(lua_State* tolua_S)
{
    imgui::ImFontGlyph* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_getV1'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->V1);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getV1'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontGlyph_setV1(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontGlyph* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontGlyph", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontGlyph_setV1'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImFontGlyph:V1");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontGlyph'", nullptr);
            return 0;
        }
        cobj->V1 = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontGlyph:V1", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontGlyph_getV1'.", &tolua_err);
    return 0;
#endif
}
static int lua_x_imguiFont_ImFontGlyph_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ImFontGlyph)");
    return 0;
}

int lua_register_x_imguiFont_ImFontGlyph(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"imgui.ImFontGlyph");
    tolua_cclass(tolua_S,"ImFontGlyph","imgui.ImFontGlyph","",nullptr);

    tolua_beginmodule(tolua_S,"ImFontGlyph");
        tolua_variable(tolua_S,"Codepoint", lua_x_imguiFont_ImFontGlyph_getCodepoint, lua_x_imguiFont_ImFontGlyph_setCodepoint);
        tolua_variable(tolua_S,"Visible", lua_x_imguiFont_ImFontGlyph_getVisible, lua_x_imguiFont_ImFontGlyph_setVisible);
        tolua_variable(tolua_S,"AdvanceX", lua_x_imguiFont_ImFontGlyph_getAdvanceX, lua_x_imguiFont_ImFontGlyph_setAdvanceX);
        tolua_variable(tolua_S,"X0", lua_x_imguiFont_ImFontGlyph_getX0, lua_x_imguiFont_ImFontGlyph_setX0);
        tolua_variable(tolua_S,"Y0", lua_x_imguiFont_ImFontGlyph_getY0, lua_x_imguiFont_ImFontGlyph_setY0);
        tolua_variable(tolua_S,"X1", lua_x_imguiFont_ImFontGlyph_getX1, lua_x_imguiFont_ImFontGlyph_setX1);
        tolua_variable(tolua_S,"Y1", lua_x_imguiFont_ImFontGlyph_getY1, lua_x_imguiFont_ImFontGlyph_setY1);
        tolua_variable(tolua_S,"U0", lua_x_imguiFont_ImFontGlyph_getU0, lua_x_imguiFont_ImFontGlyph_setU0);
        tolua_variable(tolua_S,"V0", lua_x_imguiFont_ImFontGlyph_getV0, lua_x_imguiFont_ImFontGlyph_setV0);
        tolua_variable(tolua_S,"U1", lua_x_imguiFont_ImFontGlyph_getU1, lua_x_imguiFont_ImFontGlyph_setU1);
        tolua_variable(tolua_S,"V1", lua_x_imguiFont_ImFontGlyph_getV1, lua_x_imguiFont_ImFontGlyph_setV1);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(imgui::ImFontGlyph).name();
    g_luaType[typeName] = "imgui.ImFontGlyph";
    g_typeCast["ImFontGlyph"] = "imgui.ImFontGlyph";
    return 1;
}

int lua_x_imguiFont_ImFontAtlasCustomRect_IsPacked(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlasCustomRect* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImFontAtlasCustomRect",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlasCustomRect_IsPacked'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlasCustomRect_IsPacked'", nullptr);
            return 0;
        }
        bool ret = cobj->IsPacked();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlasCustomRect:IsPacked", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiFont_ImFontAtlasCustomRect_IsPacked'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlasCustomRect_getWidth(lua_State* tolua_S)
{
    imgui::ImFontAtlasCustomRect* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlasCustomRect", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getWidth'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->Width);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getWidth'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlasCustomRect_setWidth(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlasCustomRect* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlasCustomRect", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlasCustomRect_setWidth'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        unsigned short arg0;
        ok &= luaval_to_ushort(tolua_S, 2, &arg0, "imgui.ImFontAtlasCustomRect:Width");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlasCustomRect'", nullptr);
            return 0;
        }
        cobj->Width = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlasCustomRect:Width", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getWidth'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlasCustomRect_getHeight(lua_State* tolua_S)
{
    imgui::ImFontAtlasCustomRect* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlasCustomRect", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getHeight'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->Height);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getHeight'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlasCustomRect_setHeight(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlasCustomRect* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlasCustomRect", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlasCustomRect_setHeight'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        unsigned short arg0;
        ok &= luaval_to_ushort(tolua_S, 2, &arg0, "imgui.ImFontAtlasCustomRect:Height");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlasCustomRect'", nullptr);
            return 0;
        }
        cobj->Height = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlasCustomRect:Height", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getHeight'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlasCustomRect_getX(lua_State* tolua_S)
{
    imgui::ImFontAtlasCustomRect* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlasCustomRect", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getX'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->X);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getX'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlasCustomRect_setX(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlasCustomRect* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlasCustomRect", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlasCustomRect_setX'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        unsigned short arg0;
        ok &= luaval_to_ushort(tolua_S, 2, &arg0, "imgui.ImFontAtlasCustomRect:X");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlasCustomRect'", nullptr);
            return 0;
        }
        cobj->X = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlasCustomRect:X", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getX'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlasCustomRect_getY(lua_State* tolua_S)
{
    imgui::ImFontAtlasCustomRect* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlasCustomRect", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getY'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->Y);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getY'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlasCustomRect_setY(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlasCustomRect* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlasCustomRect", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlasCustomRect_setY'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        unsigned short arg0;
        ok &= luaval_to_ushort(tolua_S, 2, &arg0, "imgui.ImFontAtlasCustomRect:Y");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlasCustomRect'", nullptr);
            return 0;
        }
        cobj->Y = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlasCustomRect:Y", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getY'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphID(lua_State* tolua_S)
{
    imgui::ImFontAtlasCustomRect* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlasCustomRect", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphID'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->GlyphID);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphID'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlasCustomRect_setGlyphID(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlasCustomRect* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlasCustomRect", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlasCustomRect_setGlyphID'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImFontAtlasCustomRect:GlyphID");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlasCustomRect'", nullptr);
            return 0;
        }
        cobj->GlyphID = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlasCustomRect:GlyphID", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphID'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphAdvanceX(lua_State* tolua_S)
{
    imgui::ImFontAtlasCustomRect* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlasCustomRect", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphAdvanceX'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->GlyphAdvanceX);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphAdvanceX'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlasCustomRect_setGlyphAdvanceX(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlasCustomRect* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlasCustomRect", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlasCustomRect_setGlyphAdvanceX'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImFontAtlasCustomRect:GlyphAdvanceX");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlasCustomRect'", nullptr);
            return 0;
        }
        cobj->GlyphAdvanceX = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlasCustomRect:GlyphAdvanceX", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphAdvanceX'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphOffset(lua_State* tolua_S)
{
    imgui::ImFontAtlasCustomRect* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlasCustomRect", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphOffset'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->GlyphOffset);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphOffset'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlasCustomRect_setGlyphOffset(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlasCustomRect* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlasCustomRect", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlasCustomRect_setGlyphOffset'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImFontAtlasCustomRect:GlyphOffset");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlasCustomRect'", nullptr);
            return 0;
        }
        cobj->GlyphOffset = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlasCustomRect:GlyphOffset", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphOffset'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlasCustomRect_getFont(lua_State* tolua_S)
{
    imgui::ImFontAtlasCustomRect* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlasCustomRect", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getFont'", nullptr);
        return 0;
    }
#endif
    native_to_luaval(tolua_S, cobj->Font);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getFont'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlasCustomRect_setFont(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlasCustomRect* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlasCustomRect", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlasCustomRect_setFont'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        imgui::ImFont* arg0;
        ok &= luaval_to_native(tolua_S, 2, &arg0, "imgui.ImFontAtlasCustomRect:Font");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlasCustomRect'", nullptr);
            return 0;
        }
        cobj->Font = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlasCustomRect:Font", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlasCustomRect_getFont'.", &tolua_err);
    return 0;
#endif
}
static int lua_x_imguiFont_ImFontAtlasCustomRect_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ImFontAtlasCustomRect)");
    return 0;
}

int lua_register_x_imguiFont_ImFontAtlasCustomRect(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"imgui.ImFontAtlasCustomRect");
    tolua_cclass(tolua_S,"ImFontAtlasCustomRect","imgui.ImFontAtlasCustomRect","",nullptr);

    tolua_beginmodule(tolua_S,"ImFontAtlasCustomRect");
        tolua_function(tolua_S,"isPacked",lua_x_imguiFont_ImFontAtlasCustomRect_IsPacked);
        tolua_variable(tolua_S,"Width", lua_x_imguiFont_ImFontAtlasCustomRect_getWidth, lua_x_imguiFont_ImFontAtlasCustomRect_setWidth);
        tolua_variable(tolua_S,"Height", lua_x_imguiFont_ImFontAtlasCustomRect_getHeight, lua_x_imguiFont_ImFontAtlasCustomRect_setHeight);
        tolua_variable(tolua_S,"X", lua_x_imguiFont_ImFontAtlasCustomRect_getX, lua_x_imguiFont_ImFontAtlasCustomRect_setX);
        tolua_variable(tolua_S,"Y", lua_x_imguiFont_ImFontAtlasCustomRect_getY, lua_x_imguiFont_ImFontAtlasCustomRect_setY);
        tolua_variable(tolua_S,"GlyphID", lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphID, lua_x_imguiFont_ImFontAtlasCustomRect_setGlyphID);
        tolua_variable(tolua_S,"GlyphAdvanceX", lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphAdvanceX, lua_x_imguiFont_ImFontAtlasCustomRect_setGlyphAdvanceX);
        tolua_variable(tolua_S,"GlyphOffset", lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphOffset, lua_x_imguiFont_ImFontAtlasCustomRect_setGlyphOffset);
        tolua_variable(tolua_S,"Font", lua_x_imguiFont_ImFontAtlasCustomRect_getFont, lua_x_imguiFont_ImFontAtlasCustomRect_setFont);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(imgui::ImFontAtlasCustomRect).name();
    g_luaType[typeName] = "imgui.ImFontAtlasCustomRect";
    g_typeCast["ImFontAtlasCustomRect"] = "imgui.ImFontAtlasCustomRect";
    return 1;
}

int lua_x_imguiFont_ImFontAtlas_AddCustomRectFontGlyph(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlas* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImFontAtlas",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlas_AddCustomRectFontGlyph'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 5) 
    {
        imgui::ImFont* arg0;
        unsigned short arg1;
        int arg2;
        int arg3;
        double arg4;

        ok &= luaval_to_native(tolua_S, 2, &arg0, "imgui.ImFontAtlas:AddCustomRectFontGlyph");

        ok &= luaval_to_ushort(tolua_S, 3, &arg1, "imgui.ImFontAtlas:AddCustomRectFontGlyph");

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "imgui.ImFontAtlas:AddCustomRectFontGlyph");

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "imgui.ImFontAtlas:AddCustomRectFontGlyph");

        ok &= luaval_to_number(tolua_S, 6,&arg4, "imgui.ImFontAtlas:AddCustomRectFontGlyph");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlas_AddCustomRectFontGlyph'", nullptr);
            return 0;
        }
        int ret = cobj->AddCustomRectFontGlyph(arg0, arg1, arg2, arg3, arg4);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    if (argc == 6) 
    {
        imgui::ImFont* arg0;
        unsigned short arg1;
        int arg2;
        int arg3;
        double arg4;
        ImVec2 arg5;

        ok &= luaval_to_native(tolua_S, 2, &arg0, "imgui.ImFontAtlas:AddCustomRectFontGlyph");

        ok &= luaval_to_ushort(tolua_S, 3, &arg1, "imgui.ImFontAtlas:AddCustomRectFontGlyph");

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "imgui.ImFontAtlas:AddCustomRectFontGlyph");

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "imgui.ImFontAtlas:AddCustomRectFontGlyph");

        ok &= luaval_to_number(tolua_S, 6,&arg4, "imgui.ImFontAtlas:AddCustomRectFontGlyph");

        ok &= luaval_to_ImVec2(tolua_S, 7, &arg5, "imgui.ImFontAtlas:AddCustomRectFontGlyph");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlas_AddCustomRectFontGlyph'", nullptr);
            return 0;
        }
        int ret = cobj->AddCustomRectFontGlyph(arg0, arg1, arg2, arg3, arg4, arg5);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlas:AddCustomRectFontGlyph", argc, 5);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiFont_ImFontAtlas_AddCustomRectFontGlyph'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlas_AddCustomRectRegular(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlas* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImFontAtlas",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlas_AddCustomRectRegular'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 2) 
    {
        int arg0;
        int arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImFontAtlas:AddCustomRectRegular");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "imgui.ImFontAtlas:AddCustomRectRegular");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlas_AddCustomRectRegular'", nullptr);
            return 0;
        }
        int ret = cobj->AddCustomRectRegular(arg0, arg1);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlas:AddCustomRectRegular", argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiFont_ImFontAtlas_AddCustomRectRegular'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlas_Build(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlas* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImFontAtlas",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlas_Build'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlas_Build'", nullptr);
            return 0;
        }
        bool ret = cobj->Build();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlas:Build", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiFont_ImFontAtlas_Build'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlas_Clear(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlas* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImFontAtlas",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlas_Clear'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlas_Clear'", nullptr);
            return 0;
        }
        cobj->Clear();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlas:Clear", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiFont_ImFontAtlas_Clear'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlas_ClearFonts(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlas* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImFontAtlas",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlas_ClearFonts'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlas_ClearFonts'", nullptr);
            return 0;
        }
        cobj->ClearFonts();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlas:ClearFonts", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiFont_ImFontAtlas_ClearFonts'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlas_ClearInputData(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlas* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImFontAtlas",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlas_ClearInputData'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlas_ClearInputData'", nullptr);
            return 0;
        }
        cobj->ClearInputData();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlas:ClearInputData", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiFont_ImFontAtlas_ClearInputData'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlas_ClearTexData(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlas* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImFontAtlas",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlas_ClearTexData'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlas_ClearTexData'", nullptr);
            return 0;
        }
        cobj->ClearTexData();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlas:ClearTexData", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiFont_ImFontAtlas_ClearTexData'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlas_GetCustomRectByIndex(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlas* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImFontAtlas",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlas_GetCustomRectByIndex'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImFontAtlas:GetCustomRectByIndex");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlas_GetCustomRectByIndex'", nullptr);
            return 0;
        }
        const imgui::ImFontAtlasCustomRect* ret = cobj->GetCustomRectByIndex(arg0);
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlas:GetCustomRectByIndex", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiFont_ImFontAtlas_GetCustomRectByIndex'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlas_IsBuilt(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlas* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImFontAtlas",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlas_IsBuilt'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlas_IsBuilt'", nullptr);
            return 0;
        }
        bool ret = cobj->IsBuilt();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlas:IsBuilt", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiFont_ImFontAtlas_IsBuilt'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlas_getLocked(lua_State* tolua_S)
{
    imgui::ImFontAtlas* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlas", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlas_getLocked'", nullptr);
        return 0;
    }
#endif
    tolua_pushboolean(tolua_S,(bool)cobj->Locked);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlas_getLocked'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlas_setLocked(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlas* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlas", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlas_setLocked'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImFontAtlas:Locked");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlas'", nullptr);
            return 0;
        }
        cobj->Locked = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlas:Locked", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlas_getLocked'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlas_getFlags(lua_State* tolua_S)
{
    imgui::ImFontAtlas* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlas", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlas_getFlags'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->Flags);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlas_getFlags'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlas_setFlags(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlas* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlas", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlas_setFlags'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImFontAtlas:Flags");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlas'", nullptr);
            return 0;
        }
        cobj->Flags = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlas:Flags", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlas_getFlags'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlas_getTexDesiredWidth(lua_State* tolua_S)
{
    imgui::ImFontAtlas* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlas", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlas_getTexDesiredWidth'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->TexDesiredWidth);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlas_getTexDesiredWidth'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlas_setTexDesiredWidth(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlas* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlas", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlas_setTexDesiredWidth'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImFontAtlas:TexDesiredWidth");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlas'", nullptr);
            return 0;
        }
        cobj->TexDesiredWidth = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlas:TexDesiredWidth", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlas_getTexDesiredWidth'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlas_getTexGlyphPadding(lua_State* tolua_S)
{
    imgui::ImFontAtlas* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlas", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlas_getTexGlyphPadding'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->TexGlyphPadding);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlas_getTexGlyphPadding'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFontAtlas_setTexGlyphPadding(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFontAtlas* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFontAtlas", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFontAtlas_setTexGlyphPadding'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImFontAtlas:TexGlyphPadding");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFontAtlas'", nullptr);
            return 0;
        }
        cobj->TexGlyphPadding = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFontAtlas:TexGlyphPadding", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFontAtlas_getTexGlyphPadding'.", &tolua_err);
    return 0;
#endif
}
static int lua_x_imguiFont_ImFontAtlas_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ImFontAtlas)");
    return 0;
}

int lua_register_x_imguiFont_ImFontAtlas(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"imgui.ImFontAtlas");
    tolua_cclass(tolua_S,"ImFontAtlas","imgui.ImFontAtlas","",nullptr);

    tolua_beginmodule(tolua_S,"ImFontAtlas");
        tolua_function(tolua_S,"clearInputData",lua_x_imguiFont_ImFontAtlas_ClearInputData);
        tolua_function(tolua_S,"clear",lua_x_imguiFont_ImFontAtlas_Clear);
        tolua_function(tolua_S,"clearFonts",lua_x_imguiFont_ImFontAtlas_ClearFonts);
        tolua_function(tolua_S,"addCustomRectFontGlyph",lua_x_imguiFont_ImFontAtlas_AddCustomRectFontGlyph);
        tolua_function(tolua_S,"build",lua_x_imguiFont_ImFontAtlas_Build);
        tolua_function(tolua_S,"getCustomRectByIndex",lua_x_imguiFont_ImFontAtlas_GetCustomRectByIndex);
        tolua_function(tolua_S,"addCustomRectRegular",lua_x_imguiFont_ImFontAtlas_AddCustomRectRegular);
        tolua_function(tolua_S,"clearTexData",lua_x_imguiFont_ImFontAtlas_ClearTexData);
        tolua_function(tolua_S,"isBuilt",lua_x_imguiFont_ImFontAtlas_IsBuilt);
        tolua_variable(tolua_S,"Locked", lua_x_imguiFont_ImFontAtlas_getLocked, lua_x_imguiFont_ImFontAtlas_setLocked);
        tolua_variable(tolua_S,"Flags", lua_x_imguiFont_ImFontAtlas_getFlags, lua_x_imguiFont_ImFontAtlas_setFlags);
        tolua_variable(tolua_S,"TexDesiredWidth", lua_x_imguiFont_ImFontAtlas_getTexDesiredWidth, lua_x_imguiFont_ImFontAtlas_setTexDesiredWidth);
        tolua_variable(tolua_S,"TexGlyphPadding", lua_x_imguiFont_ImFontAtlas_getTexGlyphPadding, lua_x_imguiFont_ImFontAtlas_setTexGlyphPadding);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(imgui::ImFontAtlas).name();
    g_luaType[typeName] = "imgui.ImFontAtlas";
    g_typeCast["ImFontAtlas"] = "imgui.ImFontAtlas";
    return 1;
}

int lua_x_imguiFont_ImFont_FindGlyph(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFont* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImFont",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFont_FindGlyph'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        unsigned short arg0;

        ok &= luaval_to_ushort(tolua_S, 2, &arg0, "imgui.ImFont:FindGlyph");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFont_FindGlyph'", nullptr);
            return 0;
        }
        const imgui::ImFontGlyph* ret = cobj->FindGlyph(arg0);
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFont:FindGlyph", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiFont_ImFont_FindGlyph'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_FindGlyphNoFallback(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFont* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImFont",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFont_FindGlyphNoFallback'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        unsigned short arg0;

        ok &= luaval_to_ushort(tolua_S, 2, &arg0, "imgui.ImFont:FindGlyphNoFallback");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFont_FindGlyphNoFallback'", nullptr);
            return 0;
        }
        const imgui::ImFontGlyph* ret = cobj->FindGlyphNoFallback(arg0);
        native_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFont:FindGlyphNoFallback", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiFont_ImFont_FindGlyphNoFallback'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_GetCharAdvance(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFont* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImFont",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFont_GetCharAdvance'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 1) 
    {
        unsigned short arg0;

        ok &= luaval_to_ushort(tolua_S, 2, &arg0, "imgui.ImFont:GetCharAdvance");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFont_GetCharAdvance'", nullptr);
            return 0;
        }
        double ret = cobj->GetCharAdvance(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFont:GetCharAdvance", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiFont_ImFont_GetCharAdvance'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_GetDebugName(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFont* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImFont",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFont_GetDebugName'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFont_GetDebugName'", nullptr);
            return 0;
        }
        const char* ret = cobj->GetDebugName();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFont:GetDebugName", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiFont_ImFont_GetDebugName'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_IsLoaded(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFont* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImFont",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFont_IsLoaded'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFont_IsLoaded'", nullptr);
            return 0;
        }
        bool ret = cobj->IsLoaded();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFont:IsLoaded", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiFont_ImFont_IsLoaded'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_getFallbackAdvanceX(lua_State* tolua_S)
{
    imgui::ImFont* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFont_getFallbackAdvanceX'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->FallbackAdvanceX);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getFallbackAdvanceX'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_setFallbackAdvanceX(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFont* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFont_setFallbackAdvanceX'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImFont:FallbackAdvanceX");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFont'", nullptr);
            return 0;
        }
        cobj->FallbackAdvanceX = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFont:FallbackAdvanceX", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getFallbackAdvanceX'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_getFontSize(lua_State* tolua_S)
{
    imgui::ImFont* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFont_getFontSize'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->FontSize);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getFontSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_setFontSize(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFont* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFont_setFontSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImFont:FontSize");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFont'", nullptr);
            return 0;
        }
        cobj->FontSize = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFont:FontSize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getFontSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_getFallbackGlyph(lua_State* tolua_S)
{
    imgui::ImFont* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFont_getFallbackGlyph'", nullptr);
        return 0;
    }
#endif
    native_to_luaval(tolua_S, cobj->FallbackGlyph);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getFallbackGlyph'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_setFallbackGlyph(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFont* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFont_setFallbackGlyph'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        const imgui::ImFontGlyph* arg0;
        ok &= luaval_to_native(tolua_S, 2, &arg0, "imgui.ImFont:FallbackGlyph");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFont'", nullptr);
            return 0;
        }
        cobj->FallbackGlyph = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFont:FallbackGlyph", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getFallbackGlyph'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_getDisplayOffset(lua_State* tolua_S)
{
    imgui::ImFont* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFont_getDisplayOffset'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->DisplayOffset);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getDisplayOffset'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_setDisplayOffset(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFont* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFont_setDisplayOffset'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImFont:DisplayOffset");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFont'", nullptr);
            return 0;
        }
        cobj->DisplayOffset = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFont:DisplayOffset", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getDisplayOffset'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_getContainerAtlas(lua_State* tolua_S)
{
    imgui::ImFont* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFont_getContainerAtlas'", nullptr);
        return 0;
    }
#endif
    native_to_luaval(tolua_S, cobj->ContainerAtlas);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getContainerAtlas'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_setContainerAtlas(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFont* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFont_setContainerAtlas'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        imgui::ImFontAtlas* arg0;
        ok &= luaval_to_native(tolua_S, 2, &arg0, "imgui.ImFont:ContainerAtlas");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFont'", nullptr);
            return 0;
        }
        cobj->ContainerAtlas = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFont:ContainerAtlas", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getContainerAtlas'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_getConfigData(lua_State* tolua_S)
{
    imgui::ImFont* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFont_getConfigData'", nullptr);
        return 0;
    }
#endif
    native_to_luaval(tolua_S, cobj->ConfigData);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getConfigData'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_setConfigData(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFont* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFont_setConfigData'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        const imgui::ImFontConfig* arg0;
        ok &= luaval_to_native(tolua_S, 2, &arg0, "imgui.ImFont:ConfigData");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFont'", nullptr);
            return 0;
        }
        cobj->ConfigData = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFont:ConfigData", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getConfigData'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_getConfigDataCount(lua_State* tolua_S)
{
    imgui::ImFont* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFont_getConfigDataCount'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->ConfigDataCount);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getConfigDataCount'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_setConfigDataCount(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFont* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFont_setConfigDataCount'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int32_t arg0;
        ok &= luaval_to_int32(tolua_S, 2,&arg0, "imgui.ImFont:ConfigDataCount");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFont'", nullptr);
            return 0;
        }
        cobj->ConfigDataCount = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFont:ConfigDataCount", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getConfigDataCount'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_getFallbackChar(lua_State* tolua_S)
{
    imgui::ImFont* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFont_getFallbackChar'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->FallbackChar);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getFallbackChar'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_setFallbackChar(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFont* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFont_setFallbackChar'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        unsigned short arg0;
        ok &= luaval_to_ushort(tolua_S, 2, &arg0, "imgui.ImFont:FallbackChar");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFont'", nullptr);
            return 0;
        }
        cobj->FallbackChar = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFont:FallbackChar", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getFallbackChar'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_getEllipsisChar(lua_State* tolua_S)
{
    imgui::ImFont* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFont_getEllipsisChar'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->EllipsisChar);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getEllipsisChar'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_setEllipsisChar(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFont* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFont_setEllipsisChar'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        unsigned short arg0;
        ok &= luaval_to_ushort(tolua_S, 2, &arg0, "imgui.ImFont:EllipsisChar");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFont'", nullptr);
            return 0;
        }
        cobj->EllipsisChar = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFont:EllipsisChar", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getEllipsisChar'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_getDirtyLookupTables(lua_State* tolua_S)
{
    imgui::ImFont* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFont_getDirtyLookupTables'", nullptr);
        return 0;
    }
#endif
    tolua_pushboolean(tolua_S,(bool)cobj->DirtyLookupTables);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getDirtyLookupTables'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_setDirtyLookupTables(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFont* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFont_setDirtyLookupTables'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImFont:DirtyLookupTables");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFont'", nullptr);
            return 0;
        }
        cobj->DirtyLookupTables = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFont:DirtyLookupTables", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getDirtyLookupTables'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_getScale(lua_State* tolua_S)
{
    imgui::ImFont* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFont_getScale'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->Scale);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getScale'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_setScale(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFont* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFont_setScale'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImFont:Scale");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFont'", nullptr);
            return 0;
        }
        cobj->Scale = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFont:Scale", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getScale'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_getAscent(lua_State* tolua_S)
{
    imgui::ImFont* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFont_getAscent'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->Ascent);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getAscent'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_setAscent(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFont* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFont_setAscent'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImFont:Ascent");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFont'", nullptr);
            return 0;
        }
        cobj->Ascent = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFont:Ascent", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getAscent'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_getDescent(lua_State* tolua_S)
{
    imgui::ImFont* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFont_getDescent'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->Descent);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getDescent'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_setDescent(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFont* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFont_setDescent'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImFont:Descent");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFont'", nullptr);
            return 0;
        }
        cobj->Descent = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFont:Descent", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getDescent'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_getMetricsTotalSurface(lua_State* tolua_S)
{
    imgui::ImFont* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiFont_ImFont_getMetricsTotalSurface'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->MetricsTotalSurface);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getMetricsTotalSurface'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiFont_ImFont_setMetricsTotalSurface(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImFont* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImFont", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiFont_ImFont_setMetricsTotalSurface'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImFont:MetricsTotalSurface");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiFont_ImFont'", nullptr);
            return 0;
        }
        cobj->MetricsTotalSurface = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFont:MetricsTotalSurface", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiFont_ImFont_getMetricsTotalSurface'.", &tolua_err);
    return 0;
#endif
}
static int lua_x_imguiFont_ImFont_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ImFont)");
    return 0;
}

int lua_register_x_imguiFont_ImFont(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"imgui.ImFont");
    tolua_cclass(tolua_S,"ImFont","imgui.ImFont","",nullptr);

    tolua_beginmodule(tolua_S,"ImFont");
        tolua_function(tolua_S,"findGlyph",lua_x_imguiFont_ImFont_FindGlyph);
        tolua_function(tolua_S,"findGlyphNoFallback",lua_x_imguiFont_ImFont_FindGlyphNoFallback);
        tolua_function(tolua_S,"getCharAdvance",lua_x_imguiFont_ImFont_GetCharAdvance);
        tolua_function(tolua_S,"getDebugName",lua_x_imguiFont_ImFont_GetDebugName);
        tolua_function(tolua_S,"isLoaded",lua_x_imguiFont_ImFont_IsLoaded);
        tolua_variable(tolua_S,"FallbackAdvanceX", lua_x_imguiFont_ImFont_getFallbackAdvanceX, lua_x_imguiFont_ImFont_setFallbackAdvanceX);
        tolua_variable(tolua_S,"FontSize", lua_x_imguiFont_ImFont_getFontSize, lua_x_imguiFont_ImFont_setFontSize);
        tolua_variable(tolua_S,"FallbackGlyph", lua_x_imguiFont_ImFont_getFallbackGlyph, lua_x_imguiFont_ImFont_setFallbackGlyph);
        tolua_variable(tolua_S,"DisplayOffset", lua_x_imguiFont_ImFont_getDisplayOffset, lua_x_imguiFont_ImFont_setDisplayOffset);
        tolua_variable(tolua_S,"ContainerAtlas", lua_x_imguiFont_ImFont_getContainerAtlas, lua_x_imguiFont_ImFont_setContainerAtlas);
        tolua_variable(tolua_S,"ConfigData", lua_x_imguiFont_ImFont_getConfigData, lua_x_imguiFont_ImFont_setConfigData);
        tolua_variable(tolua_S,"ConfigDataCount", lua_x_imguiFont_ImFont_getConfigDataCount, lua_x_imguiFont_ImFont_setConfigDataCount);
        tolua_variable(tolua_S,"FallbackChar", lua_x_imguiFont_ImFont_getFallbackChar, lua_x_imguiFont_ImFont_setFallbackChar);
        tolua_variable(tolua_S,"EllipsisChar", lua_x_imguiFont_ImFont_getEllipsisChar, lua_x_imguiFont_ImFont_setEllipsisChar);
        tolua_variable(tolua_S,"DirtyLookupTables", lua_x_imguiFont_ImFont_getDirtyLookupTables, lua_x_imguiFont_ImFont_setDirtyLookupTables);
        tolua_variable(tolua_S,"Scale", lua_x_imguiFont_ImFont_getScale, lua_x_imguiFont_ImFont_setScale);
        tolua_variable(tolua_S,"Ascent", lua_x_imguiFont_ImFont_getAscent, lua_x_imguiFont_ImFont_setAscent);
        tolua_variable(tolua_S,"Descent", lua_x_imguiFont_ImFont_getDescent, lua_x_imguiFont_ImFont_setDescent);
        tolua_variable(tolua_S,"MetricsTotalSurface", lua_x_imguiFont_ImFont_getMetricsTotalSurface, lua_x_imguiFont_ImFont_setMetricsTotalSurface);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(imgui::ImFont).name();
    g_luaType[typeName] = "imgui.ImFont";
    g_typeCast["ImFont"] = "imgui.ImFont";
    return 1;
}
TOLUA_API int register_all_x_imguiFont(lua_State* tolua_S)
{
	tolua_open(tolua_S);

	tolua_module(tolua_S, "imgui", 0);
	tolua_beginmodule(tolua_S, "imgui");

	lua_register_x_imguiFont_ImFontGlyph(tolua_S);
	lua_register_x_imguiFont_ImFont(tolua_S);
	lua_register_x_imguiFont_ImFontAtlasCustomRect(tolua_S);
	lua_register_x_imguiFont_ImFontAtlas(tolua_S);
	lua_register_x_imguiFont_ImFontConfig(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

