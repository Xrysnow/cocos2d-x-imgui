#include "imgui_lua.hpp"
#include "../imgui/misc/cpp/imgui_stdlib.h"
#include "scripting/lua-bindings/manual/CCLuaEngine.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"
#include "lua_imgui_auto.hpp"
#include "lua_imguiStyle_auto.hpp"
#include "lua_imguiIO_auto.hpp"
#include "lua_imguiFont_auto.hpp"
#include "lua_imguiViewport_auto.hpp"
#include "lua_imguiDrawList_auto.hpp"
#include "lua_ImGuiColorTextEdit_auto.hpp"
#include "lua_implot_auto.hpp"
#include "../CCIMGUI.h"
#include "../CCImGuiLayer.h"

#pragma warning (disable: 4244)

#ifndef COCOS2D_DEBUG
#define COCOS2D_DEBUG 0
#endif

#define lua_opt_value(_N, _IDX, _F, _DEF) _N >= _IDX ? _F(L, _IDX) : _DEF
#define lua_opt_number(_N, _IDX, _DEF) lua_opt_value(_N, _IDX, luaL_checknumber, _DEF)
#define lua_opt_int(_N, _IDX, _DEF) (int)(lua_opt_value(_N, _IDX, luaL_checkinteger, _DEF))
#define lua_opt_u32(_N, _IDX, _DEF) lua_opt_value(_N, _IDX, luaL_checknumber, _DEF)
#define lua_opt_string(_N, _IDX, _DEF) lua_opt_value(_N, _IDX, luaL_checkstring, _DEF)
#define lua_opt_bool(_N, _IDX, _DEF) lua_opt_value(_N, _IDX, lua_toboolean, _DEF)
#define lua_opt_imv2(_N, _IDX, _DEF) lua_opt_value(_N, _IDX, _luaval_to_imvec2, _DEF)
#define lua_opt_imv4(_N, _IDX, _DEF) lua_opt_value(_N, _IDX, _luaval_to_imvec4, _DEF)
#define lua_opt_impoint(_N, _IDX, _DEF) lua_opt_value(_N, _IDX, _luaval_to_implotPoint, _DEF)
#define lua_opt_imrange(_N, _IDX, _DEF) lua_opt_value(_N, _IDX, _luaval_to_implotRange, _DEF)
#define lua_opt_imrect(_N, _IDX, _DEF) lua_opt_value(_N, _IDX, _luaval_to_implotRect, _DEF)
#define lua_opt_string_null(_N, _IDX, _DEF) (_N >= _IDX) ? ( lua_isnil(L, _IDX) ? nullptr : luaL_checkstring(L, _IDX) ) : _DEF
#define lua_param_error(_i) luaL_error(L, "invalid parameter #%d: %s", (_i), luaL_typename(L, (_i)))
#define lua_checknative(_L, _N, _V)\
	if(!luaval_to_native(_L, (_N), (_V)))\
		return luaL_error(L, "invalid parameter #%d: %s", (_N), luaL_typename(_L, (_N)));

using imlua::luaval_to_native;
using imlua::native_to_luaval;
using imlua::LUA_TCDATA;

ImVec2 _luaval_to_imvec2(lua_State *L, int lo)
{
	cocos2d::Vec2 v;
	ImVec2 vec;
	luaval_to_vec2(L, lo, &v);
	vec.x = v.x;
	vec.y = v.y;
	return vec;
}
ImVec4 _luaval_to_imvec4(lua_State *L, int lo)
{
	cocos2d::Vec4 v;
	ImVec4 vec;
	luaval_to_vec4(L, lo, &v);
	vec.x = v.x;
	vec.y = v.y;
	vec.z = v.z;
	vec.w = v.w;
	return vec;
}
ImPlotPoint _luaval_to_implotPoint(lua_State* L, int lo)
{
	ImPlotPoint v;
	luaval_to_ImPlotPoint(L, lo, &v);
	return v;
}
ImPlotRange _luaval_to_implotRange(lua_State* L, int lo)
{
	ImPlotRange v;
	luaval_to_ImPlotRange(L, lo, &v);
	return v;
}
ImPlotRect _luaval_to_implotRect(lua_State* L, int lo)
{
	ImPlotRect v;
	luaval_to_ImPlotRect(L, lo, &v);
	return v;
}
ImU32 lua_tou32(lua_State *L, int lo)
{
	return (ImU32)luaL_checknumber(L, lo);
}

bool luaval_to_ImVec2(lua_State* L, int lo, ImVec2* out, const char* name)
{
	if (!out)
		return false;
	cocos2d::Vec2 v;
	if (!luaval_to_vec2(L, lo, &v))
		return false;
	out->x = v.x;
	out->y = v.y;
	return true;
}
bool luaval_to_ImVec4(lua_State* L, int lo, ImVec4* out, const char* name)
{
	if (!out)
		return false;
	cocos2d::Vec4 v;
	if (!luaval_to_vec4(L, lo, &v))
		return false;
	out->x = v.x;
	out->y = v.y;
	out->z = v.z;
	out->w = v.w;
	return true;
}
bool luaval_to_ImPlotPoint(lua_State* L, int lo, ImPlotPoint* out, const char* name)
{
	if (!L || !out)
		return false;
	bool ok = true;
	tolua_Error tolua_err;
	if (!tolua_istable(L, lo, 0, &tolua_err))
	{
#if COCOS2D_DEBUG >=1
		luaval_to_native_err(L, "#ferror:", &tolua_err, name);
#endif
		ok = false;
	}
	if (ok)
	{
		lua_pushstring(L, "x");
		lua_gettable(L, lo);
		out->x = lua_isnil(L, -1) ? 0.0 : lua_tonumber(L, -1);
		lua_pop(L, 1);

		lua_pushstring(L, "y");
		lua_gettable(L, lo);
		out->y = lua_isnil(L, -1) ? 0.0 : lua_tonumber(L, -1);
		lua_pop(L, 1);
	}
	return ok;
}
bool luaval_to_ImPlotRange(lua_State* L, int lo, ImPlotRange* out, const char* name)
{
	if (!L || !out)
		return false;
	bool ok = true;
	tolua_Error tolua_err;
	if (!tolua_istable(L, lo, 0, &tolua_err))
	{
#if COCOS2D_DEBUG >=1
		luaval_to_native_err(L, "#ferror:", &tolua_err, name);
#endif
		ok = false;
	}
	if (ok)
	{
		lua_pushstring(L, "min");
		lua_gettable(L, lo);
		out->Min = lua_isnil(L, -1) ? 0.0 : lua_tonumber(L, -1);
		lua_pop(L, 1);

		lua_pushstring(L, "max");
		lua_gettable(L, lo);
		out->Max = lua_isnil(L, -1) ? 0.0 : lua_tonumber(L, -1);
		lua_pop(L, 1);
	}
	return ok;
}
bool luaval_to_ImPlotRect(lua_State* L, int lo, ImPlotRect* out, const char* name)
{
	if (!L || !out)
		return false;
	bool ok = true;
	tolua_Error tolua_err;
	if (!tolua_istable(L, lo, 0, &tolua_err))
	{
#if COCOS2D_DEBUG >=1
		luaval_to_native_err(L, "#ferror:", &tolua_err, name);
#endif
		ok = false;
	}
	if (ok)
	{
		lua_pushstring(L, "x");
		lua_gettable(L, lo);
		ok &= luaval_to_ImPlotRange(L, lua_gettop(L), &out->X, name);
		lua_pop(L, 1);
		if (!ok)
			return false;
		lua_pushstring(L, "y");
		lua_gettable(L, lo);
		ok &= luaval_to_ImPlotRange(L, lua_gettop(L), &out->Y, name);
		lua_pop(L, 1);
	}
	return ok;
}

void ImVec2_to_luaval(lua_State* L, const ImVec2& val)
{
	cocos2d::Vec2 v;
	v.x = val.x;
	v.y = val.y;
	vec2_to_luaval(L, v);
}
void ImVec4_to_luaval(lua_State* L, const ImVec4& val)
{
	cocos2d::Vec4 v;
	v.x = val.x;
	v.y = val.y;
	v.z = val.z;
	v.w = val.w;
	vec4_to_luaval(L, v);
}
void ImPlotPoint_to_luaval(lua_State* L, const ImPlotPoint& val)
{
	if (!L)
		return;
	lua_newtable(L);
	lua_pushstring(L, "x");
	lua_pushnumber(L, (lua_Number)val.x);
	lua_rawset(L, -3);
	lua_pushstring(L, "y");
	lua_pushnumber(L, (lua_Number)val.y);
	lua_rawset(L, -3);
}
void ImPlotRange_to_luaval(lua_State* L, const ImPlotRange& val)
{
	if (!L)
		return;
	lua_newtable(L);
	lua_pushstring(L, "min");
	lua_pushnumber(L, (lua_Number)val.Min);
	lua_rawset(L, -3);
	lua_pushstring(L, "max");
	lua_pushnumber(L, (lua_Number)val.Max);
	lua_rawset(L, -3);
}
void ImPlotRect_to_luaval(lua_State* L, const ImPlotRect& val)
{
	if (!L)
		return;
	lua_newtable(L);
	lua_pushstring(L, "x");
	ImPlotRange_to_luaval(L, val.X);
	lua_rawset(L, -3);
	lua_pushstring(L, "y");
	ImPlotRange_to_luaval(L, val.Y);
	lua_rawset(L, -3);
}

ImFontConfig lua_toImFontConfig(lua_State* L, int lo)
{
#define get_field(_K, _F)\
	lua_getfield(L, lo, #_K);\
	if(!lua_isnil(L, -1)) {\
		(&ret)->_K = _F(L, -1); }\
	lua_pop(L, 1);

	ImFontConfig ret;
	if (lua_istable(L, lo))
	{
		get_field(FontDataSize, luaL_checkinteger);
		get_field(FontDataOwnedByAtlas, lua_toboolean);
		get_field(FontNo, luaL_checkinteger);
		get_field(SizePixels, luaL_checknumber);
		get_field(OversampleH, luaL_checkinteger);
		get_field(OversampleV, luaL_checkinteger);
		get_field(PixelSnapH, lua_toboolean);
		get_field(GlyphExtraSpacing, _luaval_to_imvec2);
		get_field(GlyphOffset, _luaval_to_imvec2);
		get_field(GlyphMinAdvanceX, luaL_checknumber);
		get_field(GlyphMaxAdvanceX, luaL_checknumber);
		get_field(MergeMode, lua_toboolean);
		get_field(FontBuilderFlags, luaL_checkinteger);
		get_field(RasterizerMultiply, luaL_checknumber);
	}
#undef get_field
	return ret;
}

// Main

static int imgui_showStyleEditor(lua_State *L) {
	ImGui::ShowStyleEditor();
    return 0;
}

// Demo, Debug, Information

#define SHOW_WINDOW(_F) if (lua_gettop(L) == 0){\
	_F(); return 0; }\
bool open = lua_toboolean(L, 1);\
_F(&open);\
lua_pushboolean(L, open); return 1;

static int imgui_showDemoWindow(lua_State *L) {
	SHOW_WINDOW(ImGui::ShowDemoWindow);
}
static int imgui_showAboutWindow(lua_State *L) {
	SHOW_WINDOW(ImGui::ShowAboutWindow);
}
static int imgui_showMetricsWindow(lua_State *L) {
	SHOW_WINDOW(ImGui::ShowMetricsWindow);
}

// Styles

static int imgui_styleColorsDark(lua_State *L) {
	ImGui::StyleColorsDark();
	return 0;
}
static int imgui_styleColorsClassic(lua_State *L) {
	ImGui::StyleColorsClassic();
	return 0;
}
static int imgui_styleColorsLight(lua_State *L) {
	ImGui::StyleColorsLight();
	return 0;
}

// Windows

static int imgui_begin(lua_State *L) {
	const int args = lua_gettop(L);
	bool* p_open = nullptr;
	bool open;
	if (args >= 2)
	{
		// nil for nullptr
		if (!lua_isnil(L, 2))
		{
			open = lua_toboolean(L, 2);
			p_open = &open;
		}
	}
	lua_pushboolean(L,
		ImGui::Begin(luaL_checkstring(L, 1), p_open, lua_opt_int(args, 3, 0)));
	if(p_open)
	{
		lua_pushboolean(L, *p_open);
		return 2;
	}
	return 1;
}
static int imgui_end(lua_State *L) {
    ImGui::End();
    return 0;
}

// Child Windows

static int imgui_beginChild(lua_State *L) {
	const int args = lua_gettop(L);
	ImVec2 size = ImVec2(0, 0);
	bool border = false;
	ImGuiWindowFlags flags = 0;
	if (args > 1)
		size = _luaval_to_imvec2(L, 2);
	if (args > 2)
		border = lua_toboolean(L, 3);
	if (args > 3)
		flags = luaL_checkinteger(L, 4);

	switch (lua_type(L, 1)) {
        case LUA_TSTRING:
			lua_pushboolean(L, ImGui::BeginChild(luaL_checkstring(L, 1), size, border, flags));
			return 1;
        case LUA_TNUMBER:
			lua_pushboolean(L, ImGui::BeginChild(luaL_checkinteger(L, 1), size, border, flags));
			return 1;
        default: ;
    }
    return 0;
}
static int imgui_endChild(lua_State *L) {
    ImGui::EndChild();
    return 0;
}

// Parameters stacks (shared)

static int imgui_pushFont(lua_State *L) {
	ImFont* font = nullptr;
	if (lua_gettop(L) >= 1)
		luaval_to_object(L, 1, "imgui.ImFont", &font);
	ImGui::PushFont(font);
	return 0;
}
static int imgui_getFont(lua_State *L) {
	object_to_luaval(L, "imgui.ImFont", ImGui::GetFont());
	return 1;
}
static int imgui_pushStyleColor(lua_State *L) {
	const auto idx = luaL_checkinteger(L, 1);
	switch (lua_type(L, 2))
	{
	case LUA_TNUMBER:
		ImGui::PushStyleColor(idx, lua_tou32(L, 2));
		break;
	case LUA_TTABLE:
		ImGui::PushStyleColor(idx, _luaval_to_imvec4(L, 2));
		break;
	default:
		break;
	}
	return 0;
}
static int imgui_pushStyleVar(lua_State *L) {
	const auto idx = luaL_checkinteger(L, 1);
	if (idx < ImGuiStyleVar_Alpha || idx >= ImGuiStyleVar_COUNT)
		return luaL_error(L, "invalid parameter #1");
	auto is_number = true;
	switch (idx)
	{
	//case ImGuiStyleVar_Alpha:					// float 
	case ImGuiStyleVar_WindowPadding:			// ImVec2
	//case ImGuiStyleVar_WindowRounding:		// float 
	//case ImGuiStyleVar_WindowBorderSize:		// float 
	case ImGuiStyleVar_WindowMinSize:			// ImVec2
	case ImGuiStyleVar_WindowTitleAlign:		// ImVec2
	//case ImGuiStyleVar_ChildRounding:			// float 
	//case ImGuiStyleVar_ChildBorderSize:		// float 
	//case ImGuiStyleVar_PopupRounding:			// float 
	//case ImGuiStyleVar_PopupBorderSize:		// float 
	case ImGuiStyleVar_FramePadding:			// ImVec2
	//case ImGuiStyleVar_FrameRounding:			// float 
	//case ImGuiStyleVar_FrameBorderSize:		// float 
	case ImGuiStyleVar_ItemSpacing:				// ImVec2
	case ImGuiStyleVar_ItemInnerSpacing:		// ImVec2
	//case ImGuiStyleVar_IndentSpacing:			// float
	case ImGuiStyleVar_CellPadding:             // ImVec2
	//case ImGuiStyleVar_ScrollbarSize:			// float 
	//case ImGuiStyleVar_ScrollbarRounding:		// float 
	//case ImGuiStyleVar_GrabMinSize:			// float 
	//case ImGuiStyleVar_GrabRounding:			// float 
	//case ImGuiStyleVar_TabRounding:			// float 
	case ImGuiStyleVar_ButtonTextAlign:			// ImVec2
	case ImGuiStyleVar_SelectableTextAlign:		// ImVec2
		is_number = false;
		break;
	default: ;
	}
	switch (lua_type(L, 2))
	{
	case LUA_TNUMBER:
		if(!is_number)
			return luaL_error(L, "invalid parameter #1");
		ImGui::PushStyleVar(idx, luaL_checknumber(L, 2));
		break;
	case LUA_TTABLE:
		if (is_number)
			return luaL_error(L, "invalid parameter #1");
		ImGui::PushStyleVar(idx, _luaval_to_imvec2(L, 2));
		break;
	default:
		break;
	}
	return 0;
}

// Widgets

static int imgui_image(lua_State *L) {
	const int args = lua_gettop(L);
	cocos2d::Texture2D* tex = nullptr;
	if (luaval_to_object(L, 1, "cc.Texture2D", &tex))
	{
		if (!tex)
			return 0;
		CCIMGUI::getInstance()->image(tex,
			lua_opt_imv2(args, 2, ImVec2(0, 0)),
			lua_opt_imv2(args, 3, ImVec2(0, 0)),
			lua_opt_imv2(args, 4, ImVec2(1, 1)),
			lua_opt_imv4(args, 5, ImVec4(1, 1, 1, 1)),
			lua_opt_imv4(args, 6, ImVec4(0, 0, 0, 0)));
		return 0;
	}
	cocos2d::Sprite* sp = nullptr;
	if (luaval_to_object(L, 1, "cc.Sprite", &sp))
	{
		if (!sp)
			return 0;
		CCIMGUI::getInstance()->image(sp,
			lua_opt_imv2(args, 2, ImVec2(0, 0)),
			lua_opt_imv4(args, 3, ImVec4(1, 1, 1, 1)),
			lua_opt_imv4(args, 4, ImVec4(0, 0, 0, 0)));
		return 0;
	}
    return 0;
}
static int imgui_imageButton(lua_State *L) {
	// retrun 0 to hint an error
	const int args = lua_gettop(L);
	cocos2d::Texture2D* tex = nullptr;
	if (luaval_to_object(L, 1, "cc.Texture2D", &tex))
	{
		if (!tex)
			return 0;
		lua_pushboolean(L,
			CCIMGUI::getInstance()->imageButton(tex,
				lua_opt_imv2(args, 2, ImVec2(0, 0)),
				lua_opt_imv2(args, 3, ImVec2(0, 0)),
				lua_opt_imv2(args, 4, ImVec2(1, 1)),
				lua_opt_int(args, 5, -1),
				lua_opt_imv4(args, 6, ImVec4(0, 0, 0, 0)),
				lua_opt_imv4(args, 7, ImVec4(1, 1, 1, 1)))
		);
		return 1;
	}
	cocos2d::Sprite* sp = nullptr;
	if (luaval_to_object(L, 1, "cc.Sprite", &sp))
	{
		if (!sp)
			return 0;
		lua_pushboolean(L,
			CCIMGUI::getInstance()->imageButton(sp,
				lua_opt_imv2(args, 2, ImVec2(0, 0)),
				lua_opt_int(args, 3, -1),
				lua_opt_imv4(args, 4, ImVec4(0, 0, 0, 0)),
				lua_opt_imv4(args, 5, ImVec4(1, 1, 1, 1))));
		return 1;
	}
	return 0;
}
static int imgui_collapsingHeader(lua_State *L) {
	const int args = lua_gettop(L);
	auto label = luaL_checkstring(L, 1);
	if (args == 1)
	{
		lua_pushboolean(L, ImGui::CollapsingHeader(label));
		return 1;
	}
	bool open;
	switch (lua_type(L, 2))
	{
	case LUA_TBOOLEAN:
		open = lua_toboolean(L, 2);
		lua_pushboolean(L,
			ImGui::CollapsingHeader(label, &open,
				lua_opt_int(args, 3, 0)));
		lua_pushboolean(L, open);
		return 2;
	case LUA_TNUMBER:
		lua_pushboolean(L,
			ImGui::CollapsingHeader(label, luaL_checkinteger(L, 2)));
		return 1;
	default:
		return 0;
	}
}
static int imgui_checkbox(lua_State *L) {
    bool v = lua_toboolean(L, 2);
    lua_pushboolean(L,
		ImGui::Checkbox(luaL_checkstring(L, 1), &v));
    lua_pushboolean(L, v);
    return 2;
}
static int imgui_checkboxFlags(lua_State *L) {
	auto label = luaL_checkstring(L, 1);
	auto flags = lua_tou32(L, 2);
    lua_pushboolean(L,
		ImGui::CheckboxFlags(label, &flags, lua_tou32(L, 3)));
    lua_pushinteger(L, flags);
    return 2;
}
static int imgui_radioButton(lua_State *L) {
	const int args = lua_gettop(L);
    if (args == 2) {
        lua_pushboolean(L,
			ImGui::RadioButton(luaL_checkstring(L, 1), lua_toboolean(L, 2)));
        return 1;
    } else if (args == 3) {
        int v = luaL_checkinteger(L, 2);
        lua_pushboolean(L,
			ImGui::RadioButton(luaL_checkstring(L, 1), &v, luaL_checkinteger(L, 3)));
        lua_pushinteger(L, v);
        return 2;
	}
    return 0;
}
static int imgui_combo(lua_State *L) {
	const int args = lua_gettop(L);
	auto label = luaL_checkstring(L, 1);
    int current_item = luaL_checkinteger(L, 2);
	std::vector<std::string> arr;
	luaval_to_std_vector_string(L, 3, &arr);
	std::vector<const char*> items;
	for (auto&& str : arr)
		items.push_back(str.c_str());
    lua_pushboolean(L,
		ImGui::Combo(label, &current_item, items.data(), items.size(),
			lua_opt_int(args, 4, -1)));
    lua_pushinteger(L, current_item);
    return 2;
}

// Widgets: Drags

static int imgui_dragFloat(lua_State *L) {
	const int args = lua_gettop(L);
	const auto label = luaL_checkstring(L, 1);
	float v = luaL_checknumber(L, 2);
	const float v_speed = lua_opt_number(args, 3, 1.0f);
	float v_min, v_max;
	float* p_min = nullptr;
	float* p_max = nullptr;
	if (!lua_isnoneornil(L, 4))
	{
		v_min = luaL_checknumber(L, 4);
		p_min = &v_min;
	}
	if (!lua_isnoneornil(L, 5))
	{
		v_max = luaL_checknumber(L, 5);
		p_max = &v_max;
	}
	lua_pushboolean(L,
		ImGui::DragScalar(label, ImGuiDataType_Float, &v,
			v_speed, p_min, p_max,
			lua_opt_string_null(args, 6, nullptr),
			lua_opt_int(args, 7, 0)));
	lua_pushnumber(L, v);
	return 2;
}
static int imgui_dragFloatN(lua_State *L) {
	const int args = lua_gettop(L);
	auto label = luaL_checkstring(L, 1);
	std::vector<float> arr;
	luaval_to_std_vector_float(L, 2, &arr);
	const float v_speed = lua_opt_number(args, 3, 1.0f);
	float v_min, v_max;
	float* p_min = nullptr;
	float* p_max = nullptr;
	if (!lua_isnoneornil(L, 4))
	{
		v_min = luaL_checknumber(L, 4);
		p_min = &v_min;
	}
	if (!lua_isnoneornil(L, 5))
	{
		v_max = luaL_checknumber(L, 5);
		p_max = &v_max;
	}
	lua_pushboolean(L,
		ImGui::DragScalarN(label, ImGuiDataType_Float, arr.data(), arr.size(),
			v_speed, p_min, p_max,
			lua_opt_string_null(args, 6, nullptr),
			lua_opt_int(args, 7, 0)));
	ccvector_float_to_luaval(L, arr);
	return 2;
}
static int imgui_dragInt(lua_State *L) {
	const int args = lua_gettop(L);
	auto label = luaL_checkstring(L, 1);
	int32_t v = luaL_checkinteger(L, 2);
	const float v_speed = lua_opt_number(args, 3, 1.0f);
	int32_t v_min, v_max;
	int32_t* p_min = nullptr;
	int32_t* p_max = nullptr;
	if (!lua_isnoneornil(L, 4))
	{
		v_min = luaL_checkinteger(L, 4);
		p_min = &v_min;
	}
	if (!lua_isnoneornil(L, 5))
	{
		v_max = luaL_checkinteger(L, 5);
		p_max = &v_max;
	}
	lua_pushboolean(L,
		ImGui::DragScalar(label, ImGuiDataType_S32, &v,
			v_speed, p_min, p_max,
			lua_opt_string_null(args, 6, nullptr),
			lua_opt_int(args, 7, 0)));
	lua_pushnumber(L, v);
	return 2;
}
static int imgui_dragIntN(lua_State *L) {
	const int args = lua_gettop(L);
	auto label = luaL_checkstring(L, 1);
	std::vector<int> arr;
	luaval_to_std_vector_int(L, 2, &arr);
	const float v_speed = lua_opt_number(args, 3, 1.0f);
	int32_t v_min, v_max;
	int32_t* p_min = nullptr;
	int32_t* p_max = nullptr;
	if (!lua_isnoneornil(L, 4))
	{
		v_min = luaL_checkinteger(L, 4);
		p_min = &v_min;
	}
	if (!lua_isnoneornil(L, 5))
	{
		v_max = luaL_checkinteger(L, 5);
		p_max = &v_max;
	}
	lua_pushboolean(L,
		ImGui::DragScalarN(label, ImGuiDataType_S32, arr.data(), arr.size(),
			v_speed, p_min, p_max,
			lua_opt_string_null(args, 6, nullptr),
			lua_opt_int(args, 7, 0)));
	ccvector_int_to_luaval(L, arr);
	return 2;
}

// Widgets: Sliders

static int imgui_sliderFloat(lua_State *L) {
	const int args = lua_gettop(L);
    float f = luaL_checknumber(L, 2);
	lua_pushboolean(L,
		ImGui::SliderFloat(luaL_checkstring(L, 1),
			&f,
			luaL_checknumber(L, 3),
			luaL_checknumber(L, 4),
			lua_opt_string(args, 5, "%.3f"),
			lua_opt_int(args, 6, 0)));
    lua_pushnumber(L, f);
    return 2;
}
static int imgui_sliderFloatN(lua_State *L) {
	const int args = lua_gettop(L);
	std::vector<float> arr;
	luaval_to_std_vector_float(L, 2, &arr);
    float v_min = luaL_checknumber(L, 3);
    float v_max = luaL_checknumber(L, 4);
    lua_pushboolean(L,
		ImGui::SliderScalarN(luaL_checkstring(L, 1),
			ImGuiDataType_Float, arr.data(), arr.size(),
			&v_min, &v_max,
			lua_opt_string_null(args, 5, nullptr),
			lua_opt_int(args, 6, 0)));
	ccvector_float_to_luaval(L, arr);
	return 2;
}
static int imgui_sliderAngle(lua_State *L) {
	const int args = lua_gettop(L);
    float v_rad = luaL_checknumber(L, 2);
	lua_pushboolean(L,
		ImGui::SliderAngle(luaL_checkstring(L, 1),
			&v_rad,
			lua_opt_number(args, 3, -360.0f),
			lua_opt_number(args, 4, 360.0f),
			lua_opt_string(args, 5, "%.0f deg")));
    lua_pushnumber(L, v_rad);
    return 2;
}
static int imgui_sliderInt(lua_State *L) {
	const int args = lua_gettop(L);
	int v = luaL_checkinteger(L, 2);
	lua_pushboolean(L,
		ImGui::SliderInt(luaL_checkstring(L, 1),
			&v,
			luaL_checkinteger(L, 3),
			luaL_checkinteger(L, 4),
			lua_opt_string(args, 5, "%d")));
    lua_pushinteger(L, v);
    return 2;
}
static int imgui_sliderIntN(lua_State *L) {
	const int args = lua_gettop(L);
	std::vector<int> arr;
	luaval_to_std_vector_int(L, 2, &arr);
    int v_min = luaL_checkinteger(L, 3);
    int v_max = luaL_checkinteger(L, 4);
	lua_pushboolean(L,
		ImGui::SliderScalarN(luaL_checkstring(L, 1),
			ImGuiDataType_S32, arr.data(), arr.size(),
			&v_min, &v_max,
			lua_opt_string_null(args, 5, nullptr)));
	ccvector_int_to_luaval(L, arr);
	return 2;
}
static int imgui_vSliderFloat(lua_State *L) {
	const int args = lua_gettop(L);
    float v = luaL_checknumber(L, 3);
	lua_pushboolean(L,
		ImGui::VSliderFloat(
			luaL_checkstring(L, 1),
			_luaval_to_imvec2(L, 2),
			&v,
			luaL_checknumber(L, 4),
			luaL_checknumber(L, 5),
			lua_opt_string(args, 6, "%.3f"),
			lua_opt_number(args, 7, 1.0f)));
    lua_pushnumber(L, v);
    return 2;
}
static int imgui_vSliderInt(lua_State *L) {
	const int args = lua_gettop(L);
    int v = luaL_checkinteger(L, 3);
	lua_pushboolean(L,
		ImGui::VSliderInt(
			luaL_checkstring(L, 1),
			_luaval_to_imvec2(L, 2),
			&v,
			luaL_checkinteger(L, 4),
			luaL_checkinteger(L, 5),
			lua_opt_string(args, 6, "%d")));
    lua_pushinteger(L, v);
    return 2;
}

// Widgets: Input with Keyboard

static int imgui_inputText(lua_State *L) {
	const int args = lua_gettop(L);
	std::string buf;
	luaval_to_std_string(L, 2, &buf);
    lua_pushboolean(L,
		ImGui::InputText(luaL_checkstring(L, 1), &buf,
			lua_opt_int(args, 3, 0)));
	lua_pushlstring(L, buf.c_str(), buf.size());
    return 2;
}
static int imgui_inputTextMultiline(lua_State *L) {
	const int args = lua_gettop(L);
	std::string buf;
	luaval_to_std_string(L, 2, &buf);
	lua_pushboolean(L,
		ImGui::InputTextMultiline(
			luaL_checkstring(L, 1), &buf,
			lua_opt_imv2(args, 3, ImVec2(0, 0)),
			lua_opt_int(args, 4, 0)));
	lua_pushlstring(L, buf.c_str(), buf.size());
	return 2;
}
static int imgui_inputTextWithHint(lua_State *L) {
	const int args = lua_gettop(L);
	std::string buf;
	luaval_to_std_string(L, 2, &buf);
	lua_pushboolean(L,
		ImGui::InputTextWithHint(
			luaL_checkstring(L, 1), luaL_checkstring(L, 2), &buf,
			lua_opt_int(args, 3, 0)));
	lua_pushlstring(L, buf.c_str(), buf.size());
	return 2;
}
static int imgui_inputFloat(lua_State *L) {
	const int args = lua_gettop(L);
	auto label = luaL_checkstring(L, 1);
    float v = luaL_checknumber(L, 2);
    lua_pushboolean(L,
		ImGui::InputFloat(label, &v,
			lua_opt_number(args, 3, 0.f),
			lua_opt_number(args, 4, 0.f),
			lua_opt_string(args, 5, "%.3f"),
			lua_opt_int(args, 6, 0)));
    lua_pushnumber(L, v);
    return 2;
}
static int imgui_inputFloatN(lua_State *L) {
	const int args = lua_gettop(L);
	const char* label = luaL_checkstring(L, 1);
	std::vector<float> arr;
	luaval_to_std_vector_float(L, 2, &arr);
	float step = lua_opt_number(args, 3, 0.f);
	float step_fast = lua_opt_number(args, 4, 0.f);
    lua_pushboolean(L,
		ImGui::InputScalarN(label,
			ImGuiDataType_Float, arr.data(), arr.size(),
			step > 0.0f ? &step : nullptr,
			step_fast > 0.0f ? &step_fast : nullptr,
			lua_opt_string(args, 5, "%.3f"),
			lua_opt_int(args, 6, 0)));
	ccvector_float_to_luaval(L, arr);
    return 2;
}
static int imgui_inputInt(lua_State *L) {
	const int args = lua_gettop(L);
	const char* label = luaL_checkstring(L, 1);
    int v = luaL_checkinteger(L, 2);
    lua_pushboolean(L,
		ImGui::InputInt(label, &v,
			lua_opt_int(args, 3, 1),
			lua_opt_int(args, 4, 100),
			lua_opt_int(args, 5, 0)));
    lua_pushinteger(L, v);
    return 2;
}
static int imgui_inputIntN(lua_State *L) {
	const int args = lua_gettop(L);
	std::vector<int> arr;
	luaval_to_std_vector_int(L, 2, &arr);
	int step = lua_opt_int(args, 3, 1);
	int step_fast = lua_opt_int(args, 4, 100);
    lua_pushboolean(L,
		ImGui::InputScalarN(luaL_checkstring(L, 1),
			ImGuiDataType_S32, arr.data(), arr.size(),
			step > 0 ? &step : nullptr,
			step_fast > 0 ? &step_fast : nullptr,
			"%d",
			lua_opt_int(args, 5, 0)));
	ccvector_int_to_luaval(L, arr);
    return 2;
}

// Widgets: Color Editor/Picker

static int imgui_colorEdit3(lua_State *L) {
	const int args = lua_gettop(L);
	const char* label = luaL_checkstring(L, 1);
	std::vector<float> arr;
	luaval_to_std_vector_float(L, 2, &arr);
	arr.resize(3);
	lua_pushboolean(L,
		ImGui::ColorEdit3(label, arr.data(), lua_opt_int(args, 3, 0)));
	ccvector_float_to_luaval(L, arr);
	return 2;
}
static int imgui_colorEdit4(lua_State *L) {
	const int args = lua_gettop(L);
	const char* label = luaL_checkstring(L, 1);
	std::vector<float> arr;
	luaval_to_std_vector_float(L, 2, &arr);
	arr.resize(4);
	lua_pushboolean(L,
		ImGui::ColorEdit4(label, arr.data(), lua_opt_int(args, 3, 0)));
	ccvector_float_to_luaval(L, arr);
	return 2;
}
static int imgui_colorPicker3(lua_State *L) {
	const int args = lua_gettop(L);
	const char* label = luaL_checkstring(L, 1);
	std::vector<float> arr;
	luaval_to_std_vector_float(L, 2, &arr);
	arr.resize(3);
	lua_pushboolean(L,
		ImGui::ColorPicker3(label, arr.data(), lua_opt_int(args, 3, 0)));
	ccvector_float_to_luaval(L, arr);
	return 2;
}
static int imgui_colorPicker4(lua_State *L) {
	const int args = lua_gettop(L);
	const char* label = luaL_checkstring(L, 1);
	std::vector<float> arr;
	luaval_to_std_vector_float(L, 2, &arr);
	arr.resize(4);
	std::vector<float> ref;
	const float* pref = nullptr;
	if (args >= 4)
	{
		luaval_to_std_vector_float(L, 4, &ref);
		ref.resize(4);
		pref = ref.data();
	}
	lua_pushboolean(L,
		ImGui::ColorPicker4(label, arr.data(), lua_opt_int(args, 3, 0), pref));
	ccvector_float_to_luaval(L, arr);
	return 2;
}

// Widgets: Selectables

static int imgui_selectable(lua_State *L) {
	const int args = lua_gettop(L);
	const auto label = luaL_checkstring(L, 1);
	lua_pushboolean(L,
		ImGui::Selectable(label,
			lua_opt_bool(args, 2, false),
			lua_opt_int(args, 3, 0),
			lua_opt_imv2(args, 4, ImVec2(0, 0))));
	return 1;
}

// Widgets: List Boxes

static int imgui_listBox(lua_State *L) {
	const int args = lua_gettop(L);
	auto label = luaL_checkstring(L, 1);
	int current_item = luaL_checkinteger(L, 2);
	std::vector<std::string> arr;
	luaval_to_std_vector_string(L, 3, &arr);
	std::vector<const char*> items;
	items.reserve(arr.size());
	for (auto& str : arr)
		items.push_back(str.c_str());
	lua_pushboolean(L,
		ImGui::ListBox(label, &current_item, items.data(), items.size(),
			lua_opt_int(args, 4, -1)));
	lua_pushinteger(L, current_item);
	return 2;
}

// Widgets: Data Plotting

static int imgui_plotLines(lua_State *L) {
	const int args = lua_gettop(L);
	const auto count = lua_opt_int(args, 3, 0);
	std::vector<float> arr;
	luaval_to_std_vector_float(L, 2, &arr);
	ImGui::PlotLines(
		luaL_checkstring(L, 1),
		arr.data(),
		count > 0 ? std::min(count, (int)arr.size()) : (int)arr.size(),
		lua_opt_int(args, 4, 0),
		lua_opt_string_null(args, 5, nullptr),
		lua_opt_number(args, 6, FLT_MAX),
		lua_opt_number(args, 7, FLT_MAX),
		lua_opt_imv2(args, 8, ImVec2(0, 0)),
		lua_opt_int(args, 9, sizeof(float))
	);
	return 0;
}
static int imgui_plotHistogram(lua_State *L) {
	const int args = lua_gettop(L);
	const auto count = lua_opt_int(args, 3, 0);
	std::vector<float> arr;
	luaval_to_std_vector_float(L, 2, &arr);
	ImGui::PlotHistogram(
		luaL_checkstring(L, 1),
		arr.data(),
		count > 0 ? std::min(count, (int)arr.size()) : (int)arr.size(),
		lua_opt_int(args, 4, 0),
		lua_opt_string_null(args, 5, nullptr),
		lua_opt_number(args, 6, FLT_MAX),
		lua_opt_number(args, 7, FLT_MAX),
		lua_opt_imv2(args, 8, ImVec2(0, 0)),
		lua_opt_int(args, 9, sizeof(float))
	);
	return 0;
}

// Widgets: Menus

static int imgui_menuItem(lua_State *L) {
	const int args = lua_gettop(L);
	lua_pushboolean(L,
		ImGui::MenuItem(
			luaL_checkstring(L, 1),
			lua_opt_string_null(args, 2, nullptr),
			lua_opt_bool(args, 3, false),
			lua_opt_bool(args, 4, true)));
    return 1;
}

// Popups, Modals

static int imgui_beginPopupModal(lua_State *L) {
	const int args = lua_gettop(L);
	if (args <= 1)
	{
		lua_pushboolean(L,
			ImGui::BeginPopupModal(
				luaL_checkstring(L, 1)));
		return 1;
	}
	bool open;
	bool* p = nullptr;
	if (!lua_isnil(L, 2))
	{
		open = lua_toboolean(L, 2);
		p = &open;
	}
	lua_pushboolean(L,
		ImGui::BeginPopupModal(luaL_checkstring(L, 1), p, lua_opt_int(args, 3, 0)));
	if (p)
	{
		lua_pushboolean(L, open);
		return 2;
	}
	return 1;
}

// Tab Bars, Tabs

static int imgui_beginTabItem(lua_State *L) {
	const int args = lua_gettop(L);
	if (args <= 1)
	{
		lua_pushboolean(L,
			ImGui::BeginTabItem(
				luaL_checkstring(L, 1)));
		return 1;
	}
	bool open;
	bool* p = nullptr;
	if (!lua_isnil(L, 2))
	{
		open = lua_toboolean(L, 2);
		p = &open;
	}
	lua_pushboolean(L,
		ImGui::BeginTabItem(luaL_checkstring(L, 1), p, lua_opt_int(args, 3, 0)));
	if (p)
	{
		lua_pushboolean(L, open);
		return 2;
	}
	return 1;
}

// Drag and Drop TODO: release lua values in CCImGuiLayer?

static int payload_reg_key = 0;
static int imgui_setDragDropPayload(lua_State *L) {
	const int args = lua_gettop(L);
	auto type_str = luaL_checkstring(L, 1);
	void* p_key = &payload_reg_key;
	lua_pushlightuserdata(L, p_key);
	// ... key
	lua_gettable(L, LUA_REGISTRYINDEX);
	// ... t
	if (lua_type(L, -1) != LUA_TTABLE)
	{
		lua_pop(L, 1);
		lua_newtable(L);
		// ... t
		lua_pushlightuserdata(L, p_key);
		// ... t key
		lua_pushvalue(L, -2);
		// ... t key t
		lua_settable(L, LUA_REGISTRYINDEX);
		// ... t
	}
	// warning: the stored value cannot be released
	lua_pushvalue(L, 1);
	// ... t type
	lua_pushvalue(L, 2);
	// ... t type value
	lua_settable(L, -3);
	// ... t
	lua_pushboolean(L,
		ImGui::SetDragDropPayload(type_str, &p_key, sizeof(p_key), lua_opt_int(args, 3, 0)));
	return 1;
}
static int imgui_acceptDragDropPayload(lua_State *L) {
	const int args = lua_gettop(L);
	auto payload = ImGui::AcceptDragDropPayload(
		luaL_checkstring(L, 1), lua_opt_int(args, 2, 0));
	// note: return false if SetDragDropPayload is not called from lua
	if (!payload || payload->DataSize != sizeof(void*) || *(void**)payload->Data != &payload_reg_key)
	{
		lua_pushboolean(L, false);
		return 1;
	}
	lua_pushboolean(L, true);
	lua_pushlightuserdata(L, &payload_reg_key);
	// ... true key
	lua_gettable(L, LUA_REGISTRYINDEX);
	// ... true t
	if (lua_type(L, -1) != LUA_TTABLE)
	{
		lua_pushboolean(L, false);
		return 1;
	}
	lua_pushvalue(L, 1);
	// ... true t type
	lua_gettable(L, -2);
	// ... true value
	return 2;
}
static int imgui_getDragDropPayload(lua_State *L) {
	auto payload = ImGui::GetDragDropPayload();
	// note: return false if SetDragDropPayload is not called from lua
	if (!payload || payload->DataSize != sizeof(void*) || *(void**)payload->Data != &payload_reg_key)
	{
		lua_pushboolean(L, false);
		return 1;
	}
	lua_pushstring(L, payload->DataType);
	// ... type
	lua_pushboolean(L, true);
	lua_pushlightuserdata(L, &payload_reg_key);
	// ... type true key
	lua_gettable(L, LUA_REGISTRYINDEX);
	// ... type true t
	if (lua_type(L, -1) != LUA_TTABLE)
	{
		lua_pushboolean(L, false);
		return 1;
	}
	lua_pushvalue(L, -3);
	// ... type true t type
	lua_gettable(L, -2);
	// ... type true value
	return 2;
}

// Miscellaneous Utilities

static int imgui_calcListClipping(lua_State *L) {
	int start = 0;
	int end = 0;
	ImGui::CalcListClipping(luaL_checkint(L, 1), luaL_checknumber(L, 2), &start, &end);
	lua_pushinteger(L, start);
	lua_pushinteger(L, end);
	return 2;
}

// Color Utilities

static int imgui_colorConvertRGBtoHSV(lua_State* L) {
	float h = 0, s = 0, v = 0;
	ImGui::ColorConvertRGBtoHSV(
		luaL_checknumber(L, 1),
		luaL_checknumber(L, 2),
		luaL_checknumber(L, 3),
		h, s, v);
	lua_pushinteger(L, h);
	lua_pushinteger(L, s);
	lua_pushinteger(L, v);
	return 3;
}

static int imgui_colorConvertHSVtoRGB(lua_State* L) {
	float r = 0, g = 0, b = 0;
	ImGui::ColorConvertHSVtoRGB(
		luaL_checknumber(L, 1),
		luaL_checknumber(L, 2),
		luaL_checknumber(L, 3),
		r, g, b);
	lua_pushinteger(L, r);
	lua_pushinteger(L, g);
	lua_pushinteger(L, b);
	return 3;
}

// Inputs Utilities

static int imgui_isMousePosValid(lua_State *L) {
	if (lua_gettop(L) == 0)
	{
		lua_pushboolean(L, ImGui::IsMousePosValid());
		return 1;
	}
	auto mouse_pos = _luaval_to_imvec2(L, 1);
	lua_pushboolean(L, ImGui::IsMousePosValid(&mouse_pos));
	ImVec2_to_luaval(L, mouse_pos);
	return 2;
}

// ID scopes

static int imgui_pushID(lua_State *L) {
	const auto type = lua_type(L, 1);
    if (type == LUA_TNUMBER)
	    ImGui::PushID(luaL_checkinteger(L, 1));
    else if (type == LUA_TSTRING)
	{
		size_t size;
		const auto str = luaL_checklstring(L, 1, &size);
		ImGui::PushID(str, str + size);
    }
    return 0;
}

// IO

static int imgui_getIO(lua_State *L) {
	object_to_luaval(L, "imgui.ImGuiIO", &ImGui::GetIO());
	return 1;
}

// Font

enum GlyphRanges
{
	GlyphRangesDefault,                // Basic Latin, Extended Latin
	GlyphRangesKorean,                 // Default + Korean characters
	GlyphRangesJapanese,               // Default + Hiragana, Katakana, Half-Width, Selection of 1946 Ideographs
	GlyphRangesChineseFull,            // Default + Half-Width + Japanese Hiragana/Katakana + full set of about 21000 CJK Unified Ideographs
	GlyphRangesChineseSimplifiedCommon,// Default + Half-Width + Japanese Hiragana/Katakana + set of 2500 CJK Unified Ideographs for common simplified Chinese
	GlyphRangesCyrillic,               // Default + about 400 Cyrillic characters
	GlyphRangesThai,                   // Default + Thai characters
	GlyphRangesVietnamese,             // Default + Vietname characters
};
static const ImWchar* luaval_to_GlyphRanges(lua_State* L, int lo, const std::string& storeKey)
{
	auto& io = ImGui::GetIO();
	std::vector<unsigned short> arr;
	auto ranges = io.Fonts->GetGlyphRangesChineseFull();
	if (lua_istable(L, lo))
	{
		luaval_to_std_vector_ushort(L, lo, &arr);
		if (arr.size() % 2 == 0)
			arr.push_back(0);
		ranges = CCIMGUI::getInstance()->addGlyphRanges(storeKey, arr);
	}
	else
	{
		switch ((GlyphRanges)luaL_checkinteger(L, lo)) {
		case GlyphRangesDefault: ranges = io.Fonts->GetGlyphRangesDefault(); break;
		case GlyphRangesKorean: ranges = io.Fonts->GetGlyphRangesKorean(); break;
		case GlyphRangesJapanese: ranges = io.Fonts->GetGlyphRangesJapanese(); break;
		case GlyphRangesChineseFull: ranges = io.Fonts->GetGlyphRangesChineseFull(); break;
		case GlyphRangesChineseSimplifiedCommon: ranges = io.Fonts->GetGlyphRangesChineseSimplifiedCommon(); break;
		case GlyphRangesCyrillic: ranges = io.Fonts->GetGlyphRangesCyrillic(); break;
		case GlyphRangesThai: ranges = io.Fonts->GetGlyphRangesThai(); break;
		case GlyphRangesVietnamese: ranges = io.Fonts->GetGlyphRangesVietnamese(); break;
		default:;
		}
	}
	return ranges;
}
static int imgui_addFontTTF(lua_State *L) {
	const auto args = lua_gettop(L);
	std::string path;
	if (!luaval_to_std_string(L, 1, &path))
		return 0;
	const auto size_pixels = luaL_checknumber(L, 2);
	auto data = cocos2d::FileUtils::getInstance()->getDataFromFile(path);
	if (data.getSize() == 0)
		return 0;
	ImFontConfig cfg;
	if (args >= 3)
		cfg = lua_toImFontConfig(L, 3);
	cfg.FontDataOwnedByAtlas = false;
	if (cfg.Name[0] == 0)
	{
		auto name = path + ", " + std::to_string((int)size_pixels);
		if (name.size() > sizeof(cfg.Name))
			name = name.substr(name.size() - sizeof(cfg.Name));
		std::memcpy(cfg.Name, name.c_str(), name.size());
	}

	auto& io = ImGui::GetIO();
	std::vector<unsigned short> arr;
	auto ranges = io.Fonts->GetGlyphRangesChineseFull();
	if (args >= 4)
	{
		ranges = luaval_to_GlyphRanges(L, 4, cfg.Name);
	}
	object_to_luaval(L, "imgui.ImFont",
		io.Fonts->AddFontFromMemoryTTF(data.getBytes(), data.getSize(), size_pixels, &cfg, ranges));
	return 1;
}

// Style

static int imgui_getStyle(lua_State *L) {
	object_to_luaval(L, "imgui.ImGuiStyle", &ImGui::GetStyle());
	return 1;
}

static int imgui_setStyleColor(lua_State *L) {
	const auto idx = luaL_checkinteger(L, 1);
	if (idx < 0 || idx >= ImGuiCol_COUNT)
		return luaL_error(L, "invalid parameter #1");
	ImGui::GetStyle().Colors[idx] = _luaval_to_imvec4(L, 2);
	return 0;
}

// Settings/.Ini Utilities

static int imgui_saveIniSettingsToMemory(lua_State *L) {
	size_t out_ini_size = 0;
	const auto str = ImGui::SaveIniSettingsToMemory(&out_ini_size);
	lua_pushlstring(L, str, out_ini_size);
	return 1;
}

static int imgui_createLayer(lua_State *L) {
	object_to_luaval(L, "cc.Layer", ImGuiLayer::create());
	return 1;
}

static int imgui_shutdown(lua_State *L) {
	CCIMGUI::destroyInstance();
	return 0;
}

// cocos

static int imgui_ccNode(lua_State *L) {
	const int args = lua_gettop(L);
	cocos2d::Node* node = nullptr;
	if (luaval_to_object(L, 1, "cc.Node", &node))
	{
		if (!node)
			return 0;
		CCIMGUI::getInstance()->node(node,
			lua_opt_imv4(args, 2, ImVec4(1, 1, 1, 1)),
			lua_opt_imv4(args, 3, ImVec4(0, 0, 0, 0)));
		return 0;
	}
	return 0;
}
static int imgui_ccNodeButton(lua_State *L) {
	const int args = lua_gettop(L);
	cocos2d::Node* node = nullptr;
	if (luaval_to_object(L, 1, "cc.Node", &node))
	{
		if (!node)
			return 0;
		lua_pushboolean(L,
			CCIMGUI::getInstance()->nodeButton(node,
				lua_opt_int(args, 2, -1),
				lua_opt_imv4(args, 3, ImVec4(0, 0, 0, 0)),
				lua_opt_imv4(args, 4, ImVec4(1, 1, 1, 1)))
		);
		return 1;
	}
	return 0;
}
static int imgui_setCCNodeColor(lua_State *L)
{
	cocos2d::Node* node = nullptr;
	if (luaval_to_object(L, 1, "cc.Node", &node))
	{
		if (!node) return 0;
		const auto type = lua_type(L, 2);
		if (type == LUA_TNUMBER)
		{
			const auto idx = luaL_checkinteger(L, 2);
			if (idx < 0 || idx >= ImGuiCol_COUNT)
				return luaL_error(L, "invalid parameter #2");
			CCIMGUI::setNodeColor(node, idx);
		}
		else if (type == LUA_TTABLE)
		{
			CCIMGUI::setNodeColor(node, _luaval_to_imvec4(L, 2));
		}
	}
	return 0;
}
static int imgui_setCCLabelColor(lua_State *L)
{
	cocos2d::Label* label = nullptr;
	if (luaval_to_object(L, 1, "cc.Label", &label))
	{
		if (!label) return 0;
		const auto type = lua_type(L, 2);
		if (type == LUA_TNUMBER)
		{
			const auto idx = luaL_checkinteger(L, 2);
			if (idx < 0 || idx >= ImGuiCol_COUNT)
				return luaL_error(L, "invalid parameter #2");
			CCIMGUI::setLabelColor(label, (ImGuiCol)idx);
		}
		else if (type == LUA_TTABLE)
			CCIMGUI::setLabelColor(label, _luaval_to_imvec4(L, 2));
		else
			CCIMGUI::setLabelColor(label, lua_toboolean(L, 2) != 0);
	}
	return 0;
}

// markdown

static int imgui_setMarkdownLinkCallback(lua_State* L)
{
	if (lua_isnil(L, 1))
	{
		CCIMGUI::getInstance()->setMarkdownLinkCallback(nullptr);
		return 0;
	}
	luaL_checktype(L, 1, LUA_TFUNCTION);
	lua_pushlightuserdata(L, (void*)imgui_setMarkdownLinkCallback);
	lua_pushvalue(L, 1);
	lua_rawset(L, LUA_REGISTRYINDEX);
	auto f = [=](const std::string& p1, const std::string& p2, bool p3)
	{
		lua_pushlightuserdata(L, (void*)imgui_setMarkdownLinkCallback);
		lua_rawget(L, LUA_REGISTRYINDEX);
		// ... f
		lua_pushlstring(L, p1.c_str(), p1.size());
		lua_pushlstring(L, p2.c_str(), p2.size());
		lua_pushboolean(L, p3);
		// ... f, p1, p2, p3
		lua_call(L, 3, 0);
	};
	CCIMGUI::getInstance()->setMarkdownLinkCallback(f);
	return 0;
}
static int imgui_setMarkdownTooltipCallback(lua_State* L)
{
	if (lua_isnil(L, 1))
	{
		CCIMGUI::getInstance()->setMarkdownTooltipCallback(nullptr);
		return 0;
	}
	luaL_checktype(L, 1, LUA_TFUNCTION);
	lua_pushlightuserdata(L, (void*)imgui_setMarkdownTooltipCallback);
	lua_pushvalue(L, 1);
	lua_rawset(L, LUA_REGISTRYINDEX);
	auto f = [=](const std::string& p1, const std::string& p2, bool p3, const std::string& p4)
	{
		lua_pushlightuserdata(L, (void*)imgui_setMarkdownTooltipCallback);
		lua_rawget(L, LUA_REGISTRYINDEX);
		// ... f
		lua_pushlstring(L, p1.c_str(), p1.size());
		lua_pushlstring(L, p2.c_str(), p2.size());
		lua_pushboolean(L, p3);
		lua_pushlstring(L, p4.c_str(), p4.size());
		// ... f, p1, p2, p3, p4
		lua_call(L, 4, 0);
	};
	CCIMGUI::getInstance()->setMarkdownTooltipCallback(f);
	return 0;
}
static int imgui_setMarkdownImageCallback(lua_State* L)
{
	if (lua_isnil(L, 1))
	{
		CCIMGUI::getInstance()->setMarkdownLinkCallback(nullptr);
		return 0;
	}
	luaL_checktype(L, 1, LUA_TFUNCTION);
	lua_pushlightuserdata(L, (void*)imgui_setMarkdownImageCallback);
	lua_pushvalue(L, 1);
	lua_rawset(L, LUA_REGISTRYINDEX);
	auto f = [=](const std::string& p1, const std::string& p2)
	{
		lua_pushlightuserdata(L, (void*)imgui_setMarkdownImageCallback);
		lua_rawget(L, LUA_REGISTRYINDEX);
		// ... f
		lua_pushlstring(L, p1.c_str(), p1.size());
		lua_pushlstring(L, p2.c_str(), p2.size());
		// ... f, p1, p2
		lua_call(L, 2, 4);
		// ... f, r1, r2, r3, r4
		cocos2d::Sprite* sp = nullptr;
		luaval_to_object(L, -4, "cc.Sprite", &sp);
		ImVec2 size(0, 0);
		luaval_to_ImVec2(L, -3, &size);
		ImVec4 tint_col(1, 1, 1, 1);
		luaval_to_ImVec4(L, -2, &tint_col);
		ImVec4 border_col(0, 0, 0, 0);
		luaval_to_ImVec4(L, -1, &border_col);
		return std::make_tuple(sp, size, tint_col, border_col);
	};
	CCIMGUI::getInstance()->setMarkdownImageCallback(f);
	return 0;
}
static int imgui_setMarkdownFormatCallback(lua_State* L)
{
	if (lua_isnil(L, 1))
	{
		CCIMGUI::getInstance()->setMarkdownFormatCallback(nullptr);
		return 0;
	}
	luaL_checktype(L, 1, LUA_TFUNCTION);
	lua_pushlightuserdata(L, (void*)imgui_setMarkdownFormatCallback);
	lua_pushvalue(L, 1);
	lua_rawset(L, LUA_REGISTRYINDEX);
	auto f = [=](int p1, int32_t p2, bool p3, bool p4)
	{
		lua_pushlightuserdata(L, (void*)imgui_setMarkdownFormatCallback);
		lua_rawget(L, LUA_REGISTRYINDEX);
		// ... f
		lua_pushinteger(L, p1);
		lua_pushinteger(L, p2);
		lua_pushboolean(L, p3);
		lua_pushboolean(L, p4);
		// ... f, p1, p2, p3, p4
		lua_call(L, 4, 0);
	};
	CCIMGUI::getInstance()->setMarkdownFormatCallback(f);
	return 0;
}
static int imgui_setMarkdownFont(lua_State* L)
{
	const int index = luaL_checkinteger(L, 1);
	ImFont* font = nullptr;
	luaval_to_object(L, 2, "imgui.ImFont", &font);
	CCIMGUI::getInstance()->setMarkdownFont(index, font, lua_toboolean(L, 3));
	return 0;
}
static int imgui_setMarkdownLinkIcon(lua_State* L)
{
	size_t size;
	const auto s = luaL_checklstring(L, 1, &size);
	CCIMGUI::getInstance()->setMarkdownLinkIcon(std::string(s, size));
	return 0;
}
static int imgui_markdown(lua_State* L)
{
	size_t size;
	const auto s = luaL_checklstring(L, 1, &size);
	CCIMGUI::getInstance()->markdown(std::string(s, size));
	return 0;
}

#define M(n) {#n, imgui_##n}
static const luaL_Reg imgui_methods[] = {
	// Main
	M(showStyleEditor),

	// Demo, Debug, Information
	M(showDemoWindow), M(showAboutWindow), M(showMetricsWindow),

	// Styles
	M(styleColorsDark), M(styleColorsClassic), M(styleColorsLight),

	// Window
	{"endToLua", imgui_end}, M(begin), M(beginChild), M(endChild),

	// Parameters stacks (shared)
	M(pushFont), M(getFont), M(pushStyleColor), M(pushStyleVar),

	// Widgets
    M(image), M(imageButton), M(collapsingHeader), M(checkbox),
	M(checkboxFlags), M(radioButton), M(combo),

    // Widgets: Drags
    M(dragFloat),M(dragFloatN),M(dragInt),M(dragIntN),

    // Widgets: Sliders
    M(sliderFloat),M(sliderFloatN),M(sliderAngle),M(sliderInt),
    M(sliderIntN),M(vSliderFloat),M(vSliderInt),

    // Widgets: Input with Keyboard
    M(inputText),M(inputTextMultiline),M(inputTextWithHint),M(inputFloat),
    M(inputFloatN),M(inputInt),M(inputIntN),

	// Widgets: Color Editor/Picker
	M(colorEdit3),M(colorEdit4),M(colorPicker3),M(colorPicker4),

	// Widgets: Selectables
	M(selectable),

	// Widgets: List Boxes
	M(listBox),

	// Widgets: Data Plotting
	M(plotLines),M(plotHistogram),

    // Menus
    M(menuItem),

	// Popups, Modals
	M(beginPopupModal),

	// Tab Bars, Tabs
	M(beginTabItem),

	// Drag and Drop
	M(setDragDropPayload),M(acceptDragDropPayload),M(getDragDropPayload),

	// Miscellaneous Utilities
	M(calcListClipping),

	// Color Utilities
	M(colorConvertRGBtoHSV),
	M(colorConvertHSVtoRGB),

	// Inputs Utilities
	M(isMousePosValid),

	// ID
	M(pushID),

	// IO
    M(getIO),

    M(addFontTTF),

	// Style
    M(getStyle), M(setStyleColor),

	// Settings/.Ini Utilities
	M(saveIniSettingsToMemory),

	// launch/shutdown
	M(createLayer),
	M(shutdown),

	// cocos
	M(ccNode), M(ccNodeButton),
	M(setCCNodeColor), M(setCCLabelColor),

	// markdown
	M(setMarkdownLinkCallback),
	M(setMarkdownTooltipCallback),
	M(setMarkdownImageCallback),
	M(setMarkdownFormatCallback),
	M(setMarkdownFont),
	M(setMarkdownLinkIcon),
	M(markdown),

    {NULL,  NULL}
};

// drawlist

static int drawlist_addCCNode(lua_State *L)
{
	auto cobj = (ImDrawList*)tolua_tousertype(L, 1, nullptr);
	if (!cobj) return 0;
	ImTextureID tid;
	ImVec2 pmin, pmax;
	int id;
	cocos2d::Node* node = nullptr;
	if (luaval_to_object(L, 2, "cc.Node", &node))
	{
		if (!node) return 0;
		std::tie(tid, pmin, pmax, id) = CCIMGUI::getInstance()->useNode(node, _luaval_to_imvec2(L, 3));
		if (!tid) return 0;
		cobj->AddImage(
			tid,
			pmin,
			pmax);
		return 0;
	}
	return 0;
}
static int drawlist_addText(lua_State *L)
{
	auto cobj = (ImDrawList*)tolua_tousertype(L, 1, nullptr);
	if (!cobj) return 0;
	const int args = lua_gettop(L);
	if (lua_istable(L, 2))
	{
		std::string s;
		luaval_to_std_string(L, 4, &s);
		cobj->AddText(_luaval_to_imvec2(L, 2), luaL_checknumber(L, 3), s.c_str(), s.c_str() + s.size());
	}
	else
	{
		ImFont* font = nullptr;
		luaval_to_object(L, 2, "imgui.ImFont", &font);
		std::string s;
		luaval_to_std_string(L, 6, &s);
		ImVec4 v;
		ImVec4* p = nullptr;
		if (args >= 8)
		{
			luaval_to_ImVec4(L, 8, &v);
			p = &v;
		}
		cobj->AddText(
			font,
			luaL_checknumber(L, 3),
			_luaval_to_imvec2(L, 4),
			luaL_checknumber(L, 5),
			s.c_str(), s.c_str() + s.size(),
			lua_opt_number(args, 7, 0),
			p);
	}
	return 0;
}
static int drawlist_addImage(lua_State *L)
{
	auto cobj = (ImDrawList*)tolua_tousertype(L, 1, nullptr);
	if (!cobj) return 0;
	const int args = lua_gettop(L);
	ImVec2 uva, uvb;
	ImTextureID tid;
	int id;
	cocos2d::Texture2D* tex = nullptr;
	if (luaval_to_object(L, 2, "cc.Texture2D", &tex))
	{
		if (!tex) return 0;
		std::tie(tid, id) = CCIMGUI::getInstance()->useTexture(tex);
		if (!tid) return 0;
		cobj->AddImage(
			tid,
			_luaval_to_imvec2(L, 3),
			_luaval_to_imvec2(L, 4),
			lua_opt_imv2(args, 5, ImVec2(0, 0)),
			lua_opt_imv2(args, 6, ImVec2(1, 1)),
			lua_opt_u32(args, 7, IM_COL32_WHITE));
		return 0;
	}
	cocos2d::Sprite* sp = nullptr;
	if (luaval_to_object(L, 2, "cc.Sprite", &sp))
	{
		if (!sp) return 0;
		std::tie(tid, uva, uvb, id) = CCIMGUI::getInstance()->useSprite(sp);
		if (!tid) return 0;
		cobj->AddImage(
			tid,
			_luaval_to_imvec2(L, 3),
			_luaval_to_imvec2(L, 4),
			uva,
			uvb,
			lua_opt_u32(args, 5, IM_COL32_WHITE));
		return 0;
	}
	return 0;
}
static int drawlist_addImageQuad(lua_State *L)
{
	auto cobj = (ImDrawList*)tolua_tousertype(L, 1, nullptr);
	if (!cobj) return 0;
	const int args = lua_gettop(L);
	ImVec2 uva, uvc;
	ImTextureID tid;
	int id;
	cocos2d::Texture2D* tex = nullptr;
	if (luaval_to_object(L, 2, "cc.Texture2D", &tex))
	{
		if (!tex) return 0;
		std::tie(tid, id) = CCIMGUI::getInstance()->useTexture(tex);
		if (!tid) return 0;
		cobj->AddImageQuad(
			tid,
			_luaval_to_imvec2(L, 3),
			_luaval_to_imvec2(L, 4),
			_luaval_to_imvec2(L, 5),
			_luaval_to_imvec2(L, 6),
			lua_opt_imv2(args, 7, ImVec2(0, 0)),
			lua_opt_imv2(args, 8, ImVec2(1, 0)),
			lua_opt_imv2(args, 9, ImVec2(1, 1)),
			lua_opt_imv2(args, 10, ImVec2(0, 1)),
			lua_opt_u32(args, 11, IM_COL32_WHITE));
		return 0;
	}
	cocos2d::Sprite* sp = nullptr;
	if (luaval_to_object(L, 2, "cc.Sprite", &sp))
	{
		if (!sp) return 0;
		std::tie(tid, uva, uvc, id) = CCIMGUI::getInstance()->useSprite(sp);
		if (!tid) return 0;
		cobj->AddImageQuad(
			tid,
			_luaval_to_imvec2(L, 3),
			_luaval_to_imvec2(L, 4),
			_luaval_to_imvec2(L, 5),
			_luaval_to_imvec2(L, 6),
			uva,
			ImVec2(uvc.x, uva.y),
			uvc,
			ImVec2(uva.x, uvc.y),
			lua_opt_u32(args, 7, IM_COL32_WHITE));
		return 0;
	}
	return 0;
}
static int drawlist_addImageRounded(lua_State *L)
{
	auto cobj = (ImDrawList*)tolua_tousertype(L, 1, nullptr);
	if (!cobj) return 0;
	const int args = lua_gettop(L);
	ImVec2 uva, uvb;
	ImTextureID tid;
	int id;
	cocos2d::Texture2D* tex = nullptr;
	if (luaval_to_object(L, 2, "cc.Texture2D", &tex))
	{
		if (!tex) return 0;
		std::tie(tid, id) = CCIMGUI::getInstance()->useTexture(tex);
		if (!tid) return 0;
		cobj->AddImageRounded(
			tid,
			_luaval_to_imvec2(L, 3),
			_luaval_to_imvec2(L, 4),
			_luaval_to_imvec2(L, 5),
			_luaval_to_imvec2(L, 6),
			lua_tou32(L, 7),
			luaL_checknumber(L, 8),
			lua_opt_int(args, 9, 0));
		return 0;
	}
	cocos2d::Sprite* sp = nullptr;
	if (luaval_to_object(L, 2, "cc.Sprite", &sp))
	{
		if (!sp) return 0;
		std::tie(tid, uva, uvb, id) = CCIMGUI::getInstance()->useSprite(sp);
		if (!tid) return 0;
		cobj->AddImageRounded(
			tid,
			_luaval_to_imvec2(L, 3),
			_luaval_to_imvec2(L, 4),
			uva,
			uvb,
			lua_tou32(L, 5),
			luaL_checknumber(L, 6),
			lua_opt_int(args, 7, 0));
		return 0;
	}
	return 0;
}
static int drawlist_addPolyline(lua_State *L)
{
	auto cobj = (ImDrawList*)tolua_tousertype(L, 1, nullptr);
	if (!cobj) return 0;
	std::vector<cocos2d::Vec2> arr;
	luaval_to_std_vector_vec2(L, 2, &arr);
	if (arr.empty()) return 0;
	cobj->AddPolyline(
		(ImVec2*)arr.data(),
		arr.size(),
		lua_tou32(L, 3),
		luaL_checkinteger(L, 4),
		luaL_checknumber(L, 5));
	return 0;
}
static int drawlist_addConvexPolyFilled(lua_State *L)
{
	auto cobj = (ImDrawList*)tolua_tousertype(L, 1, nullptr);
	if (!cobj) return 0;
	std::vector<cocos2d::Vec2> arr;
	luaval_to_std_vector_vec2(L, 2, &arr);
	if (arr.empty()) return 0;
	cobj->AddConvexPolyFilled(
		(ImVec2*)arr.data(),
		arr.size(),
		lua_tou32(L, 3));
	return 0;
}

#undef M
#define M(n) {#n, drawlist_##n}
static const luaL_Reg drawlist_methods[] = {
	M(addCCNode),
	M(addText),
	M(addImage),
	M(addImageQuad),
	M(addImageRounded),
	M(addPolyline),
	M(addConvexPolyFilled)
};

// font

static int font_mergeGlyphs(lua_State* L)
{
	auto cobj = (ImFont*)tolua_tousertype(L, 1, nullptr);
	if (!cobj)
		return 0;
	bool ok = true;
	auto argc = lua_gettop(L) - 1;
	if (argc == 3)
	{
		ImFont* arg0;
		ok &= luaval_to_object(L, 2, "imgui.ImFont", &arg0, "imgui.ImFont:mergeGlyphs");
		if (!ok || !arg0)
		{
			tolua_error(L, "invalid arguments in function 'imgui.ImFont:mergeGlyphs'", nullptr);
			return 0;
		}
		CCIMGUI::mergeFontGlyphs(cobj, arg0,
			ImWchar(luaL_checkinteger(L, 3)),
			ImWchar(luaL_checkinteger(L, 4)));
		lua_settop(L, 1);
		return 1;
	}
	luaL_error(L, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImFont:mergeGlyphs", argc, 3);
	return 0;
}

#undef M
#define M(n) {#n, font_##n}
static const luaL_Reg font_methods[] = {
	M(mergeGlyphs)
};

// implot

static int implot_beginSubplots(lua_State* L) {
	const int args = lua_gettop(L);
	lua_pushboolean(L,
		ImPlot::BeginSubplots(
			luaL_checkstring(L, 1),
			luaL_checkint(L, 2),
			luaL_checkint(L, 3),
			_luaval_to_imvec2(L, 4),
			lua_opt_int(args, 5, 0)
		));
	return 1;
}
static int implot_setupAxisTicks(lua_State* L) {
	const int args = lua_gettop(L);
	if (lua_isnumber(L, 2))
	{
		// void SetupAxisTicks(ImAxis axis, double v_min, double v_max, int n_ticks, const char* const labels[]=NULL, bool keep_default=false);
		const char* const* labels = nullptr;
		std::vector<const char*> arr;
		if (args >= 5 && luaval_to_native(L, 5, &arr))
			labels = arr.data();
		ImPlot::SetupAxisTicks(
			luaL_checkint(L, 1),
			luaL_checknumber(L, 2),
			luaL_checknumber(L, 3),
			luaL_checkint(L, 4),
			labels,
			lua_opt_bool(args, 6, false)
		);
	}
	else
	{
		// void SetupAxisTicks(ImAxis axis, const double* values, int n_ticks, const char* const labels[]=NULL, bool keep_default=false);
		const char* const* labels = nullptr;
		std::vector<const char*> arr;
		if (args >= 4 && luaval_to_native(L, 4, &arr))
			labels = arr.data();
		std::vector<double> valuesArr;
		lua_checknative(L, 2, &valuesArr);
		const double* values = nullptr;
		ImPlot::SetupAxisTicks(
			luaL_checkint(L, 1),
			valuesArr.data(),
			luaL_checkint(L, 3),
			labels,
			lua_opt_bool(args, 6, false)
		);
	}
	return 1;
}

#define IMPLOT_COUNT_OFFSET(_i1, _i2, _size)\
	int count = luaL_checkinteger(L, _i1);\
	int offset = lua_opt_int(args, _i2, 0);\
	offset = std::max(0, std::min(offset, (_size)));\
	count = std::max(0, std::min(count, (_size) - offset));
#define LUA_GET_PTR(_name, _i)\
	T* _name = (T*)lua_to_cptr(L, (_i));\
	if (!(_name)) return lua_param_error(_i);
#define DEF_PLOT_T(_name)\
	template<typename T, int Offset = 1>\
	struct _name##T { static int F(lua_State* L); };\
	template<typename T, int Offset>\
	int _name##T<T, Offset>::F(lua_State* L)
#define DEF_PLOT_C(_name)\
	static int _name##C(lua_State* L) { return implotCFunc<_name##T>::F(L); }

static bool lua_type_indexable(int t)
{
	return t == LUA_TTABLE || t == LUA_TUSERDATA;
}

static void lua_push_convert_ptr(lua_State* L)
{
	static const char* convert_ptr_key = "ffi.convert_ptr";
	lua_pushstring(L, convert_ptr_key);
	lua_rawget(L, LUA_REGISTRYINDEX);
	if (lua_type(L, -1) != LUA_TFUNCTION)
	{
		lua_pop(L, 1);
		static const char* convert_ptr = R"__(
local ffi = require('ffi')
local C = ffi.C
local _ptr_size = ffi.sizeof('void*')
local _pptr_t = ffi.typeof('void*[1]')
return function(cdata_ptr, userdata)
    C.memcpy(userdata, _pptr_t(cdata_ptr), _ptr_size)
end
)__";
		if (luaL_dostring(L, convert_ptr) == 0)
		{
			lua_pushvalue(L, -1);
			lua_setfield(L, LUA_REGISTRYINDEX, convert_ptr_key);
		}
		else
		{
			luaL_error(L, "failed to load %s", convert_ptr_key);
		}
	}
}

static void* lua_to_cptr(lua_State* L, int lo)
{
	const auto top = lua_gettop(L);
	if (lo < 0)
		lo = top + 1 + lo;
	if (lo < 1 || lo > top || lua_type(L, lo) != LUA_TCDATA)
		return nullptr;
	lua_push_convert_ptr(L);
	void* ret = nullptr;
	lua_pushvalue(L, lo);
	lua_pushlightuserdata(L, &ret);
	if (lua_pcall(L, 2, 0, 0) == 0)
		return ret;
	return nullptr;
}

template<
	template <typename T, int _Offset = 1> class Fn,
	int TypeIdx = 2, int Offset = 1>
struct implotCFunc
{
	static int F(lua_State* L) {
		// note: ImS64/ImU64 may different from int64_t/uint64_t
		switch ((ImGuiDataType_)luaL_checkinteger(L, TypeIdx))
		{
		case ImGuiDataType_S8: return Fn<ImS8, Offset>::F(L);
		case ImGuiDataType_U8: return Fn<ImU8, Offset>::F(L);
		case ImGuiDataType_S16: return Fn<ImS16, Offset>::F(L);
		case ImGuiDataType_U16: return Fn<ImU16, Offset>::F(L);
		case ImGuiDataType_S32: return Fn<ImS32, Offset>::F(L);
		case ImGuiDataType_U32: return Fn<ImU32, Offset>::F(L);
		case ImGuiDataType_S64: return Fn<ImS64, Offset>::F(L);
		case ImGuiDataType_U64: return Fn<ImU64, Offset>::F(L);
		case ImGuiDataType_Float: return Fn<float, Offset>::F(L);
		case ImGuiDataType_Double: return Fn<double, Offset>::F(L);
		case ImGuiDataType_COUNT: break;
		default:;
		}
		return lua_param_error(TypeIdx);
	}
};

static int implot_plotLine(lua_State* L) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	std::vector<double> v1;
	if (!luaval_to_native(L, 2, &v1))
		return lua_param_error(2);
	const auto type = lua_type(L, 3);
	if (type == LUA_TNUMBER) {
		// values
		IMPLOT_COUNT_OFFSET(3, 7, (int)v1.size());
		if (count > 0)
			ImPlot::PlotLine<double>(label_id, v1.data(), count,
				lua_opt_number(args, 4, 1), // double xscale=1
				lua_opt_number(args, 5, 0), // double xstart=0,
				lua_opt_int(args, 6, 0), // ImPlotLineFlags flags=0,
				offset);
		return 0;
	}
	if (type == LUA_TTABLE) {
		// xs, ys
		std::vector<double> v2;
		if (!luaval_to_native(L, 3, &v2))
			return lua_param_error(3);
		const int size = std::min(v1.size(), v2.size());
		IMPLOT_COUNT_OFFSET(4, 6, size);
		if (count > 0)
			ImPlot::PlotLine<double>(label_id, v1.data(), v2.data(), count,
				lua_opt_int(args, 5, 0), // ImPlotLineFlags flags=0,
				offset);
		return 0;
	}
	return lua_param_error(3);
}
DEF_PLOT_T(implot_plotLine)
{
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	LUA_GET_PTR(v1, 2 + Offset);
	const auto type3 = lua_type(L, 3 + Offset);
	if (type3 == LUA_TNUMBER) {
		const int count = luaL_checkint(L, 3 + Offset);
		if (count > 0)
			ImPlot::PlotLine<T>(label_id, v1, count,
				lua_opt_number(args, 4 + Offset, 1),
				lua_opt_number(args, 5 + Offset, 0),
				lua_opt_int(args, 6 + Offset, 0),
				lua_opt_int(args, 7 + Offset, 0),
				lua_opt_int(args, 8 + Offset, sizeof(T)));
		return 0;
	}
	if (type3 == LUA_TCDATA) {
		LUA_GET_PTR(v2, 3 + Offset);
		const int count = luaL_checkint(L, 4 + Offset);
		if (count > 0)
			ImPlot::PlotLine<T>(label_id, v1, v2, count,
				lua_opt_int(args, 5 + Offset, 0),
				lua_opt_int(args, 6 + Offset, 0),
				lua_opt_int(args, 7 + Offset, sizeof(T)));
		return 0;
	}
	return lua_param_error(3 + Offset);
}
DEF_PLOT_C(implot_plotLine);
static int implot_plotScatter(lua_State* L) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	std::vector<double> v1;
	if (!luaval_to_native(L, 2, &v1))
		return lua_param_error(2);
	const auto type = lua_type(L, 3);
	if (type == LUA_TNUMBER) {
		IMPLOT_COUNT_OFFSET(3, 7, (int)v1.size());
		if (count > 0)
			ImPlot::PlotScatter<double>(label_id, v1.data(), count,
				lua_opt_number(args, 4, 1),
				lua_opt_number(args, 5, 0),
				lua_opt_int(args, 6, 0),
				offset);
		return 0;
	}
	if (type == LUA_TTABLE) {
		std::vector<double> v2;
		if (!luaval_to_native(L, 3, &v2))
			return lua_param_error(3);
		const int size = std::min(v1.size(), v2.size());
		IMPLOT_COUNT_OFFSET(4, 6, size);
		if (count > 0)
			ImPlot::PlotScatter<double>(label_id, v1.data(), v2.data(), count,
				lua_opt_int(args, 5, 0),
				offset);
		return 0;
	}
	return lua_param_error(3);
}
DEF_PLOT_T(implot_plotScatter) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	LUA_GET_PTR(v1, 2 + Offset);
	const auto type3 = lua_type(L, 3 + Offset);
	if (type3 == LUA_TNUMBER) {
		const int count = luaL_checkint(L, 3 + Offset);
		if (count > 0)
			ImPlot::PlotScatter<T>(label_id, v1, count,
				lua_opt_number(args, 4 + Offset, 1),
				lua_opt_number(args, 5 + Offset, 0),
				lua_opt_int(args, 6 + Offset, 0),
				lua_opt_int(args, 7 + Offset, 0),
				lua_opt_int(args, 8 + Offset, sizeof(T)));
		return 0;
	}
	if (type3 == LUA_TCDATA) {
		LUA_GET_PTR(v2, 3 + Offset);
		const int count = luaL_checkint(L, 4 + Offset);
		if (count > 0)
			ImPlot::PlotScatter<T>(label_id, v1, v2, count,
				lua_opt_int(args, 5 + Offset, 0),
				lua_opt_int(args, 6 + Offset, 0),
				lua_opt_int(args, 7 + Offset, sizeof(T)));
		return 0;
	}
	return lua_param_error(3 + Offset);
}
DEF_PLOT_C(implot_plotScatter);
static int implot_plotStairs(lua_State* L) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	std::vector<double> v1;
	if (!luaval_to_native(L, 2, &v1))
		return lua_param_error(2);
	const auto type2 = lua_type(L, 3);
	if (type2 == LUA_TNUMBER) {
		IMPLOT_COUNT_OFFSET(3, 7, (int)v1.size());
		if (count > 0)
			ImPlot::PlotStairs<double>(label_id, v1.data(), count,
				lua_opt_number(args, 4, 1),
				lua_opt_number(args, 5, 0),
				lua_opt_int(args, 6, 0),
				offset);
		return 0;
	}
	if (type2 == LUA_TTABLE) {
		std::vector<double> v2;
		if (!luaval_to_native(L, 3, &v2))
			return lua_param_error(3);
		const int size = std::min(v1.size(), v2.size());
		IMPLOT_COUNT_OFFSET(4, 6, size);
		if (count > 0)
			ImPlot::PlotStairs<double>(label_id, v1.data(), v2.data(), count,
				lua_opt_int(args, 5, 0),
				offset);
		return 0;
	}
	return lua_param_error(3);
}
DEF_PLOT_T(implot_plotStairs) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	LUA_GET_PTR(v1, 2 + Offset);
	const auto type3 = lua_type(L, 3 + Offset);
	if (type3 == LUA_TNUMBER) {
		const int count = luaL_checkint(L, 3 + Offset);
		if (count > 0)
			ImPlot::PlotStairs<T>(label_id, v1, count,
				lua_opt_number(args, 4 + Offset, 1),
				lua_opt_number(args, 5 + Offset, 0),
				lua_opt_int(args, 6 + Offset, 0),
				lua_opt_int(args, 7 + Offset, 0),
				lua_opt_int(args, 8 + Offset, sizeof(T)));
		return 0;
	}
	if (type3 == LUA_TCDATA) {
		LUA_GET_PTR(v2, 3 + Offset);
		const int count = luaL_checkint(L, 4 + Offset);
		if (count > 0)
			ImPlot::PlotStairs<T>(label_id, v1, v2, count,
				lua_opt_int(args, 5 + Offset, 0),
				lua_opt_int(args, 6 + Offset, 0),
				lua_opt_int(args, 7 + Offset, sizeof(T)));
		return 0;
	}
	return lua_param_error(3 + Offset);
}
DEF_PLOT_C(implot_plotStairs);
static int implot_plotShaded(lua_State* L) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	std::vector<double> v1;
	if (!luaval_to_native(L, 2, &v1))
		return lua_param_error(2);
	const auto type3 = lua_type(L, 3);
	if (type3 == LUA_TNUMBER) {
		// values
		const int size = v1.size();
		IMPLOT_COUNT_OFFSET(3, 8, size);
		if (count > 0)
			ImPlot::PlotShaded<double>(label_id, v1.data(), count,
				lua_opt_number(args, 4, 0),
				lua_opt_number(args, 5, 1),
				lua_opt_number(args, 6, 0),
				lua_opt_int(args, 7, 0),
				offset);
		return 0;
	}
	std::vector<double> v2;
	if (!luaval_to_native(L, 3, &v2))
		return lua_param_error(3);
	const auto type4 = lua_type(L, 4);
	if (type4 == LUA_TNUMBER) {
		// xs, ys
		const int size = std::min(v1.size(), v2.size());
		IMPLOT_COUNT_OFFSET(4, 7, size);
		if (count > 0)
			ImPlot::PlotShaded<double>(label_id, v1.data(), v2.data(), count,
				lua_opt_number(args, 5, 0),
				lua_opt_int(args, 6, 0),
				offset);
		return 0;
	}
	if (type4 == LUA_TTABLE) {
		// xs, ys1, ys2
		std::vector<double> v3;
		if (!luaval_to_native(L, 4, &v3))
			return lua_param_error(4);
		const int size = std::min({ v1.size(), v2.size(), v3.size() });
		IMPLOT_COUNT_OFFSET(5, 7, size);
		if (count > 0)
			ImPlot::PlotShaded<double>(label_id,
				v1.data(), v2.data(), v3.data(), count,
				lua_opt_int(args, 6, 0),
				offset);
		return 0;
	}
	return lua_param_error(4);
}
DEF_PLOT_T(implot_plotShaded) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	LUA_GET_PTR(v1, 2 + Offset);
	const auto type3 = lua_type(L, 3 + Offset);
	if (type3 == LUA_TNUMBER) {
		// values
		const int count = luaL_checkint(L, 3 + Offset);
		if (count > 0)
			ImPlot::PlotShaded<T>(label_id, v1, count,
				lua_opt_number(args, 4 + Offset, 0),
				lua_opt_number(args, 5 + Offset, 1),
				lua_opt_number(args, 6 + Offset, 0),
				lua_opt_int(args, 7 + Offset, 0),
				lua_opt_int(args, 8 + Offset, 0),
				lua_opt_int(args, 9 + Offset, sizeof(T)));
		return 0;
	}
	LUA_GET_PTR(v2, 3 + Offset);
	const auto type4 = lua_type(L, 4 + Offset);
	if (type4 == LUA_TNUMBER) {
		// xs, ys
		const int count = luaL_checkint(L, 4 + Offset);
		if (count > 0)
			ImPlot::PlotShaded<T>(label_id, v1, v2, count,
				lua_opt_number(args, 5 + Offset, 0),
				lua_opt_int(args, 6 + Offset, 0),
				lua_opt_int(args, 7 + Offset, 0),
				lua_opt_int(args, 8 + Offset, sizeof(T)));
		return 0;
	}
	if (type4 == LUA_TCDATA) {
		// xs, ys1, ys2
		LUA_GET_PTR(v3, 4 + Offset);
		const int count = luaL_checkint(L, 5 + Offset);
		if (count > 0)
			ImPlot::PlotShaded<T>(label_id, v1, v2, v3, count,
				lua_opt_int(args, 6 + Offset, 0),
				lua_opt_int(args, 7 + Offset, 0),
				lua_opt_int(args, 8 + Offset, sizeof(T)));
		return 0;
	}
	return lua_param_error(4 + Offset);
}
DEF_PLOT_C(implot_plotShaded);
static int implot_plotBars(lua_State* L) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	std::vector<double> v1;
	if (!luaval_to_native(L, 2, &v1))
		return lua_param_error(2);
	const auto type3 = lua_type(L, 3);
	if (type3 == LUA_TNUMBER) {
		// values
		const int size = v1.size();
		IMPLOT_COUNT_OFFSET(3, 7, size);
		if (count > 0)
			ImPlot::PlotBars<double>(label_id, v1.data(), count,
				lua_opt_number(args, 4, 0.67),
				lua_opt_number(args, 5, 0),
				lua_opt_int(args, 6, 0),
				offset);
		return 0;
	}
	if (type3 == LUA_TTABLE) {
		// xs, ys
		std::vector<double> v2;
		if (!luaval_to_native(L, 3, &v2))
			return lua_param_error(3);
		const int size = std::min(v1.size(), v2.size());
		IMPLOT_COUNT_OFFSET(4, 7, size);
		if (count > 0)
			ImPlot::PlotBars<double>(label_id, v1.data(), v2.data(), count,
				luaL_checknumber(L, 5),
				lua_opt_int(args, 6, 0),
				offset);
		return 0;
	}
	return lua_param_error(3);
}
DEF_PLOT_T(implot_plotBars) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	LUA_GET_PTR(v1, 2 + Offset);
	const auto type3 = lua_type(L, 3 + Offset);
	if (type3 == LUA_TNUMBER) {
		// values
		const int count = luaL_checkint(L, 3 + Offset);
		if (count > 0)
			ImPlot::PlotBars<T>(label_id, v1, count,
				lua_opt_number(args, 4 + Offset, 0.67),
				lua_opt_number(args, 5 + Offset, 0),
				lua_opt_int(args, 6 + Offset, 0),
				lua_opt_int(args, 7 + Offset, 0),
				lua_opt_int(args, 8 + Offset, sizeof(T)));
		return 0;
	}
	if (type3 == LUA_TCDATA) {
		// xs, ys
		LUA_GET_PTR(v2, 3 + Offset);
		const int count = luaL_checkint(L, 4 + Offset);
		if (count > 0)
			ImPlot::PlotBars<T>(label_id, v1, v2, count,
				luaL_checknumber(L, 5 + Offset),
				lua_opt_int(args, 6 + Offset, 0),
				lua_opt_int(args, 7 + Offset, 0),
				lua_opt_int(args, 8 + Offset, sizeof(T)));
		return 0;
	}
	return lua_param_error(3 + Offset);
}
DEF_PLOT_C(implot_plotBars);
static int implot_plotBarGroups(lua_State* L) {
	const int args = lua_gettop(L);
	std::vector<const char*> labelsArr;
	lua_checknative(L, 1, &labelsArr);
	std::vector<double> v1;
	if (!luaval_to_native(L, 2, &v1))
		return lua_param_error(2);
	const int size = v1.size();
	const int count = luaL_checkint(L, 3);
	if (count > 0)
		ImPlot::PlotBarGroups<double>(labelsArr.data(), v1.data(),
			std::min(size, count),
			luaL_checkint(L, 4),
			lua_opt_number(args, 5, 0.67),
			lua_opt_number(args, 6, 0),
			lua_opt_int(args, 7, 0));
	return 0;
}
DEF_PLOT_T(implot_plotBarGroups) {
	const int args = lua_gettop(L);
	std::vector<const char*> labelsArr;
	lua_checknative(L, 1, &labelsArr);
	LUA_GET_PTR(v1, 2 + Offset);
	const int count = luaL_checkint(L, 3 + Offset);
	if (count > 0)
		ImPlot::PlotBarGroups<T>(labelsArr.data(), v1,
			count,
			luaL_checkint(L, 4 + Offset),
			lua_opt_number(args, 5 + Offset, 0.67),
			lua_opt_number(args, 6 + Offset, 0),
			lua_opt_int(args, 7 + Offset, 0));
	return 0;
}
DEF_PLOT_C(implot_plotBarGroups);
static int implot_plotErrorBars(lua_State* L) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	std::vector<double> v1;
	if (!luaval_to_native(L, 2, &v1))
		return lua_param_error(2);
	std::vector<double> v2;
	if (!luaval_to_native(L, 3, &v2))
		return lua_param_error(3);
	std::vector<double> v3;
	if (!luaval_to_native(L, 4, &v3))
		return lua_param_error(4);
	const auto type5 = lua_type(L, 5);
	if (type5 == LUA_TNUMBER) {
		// xs, ys, err
		const int size = std::min({ v1.size(), v2.size(), v3.size() });
		IMPLOT_COUNT_OFFSET(5, 7, size);
		if (count > 0)
			ImPlot::PlotErrorBars<double>(label_id, v1.data(), v2.data(), v3.data(), count,
				lua_opt_int(args, 6, 0),
				offset);
		return 0;
	}
	if (type5 == LUA_TTABLE) {
		// xs, ys, neg, pos
		std::vector<double> v4;
		if (!luaval_to_native(L, 5, &v4))
			return lua_param_error(5);
		const int size = std::min({ v1.size(), v2.size(), v3.size(), v4.size() });
		IMPLOT_COUNT_OFFSET(6, 8, size);
		if (count > 0)
			ImPlot::PlotErrorBars<double>(label_id, v1.data(), v2.data(), v3.data(), v4.data(), count,
				lua_opt_int(args, 7, 0),
				offset);
		return 0;
	}
	return lua_param_error(3);
}
DEF_PLOT_T(implot_plotErrorBars) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	LUA_GET_PTR(v1, 2 + Offset);
	LUA_GET_PTR(v2, 3 + Offset);
	LUA_GET_PTR(v3, 4 + Offset);
	const auto type5 = lua_type(L, 5 + Offset);
	if (type5 == LUA_TNUMBER) {
		const int count = luaL_checkint(L, 5 + Offset);
		if (count > 0)
			ImPlot::PlotErrorBars<T>(label_id, v1, v2, v3, count,
				lua_opt_int(args, 6 + Offset, 0),
				lua_opt_int(args, 7 + Offset, 0),
				lua_opt_int(args, 8 + Offset, sizeof(T)));
		return 0;
	}
	if (type5 == LUA_TCDATA) {
		LUA_GET_PTR(v4, 5 + Offset);
		const int count = luaL_checkint(L, 6 + Offset);
		if (count > 0)
			ImPlot::PlotErrorBars<T>(label_id, v1, v2, v3, v4, count,
				lua_opt_int(args, 7 + Offset, 0),
				lua_opt_int(args, 8 + Offset, 0),
				lua_opt_int(args, 9 + Offset, sizeof(T)));
		return 0;
	}
	return lua_param_error(5 + Offset);
}
DEF_PLOT_C(implot_plotErrorBars);
static int implot_plotStems(lua_State* L) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	std::vector<double> v1;
	if (!luaval_to_native(L, 2, &v1))
		return lua_param_error(2);
	const auto type3 = lua_type(L, 3);
	if (type3 == LUA_TNUMBER) {
		// values
		const int size = v1.size();
		IMPLOT_COUNT_OFFSET(3, 8, size);
		if (count > 0)
			ImPlot::PlotStems<double>(label_id, v1.data(), count,
				lua_opt_number(args, 4, 0),
				lua_opt_number(args, 5, 1),
				lua_opt_number(args, 6, 0),
				lua_opt_int(args, 7, 0),
				offset);
		return 0;
	}
	std::vector<double> v2;
	if (!luaval_to_native(L, 3, &v2))
		return lua_param_error(3);
	// xs, ys
	const int size = std::min(v1.size(), v2.size());
	IMPLOT_COUNT_OFFSET(4, 7, size);
	if (count > 0)
		ImPlot::PlotStems<double>(label_id, v1.data(), v2.data(), count,
			lua_opt_number(args, 5, 0),
			lua_opt_int(args, 6, 0),
			offset);
	return 0;
}
DEF_PLOT_T(implot_plotStems) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	LUA_GET_PTR(v1, 2 + Offset);
	const auto type3 = lua_type(L, 3 + Offset);
	if (type3 == LUA_TNUMBER) {
		// values
		const int count = luaL_checkint(L, 3 + Offset);
		if (count > 0)
			ImPlot::PlotStems<T>(label_id, v1, count,
				lua_opt_number(args, 4 + Offset, 0),
				lua_opt_number(args, 5 + Offset, 1),
				lua_opt_number(args, 6 + Offset, 0),
				lua_opt_int(args, 7 + Offset, 0),
				lua_opt_int(args, 8 + Offset, sizeof(T)));
		return 0;
	}
	LUA_GET_PTR(v2, 3 + Offset);
	// xs, ys
	const int count = luaL_checkint(L, 4 + Offset);
	if (count > 0)
		ImPlot::PlotStems<T>(label_id, v1, v2, count,
			lua_opt_number(args, 5 + Offset, 0),
			lua_opt_int(args, 6 + Offset, 0),
			lua_opt_int(args, 7 + Offset, 0),
			lua_opt_int(args, 8 + Offset, sizeof(T)));
	return 0;
}
DEF_PLOT_C(implot_plotStems);
static int implot_plotInfLines(lua_State* L) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	std::vector<double> xs;
	if (!luaval_to_native(L, 2, &xs))
		return lua_param_error(2);
	const int size = xs.size();
	IMPLOT_COUNT_OFFSET(3, 5, size);
	if (count > 0)
		ImPlot::PlotInfLines<double>(label_id, xs.data(), count,
			lua_opt_int(args, 4, 0),
			offset);
	return 0;
}
DEF_PLOT_T(implot_plotInfLines) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	LUA_GET_PTR(xs, 2 + Offset);
	const int count = luaL_checkint(L, 3 + Offset);
	if (count > 0)
		ImPlot::PlotInfLines<T>(label_id, xs, count,
			lua_opt_int(args, 4 + Offset, 0),
			lua_opt_int(args, 5 + Offset, 0));
	return 0;
}
DEF_PLOT_C(implot_plotInfLines);
static int implot_plotPieChart(lua_State* L) {
	const int args = lua_gettop(L);
	std::vector<const char*> label_ids;
	if (!luaval_to_native(L, 1, &label_ids))
		return lua_param_error(1);
	std::vector<double> values;
	if (!luaval_to_native(L, 2, &values))
		return lua_param_error(2);
	int count = luaL_checkint(L, 3);
	count = std::min({ count, (int)label_ids.size(), (int)values.size() });
	ImPlot::PlotPieChart<double>(label_ids.data(), values.data(), count,
		luaL_checknumber(L, 4),
		luaL_checknumber(L, 5),
		luaL_checknumber(L, 6),
		lua_opt_string(args, 7, "%.1f"),
		lua_opt_number(args, 8, 90),
		lua_opt_int(args, 9, 0));
	return 0;
}
DEF_PLOT_T(implot_plotPieChart) {
	const int args = lua_gettop(L);
	std::vector<const char*> label_ids;
	if (!luaval_to_native(L, 1, &label_ids))
		return lua_param_error(1);
	LUA_GET_PTR(v1, 2 + Offset);
	int count = luaL_checkint(L, 3 + Offset);
	count = std::min({ count, (int)label_ids.size() });
	ImPlot::PlotPieChart<T>(label_ids.data(), v1, count,
		luaL_checknumber(L, 4 + Offset),
		luaL_checknumber(L, 5 + Offset),
		luaL_checknumber(L, 6 + Offset),
		lua_opt_string(args, 7 + Offset, "%.1f"),
		lua_opt_number(args, 8 + Offset, 90),
		lua_opt_int(args, 9, 0));
	return 0;
}
DEF_PLOT_C(implot_plotPieChart);
static int implot_plotHeatmap(lua_State* L) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	std::vector<double> values;
	if (!luaval_to_native(L, 2, &values))
		return lua_param_error(2);
	ImPlot::PlotHeatmap<double>(label_id, values.data(),
		luaL_checkint(L, 3),
		luaL_checkint(L, 4),
		luaL_optnumber(L, 5, 0),
		luaL_optnumber(L, 6, 0),
		lua_opt_string(args, 7, "%.1f"),
		lua_opt_impoint(args, 8, ImPlotPoint(0, 0)),
		lua_opt_impoint(args, 9, ImPlotPoint(1, 1)),
		lua_opt_int(args, 10, 0));
	return 0;
}
DEF_PLOT_T(implot_plotHeatmap) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	LUA_GET_PTR(v1, 2 + Offset);
	ImPlot::PlotHeatmap<T>(label_id, v1,
		luaL_checkint(L, 3 + Offset),
		luaL_checkint(L, 4 + Offset),
		luaL_optnumber(L, 5 + Offset, 0),
		luaL_optnumber(L, 6 + Offset, 0),
		lua_opt_string(args, 7 + Offset, "%.1f"),
		lua_opt_impoint(args, 8 + Offset, ImPlotPoint(0, 0)),
		lua_opt_impoint(args, 9 + Offset, ImPlotPoint(1, 1)),
		lua_opt_int(args, 10, 0));
	return 0;
}
DEF_PLOT_C(implot_plotHeatmap);
static int implot_plotHistogram(lua_State* L) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	std::vector<double> values;
	if (!luaval_to_native(L, 2, &values))
		return lua_param_error(2);
	int count = luaL_checkint(L, 3);
	count = std::min({ count, (int)values.size() });
	if (count == 0)
		return 0;
	lua_pushnumber(L, ImPlot::PlotHistogram<double>(
		label_id, values.data(), count,
		lua_opt_int(args, 4, ImPlotBin_Sturges),
		lua_opt_number(args, 5, 1.0),
		lua_opt_imrange(args, 6, ImPlotRange()),
		lua_opt_int(args, 7, 0)));
	return 1;
}
DEF_PLOT_T(implot_plotHistogram) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	LUA_GET_PTR(values, 2 + Offset);
	const int count = luaL_checkint(L, 3 + Offset);
	if (count == 0)
		return 0;
	lua_pushnumber(L, ImPlot::PlotHistogram<T>(
		label_id, values, count,
		lua_opt_int(args, 4 + Offset, ImPlotBin_Sturges),
		lua_opt_number(args, 5 + Offset, 1.0),
		lua_opt_imrange(args, 6 + Offset, ImPlotRange()),
		lua_opt_int(args, 7 + Offset, 0)));
	return 1;
}
DEF_PLOT_C(implot_plotHistogram);
static int implot_plotHistogram2D(lua_State* L) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	std::vector<double> xs;
	if (!luaval_to_native(L, 2, &xs))
		return lua_param_error(2);
	std::vector<double> ys;
	if (!luaval_to_native(L, 3, &ys))
		return lua_param_error(3);
	int count = luaL_checkint(L, 4);
	count = std::min({ count, (int)xs.size(), (int)ys.size() });
	if (count == 0)
		return 0;
	lua_pushnumber(L, ImPlot::PlotHistogram2D<double>(
		label_id, xs.data(), ys.data(), count,
		lua_opt_int(args, 5, ImPlotBin_Sturges),
		lua_opt_int(args, 6, ImPlotBin_Sturges),
		lua_opt_imrect(args, 7, ImPlotRect()),
		lua_opt_int(args, 8, 0)));
	return 1;
}
DEF_PLOT_T(implot_plotHistogram2D) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	LUA_GET_PTR(xs, 2 + Offset);
	LUA_GET_PTR(ys, 3 + Offset);
	const int count = luaL_checkint(L, 4 + Offset);
	if (count == 0)
		return 0;
	lua_pushnumber(L, ImPlot::PlotHistogram2D<T>(
		label_id, xs, ys, count,
		lua_opt_int(args, 5 + Offset, ImPlotBin_Sturges),
		lua_opt_int(args, 6 + Offset, ImPlotBin_Sturges),
		lua_opt_imrect(args, 7 + Offset, ImPlotRect()),
		lua_opt_int(args, 8 + Offset, 0)));
	return 1;
}
DEF_PLOT_C(implot_plotHistogram2D);
static int implot_plotDigital(lua_State* L) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	std::vector<double> v1;
	if (!luaval_to_native(L, 2, &v1))
		return lua_param_error(2);
	std::vector<double> v2;
	if (!luaval_to_native(L, 3, &v2))
		return lua_param_error(3);
	const int size = std::min({ v1.size(), v2.size() });
	IMPLOT_COUNT_OFFSET(4, 6, size);
	ImPlot::PlotDigital(label_id, v1.data(), v2.data(), count,
		lua_opt_int(args, 5, 0),
		offset);
	return 0;
}
DEF_PLOT_T(implot_plotDigital) {
	const int args = lua_gettop(L);
	const auto label_id = luaL_checkstring(L, 1);
	LUA_GET_PTR(v1, 2 + Offset);
	LUA_GET_PTR(v2, 3 + Offset);
	const int count = luaL_checkint(L, 4 + Offset);
	if (count > 0)
		ImPlot::PlotDigital(label_id, v1, v2, count,
			lua_opt_int(args, 5 + Offset, 0),
			lua_opt_int(args, 6 + Offset, 0));
	return 0;
}
DEF_PLOT_C(implot_plotDigital);
static int implot_plotImage(lua_State* L) {
	const int args = lua_gettop(L);
	cocos2d::Texture2D* tex = nullptr;
	if (luaval_to_object(L, 2, "cc.Texture2D", &tex))
	{
		if (!tex)
			return 0;
		CCIMGUI::getInstance()->plotImage(
			luaL_checkstring(L, 1),
			tex,
			_luaval_to_imvec2(L, 3),
			_luaval_to_imvec2(L, 4),
			lua_opt_imv2(args, 5, ImVec2(0, 0)),
			lua_opt_imv2(args, 6, ImVec2(1, 1)),
			lua_opt_imv4(args, 7, ImVec4(1, 1, 1, 1)));
		return 0;
	}
	cocos2d::Sprite* sp = nullptr;
	if (luaval_to_object(L, 2, "cc.Sprite", &sp))
	{
		if (!sp)
			return 0;
		CCIMGUI::getInstance()->plotImage(
			luaL_checkstring(L, 1),
			sp,
			_luaval_to_imvec2(L, 3),
			_luaval_to_imvec2(L, 4),
			lua_opt_imv4(args, 5, ImVec4(0, 0, 0, 0)));
		return 0;
	}
	return 0;
}
static int implot_dragPoint(lua_State* L) {
	const int args = lua_gettop(L);
	double x = luaL_checknumber(L, 2);
	double y = luaL_checknumber(L, 3);
	lua_pushboolean(L,
		ImPlot::DragPoint(
			luaL_checkint(L, 1),
			&x,
			&y,
			_luaval_to_imvec4(L, 4),
			lua_opt_number(args, 5, 4),
			lua_opt_int(args, 6, 0)));
	lua_pushnumber(L, x);
	lua_pushnumber(L, y);
	return 3;
}
static int implot_dragLineX(lua_State* L) {
	const int args = lua_gettop(L);
	double value = luaL_checknumber(L, 2);
	lua_pushboolean(L,
		ImPlot::DragLineX(
			luaL_checkint(L, 1),
			&value,
			_luaval_to_imvec4(L, 3),
			lua_opt_number(args, 4, 1),
			lua_opt_int(args, 5, 0)));
	lua_pushnumber(L, value);
	return 2;
}
static int implot_dragLineY(lua_State* L) {
	const int args = lua_gettop(L);
	double value = luaL_checknumber(L, 2);
	lua_pushboolean(L,
		ImPlot::DragLineY(
			luaL_checkint(L, 1),
			&value,
			_luaval_to_imvec4(L, 3),
			lua_opt_number(args, 4, 1),
			lua_opt_int(args, 5, 0)));
	lua_pushnumber(L, value);
	return 2;
}
static int implot_dragRect(lua_State* L) {
	const int args = lua_gettop(L);
	double x1 = luaL_checknumber(L, 2);
	double y1 = luaL_checknumber(L, 3);
	double x2 = luaL_checknumber(L, 4);
	double y2 = luaL_checknumber(L, 5);
	lua_pushboolean(L,
		ImPlot::DragRect(
			luaL_checkint(L, 1),
			&x1, &y1, &x2, &y2,
			_luaval_to_imvec4(L, 6),
			lua_opt_int(args, 7, 0)));
	lua_pushnumber(L, x1);
	lua_pushnumber(L, y1);
	lua_pushnumber(L, x2);
	lua_pushnumber(L, y2);
	return 3;
}
static int implot_annotation(lua_State* L) {
	const int args = lua_gettop(L);
	if (args >= 6 && lua_isstring(L, 6))
	{
		ImPlot::Annotation(
			luaL_checknumber(L, 1),
			luaL_checknumber(L, 2),
			_luaval_to_imvec4(L, 3),
			_luaval_to_imvec2(L, 4),
			lua_toboolean(L, 5),
			luaL_checkstring(L, 6));
	}
	else
	{
		ImPlot::Annotation(
			luaL_checknumber(L, 1),
			luaL_checknumber(L, 2),
			_luaval_to_imvec4(L, 3),
			_luaval_to_imvec2(L, 4),
			lua_toboolean(L, 5),
			lua_opt_bool(args, 6, false));
	}
	return 0;
}
static int implot_tagX(lua_State* L) {
	const int args = lua_gettop(L);
	if (args >= 3 && lua_isstring(L, 3))
	{
		ImPlot::TagX(
			luaL_checknumber(L, 1),
			_luaval_to_imvec4(L, 2),
			luaL_checkstring(L, 3));
	}
	else
	{
		ImPlot::TagX(
			luaL_checknumber(L, 1),
			_luaval_to_imvec4(L, 2),
			lua_opt_bool(args, 3, false));
	}
	return 0;
}
static int implot_tagY(lua_State* L) {
	const int args = lua_gettop(L);
	if (args >= 3 && lua_isstring(L, 3))
	{
		ImPlot::TagY(
			luaL_checknumber(L, 1),
			_luaval_to_imvec4(L, 2),
			luaL_checkstring(L, 3));
	}
	else
	{
		ImPlot::TagY(
			luaL_checknumber(L, 1),
			_luaval_to_imvec4(L, 2),
			lua_opt_bool(args, 3, false));
	}
	return 0;
}
static int implot_getStyle(lua_State* L) {
	object_to_luaval(L, "implot.ImPlotStyle", &ImPlot::GetStyle());
	return 1;
}
static int implot_pushStyleColor(lua_State* L) {
	const auto idx = (ImPlotCol)luaL_checkinteger(L, 1);
	switch (lua_type(L, 2))
	{
	case LUA_TNUMBER:
		ImGui::PushStyleColor(idx, lua_tou32(L, 2));
		break;
	case LUA_TTABLE:
		ImGui::PushStyleColor(idx, _luaval_to_imvec4(L, 2));
		break;
	default:
		break;
	}
	return 0;
}
static int implot_pushStyleVar(lua_State* L) {
	enum class ImPlotStyleVarType { Int, Float, ImVec2 };
	const auto idx = (ImPlotStyleVar)luaL_checkinteger(L, 1);
	if (idx < ImPlotStyleVar_LineWeight || idx >= ImPlotStyleVar_COUNT)
		return lua_param_error(1);
	ImPlotStyleVarType type = ImPlotStyleVarType::Float;
	if (idx == ImPlotStyleVar_Marker)
		type = ImPlotStyleVarType::Int;
	else if (idx >= ImPlotStyleVar_MajorTickLen)
		type = ImPlotStyleVarType::ImVec2;

	switch (type)
	{
	case ImPlotStyleVarType::Int:
		ImPlot::PushStyleVar(idx, (int)luaL_checkinteger(L, 2));
		break;
	case ImPlotStyleVarType::Float:
		ImPlot::PushStyleVar(idx, (float)luaL_checknumber(L, 2));
		break;
	case ImPlotStyleVarType::ImVec2:
		ImPlot::PushStyleVar(idx, _luaval_to_imvec2(L, 2));
		break;
	default: ;
	}
	return 0;
}
static int implot_addColormap(lua_State* L) {
	const int args = lua_gettop(L);
	const auto name = luaL_checkstring(L, 1);
	if (!lua_istable(L, 2))
		return lua_param_error(2);
	lua_pushinteger(L, 1);
	lua_gettable(L, 2);
	const auto type_element = lua_type(L, -1);
	lua_pop(L, 1);
	if (type_element == LUA_TNUMBER)
	{
		std::vector<ImU32> cols;
		if (!luaval_to_native(L, 2, &cols))
			return lua_param_error(2);
		lua_pushinteger(L,
			ImPlot::AddColormap(name, cols.data(), cols.size(), lua_opt_bool(args, 3, true)));
	}
	else if (type_element == LUA_TTABLE)
	{
		std::vector<ImVec4> cols;
		if (!luaval_to_native(L, 2, &cols))
			return lua_param_error(2);
		lua_pushinteger(L,
			ImPlot::AddColormap(name, cols.data(), cols.size(), lua_opt_bool(args, 3, true)));
	}
	else
	{
		return lua_param_error(2);
	}
	return 1;
}
static int implot_pushColormap(lua_State* L) {
	switch (lua_type(L, 1))
	{
	case LUA_TNUMBER:
	{
		const auto idx = (ImPlotColormap)luaL_checkinteger(L, 1);
		if (idx < 0 || idx >= ImPlot::GetColormapCount())
			return lua_param_error(1);
		ImPlot::PushColormap(idx);
		return 0;
	}
	case LUA_TSTRING:
	{
		const auto idx = ImPlot::GetColormapIndex(luaL_checkstring(L, 1));
		if (idx < 0)
			return lua_param_error(1);
		ImPlot::PushColormap(idx);
		return 0;
	}
	default:
		break;
	}
	return lua_param_error(1);
}
static int implot_colormapSlider(lua_State* L) {
	const int args = lua_gettop(L);
	float t = luaL_checknumber(L, 2);
	ImVec4 out;
	lua_pushboolean(L,
		ImPlot::ColormapSlider(
			luaL_checkstring(L, 1), &t, &out, lua_opt_string(args, 4, ""), lua_opt_int(args, 5, IMPLOT_AUTO)));
	lua_pushnumber(L, (lua_Number)t);
	ImVec4_to_luaval(L, out);
	return 3;
}
static int implot_bustColorCache(lua_State* L) {
	const int args = lua_gettop(L);
	ImPlot::BustColorCache(lua_opt_string_null(args, 1, nullptr));
	return 0;
}
static int implot_itemIcon(lua_State* L) {
	switch (lua_type(L, 1))
	{
	case LUA_TNUMBER:
	{
		ImPlot::ItemIcon(lua_tou32(L,1));
		return 0;
	}
	case LUA_TSTRING:
	{
		ImPlot::ItemIcon(_luaval_to_imvec4(L, 1));
		return 0;
	}
	default:
		break;
	}
	return lua_param_error(1);
}
static int implot_showMetricsWindow(lua_State* L) {
	SHOW_WINDOW(ImPlot::ShowMetricsWindow);
}
static int implot_showDemoWindow(lua_State* L) {
	SHOW_WINDOW(ImPlot::ShowDemoWindow);
}

#undef M
#define M(n) {#n, implot_##n}
#define M_PLOT(n) {#n, implot_##n}, {#n "C", implot_##n##C}
static const luaL_Reg implot_methods[] = {
	M(beginSubplots),
	M(setupAxisTicks),
	M_PLOT(plotLine),
	M_PLOT(plotScatter),
	M_PLOT(plotStairs),
	M_PLOT(plotShaded),
	M_PLOT(plotBars),
	M_PLOT(plotBarGroups),
	M_PLOT(plotErrorBars),
	M_PLOT(plotStems),
	M_PLOT(plotInfLines),
	M_PLOT(plotPieChart),
	M_PLOT(plotHeatmap),
	M_PLOT(plotHistogram),
	M_PLOT(plotHistogram2D),
	M_PLOT(plotDigital),
	M(plotImage),
	M(dragPoint),
	M(dragLineX),
	M(dragLineY),
	M(dragRect),
	M(annotation),
	M(tagX),
	M(tagY),
	M(getStyle),
	M(pushStyleColor),
	M(pushStyleVar),
	M(addColormap),
	M(pushColormap),
	M(colormapSlider),
	M(bustColorCache),
	M(itemIcon),
	M(showMetricsWindow),
	M(showDemoWindow)
};

int luaopen_imgui(lua_State *L)
{
    luaL_register(L, "imgui", imgui_methods);
    lua_pushstring(L, ImGui::GetVersion());
    lua_setfield(L, -2, "version");
	lua_pop(L, 1);

	luaReg_imgui(L);
	luaReg_imguiStyle(L);
	luaReg_imguiIO(L);
	luaReg_imguiFont(L);
	luaReg_imguiViewport(L);
	luaReg_imguiDrawList(L);

	lua_pushstring(L, "imgui.ImDrawList");
	lua_rawget(L, LUA_REGISTRYINDEX);
	if (lua_istable(L, -1))
	{
		for (auto&& reg : drawlist_methods)
			tolua_function(L, reg.name, reg.func);
	}
	lua_pop(L, 1);

	lua_pushstring(L, "imgui.ImFont");
	lua_rawget(L, LUA_REGISTRYINDEX);
	if (lua_istable(L, -1))
	{
		for (auto&& reg : font_methods)
			tolua_function(L, reg.name, reg.func);
	}
	lua_pop(L, 1);

	luaReg_imguiColorTextEdit(L);
	luaReg_implot(L);

	lua_getglobal(L, "implot");
	if (lua_istable(L, -1))
	{
		for (auto&& reg : implot_methods)
			tolua_function(L, reg.name, reg.func);
	}
	lua_pushliteral(L, IMPLOT_VERSION);
	lua_setfield(L, -2, "version");
	lua_pop(L, 1);

	CCIMGUI::setOnInit([=](CCIMGUI* ins)
	{
		ins->addCallback([=]()
		{
			lua_getglobal(L, "imgui");
			lua_getfield(L, -1, "draw");
			if (lua_isfunction(L, -1))
			{
				LuaEngine::getInstance()->getLuaStack()->executeFunction(0);
			}
		}, "__luadraw__");
	});
    return 0;
}

