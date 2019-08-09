#include "lua_imguiIO_auto.hpp"
#include "imgui_lua.hpp"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"

#ifdef COCOS2D_DEBUG
#undef COCOS2D_DEBUG
#endif

int lua_x_imguiIO_ImGuiIO_AddInputCharactersUTF8(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_AddInputCharactersUTF8'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGuiIO:AddInputCharactersUTF8"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiIO_ImGuiIO_AddInputCharactersUTF8'", nullptr);
            return 0;
        }
        cobj->AddInputCharactersUTF8(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:AddInputCharactersUTF8",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_AddInputCharactersUTF8'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiIO_ImGuiIO_AddInputCharacter(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_AddInputCharacter'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        unsigned int arg0;

        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImGuiIO:AddInputCharacter");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiIO_ImGuiIO_AddInputCharacter'", nullptr);
            return 0;
        }
        cobj->AddInputCharacter(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:AddInputCharacter",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_AddInputCharacter'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiIO_ImGuiIO_ClearInputCharacters(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_ClearInputCharacters'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiIO_ImGuiIO_ClearInputCharacters'", nullptr);
            return 0;
        }
        cobj->ClearInputCharacters();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:ClearInputCharacters",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_ClearInputCharacters'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiIO_ImGuiIO_getConfigFlags(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getConfigFlags'", nullptr);
        return 0;
    }
#endif

    tolua_pushnumber(tolua_S,(lua_Number)cobj->ConfigFlags);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getConfigFlags'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setConfigFlags(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setConfigFlags'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGuiIO:ConfigFlags");
        cobj->ConfigFlags = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:ConfigFlags",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getConfigFlags'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getBackendFlags(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getBackendFlags'", nullptr);
        return 0;
    }
#endif

    tolua_pushnumber(tolua_S,(lua_Number)cobj->BackendFlags);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getBackendFlags'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setBackendFlags(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setBackendFlags'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGuiIO:BackendFlags");
        cobj->BackendFlags = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:BackendFlags",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getBackendFlags'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getDisplaySize(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getDisplaySize'", nullptr);
        return 0;
    }
#endif

    ImVec2_to_luaval(tolua_S, cobj->DisplaySize);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getDisplaySize'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setDisplaySize(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setDisplaySize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGuiIO:DisplaySize");
        cobj->DisplaySize = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:DisplaySize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getDisplaySize'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getDeltaTime(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getDeltaTime'", nullptr);
        return 0;
    }
#endif

    tolua_pushnumber(tolua_S,(lua_Number)cobj->DeltaTime);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getDeltaTime'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setDeltaTime(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setDeltaTime'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiIO:DeltaTime");
        cobj->DeltaTime = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:DeltaTime",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getDeltaTime'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getIniSavingRate(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getIniSavingRate'", nullptr);
        return 0;
    }
#endif

    tolua_pushnumber(tolua_S,(lua_Number)cobj->IniSavingRate);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getIniSavingRate'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setIniSavingRate(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setIniSavingRate'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiIO:IniSavingRate");
        cobj->IniSavingRate = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:IniSavingRate",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getIniSavingRate'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getIniFilename(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getIniFilename'", nullptr);
        return 0;
    }
#endif

    tolua_pushstring(tolua_S,(const char*)cobj->IniFilename);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getIniFilename'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setIniFilename(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setIniFilename'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGuiIO:IniFilename"); arg0 = arg0_tmp.c_str();
        cobj->IniFilename = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:IniFilename",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getIniFilename'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getLogFilename(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getLogFilename'", nullptr);
        return 0;
    }
#endif

    tolua_pushstring(tolua_S,(const char*)cobj->LogFilename);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getLogFilename'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setLogFilename(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setLogFilename'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGuiIO:LogFilename"); arg0 = arg0_tmp.c_str();
        cobj->LogFilename = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:LogFilename",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getLogFilename'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getMouseDoubleClickTime(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getMouseDoubleClickTime'", nullptr);
        return 0;
    }
#endif

    tolua_pushnumber(tolua_S,(lua_Number)cobj->MouseDoubleClickTime);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMouseDoubleClickTime'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setMouseDoubleClickTime(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setMouseDoubleClickTime'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiIO:MouseDoubleClickTime");
        cobj->MouseDoubleClickTime = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:MouseDoubleClickTime",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMouseDoubleClickTime'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getMouseDoubleClickMaxDist(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getMouseDoubleClickMaxDist'", nullptr);
        return 0;
    }
#endif

    tolua_pushnumber(tolua_S,(lua_Number)cobj->MouseDoubleClickMaxDist);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMouseDoubleClickMaxDist'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setMouseDoubleClickMaxDist(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setMouseDoubleClickMaxDist'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiIO:MouseDoubleClickMaxDist");
        cobj->MouseDoubleClickMaxDist = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:MouseDoubleClickMaxDist",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMouseDoubleClickMaxDist'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getMouseDragThreshold(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getMouseDragThreshold'", nullptr);
        return 0;
    }
#endif

    tolua_pushnumber(tolua_S,(lua_Number)cobj->MouseDragThreshold);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMouseDragThreshold'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setMouseDragThreshold(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setMouseDragThreshold'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiIO:MouseDragThreshold");
        cobj->MouseDragThreshold = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:MouseDragThreshold",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMouseDragThreshold'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getKeyRepeatDelay(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getKeyRepeatDelay'", nullptr);
        return 0;
    }
#endif

    tolua_pushnumber(tolua_S,(lua_Number)cobj->KeyRepeatDelay);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getKeyRepeatDelay'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setKeyRepeatDelay(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setKeyRepeatDelay'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiIO:KeyRepeatDelay");
        cobj->KeyRepeatDelay = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:KeyRepeatDelay",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getKeyRepeatDelay'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getKeyRepeatRate(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getKeyRepeatRate'", nullptr);
        return 0;
    }
#endif

    tolua_pushnumber(tolua_S,(lua_Number)cobj->KeyRepeatRate);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getKeyRepeatRate'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setKeyRepeatRate(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setKeyRepeatRate'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiIO:KeyRepeatRate");
        cobj->KeyRepeatRate = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:KeyRepeatRate",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getKeyRepeatRate'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getFonts(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getFonts'", nullptr);
        return 0;
    }
#endif

    #pragma warning NO CONVERSION FROM NATIVE FOR ImFontAtlas*;

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getFonts'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setFonts(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setFonts'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        ImFontAtlas* arg0;
        #pragma warning NO CONVERSION TO NATIVE FOR ImFontAtlas*
		ok = false;
        cobj->Fonts = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:Fonts",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getFonts'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getFontGlobalScale(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getFontGlobalScale'", nullptr);
        return 0;
    }
#endif

    tolua_pushnumber(tolua_S,(lua_Number)cobj->FontGlobalScale);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getFontGlobalScale'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setFontGlobalScale(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setFontGlobalScale'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiIO:FontGlobalScale");
        cobj->FontGlobalScale = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:FontGlobalScale",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getFontGlobalScale'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getFontAllowUserScaling(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getFontAllowUserScaling'", nullptr);
        return 0;
    }
#endif

    tolua_pushboolean(tolua_S,(bool)cobj->FontAllowUserScaling);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getFontAllowUserScaling'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setFontAllowUserScaling(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setFontAllowUserScaling'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiIO:FontAllowUserScaling");
        cobj->FontAllowUserScaling = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:FontAllowUserScaling",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getFontAllowUserScaling'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getFontDefault(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getFontDefault'", nullptr);
        return 0;
    }
#endif

    #pragma warning NO CONVERSION FROM NATIVE FOR ImFont*;

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getFontDefault'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setFontDefault(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setFontDefault'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        ImFont* arg0;
        #pragma warning NO CONVERSION TO NATIVE FOR ImFont*
		ok = false;
        cobj->FontDefault = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:FontDefault",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getFontDefault'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getDisplayFramebufferScale(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getDisplayFramebufferScale'", nullptr);
        return 0;
    }
#endif

    ImVec2_to_luaval(tolua_S, cobj->DisplayFramebufferScale);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getDisplayFramebufferScale'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setDisplayFramebufferScale(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setDisplayFramebufferScale'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGuiIO:DisplayFramebufferScale");
        cobj->DisplayFramebufferScale = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:DisplayFramebufferScale",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getDisplayFramebufferScale'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getMouseDrawCursor(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getMouseDrawCursor'", nullptr);
        return 0;
    }
#endif

    tolua_pushboolean(tolua_S,(bool)cobj->MouseDrawCursor);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMouseDrawCursor'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setMouseDrawCursor(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setMouseDrawCursor'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiIO:MouseDrawCursor");
        cobj->MouseDrawCursor = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:MouseDrawCursor",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMouseDrawCursor'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getConfigMacOSXBehaviors(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getConfigMacOSXBehaviors'", nullptr);
        return 0;
    }
#endif

    tolua_pushboolean(tolua_S,(bool)cobj->ConfigMacOSXBehaviors);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getConfigMacOSXBehaviors'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setConfigMacOSXBehaviors(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setConfigMacOSXBehaviors'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiIO:ConfigMacOSXBehaviors");
        cobj->ConfigMacOSXBehaviors = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:ConfigMacOSXBehaviors",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getConfigMacOSXBehaviors'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getConfigInputTextCursorBlink(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getConfigInputTextCursorBlink'", nullptr);
        return 0;
    }
#endif

    tolua_pushboolean(tolua_S,(bool)cobj->ConfigInputTextCursorBlink);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getConfigInputTextCursorBlink'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setConfigInputTextCursorBlink(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setConfigInputTextCursorBlink'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiIO:ConfigInputTextCursorBlink");
        cobj->ConfigInputTextCursorBlink = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:ConfigInputTextCursorBlink",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getConfigInputTextCursorBlink'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getConfigWindowsResizeFromEdges(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getConfigWindowsResizeFromEdges'", nullptr);
        return 0;
    }
#endif

    tolua_pushboolean(tolua_S,(bool)cobj->ConfigWindowsResizeFromEdges);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getConfigWindowsResizeFromEdges'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setConfigWindowsResizeFromEdges(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setConfigWindowsResizeFromEdges'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiIO:ConfigWindowsResizeFromEdges");
        cobj->ConfigWindowsResizeFromEdges = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:ConfigWindowsResizeFromEdges",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getConfigWindowsResizeFromEdges'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getConfigWindowsMoveFromTitleBarOnly(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getConfigWindowsMoveFromTitleBarOnly'", nullptr);
        return 0;
    }
#endif

    tolua_pushboolean(tolua_S,(bool)cobj->ConfigWindowsMoveFromTitleBarOnly);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getConfigWindowsMoveFromTitleBarOnly'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setConfigWindowsMoveFromTitleBarOnly(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setConfigWindowsMoveFromTitleBarOnly'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiIO:ConfigWindowsMoveFromTitleBarOnly");
        cobj->ConfigWindowsMoveFromTitleBarOnly = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:ConfigWindowsMoveFromTitleBarOnly",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getConfigWindowsMoveFromTitleBarOnly'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getBackendPlatformName(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getBackendPlatformName'", nullptr);
        return 0;
    }
#endif

    tolua_pushstring(tolua_S,(const char*)cobj->BackendPlatformName);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getBackendPlatformName'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setBackendPlatformName(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setBackendPlatformName'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGuiIO:BackendPlatformName"); arg0 = arg0_tmp.c_str();
        cobj->BackendPlatformName = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:BackendPlatformName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getBackendPlatformName'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getBackendRendererName(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getBackendRendererName'", nullptr);
        return 0;
    }
#endif

    tolua_pushstring(tolua_S,(const char*)cobj->BackendRendererName);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getBackendRendererName'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setBackendRendererName(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setBackendRendererName'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImGuiIO:BackendRendererName"); arg0 = arg0_tmp.c_str();
        cobj->BackendRendererName = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:BackendRendererName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getBackendRendererName'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getMousePos(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getMousePos'", nullptr);
        return 0;
    }
#endif

    ImVec2_to_luaval(tolua_S, cobj->MousePos);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMousePos'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setMousePos(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setMousePos'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGuiIO:MousePos");
        cobj->MousePos = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:MousePos",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMousePos'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getMouseWheel(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getMouseWheel'", nullptr);
        return 0;
    }
#endif

    tolua_pushnumber(tolua_S,(lua_Number)cobj->MouseWheel);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMouseWheel'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setMouseWheel(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setMouseWheel'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiIO:MouseWheel");
        cobj->MouseWheel = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:MouseWheel",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMouseWheel'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getMouseWheelH(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getMouseWheelH'", nullptr);
        return 0;
    }
#endif

    tolua_pushnumber(tolua_S,(lua_Number)cobj->MouseWheelH);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMouseWheelH'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setMouseWheelH(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setMouseWheelH'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiIO:MouseWheelH");
        cobj->MouseWheelH = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:MouseWheelH",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMouseWheelH'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getKeyCtrl(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getKeyCtrl'", nullptr);
        return 0;
    }
#endif

    tolua_pushboolean(tolua_S,(bool)cobj->KeyCtrl);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getKeyCtrl'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setKeyCtrl(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setKeyCtrl'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiIO:KeyCtrl");
        cobj->KeyCtrl = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:KeyCtrl",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getKeyCtrl'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getKeyShift(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getKeyShift'", nullptr);
        return 0;
    }
#endif

    tolua_pushboolean(tolua_S,(bool)cobj->KeyShift);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getKeyShift'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setKeyShift(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setKeyShift'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiIO:KeyShift");
        cobj->KeyShift = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:KeyShift",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getKeyShift'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getKeyAlt(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getKeyAlt'", nullptr);
        return 0;
    }
#endif

    tolua_pushboolean(tolua_S,(bool)cobj->KeyAlt);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getKeyAlt'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setKeyAlt(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setKeyAlt'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiIO:KeyAlt");
        cobj->KeyAlt = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:KeyAlt",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getKeyAlt'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getKeySuper(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getKeySuper'", nullptr);
        return 0;
    }
#endif

    tolua_pushboolean(tolua_S,(bool)cobj->KeySuper);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getKeySuper'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setKeySuper(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setKeySuper'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiIO:KeySuper");
        cobj->KeySuper = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:KeySuper",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getKeySuper'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getWantCaptureMouse(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getWantCaptureMouse'", nullptr);
        return 0;
    }
#endif

    tolua_pushboolean(tolua_S,(bool)cobj->WantCaptureMouse);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getWantCaptureMouse'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setWantCaptureMouse(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setWantCaptureMouse'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiIO:WantCaptureMouse");
        cobj->WantCaptureMouse = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:WantCaptureMouse",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getWantCaptureMouse'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getWantCaptureKeyboard(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getWantCaptureKeyboard'", nullptr);
        return 0;
    }
#endif

    tolua_pushboolean(tolua_S,(bool)cobj->WantCaptureKeyboard);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getWantCaptureKeyboard'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setWantCaptureKeyboard(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setWantCaptureKeyboard'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiIO:WantCaptureKeyboard");
        cobj->WantCaptureKeyboard = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:WantCaptureKeyboard",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getWantCaptureKeyboard'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getWantTextInput(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getWantTextInput'", nullptr);
        return 0;
    }
#endif

    tolua_pushboolean(tolua_S,(bool)cobj->WantTextInput);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getWantTextInput'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setWantTextInput(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setWantTextInput'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiIO:WantTextInput");
        cobj->WantTextInput = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:WantTextInput",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getWantTextInput'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getWantSetMousePos(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getWantSetMousePos'", nullptr);
        return 0;
    }
#endif

    tolua_pushboolean(tolua_S,(bool)cobj->WantSetMousePos);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getWantSetMousePos'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setWantSetMousePos(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setWantSetMousePos'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiIO:WantSetMousePos");
        cobj->WantSetMousePos = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:WantSetMousePos",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getWantSetMousePos'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getWantSaveIniSettings(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getWantSaveIniSettings'", nullptr);
        return 0;
    }
#endif

    tolua_pushboolean(tolua_S,(bool)cobj->WantSaveIniSettings);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getWantSaveIniSettings'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setWantSaveIniSettings(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setWantSaveIniSettings'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiIO:WantSaveIniSettings");
        cobj->WantSaveIniSettings = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:WantSaveIniSettings",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getWantSaveIniSettings'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getNavActive(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getNavActive'", nullptr);
        return 0;
    }
#endif

    tolua_pushboolean(tolua_S,(bool)cobj->NavActive);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getNavActive'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setNavActive(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setNavActive'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiIO:NavActive");
        cobj->NavActive = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:NavActive",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getNavActive'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getNavVisible(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getNavVisible'", nullptr);
        return 0;
    }
#endif

    tolua_pushboolean(tolua_S,(bool)cobj->NavVisible);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getNavVisible'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setNavVisible(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setNavVisible'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiIO:NavVisible");
        cobj->NavVisible = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:NavVisible",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getNavVisible'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getFramerate(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getFramerate'", nullptr);
        return 0;
    }
#endif

    tolua_pushnumber(tolua_S,(lua_Number)cobj->Framerate);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getFramerate'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setFramerate(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setFramerate'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiIO:Framerate");
        cobj->Framerate = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:Framerate",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getFramerate'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getMetricsRenderVertices(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getMetricsRenderVertices'", nullptr);
        return 0;
    }
#endif

    tolua_pushnumber(tolua_S,(lua_Number)cobj->MetricsRenderVertices);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMetricsRenderVertices'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setMetricsRenderVertices(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setMetricsRenderVertices'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGuiIO:MetricsRenderVertices");
        cobj->MetricsRenderVertices = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:MetricsRenderVertices",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMetricsRenderVertices'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getMetricsRenderIndices(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getMetricsRenderIndices'", nullptr);
        return 0;
    }
#endif

    tolua_pushnumber(tolua_S,(lua_Number)cobj->MetricsRenderIndices);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMetricsRenderIndices'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setMetricsRenderIndices(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setMetricsRenderIndices'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGuiIO:MetricsRenderIndices");
        cobj->MetricsRenderIndices = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:MetricsRenderIndices",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMetricsRenderIndices'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getMetricsRenderWindows(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getMetricsRenderWindows'", nullptr);
        return 0;
    }
#endif

    tolua_pushnumber(tolua_S,(lua_Number)cobj->MetricsRenderWindows);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMetricsRenderWindows'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setMetricsRenderWindows(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setMetricsRenderWindows'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGuiIO:MetricsRenderWindows");
        cobj->MetricsRenderWindows = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:MetricsRenderWindows",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMetricsRenderWindows'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getMetricsActiveWindows(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getMetricsActiveWindows'", nullptr);
        return 0;
    }
#endif

    tolua_pushnumber(tolua_S,(lua_Number)cobj->MetricsActiveWindows);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMetricsActiveWindows'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setMetricsActiveWindows(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setMetricsActiveWindows'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGuiIO:MetricsActiveWindows");
        cobj->MetricsActiveWindows = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:MetricsActiveWindows",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMetricsActiveWindows'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getMetricsActiveAllocations(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getMetricsActiveAllocations'", nullptr);
        return 0;
    }
#endif

    tolua_pushnumber(tolua_S,(lua_Number)cobj->MetricsActiveAllocations);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMetricsActiveAllocations'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setMetricsActiveAllocations(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setMetricsActiveAllocations'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGuiIO:MetricsActiveAllocations");
        cobj->MetricsActiveAllocations = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:MetricsActiveAllocations",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMetricsActiveAllocations'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_getMouseDelta(lua_State* tolua_S)
{
    ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_getMouseDelta'", nullptr);
        return 0;
    }
#endif

    ImVec2_to_luaval(tolua_S, cobj->MouseDelta);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMouseDelta'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiIO_ImGuiIO_setMouseDelta(lua_State* tolua_S)
{
    int argc = 0;
    ImGuiIO* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiIO",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImGuiIO*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiIO_ImGuiIO_setMouseDelta'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGuiIO:MouseDelta");
        cobj->MouseDelta = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:MouseDelta",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiIO_ImGuiIO_getMouseDelta'.",&tolua_err);
    return 0;
#endif
}
static int lua_x_imguiIO_ImGuiIO_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ImGuiIO)");
    return 0;
}

// patch 20190602

int lua_x_imguiPatch1_ImGuiIO_getConfigDockingNoSplit(lua_State* tolua_S)
{
	ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiIO", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiPatch1_ImGuiIO_getConfigDockingNoSplit'", nullptr);
		return 0;
	}
#endif

	tolua_pushboolean(tolua_S, (bool)cobj->ConfigDockingNoSplit);

	return 1;
#if COCOS2D_DEBUG >= 1
	tolua_lerror:
				tolua_error(tolua_S, "#ferror in function 'lua_x_imguiPatch1_ImGuiIO_getConfigDockingNoSplit'.", &tolua_err);
				return 0;
#endif
}
int lua_x_imguiPatch1_ImGuiIO_setConfigDockingNoSplit(lua_State* tolua_S)
{
	int argc = 0;
	ImGuiIO* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiIO", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiPatch1_ImGuiIO_setConfigDockingNoSplit'", nullptr);
		return 0;
	}
#endif
	argc = lua_gettop(tolua_S) - 1;

	if (1 == argc)
	{
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 2, &arg0, "imgui.ImGuiIO:ConfigDockingNoSplit");
		cobj->ConfigDockingNoSplit = arg0;
		return 0;
	}

	CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:ConfigDockingNoSplit", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_lerror:
				tolua_error(tolua_S, "#ferror in function 'lua_x_imguiPatch1_ImGuiIO_getConfigDockingNoSplit'.", &tolua_err);
				return 0;
#endif
}
int lua_x_imguiPatch1_ImGuiIO_getConfigDockingWithShift(lua_State* tolua_S)
{
	ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiIO", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiPatch1_ImGuiIO_getConfigDockingWithShift'", nullptr);
		return 0;
	}
#endif

	tolua_pushboolean(tolua_S, (bool)cobj->ConfigDockingWithShift);

	return 1;
#if COCOS2D_DEBUG >= 1
	tolua_lerror:
				tolua_error(tolua_S, "#ferror in function 'lua_x_imguiPatch1_ImGuiIO_getConfigDockingWithShift'.", &tolua_err);
				return 0;
#endif
}
int lua_x_imguiPatch1_ImGuiIO_setConfigDockingWithShift(lua_State* tolua_S)
{
	int argc = 0;
	ImGuiIO* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiIO", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiPatch1_ImGuiIO_setConfigDockingWithShift'", nullptr);
		return 0;
	}
#endif
	argc = lua_gettop(tolua_S) - 1;

	if (1 == argc)
	{
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 2, &arg0, "imgui.ImGuiIO:ConfigDockingWithShift");
		cobj->ConfigDockingWithShift = arg0;
		return 0;
	}

	CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:ConfigDockingWithShift", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_lerror:
				tolua_error(tolua_S, "#ferror in function 'lua_x_imguiPatch1_ImGuiIO_getConfigDockingWithShift'.", &tolua_err);
				return 0;
#endif
}
int lua_x_imguiPatch1_ImGuiIO_getConfigDockingTabBarOnSingleWindows(lua_State* tolua_S)
{
	ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiIO", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiPatch1_ImGuiIO_getConfigDockingTabBarOnSingleWindows'", nullptr);
		return 0;
	}
#endif

	tolua_pushboolean(tolua_S, (bool)cobj->ConfigDockingTabBarOnSingleWindows);

	return 1;
#if COCOS2D_DEBUG >= 1
	tolua_lerror:
				tolua_error(tolua_S, "#ferror in function 'lua_x_imguiPatch1_ImGuiIO_getConfigDockingTabBarOnSingleWindows'.", &tolua_err);
				return 0;
#endif
}
int lua_x_imguiPatch1_ImGuiIO_setConfigDockingTabBarOnSingleWindows(lua_State* tolua_S)
{
	int argc = 0;
	ImGuiIO* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiIO", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiPatch1_ImGuiIO_setConfigDockingTabBarOnSingleWindows'", nullptr);
		return 0;
	}
#endif
	argc = lua_gettop(tolua_S) - 1;

	if (1 == argc)
	{
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 2, &arg0, "imgui.ImGuiIO:ConfigDockingTabBarOnSingleWindows");
		cobj->ConfigDockingTabBarOnSingleWindows = arg0;
		return 0;
	}

	CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:ConfigDockingTabBarOnSingleWindows", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_lerror:
				tolua_error(tolua_S, "#ferror in function 'lua_x_imguiPatch1_ImGuiIO_getConfigDockingTabBarOnSingleWindows'.", &tolua_err);
				return 0;
#endif
}
int lua_x_imguiPatch1_ImGuiIO_getConfigDockingTransparentPayload(lua_State* tolua_S)
{
	ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiIO", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiPatch1_ImGuiIO_getConfigDockingTransparentPayload'", nullptr);
		return 0;
	}
#endif

	tolua_pushboolean(tolua_S, (bool)cobj->ConfigDockingTransparentPayload);

	return 1;
#if COCOS2D_DEBUG >= 1
	tolua_lerror:
				tolua_error(tolua_S, "#ferror in function 'lua_x_imguiPatch1_ImGuiIO_getConfigDockingTransparentPayload'.", &tolua_err);
				return 0;
#endif
}
int lua_x_imguiPatch1_ImGuiIO_setConfigDockingTransparentPayload(lua_State* tolua_S)
{
	int argc = 0;
	ImGuiIO* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiIO", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiPatch1_ImGuiIO_setConfigDockingTransparentPayload'", nullptr);
		return 0;
	}
#endif
	argc = lua_gettop(tolua_S) - 1;

	if (1 == argc)
	{
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 2, &arg0, "imgui.ImGuiIO:ConfigDockingTransparentPayload");
		cobj->ConfigDockingTransparentPayload = arg0;
		return 0;
	}

	CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:ConfigDockingTransparentPayload", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_lerror:
				tolua_error(tolua_S, "#ferror in function 'lua_x_imguiPatch1_ImGuiIO_getConfigDockingTransparentPayload'.", &tolua_err);
				return 0;
#endif
}
int lua_x_imguiPatch1_ImGuiIO_getConfigViewportsNoAutoMerge(lua_State* tolua_S)
{
	ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiIO", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiPatch1_ImGuiIO_getConfigViewportsNoAutoMerge'", nullptr);
		return 0;
	}
#endif

	tolua_pushboolean(tolua_S, (bool)cobj->ConfigViewportsNoAutoMerge);

	return 1;
#if COCOS2D_DEBUG >= 1
	tolua_lerror:
				tolua_error(tolua_S, "#ferror in function 'lua_x_imguiPatch1_ImGuiIO_getConfigViewportsNoAutoMerge'.", &tolua_err);
				return 0;
#endif
}
int lua_x_imguiPatch1_ImGuiIO_setConfigViewportsNoAutoMerge(lua_State* tolua_S)
{
	int argc = 0;
	ImGuiIO* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiIO", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiPatch1_ImGuiIO_setConfigViewportsNoAutoMerge'", nullptr);
		return 0;
	}
#endif
	argc = lua_gettop(tolua_S) - 1;

	if (1 == argc)
	{
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 2, &arg0, "imgui.ImGuiIO:ConfigViewportsNoAutoMerge");
		cobj->ConfigViewportsNoAutoMerge = arg0;
		return 0;
	}

	CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:ConfigViewportsNoAutoMerge", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_lerror:
				tolua_error(tolua_S, "#ferror in function 'lua_x_imguiPatch1_ImGuiIO_getConfigViewportsNoAutoMerge'.", &tolua_err);
				return 0;
#endif
}
int lua_x_imguiPatch1_ImGuiIO_getConfigViewportsNoTaskBarIcon(lua_State* tolua_S)
{
	ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiIO", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiPatch1_ImGuiIO_getConfigViewportsNoTaskBarIcon'", nullptr);
		return 0;
	}
#endif

	tolua_pushboolean(tolua_S, (bool)cobj->ConfigViewportsNoTaskBarIcon);

	return 1;
#if COCOS2D_DEBUG >= 1
	tolua_lerror:
				tolua_error(tolua_S, "#ferror in function 'lua_x_imguiPatch1_ImGuiIO_getConfigViewportsNoTaskBarIcon'.", &tolua_err);
				return 0;
#endif
}
int lua_x_imguiPatch1_ImGuiIO_setConfigViewportsNoTaskBarIcon(lua_State* tolua_S)
{
	int argc = 0;
	ImGuiIO* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiIO", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiPatch1_ImGuiIO_setConfigViewportsNoTaskBarIcon'", nullptr);
		return 0;
	}
#endif
	argc = lua_gettop(tolua_S) - 1;

	if (1 == argc)
	{
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 2, &arg0, "imgui.ImGuiIO:ConfigViewportsNoTaskBarIcon");
		cobj->ConfigViewportsNoTaskBarIcon = arg0;
		return 0;
	}

	CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:ConfigViewportsNoTaskBarIcon", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_lerror:
				tolua_error(tolua_S, "#ferror in function 'lua_x_imguiPatch1_ImGuiIO_getConfigViewportsNoTaskBarIcon'.", &tolua_err);
				return 0;
#endif
}
int lua_x_imguiPatch1_ImGuiIO_getConfigViewportsNoDecoration(lua_State* tolua_S)
{
	ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiIO", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiPatch1_ImGuiIO_getConfigViewportsNoDecoration'", nullptr);
		return 0;
	}
#endif

	tolua_pushboolean(tolua_S, (bool)cobj->ConfigViewportsNoDecoration);

	return 1;
#if COCOS2D_DEBUG >= 1
	tolua_lerror:
				tolua_error(tolua_S, "#ferror in function 'lua_x_imguiPatch1_ImGuiIO_getConfigViewportsNoDecoration'.", &tolua_err);
				return 0;
#endif
}
int lua_x_imguiPatch1_ImGuiIO_setConfigViewportsNoDecoration(lua_State* tolua_S)
{
	int argc = 0;
	ImGuiIO* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiIO", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiPatch1_ImGuiIO_setConfigViewportsNoDecoration'", nullptr);
		return 0;
	}
#endif
	argc = lua_gettop(tolua_S) - 1;

	if (1 == argc)
	{
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 2, &arg0, "imgui.ImGuiIO:ConfigViewportsNoDecoration");
		cobj->ConfigViewportsNoDecoration = arg0;
		return 0;
	}

	CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:ConfigViewportsNoDecoration", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_lerror:
				tolua_error(tolua_S, "#ferror in function 'lua_x_imguiPatch1_ImGuiIO_getConfigViewportsNoDecoration'.", &tolua_err);
				return 0;
#endif
}
int lua_x_imguiPatch1_ImGuiIO_getConfigViewportsNoDefaultParent(lua_State* tolua_S)
{
	ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiIO", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiPatch1_ImGuiIO_getConfigViewportsNoDefaultParent'", nullptr);
		return 0;
	}
#endif

	tolua_pushboolean(tolua_S, (bool)cobj->ConfigViewportsNoDefaultParent);

	return 1;
#if COCOS2D_DEBUG >= 1
	tolua_lerror:
				tolua_error(tolua_S, "#ferror in function 'lua_x_imguiPatch1_ImGuiIO_getConfigViewportsNoDefaultParent'.", &tolua_err);
				return 0;
#endif
}
int lua_x_imguiPatch1_ImGuiIO_setConfigViewportsNoDefaultParent(lua_State* tolua_S)
{
	int argc = 0;
	ImGuiIO* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiIO", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiPatch1_ImGuiIO_setConfigViewportsNoDefaultParent'", nullptr);
		return 0;
	}
#endif
	argc = lua_gettop(tolua_S) - 1;

	if (1 == argc)
	{
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 2, &arg0, "imgui.ImGuiIO:ConfigViewportsNoDefaultParent");
		cobj->ConfigViewportsNoDefaultParent = arg0;
		return 0;
	}

	CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:ConfigViewportsNoDefaultParent", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_lerror:
				tolua_error(tolua_S, "#ferror in function 'lua_x_imguiPatch1_ImGuiIO_getConfigViewportsNoDefaultParent'.", &tolua_err);
				return 0;
#endif
}
int lua_x_imguiPatch1_ImGuiIO_getMouseHoveredViewport(lua_State* tolua_S)
{
	ImGuiIO* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiIO", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiPatch1_ImGuiIO_getMouseHoveredViewport'", nullptr);
		return 0;
	}
#endif

	tolua_pushnumber(tolua_S, (lua_Number)cobj->MouseHoveredViewport);

	return 1;
#if COCOS2D_DEBUG >= 1
	tolua_lerror:
				tolua_error(tolua_S, "#ferror in function 'lua_x_imguiPatch1_ImGuiIO_getMouseHoveredViewport'.", &tolua_err);
				return 0;
#endif
}
int lua_x_imguiPatch1_ImGuiIO_setMouseHoveredViewport(lua_State* tolua_S)
{
	int argc = 0;
	ImGuiIO* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiIO", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiPatch1_ImGuiIO_setMouseHoveredViewport'", nullptr);
		return 0;
	}
#endif
	argc = lua_gettop(tolua_S) - 1;

	if (1 == argc)
	{
		unsigned int arg0;
		ok &= luaval_to_uint32(tolua_S, 2, &arg0, "imgui.ImGuiIO:MouseHoveredViewport");
		cobj->MouseHoveredViewport = arg0;
		return 0;
	}

	CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiIO:MouseHoveredViewport", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_lerror:
				tolua_error(tolua_S, "#ferror in function 'lua_x_imguiPatch1_ImGuiIO_getMouseHoveredViewport'.", &tolua_err);
				return 0;
#endif
}
static int lua_x_imguiPatch1_ImGuiIO_finalize(lua_State* tolua_S)
{
	printf("luabindings: finalizing LUA object (ImGuiIO)");
	return 0;
}

int lua_register_x_imguiIO_ImGuiIO(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"imgui.ImGuiIO");
    tolua_cclass(tolua_S,"ImGuiIO","imgui.ImGuiIO","",nullptr);

    tolua_beginmodule(tolua_S,"ImGuiIO");
        tolua_function(tolua_S,"AddInputCharactersUTF8",lua_x_imguiIO_ImGuiIO_AddInputCharactersUTF8);
        tolua_function(tolua_S,"AddInputCharacter",lua_x_imguiIO_ImGuiIO_AddInputCharacter);
        tolua_function(tolua_S,"ClearInputCharacters",lua_x_imguiIO_ImGuiIO_ClearInputCharacters);
        tolua_variable(tolua_S,"ConfigFlags", lua_x_imguiIO_ImGuiIO_getConfigFlags, lua_x_imguiIO_ImGuiIO_setConfigFlags);
        tolua_variable(tolua_S,"BackendFlags", lua_x_imguiIO_ImGuiIO_getBackendFlags, lua_x_imguiIO_ImGuiIO_setBackendFlags);
        tolua_variable(tolua_S,"DisplaySize", lua_x_imguiIO_ImGuiIO_getDisplaySize, lua_x_imguiIO_ImGuiIO_setDisplaySize);
        tolua_variable(tolua_S,"DeltaTime", lua_x_imguiIO_ImGuiIO_getDeltaTime, lua_x_imguiIO_ImGuiIO_setDeltaTime);
        tolua_variable(tolua_S,"IniSavingRate", lua_x_imguiIO_ImGuiIO_getIniSavingRate, lua_x_imguiIO_ImGuiIO_setIniSavingRate);
        tolua_variable(tolua_S,"IniFilename", lua_x_imguiIO_ImGuiIO_getIniFilename, lua_x_imguiIO_ImGuiIO_setIniFilename);
        tolua_variable(tolua_S,"LogFilename", lua_x_imguiIO_ImGuiIO_getLogFilename, lua_x_imguiIO_ImGuiIO_setLogFilename);
        tolua_variable(tolua_S,"MouseDoubleClickTime", lua_x_imguiIO_ImGuiIO_getMouseDoubleClickTime, lua_x_imguiIO_ImGuiIO_setMouseDoubleClickTime);
        tolua_variable(tolua_S,"MouseDoubleClickMaxDist", lua_x_imguiIO_ImGuiIO_getMouseDoubleClickMaxDist, lua_x_imguiIO_ImGuiIO_setMouseDoubleClickMaxDist);
        tolua_variable(tolua_S,"MouseDragThreshold", lua_x_imguiIO_ImGuiIO_getMouseDragThreshold, lua_x_imguiIO_ImGuiIO_setMouseDragThreshold);
        tolua_variable(tolua_S,"KeyRepeatDelay", lua_x_imguiIO_ImGuiIO_getKeyRepeatDelay, lua_x_imguiIO_ImGuiIO_setKeyRepeatDelay);
        tolua_variable(tolua_S,"KeyRepeatRate", lua_x_imguiIO_ImGuiIO_getKeyRepeatRate, lua_x_imguiIO_ImGuiIO_setKeyRepeatRate);
        tolua_variable(tolua_S,"Fonts", lua_x_imguiIO_ImGuiIO_getFonts, lua_x_imguiIO_ImGuiIO_setFonts);
        tolua_variable(tolua_S,"FontGlobalScale", lua_x_imguiIO_ImGuiIO_getFontGlobalScale, lua_x_imguiIO_ImGuiIO_setFontGlobalScale);
        tolua_variable(tolua_S,"FontAllowUserScaling", lua_x_imguiIO_ImGuiIO_getFontAllowUserScaling, lua_x_imguiIO_ImGuiIO_setFontAllowUserScaling);
        tolua_variable(tolua_S,"FontDefault", lua_x_imguiIO_ImGuiIO_getFontDefault, lua_x_imguiIO_ImGuiIO_setFontDefault);
        tolua_variable(tolua_S,"DisplayFramebufferScale", lua_x_imguiIO_ImGuiIO_getDisplayFramebufferScale, lua_x_imguiIO_ImGuiIO_setDisplayFramebufferScale);
        tolua_variable(tolua_S,"MouseDrawCursor", lua_x_imguiIO_ImGuiIO_getMouseDrawCursor, lua_x_imguiIO_ImGuiIO_setMouseDrawCursor);
        tolua_variable(tolua_S,"ConfigMacOSXBehaviors", lua_x_imguiIO_ImGuiIO_getConfigMacOSXBehaviors, lua_x_imguiIO_ImGuiIO_setConfigMacOSXBehaviors);
        tolua_variable(tolua_S,"ConfigInputTextCursorBlink", lua_x_imguiIO_ImGuiIO_getConfigInputTextCursorBlink, lua_x_imguiIO_ImGuiIO_setConfigInputTextCursorBlink);
        tolua_variable(tolua_S,"ConfigWindowsResizeFromEdges", lua_x_imguiIO_ImGuiIO_getConfigWindowsResizeFromEdges, lua_x_imguiIO_ImGuiIO_setConfigWindowsResizeFromEdges);
        tolua_variable(tolua_S,"ConfigWindowsMoveFromTitleBarOnly", lua_x_imguiIO_ImGuiIO_getConfigWindowsMoveFromTitleBarOnly, lua_x_imguiIO_ImGuiIO_setConfigWindowsMoveFromTitleBarOnly);
        tolua_variable(tolua_S,"BackendPlatformName", lua_x_imguiIO_ImGuiIO_getBackendPlatformName, lua_x_imguiIO_ImGuiIO_setBackendPlatformName);
        tolua_variable(tolua_S,"BackendRendererName", lua_x_imguiIO_ImGuiIO_getBackendRendererName, lua_x_imguiIO_ImGuiIO_setBackendRendererName);
        tolua_variable(tolua_S,"MousePos", lua_x_imguiIO_ImGuiIO_getMousePos, lua_x_imguiIO_ImGuiIO_setMousePos);
        tolua_variable(tolua_S,"MouseWheel", lua_x_imguiIO_ImGuiIO_getMouseWheel, lua_x_imguiIO_ImGuiIO_setMouseWheel);
        tolua_variable(tolua_S,"MouseWheelH", lua_x_imguiIO_ImGuiIO_getMouseWheelH, lua_x_imguiIO_ImGuiIO_setMouseWheelH);
        tolua_variable(tolua_S,"KeyCtrl", lua_x_imguiIO_ImGuiIO_getKeyCtrl, lua_x_imguiIO_ImGuiIO_setKeyCtrl);
        tolua_variable(tolua_S,"KeyShift", lua_x_imguiIO_ImGuiIO_getKeyShift, lua_x_imguiIO_ImGuiIO_setKeyShift);
        tolua_variable(tolua_S,"KeyAlt", lua_x_imguiIO_ImGuiIO_getKeyAlt, lua_x_imguiIO_ImGuiIO_setKeyAlt);
        tolua_variable(tolua_S,"KeySuper", lua_x_imguiIO_ImGuiIO_getKeySuper, lua_x_imguiIO_ImGuiIO_setKeySuper);
        tolua_variable(tolua_S,"WantCaptureMouse", lua_x_imguiIO_ImGuiIO_getWantCaptureMouse, lua_x_imguiIO_ImGuiIO_setWantCaptureMouse);
        tolua_variable(tolua_S,"WantCaptureKeyboard", lua_x_imguiIO_ImGuiIO_getWantCaptureKeyboard, lua_x_imguiIO_ImGuiIO_setWantCaptureKeyboard);
        tolua_variable(tolua_S,"WantTextInput", lua_x_imguiIO_ImGuiIO_getWantTextInput, lua_x_imguiIO_ImGuiIO_setWantTextInput);
        tolua_variable(tolua_S,"WantSetMousePos", lua_x_imguiIO_ImGuiIO_getWantSetMousePos, lua_x_imguiIO_ImGuiIO_setWantSetMousePos);
        tolua_variable(tolua_S,"WantSaveIniSettings", lua_x_imguiIO_ImGuiIO_getWantSaveIniSettings, lua_x_imguiIO_ImGuiIO_setWantSaveIniSettings);
        tolua_variable(tolua_S,"NavActive", lua_x_imguiIO_ImGuiIO_getNavActive, lua_x_imguiIO_ImGuiIO_setNavActive);
        tolua_variable(tolua_S,"NavVisible", lua_x_imguiIO_ImGuiIO_getNavVisible, lua_x_imguiIO_ImGuiIO_setNavVisible);
        tolua_variable(tolua_S,"Framerate", lua_x_imguiIO_ImGuiIO_getFramerate, lua_x_imguiIO_ImGuiIO_setFramerate);
        tolua_variable(tolua_S,"MetricsRenderVertices", lua_x_imguiIO_ImGuiIO_getMetricsRenderVertices, lua_x_imguiIO_ImGuiIO_setMetricsRenderVertices);
        tolua_variable(tolua_S,"MetricsRenderIndices", lua_x_imguiIO_ImGuiIO_getMetricsRenderIndices, lua_x_imguiIO_ImGuiIO_setMetricsRenderIndices);
        tolua_variable(tolua_S,"MetricsRenderWindows", lua_x_imguiIO_ImGuiIO_getMetricsRenderWindows, lua_x_imguiIO_ImGuiIO_setMetricsRenderWindows);
        tolua_variable(tolua_S,"MetricsActiveWindows", lua_x_imguiIO_ImGuiIO_getMetricsActiveWindows, lua_x_imguiIO_ImGuiIO_setMetricsActiveWindows);
        tolua_variable(tolua_S,"MetricsActiveAllocations", lua_x_imguiIO_ImGuiIO_getMetricsActiveAllocations, lua_x_imguiIO_ImGuiIO_setMetricsActiveAllocations);
        tolua_variable(tolua_S,"MouseDelta", lua_x_imguiIO_ImGuiIO_getMouseDelta, lua_x_imguiIO_ImGuiIO_setMouseDelta);

		// patch 20190602
		tolua_variable(tolua_S, "ConfigDockingNoSplit", lua_x_imguiPatch1_ImGuiIO_getConfigDockingNoSplit, lua_x_imguiPatch1_ImGuiIO_setConfigDockingNoSplit);
		tolua_variable(tolua_S, "ConfigDockingWithShift", lua_x_imguiPatch1_ImGuiIO_getConfigDockingWithShift, lua_x_imguiPatch1_ImGuiIO_setConfigDockingWithShift);
		tolua_variable(tolua_S, "ConfigDockingTabBarOnSingleWindows", lua_x_imguiPatch1_ImGuiIO_getConfigDockingTabBarOnSingleWindows, lua_x_imguiPatch1_ImGuiIO_setConfigDockingTabBarOnSingleWindows);
		tolua_variable(tolua_S, "ConfigDockingTransparentPayload", lua_x_imguiPatch1_ImGuiIO_getConfigDockingTransparentPayload, lua_x_imguiPatch1_ImGuiIO_setConfigDockingTransparentPayload);
		tolua_variable(tolua_S, "ConfigViewportsNoAutoMerge", lua_x_imguiPatch1_ImGuiIO_getConfigViewportsNoAutoMerge, lua_x_imguiPatch1_ImGuiIO_setConfigViewportsNoAutoMerge);
		tolua_variable(tolua_S, "ConfigViewportsNoTaskBarIcon", lua_x_imguiPatch1_ImGuiIO_getConfigViewportsNoTaskBarIcon, lua_x_imguiPatch1_ImGuiIO_setConfigViewportsNoTaskBarIcon);
		tolua_variable(tolua_S, "ConfigViewportsNoDecoration", lua_x_imguiPatch1_ImGuiIO_getConfigViewportsNoDecoration, lua_x_imguiPatch1_ImGuiIO_setConfigViewportsNoDecoration);
		tolua_variable(tolua_S, "ConfigViewportsNoDefaultParent", lua_x_imguiPatch1_ImGuiIO_getConfigViewportsNoDefaultParent, lua_x_imguiPatch1_ImGuiIO_setConfigViewportsNoDefaultParent);
		tolua_variable(tolua_S, "MouseHoveredViewport", lua_x_imguiPatch1_ImGuiIO_getMouseHoveredViewport, lua_x_imguiPatch1_ImGuiIO_setMouseHoveredViewport);
	tolua_endmodule(tolua_S);
    std::string typeName = typeid(ImGuiIO).name();
    g_luaType[typeName] = "imgui.ImGuiIO";
    g_typeCast["ImGuiIO"] = "imgui.ImGuiIO";
    return 1;
}

TOLUA_API int register_all_x_imguiIO(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"imgui",0);
	tolua_beginmodule(tolua_S,"imgui");

	lua_register_x_imguiIO_ImGuiIO(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

