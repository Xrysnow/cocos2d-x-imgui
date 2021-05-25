#include "lua_imguiIO_auto.hpp"
#include "imgui_lua.hpp"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"
#include "lua_conversion.hpp"
using lua::luaval_to_native;
using lua::native_to_luaval;
namespace imgui { using ImGuiIO = ImGuiIO; }

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

int lua_x_imguiIO_ImGuiIO_AddInputCharacter(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO:addInputCharacter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		unsigned int arg0;
		ok &= luaval_to_uint32(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddInputCharacter(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_AddInputCharacterUTF16(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO:addInputCharacterUTF16";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		unsigned short arg0;
		ok &= luaval_to_ushort(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddInputCharacterUTF16(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_AddInputCharactersUTF8(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO:addInputCharactersUTF8";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 2); if (ok) arg0 = luaL_checkstring(tolua_S, 2);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddInputCharactersUTF8(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_ClearInputCharacters(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO:clearInputCharacters";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->ClearInputCharacters();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiIO_ImGuiIO_getConfigFlags(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigFlags getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ConfigFlags);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setConfigFlags(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigFlags setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ConfigFlags, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getBackendFlags(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.BackendFlags getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->BackendFlags);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setBackendFlags(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.BackendFlags setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->BackendFlags, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getDisplaySize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.DisplaySize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->DisplaySize);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setDisplaySize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.DisplaySize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->DisplaySize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getDeltaTime(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.DeltaTime getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->DeltaTime);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setDeltaTime(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.DeltaTime setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->DeltaTime, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getIniSavingRate(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.IniSavingRate getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->IniSavingRate);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setIniSavingRate(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.IniSavingRate setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->IniSavingRate, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getIniFilename(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.IniFilename getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->IniFilename);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setIniFilename(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.IniFilename setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->IniFilename, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getLogFilename(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.LogFilename getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->LogFilename);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setLogFilename(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.LogFilename setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->LogFilename, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getMouseDoubleClickTime(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MouseDoubleClickTime getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MouseDoubleClickTime);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setMouseDoubleClickTime(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MouseDoubleClickTime setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MouseDoubleClickTime, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getMouseDoubleClickMaxDist(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MouseDoubleClickMaxDist getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MouseDoubleClickMaxDist);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setMouseDoubleClickMaxDist(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MouseDoubleClickMaxDist setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MouseDoubleClickMaxDist, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getMouseDragThreshold(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MouseDragThreshold getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MouseDragThreshold);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setMouseDragThreshold(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MouseDragThreshold setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MouseDragThreshold, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getKeyRepeatDelay(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.KeyRepeatDelay getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->KeyRepeatDelay);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setKeyRepeatDelay(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.KeyRepeatDelay setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->KeyRepeatDelay, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getKeyRepeatRate(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.KeyRepeatRate getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->KeyRepeatRate);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setKeyRepeatRate(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.KeyRepeatRate setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->KeyRepeatRate, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getFonts(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.Fonts getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Fonts);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setFonts(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.Fonts setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Fonts, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getFontGlobalScale(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.FontGlobalScale getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->FontGlobalScale);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setFontGlobalScale(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.FontGlobalScale setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->FontGlobalScale, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getFontAllowUserScaling(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.FontAllowUserScaling getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->FontAllowUserScaling);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setFontAllowUserScaling(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.FontAllowUserScaling setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->FontAllowUserScaling, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getFontDefault(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.FontDefault getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->FontDefault);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setFontDefault(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.FontDefault setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->FontDefault, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getDisplayFramebufferScale(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.DisplayFramebufferScale getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->DisplayFramebufferScale);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setDisplayFramebufferScale(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.DisplayFramebufferScale setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->DisplayFramebufferScale, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getConfigDockingNoSplit(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigDockingNoSplit getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ConfigDockingNoSplit);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setConfigDockingNoSplit(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigDockingNoSplit setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ConfigDockingNoSplit, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getConfigDockingAlwaysTabBar(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigDockingAlwaysTabBar getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ConfigDockingAlwaysTabBar);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setConfigDockingAlwaysTabBar(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigDockingAlwaysTabBar setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ConfigDockingAlwaysTabBar, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getConfigDockingTransparentPayload(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigDockingTransparentPayload getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ConfigDockingTransparentPayload);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setConfigDockingTransparentPayload(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigDockingTransparentPayload setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ConfigDockingTransparentPayload, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getConfigViewportsNoAutoMerge(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigViewportsNoAutoMerge getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ConfigViewportsNoAutoMerge);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setConfigViewportsNoAutoMerge(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigViewportsNoAutoMerge setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ConfigViewportsNoAutoMerge, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getConfigViewportsNoTaskBarIcon(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigViewportsNoTaskBarIcon getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ConfigViewportsNoTaskBarIcon);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setConfigViewportsNoTaskBarIcon(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigViewportsNoTaskBarIcon setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ConfigViewportsNoTaskBarIcon, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getConfigViewportsNoDecoration(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigViewportsNoDecoration getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ConfigViewportsNoDecoration);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setConfigViewportsNoDecoration(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigViewportsNoDecoration setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ConfigViewportsNoDecoration, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getConfigViewportsNoDefaultParent(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigViewportsNoDefaultParent getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ConfigViewportsNoDefaultParent);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setConfigViewportsNoDefaultParent(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigViewportsNoDefaultParent setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ConfigViewportsNoDefaultParent, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getMouseDrawCursor(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MouseDrawCursor getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MouseDrawCursor);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setMouseDrawCursor(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MouseDrawCursor setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MouseDrawCursor, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getConfigMacOSXBehaviors(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigMacOSXBehaviors getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ConfigMacOSXBehaviors);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setConfigMacOSXBehaviors(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigMacOSXBehaviors setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ConfigMacOSXBehaviors, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getConfigInputTextCursorBlink(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigInputTextCursorBlink getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ConfigInputTextCursorBlink);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setConfigInputTextCursorBlink(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigInputTextCursorBlink setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ConfigInputTextCursorBlink, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getConfigDragClickToInputText(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigDragClickToInputText getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ConfigDragClickToInputText);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setConfigDragClickToInputText(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigDragClickToInputText setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ConfigDragClickToInputText, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getConfigWindowsResizeFromEdges(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigWindowsResizeFromEdges getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ConfigWindowsResizeFromEdges);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setConfigWindowsResizeFromEdges(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigWindowsResizeFromEdges setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ConfigWindowsResizeFromEdges, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getConfigWindowsMoveFromTitleBarOnly(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigWindowsMoveFromTitleBarOnly getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ConfigWindowsMoveFromTitleBarOnly);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setConfigWindowsMoveFromTitleBarOnly(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigWindowsMoveFromTitleBarOnly setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ConfigWindowsMoveFromTitleBarOnly, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getConfigMemoryCompactTimer(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigMemoryCompactTimer getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ConfigMemoryCompactTimer);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setConfigMemoryCompactTimer(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.ConfigMemoryCompactTimer setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ConfigMemoryCompactTimer, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getBackendPlatformName(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.BackendPlatformName getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->BackendPlatformName);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setBackendPlatformName(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.BackendPlatformName setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->BackendPlatformName, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getBackendRendererName(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.BackendRendererName getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->BackendRendererName);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setBackendRendererName(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.BackendRendererName setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->BackendRendererName, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getMousePos(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MousePos getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MousePos);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setMousePos(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MousePos setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MousePos, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getMouseWheel(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MouseWheel getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MouseWheel);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setMouseWheel(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MouseWheel setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MouseWheel, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getMouseWheelH(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MouseWheelH getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MouseWheelH);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setMouseWheelH(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MouseWheelH setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MouseWheelH, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getMouseHoveredViewport(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MouseHoveredViewport getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MouseHoveredViewport);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setMouseHoveredViewport(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MouseHoveredViewport setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MouseHoveredViewport, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getKeyCtrl(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.KeyCtrl getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->KeyCtrl);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setKeyCtrl(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.KeyCtrl setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->KeyCtrl, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getKeyShift(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.KeyShift getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->KeyShift);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setKeyShift(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.KeyShift setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->KeyShift, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getKeyAlt(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.KeyAlt getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->KeyAlt);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setKeyAlt(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.KeyAlt setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->KeyAlt, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getKeySuper(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.KeySuper getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->KeySuper);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setKeySuper(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.KeySuper setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->KeySuper, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getWantCaptureMouse(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.WantCaptureMouse getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->WantCaptureMouse);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setWantCaptureMouse(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.WantCaptureMouse setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->WantCaptureMouse, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getWantCaptureKeyboard(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.WantCaptureKeyboard getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->WantCaptureKeyboard);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setWantCaptureKeyboard(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.WantCaptureKeyboard setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->WantCaptureKeyboard, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getWantTextInput(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.WantTextInput getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->WantTextInput);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setWantTextInput(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.WantTextInput setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->WantTextInput, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getWantSetMousePos(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.WantSetMousePos getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->WantSetMousePos);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setWantSetMousePos(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.WantSetMousePos setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->WantSetMousePos, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getWantSaveIniSettings(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.WantSaveIniSettings getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->WantSaveIniSettings);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setWantSaveIniSettings(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.WantSaveIniSettings setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->WantSaveIniSettings, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getNavActive(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.NavActive getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->NavActive);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setNavActive(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.NavActive setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->NavActive, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getNavVisible(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.NavVisible getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->NavVisible);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setNavVisible(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.NavVisible setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->NavVisible, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getFramerate(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.Framerate getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Framerate);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setFramerate(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.Framerate setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Framerate, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getMetricsRenderVertices(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MetricsRenderVertices getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MetricsRenderVertices);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setMetricsRenderVertices(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MetricsRenderVertices setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MetricsRenderVertices, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getMetricsRenderIndices(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MetricsRenderIndices getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MetricsRenderIndices);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setMetricsRenderIndices(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MetricsRenderIndices setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MetricsRenderIndices, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getMetricsRenderWindows(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MetricsRenderWindows getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MetricsRenderWindows);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setMetricsRenderWindows(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MetricsRenderWindows setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MetricsRenderWindows, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getMetricsActiveWindows(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MetricsActiveWindows getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MetricsActiveWindows);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setMetricsActiveWindows(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MetricsActiveWindows setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MetricsActiveWindows, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getMetricsActiveAllocations(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MetricsActiveAllocations getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MetricsActiveAllocations);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setMetricsActiveAllocations(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MetricsActiveAllocations setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MetricsActiveAllocations, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiIO_ImGuiIO_getMouseDelta(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MouseDelta getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MouseDelta);
	return 1;
}
int lua_x_imguiIO_ImGuiIO_setMouseDelta(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiIO";
	constexpr auto LUA_FNAME = "imgui.ImGuiIO.MouseDelta setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiIO*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MouseDelta, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
static int lua_x_imguiIO_ImGuiIO_finalize(lua_State* tolua_S)
{
	return 0;
}

int lua_register_x_imguiIO_ImGuiIO(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "imgui.ImGuiIO");
	tolua_cclass(tolua_S, "ImGuiIO", "imgui.ImGuiIO", "", nullptr);

	tolua_beginmodule(tolua_S, "ImGuiIO");
		tolua_function(tolua_S, "addInputCharacter", lua_x_imguiIO_ImGuiIO_AddInputCharacter);
		tolua_function(tolua_S, "addInputCharacterUTF16", lua_x_imguiIO_ImGuiIO_AddInputCharacterUTF16);
		tolua_function(tolua_S, "addInputCharactersUTF8", lua_x_imguiIO_ImGuiIO_AddInputCharactersUTF8);
		tolua_function(tolua_S, "clearInputCharacters", lua_x_imguiIO_ImGuiIO_ClearInputCharacters);
		tolua_variable(tolua_S, "ConfigFlags", lua_x_imguiIO_ImGuiIO_getConfigFlags, lua_x_imguiIO_ImGuiIO_setConfigFlags);
		tolua_variable(tolua_S, "BackendFlags", lua_x_imguiIO_ImGuiIO_getBackendFlags, lua_x_imguiIO_ImGuiIO_setBackendFlags);
		tolua_variable(tolua_S, "DisplaySize", lua_x_imguiIO_ImGuiIO_getDisplaySize, lua_x_imguiIO_ImGuiIO_setDisplaySize);
		tolua_variable(tolua_S, "DeltaTime", lua_x_imguiIO_ImGuiIO_getDeltaTime, lua_x_imguiIO_ImGuiIO_setDeltaTime);
		tolua_variable(tolua_S, "IniSavingRate", lua_x_imguiIO_ImGuiIO_getIniSavingRate, lua_x_imguiIO_ImGuiIO_setIniSavingRate);
		tolua_variable(tolua_S, "IniFilename", lua_x_imguiIO_ImGuiIO_getIniFilename, lua_x_imguiIO_ImGuiIO_setIniFilename);
		tolua_variable(tolua_S, "LogFilename", lua_x_imguiIO_ImGuiIO_getLogFilename, lua_x_imguiIO_ImGuiIO_setLogFilename);
		tolua_variable(tolua_S, "MouseDoubleClickTime", lua_x_imguiIO_ImGuiIO_getMouseDoubleClickTime, lua_x_imguiIO_ImGuiIO_setMouseDoubleClickTime);
		tolua_variable(tolua_S, "MouseDoubleClickMaxDist", lua_x_imguiIO_ImGuiIO_getMouseDoubleClickMaxDist, lua_x_imguiIO_ImGuiIO_setMouseDoubleClickMaxDist);
		tolua_variable(tolua_S, "MouseDragThreshold", lua_x_imguiIO_ImGuiIO_getMouseDragThreshold, lua_x_imguiIO_ImGuiIO_setMouseDragThreshold);
		tolua_variable(tolua_S, "KeyRepeatDelay", lua_x_imguiIO_ImGuiIO_getKeyRepeatDelay, lua_x_imguiIO_ImGuiIO_setKeyRepeatDelay);
		tolua_variable(tolua_S, "KeyRepeatRate", lua_x_imguiIO_ImGuiIO_getKeyRepeatRate, lua_x_imguiIO_ImGuiIO_setKeyRepeatRate);
		tolua_variable(tolua_S, "Fonts", lua_x_imguiIO_ImGuiIO_getFonts, lua_x_imguiIO_ImGuiIO_setFonts);
		tolua_variable(tolua_S, "FontGlobalScale", lua_x_imguiIO_ImGuiIO_getFontGlobalScale, lua_x_imguiIO_ImGuiIO_setFontGlobalScale);
		tolua_variable(tolua_S, "FontAllowUserScaling", lua_x_imguiIO_ImGuiIO_getFontAllowUserScaling, lua_x_imguiIO_ImGuiIO_setFontAllowUserScaling);
		tolua_variable(tolua_S, "FontDefault", lua_x_imguiIO_ImGuiIO_getFontDefault, lua_x_imguiIO_ImGuiIO_setFontDefault);
		tolua_variable(tolua_S, "DisplayFramebufferScale", lua_x_imguiIO_ImGuiIO_getDisplayFramebufferScale, lua_x_imguiIO_ImGuiIO_setDisplayFramebufferScale);
		tolua_variable(tolua_S, "ConfigDockingNoSplit", lua_x_imguiIO_ImGuiIO_getConfigDockingNoSplit, lua_x_imguiIO_ImGuiIO_setConfigDockingNoSplit);
		tolua_variable(tolua_S, "ConfigDockingAlwaysTabBar", lua_x_imguiIO_ImGuiIO_getConfigDockingAlwaysTabBar, lua_x_imguiIO_ImGuiIO_setConfigDockingAlwaysTabBar);
		tolua_variable(tolua_S, "ConfigDockingTransparentPayload", lua_x_imguiIO_ImGuiIO_getConfigDockingTransparentPayload, lua_x_imguiIO_ImGuiIO_setConfigDockingTransparentPayload);
		tolua_variable(tolua_S, "ConfigViewportsNoAutoMerge", lua_x_imguiIO_ImGuiIO_getConfigViewportsNoAutoMerge, lua_x_imguiIO_ImGuiIO_setConfigViewportsNoAutoMerge);
		tolua_variable(tolua_S, "ConfigViewportsNoTaskBarIcon", lua_x_imguiIO_ImGuiIO_getConfigViewportsNoTaskBarIcon, lua_x_imguiIO_ImGuiIO_setConfigViewportsNoTaskBarIcon);
		tolua_variable(tolua_S, "ConfigViewportsNoDecoration", lua_x_imguiIO_ImGuiIO_getConfigViewportsNoDecoration, lua_x_imguiIO_ImGuiIO_setConfigViewportsNoDecoration);
		tolua_variable(tolua_S, "ConfigViewportsNoDefaultParent", lua_x_imguiIO_ImGuiIO_getConfigViewportsNoDefaultParent, lua_x_imguiIO_ImGuiIO_setConfigViewportsNoDefaultParent);
		tolua_variable(tolua_S, "MouseDrawCursor", lua_x_imguiIO_ImGuiIO_getMouseDrawCursor, lua_x_imguiIO_ImGuiIO_setMouseDrawCursor);
		tolua_variable(tolua_S, "ConfigMacOSXBehaviors", lua_x_imguiIO_ImGuiIO_getConfigMacOSXBehaviors, lua_x_imguiIO_ImGuiIO_setConfigMacOSXBehaviors);
		tolua_variable(tolua_S, "ConfigInputTextCursorBlink", lua_x_imguiIO_ImGuiIO_getConfigInputTextCursorBlink, lua_x_imguiIO_ImGuiIO_setConfigInputTextCursorBlink);
		tolua_variable(tolua_S, "ConfigDragClickToInputText", lua_x_imguiIO_ImGuiIO_getConfigDragClickToInputText, lua_x_imguiIO_ImGuiIO_setConfigDragClickToInputText);
		tolua_variable(tolua_S, "ConfigWindowsResizeFromEdges", lua_x_imguiIO_ImGuiIO_getConfigWindowsResizeFromEdges, lua_x_imguiIO_ImGuiIO_setConfigWindowsResizeFromEdges);
		tolua_variable(tolua_S, "ConfigWindowsMoveFromTitleBarOnly", lua_x_imguiIO_ImGuiIO_getConfigWindowsMoveFromTitleBarOnly, lua_x_imguiIO_ImGuiIO_setConfigWindowsMoveFromTitleBarOnly);
		tolua_variable(tolua_S, "ConfigMemoryCompactTimer", lua_x_imguiIO_ImGuiIO_getConfigMemoryCompactTimer, lua_x_imguiIO_ImGuiIO_setConfigMemoryCompactTimer);
		tolua_variable(tolua_S, "BackendPlatformName", lua_x_imguiIO_ImGuiIO_getBackendPlatformName, lua_x_imguiIO_ImGuiIO_setBackendPlatformName);
		tolua_variable(tolua_S, "BackendRendererName", lua_x_imguiIO_ImGuiIO_getBackendRendererName, lua_x_imguiIO_ImGuiIO_setBackendRendererName);
		tolua_variable(tolua_S, "MousePos", lua_x_imguiIO_ImGuiIO_getMousePos, lua_x_imguiIO_ImGuiIO_setMousePos);
		tolua_variable(tolua_S, "MouseWheel", lua_x_imguiIO_ImGuiIO_getMouseWheel, lua_x_imguiIO_ImGuiIO_setMouseWheel);
		tolua_variable(tolua_S, "MouseWheelH", lua_x_imguiIO_ImGuiIO_getMouseWheelH, lua_x_imguiIO_ImGuiIO_setMouseWheelH);
		tolua_variable(tolua_S, "MouseHoveredViewport", lua_x_imguiIO_ImGuiIO_getMouseHoveredViewport, lua_x_imguiIO_ImGuiIO_setMouseHoveredViewport);
		tolua_variable(tolua_S, "KeyCtrl", lua_x_imguiIO_ImGuiIO_getKeyCtrl, lua_x_imguiIO_ImGuiIO_setKeyCtrl);
		tolua_variable(tolua_S, "KeyShift", lua_x_imguiIO_ImGuiIO_getKeyShift, lua_x_imguiIO_ImGuiIO_setKeyShift);
		tolua_variable(tolua_S, "KeyAlt", lua_x_imguiIO_ImGuiIO_getKeyAlt, lua_x_imguiIO_ImGuiIO_setKeyAlt);
		tolua_variable(tolua_S, "KeySuper", lua_x_imguiIO_ImGuiIO_getKeySuper, lua_x_imguiIO_ImGuiIO_setKeySuper);
		tolua_variable(tolua_S, "WantCaptureMouse", lua_x_imguiIO_ImGuiIO_getWantCaptureMouse, lua_x_imguiIO_ImGuiIO_setWantCaptureMouse);
		tolua_variable(tolua_S, "WantCaptureKeyboard", lua_x_imguiIO_ImGuiIO_getWantCaptureKeyboard, lua_x_imguiIO_ImGuiIO_setWantCaptureKeyboard);
		tolua_variable(tolua_S, "WantTextInput", lua_x_imguiIO_ImGuiIO_getWantTextInput, lua_x_imguiIO_ImGuiIO_setWantTextInput);
		tolua_variable(tolua_S, "WantSetMousePos", lua_x_imguiIO_ImGuiIO_getWantSetMousePos, lua_x_imguiIO_ImGuiIO_setWantSetMousePos);
		tolua_variable(tolua_S, "WantSaveIniSettings", lua_x_imguiIO_ImGuiIO_getWantSaveIniSettings, lua_x_imguiIO_ImGuiIO_setWantSaveIniSettings);
		tolua_variable(tolua_S, "NavActive", lua_x_imguiIO_ImGuiIO_getNavActive, lua_x_imguiIO_ImGuiIO_setNavActive);
		tolua_variable(tolua_S, "NavVisible", lua_x_imguiIO_ImGuiIO_getNavVisible, lua_x_imguiIO_ImGuiIO_setNavVisible);
		tolua_variable(tolua_S, "Framerate", lua_x_imguiIO_ImGuiIO_getFramerate, lua_x_imguiIO_ImGuiIO_setFramerate);
		tolua_variable(tolua_S, "MetricsRenderVertices", lua_x_imguiIO_ImGuiIO_getMetricsRenderVertices, lua_x_imguiIO_ImGuiIO_setMetricsRenderVertices);
		tolua_variable(tolua_S, "MetricsRenderIndices", lua_x_imguiIO_ImGuiIO_getMetricsRenderIndices, lua_x_imguiIO_ImGuiIO_setMetricsRenderIndices);
		tolua_variable(tolua_S, "MetricsRenderWindows", lua_x_imguiIO_ImGuiIO_getMetricsRenderWindows, lua_x_imguiIO_ImGuiIO_setMetricsRenderWindows);
		tolua_variable(tolua_S, "MetricsActiveWindows", lua_x_imguiIO_ImGuiIO_getMetricsActiveWindows, lua_x_imguiIO_ImGuiIO_setMetricsActiveWindows);
		tolua_variable(tolua_S, "MetricsActiveAllocations", lua_x_imguiIO_ImGuiIO_getMetricsActiveAllocations, lua_x_imguiIO_ImGuiIO_setMetricsActiveAllocations);
		tolua_variable(tolua_S, "MouseDelta", lua_x_imguiIO_ImGuiIO_getMouseDelta, lua_x_imguiIO_ImGuiIO_setMouseDelta);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(imgui::ImGuiIO).name();
	g_luaType[typeName] = "imgui.ImGuiIO";
	g_typeCast["ImGuiIO"] = "imgui.ImGuiIO";
	return 1;
}

int register_all_x_imguiIO(lua_State* tolua_S)
{
	tolua_open(tolua_S);

	tolua_module(tolua_S, "imgui", 0);
	tolua_beginmodule(tolua_S, "imgui");

	lua_register_x_imguiIO_ImGuiIO(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

