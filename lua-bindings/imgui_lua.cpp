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
#include "../CCIMGUI.h"
#include "../CCImGuiLayer.h"

#pragma warning (disable: 4244)

#define lua_opt_value(_N, _IDX, _F, _DEF) _N >= _IDX ? _F(L, _IDX) : _DEF
#define lua_opt_number(_N, _IDX, _DEF) lua_opt_value(_N, _IDX, luaL_checknumber, _DEF)
#define lua_opt_int(_N, _IDX, _DEF) lua_opt_value(_N, _IDX, luaL_checkinteger, _DEF)
#define lua_opt_u32(_N, _IDX, _DEF) lua_opt_value(_N, _IDX, luaL_checknumber, _DEF)
#define lua_opt_string(_N, _IDX, _DEF) lua_opt_value(_N, _IDX, luaL_checkstring, _DEF)
#define lua_opt_bool(_N, _IDX, _DEF) lua_opt_value(_N, _IDX, lua_toboolean, _DEF)
#define lua_opt_imv2(_N, _IDX, _DEF) lua_opt_value(_N, _IDX, _luaval_to_imvec2, _DEF)
#define lua_opt_imv4(_N, _IDX, _DEF) lua_opt_value(_N, _IDX, _luaval_to_imvec4, _DEF)
#define lua_opt_string_null(_N, _IDX, _DEF) (_N >= _IDX) ? ( lua_isnil(L, _IDX) ? nullptr : luaL_checkstring(L, _IDX) ) : _DEF


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
		get_field(RasterizerFlags, luaL_checknumber);
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
	switch (lua_type(L,2))
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
	switch (lua_type(L, 2))
	{
	case LUA_TNUMBER:
		ImGui::PushStyleVar(idx, luaL_checknumber(L, 2));
		break;
	case LUA_TTABLE:
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
	auto label = luaL_checkstring(L, 1);
	float v = luaL_checknumber(L, 2);
	const float v_speed = lua_opt_number(args, 3, 1.0f);
	float v_min = lua_opt_number(args, 4, 0.0f);
	float v_max = lua_opt_number(args, 5, 0.0f);
	lua_pushboolean(L,
		ImGui::DragScalar(label, ImGuiDataType_Float, &v,
			v_speed, &v_min, &v_max,
			lua_opt_string(args, 6, "%.3f"),
			lua_opt_number(args, 7, 1.0f)));
	lua_pushnumber(L, v);
	return 2;
}
static int imgui_dragFloatN(lua_State *L) {
	const int args = lua_gettop(L);
	auto label = luaL_checkstring(L, 1);
	std::vector<float> arr;
	luaval_to_std_vector_float(L, 2, &arr);
	const float v_speed = lua_opt_number(args, 3, 1.0f);
	float v_min = lua_opt_number(args, 4, 0.0f);
	float v_max = lua_opt_number(args, 5, 0.0f);
	lua_pushboolean(L,
		ImGui::DragScalarN(label, ImGuiDataType_Float, arr.data(), arr.size(),
			v_speed, &v_min, &v_max,
			lua_opt_string(args, 6, "%.3f"),
			lua_opt_number(args, 7, 1.0f)));
	ccvector_float_to_luaval(L, arr);
	return 2;
}
static int imgui_dragInt(lua_State *L) {
	const int args = lua_gettop(L);
	auto label = luaL_checkstring(L, 1);
	int v = luaL_checkinteger(L, 2);
	const float v_speed = lua_opt_number(args, 3, 1.0f);
	int v_min = lua_opt_int(args, 4, 0);
	int v_max = lua_opt_int(args, 5, 0);
	lua_pushboolean(L,
		ImGui::DragScalar(label, ImGuiDataType_S32, &v,
			v_speed, &v_min, &v_max,
			lua_opt_string(args, 6, "%d"),
			lua_opt_number(args, 7, 1.0f)));
	lua_pushnumber(L, v);
	return 2;
}
static int imgui_dragIntN(lua_State *L) {
	const int args = lua_gettop(L);
	auto label = luaL_checkstring(L, 1);
	std::vector<int> arr;
	luaval_to_std_vector_int(L, 2, &arr);
	const float v_speed = lua_opt_number(args, 3, 1.0f);
	int v_min = lua_opt_int(args, 4, 0);
	int v_max = lua_opt_int(args, 5, 0);
	lua_pushboolean(L,
		ImGui::DragScalarN(label, ImGuiDataType_S32, arr.data(), arr.size(),
			v_speed, &v_min, &v_max,
			lua_opt_string(args, 6, "%d"),
			lua_opt_number(args, 7, 1.0f)));
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
			lua_opt_number(args, 6, 1.0f)));
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
			lua_opt_string(args, 5, "%.3f"),
			lua_opt_number(args, 6, 1.0f)));
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
			lua_opt_string(args, 5, "%d")));
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
static int imgui_listBoxHeader(lua_State *L) {
	const int args = lua_gettop(L);
	auto label = luaL_checkstring(L, 1);
	switch (lua_type(L, 2))
	{
	case LUA_TNUMBER:
		lua_pushboolean(L,
			ImGui::ListBoxHeader(label, luaL_checkinteger(L, 2), lua_opt_int(args, 3, -1)));
		break;
	default:
		lua_pushboolean(L,
			ImGui::ListBoxHeader(label, lua_opt_imv2(args, 2, ImVec2(0, 0))));
		break;
	}
	return 1;
}

// Widgets: Data Plotting

static int imgui_plotLines(lua_State *L) {
	const int args = lua_gettop(L);
	std::vector<float> arr;
	luaval_to_std_vector_float(L, 2, &arr);
	ImGui::PlotLines(
		luaL_checkstring(L, 1),
		arr.data(), arr.size(),
		lua_opt_int(args, 3, 0),
		lua_opt_string_null(args, 4, nullptr),
		lua_opt_number(args, 5, FLT_MAX),
		lua_opt_number(args, 6, FLT_MAX),
		lua_opt_imv2(args, 7, ImVec2(0, 0)),
		lua_opt_int(args, 8, sizeof(float))
	);
	return 0;
}
static int imgui_plotHistogram(lua_State *L) {
	const int args = lua_gettop(L);
	std::vector<float> arr;
	luaval_to_std_vector_float(L, 2, &arr);
	ImGui::PlotHistogram(
		luaL_checkstring(L, 1),
		arr.data(), arr.size(),
		lua_opt_int(args, 3, 0),
		lua_opt_string_null(args, 4, nullptr),
		lua_opt_number(args, 5, FLT_MAX),
		lua_opt_number(args, 6, FLT_MAX),
		lua_opt_imv2(args, 7, ImVec2(0, 0)),
		lua_opt_int(args, 8, sizeof(float))
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
	ImGui::CalcListClipping(luaL_checkinteger(L, 1), luaL_checknumber(L, 2), &start, &end);
	lua_pushinteger(L, start);
	lua_pushinteger(L, end);
	return 2;
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
		if (lua_istable(L, 4))
		{
			luaval_to_std_vector_ushort(L, 4, &arr);
			ranges = CCIMGUI::getInstance()->addGlyphRanges(cfg.Name, arr);
		}
		else
		{
			switch ((GlyphRanges)luaL_checkinteger(L, 4)) {
			case GlyphRangesDefault: ranges = io.Fonts->GetGlyphRangesDefault(); break;
			case GlyphRangesKorean: ranges = io.Fonts->GetGlyphRangesKorean(); break;
			case GlyphRangesJapanese: ranges = io.Fonts->GetGlyphRangesJapanese(); break;
			case GlyphRangesChineseFull: ranges = io.Fonts->GetGlyphRangesChineseFull(); break;
			case GlyphRangesChineseSimplifiedCommon: ranges = io.Fonts->GetGlyphRangesChineseSimplifiedCommon(); break;
			case GlyphRangesCyrillic: ranges = io.Fonts->GetGlyphRangesCyrillic(); break;
			case GlyphRangesThai: ranges = io.Fonts->GetGlyphRangesThai(); break;
			case GlyphRangesVietnamese: ranges = io.Fonts->GetGlyphRangesVietnamese(); break;
			default: ;
			}
		}
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
	M(listBox),M(listBoxHeader),

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
	M(setMarkdownImageCallback),
	M(setMarkdownFont),
	M(setMarkdownLinkIcon),
	M(markdown),

    {NULL,  NULL}
};

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
			lua_opt_int(args, 9, ImDrawCornerFlags_All));
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
			lua_opt_int(args, 7, ImDrawCornerFlags_All));
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
		lua_toboolean(L, 4),
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

int luaopen_imgui(lua_State *L)
{
    luaL_register(L, "imgui", imgui_methods);
    lua_pushstring(L, ImGui::GetVersion());
    lua_setfield(L, -2, "version");

	// t(imgui)
	const auto f = register_all_x_imgui(L);
	lua_pushstring(L, "_auto");
	lua_newtable(L);
	// t(imgui) str t
	for (auto&& reg : f)
		tolua_function(L, reg.name, reg.func);
    lua_settable(L, -3);
	// t(imgui)
	lua_pop(L, 1);

	luaL_dostring(L, R"__(
for k, v in pairs(imgui._auto) do
    imgui[k] = function(...)
        return v(nil, ...)
    end
end
)__");

	register_all_x_imguiStyle(L);
	register_all_x_imguiIO(L);
	register_all_x_imguiFont(L);
	register_all_x_imguiViewport(L);
	register_all_x_imguiDrawList(L);

	lua_pushstring(L, "imgui.ImDrawList");
	lua_rawget(L, LUA_REGISTRYINDEX);
	if (lua_istable(L, -1))
	{
		for (auto&& reg : drawlist_methods)
			tolua_function(L, reg.name, reg.func);
	}
	lua_pop(L, 1);

	CCIMGUI::setOnInit([=](CCIMGUI* ins)
	{
		ins->addCallback([=]()
		{
			lua_getglobal(L, "imgui");
			lua_getfield(L, -1, "draw");
			if (lua_isfunction(L, -1))
			{
				if (lua_pcall(L, 0, 0, 0))
				{
					// ... t(imgui) str
					lua_setfield(L, -2, "error");
					//CCLOG("__luadraw__ error: %s", lua_tostring(L, -1));
				}
				else
				{
					lua_pushnil(L);
					lua_setfield(L, -2, "error");
				}
			}
		}, "__luadraw__");
	});
    return 0;
}

