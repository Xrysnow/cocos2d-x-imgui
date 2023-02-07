#pragma once
#include "base/ccConfig.h"
#include "lua_conversion.hpp"

extern int luaReg_imguiColorTextEdit_imguiColorTextEdit(lua_State* lua_S);

inline int luaReg_imguiColorTextEdit(lua_State* lua_S)
{
	luaReg_imguiColorTextEdit_imguiColorTextEdit(lua_S);
	return 0;
}
