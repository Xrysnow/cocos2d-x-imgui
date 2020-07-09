#pragma once
#include "../imgui/imgui.h"
#include "../implot/implot.h"
#include <lua/luajit/include/lua.hpp>

bool luaval_to_ImVec2(lua_State *L, int lo, ImVec2* out, const char* name = "");
bool luaval_to_ImVec4(lua_State *L, int lo, ImVec4* out, const char* name = "");
bool luaval_to_ImPlotPoint(lua_State *L, int lo, ImPlotPoint* out, const char* name = "");
bool luaval_to_ImPlotRange(lua_State *L, int lo, ImPlotRange* out, const char* name = "");
bool luaval_to_ImPlotLimits(lua_State *L, int lo, ImPlotLimits* out, const char* name = "");

void ImVec2_to_luaval(lua_State *L, const ImVec2& val);
void ImVec4_to_luaval(lua_State *L, const ImVec4& val);
void ImPlotPoint_to_luaval(lua_State *L, const ImPlotPoint& val);
void ImPlotRange_to_luaval(lua_State *L, const ImPlotRange& val);
void ImPlotLimits_to_luaval(lua_State *L, const ImPlotLimits& val);

int luaopen_imgui(lua_State *L);

#include "lua_conversion.hpp"

namespace lua
{
    TO_NATIVE_BASIC(luaval_to_ImVec2, ImVec2);
    TO_NATIVE_BASIC(luaval_to_ImVec4, ImVec4);
    TO_NATIVE_BASIC(luaval_to_ImPlotPoint, ImPlotPoint);
    TO_NATIVE_BASIC(luaval_to_ImPlotRange, ImPlotRange);
    TO_NATIVE_BASIC(luaval_to_ImPlotLimits, ImPlotLimits);

    TO_LUA_BASIC(ImVec2_to_luaval, ImVec2);
    TO_LUA_BASIC(ImVec4_to_luaval, ImVec4);
    TO_LUA_BASIC(ImPlotPoint_to_luaval, ImPlotPoint);
    TO_LUA_BASIC(ImPlotRange_to_luaval, ImPlotRange);
    TO_LUA_BASIC(ImPlotLimits_to_luaval, ImPlotLimits);
}
