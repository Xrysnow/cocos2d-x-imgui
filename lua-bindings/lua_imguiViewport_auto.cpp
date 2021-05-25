#include "lua_imguiViewport_auto.hpp"
#include "imgui_lua.hpp"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"
#include "lua_conversion.hpp"
using lua::luaval_to_native;
using lua::native_to_luaval;
namespace imgui { using ImGuiViewport = ImGuiViewport; }

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

int lua_x_imguiViewport_ImGuiViewport_GetCenter(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport:getCenter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->GetCenter());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiViewport_ImGuiViewport_GetWorkCenter(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport:getWorkCenter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->GetWorkCenter());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiViewport_ImGuiViewport_getID(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.ID getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ID);
	return 1;
}
int lua_x_imguiViewport_ImGuiViewport_setID(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.ID setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ID, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiViewport_ImGuiViewport_getFlags(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.Flags getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Flags);
	return 1;
}
int lua_x_imguiViewport_ImGuiViewport_setFlags(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.Flags setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Flags, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiViewport_ImGuiViewport_getPos(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.Pos getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Pos);
	return 1;
}
int lua_x_imguiViewport_ImGuiViewport_setPos(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.Pos setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Pos, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiViewport_ImGuiViewport_getSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.Size getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Size);
	return 1;
}
int lua_x_imguiViewport_ImGuiViewport_setSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.Size setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Size, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiViewport_ImGuiViewport_getWorkPos(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.WorkPos getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->WorkPos);
	return 1;
}
int lua_x_imguiViewport_ImGuiViewport_setWorkPos(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.WorkPos setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->WorkPos, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiViewport_ImGuiViewport_getWorkSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.WorkSize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->WorkSize);
	return 1;
}
int lua_x_imguiViewport_ImGuiViewport_setWorkSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.WorkSize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->WorkSize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiViewport_ImGuiViewport_getDpiScale(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.DpiScale getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->DpiScale);
	return 1;
}
int lua_x_imguiViewport_ImGuiViewport_setDpiScale(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.DpiScale setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->DpiScale, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiViewport_ImGuiViewport_getParentViewportId(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.ParentViewportId getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ParentViewportId);
	return 1;
}
int lua_x_imguiViewport_ImGuiViewport_setParentViewportId(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.ParentViewportId setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ParentViewportId, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiViewport_ImGuiViewport_getPlatformRequestClose(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.PlatformRequestClose getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->PlatformRequestClose);
	return 1;
}
int lua_x_imguiViewport_ImGuiViewport_setPlatformRequestClose(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.PlatformRequestClose setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->PlatformRequestClose, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiViewport_ImGuiViewport_getPlatformRequestMove(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.PlatformRequestMove getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->PlatformRequestMove);
	return 1;
}
int lua_x_imguiViewport_ImGuiViewport_setPlatformRequestMove(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.PlatformRequestMove setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->PlatformRequestMove, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiViewport_ImGuiViewport_getPlatformRequestResize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.PlatformRequestResize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->PlatformRequestResize);
	return 1;
}
int lua_x_imguiViewport_ImGuiViewport_setPlatformRequestResize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiViewport";
	constexpr auto LUA_FNAME = "imgui.ImGuiViewport.PlatformRequestResize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->PlatformRequestResize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
static int lua_x_imguiViewport_ImGuiViewport_finalize(lua_State* tolua_S)
{
	return 0;
}

int lua_register_x_imguiViewport_ImGuiViewport(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "imgui.ImGuiViewport");
	tolua_cclass(tolua_S, "ImGuiViewport", "imgui.ImGuiViewport", "", nullptr);

	tolua_beginmodule(tolua_S, "ImGuiViewport");
		tolua_function(tolua_S, "getCenter", lua_x_imguiViewport_ImGuiViewport_GetCenter);
		tolua_function(tolua_S, "getWorkCenter", lua_x_imguiViewport_ImGuiViewport_GetWorkCenter);
		tolua_variable(tolua_S, "ID", lua_x_imguiViewport_ImGuiViewport_getID, lua_x_imguiViewport_ImGuiViewport_setID);
		tolua_variable(tolua_S, "Flags", lua_x_imguiViewport_ImGuiViewport_getFlags, lua_x_imguiViewport_ImGuiViewport_setFlags);
		tolua_variable(tolua_S, "Pos", lua_x_imguiViewport_ImGuiViewport_getPos, lua_x_imguiViewport_ImGuiViewport_setPos);
		tolua_variable(tolua_S, "Size", lua_x_imguiViewport_ImGuiViewport_getSize, lua_x_imguiViewport_ImGuiViewport_setSize);
		tolua_variable(tolua_S, "WorkPos", lua_x_imguiViewport_ImGuiViewport_getWorkPos, lua_x_imguiViewport_ImGuiViewport_setWorkPos);
		tolua_variable(tolua_S, "WorkSize", lua_x_imguiViewport_ImGuiViewport_getWorkSize, lua_x_imguiViewport_ImGuiViewport_setWorkSize);
		tolua_variable(tolua_S, "DpiScale", lua_x_imguiViewport_ImGuiViewport_getDpiScale, lua_x_imguiViewport_ImGuiViewport_setDpiScale);
		tolua_variable(tolua_S, "ParentViewportId", lua_x_imguiViewport_ImGuiViewport_getParentViewportId, lua_x_imguiViewport_ImGuiViewport_setParentViewportId);
		tolua_variable(tolua_S, "PlatformRequestClose", lua_x_imguiViewport_ImGuiViewport_getPlatformRequestClose, lua_x_imguiViewport_ImGuiViewport_setPlatformRequestClose);
		tolua_variable(tolua_S, "PlatformRequestMove", lua_x_imguiViewport_ImGuiViewport_getPlatformRequestMove, lua_x_imguiViewport_ImGuiViewport_setPlatformRequestMove);
		tolua_variable(tolua_S, "PlatformRequestResize", lua_x_imguiViewport_ImGuiViewport_getPlatformRequestResize, lua_x_imguiViewport_ImGuiViewport_setPlatformRequestResize);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(imgui::ImGuiViewport).name();
	g_luaType[typeName] = "imgui.ImGuiViewport";
	g_typeCast["ImGuiViewport"] = "imgui.ImGuiViewport";
	return 1;
}

int register_all_x_imguiViewport(lua_State* tolua_S)
{
	tolua_open(tolua_S);

	tolua_module(tolua_S, "imgui", 0);
	tolua_beginmodule(tolua_S, "imgui");

	lua_register_x_imguiViewport_ImGuiViewport(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

