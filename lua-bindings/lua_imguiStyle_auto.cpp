#include "lua_imguiStyle_auto.hpp"
#include "imgui_lua.hpp"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"
#include "lua_conversion.hpp"
using lua::luaval_to_native;
using lua::native_to_luaval;
namespace imgui { using ImGuiStyle = ImGuiStyle; }

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

int lua_x_imguiStyle_ImGuiStyle_ScaleAllSizes(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle:scaleAllSizes";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		double arg0;
		ok &= luaval_to_number(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->ScaleAllSizes(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getAlpha(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.Alpha getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Alpha);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setAlpha(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.Alpha setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Alpha, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getDisabledAlpha(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.DisabledAlpha getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->DisabledAlpha);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setDisabledAlpha(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.DisabledAlpha setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->DisabledAlpha, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getWindowPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.WindowPadding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->WindowPadding);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setWindowPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.WindowPadding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->WindowPadding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getWindowRounding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.WindowRounding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->WindowRounding);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setWindowRounding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.WindowRounding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->WindowRounding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getWindowBorderSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.WindowBorderSize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->WindowBorderSize);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setWindowBorderSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.WindowBorderSize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->WindowBorderSize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getWindowMinSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.WindowMinSize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->WindowMinSize);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setWindowMinSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.WindowMinSize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->WindowMinSize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getWindowTitleAlign(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.WindowTitleAlign getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->WindowTitleAlign);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setWindowTitleAlign(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.WindowTitleAlign setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->WindowTitleAlign, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getWindowMenuButtonPosition(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.WindowMenuButtonPosition getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->WindowMenuButtonPosition);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setWindowMenuButtonPosition(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.WindowMenuButtonPosition setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->WindowMenuButtonPosition, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getChildRounding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.ChildRounding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ChildRounding);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setChildRounding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.ChildRounding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ChildRounding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getChildBorderSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.ChildBorderSize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ChildBorderSize);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setChildBorderSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.ChildBorderSize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ChildBorderSize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getPopupRounding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.PopupRounding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->PopupRounding);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setPopupRounding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.PopupRounding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->PopupRounding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getPopupBorderSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.PopupBorderSize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->PopupBorderSize);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setPopupBorderSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.PopupBorderSize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->PopupBorderSize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getFramePadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.FramePadding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->FramePadding);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setFramePadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.FramePadding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->FramePadding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getFrameRounding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.FrameRounding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->FrameRounding);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setFrameRounding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.FrameRounding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->FrameRounding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getFrameBorderSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.FrameBorderSize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->FrameBorderSize);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setFrameBorderSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.FrameBorderSize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->FrameBorderSize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getItemSpacing(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.ItemSpacing getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ItemSpacing);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setItemSpacing(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.ItemSpacing setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ItemSpacing, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getItemInnerSpacing(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.ItemInnerSpacing getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ItemInnerSpacing);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setItemInnerSpacing(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.ItemInnerSpacing setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ItemInnerSpacing, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getCellPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.CellPadding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->CellPadding);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setCellPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.CellPadding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->CellPadding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getTouchExtraPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.TouchExtraPadding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->TouchExtraPadding);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setTouchExtraPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.TouchExtraPadding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->TouchExtraPadding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getIndentSpacing(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.IndentSpacing getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->IndentSpacing);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setIndentSpacing(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.IndentSpacing setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->IndentSpacing, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getColumnsMinSpacing(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.ColumnsMinSpacing getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ColumnsMinSpacing);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setColumnsMinSpacing(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.ColumnsMinSpacing setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ColumnsMinSpacing, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getScrollbarSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.ScrollbarSize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ScrollbarSize);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setScrollbarSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.ScrollbarSize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ScrollbarSize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getScrollbarRounding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.ScrollbarRounding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ScrollbarRounding);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setScrollbarRounding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.ScrollbarRounding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ScrollbarRounding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getGrabMinSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.GrabMinSize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->GrabMinSize);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setGrabMinSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.GrabMinSize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->GrabMinSize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getGrabRounding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.GrabRounding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->GrabRounding);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setGrabRounding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.GrabRounding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->GrabRounding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getLogSliderDeadzone(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.LogSliderDeadzone getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->LogSliderDeadzone);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setLogSliderDeadzone(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.LogSliderDeadzone setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->LogSliderDeadzone, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getTabRounding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.TabRounding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->TabRounding);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setTabRounding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.TabRounding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->TabRounding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getTabBorderSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.TabBorderSize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->TabBorderSize);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setTabBorderSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.TabBorderSize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->TabBorderSize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getTabMinWidthForCloseButton(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.TabMinWidthForCloseButton getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->TabMinWidthForCloseButton);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setTabMinWidthForCloseButton(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.TabMinWidthForCloseButton setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->TabMinWidthForCloseButton, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getColorButtonPosition(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.ColorButtonPosition getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ColorButtonPosition);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setColorButtonPosition(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.ColorButtonPosition setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ColorButtonPosition, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getButtonTextAlign(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.ButtonTextAlign getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ButtonTextAlign);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setButtonTextAlign(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.ButtonTextAlign setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ButtonTextAlign, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getSelectableTextAlign(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.SelectableTextAlign getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->SelectableTextAlign);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setSelectableTextAlign(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.SelectableTextAlign setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->SelectableTextAlign, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getDisplayWindowPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.DisplayWindowPadding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->DisplayWindowPadding);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setDisplayWindowPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.DisplayWindowPadding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->DisplayWindowPadding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getDisplaySafeAreaPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.DisplaySafeAreaPadding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->DisplaySafeAreaPadding);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setDisplaySafeAreaPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.DisplaySafeAreaPadding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->DisplaySafeAreaPadding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getMouseCursorScale(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.MouseCursorScale getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MouseCursorScale);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setMouseCursorScale(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.MouseCursorScale setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MouseCursorScale, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getAntiAliasedLines(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.AntiAliasedLines getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->AntiAliasedLines);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setAntiAliasedLines(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.AntiAliasedLines setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->AntiAliasedLines, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getAntiAliasedLinesUseTex(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.AntiAliasedLinesUseTex getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->AntiAliasedLinesUseTex);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setAntiAliasedLinesUseTex(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.AntiAliasedLinesUseTex setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->AntiAliasedLinesUseTex, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getAntiAliasedFill(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.AntiAliasedFill getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->AntiAliasedFill);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setAntiAliasedFill(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.AntiAliasedFill setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->AntiAliasedFill, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getCurveTessellationTol(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.CurveTessellationTol getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->CurveTessellationTol);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setCurveTessellationTol(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.CurveTessellationTol setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->CurveTessellationTol, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiStyle_ImGuiStyle_getCircleTessellationMaxError(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.CircleTessellationMaxError getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->CircleTessellationMaxError);
	return 1;
}
int lua_x_imguiStyle_ImGuiStyle_setCircleTessellationMaxError(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImGuiStyle";
	constexpr auto LUA_FNAME = "imgui.ImGuiStyle.CircleTessellationMaxError setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImGuiStyle*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->CircleTessellationMaxError, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
static int lua_x_imguiStyle_ImGuiStyle_finalize(lua_State* tolua_S)
{
	return 0;
}

int lua_register_x_imguiStyle_ImGuiStyle(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "imgui.ImGuiStyle");
	tolua_cclass(tolua_S, "ImGuiStyle", "imgui.ImGuiStyle", "", nullptr);

	tolua_beginmodule(tolua_S, "ImGuiStyle");
		tolua_function(tolua_S, "scaleAllSizes", lua_x_imguiStyle_ImGuiStyle_ScaleAllSizes);
		tolua_variable(tolua_S, "Alpha", lua_x_imguiStyle_ImGuiStyle_getAlpha, lua_x_imguiStyle_ImGuiStyle_setAlpha);
		tolua_variable(tolua_S, "DisabledAlpha", lua_x_imguiStyle_ImGuiStyle_getDisabledAlpha, lua_x_imguiStyle_ImGuiStyle_setDisabledAlpha);
		tolua_variable(tolua_S, "WindowPadding", lua_x_imguiStyle_ImGuiStyle_getWindowPadding, lua_x_imguiStyle_ImGuiStyle_setWindowPadding);
		tolua_variable(tolua_S, "WindowRounding", lua_x_imguiStyle_ImGuiStyle_getWindowRounding, lua_x_imguiStyle_ImGuiStyle_setWindowRounding);
		tolua_variable(tolua_S, "WindowBorderSize", lua_x_imguiStyle_ImGuiStyle_getWindowBorderSize, lua_x_imguiStyle_ImGuiStyle_setWindowBorderSize);
		tolua_variable(tolua_S, "WindowMinSize", lua_x_imguiStyle_ImGuiStyle_getWindowMinSize, lua_x_imguiStyle_ImGuiStyle_setWindowMinSize);
		tolua_variable(tolua_S, "WindowTitleAlign", lua_x_imguiStyle_ImGuiStyle_getWindowTitleAlign, lua_x_imguiStyle_ImGuiStyle_setWindowTitleAlign);
		tolua_variable(tolua_S, "WindowMenuButtonPosition", lua_x_imguiStyle_ImGuiStyle_getWindowMenuButtonPosition, lua_x_imguiStyle_ImGuiStyle_setWindowMenuButtonPosition);
		tolua_variable(tolua_S, "ChildRounding", lua_x_imguiStyle_ImGuiStyle_getChildRounding, lua_x_imguiStyle_ImGuiStyle_setChildRounding);
		tolua_variable(tolua_S, "ChildBorderSize", lua_x_imguiStyle_ImGuiStyle_getChildBorderSize, lua_x_imguiStyle_ImGuiStyle_setChildBorderSize);
		tolua_variable(tolua_S, "PopupRounding", lua_x_imguiStyle_ImGuiStyle_getPopupRounding, lua_x_imguiStyle_ImGuiStyle_setPopupRounding);
		tolua_variable(tolua_S, "PopupBorderSize", lua_x_imguiStyle_ImGuiStyle_getPopupBorderSize, lua_x_imguiStyle_ImGuiStyle_setPopupBorderSize);
		tolua_variable(tolua_S, "FramePadding", lua_x_imguiStyle_ImGuiStyle_getFramePadding, lua_x_imguiStyle_ImGuiStyle_setFramePadding);
		tolua_variable(tolua_S, "FrameRounding", lua_x_imguiStyle_ImGuiStyle_getFrameRounding, lua_x_imguiStyle_ImGuiStyle_setFrameRounding);
		tolua_variable(tolua_S, "FrameBorderSize", lua_x_imguiStyle_ImGuiStyle_getFrameBorderSize, lua_x_imguiStyle_ImGuiStyle_setFrameBorderSize);
		tolua_variable(tolua_S, "ItemSpacing", lua_x_imguiStyle_ImGuiStyle_getItemSpacing, lua_x_imguiStyle_ImGuiStyle_setItemSpacing);
		tolua_variable(tolua_S, "ItemInnerSpacing", lua_x_imguiStyle_ImGuiStyle_getItemInnerSpacing, lua_x_imguiStyle_ImGuiStyle_setItemInnerSpacing);
		tolua_variable(tolua_S, "CellPadding", lua_x_imguiStyle_ImGuiStyle_getCellPadding, lua_x_imguiStyle_ImGuiStyle_setCellPadding);
		tolua_variable(tolua_S, "TouchExtraPadding", lua_x_imguiStyle_ImGuiStyle_getTouchExtraPadding, lua_x_imguiStyle_ImGuiStyle_setTouchExtraPadding);
		tolua_variable(tolua_S, "IndentSpacing", lua_x_imguiStyle_ImGuiStyle_getIndentSpacing, lua_x_imguiStyle_ImGuiStyle_setIndentSpacing);
		tolua_variable(tolua_S, "ColumnsMinSpacing", lua_x_imguiStyle_ImGuiStyle_getColumnsMinSpacing, lua_x_imguiStyle_ImGuiStyle_setColumnsMinSpacing);
		tolua_variable(tolua_S, "ScrollbarSize", lua_x_imguiStyle_ImGuiStyle_getScrollbarSize, lua_x_imguiStyle_ImGuiStyle_setScrollbarSize);
		tolua_variable(tolua_S, "ScrollbarRounding", lua_x_imguiStyle_ImGuiStyle_getScrollbarRounding, lua_x_imguiStyle_ImGuiStyle_setScrollbarRounding);
		tolua_variable(tolua_S, "GrabMinSize", lua_x_imguiStyle_ImGuiStyle_getGrabMinSize, lua_x_imguiStyle_ImGuiStyle_setGrabMinSize);
		tolua_variable(tolua_S, "GrabRounding", lua_x_imguiStyle_ImGuiStyle_getGrabRounding, lua_x_imguiStyle_ImGuiStyle_setGrabRounding);
		tolua_variable(tolua_S, "LogSliderDeadzone", lua_x_imguiStyle_ImGuiStyle_getLogSliderDeadzone, lua_x_imguiStyle_ImGuiStyle_setLogSliderDeadzone);
		tolua_variable(tolua_S, "TabRounding", lua_x_imguiStyle_ImGuiStyle_getTabRounding, lua_x_imguiStyle_ImGuiStyle_setTabRounding);
		tolua_variable(tolua_S, "TabBorderSize", lua_x_imguiStyle_ImGuiStyle_getTabBorderSize, lua_x_imguiStyle_ImGuiStyle_setTabBorderSize);
		tolua_variable(tolua_S, "TabMinWidthForCloseButton", lua_x_imguiStyle_ImGuiStyle_getTabMinWidthForCloseButton, lua_x_imguiStyle_ImGuiStyle_setTabMinWidthForCloseButton);
		tolua_variable(tolua_S, "ColorButtonPosition", lua_x_imguiStyle_ImGuiStyle_getColorButtonPosition, lua_x_imguiStyle_ImGuiStyle_setColorButtonPosition);
		tolua_variable(tolua_S, "ButtonTextAlign", lua_x_imguiStyle_ImGuiStyle_getButtonTextAlign, lua_x_imguiStyle_ImGuiStyle_setButtonTextAlign);
		tolua_variable(tolua_S, "SelectableTextAlign", lua_x_imguiStyle_ImGuiStyle_getSelectableTextAlign, lua_x_imguiStyle_ImGuiStyle_setSelectableTextAlign);
		tolua_variable(tolua_S, "DisplayWindowPadding", lua_x_imguiStyle_ImGuiStyle_getDisplayWindowPadding, lua_x_imguiStyle_ImGuiStyle_setDisplayWindowPadding);
		tolua_variable(tolua_S, "DisplaySafeAreaPadding", lua_x_imguiStyle_ImGuiStyle_getDisplaySafeAreaPadding, lua_x_imguiStyle_ImGuiStyle_setDisplaySafeAreaPadding);
		tolua_variable(tolua_S, "MouseCursorScale", lua_x_imguiStyle_ImGuiStyle_getMouseCursorScale, lua_x_imguiStyle_ImGuiStyle_setMouseCursorScale);
		tolua_variable(tolua_S, "AntiAliasedLines", lua_x_imguiStyle_ImGuiStyle_getAntiAliasedLines, lua_x_imguiStyle_ImGuiStyle_setAntiAliasedLines);
		tolua_variable(tolua_S, "AntiAliasedLinesUseTex", lua_x_imguiStyle_ImGuiStyle_getAntiAliasedLinesUseTex, lua_x_imguiStyle_ImGuiStyle_setAntiAliasedLinesUseTex);
		tolua_variable(tolua_S, "AntiAliasedFill", lua_x_imguiStyle_ImGuiStyle_getAntiAliasedFill, lua_x_imguiStyle_ImGuiStyle_setAntiAliasedFill);
		tolua_variable(tolua_S, "CurveTessellationTol", lua_x_imguiStyle_ImGuiStyle_getCurveTessellationTol, lua_x_imguiStyle_ImGuiStyle_setCurveTessellationTol);
		tolua_variable(tolua_S, "CircleTessellationMaxError", lua_x_imguiStyle_ImGuiStyle_getCircleTessellationMaxError, lua_x_imguiStyle_ImGuiStyle_setCircleTessellationMaxError);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(imgui::ImGuiStyle).name();
	g_luaType[typeName] = "imgui.ImGuiStyle";
	g_typeCast["ImGuiStyle"] = "imgui.ImGuiStyle";
	return 1;
}

int register_all_x_imguiStyle(lua_State* tolua_S)
{
	tolua_open(tolua_S);

	tolua_module(tolua_S, "imgui", 0);
	tolua_beginmodule(tolua_S, "imgui");

	lua_register_x_imguiStyle_ImGuiStyle(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

