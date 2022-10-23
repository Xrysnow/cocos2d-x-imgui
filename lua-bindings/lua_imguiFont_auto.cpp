#include "lua_imguiFont_auto.hpp"
#include "imgui_lua.hpp"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"
#include "lua_conversion.hpp"
using lua::luaval_to_native;
using lua::native_to_luaval;
namespace imgui {
using ImFontConfig = ImFontConfig;
using ImFontGlyph = ImFontGlyph;
using ImFontAtlas = ImFontAtlas;
using ImFontAtlasCustomRect = ImFontAtlasCustomRect;
using ImFont = ImFont;
}

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

int lua_x_imguiFont_ImFontConfig_getFontDataSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.FontDataSize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->FontDataSize);
	return 1;
}
int lua_x_imguiFont_ImFontConfig_setFontDataSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.FontDataSize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->FontDataSize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontConfig_getFontDataOwnedByAtlas(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.FontDataOwnedByAtlas getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->FontDataOwnedByAtlas);
	return 1;
}
int lua_x_imguiFont_ImFontConfig_setFontDataOwnedByAtlas(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.FontDataOwnedByAtlas setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->FontDataOwnedByAtlas, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontConfig_getFontNo(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.FontNo getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->FontNo);
	return 1;
}
int lua_x_imguiFont_ImFontConfig_setFontNo(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.FontNo setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->FontNo, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontConfig_getSizePixels(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.SizePixels getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->SizePixels);
	return 1;
}
int lua_x_imguiFont_ImFontConfig_setSizePixels(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.SizePixels setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->SizePixels, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontConfig_getOversampleH(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.OversampleH getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->OversampleH);
	return 1;
}
int lua_x_imguiFont_ImFontConfig_setOversampleH(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.OversampleH setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->OversampleH, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontConfig_getOversampleV(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.OversampleV getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->OversampleV);
	return 1;
}
int lua_x_imguiFont_ImFontConfig_setOversampleV(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.OversampleV setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->OversampleV, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontConfig_getPixelSnapH(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.PixelSnapH getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->PixelSnapH);
	return 1;
}
int lua_x_imguiFont_ImFontConfig_setPixelSnapH(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.PixelSnapH setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->PixelSnapH, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontConfig_getGlyphExtraSpacing(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.GlyphExtraSpacing getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->GlyphExtraSpacing);
	return 1;
}
int lua_x_imguiFont_ImFontConfig_setGlyphExtraSpacing(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.GlyphExtraSpacing setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->GlyphExtraSpacing, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontConfig_getGlyphOffset(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.GlyphOffset getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->GlyphOffset);
	return 1;
}
int lua_x_imguiFont_ImFontConfig_setGlyphOffset(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.GlyphOffset setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->GlyphOffset, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontConfig_getGlyphMinAdvanceX(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.GlyphMinAdvanceX getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->GlyphMinAdvanceX);
	return 1;
}
int lua_x_imguiFont_ImFontConfig_setGlyphMinAdvanceX(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.GlyphMinAdvanceX setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->GlyphMinAdvanceX, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontConfig_getGlyphMaxAdvanceX(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.GlyphMaxAdvanceX getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->GlyphMaxAdvanceX);
	return 1;
}
int lua_x_imguiFont_ImFontConfig_setGlyphMaxAdvanceX(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.GlyphMaxAdvanceX setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->GlyphMaxAdvanceX, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontConfig_getMergeMode(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.MergeMode getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MergeMode);
	return 1;
}
int lua_x_imguiFont_ImFontConfig_setMergeMode(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.MergeMode setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MergeMode, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontConfig_getFontBuilderFlags(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.FontBuilderFlags getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->FontBuilderFlags);
	return 1;
}
int lua_x_imguiFont_ImFontConfig_setFontBuilderFlags(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.FontBuilderFlags setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->FontBuilderFlags, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontConfig_getRasterizerMultiply(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.RasterizerMultiply getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->RasterizerMultiply);
	return 1;
}
int lua_x_imguiFont_ImFontConfig_setRasterizerMultiply(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.RasterizerMultiply setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->RasterizerMultiply, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontConfig_getEllipsisChar(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.EllipsisChar getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->EllipsisChar);
	return 1;
}
int lua_x_imguiFont_ImFontConfig_setEllipsisChar(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontConfig";
	constexpr auto LUA_FNAME = "imgui.ImFontConfig.EllipsisChar setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontConfig*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->EllipsisChar, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
static int lua_x_imguiFont_ImFontConfig_finalize(lua_State* tolua_S)
{
	return 0;
}

int lua_register_x_imguiFont_ImFontConfig(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "imgui.ImFontConfig");
	tolua_cclass(tolua_S, "ImFontConfig", "imgui.ImFontConfig", "", nullptr);

	tolua_beginmodule(tolua_S, "ImFontConfig");
		tolua_variable(tolua_S, "FontDataSize", lua_x_imguiFont_ImFontConfig_getFontDataSize, lua_x_imguiFont_ImFontConfig_setFontDataSize);
		tolua_variable(tolua_S, "FontDataOwnedByAtlas", lua_x_imguiFont_ImFontConfig_getFontDataOwnedByAtlas, lua_x_imguiFont_ImFontConfig_setFontDataOwnedByAtlas);
		tolua_variable(tolua_S, "FontNo", lua_x_imguiFont_ImFontConfig_getFontNo, lua_x_imguiFont_ImFontConfig_setFontNo);
		tolua_variable(tolua_S, "SizePixels", lua_x_imguiFont_ImFontConfig_getSizePixels, lua_x_imguiFont_ImFontConfig_setSizePixels);
		tolua_variable(tolua_S, "OversampleH", lua_x_imguiFont_ImFontConfig_getOversampleH, lua_x_imguiFont_ImFontConfig_setOversampleH);
		tolua_variable(tolua_S, "OversampleV", lua_x_imguiFont_ImFontConfig_getOversampleV, lua_x_imguiFont_ImFontConfig_setOversampleV);
		tolua_variable(tolua_S, "PixelSnapH", lua_x_imguiFont_ImFontConfig_getPixelSnapH, lua_x_imguiFont_ImFontConfig_setPixelSnapH);
		tolua_variable(tolua_S, "GlyphExtraSpacing", lua_x_imguiFont_ImFontConfig_getGlyphExtraSpacing, lua_x_imguiFont_ImFontConfig_setGlyphExtraSpacing);
		tolua_variable(tolua_S, "GlyphOffset", lua_x_imguiFont_ImFontConfig_getGlyphOffset, lua_x_imguiFont_ImFontConfig_setGlyphOffset);
		tolua_variable(tolua_S, "GlyphMinAdvanceX", lua_x_imguiFont_ImFontConfig_getGlyphMinAdvanceX, lua_x_imguiFont_ImFontConfig_setGlyphMinAdvanceX);
		tolua_variable(tolua_S, "GlyphMaxAdvanceX", lua_x_imguiFont_ImFontConfig_getGlyphMaxAdvanceX, lua_x_imguiFont_ImFontConfig_setGlyphMaxAdvanceX);
		tolua_variable(tolua_S, "MergeMode", lua_x_imguiFont_ImFontConfig_getMergeMode, lua_x_imguiFont_ImFontConfig_setMergeMode);
		tolua_variable(tolua_S, "FontBuilderFlags", lua_x_imguiFont_ImFontConfig_getFontBuilderFlags, lua_x_imguiFont_ImFontConfig_setFontBuilderFlags);
		tolua_variable(tolua_S, "RasterizerMultiply", lua_x_imguiFont_ImFontConfig_getRasterizerMultiply, lua_x_imguiFont_ImFontConfig_setRasterizerMultiply);
		tolua_variable(tolua_S, "EllipsisChar", lua_x_imguiFont_ImFontConfig_getEllipsisChar, lua_x_imguiFont_ImFontConfig_setEllipsisChar);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(imgui::ImFontConfig).name();
	g_luaType[typeName] = "imgui.ImFontConfig";
	g_typeCast["ImFontConfig"] = "imgui.ImFontConfig";
	return 1;
}

int lua_x_imguiFont_ImFontGlyph_getColored(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.Colored getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Colored);
	return 1;
}
int lua_x_imguiFont_ImFontGlyph_setColored(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.Colored setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		unsigned arg0;
		ok &= luaval_to_native(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->Colored = arg0;
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontGlyph_getVisible(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.Visible getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Visible);
	return 1;
}
int lua_x_imguiFont_ImFontGlyph_setVisible(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.Visible setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		unsigned arg0;
		ok &= luaval_to_native(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->Visible = arg0;
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontGlyph_getCodepoint(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.Codepoint getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Codepoint);
	return 1;
}
int lua_x_imguiFont_ImFontGlyph_setCodepoint(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.Codepoint setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		unsigned arg0;
		ok &= luaval_to_native(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		cobj->Codepoint = arg0;
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontGlyph_getAdvanceX(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.AdvanceX getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->AdvanceX);
	return 1;
}
int lua_x_imguiFont_ImFontGlyph_setAdvanceX(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.AdvanceX setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->AdvanceX, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontGlyph_getX0(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.X0 getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->X0);
	return 1;
}
int lua_x_imguiFont_ImFontGlyph_setX0(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.X0 setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->X0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontGlyph_getY0(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.Y0 getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Y0);
	return 1;
}
int lua_x_imguiFont_ImFontGlyph_setY0(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.Y0 setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Y0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontGlyph_getX1(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.X1 getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->X1);
	return 1;
}
int lua_x_imguiFont_ImFontGlyph_setX1(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.X1 setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->X1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontGlyph_getY1(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.Y1 getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Y1);
	return 1;
}
int lua_x_imguiFont_ImFontGlyph_setY1(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.Y1 setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Y1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontGlyph_getU0(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.U0 getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->U0);
	return 1;
}
int lua_x_imguiFont_ImFontGlyph_setU0(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.U0 setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->U0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontGlyph_getV0(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.V0 getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->V0);
	return 1;
}
int lua_x_imguiFont_ImFontGlyph_setV0(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.V0 setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->V0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontGlyph_getU1(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.U1 getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->U1);
	return 1;
}
int lua_x_imguiFont_ImFontGlyph_setU1(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.U1 setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->U1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontGlyph_getV1(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.V1 getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->V1);
	return 1;
}
int lua_x_imguiFont_ImFontGlyph_setV1(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontGlyph";
	constexpr auto LUA_FNAME = "imgui.ImFontGlyph.V1 setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontGlyph*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->V1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
static int lua_x_imguiFont_ImFontGlyph_finalize(lua_State* tolua_S)
{
	return 0;
}

int lua_register_x_imguiFont_ImFontGlyph(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "imgui.ImFontGlyph");
	tolua_cclass(tolua_S, "ImFontGlyph", "imgui.ImFontGlyph", "", nullptr);

	tolua_beginmodule(tolua_S, "ImFontGlyph");
		tolua_variable(tolua_S, "Colored", lua_x_imguiFont_ImFontGlyph_getColored, lua_x_imguiFont_ImFontGlyph_setColored);
		tolua_variable(tolua_S, "Visible", lua_x_imguiFont_ImFontGlyph_getVisible, lua_x_imguiFont_ImFontGlyph_setVisible);
		tolua_variable(tolua_S, "Codepoint", lua_x_imguiFont_ImFontGlyph_getCodepoint, lua_x_imguiFont_ImFontGlyph_setCodepoint);
		tolua_variable(tolua_S, "AdvanceX", lua_x_imguiFont_ImFontGlyph_getAdvanceX, lua_x_imguiFont_ImFontGlyph_setAdvanceX);
		tolua_variable(tolua_S, "X0", lua_x_imguiFont_ImFontGlyph_getX0, lua_x_imguiFont_ImFontGlyph_setX0);
		tolua_variable(tolua_S, "Y0", lua_x_imguiFont_ImFontGlyph_getY0, lua_x_imguiFont_ImFontGlyph_setY0);
		tolua_variable(tolua_S, "X1", lua_x_imguiFont_ImFontGlyph_getX1, lua_x_imguiFont_ImFontGlyph_setX1);
		tolua_variable(tolua_S, "Y1", lua_x_imguiFont_ImFontGlyph_getY1, lua_x_imguiFont_ImFontGlyph_setY1);
		tolua_variable(tolua_S, "U0", lua_x_imguiFont_ImFontGlyph_getU0, lua_x_imguiFont_ImFontGlyph_setU0);
		tolua_variable(tolua_S, "V0", lua_x_imguiFont_ImFontGlyph_getV0, lua_x_imguiFont_ImFontGlyph_setV0);
		tolua_variable(tolua_S, "U1", lua_x_imguiFont_ImFontGlyph_getU1, lua_x_imguiFont_ImFontGlyph_setU1);
		tolua_variable(tolua_S, "V1", lua_x_imguiFont_ImFontGlyph_getV1, lua_x_imguiFont_ImFontGlyph_setV1);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(imgui::ImFontGlyph).name();
	g_luaType[typeName] = "imgui.ImFontGlyph";
	g_typeCast["ImFontGlyph"] = "imgui.ImFontGlyph";
	return 1;
}

int lua_x_imguiFont_ImFontAtlasCustomRect_IsPacked(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlasCustomRect";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlasCustomRect:isPacked";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->IsPacked());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiFont_ImFontAtlasCustomRect_getWidth(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlasCustomRect";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlasCustomRect.Width getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Width);
	return 1;
}
int lua_x_imguiFont_ImFontAtlasCustomRect_setWidth(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlasCustomRect";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlasCustomRect.Width setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Width, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontAtlasCustomRect_getHeight(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlasCustomRect";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlasCustomRect.Height getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Height);
	return 1;
}
int lua_x_imguiFont_ImFontAtlasCustomRect_setHeight(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlasCustomRect";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlasCustomRect.Height setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Height, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontAtlasCustomRect_getX(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlasCustomRect";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlasCustomRect.X getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->X);
	return 1;
}
int lua_x_imguiFont_ImFontAtlasCustomRect_setX(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlasCustomRect";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlasCustomRect.X setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->X, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontAtlasCustomRect_getY(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlasCustomRect";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlasCustomRect.Y getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Y);
	return 1;
}
int lua_x_imguiFont_ImFontAtlasCustomRect_setY(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlasCustomRect";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlasCustomRect.Y setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Y, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphID(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlasCustomRect";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlasCustomRect.GlyphID getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->GlyphID);
	return 1;
}
int lua_x_imguiFont_ImFontAtlasCustomRect_setGlyphID(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlasCustomRect";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlasCustomRect.GlyphID setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->GlyphID, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphAdvanceX(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlasCustomRect";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlasCustomRect.GlyphAdvanceX getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->GlyphAdvanceX);
	return 1;
}
int lua_x_imguiFont_ImFontAtlasCustomRect_setGlyphAdvanceX(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlasCustomRect";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlasCustomRect.GlyphAdvanceX setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->GlyphAdvanceX, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphOffset(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlasCustomRect";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlasCustomRect.GlyphOffset getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->GlyphOffset);
	return 1;
}
int lua_x_imguiFont_ImFontAtlasCustomRect_setGlyphOffset(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlasCustomRect";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlasCustomRect.GlyphOffset setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->GlyphOffset, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontAtlasCustomRect_getFont(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlasCustomRect";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlasCustomRect.Font getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Font);
	return 1;
}
int lua_x_imguiFont_ImFontAtlasCustomRect_setFont(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlasCustomRect";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlasCustomRect.Font setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlasCustomRect*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Font, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
static int lua_x_imguiFont_ImFontAtlasCustomRect_finalize(lua_State* tolua_S)
{
	return 0;
}

int lua_register_x_imguiFont_ImFontAtlasCustomRect(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "imgui.ImFontAtlasCustomRect");
	tolua_cclass(tolua_S, "ImFontAtlasCustomRect", "imgui.ImFontAtlasCustomRect", "", nullptr);

	tolua_beginmodule(tolua_S, "ImFontAtlasCustomRect");
		tolua_function(tolua_S, "isPacked", lua_x_imguiFont_ImFontAtlasCustomRect_IsPacked);
		tolua_variable(tolua_S, "Width", lua_x_imguiFont_ImFontAtlasCustomRect_getWidth, lua_x_imguiFont_ImFontAtlasCustomRect_setWidth);
		tolua_variable(tolua_S, "Height", lua_x_imguiFont_ImFontAtlasCustomRect_getHeight, lua_x_imguiFont_ImFontAtlasCustomRect_setHeight);
		tolua_variable(tolua_S, "X", lua_x_imguiFont_ImFontAtlasCustomRect_getX, lua_x_imguiFont_ImFontAtlasCustomRect_setX);
		tolua_variable(tolua_S, "Y", lua_x_imguiFont_ImFontAtlasCustomRect_getY, lua_x_imguiFont_ImFontAtlasCustomRect_setY);
		tolua_variable(tolua_S, "GlyphID", lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphID, lua_x_imguiFont_ImFontAtlasCustomRect_setGlyphID);
		tolua_variable(tolua_S, "GlyphAdvanceX", lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphAdvanceX, lua_x_imguiFont_ImFontAtlasCustomRect_setGlyphAdvanceX);
		tolua_variable(tolua_S, "GlyphOffset", lua_x_imguiFont_ImFontAtlasCustomRect_getGlyphOffset, lua_x_imguiFont_ImFontAtlasCustomRect_setGlyphOffset);
		tolua_variable(tolua_S, "Font", lua_x_imguiFont_ImFontAtlasCustomRect_getFont, lua_x_imguiFont_ImFontAtlasCustomRect_setFont);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(imgui::ImFontAtlasCustomRect).name();
	g_luaType[typeName] = "imgui.ImFontAtlasCustomRect";
	g_typeCast["ImFontAtlasCustomRect"] = "imgui.ImFontAtlasCustomRect";
	return 1;
}

int lua_x_imguiFont_ImFontAtlas_AddCustomRectFontGlyph(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlas";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlas:addCustomRectFontGlyph";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 5) {
		imgui::ImFont* arg0;
		unsigned short arg1;
		int arg2;
		int arg3;
		double arg4;
		ok &= luaval_to_native(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ushort(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 6, &arg4, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, cobj->AddCustomRectFontGlyph(arg0, arg1, arg2, arg3, arg4));
		return 1;
	}
	if (argc == 6) {
		imgui::ImFont* arg0;
		unsigned short arg1;
		int arg2;
		int arg3;
		double arg4;
		ImVec2 arg5;
		ok &= luaval_to_native(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_ushort(tolua_S, 3, &arg1, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 4, &arg2, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 5, &arg3, LUA_FNAME);
		ok &= luaval_to_number(tolua_S, 6, &arg4, LUA_FNAME);
		ok &= luaval_to_ImVec2(tolua_S, 7, &arg5, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, cobj->AddCustomRectFontGlyph(arg0, arg1, arg2, arg3, arg4, arg5));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "5 to 6");
}
int lua_x_imguiFont_ImFontAtlas_AddCustomRectRegular(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlas";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlas:addCustomRectRegular";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 2) {
		int arg0;
		int arg1;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		ok &= luaval_to_int32(tolua_S, 3, &arg1, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, cobj->AddCustomRectRegular(arg0, arg1));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "2");
}
int lua_x_imguiFont_ImFontAtlas_Build(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlas";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlas:build";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->Build());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiFont_ImFontAtlas_Clear(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlas";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlas:clear";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->Clear();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiFont_ImFontAtlas_ClearFonts(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlas";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlas:clearFonts";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->ClearFonts();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiFont_ImFontAtlas_ClearInputData(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlas";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlas:clearInputData";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->ClearInputData();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiFont_ImFontAtlas_ClearTexData(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlas";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlas:clearTexData";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		cobj->ClearTexData();
		lua_settop(tolua_S, 1);
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiFont_ImFontAtlas_GetCustomRectByIndex(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlas";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlas:getCustomRectByIndex";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		int arg0;
		ok &= luaval_to_int32(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, cobj->GetCustomRectByIndex(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontAtlas_IsBuilt(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlas";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlas:isBuilt";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->IsBuilt());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiFont_ImFontAtlas_getFlags(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlas";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlas.Flags getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Flags);
	return 1;
}
int lua_x_imguiFont_ImFontAtlas_setFlags(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlas";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlas.Flags setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Flags, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontAtlas_getTexDesiredWidth(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlas";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlas.TexDesiredWidth getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->TexDesiredWidth);
	return 1;
}
int lua_x_imguiFont_ImFontAtlas_setTexDesiredWidth(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlas";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlas.TexDesiredWidth setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->TexDesiredWidth, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontAtlas_getTexGlyphPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlas";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlas.TexGlyphPadding getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->TexGlyphPadding);
	return 1;
}
int lua_x_imguiFont_ImFontAtlas_setTexGlyphPadding(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlas";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlas.TexGlyphPadding setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->TexGlyphPadding, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFontAtlas_getLocked(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlas";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlas.Locked getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Locked);
	return 1;
}
int lua_x_imguiFont_ImFontAtlas_setLocked(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFontAtlas";
	constexpr auto LUA_FNAME = "imgui.ImFontAtlas.Locked setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFontAtlas*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Locked, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
static int lua_x_imguiFont_ImFontAtlas_finalize(lua_State* tolua_S)
{
	return 0;
}

int lua_register_x_imguiFont_ImFontAtlas(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "imgui.ImFontAtlas");
	tolua_cclass(tolua_S, "ImFontAtlas", "imgui.ImFontAtlas", "", nullptr);

	tolua_beginmodule(tolua_S, "ImFontAtlas");
		tolua_function(tolua_S, "addCustomRectFontGlyph", lua_x_imguiFont_ImFontAtlas_AddCustomRectFontGlyph);
		tolua_function(tolua_S, "addCustomRectRegular", lua_x_imguiFont_ImFontAtlas_AddCustomRectRegular);
		tolua_function(tolua_S, "build", lua_x_imguiFont_ImFontAtlas_Build);
		tolua_function(tolua_S, "clear", lua_x_imguiFont_ImFontAtlas_Clear);
		tolua_function(tolua_S, "clearFonts", lua_x_imguiFont_ImFontAtlas_ClearFonts);
		tolua_function(tolua_S, "clearInputData", lua_x_imguiFont_ImFontAtlas_ClearInputData);
		tolua_function(tolua_S, "clearTexData", lua_x_imguiFont_ImFontAtlas_ClearTexData);
		tolua_function(tolua_S, "getCustomRectByIndex", lua_x_imguiFont_ImFontAtlas_GetCustomRectByIndex);
		tolua_function(tolua_S, "isBuilt", lua_x_imguiFont_ImFontAtlas_IsBuilt);
		tolua_variable(tolua_S, "Flags", lua_x_imguiFont_ImFontAtlas_getFlags, lua_x_imguiFont_ImFontAtlas_setFlags);
		tolua_variable(tolua_S, "TexDesiredWidth", lua_x_imguiFont_ImFontAtlas_getTexDesiredWidth, lua_x_imguiFont_ImFontAtlas_setTexDesiredWidth);
		tolua_variable(tolua_S, "TexGlyphPadding", lua_x_imguiFont_ImFontAtlas_getTexGlyphPadding, lua_x_imguiFont_ImFontAtlas_setTexGlyphPadding);
		tolua_variable(tolua_S, "Locked", lua_x_imguiFont_ImFontAtlas_getLocked, lua_x_imguiFont_ImFontAtlas_setLocked);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(imgui::ImFontAtlas).name();
	g_luaType[typeName] = "imgui.ImFontAtlas";
	g_typeCast["ImFontAtlas"] = "imgui.ImFontAtlas";
	return 1;
}

int lua_x_imguiFont_ImFont_FindGlyph(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont:findGlyph";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		unsigned short arg0;
		ok &= luaval_to_ushort(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, cobj->FindGlyph(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFont_FindGlyphNoFallback(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont:findGlyphNoFallback";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		unsigned short arg0;
		ok &= luaval_to_ushort(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, cobj->FindGlyphNoFallback(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFont_GetCharAdvance(lua_State* tolua_S)
{
	bool ok = true;
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont:getCharAdvance";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 1) {
		unsigned short arg0;
		ok &= luaval_to_ushort(tolua_S, 2, &arg0, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		native_to_luaval(tolua_S, cobj->GetCharAdvance(arg0));
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFont_GetDebugName(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont:getDebugName";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->GetDebugName());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiFont_ImFont_IsLoaded(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont:isLoaded";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, nullptr);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (argc == 0) {
		native_to_luaval(tolua_S, cobj->IsLoaded());
		return 1;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "0");
}
int lua_x_imguiFont_ImFont_getFallbackAdvanceX(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.FallbackAdvanceX getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->FallbackAdvanceX);
	return 1;
}
int lua_x_imguiFont_ImFont_setFallbackAdvanceX(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.FallbackAdvanceX setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->FallbackAdvanceX, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFont_getFontSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.FontSize getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->FontSize);
	return 1;
}
int lua_x_imguiFont_ImFont_setFontSize(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.FontSize setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->FontSize, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFont_getFallbackGlyph(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.FallbackGlyph getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->FallbackGlyph);
	return 1;
}
int lua_x_imguiFont_ImFont_setFallbackGlyph(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.FallbackGlyph setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->FallbackGlyph, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFont_getContainerAtlas(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.ContainerAtlas getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ContainerAtlas);
	return 1;
}
int lua_x_imguiFont_ImFont_setContainerAtlas(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.ContainerAtlas setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ContainerAtlas, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFont_getConfigData(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.ConfigData getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ConfigData);
	return 1;
}
int lua_x_imguiFont_ImFont_setConfigData(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.ConfigData setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ConfigData, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFont_getConfigDataCount(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.ConfigDataCount getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->ConfigDataCount);
	return 1;
}
int lua_x_imguiFont_ImFont_setConfigDataCount(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.ConfigDataCount setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->ConfigDataCount, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFont_getFallbackChar(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.FallbackChar getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->FallbackChar);
	return 1;
}
int lua_x_imguiFont_ImFont_setFallbackChar(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.FallbackChar setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->FallbackChar, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFont_getEllipsisChar(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.EllipsisChar getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->EllipsisChar);
	return 1;
}
int lua_x_imguiFont_ImFont_setEllipsisChar(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.EllipsisChar setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->EllipsisChar, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFont_getDotChar(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.DotChar getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->DotChar);
	return 1;
}
int lua_x_imguiFont_ImFont_setDotChar(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.DotChar setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->DotChar, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFont_getDirtyLookupTables(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.DirtyLookupTables getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->DirtyLookupTables);
	return 1;
}
int lua_x_imguiFont_ImFont_setDirtyLookupTables(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.DirtyLookupTables setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->DirtyLookupTables, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFont_getScale(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.Scale getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Scale);
	return 1;
}
int lua_x_imguiFont_ImFont_setScale(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.Scale setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Scale, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFont_getAscent(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.Ascent getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Ascent);
	return 1;
}
int lua_x_imguiFont_ImFont_setAscent(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.Ascent setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Ascent, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFont_getDescent(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.Descent getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->Descent);
	return 1;
}
int lua_x_imguiFont_ImFont_setDescent(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.Descent setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->Descent, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
int lua_x_imguiFont_ImFont_getMetricsTotalSurface(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.MetricsTotalSurface getter";
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	native_to_luaval(tolua_S, cobj->MetricsTotalSurface);
	return 1;
}
int lua_x_imguiFont_ImFont_setMetricsTotalSurface(lua_State* tolua_S)
{
	constexpr auto LUA_OBJ_TYPE = "imgui.ImFont";
	constexpr auto LUA_FNAME = "imgui.ImFont.MetricsTotalSurface setter";
	bool ok = true;
	LUA_CHECK_COBJ_TYPE(tolua_S, LUA_OBJ_TYPE, LUA_FNAME);
	auto cobj = (imgui::ImFont*)tolua_tousertype(tolua_S, 1, 0);
	LUA_CHECK_COBJ(tolua_S, cobj, LUA_FNAME);
	const int argc = lua_gettop(tolua_S) - 1;
	if (1 == argc) {
		ok &= luaval_to_native(tolua_S, 2, &cobj->MetricsTotalSurface, LUA_FNAME);
		LUA_CHECK_PARAMETER(tolua_S, ok, LUA_FNAME);
		return 0;
	}
	LUA_PARAMETER_ERROR(tolua_S, LUA_FNAME, argc, "1");
}
static int lua_x_imguiFont_ImFont_finalize(lua_State* tolua_S)
{
	return 0;
}

int lua_register_x_imguiFont_ImFont(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "imgui.ImFont");
	tolua_cclass(tolua_S, "ImFont", "imgui.ImFont", "", nullptr);

	tolua_beginmodule(tolua_S, "ImFont");
		tolua_function(tolua_S, "findGlyph", lua_x_imguiFont_ImFont_FindGlyph);
		tolua_function(tolua_S, "findGlyphNoFallback", lua_x_imguiFont_ImFont_FindGlyphNoFallback);
		tolua_function(tolua_S, "getCharAdvance", lua_x_imguiFont_ImFont_GetCharAdvance);
		tolua_function(tolua_S, "getDebugName", lua_x_imguiFont_ImFont_GetDebugName);
		tolua_function(tolua_S, "isLoaded", lua_x_imguiFont_ImFont_IsLoaded);
		tolua_variable(tolua_S, "FallbackAdvanceX", lua_x_imguiFont_ImFont_getFallbackAdvanceX, lua_x_imguiFont_ImFont_setFallbackAdvanceX);
		tolua_variable(tolua_S, "FontSize", lua_x_imguiFont_ImFont_getFontSize, lua_x_imguiFont_ImFont_setFontSize);
		tolua_variable(tolua_S, "FallbackGlyph", lua_x_imguiFont_ImFont_getFallbackGlyph, lua_x_imguiFont_ImFont_setFallbackGlyph);
		tolua_variable(tolua_S, "ContainerAtlas", lua_x_imguiFont_ImFont_getContainerAtlas, lua_x_imguiFont_ImFont_setContainerAtlas);
		tolua_variable(tolua_S, "ConfigData", lua_x_imguiFont_ImFont_getConfigData, lua_x_imguiFont_ImFont_setConfigData);
		tolua_variable(tolua_S, "ConfigDataCount", lua_x_imguiFont_ImFont_getConfigDataCount, lua_x_imguiFont_ImFont_setConfigDataCount);
		tolua_variable(tolua_S, "FallbackChar", lua_x_imguiFont_ImFont_getFallbackChar, lua_x_imguiFont_ImFont_setFallbackChar);
		tolua_variable(tolua_S, "EllipsisChar", lua_x_imguiFont_ImFont_getEllipsisChar, lua_x_imguiFont_ImFont_setEllipsisChar);
		tolua_variable(tolua_S, "DotChar", lua_x_imguiFont_ImFont_getDotChar, lua_x_imguiFont_ImFont_setDotChar);
		tolua_variable(tolua_S, "DirtyLookupTables", lua_x_imguiFont_ImFont_getDirtyLookupTables, lua_x_imguiFont_ImFont_setDirtyLookupTables);
		tolua_variable(tolua_S, "Scale", lua_x_imguiFont_ImFont_getScale, lua_x_imguiFont_ImFont_setScale);
		tolua_variable(tolua_S, "Ascent", lua_x_imguiFont_ImFont_getAscent, lua_x_imguiFont_ImFont_setAscent);
		tolua_variable(tolua_S, "Descent", lua_x_imguiFont_ImFont_getDescent, lua_x_imguiFont_ImFont_setDescent);
		tolua_variable(tolua_S, "MetricsTotalSurface", lua_x_imguiFont_ImFont_getMetricsTotalSurface, lua_x_imguiFont_ImFont_setMetricsTotalSurface);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(imgui::ImFont).name();
	g_luaType[typeName] = "imgui.ImFont";
	g_typeCast["ImFont"] = "imgui.ImFont";
	return 1;
}

int register_all_x_imguiFont(lua_State* tolua_S)
{
	tolua_open(tolua_S);

	tolua_module(tolua_S, "imgui", 0);
	tolua_beginmodule(tolua_S, "imgui");

	lua_register_x_imguiFont_ImFontConfig(tolua_S);
	lua_register_x_imguiFont_ImFontGlyph(tolua_S);
	lua_register_x_imguiFont_ImFontAtlasCustomRect(tolua_S);
	lua_register_x_imguiFont_ImFontAtlas(tolua_S);
	lua_register_x_imguiFont_ImFont(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

