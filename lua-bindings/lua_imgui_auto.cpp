#include "lua_imgui_auto.hpp"
#include "imgui_lua.hpp"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"
#include "lua_conversion.hpp"
using lua::luaval_to_native;
using lua::native_to_luaval;
namespace imgui { namespace ImGui { using namespace ::ImGui; } }

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

int lua_x_imgui_ImGui_AlignTextToFramePadding(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.alignTextToFramePadding";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::AlignTextToFramePadding();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_ArrowButton(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.arrowButton";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		const char* arg0;
		int arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::ArrowButton(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2");
}
int lua_x_imgui_ImGui_BeginChildFrame(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.beginChildFrame";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		unsigned int arg0;
		ImVec2 arg1;
		ok &= luaval_to_uint32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginChildFrame(arg0, arg1));
		return 1;
	}
	if (argc == 3) {
		unsigned int arg0;
		ImVec2 arg1;
		int arg2;
		ok &= luaval_to_uint32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginChildFrame(arg0, arg1, arg2));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2 to 3");
}
int lua_x_imgui_ImGui_BeginCombo(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.beginCombo";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		const char* arg0;
		const char* arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= lua_isstring(tolua_S, 2); if (ok) arg1 = luaL_checkstring(tolua_S, 2);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginCombo(arg0, arg1));
		return 1;
	}
	if (argc == 3) {
		const char* arg0;
		const char* arg1;
		int arg2;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= lua_isstring(tolua_S, 2); if (ok) arg1 = luaL_checkstring(tolua_S, 2);
		ok &= luaval_to_int32(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginCombo(arg0, arg1, arg2));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2 to 3");
}
int lua_x_imgui_ImGui_BeginDragDropSource(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.beginDragDropSource";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::BeginDragDropSource());
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginDragDropSource(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_BeginDragDropTarget(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.beginDragDropTarget";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::BeginDragDropTarget());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_BeginGroup(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.beginGroup";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::BeginGroup();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_BeginListBox(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.beginListBox";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginListBox(arg0));
		return 1;
	}
	if (argc == 2) {
		const char* arg0;
		ImVec2 arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginListBox(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_imgui_ImGui_BeginMainMenuBar(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.beginMainMenuBar";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::BeginMainMenuBar());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_BeginMenu(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.beginMenu";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginMenu(arg0));
		return 1;
	}
	if (argc == 2) {
		const char* arg0;
		bool arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_boolean(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginMenu(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_imgui_ImGui_BeginMenuBar(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.beginMenuBar";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::BeginMenuBar());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_BeginPopup(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.beginPopup";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginPopup(arg0));
		return 1;
	}
	if (argc == 2) {
		const char* arg0;
		int arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginPopup(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_imgui_ImGui_BeginPopupContextItem(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.beginPopupContextItem";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::BeginPopupContextItem());
		return 1;
	}
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginPopupContextItem(arg0));
		return 1;
	}
	if (argc == 2) {
		const char* arg0;
		int arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginPopupContextItem(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 2");
}
int lua_x_imgui_ImGui_BeginPopupContextVoid(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.beginPopupContextVoid";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::BeginPopupContextVoid());
		return 1;
	}
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginPopupContextVoid(arg0));
		return 1;
	}
	if (argc == 2) {
		const char* arg0;
		int arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginPopupContextVoid(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 2");
}
int lua_x_imgui_ImGui_BeginPopupContextWindow(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.beginPopupContextWindow";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::BeginPopupContextWindow());
		return 1;
	}
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginPopupContextWindow(arg0));
		return 1;
	}
	if (argc == 2) {
		const char* arg0;
		int arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginPopupContextWindow(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 2");
}
int lua_x_imgui_ImGui_BeginTabBar(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.beginTabBar";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginTabBar(arg0));
		return 1;
	}
	if (argc == 2) {
		const char* arg0;
		int arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginTabBar(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_imgui_ImGui_BeginTable(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.beginTable";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		const char* arg0;
		int arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginTable(arg0, arg1));
		return 1;
	}
	if (argc == 3) {
		const char* arg0;
		int arg1;
		int arg2;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginTable(arg0, arg1, arg2));
		return 1;
	}
	if (argc == 4) {
		const char* arg0;
		int arg1;
		int arg2;
		ImVec2 arg3;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg2, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 4, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginTable(arg0, arg1, arg2, arg3));
		return 1;
	}
	if (argc == 5) {
		const char* arg0;
		int arg1;
		int arg2;
		ImVec2 arg3;
		double arg4;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg2, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 4, &arg3, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 5, &arg4, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::BeginTable(arg0, arg1, arg2, arg3, arg4));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2 to 5");
}
int lua_x_imgui_ImGui_BeginTooltip(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.beginTooltip";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::BeginTooltip();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_Bullet(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.bullet";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::Bullet();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_BulletText(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.bulletText";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::BulletText(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_Button(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.button";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::Button(arg0));
		return 1;
	}
	if (argc == 2) {
		const char* arg0;
		ImVec2 arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::Button(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_imgui_ImGui_CalcItemWidth(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.calcItemWidth";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::CalcItemWidth());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_CalcTextSize(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.calcTextSize";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::CalcTextSize(arg0));
		return 1;
	}
	if (argc == 2) {
		const char* arg0;
		const char* arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= lua_isstring(tolua_S, 2); if (ok) arg1 = luaL_checkstring(tolua_S, 2);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::CalcTextSize(arg0, arg1));
		return 1;
	}
	if (argc == 3) {
		const char* arg0;
		const char* arg1;
		bool arg2;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= lua_isstring(tolua_S, 2); if (ok) arg1 = luaL_checkstring(tolua_S, 2);
		ok &= luaval_to_boolean(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::CalcTextSize(arg0, arg1, arg2));
		return 1;
	}
	if (argc == 4) {
		const char* arg0;
		const char* arg1;
		bool arg2;
		double arg3;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= lua_isstring(tolua_S, 2); if (ok) arg1 = luaL_checkstring(tolua_S, 2);
		ok &= luaval_to_boolean(tolua_S, 3, &arg2, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 4, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::CalcTextSize(arg0, arg1, arg2, arg3));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 4");
}
int lua_x_imgui_ImGui_CaptureKeyboardFromApp(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.captureKeyboardFromApp";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::CaptureKeyboardFromApp();
		return 0;
	}
	if (argc == 1) {
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::CaptureKeyboardFromApp(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_CaptureMouseFromApp(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.captureMouseFromApp";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::CaptureMouseFromApp();
		return 0;
	}
	if (argc == 1) {
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::CaptureMouseFromApp(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_CloseCurrentPopup(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.closeCurrentPopup";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::CloseCurrentPopup();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_ColorButton(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.colorButton";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		const char* arg0;
		ImVec4 arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_ImVec4(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::ColorButton(arg0, arg1));
		return 1;
	}
	if (argc == 3) {
		const char* arg0;
		ImVec4 arg1;
		int arg2;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_ImVec4(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::ColorButton(arg0, arg1, arg2));
		return 1;
	}
	if (argc == 4) {
		const char* arg0;
		ImVec4 arg1;
		int arg2;
		ImVec2 arg3;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_ImVec4(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg2, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 4, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::ColorButton(arg0, arg1, arg2, arg3));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2 to 4");
}
int lua_x_imgui_ImGui_ColorConvertFloat4ToU32(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.colorConvertFloat4ToU32";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		ImVec4 arg0;
		ok &= luaval_to_ImVec4(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::ColorConvertFloat4ToU32(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_ColorConvertU32ToFloat4(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.colorConvertU32ToFloat4";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		unsigned int arg0;
		ok &= luaval_to_uint32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::ColorConvertU32ToFloat4(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_Columns(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.columns";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::Columns();
		return 0;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::Columns(arg0);
		return 0;
	}
	if (argc == 2) {
		int arg0;
		const char* arg1;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= lua_isstring(tolua_S, 2); if (ok) arg1 = luaL_checkstring(tolua_S, 2);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::Columns(arg0, arg1);
		return 0;
	}
	if (argc == 3) {
		int arg0;
		const char* arg1;
		bool arg2;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= lua_isstring(tolua_S, 2); if (ok) arg1 = luaL_checkstring(tolua_S, 2);
		ok &= luaval_to_boolean(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::Columns(arg0, arg1, arg2);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 3");
}
int lua_x_imgui_ImGui_DebugCheckVersionAndDataLayout(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.debugCheckVersionAndDataLayout";
	const int argc = lua_gettop(tolua_S);
	if (argc == 7) {
		const char* arg0;
		unsigned int arg1;
		unsigned int arg2;
		unsigned int arg3;
		unsigned int arg4;
		unsigned int arg5;
		unsigned int arg6;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_uint32(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 3, &arg2, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg3, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 5, &arg4, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 6, &arg5, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 7, &arg6, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::DebugCheckVersionAndDataLayout(arg0, arg1, arg2, arg3, arg4, arg5, arg6));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "7");
}
int lua_x_imgui_ImGui_DestroyPlatformWindows(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.destroyPlatformWindows";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::DestroyPlatformWindows();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_DockSpace(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.dockSpace";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		unsigned int arg0;
		ok &= luaval_to_uint32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::DockSpace(arg0));
		return 1;
	}
	if (argc == 2) {
		unsigned int arg0;
		ImVec2 arg1;
		ok &= luaval_to_uint32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::DockSpace(arg0, arg1));
		return 1;
	}
	if (argc == 3) {
		unsigned int arg0;
		ImVec2 arg1;
		int arg2;
		ok &= luaval_to_uint32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::DockSpace(arg0, arg1, arg2));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 3");
}
int lua_x_imgui_ImGui_DockSpaceOverViewport(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.dockSpaceOverViewport";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::DockSpaceOverViewport());
		return 1;
	}
	if (argc == 1) {
		const ImGuiViewport* arg0;
		ok &= luaval_to_native(tolua_S, 1, &arg0, "LUA_FNAME");
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::DockSpaceOverViewport(arg0));
		return 1;
	}
	if (argc == 2) {
		const ImGuiViewport* arg0;
		int arg1;
		ok &= luaval_to_native(tolua_S, 1, &arg0, "LUA_FNAME");
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::DockSpaceOverViewport(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 2");
}
int lua_x_imgui_ImGui_Dummy(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.dummy";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		ImVec2 arg0;
		ok &= luaval_to_ImVec2(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::Dummy(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_EndChildFrame(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.endChildFrame";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::EndChildFrame();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_EndCombo(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.endCombo";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::EndCombo();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_EndDragDropSource(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.endDragDropSource";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::EndDragDropSource();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_EndDragDropTarget(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.endDragDropTarget";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::EndDragDropTarget();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_EndFrame(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.endFrame";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::EndFrame();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_EndGroup(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.endGroup";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::EndGroup();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_EndListBox(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.endListBox";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::EndListBox();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_EndMainMenuBar(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.endMainMenuBar";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::EndMainMenuBar();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_EndMenu(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.endMenu";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::EndMenu();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_EndMenuBar(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.endMenuBar";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::EndMenuBar();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_EndPopup(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.endPopup";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::EndPopup();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_EndTabBar(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.endTabBar";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::EndTabBar();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_EndTabItem(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.endTabItem";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::EndTabItem();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_EndTable(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.endTable";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::EndTable();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_EndTooltip(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.endTooltip";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::EndTooltip();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_FindViewportByID(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.findViewportByID";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		unsigned int arg0;
		ok &= luaval_to_uint32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::FindViewportByID(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_GetBackgroundDrawList(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.getBackgroundDrawList";
	const int argc = lua_gettop(tolua_S);
	do {
		if (argc == 1) {
			ImGuiViewport* arg0;
			ok &= luaval_to_native(tolua_S, 1, &arg0, "LUA_FNAME");
			if (!ok) { break; }
			native_to_luaval(tolua_S, imgui::ImGui::GetBackgroundDrawList(arg0));
			return 1;
		}
	} while (0);
	ok = true;
	do {
		if (argc == 0) {
			native_to_luaval(tolua_S, imgui::ImGui::GetBackgroundDrawList());
			return 1;
		}
	} while (0);
	ok = true;
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetClipboardText(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getClipboardText";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetClipboardText());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetColumnIndex(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getColumnIndex";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetColumnIndex());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetColumnOffset(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.getColumnOffset";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetColumnOffset());
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::GetColumnOffset(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_GetColumnWidth(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.getColumnWidth";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetColumnWidth());
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::GetColumnWidth(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_GetColumnsCount(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getColumnsCount";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetColumnsCount());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetContentRegionAvail(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getContentRegionAvail";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetContentRegionAvail());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetContentRegionMax(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getContentRegionMax";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetContentRegionMax());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetCursorPos(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getCursorPos";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetCursorPos());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetCursorPosX(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getCursorPosX";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetCursorPosX());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetCursorPosY(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getCursorPosY";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetCursorPosY());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetCursorScreenPos(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getCursorScreenPos";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetCursorScreenPos());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetCursorStartPos(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getCursorStartPos";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetCursorStartPos());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetFontSize(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getFontSize";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetFontSize());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetFontTexUvWhitePixel(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getFontTexUvWhitePixel";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetFontTexUvWhitePixel());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetForegroundDrawList(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.getForegroundDrawList";
	const int argc = lua_gettop(tolua_S);
	do {
		if (argc == 1) {
			ImGuiViewport* arg0;
			ok &= luaval_to_native(tolua_S, 1, &arg0, "LUA_FNAME");
			if (!ok) { break; }
			native_to_luaval(tolua_S, imgui::ImGui::GetForegroundDrawList(arg0));
			return 1;
		}
	} while (0);
	ok = true;
	do {
		if (argc == 0) {
			native_to_luaval(tolua_S, imgui::ImGui::GetForegroundDrawList());
			return 1;
		}
	} while (0);
	ok = true;
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetFrameCount(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getFrameCount";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetFrameCount());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetFrameHeight(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getFrameHeight";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetFrameHeight());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetFrameHeightWithSpacing(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getFrameHeightWithSpacing";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetFrameHeightWithSpacing());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetID(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.getID";
	const int argc = lua_gettop(tolua_S);
	do {
		if (argc == 2) {
			const char* arg0;
			ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
			if (!ok) { break; }
			const char* arg1;
			ok &= lua_isstring(tolua_S, 2); if (ok) arg1 = luaL_checkstring(tolua_S, 2);
			if (!ok) { break; }
			native_to_luaval(tolua_S, imgui::ImGui::GetID(arg0, arg1));
			return 1;
		}
	} while (0);
	ok = true;
	do {
		if (argc == 1) {
			const char* arg0;
			ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
			if (!ok) { break; }
			native_to_luaval(tolua_S, imgui::ImGui::GetID(arg0));
			return 1;
		}
	} while (0);
	ok = true;
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_GetItemRectMax(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getItemRectMax";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetItemRectMax());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetItemRectMin(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getItemRectMin";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetItemRectMin());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetItemRectSize(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getItemRectSize";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetItemRectSize());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetKeyIndex(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.getKeyIndex";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::GetKeyIndex(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_GetKeyPressedAmount(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.getKeyPressedAmount";
	const int argc = lua_gettop(tolua_S);
	if (argc == 3) {
		int arg0;
		double arg1;
		double arg2;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::GetKeyPressedAmount(arg0, arg1, arg2));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "3");
}
int lua_x_imgui_ImGui_GetMainViewport(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getMainViewport";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetMainViewport());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetMouseCursor(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getMouseCursor";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetMouseCursor());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetMouseDragDelta(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.getMouseDragDelta";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetMouseDragDelta());
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::GetMouseDragDelta(arg0));
		return 1;
	}
	if (argc == 2) {
		int arg0;
		double arg1;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::GetMouseDragDelta(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 2");
}
int lua_x_imgui_ImGui_GetMousePos(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getMousePos";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetMousePos());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetMousePosOnOpeningCurrentPopup(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getMousePosOnOpeningCurrentPopup";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetMousePosOnOpeningCurrentPopup());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetScrollMaxX(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getScrollMaxX";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetScrollMaxX());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetScrollMaxY(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getScrollMaxY";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetScrollMaxY());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetScrollX(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getScrollX";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetScrollX());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetScrollY(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getScrollY";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetScrollY());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetStyleColorName(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.getStyleColorName";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::GetStyleColorName(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_GetStyleColorVec4(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.getStyleColorVec4";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::GetStyleColorVec4(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_GetTextLineHeight(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getTextLineHeight";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetTextLineHeight());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetTextLineHeightWithSpacing(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getTextLineHeightWithSpacing";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetTextLineHeightWithSpacing());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetTime(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getTime";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetTime());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetTreeNodeToLabelSpacing(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getTreeNodeToLabelSpacing";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetTreeNodeToLabelSpacing());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetVersion(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getVersion";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetVersion());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetWindowContentRegionMax(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getWindowContentRegionMax";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetWindowContentRegionMax());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetWindowContentRegionMin(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getWindowContentRegionMin";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetWindowContentRegionMin());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetWindowContentRegionWidth(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getWindowContentRegionWidth";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetWindowContentRegionWidth());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetWindowDockID(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getWindowDockID";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetWindowDockID());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetWindowDpiScale(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getWindowDpiScale";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetWindowDpiScale());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetWindowDrawList(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getWindowDrawList";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetWindowDrawList());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetWindowHeight(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getWindowHeight";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetWindowHeight());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetWindowPos(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getWindowPos";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetWindowPos());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetWindowSize(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getWindowSize";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetWindowSize());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetWindowViewport(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getWindowViewport";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetWindowViewport());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_GetWindowWidth(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.getWindowWidth";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::GetWindowWidth());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_Indent(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.indent";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::Indent();
		return 0;
	}
	if (argc == 1) {
		double arg0;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::Indent(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_InvisibleButton(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.invisibleButton";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		const char* arg0;
		ImVec2 arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::InvisibleButton(arg0, arg1));
		return 1;
	}
	if (argc == 3) {
		const char* arg0;
		ImVec2 arg1;
		int arg2;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::InvisibleButton(arg0, arg1, arg2));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2 to 3");
}
int lua_x_imgui_ImGui_IsAnyItemActive(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.isAnyItemActive";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::IsAnyItemActive());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_IsAnyItemFocused(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.isAnyItemFocused";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::IsAnyItemFocused());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_IsAnyItemHovered(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.isAnyItemHovered";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::IsAnyItemHovered());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_IsAnyMouseDown(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.isAnyMouseDown";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::IsAnyMouseDown());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_IsItemActivated(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.isItemActivated";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::IsItemActivated());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_IsItemActive(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.isItemActive";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::IsItemActive());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_IsItemClicked(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.isItemClicked";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::IsItemClicked());
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::IsItemClicked(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_IsItemDeactivated(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.isItemDeactivated";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::IsItemDeactivated());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_IsItemDeactivatedAfterEdit(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.isItemDeactivatedAfterEdit";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::IsItemDeactivatedAfterEdit());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_IsItemEdited(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.isItemEdited";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::IsItemEdited());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_IsItemFocused(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.isItemFocused";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::IsItemFocused());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_IsItemHovered(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.isItemHovered";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::IsItemHovered());
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::IsItemHovered(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_IsItemToggledOpen(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.isItemToggledOpen";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::IsItemToggledOpen());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_IsItemVisible(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.isItemVisible";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::IsItemVisible());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_IsKeyDown(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.isKeyDown";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::IsKeyDown(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_IsKeyPressed(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.isKeyPressed";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::IsKeyPressed(arg0));
		return 1;
	}
	if (argc == 2) {
		int arg0;
		bool arg1;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::IsKeyPressed(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_imgui_ImGui_IsKeyReleased(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.isKeyReleased";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::IsKeyReleased(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_IsMouseClicked(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.isMouseClicked";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::IsMouseClicked(arg0));
		return 1;
	}
	if (argc == 2) {
		int arg0;
		bool arg1;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::IsMouseClicked(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_imgui_ImGui_IsMouseDoubleClicked(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.isMouseDoubleClicked";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::IsMouseDoubleClicked(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_IsMouseDown(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.isMouseDown";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::IsMouseDown(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_IsMouseDragging(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.isMouseDragging";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::IsMouseDragging(arg0));
		return 1;
	}
	if (argc == 2) {
		int arg0;
		double arg1;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::IsMouseDragging(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_imgui_ImGui_IsMouseHoveringRect(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.isMouseHoveringRect";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		ImVec2 arg0;
		ImVec2 arg1;
		ok &= luaval_to_ImVec2(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::IsMouseHoveringRect(arg0, arg1));
		return 1;
	}
	if (argc == 3) {
		ImVec2 arg0;
		ImVec2 arg1;
		bool arg2;
		ok &= luaval_to_ImVec2(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::IsMouseHoveringRect(arg0, arg1, arg2));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2 to 3");
}
int lua_x_imgui_ImGui_IsMouseReleased(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.isMouseReleased";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::IsMouseReleased(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_IsPopupOpen(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.isPopupOpen";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::IsPopupOpen(arg0));
		return 1;
	}
	if (argc == 2) {
		const char* arg0;
		int arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::IsPopupOpen(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_imgui_ImGui_IsRectVisible(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.isRectVisible";
	const int argc = lua_gettop(tolua_S);
	do {
		if (argc == 2) {
			ImVec2 arg0;
			ok &= luaval_to_ImVec2(tolua_S, 1, &arg0, LUA_FNAME);
			if (!ok) { break; }
			ImVec2 arg1;
			ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
			if (!ok) { break; }
			native_to_luaval(tolua_S, imgui::ImGui::IsRectVisible(arg0, arg1));
			return 1;
		}
	} while (0);
	ok = true;
	do {
		if (argc == 1) {
			ImVec2 arg0;
			ok &= luaval_to_ImVec2(tolua_S, 1, &arg0, LUA_FNAME);
			if (!ok) { break; }
			native_to_luaval(tolua_S, imgui::ImGui::IsRectVisible(arg0));
			return 1;
		}
	} while (0);
	ok = true;
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_IsWindowAppearing(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.isWindowAppearing";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::IsWindowAppearing());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_IsWindowCollapsed(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.isWindowCollapsed";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::IsWindowCollapsed());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_IsWindowDocked(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.isWindowDocked";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::IsWindowDocked());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_IsWindowFocused(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.isWindowFocused";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::IsWindowFocused());
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::IsWindowFocused(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_IsWindowHovered(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.isWindowHovered";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::IsWindowHovered());
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::IsWindowHovered(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_LabelText(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.labelText";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		const char* arg0;
		const char* arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= lua_isstring(tolua_S, 2); if (ok) arg1 = luaL_checkstring(tolua_S, 2);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::LabelText(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2");
}
int lua_x_imgui_ImGui_LoadIniSettingsFromDisk(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.loadIniSettingsFromDisk";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::LoadIniSettingsFromDisk(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_LoadIniSettingsFromMemory(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.loadIniSettingsFromMemory";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::LoadIniSettingsFromMemory(arg0);
		return 0;
	}
	if (argc == 2) {
		const char* arg0;
		unsigned int arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_uint32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::LoadIniSettingsFromMemory(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_imgui_ImGui_LogButtons(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.logButtons";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::LogButtons();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_LogFinish(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.logFinish";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::LogFinish();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_LogText(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.logText";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::LogText(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_LogToClipboard(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.logToClipboard";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::LogToClipboard();
		return 0;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::LogToClipboard(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_LogToFile(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.logToFile";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::LogToFile();
		return 0;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::LogToFile(arg0);
		return 0;
	}
	if (argc == 2) {
		int arg0;
		const char* arg1;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= lua_isstring(tolua_S, 2); if (ok) arg1 = luaL_checkstring(tolua_S, 2);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::LogToFile(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 2");
}
int lua_x_imgui_ImGui_LogToTTY(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.logToTTY";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::LogToTTY();
		return 0;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::LogToTTY(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_NewFrame(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.newFrame";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::NewFrame();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_NewLine(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.newLine";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::NewLine();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_NextColumn(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.nextColumn";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::NextColumn();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_OpenPopup(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.openPopup";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::OpenPopup(arg0);
		return 0;
	}
	if (argc == 2) {
		const char* arg0;
		int arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::OpenPopup(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_imgui_ImGui_OpenPopupOnItemClick(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.openPopupOnItemClick";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::OpenPopupOnItemClick();
		return 0;
	}
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::OpenPopupOnItemClick(arg0);
		return 0;
	}
	if (argc == 2) {
		const char* arg0;
		int arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::OpenPopupOnItemClick(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 2");
}
int lua_x_imgui_ImGui_PopAllowKeyboardFocus(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.popAllowKeyboardFocus";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::PopAllowKeyboardFocus();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_PopButtonRepeat(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.popButtonRepeat";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::PopButtonRepeat();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_PopClipRect(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.popClipRect";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::PopClipRect();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_PopFont(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.popFont";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::PopFont();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_PopID(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.popID";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::PopID();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_PopItemWidth(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.popItemWidth";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::PopItemWidth();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_PopStyleColor(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.popStyleColor";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::PopStyleColor();
		return 0;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::PopStyleColor(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_PopStyleVar(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.popStyleVar";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::PopStyleVar();
		return 0;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::PopStyleVar(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_PopTextWrapPos(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.popTextWrapPos";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::PopTextWrapPos();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_ProgressBar(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.progressBar";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		double arg0;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::ProgressBar(arg0);
		return 0;
	}
	if (argc == 2) {
		double arg0;
		ImVec2 arg1;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::ProgressBar(arg0, arg1);
		return 0;
	}
	if (argc == 3) {
		double arg0;
		ImVec2 arg1;
		const char* arg2;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= lua_isstring(tolua_S, 3); if (ok) arg2 = luaL_checkstring(tolua_S, 3);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::ProgressBar(arg0, arg1, arg2);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 3");
}
int lua_x_imgui_ImGui_PushAllowKeyboardFocus(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.pushAllowKeyboardFocus";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::PushAllowKeyboardFocus(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_PushButtonRepeat(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.pushButtonRepeat";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::PushButtonRepeat(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_PushClipRect(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.pushClipRect";
	const int argc = lua_gettop(tolua_S);
	if (argc == 3) {
		ImVec2 arg0;
		ImVec2 arg1;
		bool arg2;
		ok &= luaval_to_ImVec2(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::PushClipRect(arg0, arg1, arg2);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "3");
}
int lua_x_imgui_ImGui_PushItemWidth(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.pushItemWidth";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		double arg0;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::PushItemWidth(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_PushTextWrapPos(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.pushTextWrapPos";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::PushTextWrapPos();
		return 0;
	}
	if (argc == 1) {
		double arg0;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::PushTextWrapPos(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_RadioButton(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.radioButton";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		const char* arg0;
		bool arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_boolean(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::RadioButton(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2");
}
int lua_x_imgui_ImGui_Render(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.render";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::Render();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_RenderPlatformWindowsDefault(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.renderPlatformWindowsDefault";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::RenderPlatformWindowsDefault();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_ResetMouseDragDelta(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.resetMouseDragDelta";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::ResetMouseDragDelta();
		return 0;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::ResetMouseDragDelta(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_SameLine(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.sameLine";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::SameLine();
		return 0;
	}
	if (argc == 1) {
		double arg0;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SameLine(arg0);
		return 0;
	}
	if (argc == 2) {
		double arg0;
		double arg1;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SameLine(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 2");
}
int lua_x_imgui_ImGui_SaveIniSettingsToDisk(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.saveIniSettingsToDisk";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SaveIniSettingsToDisk(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_Separator(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.separator";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::Separator();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_SetClipboardText(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setClipboardText";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetClipboardText(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_SetColorEditOptions(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setColorEditOptions";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetColorEditOptions(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_SetColumnOffset(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setColumnOffset";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		int arg0;
		double arg1;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetColumnOffset(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2");
}
int lua_x_imgui_ImGui_SetColumnWidth(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setColumnWidth";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		int arg0;
		double arg1;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetColumnWidth(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2");
}
int lua_x_imgui_ImGui_SetCursorPos(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setCursorPos";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		ImVec2 arg0;
		ok &= luaval_to_ImVec2(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetCursorPos(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_SetCursorPosX(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setCursorPosX";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		double arg0;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetCursorPosX(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_SetCursorPosY(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setCursorPosY";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		double arg0;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetCursorPosY(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_SetCursorScreenPos(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setCursorScreenPos";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		ImVec2 arg0;
		ok &= luaval_to_ImVec2(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetCursorScreenPos(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_SetItemAllowOverlap(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.setItemAllowOverlap";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::SetItemAllowOverlap();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_SetItemDefaultFocus(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.setItemDefaultFocus";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::SetItemDefaultFocus();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_SetKeyboardFocusHere(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setKeyboardFocusHere";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::SetKeyboardFocusHere();
		return 0;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetKeyboardFocusHere(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_SetMouseCursor(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setMouseCursor";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetMouseCursor(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_SetNextItemOpen(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setNextItemOpen";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetNextItemOpen(arg0);
		return 0;
	}
	if (argc == 2) {
		bool arg0;
		int arg1;
		ok &= luaval_to_boolean(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetNextItemOpen(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_imgui_ImGui_SetNextItemWidth(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setNextItemWidth";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		double arg0;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetNextItemWidth(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_SetNextWindowBgAlpha(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setNextWindowBgAlpha";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		double arg0;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetNextWindowBgAlpha(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_SetNextWindowCollapsed(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setNextWindowCollapsed";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetNextWindowCollapsed(arg0);
		return 0;
	}
	if (argc == 2) {
		bool arg0;
		int arg1;
		ok &= luaval_to_boolean(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetNextWindowCollapsed(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_imgui_ImGui_SetNextWindowContentSize(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setNextWindowContentSize";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		ImVec2 arg0;
		ok &= luaval_to_ImVec2(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetNextWindowContentSize(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_SetNextWindowDockID(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setNextWindowDockID";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		unsigned int arg0;
		ok &= luaval_to_uint32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetNextWindowDockID(arg0);
		return 0;
	}
	if (argc == 2) {
		unsigned int arg0;
		int arg1;
		ok &= luaval_to_uint32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetNextWindowDockID(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_imgui_ImGui_SetNextWindowFocus(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.setNextWindowFocus";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::SetNextWindowFocus();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_SetNextWindowPos(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setNextWindowPos";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		ImVec2 arg0;
		ok &= luaval_to_ImVec2(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetNextWindowPos(arg0);
		return 0;
	}
	if (argc == 2) {
		ImVec2 arg0;
		int arg1;
		ok &= luaval_to_ImVec2(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetNextWindowPos(arg0, arg1);
		return 0;
	}
	if (argc == 3) {
		ImVec2 arg0;
		int arg1;
		ImVec2 arg2;
		ok &= luaval_to_ImVec2(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetNextWindowPos(arg0, arg1, arg2);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 3");
}
int lua_x_imgui_ImGui_SetNextWindowSize(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setNextWindowSize";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		ImVec2 arg0;
		ok &= luaval_to_ImVec2(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetNextWindowSize(arg0);
		return 0;
	}
	if (argc == 2) {
		ImVec2 arg0;
		int arg1;
		ok &= luaval_to_ImVec2(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetNextWindowSize(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_imgui_ImGui_SetNextWindowSizeConstraints(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setNextWindowSizeConstraints";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		ImVec2 arg0;
		ImVec2 arg1;
		ok &= luaval_to_ImVec2(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetNextWindowSizeConstraints(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2");
}
int lua_x_imgui_ImGui_SetNextWindowViewport(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setNextWindowViewport";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		unsigned int arg0;
		ok &= luaval_to_uint32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetNextWindowViewport(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_SetScrollFromPosX(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setScrollFromPosX";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		double arg0;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetScrollFromPosX(arg0);
		return 0;
	}
	if (argc == 2) {
		double arg0;
		double arg1;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetScrollFromPosX(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_imgui_ImGui_SetScrollFromPosY(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setScrollFromPosY";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		double arg0;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetScrollFromPosY(arg0);
		return 0;
	}
	if (argc == 2) {
		double arg0;
		double arg1;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetScrollFromPosY(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_imgui_ImGui_SetScrollHereX(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setScrollHereX";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::SetScrollHereX();
		return 0;
	}
	if (argc == 1) {
		double arg0;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetScrollHereX(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_SetScrollHereY(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setScrollHereY";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::SetScrollHereY();
		return 0;
	}
	if (argc == 1) {
		double arg0;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetScrollHereY(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_SetScrollX(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setScrollX";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		double arg0;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetScrollX(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_SetScrollY(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setScrollY";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		double arg0;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetScrollY(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_SetTabItemClosed(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setTabItemClosed";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetTabItemClosed(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_SetTooltip(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setTooltip";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetTooltip(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_SetWindowCollapsed(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setWindowCollapsed";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		const char* arg0;
		bool arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_boolean(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetWindowCollapsed(arg0, arg1);
		return 0;
	}
	if (argc == 3) {
		const char* arg0;
		bool arg1;
		int arg2;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_boolean(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetWindowCollapsed(arg0, arg1, arg2);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2 to 3");
}
int lua_x_imgui_ImGui_SetWindowFocus(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setWindowFocus";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetWindowFocus(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_SetWindowFontScale(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setWindowFontScale";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		double arg0;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetWindowFontScale(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_SetWindowPos(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setWindowPos";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		const char* arg0;
		ImVec2 arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetWindowPos(arg0, arg1);
		return 0;
	}
	if (argc == 3) {
		const char* arg0;
		ImVec2 arg1;
		int arg2;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetWindowPos(arg0, arg1, arg2);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2 to 3");
}
int lua_x_imgui_ImGui_SetWindowSize(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.setWindowSize";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		const char* arg0;
		ImVec2 arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetWindowSize(arg0, arg1);
		return 0;
	}
	if (argc == 3) {
		const char* arg0;
		ImVec2 arg1;
		int arg2;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_ImVec2(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::SetWindowSize(arg0, arg1, arg2);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2 to 3");
}
int lua_x_imgui_ImGui_ShowFontSelector(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.showFontSelector";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::ShowFontSelector(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_ShowStyleSelector(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.showStyleSelector";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::ShowStyleSelector(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_ShowUserGuide(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.showUserGuide";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::ShowUserGuide();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_SmallButton(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.smallButton";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::SmallButton(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_Spacing(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.spacing";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::Spacing();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_TabItemButton(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.tabItemButton";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::TabItemButton(arg0));
		return 1;
	}
	if (argc == 2) {
		const char* arg0;
		int arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::TabItemButton(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_imgui_ImGui_TableGetColumnCount(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.tableGetColumnCount";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::TableGetColumnCount());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_TableGetColumnFlags(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.tableGetColumnFlags";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::TableGetColumnFlags());
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::TableGetColumnFlags(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_TableGetColumnIndex(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.tableGetColumnIndex";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::TableGetColumnIndex());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_TableGetColumnName(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.tableGetColumnName";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::TableGetColumnName());
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::TableGetColumnName(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_TableGetRowIndex(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.tableGetRowIndex";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::TableGetRowIndex());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_TableHeader(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.tableHeader";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::TableHeader(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_TableHeadersRow(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.tableHeadersRow";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::TableHeadersRow();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_TableNextColumn(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.tableNextColumn";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		native_to_luaval(tolua_S, imgui::ImGui::TableNextColumn());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_TableNextRow(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.tableNextRow";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::TableNextRow();
		return 0;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::TableNextRow(arg0);
		return 0;
	}
	if (argc == 2) {
		int arg0;
		double arg1;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::TableNextRow(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 2");
}
int lua_x_imgui_ImGui_TableSetBgColor(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.tableSetBgColor";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		int arg0;
		unsigned int arg1;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::TableSetBgColor(arg0, arg1);
		return 0;
	}
	if (argc == 3) {
		int arg0;
		unsigned int arg1;
		int arg2;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::TableSetBgColor(arg0, arg1, arg2);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2 to 3");
}
int lua_x_imgui_ImGui_TableSetColumnEnabled(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.tableSetColumnEnabled";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		int arg0;
		bool arg1;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::TableSetColumnEnabled(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2");
}
int lua_x_imgui_ImGui_TableSetColumnIndex(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.tableSetColumnIndex";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, imgui::ImGui::TableSetColumnIndex(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_TableSetupColumn(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.tableSetupColumn";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::TableSetupColumn(arg0);
		return 0;
	}
	if (argc == 2) {
		const char* arg0;
		int arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::TableSetupColumn(arg0, arg1);
		return 0;
	}
	if (argc == 3) {
		const char* arg0;
		int arg1;
		double arg2;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::TableSetupColumn(arg0, arg1, arg2);
		return 0;
	}
	if (argc == 4) {
		const char* arg0;
		int arg1;
		double arg2;
		unsigned int arg3;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 3, &arg2, LUA_FNAME);
		ok &= luaval_to_uint32(tolua_S, 4, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::TableSetupColumn(arg0, arg1, arg2, arg3);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 4");
}
int lua_x_imgui_ImGui_TableSetupScrollFreeze(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.tableSetupScrollFreeze";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		int arg0;
		int arg1;
		ok &= luaval_to_int32(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::TableSetupScrollFreeze(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2");
}
int lua_x_imgui_ImGui_Text(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.text";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::Text(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_TextColored(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.textColored";
	const int argc = lua_gettop(tolua_S);
	if (argc == 2) {
		ImVec4 arg0;
		const char* arg1;
		ok &= luaval_to_ImVec4(tolua_S, 1, &arg0, LUA_FNAME);
		ok &= lua_isstring(tolua_S, 2); if (ok) arg1 = luaL_checkstring(tolua_S, 2);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::TextColored(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2");
}
int lua_x_imgui_ImGui_TextDisabled(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.textDisabled";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::TextDisabled(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_TextUnformatted(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.textUnformatted";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::TextUnformatted(arg0);
		return 0;
	}
	if (argc == 2) {
		const char* arg0;
		const char* arg1;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		ok &= lua_isstring(tolua_S, 2); if (ok) arg1 = luaL_checkstring(tolua_S, 2);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::TextUnformatted(arg0, arg1);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1 to 2");
}
int lua_x_imgui_ImGui_TextWrapped(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.textWrapped";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::TextWrapped(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_TreeNode(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.treeNode";
	const int argc = lua_gettop(tolua_S);
	do {
		if (argc == 2) {
			const char* arg0;
			ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
			if (!ok) { break; }
			const char* arg1;
			ok &= lua_isstring(tolua_S, 2); if (ok) arg1 = luaL_checkstring(tolua_S, 2);
			if (!ok) { break; }
			native_to_luaval(tolua_S, imgui::ImGui::TreeNode(arg0, arg1));
			return 1;
		}
	} while (0);
	ok = true;
	do {
		if (argc == 1) {
			const char* arg0;
			ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
			if (!ok) { break; }
			native_to_luaval(tolua_S, imgui::ImGui::TreeNode(arg0));
			return 1;
		}
	} while (0);
	ok = true;
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_TreeNodeEx(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.treeNodeEx";
	const int argc = lua_gettop(tolua_S);
	do {
		if (argc == 3) {
			const char* arg0;
			ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
			if (!ok) { break; }
			int arg1;
			ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
			if (!ok) { break; }
			const char* arg2;
			ok &= lua_isstring(tolua_S, 3); if (ok) arg2 = luaL_checkstring(tolua_S, 3);
			if (!ok) { break; }
			native_to_luaval(tolua_S, imgui::ImGui::TreeNodeEx(arg0, arg1, arg2));
			return 1;
		}
	} while (0);
	ok = true;
	do {
		if (argc == 1) {
			const char* arg0;
			ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
			if (!ok) { break; }
			native_to_luaval(tolua_S, imgui::ImGui::TreeNodeEx(arg0));
			return 1;
		}
	} while (0);
	ok = true;
	do {
		if (argc == 2) {
			const char* arg0;
			ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
			if (!ok) { break; }
			int arg1;
			ok &= luaval_to_int32(tolua_S, 2, &arg1, LUA_FNAME);
			if (!ok) { break; }
			native_to_luaval(tolua_S, imgui::ImGui::TreeNodeEx(arg0, arg1));
			return 1;
		}
	} while (0);
	ok = true;
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_TreePop(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.treePop";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::TreePop();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imgui_ImGui_TreePush(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.treePush";
	const int argc = lua_gettop(tolua_S);
	if (argc == 1) {
		const char* arg0;
		ok &= lua_isstring(tolua_S, 1); if (ok) arg0 = luaL_checkstring(tolua_S, 1);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::TreePush(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imgui_ImGui_Unindent(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_FNAME = "imgui.ImGui.unindent";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::Unindent();
		return 0;
	}
	if (argc == 1) {
		double arg0;
		ok &= luaval_to_number(tolua_S, 1, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		imgui::ImGui::Unindent(arg0);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_imgui_ImGui_UpdatePlatformWindows(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ImGui.updatePlatformWindows";
	const int argc = lua_gettop(tolua_S);
	if (argc == 0) {
		imgui::ImGui::UpdatePlatformWindows();
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
static int lua_x_imgui_ImGui_finalize(lua_State* tolua_S)
{
	return 0;
}

int lua_register_x_imgui_ImGui(lua_State* tolua_S)
{
	// tolua_beginmodule(tolua_S, "ImGui");
		tolua_function(tolua_S, "alignTextToFramePadding", lua_x_imgui_ImGui_AlignTextToFramePadding);
		tolua_function(tolua_S, "arrowButton", lua_x_imgui_ImGui_ArrowButton);
		tolua_function(tolua_S, "beginChildFrame", lua_x_imgui_ImGui_BeginChildFrame);
		tolua_function(tolua_S, "beginCombo", lua_x_imgui_ImGui_BeginCombo);
		tolua_function(tolua_S, "beginDragDropSource", lua_x_imgui_ImGui_BeginDragDropSource);
		tolua_function(tolua_S, "beginDragDropTarget", lua_x_imgui_ImGui_BeginDragDropTarget);
		tolua_function(tolua_S, "beginGroup", lua_x_imgui_ImGui_BeginGroup);
		tolua_function(tolua_S, "beginListBox", lua_x_imgui_ImGui_BeginListBox);
		tolua_function(tolua_S, "beginMainMenuBar", lua_x_imgui_ImGui_BeginMainMenuBar);
		tolua_function(tolua_S, "beginMenu", lua_x_imgui_ImGui_BeginMenu);
		tolua_function(tolua_S, "beginMenuBar", lua_x_imgui_ImGui_BeginMenuBar);
		tolua_function(tolua_S, "beginPopup", lua_x_imgui_ImGui_BeginPopup);
		tolua_function(tolua_S, "beginPopupContextItem", lua_x_imgui_ImGui_BeginPopupContextItem);
		tolua_function(tolua_S, "beginPopupContextVoid", lua_x_imgui_ImGui_BeginPopupContextVoid);
		tolua_function(tolua_S, "beginPopupContextWindow", lua_x_imgui_ImGui_BeginPopupContextWindow);
		tolua_function(tolua_S, "beginTabBar", lua_x_imgui_ImGui_BeginTabBar);
		tolua_function(tolua_S, "beginTable", lua_x_imgui_ImGui_BeginTable);
		tolua_function(tolua_S, "beginTooltip", lua_x_imgui_ImGui_BeginTooltip);
		tolua_function(tolua_S, "bullet", lua_x_imgui_ImGui_Bullet);
		tolua_function(tolua_S, "bulletText", lua_x_imgui_ImGui_BulletText);
		tolua_function(tolua_S, "button", lua_x_imgui_ImGui_Button);
		tolua_function(tolua_S, "calcItemWidth", lua_x_imgui_ImGui_CalcItemWidth);
		tolua_function(tolua_S, "calcTextSize", lua_x_imgui_ImGui_CalcTextSize);
		tolua_function(tolua_S, "captureKeyboardFromApp", lua_x_imgui_ImGui_CaptureKeyboardFromApp);
		tolua_function(tolua_S, "captureMouseFromApp", lua_x_imgui_ImGui_CaptureMouseFromApp);
		tolua_function(tolua_S, "closeCurrentPopup", lua_x_imgui_ImGui_CloseCurrentPopup);
		tolua_function(tolua_S, "colorButton", lua_x_imgui_ImGui_ColorButton);
		tolua_function(tolua_S, "colorConvertFloat4ToU32", lua_x_imgui_ImGui_ColorConvertFloat4ToU32);
		tolua_function(tolua_S, "colorConvertU32ToFloat4", lua_x_imgui_ImGui_ColorConvertU32ToFloat4);
		tolua_function(tolua_S, "columns", lua_x_imgui_ImGui_Columns);
		tolua_function(tolua_S, "debugCheckVersionAndDataLayout", lua_x_imgui_ImGui_DebugCheckVersionAndDataLayout);
		tolua_function(tolua_S, "destroyPlatformWindows", lua_x_imgui_ImGui_DestroyPlatformWindows);
		tolua_function(tolua_S, "dockSpace", lua_x_imgui_ImGui_DockSpace);
		tolua_function(tolua_S, "dockSpaceOverViewport", lua_x_imgui_ImGui_DockSpaceOverViewport);
		tolua_function(tolua_S, "dummy", lua_x_imgui_ImGui_Dummy);
		tolua_function(tolua_S, "endChildFrame", lua_x_imgui_ImGui_EndChildFrame);
		tolua_function(tolua_S, "endCombo", lua_x_imgui_ImGui_EndCombo);
		tolua_function(tolua_S, "endDragDropSource", lua_x_imgui_ImGui_EndDragDropSource);
		tolua_function(tolua_S, "endDragDropTarget", lua_x_imgui_ImGui_EndDragDropTarget);
		tolua_function(tolua_S, "endFrame", lua_x_imgui_ImGui_EndFrame);
		tolua_function(tolua_S, "endGroup", lua_x_imgui_ImGui_EndGroup);
		tolua_function(tolua_S, "endListBox", lua_x_imgui_ImGui_EndListBox);
		tolua_function(tolua_S, "endMainMenuBar", lua_x_imgui_ImGui_EndMainMenuBar);
		tolua_function(tolua_S, "endMenu", lua_x_imgui_ImGui_EndMenu);
		tolua_function(tolua_S, "endMenuBar", lua_x_imgui_ImGui_EndMenuBar);
		tolua_function(tolua_S, "endPopup", lua_x_imgui_ImGui_EndPopup);
		tolua_function(tolua_S, "endTabBar", lua_x_imgui_ImGui_EndTabBar);
		tolua_function(tolua_S, "endTabItem", lua_x_imgui_ImGui_EndTabItem);
		tolua_function(tolua_S, "endTable", lua_x_imgui_ImGui_EndTable);
		tolua_function(tolua_S, "endTooltip", lua_x_imgui_ImGui_EndTooltip);
		tolua_function(tolua_S, "findViewportByID", lua_x_imgui_ImGui_FindViewportByID);
		tolua_function(tolua_S, "getBackgroundDrawList", lua_x_imgui_ImGui_GetBackgroundDrawList);
		tolua_function(tolua_S, "getClipboardText", lua_x_imgui_ImGui_GetClipboardText);
		tolua_function(tolua_S, "getColumnIndex", lua_x_imgui_ImGui_GetColumnIndex);
		tolua_function(tolua_S, "getColumnOffset", lua_x_imgui_ImGui_GetColumnOffset);
		tolua_function(tolua_S, "getColumnWidth", lua_x_imgui_ImGui_GetColumnWidth);
		tolua_function(tolua_S, "getColumnsCount", lua_x_imgui_ImGui_GetColumnsCount);
		tolua_function(tolua_S, "getContentRegionAvail", lua_x_imgui_ImGui_GetContentRegionAvail);
		tolua_function(tolua_S, "getContentRegionMax", lua_x_imgui_ImGui_GetContentRegionMax);
		tolua_function(tolua_S, "getCursorPos", lua_x_imgui_ImGui_GetCursorPos);
		tolua_function(tolua_S, "getCursorPosX", lua_x_imgui_ImGui_GetCursorPosX);
		tolua_function(tolua_S, "getCursorPosY", lua_x_imgui_ImGui_GetCursorPosY);
		tolua_function(tolua_S, "getCursorScreenPos", lua_x_imgui_ImGui_GetCursorScreenPos);
		tolua_function(tolua_S, "getCursorStartPos", lua_x_imgui_ImGui_GetCursorStartPos);
		tolua_function(tolua_S, "getFontSize", lua_x_imgui_ImGui_GetFontSize);
		tolua_function(tolua_S, "getFontTexUvWhitePixel", lua_x_imgui_ImGui_GetFontTexUvWhitePixel);
		tolua_function(tolua_S, "getForegroundDrawList", lua_x_imgui_ImGui_GetForegroundDrawList);
		tolua_function(tolua_S, "getFrameCount", lua_x_imgui_ImGui_GetFrameCount);
		tolua_function(tolua_S, "getFrameHeight", lua_x_imgui_ImGui_GetFrameHeight);
		tolua_function(tolua_S, "getFrameHeightWithSpacing", lua_x_imgui_ImGui_GetFrameHeightWithSpacing);
		tolua_function(tolua_S, "getID", lua_x_imgui_ImGui_GetID);
		tolua_function(tolua_S, "getItemRectMax", lua_x_imgui_ImGui_GetItemRectMax);
		tolua_function(tolua_S, "getItemRectMin", lua_x_imgui_ImGui_GetItemRectMin);
		tolua_function(tolua_S, "getItemRectSize", lua_x_imgui_ImGui_GetItemRectSize);
		tolua_function(tolua_S, "getKeyIndex", lua_x_imgui_ImGui_GetKeyIndex);
		tolua_function(tolua_S, "getKeyPressedAmount", lua_x_imgui_ImGui_GetKeyPressedAmount);
		tolua_function(tolua_S, "getMainViewport", lua_x_imgui_ImGui_GetMainViewport);
		tolua_function(tolua_S, "getMouseCursor", lua_x_imgui_ImGui_GetMouseCursor);
		tolua_function(tolua_S, "getMouseDragDelta", lua_x_imgui_ImGui_GetMouseDragDelta);
		tolua_function(tolua_S, "getMousePos", lua_x_imgui_ImGui_GetMousePos);
		tolua_function(tolua_S, "getMousePosOnOpeningCurrentPopup", lua_x_imgui_ImGui_GetMousePosOnOpeningCurrentPopup);
		tolua_function(tolua_S, "getScrollMaxX", lua_x_imgui_ImGui_GetScrollMaxX);
		tolua_function(tolua_S, "getScrollMaxY", lua_x_imgui_ImGui_GetScrollMaxY);
		tolua_function(tolua_S, "getScrollX", lua_x_imgui_ImGui_GetScrollX);
		tolua_function(tolua_S, "getScrollY", lua_x_imgui_ImGui_GetScrollY);
		tolua_function(tolua_S, "getStyleColorName", lua_x_imgui_ImGui_GetStyleColorName);
		tolua_function(tolua_S, "getStyleColorVec4", lua_x_imgui_ImGui_GetStyleColorVec4);
		tolua_function(tolua_S, "getTextLineHeight", lua_x_imgui_ImGui_GetTextLineHeight);
		tolua_function(tolua_S, "getTextLineHeightWithSpacing", lua_x_imgui_ImGui_GetTextLineHeightWithSpacing);
		tolua_function(tolua_S, "getTime", lua_x_imgui_ImGui_GetTime);
		tolua_function(tolua_S, "getTreeNodeToLabelSpacing", lua_x_imgui_ImGui_GetTreeNodeToLabelSpacing);
		tolua_function(tolua_S, "getVersion", lua_x_imgui_ImGui_GetVersion);
		tolua_function(tolua_S, "getWindowContentRegionMax", lua_x_imgui_ImGui_GetWindowContentRegionMax);
		tolua_function(tolua_S, "getWindowContentRegionMin", lua_x_imgui_ImGui_GetWindowContentRegionMin);
		tolua_function(tolua_S, "getWindowContentRegionWidth", lua_x_imgui_ImGui_GetWindowContentRegionWidth);
		tolua_function(tolua_S, "getWindowDockID", lua_x_imgui_ImGui_GetWindowDockID);
		tolua_function(tolua_S, "getWindowDpiScale", lua_x_imgui_ImGui_GetWindowDpiScale);
		tolua_function(tolua_S, "getWindowDrawList", lua_x_imgui_ImGui_GetWindowDrawList);
		tolua_function(tolua_S, "getWindowHeight", lua_x_imgui_ImGui_GetWindowHeight);
		tolua_function(tolua_S, "getWindowPos", lua_x_imgui_ImGui_GetWindowPos);
		tolua_function(tolua_S, "getWindowSize", lua_x_imgui_ImGui_GetWindowSize);
		tolua_function(tolua_S, "getWindowViewport", lua_x_imgui_ImGui_GetWindowViewport);
		tolua_function(tolua_S, "getWindowWidth", lua_x_imgui_ImGui_GetWindowWidth);
		tolua_function(tolua_S, "indent", lua_x_imgui_ImGui_Indent);
		tolua_function(tolua_S, "invisibleButton", lua_x_imgui_ImGui_InvisibleButton);
		tolua_function(tolua_S, "isAnyItemActive", lua_x_imgui_ImGui_IsAnyItemActive);
		tolua_function(tolua_S, "isAnyItemFocused", lua_x_imgui_ImGui_IsAnyItemFocused);
		tolua_function(tolua_S, "isAnyItemHovered", lua_x_imgui_ImGui_IsAnyItemHovered);
		tolua_function(tolua_S, "isAnyMouseDown", lua_x_imgui_ImGui_IsAnyMouseDown);
		tolua_function(tolua_S, "isItemActivated", lua_x_imgui_ImGui_IsItemActivated);
		tolua_function(tolua_S, "isItemActive", lua_x_imgui_ImGui_IsItemActive);
		tolua_function(tolua_S, "isItemClicked", lua_x_imgui_ImGui_IsItemClicked);
		tolua_function(tolua_S, "isItemDeactivated", lua_x_imgui_ImGui_IsItemDeactivated);
		tolua_function(tolua_S, "isItemDeactivatedAfterEdit", lua_x_imgui_ImGui_IsItemDeactivatedAfterEdit);
		tolua_function(tolua_S, "isItemEdited", lua_x_imgui_ImGui_IsItemEdited);
		tolua_function(tolua_S, "isItemFocused", lua_x_imgui_ImGui_IsItemFocused);
		tolua_function(tolua_S, "isItemHovered", lua_x_imgui_ImGui_IsItemHovered);
		tolua_function(tolua_S, "isItemToggledOpen", lua_x_imgui_ImGui_IsItemToggledOpen);
		tolua_function(tolua_S, "isItemVisible", lua_x_imgui_ImGui_IsItemVisible);
		tolua_function(tolua_S, "isKeyDown", lua_x_imgui_ImGui_IsKeyDown);
		tolua_function(tolua_S, "isKeyPressed", lua_x_imgui_ImGui_IsKeyPressed);
		tolua_function(tolua_S, "isKeyReleased", lua_x_imgui_ImGui_IsKeyReleased);
		tolua_function(tolua_S, "isMouseClicked", lua_x_imgui_ImGui_IsMouseClicked);
		tolua_function(tolua_S, "isMouseDoubleClicked", lua_x_imgui_ImGui_IsMouseDoubleClicked);
		tolua_function(tolua_S, "isMouseDown", lua_x_imgui_ImGui_IsMouseDown);
		tolua_function(tolua_S, "isMouseDragging", lua_x_imgui_ImGui_IsMouseDragging);
		tolua_function(tolua_S, "isMouseHoveringRect", lua_x_imgui_ImGui_IsMouseHoveringRect);
		tolua_function(tolua_S, "isMouseReleased", lua_x_imgui_ImGui_IsMouseReleased);
		tolua_function(tolua_S, "isPopupOpen", lua_x_imgui_ImGui_IsPopupOpen);
		tolua_function(tolua_S, "isRectVisible", lua_x_imgui_ImGui_IsRectVisible);
		tolua_function(tolua_S, "isWindowAppearing", lua_x_imgui_ImGui_IsWindowAppearing);
		tolua_function(tolua_S, "isWindowCollapsed", lua_x_imgui_ImGui_IsWindowCollapsed);
		tolua_function(tolua_S, "isWindowDocked", lua_x_imgui_ImGui_IsWindowDocked);
		tolua_function(tolua_S, "isWindowFocused", lua_x_imgui_ImGui_IsWindowFocused);
		tolua_function(tolua_S, "isWindowHovered", lua_x_imgui_ImGui_IsWindowHovered);
		tolua_function(tolua_S, "labelText", lua_x_imgui_ImGui_LabelText);
		tolua_function(tolua_S, "loadIniSettingsFromDisk", lua_x_imgui_ImGui_LoadIniSettingsFromDisk);
		tolua_function(tolua_S, "loadIniSettingsFromMemory", lua_x_imgui_ImGui_LoadIniSettingsFromMemory);
		tolua_function(tolua_S, "logButtons", lua_x_imgui_ImGui_LogButtons);
		tolua_function(tolua_S, "logFinish", lua_x_imgui_ImGui_LogFinish);
		tolua_function(tolua_S, "logText", lua_x_imgui_ImGui_LogText);
		tolua_function(tolua_S, "logToClipboard", lua_x_imgui_ImGui_LogToClipboard);
		tolua_function(tolua_S, "logToFile", lua_x_imgui_ImGui_LogToFile);
		tolua_function(tolua_S, "logToTTY", lua_x_imgui_ImGui_LogToTTY);
		tolua_function(tolua_S, "newFrame", lua_x_imgui_ImGui_NewFrame);
		tolua_function(tolua_S, "newLine", lua_x_imgui_ImGui_NewLine);
		tolua_function(tolua_S, "nextColumn", lua_x_imgui_ImGui_NextColumn);
		tolua_function(tolua_S, "openPopup", lua_x_imgui_ImGui_OpenPopup);
		tolua_function(tolua_S, "openPopupOnItemClick", lua_x_imgui_ImGui_OpenPopupOnItemClick);
		tolua_function(tolua_S, "popAllowKeyboardFocus", lua_x_imgui_ImGui_PopAllowKeyboardFocus);
		tolua_function(tolua_S, "popButtonRepeat", lua_x_imgui_ImGui_PopButtonRepeat);
		tolua_function(tolua_S, "popClipRect", lua_x_imgui_ImGui_PopClipRect);
		tolua_function(tolua_S, "popFont", lua_x_imgui_ImGui_PopFont);
		tolua_function(tolua_S, "popID", lua_x_imgui_ImGui_PopID);
		tolua_function(tolua_S, "popItemWidth", lua_x_imgui_ImGui_PopItemWidth);
		tolua_function(tolua_S, "popStyleColor", lua_x_imgui_ImGui_PopStyleColor);
		tolua_function(tolua_S, "popStyleVar", lua_x_imgui_ImGui_PopStyleVar);
		tolua_function(tolua_S, "popTextWrapPos", lua_x_imgui_ImGui_PopTextWrapPos);
		tolua_function(tolua_S, "progressBar", lua_x_imgui_ImGui_ProgressBar);
		tolua_function(tolua_S, "pushAllowKeyboardFocus", lua_x_imgui_ImGui_PushAllowKeyboardFocus);
		tolua_function(tolua_S, "pushButtonRepeat", lua_x_imgui_ImGui_PushButtonRepeat);
		tolua_function(tolua_S, "pushClipRect", lua_x_imgui_ImGui_PushClipRect);
		tolua_function(tolua_S, "pushItemWidth", lua_x_imgui_ImGui_PushItemWidth);
		tolua_function(tolua_S, "pushTextWrapPos", lua_x_imgui_ImGui_PushTextWrapPos);
		tolua_function(tolua_S, "radioButton", lua_x_imgui_ImGui_RadioButton);
		tolua_function(tolua_S, "render", lua_x_imgui_ImGui_Render);
		tolua_function(tolua_S, "renderPlatformWindowsDefault", lua_x_imgui_ImGui_RenderPlatformWindowsDefault);
		tolua_function(tolua_S, "resetMouseDragDelta", lua_x_imgui_ImGui_ResetMouseDragDelta);
		tolua_function(tolua_S, "sameLine", lua_x_imgui_ImGui_SameLine);
		tolua_function(tolua_S, "saveIniSettingsToDisk", lua_x_imgui_ImGui_SaveIniSettingsToDisk);
		tolua_function(tolua_S, "separator", lua_x_imgui_ImGui_Separator);
		tolua_function(tolua_S, "setClipboardText", lua_x_imgui_ImGui_SetClipboardText);
		tolua_function(tolua_S, "setColorEditOptions", lua_x_imgui_ImGui_SetColorEditOptions);
		tolua_function(tolua_S, "setColumnOffset", lua_x_imgui_ImGui_SetColumnOffset);
		tolua_function(tolua_S, "setColumnWidth", lua_x_imgui_ImGui_SetColumnWidth);
		tolua_function(tolua_S, "setCursorPos", lua_x_imgui_ImGui_SetCursorPos);
		tolua_function(tolua_S, "setCursorPosX", lua_x_imgui_ImGui_SetCursorPosX);
		tolua_function(tolua_S, "setCursorPosY", lua_x_imgui_ImGui_SetCursorPosY);
		tolua_function(tolua_S, "setCursorScreenPos", lua_x_imgui_ImGui_SetCursorScreenPos);
		tolua_function(tolua_S, "setItemAllowOverlap", lua_x_imgui_ImGui_SetItemAllowOverlap);
		tolua_function(tolua_S, "setItemDefaultFocus", lua_x_imgui_ImGui_SetItemDefaultFocus);
		tolua_function(tolua_S, "setKeyboardFocusHere", lua_x_imgui_ImGui_SetKeyboardFocusHere);
		tolua_function(tolua_S, "setMouseCursor", lua_x_imgui_ImGui_SetMouseCursor);
		tolua_function(tolua_S, "setNextItemOpen", lua_x_imgui_ImGui_SetNextItemOpen);
		tolua_function(tolua_S, "setNextItemWidth", lua_x_imgui_ImGui_SetNextItemWidth);
		tolua_function(tolua_S, "setNextWindowBgAlpha", lua_x_imgui_ImGui_SetNextWindowBgAlpha);
		tolua_function(tolua_S, "setNextWindowCollapsed", lua_x_imgui_ImGui_SetNextWindowCollapsed);
		tolua_function(tolua_S, "setNextWindowContentSize", lua_x_imgui_ImGui_SetNextWindowContentSize);
		tolua_function(tolua_S, "setNextWindowDockID", lua_x_imgui_ImGui_SetNextWindowDockID);
		tolua_function(tolua_S, "setNextWindowFocus", lua_x_imgui_ImGui_SetNextWindowFocus);
		tolua_function(tolua_S, "setNextWindowPos", lua_x_imgui_ImGui_SetNextWindowPos);
		tolua_function(tolua_S, "setNextWindowSize", lua_x_imgui_ImGui_SetNextWindowSize);
		tolua_function(tolua_S, "setNextWindowSizeConstraints", lua_x_imgui_ImGui_SetNextWindowSizeConstraints);
		tolua_function(tolua_S, "setNextWindowViewport", lua_x_imgui_ImGui_SetNextWindowViewport);
		tolua_function(tolua_S, "setScrollFromPosX", lua_x_imgui_ImGui_SetScrollFromPosX);
		tolua_function(tolua_S, "setScrollFromPosY", lua_x_imgui_ImGui_SetScrollFromPosY);
		tolua_function(tolua_S, "setScrollHereX", lua_x_imgui_ImGui_SetScrollHereX);
		tolua_function(tolua_S, "setScrollHereY", lua_x_imgui_ImGui_SetScrollHereY);
		tolua_function(tolua_S, "setScrollX", lua_x_imgui_ImGui_SetScrollX);
		tolua_function(tolua_S, "setScrollY", lua_x_imgui_ImGui_SetScrollY);
		tolua_function(tolua_S, "setTabItemClosed", lua_x_imgui_ImGui_SetTabItemClosed);
		tolua_function(tolua_S, "setTooltip", lua_x_imgui_ImGui_SetTooltip);
		tolua_function(tolua_S, "setWindowCollapsed", lua_x_imgui_ImGui_SetWindowCollapsed);
		tolua_function(tolua_S, "setWindowFocus", lua_x_imgui_ImGui_SetWindowFocus);
		tolua_function(tolua_S, "setWindowFontScale", lua_x_imgui_ImGui_SetWindowFontScale);
		tolua_function(tolua_S, "setWindowPos", lua_x_imgui_ImGui_SetWindowPos);
		tolua_function(tolua_S, "setWindowSize", lua_x_imgui_ImGui_SetWindowSize);
		tolua_function(tolua_S, "showFontSelector", lua_x_imgui_ImGui_ShowFontSelector);
		tolua_function(tolua_S, "showStyleSelector", lua_x_imgui_ImGui_ShowStyleSelector);
		tolua_function(tolua_S, "showUserGuide", lua_x_imgui_ImGui_ShowUserGuide);
		tolua_function(tolua_S, "smallButton", lua_x_imgui_ImGui_SmallButton);
		tolua_function(tolua_S, "spacing", lua_x_imgui_ImGui_Spacing);
		tolua_function(tolua_S, "tabItemButton", lua_x_imgui_ImGui_TabItemButton);
		tolua_function(tolua_S, "tableGetColumnCount", lua_x_imgui_ImGui_TableGetColumnCount);
		tolua_function(tolua_S, "tableGetColumnFlags", lua_x_imgui_ImGui_TableGetColumnFlags);
		tolua_function(tolua_S, "tableGetColumnIndex", lua_x_imgui_ImGui_TableGetColumnIndex);
		tolua_function(tolua_S, "tableGetColumnName", lua_x_imgui_ImGui_TableGetColumnName);
		tolua_function(tolua_S, "tableGetRowIndex", lua_x_imgui_ImGui_TableGetRowIndex);
		tolua_function(tolua_S, "tableHeader", lua_x_imgui_ImGui_TableHeader);
		tolua_function(tolua_S, "tableHeadersRow", lua_x_imgui_ImGui_TableHeadersRow);
		tolua_function(tolua_S, "tableNextColumn", lua_x_imgui_ImGui_TableNextColumn);
		tolua_function(tolua_S, "tableNextRow", lua_x_imgui_ImGui_TableNextRow);
		tolua_function(tolua_S, "tableSetBgColor", lua_x_imgui_ImGui_TableSetBgColor);
		tolua_function(tolua_S, "tableSetColumnEnabled", lua_x_imgui_ImGui_TableSetColumnEnabled);
		tolua_function(tolua_S, "tableSetColumnIndex", lua_x_imgui_ImGui_TableSetColumnIndex);
		tolua_function(tolua_S, "tableSetupColumn", lua_x_imgui_ImGui_TableSetupColumn);
		tolua_function(tolua_S, "tableSetupScrollFreeze", lua_x_imgui_ImGui_TableSetupScrollFreeze);
		tolua_function(tolua_S, "text", lua_x_imgui_ImGui_Text);
		tolua_function(tolua_S, "textColored", lua_x_imgui_ImGui_TextColored);
		tolua_function(tolua_S, "textDisabled", lua_x_imgui_ImGui_TextDisabled);
		tolua_function(tolua_S, "textUnformatted", lua_x_imgui_ImGui_TextUnformatted);
		tolua_function(tolua_S, "textWrapped", lua_x_imgui_ImGui_TextWrapped);
		tolua_function(tolua_S, "treeNode", lua_x_imgui_ImGui_TreeNode);
		tolua_function(tolua_S, "treeNodeEx", lua_x_imgui_ImGui_TreeNodeEx);
		tolua_function(tolua_S, "treePop", lua_x_imgui_ImGui_TreePop);
		tolua_function(tolua_S, "treePush", lua_x_imgui_ImGui_TreePush);
		tolua_function(tolua_S, "unindent", lua_x_imgui_ImGui_Unindent);
		tolua_function(tolua_S, "updatePlatformWindows", lua_x_imgui_ImGui_UpdatePlatformWindows);
	// tolua_endmodule(tolua_S);
	return 1;
}

int register_all_x_imgui(lua_State* tolua_S)
{
	tolua_open(tolua_S);

	tolua_module(tolua_S, "imgui", 0);
	tolua_beginmodule(tolua_S, "imgui");

	lua_register_x_imgui_ImGui(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

