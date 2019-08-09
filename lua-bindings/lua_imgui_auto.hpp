#pragma once
#include <vector>

#ifdef __cplusplus
extern "C" {
#endif
#include "tolua++.h"
#ifdef __cplusplus
}
#endif

std::vector<luaL_Reg> register_all_x_imgui(lua_State* tolua_S);

