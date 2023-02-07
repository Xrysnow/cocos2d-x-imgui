#pragma once
#include "../imgui/imgui.h"
#include "../implot/implot.h"
#include "lua.hpp"

bool luaval_to_ImVec2(lua_State *L, int lo, ImVec2* out, const char* name = "");
bool luaval_to_ImVec4(lua_State *L, int lo, ImVec4* out, const char* name = "");
bool luaval_to_ImPlotPoint(lua_State *L, int lo, ImPlotPoint* out, const char* name = "");
bool luaval_to_ImPlotRange(lua_State *L, int lo, ImPlotRange* out, const char* name = "");
bool luaval_to_ImPlotRect(lua_State *L, int lo, ImPlotRect* out, const char* name = "");

void ImVec2_to_luaval(lua_State *L, const ImVec2& val);
void ImVec4_to_luaval(lua_State *L, const ImVec4& val);
void ImPlotPoint_to_luaval(lua_State *L, const ImPlotPoint& val);
void ImPlotRange_to_luaval(lua_State *L, const ImPlotRange& val);
void ImPlotRect_to_luaval(lua_State *L, const ImPlotRect& val);

int luaopen_imgui(lua_State *L);

#include "lua_conversion.hpp"

namespace imlua
{
#define TO_NATIVE_BASIC(F_, T_)\
	template<>\
    struct to_native<T_> {\
        static bool F(lua_State* L, int lo, T_* outValue, const char* fName = "") {\
            return F_(L, lo, outValue, fName);\
        }\
    };

#define TO_LUA_BASIC(F_, T_)\
    template<>\
    struct to_lua<T_> {\
        static void F(lua_State* L, const T_& inValue) {\
            if (!L) return;\
            F_(L, inValue);\
        }\
    };

    TO_NATIVE_BASIC(luaval_to_ImVec2, ImVec2);
    TO_NATIVE_BASIC(luaval_to_ImVec4, ImVec4);
    TO_NATIVE_BASIC(luaval_to_ImPlotPoint, ImPlotPoint);
    TO_NATIVE_BASIC(luaval_to_ImPlotRange, ImPlotRange);
    TO_NATIVE_BASIC(luaval_to_ImPlotRect, ImPlotRect);

    TO_LUA_BASIC(ImVec2_to_luaval, ImVec2);
    TO_LUA_BASIC(ImVec4_to_luaval, ImVec4);
    TO_LUA_BASIC(ImPlotPoint_to_luaval, ImPlotPoint);
    TO_LUA_BASIC(ImPlotRange_to_luaval, ImPlotRange);
    TO_LUA_BASIC(ImPlotRect_to_luaval, ImPlotRect);
}
