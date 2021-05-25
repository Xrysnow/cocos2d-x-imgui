#include "lua_imguiDrawList_auto.hpp"
#include "imgui_lua.hpp"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"
#include "lua_conversion.hpp"
using lua::luaval_to_native;
using lua::native_to_luaval;
namespace imgui { using ImDrawList = ImDrawList; }

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

int lua_x_imguiDrawList_ImDrawList_AddBezierCubic(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:addBezierCubic";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 6) {
		ImVec2 arg0;
		ImVec2 arg1;
		ImVec2 arg2;
		ImVec2 arg3;
		unsigned int arg4;
		double arg5;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 6, &arg4, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 7, &arg5, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddBezierCubic(arg0, arg1, arg2, arg3, arg4, arg5);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 7) {
		ImVec2 arg0;
		ImVec2 arg1;
		ImVec2 arg2;
		ImVec2 arg3;
		unsigned int arg4;
		double arg5;
		int arg6;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 6, &arg4, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 7, &arg5, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 8, &arg6, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddBezierCubic(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "6 to 7");
}
int lua_x_imguiDrawList_ImDrawList_AddBezierQuadratic(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:addBezierQuadratic";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 5) {
		ImVec2 arg0;
		ImVec2 arg1;
		ImVec2 arg2;
		unsigned int arg3;
		double arg4;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 6, &arg4, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddBezierQuadratic(arg0, arg1, arg2, arg3, arg4);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 6) {
		ImVec2 arg0;
		ImVec2 arg1;
		ImVec2 arg2;
		unsigned int arg3;
		double arg4;
		int arg5;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 6, &arg4, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 7, &arg5, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddBezierQuadratic(arg0, arg1, arg2, arg3, arg4, arg5);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "5 to 6");
}
int lua_x_imguiDrawList_ImDrawList_AddCircle(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:addCircle";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 3) {
		ImVec2 arg0;
		double arg1;
		unsigned int arg2;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddCircle(arg0, arg1, arg2);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 4) {
		ImVec2 arg0;
		double arg1;
		unsigned int arg2;
		int arg3;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 5, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddCircle(arg0, arg1, arg2, arg3);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 5) {
		ImVec2 arg0;
		double arg1;
		unsigned int arg2;
		int arg3;
		double arg4;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 6, &arg4, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddCircle(arg0, arg1, arg2, arg3, arg4);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "3 to 5");
}
int lua_x_imguiDrawList_ImDrawList_AddCircleFilled(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:addCircleFilled";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 3) {
		ImVec2 arg0;
		double arg1;
		unsigned int arg2;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddCircleFilled(arg0, arg1, arg2);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 4) {
		ImVec2 arg0;
		double arg1;
		unsigned int arg2;
		int arg3;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 5, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddCircleFilled(arg0, arg1, arg2, arg3);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "3 to 4");
}
int lua_x_imguiDrawList_ImDrawList_AddDrawCmd(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:addDrawCmd";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->AddDrawCmd();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiDrawList_ImDrawList_AddLine(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:addLine";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 3) {
		ImVec2 arg0;
		ImVec2 arg1;
		unsigned int arg2;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddLine(arg0, arg1, arg2);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 4) {
		ImVec2 arg0;
		ImVec2 arg1;
		unsigned int arg2;
		double arg3;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 5, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddLine(arg0, arg1, arg2, arg3);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "3 to 4");
}
int lua_x_imguiDrawList_ImDrawList_AddNgon(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:addNgon";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 4) {
		ImVec2 arg0;
		double arg1;
		unsigned int arg2;
		int arg3;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 5, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddNgon(arg0, arg1, arg2, arg3);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 5) {
		ImVec2 arg0;
		double arg1;
		unsigned int arg2;
		int arg3;
		double arg4;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 6, &arg4, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddNgon(arg0, arg1, arg2, arg3, arg4);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "4 to 5");
}
int lua_x_imguiDrawList_ImDrawList_AddNgonFilled(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:addNgonFilled";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 4) {
		ImVec2 arg0;
		double arg1;
		unsigned int arg2;
		int arg3;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 5, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddNgonFilled(arg0, arg1, arg2, arg3);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "4");
}
int lua_x_imguiDrawList_ImDrawList_AddQuad(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:addQuad";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 5) {
		ImVec2 arg0;
		ImVec2 arg1;
		ImVec2 arg2;
		ImVec2 arg3;
		unsigned int arg4;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 6, &arg4, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddQuad(arg0, arg1, arg2, arg3, arg4);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 6) {
		ImVec2 arg0;
		ImVec2 arg1;
		ImVec2 arg2;
		ImVec2 arg3;
		unsigned int arg4;
		double arg5;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 6, &arg4, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 7, &arg5, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddQuad(arg0, arg1, arg2, arg3, arg4, arg5);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "5 to 6");
}
int lua_x_imguiDrawList_ImDrawList_AddQuadFilled(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:addQuadFilled";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 5) {
		ImVec2 arg0;
		ImVec2 arg1;
		ImVec2 arg2;
		ImVec2 arg3;
		unsigned int arg4;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 6, &arg4, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddQuadFilled(arg0, arg1, arg2, arg3, arg4);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "5");
}
int lua_x_imguiDrawList_ImDrawList_AddRect(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:addRect";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 3) {
		ImVec2 arg0;
		ImVec2 arg1;
		unsigned int arg2;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddRect(arg0, arg1, arg2);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 4) {
		ImVec2 arg0;
		ImVec2 arg1;
		unsigned int arg2;
		double arg3;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 5, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddRect(arg0, arg1, arg2, arg3);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 5) {
		ImVec2 arg0;
		ImVec2 arg1;
		unsigned int arg2;
		double arg3;
		int arg4;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 6, &arg4, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddRect(arg0, arg1, arg2, arg3, arg4);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 6) {
		ImVec2 arg0;
		ImVec2 arg1;
		unsigned int arg2;
		double arg3;
		int arg4;
		double arg5;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 6, &arg4, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 7, &arg5, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddRect(arg0, arg1, arg2, arg3, arg4, arg5);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "3 to 6");
}
int lua_x_imguiDrawList_ImDrawList_AddRectFilled(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:addRectFilled";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 3) {
		ImVec2 arg0;
		ImVec2 arg1;
		unsigned int arg2;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddRectFilled(arg0, arg1, arg2);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 4) {
		ImVec2 arg0;
		ImVec2 arg1;
		unsigned int arg2;
		double arg3;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 5, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddRectFilled(arg0, arg1, arg2, arg3);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 5) {
		ImVec2 arg0;
		ImVec2 arg1;
		unsigned int arg2;
		double arg3;
		int arg4;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 6, &arg4, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddRectFilled(arg0, arg1, arg2, arg3, arg4);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "3 to 5");
}
int lua_x_imguiDrawList_ImDrawList_AddRectFilledMultiColor(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:addRectFilledMultiColor";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 6) {
		ImVec2 arg0;
		ImVec2 arg1;
		unsigned int arg2;
		unsigned int arg3;
		unsigned int arg4;
		unsigned int arg5;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 6, &arg4, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 7, &arg5, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddRectFilledMultiColor(arg0, arg1, arg2, arg3, arg4, arg5);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "6");
}
int lua_x_imguiDrawList_ImDrawList_AddTriangle(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:addTriangle";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 4) {
		ImVec2 arg0;
		ImVec2 arg1;
		ImVec2 arg2;
		unsigned int arg3;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 5, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddTriangle(arg0, arg1, arg2, arg3);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 5) {
		ImVec2 arg0;
		ImVec2 arg1;
		ImVec2 arg2;
		unsigned int arg3;
		double arg4;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 6, &arg4, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddTriangle(arg0, arg1, arg2, arg3, arg4);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "4 to 5");
}
int lua_x_imguiDrawList_ImDrawList_AddTriangleFilled(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:addTriangleFilled";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 4) {
		ImVec2 arg0;
		ImVec2 arg1;
		ImVec2 arg2;
		unsigned int arg3;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 5, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->AddTriangleFilled(arg0, arg1, arg2, arg3);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "4");
}
int lua_x_imguiDrawList_ImDrawList_ChannelsMerge(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:channelsMerge";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->ChannelsMerge();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiDrawList_ImDrawList_ChannelsSetCurrent(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:channelsSetCurrent";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->ChannelsSetCurrent(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiDrawList_ImDrawList_ChannelsSplit(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:channelsSplit";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->ChannelsSplit(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiDrawList_ImDrawList_CloneOutput(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:cloneOutput";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->CloneOutput());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiDrawList_ImDrawList_GetClipRectMax(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:getClipRectMax";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->GetClipRectMax());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiDrawList_ImDrawList_GetClipRectMin(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:getClipRectMin";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->GetClipRectMin());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiDrawList_ImDrawList_PathArcTo(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:pathArcTo";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 4) {
		ImVec2 arg0;
		double arg1;
		double arg2;
		double arg3;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 5, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PathArcTo(arg0, arg1, arg2, arg3);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 5) {
		ImVec2 arg0;
		double arg1;
		double arg2;
		double arg3;
		int arg4;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 6, &arg4, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PathArcTo(arg0, arg1, arg2, arg3, arg4);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "4 to 5");
}
int lua_x_imguiDrawList_ImDrawList_PathArcToFast(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:pathArcToFast";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 4) {
		ImVec2 arg0;
		double arg1;
		int arg2;
		int arg3;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 5, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PathArcToFast(arg0, arg1, arg2, arg3);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "4");
}
int lua_x_imguiDrawList_ImDrawList_PathBezierCubicCurveTo(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:pathBezierCubicCurveTo";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 3) {
		ImVec2 arg0;
		ImVec2 arg1;
		ImVec2 arg2;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PathBezierCubicCurveTo(arg0, arg1, arg2);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 4) {
		ImVec2 arg0;
		ImVec2 arg1;
		ImVec2 arg2;
		int arg3;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 5, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PathBezierCubicCurveTo(arg0, arg1, arg2, arg3);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "3 to 4");
}
int lua_x_imguiDrawList_ImDrawList_PathBezierQuadraticCurveTo(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:pathBezierQuadraticCurveTo";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 2) {
		ImVec2 arg0;
		ImVec2 arg1;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PathBezierQuadraticCurveTo(arg0, arg1);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 3) {
		ImVec2 arg0;
		ImVec2 arg1;
		int arg2;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 4, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PathBezierQuadraticCurveTo(arg0, arg1, arg2);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2 to 3");
}
int lua_x_imguiDrawList_ImDrawList_PathClear(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:pathClear";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->PathClear();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiDrawList_ImDrawList_PathFillConvex(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:pathFillConvex";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		unsigned int arg0;
		ok &= luaval_to_uint32(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PathFillConvex(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiDrawList_ImDrawList_PathLineTo(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:pathLineTo";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		ImVec2 arg0;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PathLineTo(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiDrawList_ImDrawList_PathLineToMergeDuplicate(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:pathLineToMergeDuplicate";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		ImVec2 arg0;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PathLineToMergeDuplicate(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiDrawList_ImDrawList_PathRect(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:pathRect";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 2) {
		ImVec2 arg0;
		ImVec2 arg1;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PathRect(arg0, arg1);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 3) {
		ImVec2 arg0;
		ImVec2 arg1;
		double arg2;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 4, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PathRect(arg0, arg1, arg2);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 4) {
		ImVec2 arg0;
		ImVec2 arg1;
		double arg2;
		int arg3;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 5, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PathRect(arg0, arg1, arg2, arg3);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2 to 4");
}
int lua_x_imguiDrawList_ImDrawList_PathStroke(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:pathStroke";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		unsigned int arg0;
		ok &= luaval_to_uint32(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PathStroke(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 2) {
		unsigned int arg0;
		int arg1;
		ok &= luaval_to_uint32(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PathStroke(arg0, arg1);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 3) {
		unsigned int arg0;
		int arg1;
		double arg2;
		ok &= luaval_to_uint32(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 4, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PathStroke(arg0, arg1, arg2);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 3");
}
int lua_x_imguiDrawList_ImDrawList_PopClipRect(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:popClipRect";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->PopClipRect();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiDrawList_ImDrawList_PopTextureID(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:popTextureID";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->PopTextureID();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiDrawList_ImDrawList_PrimQuadUV(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:primQuadUV";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 9) {
		ImVec2 arg0;
		ImVec2 arg1;
		ImVec2 arg2;
		ImVec2 arg3;
		ImVec2 arg4;
		ImVec2 arg5;
		ImVec2 arg6;
		ImVec2 arg7;
		unsigned int arg8;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 6, &arg4, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 7, &arg5, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 8, &arg6, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 9, &arg7, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 10, &arg8, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PrimQuadUV(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "9");
}
int lua_x_imguiDrawList_ImDrawList_PrimRect(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:primRect";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 3) {
		ImVec2 arg0;
		ImVec2 arg1;
		unsigned int arg2;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PrimRect(arg0, arg1, arg2);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "3");
}
int lua_x_imguiDrawList_ImDrawList_PrimRectUV(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:primRectUV";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 5) {
		ImVec2 arg0;
		ImVec2 arg1;
		ImVec2 arg2;
		ImVec2 arg3;
		unsigned int arg4;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 6, &arg4, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PrimRectUV(arg0, arg1, arg2, arg3, arg4);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "5");
}
int lua_x_imguiDrawList_ImDrawList_PrimReserve(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:primReserve";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 2) {
		int arg0;
		int arg1;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PrimReserve(arg0, arg1);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2");
}
int lua_x_imguiDrawList_ImDrawList_PrimUnreserve(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:primUnreserve";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 2) {
		int arg0;
		int arg1;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PrimUnreserve(arg0, arg1);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2");
}
int lua_x_imguiDrawList_ImDrawList_PrimVtx(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:primVtx";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 3) {
		ImVec2 arg0;
		ImVec2 arg1;
		unsigned int arg2;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PrimVtx(arg0, arg1, arg2);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "3");
}
int lua_x_imguiDrawList_ImDrawList_PrimWriteIdx(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:primWriteIdx";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		unsigned short arg0;
		ok &= luaval_to_ushort(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PrimWriteIdx(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiDrawList_ImDrawList_PrimWriteVtx(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:primWriteVtx";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 3) {
		ImVec2 arg0;
		ImVec2 arg1;
		unsigned int arg2;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PrimWriteVtx(arg0, arg1, arg2);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "3");
}
int lua_x_imguiDrawList_ImDrawList_PushClipRect(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:pushClipRect";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 2) {
		ImVec2 arg0;
		ImVec2 arg1;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PushClipRect(arg0, arg1);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 3) {
		ImVec2 arg0;
		ImVec2 arg1;
		bool arg2;
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 4, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->PushClipRect(arg0, arg1, arg2);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2 to 3");
}
int lua_x_imguiDrawList_ImDrawList_PushClipRectFullScreen(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList:pushClipRectFullScreen";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->PushClipRectFullScreen();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiDrawList_ImDrawList_getFlags(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList.Flags getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Flags);
	return 1;
}
int lua_x_imguiDrawList_ImDrawList_setFlags(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList.Flags setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Flags, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiDrawList_ImDrawList_get_OwnerName(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList._OwnerName getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->_OwnerName);
	return 1;
}
int lua_x_imguiDrawList_ImDrawList_set_OwnerName(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImDrawList";
	constexpr auto LUA_FNAME = "imgui.ImDrawList._OwnerName setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImDrawList*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->_OwnerName, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
static int lua_x_imguiDrawList_ImDrawList_finalize(lua_State* tolua_S)
{
	return 0;
}

int lua_register_x_imguiDrawList_ImDrawList(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "imgui.ImDrawList");
	tolua_cclass(tolua_S, "ImDrawList", "imgui.ImDrawList", "", nullptr);

	tolua_beginmodule(tolua_S, "ImDrawList");
		tolua_function(tolua_S, "addBezierCubic", lua_x_imguiDrawList_ImDrawList_AddBezierCubic);
		tolua_function(tolua_S, "addBezierQuadratic", lua_x_imguiDrawList_ImDrawList_AddBezierQuadratic);
		tolua_function(tolua_S, "addCircle", lua_x_imguiDrawList_ImDrawList_AddCircle);
		tolua_function(tolua_S, "addCircleFilled", lua_x_imguiDrawList_ImDrawList_AddCircleFilled);
		tolua_function(tolua_S, "addDrawCmd", lua_x_imguiDrawList_ImDrawList_AddDrawCmd);
		tolua_function(tolua_S, "addLine", lua_x_imguiDrawList_ImDrawList_AddLine);
		tolua_function(tolua_S, "addNgon", lua_x_imguiDrawList_ImDrawList_AddNgon);
		tolua_function(tolua_S, "addNgonFilled", lua_x_imguiDrawList_ImDrawList_AddNgonFilled);
		tolua_function(tolua_S, "addQuad", lua_x_imguiDrawList_ImDrawList_AddQuad);
		tolua_function(tolua_S, "addQuadFilled", lua_x_imguiDrawList_ImDrawList_AddQuadFilled);
		tolua_function(tolua_S, "addRect", lua_x_imguiDrawList_ImDrawList_AddRect);
		tolua_function(tolua_S, "addRectFilled", lua_x_imguiDrawList_ImDrawList_AddRectFilled);
		tolua_function(tolua_S, "addRectFilledMultiColor", lua_x_imguiDrawList_ImDrawList_AddRectFilledMultiColor);
		tolua_function(tolua_S, "addTriangle", lua_x_imguiDrawList_ImDrawList_AddTriangle);
		tolua_function(tolua_S, "addTriangleFilled", lua_x_imguiDrawList_ImDrawList_AddTriangleFilled);
		tolua_function(tolua_S, "channelsMerge", lua_x_imguiDrawList_ImDrawList_ChannelsMerge);
		tolua_function(tolua_S, "channelsSetCurrent", lua_x_imguiDrawList_ImDrawList_ChannelsSetCurrent);
		tolua_function(tolua_S, "channelsSplit", lua_x_imguiDrawList_ImDrawList_ChannelsSplit);
		tolua_function(tolua_S, "cloneOutput", lua_x_imguiDrawList_ImDrawList_CloneOutput);
		tolua_function(tolua_S, "getClipRectMax", lua_x_imguiDrawList_ImDrawList_GetClipRectMax);
		tolua_function(tolua_S, "getClipRectMin", lua_x_imguiDrawList_ImDrawList_GetClipRectMin);
		tolua_function(tolua_S, "pathArcTo", lua_x_imguiDrawList_ImDrawList_PathArcTo);
		tolua_function(tolua_S, "pathArcToFast", lua_x_imguiDrawList_ImDrawList_PathArcToFast);
		tolua_function(tolua_S, "pathBezierCubicCurveTo", lua_x_imguiDrawList_ImDrawList_PathBezierCubicCurveTo);
		tolua_function(tolua_S, "pathBezierQuadraticCurveTo", lua_x_imguiDrawList_ImDrawList_PathBezierQuadraticCurveTo);
		tolua_function(tolua_S, "pathClear", lua_x_imguiDrawList_ImDrawList_PathClear);
		tolua_function(tolua_S, "pathFillConvex", lua_x_imguiDrawList_ImDrawList_PathFillConvex);
		tolua_function(tolua_S, "pathLineTo", lua_x_imguiDrawList_ImDrawList_PathLineTo);
		tolua_function(tolua_S, "pathLineToMergeDuplicate", lua_x_imguiDrawList_ImDrawList_PathLineToMergeDuplicate);
		tolua_function(tolua_S, "pathRect", lua_x_imguiDrawList_ImDrawList_PathRect);
		tolua_function(tolua_S, "pathStroke", lua_x_imguiDrawList_ImDrawList_PathStroke);
		tolua_function(tolua_S, "popClipRect", lua_x_imguiDrawList_ImDrawList_PopClipRect);
		tolua_function(tolua_S, "popTextureID", lua_x_imguiDrawList_ImDrawList_PopTextureID);
		tolua_function(tolua_S, "primQuadUV", lua_x_imguiDrawList_ImDrawList_PrimQuadUV);
		tolua_function(tolua_S, "primRect", lua_x_imguiDrawList_ImDrawList_PrimRect);
		tolua_function(tolua_S, "primRectUV", lua_x_imguiDrawList_ImDrawList_PrimRectUV);
		tolua_function(tolua_S, "primReserve", lua_x_imguiDrawList_ImDrawList_PrimReserve);
		tolua_function(tolua_S, "primUnreserve", lua_x_imguiDrawList_ImDrawList_PrimUnreserve);
		tolua_function(tolua_S, "primVtx", lua_x_imguiDrawList_ImDrawList_PrimVtx);
		tolua_function(tolua_S, "primWriteIdx", lua_x_imguiDrawList_ImDrawList_PrimWriteIdx);
		tolua_function(tolua_S, "primWriteVtx", lua_x_imguiDrawList_ImDrawList_PrimWriteVtx);
		tolua_function(tolua_S, "pushClipRect", lua_x_imguiDrawList_ImDrawList_PushClipRect);
		tolua_function(tolua_S, "pushClipRectFullScreen", lua_x_imguiDrawList_ImDrawList_PushClipRectFullScreen);
		tolua_variable(tolua_S, "Flags", lua_x_imguiDrawList_ImDrawList_getFlags, lua_x_imguiDrawList_ImDrawList_setFlags);
		tolua_variable(tolua_S, "_OwnerName", lua_x_imguiDrawList_ImDrawList_get_OwnerName, lua_x_imguiDrawList_ImDrawList_set_OwnerName);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(imgui::ImDrawList).name();
	g_luaType[typeName] = "imgui.ImDrawList";
	g_typeCast["ImDrawList"] = "imgui.ImDrawList";
	return 1;
}

int register_all_x_imguiDrawList(lua_State* tolua_S)
{
	tolua_open(tolua_S);

	tolua_module(tolua_S, "imgui", 0);
	tolua_beginmodule(tolua_S, "imgui");

	lua_register_x_imguiDrawList_ImDrawList(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

