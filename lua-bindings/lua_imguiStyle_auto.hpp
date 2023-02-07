#pragma once
#include "base/ccConfig.h"
#include "lua_conversion.hpp"

extern int luaReg_imguiStyle_imguiImGuiStyle(lua_State* lua_S);

inline int luaReg_imguiStyle(lua_State* lua_S)
{
	luaReg_imguiStyle_imguiImGuiStyle(lua_S);
	return 0;
}
