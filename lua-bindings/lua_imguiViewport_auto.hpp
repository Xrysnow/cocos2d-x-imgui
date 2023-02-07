#pragma once
#include "base/ccConfig.h"
#include "lua_conversion.hpp"

extern int luaReg_imguiViewport_imguiImGuiViewportFlags(lua_State* lua_S);
extern int luaReg_imguiViewport_imguiImGuiViewport(lua_State* lua_S);

inline int luaReg_imguiViewport(lua_State* lua_S)
{
	luaReg_imguiViewport_imguiImGuiViewportFlags(lua_S);
	luaReg_imguiViewport_imguiImGuiViewport(lua_S);
	return 0;
}
