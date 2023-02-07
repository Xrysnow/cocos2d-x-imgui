#include "lua_imguiViewport_auto.hpp"
#include "imgui.h"
#include "imgui_lua.hpp"

int luaReg_imguiViewport_imguiImGuiViewportFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiViewportFlags");
	LUA_ENUM_ENTRY("None", ImGuiViewportFlags_::ImGuiViewportFlags_None);
	LUA_ENUM_ENTRY("IsPlatformWindow", ImGuiViewportFlags_::ImGuiViewportFlags_IsPlatformWindow);
	LUA_ENUM_ENTRY("IsPlatformMonitor", ImGuiViewportFlags_::ImGuiViewportFlags_IsPlatformMonitor);
	LUA_ENUM_ENTRY("OwnedByApp", ImGuiViewportFlags_::ImGuiViewportFlags_OwnedByApp);
	LUA_ENUM_ENTRY("NoDecoration", ImGuiViewportFlags_::ImGuiViewportFlags_NoDecoration);
	LUA_ENUM_ENTRY("NoTaskBarIcon", ImGuiViewportFlags_::ImGuiViewportFlags_NoTaskBarIcon);
	LUA_ENUM_ENTRY("NoFocusOnAppearing", ImGuiViewportFlags_::ImGuiViewportFlags_NoFocusOnAppearing);
	LUA_ENUM_ENTRY("NoFocusOnClick", ImGuiViewportFlags_::ImGuiViewportFlags_NoFocusOnClick);
	LUA_ENUM_ENTRY("NoInputs", ImGuiViewportFlags_::ImGuiViewportFlags_NoInputs);
	LUA_ENUM_ENTRY("NoRendererClear", ImGuiViewportFlags_::ImGuiViewportFlags_NoRendererClear);
	LUA_ENUM_ENTRY("TopMost", ImGuiViewportFlags_::ImGuiViewportFlags_TopMost);
	LUA_ENUM_ENTRY("Minimized", ImGuiViewportFlags_::ImGuiViewportFlags_Minimized);
	LUA_ENUM_ENTRY("NoAutoMerge", ImGuiViewportFlags_::ImGuiViewportFlags_NoAutoMerge);
	LUA_ENUM_ENTRY("CanHostOtherWindows", ImGuiViewportFlags_::ImGuiViewportFlags_CanHostOtherWindows);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int lua_ImGuiViewport_DpiScale_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.DpiScale/getter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_PUSH_NATIVE(cobj->DpiScale);
	return 1;
}
int lua_ImGuiViewport_DpiScale_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.DpiScale/setter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_NATIVE_SETTER(cobj->DpiScale, 2);
	return 0;
}
int lua_ImGuiViewport_Flags_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.Flags/getter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_PUSH_NATIVE(cobj->Flags);
	return 1;
}
int lua_ImGuiViewport_Flags_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.Flags/setter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_NATIVE_SETTER(cobj->Flags, 2);
	return 0;
}
int lua_ImGuiViewport_ID_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.ID/getter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_PUSH_NATIVE(cobj->ID);
	return 1;
}
int lua_ImGuiViewport_ID_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.ID/setter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_NATIVE_SETTER(cobj->ID, 2);
	return 0;
}
int lua_ImGuiViewport_ParentViewportId_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.ParentViewportId/getter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_PUSH_NATIVE(cobj->ParentViewportId);
	return 1;
}
int lua_ImGuiViewport_ParentViewportId_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.ParentViewportId/setter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_NATIVE_SETTER(cobj->ParentViewportId, 2);
	return 0;
}
int lua_ImGuiViewport_PlatformRequestClose_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.PlatformRequestClose/getter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_PUSH_NATIVE(cobj->PlatformRequestClose);
	return 1;
}
int lua_ImGuiViewport_PlatformRequestClose_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.PlatformRequestClose/setter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_NATIVE_SETTER(cobj->PlatformRequestClose, 2);
	return 0;
}
int lua_ImGuiViewport_PlatformRequestMove_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.PlatformRequestMove/getter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_PUSH_NATIVE(cobj->PlatformRequestMove);
	return 1;
}
int lua_ImGuiViewport_PlatformRequestMove_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.PlatformRequestMove/setter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_NATIVE_SETTER(cobj->PlatformRequestMove, 2);
	return 0;
}
int lua_ImGuiViewport_PlatformRequestResize_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.PlatformRequestResize/getter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_PUSH_NATIVE(cobj->PlatformRequestResize);
	return 1;
}
int lua_ImGuiViewport_PlatformRequestResize_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.PlatformRequestResize/setter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_NATIVE_SETTER(cobj->PlatformRequestResize, 2);
	return 0;
}
int lua_ImGuiViewport_Pos_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.Pos/getter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_PUSH_NATIVE(cobj->Pos);
	return 1;
}
int lua_ImGuiViewport_Pos_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.Pos/setter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_NATIVE_SETTER(cobj->Pos, 2);
	return 0;
}
int lua_ImGuiViewport_Size_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.Size/getter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_PUSH_NATIVE(cobj->Size);
	return 1;
}
int lua_ImGuiViewport_Size_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.Size/setter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_NATIVE_SETTER(cobj->Size, 2);
	return 0;
}
int lua_ImGuiViewport_WorkPos_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.WorkPos/getter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_PUSH_NATIVE(cobj->WorkPos);
	return 1;
}
int lua_ImGuiViewport_WorkPos_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.WorkPos/setter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_NATIVE_SETTER(cobj->WorkPos, 2);
	return 0;
}
int lua_ImGuiViewport_WorkSize_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.WorkSize/getter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_PUSH_NATIVE(cobj->WorkSize);
	return 1;
}
int lua_ImGuiViewport_WorkSize_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiViewport.WorkSize/setter");
	auto cobj = LUA_TO_COBJ(ImGuiViewport*, 1);
	LUA_NATIVE_SETTER(cobj->WorkSize, 2);
	return 0;
}
int lua_ImGuiViewport_getCenter(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImGuiViewport", "imgui.ImGuiViewport:getCenter");
	LUA_TRY_INVOKE_R(0, &ImGuiViewport::GetCenter);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGuiViewport_getWorkCenter(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImGuiViewport", "imgui.ImGuiViewport:getWorkCenter");
	LUA_TRY_INVOKE_R(0, &ImGuiViewport::GetWorkCenter);
	LUA_INVOKE_FOOTER("0");
}
int luaReg_imguiViewport_imguiImGuiViewport(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_CLS_DEF(ImGuiViewport, "ImGuiViewport", "imgui.ImGuiViewport",
		nullptr, nullptr);
	LUA_FIELD("DpiScale", lua_ImGuiViewport_DpiScale_getter, lua_ImGuiViewport_DpiScale_setter);
	LUA_FIELD("Flags", lua_ImGuiViewport_Flags_getter, lua_ImGuiViewport_Flags_setter);
	LUA_FIELD("ID", lua_ImGuiViewport_ID_getter, lua_ImGuiViewport_ID_setter);
	LUA_FIELD("ParentViewportId", lua_ImGuiViewport_ParentViewportId_getter, lua_ImGuiViewport_ParentViewportId_setter);
	LUA_FIELD("PlatformRequestClose", lua_ImGuiViewport_PlatformRequestClose_getter, lua_ImGuiViewport_PlatformRequestClose_setter);
	LUA_FIELD("PlatformRequestMove", lua_ImGuiViewport_PlatformRequestMove_getter, lua_ImGuiViewport_PlatformRequestMove_setter);
	LUA_FIELD("PlatformRequestResize", lua_ImGuiViewport_PlatformRequestResize_getter, lua_ImGuiViewport_PlatformRequestResize_setter);
	LUA_FIELD("Pos", lua_ImGuiViewport_Pos_getter, lua_ImGuiViewport_Pos_setter);
	LUA_FIELD("Size", lua_ImGuiViewport_Size_getter, lua_ImGuiViewport_Size_setter);
	LUA_FIELD("WorkPos", lua_ImGuiViewport_WorkPos_getter, lua_ImGuiViewport_WorkPos_setter);
	LUA_FIELD("WorkSize", lua_ImGuiViewport_WorkSize_getter, lua_ImGuiViewport_WorkSize_setter);
	LUA_METHOD("getCenter", lua_ImGuiViewport_getCenter);
	LUA_METHOD("getWorkCenter", lua_ImGuiViewport_getWorkCenter);
	LUA_CLS_END();
	LUA_ENTRY_END(1);
	return 0;
}
