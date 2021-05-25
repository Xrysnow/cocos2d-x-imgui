#include "lua_ImGuiColorTextEdit_auto.hpp"
#include "../CCImGuiColorTextEdit.h"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"
#include "lua_conversion.hpp"
using lua::luaval_to_native;
using lua::native_to_luaval;

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

int lua_x_ImGuiColorTextEdit_ColorTextEdit_addLanguageIdentifier(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:addLanguageIdentifier";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		std::unordered_map<std::string, std::string> arg0;
		ok &= luaval_to_native(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->addLanguageIdentifier(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_addLanguagePreprocIdentifier(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:addLanguagePreprocIdentifier";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		std::unordered_map<std::string, std::string> arg0;
		ok &= luaval_to_native(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->addLanguagePreprocIdentifier(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_canRedo(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:canRedo";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->canRedo());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_canUndo(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:canUndo";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->canUndo());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_copy(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:copy";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->copy();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_create(lua_State* tolua_S)
{
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:create";
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, ImGui::ColorTextEdit::create());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_cut(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:cut";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->cut();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_delete_(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:delete";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->delete_();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_getCurrentLineText(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:getCurrentLineText";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->getCurrentLineText());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_getCursorPosition(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:getCursorPosition";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->getCursorPosition());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_getHoveredCoordinates(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:getHoveredCoordinates";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->getHoveredCoordinates());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_getHoveredDeclaration(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:getHoveredDeclaration";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->getHoveredDeclaration());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_getHoveredWord(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:getHoveredWord";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->getHoveredWord());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_getHoveredWordIndex(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:getHoveredWordIndex";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->getHoveredWordIndex());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_getPalette(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:getPalette";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->getPalette());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_getSelectedText(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:getSelectedText";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->getSelectedText());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_getTabSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:getTabSize";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->getTabSize());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_getText(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:getText";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->getText());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_getTextLines(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:getTextLines";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->getTextLines());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_getTotalLines(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:getTotalLines";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->getTotalLines());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_hasSelection(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:hasSelection";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->hasSelection());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_insertText(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:insertText";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		std::string arg0;
		ok &= luaval_to_std_string(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->insertText(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_isAutoTooltip(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:isAutoTooltip";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->isAutoTooltip());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_isColorizerEnabled(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:isColorizerEnabled";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->isColorizerEnabled());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_isCursorPositionChanged(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:isCursorPositionChanged";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->isCursorPositionChanged());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_isHandleKeyboardInputsEnabled(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:isHandleKeyboardInputsEnabled";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->isHandleKeyboardInputsEnabled());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_isHandleMouseInputsEnabled(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:isHandleMouseInputsEnabled";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->isHandleMouseInputsEnabled());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_isImGuiChildIgnored(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:isImGuiChildIgnored";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->isImGuiChildIgnored());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_isOverwrite(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:isOverwrite";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->isOverwrite());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_isReadOnly(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:isReadOnly";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->isReadOnly());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_isShowingShortTabGlyphs(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:isShowingShortTabGlyphs";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->isShowingShortTabGlyphs());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_isShowingWhitespaces(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:isShowingWhitespaces";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->isShowingWhitespaces());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_isTextChanged(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:isTextChanged";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->isTextChanged());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_moveBottom(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:moveBottom";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->moveBottom();
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 1) {
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->moveBottom(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_moveDown(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:moveDown";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->moveDown();
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->moveDown(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 2) {
		int arg0;
		bool arg1;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 3, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->moveDown(arg0, arg1);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 2");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_moveEnd(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:moveEnd";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->moveEnd();
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 1) {
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->moveEnd(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_moveHome(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:moveHome";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->moveHome();
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 1) {
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->moveHome(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_moveLeft(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:moveLeft";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->moveLeft();
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->moveLeft(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 2) {
		int arg0;
		bool arg1;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 3, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->moveLeft(arg0, arg1);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 3) {
		int arg0;
		bool arg1;
		bool arg2;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 4, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->moveLeft(arg0, arg1, arg2);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 3");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_moveRight(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:moveRight";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->moveRight();
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->moveRight(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 2) {
		int arg0;
		bool arg1;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 3, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->moveRight(arg0, arg1);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 3) {
		int arg0;
		bool arg1;
		bool arg2;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 4, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->moveRight(arg0, arg1, arg2);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 3");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_moveTop(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:moveTop";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->moveTop();
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 1) {
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->moveTop(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_moveUp(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:moveUp";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->moveUp();
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->moveUp(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 2) {
		int arg0;
		bool arg1;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 3, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->moveUp(arg0, arg1);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 2");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_paste(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:paste";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->paste();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_redo(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:redo";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->redo();
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->redo(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_render(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:render";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 2) {
		const char* arg0;
		cocos2d::Vec2 arg1;
		ok &= lua_isstring(tolua_S, 2); if (ok) arg0 = luaL_checkstring(tolua_S, 2);
		ok &= luaval_to_vec2(tolua_S, 3, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->render(arg0, arg1);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 3) {
		const char* arg0;
		cocos2d::Vec2 arg1;
		bool arg2;
		ok &= lua_isstring(tolua_S, 2); if (ok) arg0 = luaL_checkstring(tolua_S, 2);
		ok &= luaval_to_vec2(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 4, &arg2, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->render(arg0, arg1, arg2);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2 to 3");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_selectAll(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:selectAll";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->selectAll();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_selectWordUnderCursor(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:selectWordUnderCursor";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->selectWordUnderCursor();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setAutoTooltip(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setAutoTooltip";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setAutoTooltip(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setBreakpoints(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setBreakpoints";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		std::unordered_set<int> arg0;
		ok &= luaval_to_native(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setBreakpoints(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setColorizerEnable(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setColorizerEnable";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setColorizerEnable(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setCursorPosition(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setCursorPosition";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 2) {
		int arg0;
		int arg1;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setCursorPosition(arg0, arg1);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setErrorMarkers(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setErrorMarkers";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		std::map<int, std::string> arg0;
		ok &= luaval_to_native(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setErrorMarkers(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setHandleKeyboardInputs(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setHandleKeyboardInputs";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setHandleKeyboardInputs(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setHandleMouseInputs(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setHandleMouseInputs";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setHandleMouseInputs(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setImGuiChildIgnored(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setImGuiChildIgnored";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setImGuiChildIgnored(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageAngelScript(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setLanguageAngelScript";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->setLanguageAngelScript();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageC(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setLanguageC";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->setLanguageC();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageCPlusPlus(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setLanguageCPlusPlus";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->setLanguageCPlusPlus();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageDefinition(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setLanguageDefinition";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 8) {
		std::string arg0;
		std::unordered_set<std::string> arg1;
		std::unordered_map<std::string, std::string> arg2;
		std::unordered_map<std::string, std::string> arg3;
		std::vector<std::pair<std::string, ImGui::ColorTextEdit::PaletteIndex>> arg4;
		std::string arg5;
		std::string arg6;
		std::string arg7;
		ok &= luaval_to_std_string(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_native(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_native(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_native(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_native(tolua_S, 6, &arg4, LUA_FNAME);
		ok &= luaval_to_std_string(tolua_S, 7, &arg5, LUA_FNAME);
		ok &= luaval_to_std_string(tolua_S, 8, &arg6, LUA_FNAME);
		ok &= luaval_to_std_string(tolua_S, 9, &arg7, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setLanguageDefinition(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 9) {
		std::string arg0;
		std::unordered_set<std::string> arg1;
		std::unordered_map<std::string, std::string> arg2;
		std::unordered_map<std::string, std::string> arg3;
		std::vector<std::pair<std::string, ImGui::ColorTextEdit::PaletteIndex>> arg4;
		std::string arg5;
		std::string arg6;
		std::string arg7;
		std::string arg8;
		ok &= luaval_to_std_string(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_native(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_native(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_native(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_native(tolua_S, 6, &arg4, LUA_FNAME);
		ok &= luaval_to_std_string(tolua_S, 7, &arg5, LUA_FNAME);
		ok &= luaval_to_std_string(tolua_S, 8, &arg6, LUA_FNAME);
		ok &= luaval_to_std_string(tolua_S, 9, &arg7, LUA_FNAME);
		ok &= luaval_to_std_string(tolua_S, 10, &arg8, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setLanguageDefinition(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 10) {
		std::string arg0;
		std::unordered_set<std::string> arg1;
		std::unordered_map<std::string, std::string> arg2;
		std::unordered_map<std::string, std::string> arg3;
		std::vector<std::pair<std::string, ImGui::ColorTextEdit::PaletteIndex>> arg4;
		std::string arg5;
		std::string arg6;
		std::string arg7;
		std::string arg8;
		bool arg9;
		ok &= luaval_to_std_string(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_native(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_native(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_native(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_native(tolua_S, 6, &arg4, LUA_FNAME);
		ok &= luaval_to_std_string(tolua_S, 7, &arg5, LUA_FNAME);
		ok &= luaval_to_std_string(tolua_S, 8, &arg6, LUA_FNAME);
		ok &= luaval_to_std_string(tolua_S, 9, &arg7, LUA_FNAME);
		ok &= luaval_to_std_string(tolua_S, 10, &arg8, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 11, &arg9, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setLanguageDefinition(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 11) {
		std::string arg0;
		std::unordered_set<std::string> arg1;
		std::unordered_map<std::string, std::string> arg2;
		std::unordered_map<std::string, std::string> arg3;
		std::vector<std::pair<std::string, ImGui::ColorTextEdit::PaletteIndex>> arg4;
		std::string arg5;
		std::string arg6;
		std::string arg7;
		std::string arg8;
		bool arg9;
		bool arg10;
		ok &= luaval_to_std_string(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_native(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_native(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_native(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_native(tolua_S, 6, &arg4, LUA_FNAME);
		ok &= luaval_to_std_string(tolua_S, 7, &arg5, LUA_FNAME);
		ok &= luaval_to_std_string(tolua_S, 8, &arg6, LUA_FNAME);
		ok &= luaval_to_std_string(tolua_S, 9, &arg7, LUA_FNAME);
		ok &= luaval_to_std_string(tolua_S, 10, &arg8, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 11, &arg9, LUA_FNAME);
		ok &= luaval_to_boolean(tolua_S, 12, &arg10, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setLanguageDefinition(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "8 to 11");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageGLSL(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setLanguageGLSL";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->setLanguageGLSL();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageHLSL(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setLanguageHLSL";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->setLanguageHLSL();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageLua(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setLanguageLua";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->setLanguageLua();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageSQL(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setLanguageSQL";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->setLanguageSQL();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setPalette(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setPalette";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		std::vector<unsigned int> arg0;
		ok &= luaval_to_native(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setPalette(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteDark(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setPaletteDark";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->setPaletteDark();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteLight(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setPaletteLight";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->setPaletteLight();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteRetroBlue(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setPaletteRetroBlue";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->setPaletteRetroBlue();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setReadOnly(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setReadOnly";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setReadOnly(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelection(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setSelection";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 4) {
		int arg0;
		int arg1;
		int arg2;
		int arg3;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 5, &arg3, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setSelection(arg0, arg1, arg2, arg3);
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 5) {
		int arg0;
		int arg1;
		int arg2;
		int arg3;
		ImGui::ColorTextEdit::SelectionMode arg4;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_native(tolua_S, 6, &arg4, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setSelection(arg0, arg1, arg2, arg3, arg4);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "4 to 5");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelectionEnd(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setSelectionEnd";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 2) {
		int arg0;
		int arg1;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setSelectionEnd(arg0, arg1);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelectionStart(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setSelectionStart";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 2) {
		int arg0;
		int arg1;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setSelectionStart(arg0, arg1);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setShowShortTabGlyphs(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setShowShortTabGlyphs";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setShowShortTabGlyphs(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setShowWhitespaces(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setShowWhitespaces";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		bool arg0;
		ok &= luaval_to_boolean(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setShowWhitespaces(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setTabSize(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setTabSize";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setTabSize(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setText(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setText";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		std::string arg0;
		ok &= luaval_to_std_string(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setText(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_setTextLines(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:setTextLines";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		std::vector<std::string> arg0;
		ok &= luaval_to_std_vector_string(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->setTextLines(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_ImGuiColorTextEdit_ColorTextEdit_undo(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ColorTextEdit";
	constexpr auto LUA_FNAME = "imgui.ColorTextEdit:undo";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (ImGui::ColorTextEdit*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->undo();
		lua_settop(tolua_S, 1);
		return 1;
	}
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->undo(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0 to 1");
}
static int lua_x_ImGuiColorTextEdit_ColorTextEdit_finalize(lua_State* tolua_S)
{
	return 0;
}

int lua_register_x_ImGuiColorTextEdit_ColorTextEdit(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "imgui.ColorTextEdit");
	tolua_cclass(tolua_S, "ColorTextEdit", "imgui.ColorTextEdit", "cc.Node", nullptr);

	tolua_beginmodule(tolua_S, "ColorTextEdit");
		tolua_function(tolua_S, "addLanguageIdentifier", lua_x_ImGuiColorTextEdit_ColorTextEdit_addLanguageIdentifier);
		tolua_function(tolua_S, "addLanguagePreprocIdentifier", lua_x_ImGuiColorTextEdit_ColorTextEdit_addLanguagePreprocIdentifier);
		tolua_function(tolua_S, "canRedo", lua_x_ImGuiColorTextEdit_ColorTextEdit_canRedo);
		tolua_function(tolua_S, "canUndo", lua_x_ImGuiColorTextEdit_ColorTextEdit_canUndo);
		tolua_function(tolua_S, "copy", lua_x_ImGuiColorTextEdit_ColorTextEdit_copy);
		tolua_function(tolua_S, "cut", lua_x_ImGuiColorTextEdit_ColorTextEdit_cut);
		tolua_function(tolua_S, "delete", lua_x_ImGuiColorTextEdit_ColorTextEdit_delete_);
		tolua_function(tolua_S, "getCurrentLineText", lua_x_ImGuiColorTextEdit_ColorTextEdit_getCurrentLineText);
		tolua_function(tolua_S, "getCursorPosition", lua_x_ImGuiColorTextEdit_ColorTextEdit_getCursorPosition);
		tolua_function(tolua_S, "getHoveredCoordinates", lua_x_ImGuiColorTextEdit_ColorTextEdit_getHoveredCoordinates);
		tolua_function(tolua_S, "getHoveredDeclaration", lua_x_ImGuiColorTextEdit_ColorTextEdit_getHoveredDeclaration);
		tolua_function(tolua_S, "getHoveredWord", lua_x_ImGuiColorTextEdit_ColorTextEdit_getHoveredWord);
		tolua_function(tolua_S, "getHoveredWordIndex", lua_x_ImGuiColorTextEdit_ColorTextEdit_getHoveredWordIndex);
		tolua_function(tolua_S, "getPalette", lua_x_ImGuiColorTextEdit_ColorTextEdit_getPalette);
		tolua_function(tolua_S, "getSelectedText", lua_x_ImGuiColorTextEdit_ColorTextEdit_getSelectedText);
		tolua_function(tolua_S, "getTabSize", lua_x_ImGuiColorTextEdit_ColorTextEdit_getTabSize);
		tolua_function(tolua_S, "getText", lua_x_ImGuiColorTextEdit_ColorTextEdit_getText);
		tolua_function(tolua_S, "getTextLines", lua_x_ImGuiColorTextEdit_ColorTextEdit_getTextLines);
		tolua_function(tolua_S, "getTotalLines", lua_x_ImGuiColorTextEdit_ColorTextEdit_getTotalLines);
		tolua_function(tolua_S, "hasSelection", lua_x_ImGuiColorTextEdit_ColorTextEdit_hasSelection);
		tolua_function(tolua_S, "insertText", lua_x_ImGuiColorTextEdit_ColorTextEdit_insertText);
		tolua_function(tolua_S, "isAutoTooltip", lua_x_ImGuiColorTextEdit_ColorTextEdit_isAutoTooltip);
		tolua_function(tolua_S, "isColorizerEnabled", lua_x_ImGuiColorTextEdit_ColorTextEdit_isColorizerEnabled);
		tolua_function(tolua_S, "isCursorPositionChanged", lua_x_ImGuiColorTextEdit_ColorTextEdit_isCursorPositionChanged);
		tolua_function(tolua_S, "isHandleKeyboardInputsEnabled", lua_x_ImGuiColorTextEdit_ColorTextEdit_isHandleKeyboardInputsEnabled);
		tolua_function(tolua_S, "isHandleMouseInputsEnabled", lua_x_ImGuiColorTextEdit_ColorTextEdit_isHandleMouseInputsEnabled);
		tolua_function(tolua_S, "isImGuiChildIgnored", lua_x_ImGuiColorTextEdit_ColorTextEdit_isImGuiChildIgnored);
		tolua_function(tolua_S, "isOverwrite", lua_x_ImGuiColorTextEdit_ColorTextEdit_isOverwrite);
		tolua_function(tolua_S, "isReadOnly", lua_x_ImGuiColorTextEdit_ColorTextEdit_isReadOnly);
		tolua_function(tolua_S, "isShowingShortTabGlyphs", lua_x_ImGuiColorTextEdit_ColorTextEdit_isShowingShortTabGlyphs);
		tolua_function(tolua_S, "isShowingWhitespaces", lua_x_ImGuiColorTextEdit_ColorTextEdit_isShowingWhitespaces);
		tolua_function(tolua_S, "isTextChanged", lua_x_ImGuiColorTextEdit_ColorTextEdit_isTextChanged);
		tolua_function(tolua_S, "moveBottom", lua_x_ImGuiColorTextEdit_ColorTextEdit_moveBottom);
		tolua_function(tolua_S, "moveDown", lua_x_ImGuiColorTextEdit_ColorTextEdit_moveDown);
		tolua_function(tolua_S, "moveEnd", lua_x_ImGuiColorTextEdit_ColorTextEdit_moveEnd);
		tolua_function(tolua_S, "moveHome", lua_x_ImGuiColorTextEdit_ColorTextEdit_moveHome);
		tolua_function(tolua_S, "moveLeft", lua_x_ImGuiColorTextEdit_ColorTextEdit_moveLeft);
		tolua_function(tolua_S, "moveRight", lua_x_ImGuiColorTextEdit_ColorTextEdit_moveRight);
		tolua_function(tolua_S, "moveTop", lua_x_ImGuiColorTextEdit_ColorTextEdit_moveTop);
		tolua_function(tolua_S, "moveUp", lua_x_ImGuiColorTextEdit_ColorTextEdit_moveUp);
		tolua_function(tolua_S, "paste", lua_x_ImGuiColorTextEdit_ColorTextEdit_paste);
		tolua_function(tolua_S, "redo", lua_x_ImGuiColorTextEdit_ColorTextEdit_redo);
		tolua_function(tolua_S, "render", lua_x_ImGuiColorTextEdit_ColorTextEdit_render);
		tolua_function(tolua_S, "selectAll", lua_x_ImGuiColorTextEdit_ColorTextEdit_selectAll);
		tolua_function(tolua_S, "selectWordUnderCursor", lua_x_ImGuiColorTextEdit_ColorTextEdit_selectWordUnderCursor);
		tolua_function(tolua_S, "setAutoTooltip", lua_x_ImGuiColorTextEdit_ColorTextEdit_setAutoTooltip);
		tolua_function(tolua_S, "setBreakpoints", lua_x_ImGuiColorTextEdit_ColorTextEdit_setBreakpoints);
		tolua_function(tolua_S, "setColorizerEnable", lua_x_ImGuiColorTextEdit_ColorTextEdit_setColorizerEnable);
		tolua_function(tolua_S, "setCursorPosition", lua_x_ImGuiColorTextEdit_ColorTextEdit_setCursorPosition);
		tolua_function(tolua_S, "setErrorMarkers", lua_x_ImGuiColorTextEdit_ColorTextEdit_setErrorMarkers);
		tolua_function(tolua_S, "setHandleKeyboardInputs", lua_x_ImGuiColorTextEdit_ColorTextEdit_setHandleKeyboardInputs);
		tolua_function(tolua_S, "setHandleMouseInputs", lua_x_ImGuiColorTextEdit_ColorTextEdit_setHandleMouseInputs);
		tolua_function(tolua_S, "setImGuiChildIgnored", lua_x_ImGuiColorTextEdit_ColorTextEdit_setImGuiChildIgnored);
		tolua_function(tolua_S, "setLanguageAngelScript", lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageAngelScript);
		tolua_function(tolua_S, "setLanguageC", lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageC);
		tolua_function(tolua_S, "setLanguageCPlusPlus", lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageCPlusPlus);
		tolua_function(tolua_S, "setLanguageDefinition", lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageDefinition);
		tolua_function(tolua_S, "setLanguageGLSL", lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageGLSL);
		tolua_function(tolua_S, "setLanguageHLSL", lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageHLSL);
		tolua_function(tolua_S, "setLanguageLua", lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageLua);
		tolua_function(tolua_S, "setLanguageSQL", lua_x_ImGuiColorTextEdit_ColorTextEdit_setLanguageSQL);
		tolua_function(tolua_S, "setPalette", lua_x_ImGuiColorTextEdit_ColorTextEdit_setPalette);
		tolua_function(tolua_S, "setPaletteDark", lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteDark);
		tolua_function(tolua_S, "setPaletteLight", lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteLight);
		tolua_function(tolua_S, "setPaletteRetroBlue", lua_x_ImGuiColorTextEdit_ColorTextEdit_setPaletteRetroBlue);
		tolua_function(tolua_S, "setReadOnly", lua_x_ImGuiColorTextEdit_ColorTextEdit_setReadOnly);
		tolua_function(tolua_S, "setSelection", lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelection);
		tolua_function(tolua_S, "setSelectionEnd", lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelectionEnd);
		tolua_function(tolua_S, "setSelectionStart", lua_x_ImGuiColorTextEdit_ColorTextEdit_setSelectionStart);
		tolua_function(tolua_S, "setShowShortTabGlyphs", lua_x_ImGuiColorTextEdit_ColorTextEdit_setShowShortTabGlyphs);
		tolua_function(tolua_S, "setShowWhitespaces", lua_x_ImGuiColorTextEdit_ColorTextEdit_setShowWhitespaces);
		tolua_function(tolua_S, "setTabSize", lua_x_ImGuiColorTextEdit_ColorTextEdit_setTabSize);
		tolua_function(tolua_S, "setText", lua_x_ImGuiColorTextEdit_ColorTextEdit_setText);
		tolua_function(tolua_S, "setTextLines", lua_x_ImGuiColorTextEdit_ColorTextEdit_setTextLines);
		tolua_function(tolua_S, "undo", lua_x_ImGuiColorTextEdit_ColorTextEdit_undo);
		tolua_function(tolua_S, "create", lua_x_ImGuiColorTextEdit_ColorTextEdit_create);
		{
			tolua_module(tolua_S, "PaletteIndex", 0);
			tolua_beginmodule(tolua_S, "PaletteIndex");
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
			tolua_beginmodule(tolua_S, "SelectionMode");
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

int register_all_x_ImGuiColorTextEdit(lua_State* tolua_S)
{
	tolua_open(tolua_S);

	tolua_module(tolua_S, "imgui", 0);
	tolua_beginmodule(tolua_S, "imgui");

	lua_register_x_ImGuiColorTextEdit_ColorTextEdit(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

