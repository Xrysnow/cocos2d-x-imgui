#pragma once

#include "../imgui/imgui.h"
#include <lua/luajit/include/lua.hpp>

bool luaval_to_ImVec2(lua_State *L, int lo, ImVec2* out, const char* name = "");
bool luaval_to_ImVec4(lua_State *L, int lo, ImVec4* out, const char* name = "");

void ImVec2_to_luaval(lua_State *L, const ImVec2& val);
void ImVec4_to_luaval(lua_State *L, const ImVec4& val);

int luaopen_imgui(lua_State *L);
