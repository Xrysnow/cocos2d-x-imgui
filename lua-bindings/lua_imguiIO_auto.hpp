#pragma once
#include "base/ccConfig.h"
#include "lua_conversion.hpp"

extern int luaReg_imguiIO_imguiImGuiIO(lua_State* lua_S);

inline int luaReg_imguiIO(lua_State* lua_S)
{
	luaReg_imguiIO_imguiImGuiIO(lua_S);
	return 0;
}
