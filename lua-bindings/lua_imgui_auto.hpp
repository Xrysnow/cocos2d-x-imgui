#pragma once
#include "base/ccConfig.h"
#include "lua_conversion.hpp"

extern int luaReg_imgui_imguiImGuiWindowFlags(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiInputTextFlags(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiTreeNodeFlags(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiPopupFlags(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiSelectableFlags(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiComboFlags(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiTabBarFlags(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiTabItemFlags(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiTableFlags(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiTableColumnFlags(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiTableRowFlags(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiTableBgTarget(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiFocusedFlags(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiHoveredFlags(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiDockNodeFlags(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiDragDropFlags(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiDataType(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiDir(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiSortDirection(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiKey(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiNavInput(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiConfigFlags(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiBackendFlags(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiCol(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiStyleVar(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiButtonFlags(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiColorEditFlags(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiSliderFlags(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiMouseButton(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiMouseCursor(lua_State* lua_S);
extern int luaReg_imgui_imguiImGuiCond(lua_State* lua_S);
extern int luaReg_imgui_imgui_global_functions(lua_State* lua_S);

inline int luaReg_imgui(lua_State* lua_S)
{
	luaReg_imgui_imguiImGuiWindowFlags(lua_S);
	luaReg_imgui_imguiImGuiInputTextFlags(lua_S);
	luaReg_imgui_imguiImGuiTreeNodeFlags(lua_S);
	luaReg_imgui_imguiImGuiPopupFlags(lua_S);
	luaReg_imgui_imguiImGuiSelectableFlags(lua_S);
	luaReg_imgui_imguiImGuiComboFlags(lua_S);
	luaReg_imgui_imguiImGuiTabBarFlags(lua_S);
	luaReg_imgui_imguiImGuiTabItemFlags(lua_S);
	luaReg_imgui_imguiImGuiTableFlags(lua_S);
	luaReg_imgui_imguiImGuiTableColumnFlags(lua_S);
	luaReg_imgui_imguiImGuiTableRowFlags(lua_S);
	luaReg_imgui_imguiImGuiTableBgTarget(lua_S);
	luaReg_imgui_imguiImGuiFocusedFlags(lua_S);
	luaReg_imgui_imguiImGuiHoveredFlags(lua_S);
	luaReg_imgui_imguiImGuiDockNodeFlags(lua_S);
	luaReg_imgui_imguiImGuiDragDropFlags(lua_S);
	luaReg_imgui_imguiImGuiDataType(lua_S);
	luaReg_imgui_imguiImGuiDir(lua_S);
	luaReg_imgui_imguiImGuiSortDirection(lua_S);
	luaReg_imgui_imguiImGuiKey(lua_S);
	luaReg_imgui_imguiImGuiNavInput(lua_S);
	luaReg_imgui_imguiImGuiConfigFlags(lua_S);
	luaReg_imgui_imguiImGuiBackendFlags(lua_S);
	luaReg_imgui_imguiImGuiCol(lua_S);
	luaReg_imgui_imguiImGuiStyleVar(lua_S);
	luaReg_imgui_imguiImGuiButtonFlags(lua_S);
	luaReg_imgui_imguiImGuiColorEditFlags(lua_S);
	luaReg_imgui_imguiImGuiSliderFlags(lua_S);
	luaReg_imgui_imguiImGuiMouseButton(lua_S);
	luaReg_imgui_imguiImGuiMouseCursor(lua_S);
	luaReg_imgui_imguiImGuiCond(lua_S);
	luaReg_imgui_imgui_global_functions(lua_S);
	return 0;
}
