#include "lua_imguiIO_auto.hpp"
#include "imgui.h"
#include "imgui_lua.hpp"

int lua_ImGuiIO_AppAcceptingEvents_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.AppAcceptingEvents/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->AppAcceptingEvents);
	return 1;
}
int lua_ImGuiIO_AppAcceptingEvents_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.AppAcceptingEvents/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->AppAcceptingEvents, 2);
	return 0;
}
int lua_ImGuiIO_AppFocusLost_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.AppFocusLost/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->AppFocusLost);
	return 1;
}
int lua_ImGuiIO_AppFocusLost_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.AppFocusLost/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->AppFocusLost, 2);
	return 0;
}
int lua_ImGuiIO_BackendFlags_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.BackendFlags/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->BackendFlags);
	return 1;
}
int lua_ImGuiIO_BackendFlags_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.BackendFlags/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->BackendFlags, 2);
	return 0;
}
int lua_ImGuiIO_BackendPlatformName_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.BackendPlatformName/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->BackendPlatformName);
	return 1;
}
int lua_ImGuiIO_BackendPlatformName_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.BackendPlatformName/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->BackendPlatformName, 2);
	return 0;
}
int lua_ImGuiIO_BackendRendererName_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.BackendRendererName/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->BackendRendererName);
	return 1;
}
int lua_ImGuiIO_BackendRendererName_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.BackendRendererName/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->BackendRendererName, 2);
	return 0;
}
int lua_ImGuiIO_BackendUsingLegacyKeyArrays_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.BackendUsingLegacyKeyArrays/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->BackendUsingLegacyKeyArrays);
	return 1;
}
int lua_ImGuiIO_BackendUsingLegacyKeyArrays_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.BackendUsingLegacyKeyArrays/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->BackendUsingLegacyKeyArrays, 2);
	return 0;
}
int lua_ImGuiIO_BackendUsingLegacyNavInputArray_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.BackendUsingLegacyNavInputArray/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->BackendUsingLegacyNavInputArray);
	return 1;
}
int lua_ImGuiIO_BackendUsingLegacyNavInputArray_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.BackendUsingLegacyNavInputArray/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->BackendUsingLegacyNavInputArray, 2);
	return 0;
}
int lua_ImGuiIO_ConfigDockingAlwaysTabBar_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigDockingAlwaysTabBar/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->ConfigDockingAlwaysTabBar);
	return 1;
}
int lua_ImGuiIO_ConfigDockingAlwaysTabBar_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigDockingAlwaysTabBar/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->ConfigDockingAlwaysTabBar, 2);
	return 0;
}
int lua_ImGuiIO_ConfigDockingNoSplit_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigDockingNoSplit/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->ConfigDockingNoSplit);
	return 1;
}
int lua_ImGuiIO_ConfigDockingNoSplit_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigDockingNoSplit/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->ConfigDockingNoSplit, 2);
	return 0;
}
int lua_ImGuiIO_ConfigDockingTransparentPayload_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigDockingTransparentPayload/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->ConfigDockingTransparentPayload);
	return 1;
}
int lua_ImGuiIO_ConfigDockingTransparentPayload_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigDockingTransparentPayload/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->ConfigDockingTransparentPayload, 2);
	return 0;
}
int lua_ImGuiIO_ConfigDockingWithShift_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigDockingWithShift/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->ConfigDockingWithShift);
	return 1;
}
int lua_ImGuiIO_ConfigDockingWithShift_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigDockingWithShift/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->ConfigDockingWithShift, 2);
	return 0;
}
int lua_ImGuiIO_ConfigDragClickToInputText_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigDragClickToInputText/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->ConfigDragClickToInputText);
	return 1;
}
int lua_ImGuiIO_ConfigDragClickToInputText_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigDragClickToInputText/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->ConfigDragClickToInputText, 2);
	return 0;
}
int lua_ImGuiIO_ConfigFlags_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigFlags/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->ConfigFlags);
	return 1;
}
int lua_ImGuiIO_ConfigFlags_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigFlags/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->ConfigFlags, 2);
	return 0;
}
int lua_ImGuiIO_ConfigInputTextCursorBlink_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigInputTextCursorBlink/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->ConfigInputTextCursorBlink);
	return 1;
}
int lua_ImGuiIO_ConfigInputTextCursorBlink_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigInputTextCursorBlink/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->ConfigInputTextCursorBlink, 2);
	return 0;
}
int lua_ImGuiIO_ConfigInputTextEnterKeepActive_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigInputTextEnterKeepActive/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->ConfigInputTextEnterKeepActive);
	return 1;
}
int lua_ImGuiIO_ConfigInputTextEnterKeepActive_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigInputTextEnterKeepActive/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->ConfigInputTextEnterKeepActive, 2);
	return 0;
}
int lua_ImGuiIO_ConfigInputTrickleEventQueue_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigInputTrickleEventQueue/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->ConfigInputTrickleEventQueue);
	return 1;
}
int lua_ImGuiIO_ConfigInputTrickleEventQueue_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigInputTrickleEventQueue/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->ConfigInputTrickleEventQueue, 2);
	return 0;
}
int lua_ImGuiIO_ConfigMacOSXBehaviors_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigMacOSXBehaviors/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->ConfigMacOSXBehaviors);
	return 1;
}
int lua_ImGuiIO_ConfigMacOSXBehaviors_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigMacOSXBehaviors/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->ConfigMacOSXBehaviors, 2);
	return 0;
}
int lua_ImGuiIO_ConfigMemoryCompactTimer_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigMemoryCompactTimer/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->ConfigMemoryCompactTimer);
	return 1;
}
int lua_ImGuiIO_ConfigMemoryCompactTimer_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigMemoryCompactTimer/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->ConfigMemoryCompactTimer, 2);
	return 0;
}
int lua_ImGuiIO_ConfigViewportsNoAutoMerge_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigViewportsNoAutoMerge/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->ConfigViewportsNoAutoMerge);
	return 1;
}
int lua_ImGuiIO_ConfigViewportsNoAutoMerge_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigViewportsNoAutoMerge/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->ConfigViewportsNoAutoMerge, 2);
	return 0;
}
int lua_ImGuiIO_ConfigViewportsNoDecoration_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigViewportsNoDecoration/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->ConfigViewportsNoDecoration);
	return 1;
}
int lua_ImGuiIO_ConfigViewportsNoDecoration_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigViewportsNoDecoration/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->ConfigViewportsNoDecoration, 2);
	return 0;
}
int lua_ImGuiIO_ConfigViewportsNoDefaultParent_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigViewportsNoDefaultParent/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->ConfigViewportsNoDefaultParent);
	return 1;
}
int lua_ImGuiIO_ConfigViewportsNoDefaultParent_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigViewportsNoDefaultParent/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->ConfigViewportsNoDefaultParent, 2);
	return 0;
}
int lua_ImGuiIO_ConfigViewportsNoTaskBarIcon_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigViewportsNoTaskBarIcon/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->ConfigViewportsNoTaskBarIcon);
	return 1;
}
int lua_ImGuiIO_ConfigViewportsNoTaskBarIcon_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigViewportsNoTaskBarIcon/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->ConfigViewportsNoTaskBarIcon, 2);
	return 0;
}
int lua_ImGuiIO_ConfigWindowsMoveFromTitleBarOnly_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigWindowsMoveFromTitleBarOnly/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->ConfigWindowsMoveFromTitleBarOnly);
	return 1;
}
int lua_ImGuiIO_ConfigWindowsMoveFromTitleBarOnly_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigWindowsMoveFromTitleBarOnly/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->ConfigWindowsMoveFromTitleBarOnly, 2);
	return 0;
}
int lua_ImGuiIO_ConfigWindowsResizeFromEdges_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigWindowsResizeFromEdges/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->ConfigWindowsResizeFromEdges);
	return 1;
}
int lua_ImGuiIO_ConfigWindowsResizeFromEdges_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.ConfigWindowsResizeFromEdges/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->ConfigWindowsResizeFromEdges, 2);
	return 0;
}
int lua_ImGuiIO_DeltaTime_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.DeltaTime/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->DeltaTime);
	return 1;
}
int lua_ImGuiIO_DeltaTime_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.DeltaTime/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->DeltaTime, 2);
	return 0;
}
int lua_ImGuiIO_DisplayFramebufferScale_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.DisplayFramebufferScale/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->DisplayFramebufferScale);
	return 1;
}
int lua_ImGuiIO_DisplayFramebufferScale_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.DisplayFramebufferScale/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->DisplayFramebufferScale, 2);
	return 0;
}
int lua_ImGuiIO_DisplaySize_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.DisplaySize/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->DisplaySize);
	return 1;
}
int lua_ImGuiIO_DisplaySize_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.DisplaySize/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->DisplaySize, 2);
	return 0;
}
int lua_ImGuiIO_FontAllowUserScaling_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.FontAllowUserScaling/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->FontAllowUserScaling);
	return 1;
}
int lua_ImGuiIO_FontAllowUserScaling_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.FontAllowUserScaling/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->FontAllowUserScaling, 2);
	return 0;
}
int lua_ImGuiIO_FontDefault_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.FontDefault/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->FontDefault);
	return 1;
}
int lua_ImGuiIO_FontDefault_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.FontDefault/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->FontDefault, 2);
	return 0;
}
int lua_ImGuiIO_FontGlobalScale_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.FontGlobalScale/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->FontGlobalScale);
	return 1;
}
int lua_ImGuiIO_FontGlobalScale_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.FontGlobalScale/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->FontGlobalScale, 2);
	return 0;
}
int lua_ImGuiIO_Fonts_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.Fonts/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->Fonts);
	return 1;
}
int lua_ImGuiIO_Fonts_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.Fonts/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->Fonts, 2);
	return 0;
}
int lua_ImGuiIO_Framerate_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.Framerate/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->Framerate);
	return 1;
}
int lua_ImGuiIO_Framerate_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.Framerate/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->Framerate, 2);
	return 0;
}
int lua_ImGuiIO_HoverDelayNormal_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.HoverDelayNormal/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->HoverDelayNormal);
	return 1;
}
int lua_ImGuiIO_HoverDelayNormal_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.HoverDelayNormal/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->HoverDelayNormal, 2);
	return 0;
}
int lua_ImGuiIO_HoverDelayShort_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.HoverDelayShort/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->HoverDelayShort);
	return 1;
}
int lua_ImGuiIO_HoverDelayShort_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.HoverDelayShort/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->HoverDelayShort, 2);
	return 0;
}
int lua_ImGuiIO_IniFilename_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.IniFilename/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->IniFilename);
	return 1;
}
int lua_ImGuiIO_IniFilename_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.IniFilename/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->IniFilename, 2);
	return 0;
}
int lua_ImGuiIO_IniSavingRate_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.IniSavingRate/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->IniSavingRate);
	return 1;
}
int lua_ImGuiIO_IniSavingRate_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.IniSavingRate/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->IniSavingRate, 2);
	return 0;
}
int lua_ImGuiIO_InputQueueSurrogate_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.InputQueueSurrogate/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->InputQueueSurrogate);
	return 1;
}
int lua_ImGuiIO_InputQueueSurrogate_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.InputQueueSurrogate/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->InputQueueSurrogate, 2);
	return 0;
}
int lua_ImGuiIO_KeyAlt_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.KeyAlt/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->KeyAlt);
	return 1;
}
int lua_ImGuiIO_KeyAlt_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.KeyAlt/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->KeyAlt, 2);
	return 0;
}
int lua_ImGuiIO_KeyCtrl_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.KeyCtrl/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->KeyCtrl);
	return 1;
}
int lua_ImGuiIO_KeyCtrl_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.KeyCtrl/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->KeyCtrl, 2);
	return 0;
}
int lua_ImGuiIO_KeyMods_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.KeyMods/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->KeyMods);
	return 1;
}
int lua_ImGuiIO_KeyMods_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.KeyMods/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->KeyMods, 2);
	return 0;
}
int lua_ImGuiIO_KeyRepeatDelay_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.KeyRepeatDelay/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->KeyRepeatDelay);
	return 1;
}
int lua_ImGuiIO_KeyRepeatDelay_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.KeyRepeatDelay/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->KeyRepeatDelay, 2);
	return 0;
}
int lua_ImGuiIO_KeyRepeatRate_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.KeyRepeatRate/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->KeyRepeatRate);
	return 1;
}
int lua_ImGuiIO_KeyRepeatRate_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.KeyRepeatRate/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->KeyRepeatRate, 2);
	return 0;
}
int lua_ImGuiIO_KeyShift_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.KeyShift/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->KeyShift);
	return 1;
}
int lua_ImGuiIO_KeyShift_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.KeyShift/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->KeyShift, 2);
	return 0;
}
int lua_ImGuiIO_KeySuper_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.KeySuper/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->KeySuper);
	return 1;
}
int lua_ImGuiIO_KeySuper_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.KeySuper/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->KeySuper, 2);
	return 0;
}
int lua_ImGuiIO_LogFilename_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.LogFilename/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->LogFilename);
	return 1;
}
int lua_ImGuiIO_LogFilename_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.LogFilename/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->LogFilename, 2);
	return 0;
}
int lua_ImGuiIO_MetricsActiveAllocations_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MetricsActiveAllocations/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->MetricsActiveAllocations);
	return 1;
}
int lua_ImGuiIO_MetricsActiveAllocations_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MetricsActiveAllocations/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->MetricsActiveAllocations, 2);
	return 0;
}
int lua_ImGuiIO_MetricsActiveWindows_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MetricsActiveWindows/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->MetricsActiveWindows);
	return 1;
}
int lua_ImGuiIO_MetricsActiveWindows_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MetricsActiveWindows/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->MetricsActiveWindows, 2);
	return 0;
}
int lua_ImGuiIO_MetricsRenderIndices_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MetricsRenderIndices/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->MetricsRenderIndices);
	return 1;
}
int lua_ImGuiIO_MetricsRenderIndices_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MetricsRenderIndices/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->MetricsRenderIndices, 2);
	return 0;
}
int lua_ImGuiIO_MetricsRenderVertices_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MetricsRenderVertices/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->MetricsRenderVertices);
	return 1;
}
int lua_ImGuiIO_MetricsRenderVertices_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MetricsRenderVertices/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->MetricsRenderVertices, 2);
	return 0;
}
int lua_ImGuiIO_MetricsRenderWindows_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MetricsRenderWindows/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->MetricsRenderWindows);
	return 1;
}
int lua_ImGuiIO_MetricsRenderWindows_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MetricsRenderWindows/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->MetricsRenderWindows, 2);
	return 0;
}
int lua_ImGuiIO_MouseDelta_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MouseDelta/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->MouseDelta);
	return 1;
}
int lua_ImGuiIO_MouseDelta_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MouseDelta/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->MouseDelta, 2);
	return 0;
}
int lua_ImGuiIO_MouseDoubleClickMaxDist_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MouseDoubleClickMaxDist/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->MouseDoubleClickMaxDist);
	return 1;
}
int lua_ImGuiIO_MouseDoubleClickMaxDist_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MouseDoubleClickMaxDist/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->MouseDoubleClickMaxDist, 2);
	return 0;
}
int lua_ImGuiIO_MouseDoubleClickTime_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MouseDoubleClickTime/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->MouseDoubleClickTime);
	return 1;
}
int lua_ImGuiIO_MouseDoubleClickTime_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MouseDoubleClickTime/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->MouseDoubleClickTime, 2);
	return 0;
}
int lua_ImGuiIO_MouseDragThreshold_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MouseDragThreshold/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->MouseDragThreshold);
	return 1;
}
int lua_ImGuiIO_MouseDragThreshold_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MouseDragThreshold/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->MouseDragThreshold, 2);
	return 0;
}
int lua_ImGuiIO_MouseDrawCursor_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MouseDrawCursor/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->MouseDrawCursor);
	return 1;
}
int lua_ImGuiIO_MouseDrawCursor_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MouseDrawCursor/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->MouseDrawCursor, 2);
	return 0;
}
int lua_ImGuiIO_MouseHoveredViewport_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MouseHoveredViewport/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->MouseHoveredViewport);
	return 1;
}
int lua_ImGuiIO_MouseHoveredViewport_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MouseHoveredViewport/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->MouseHoveredViewport, 2);
	return 0;
}
int lua_ImGuiIO_MousePos_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MousePos/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->MousePos);
	return 1;
}
int lua_ImGuiIO_MousePos_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MousePos/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->MousePos, 2);
	return 0;
}
int lua_ImGuiIO_MousePosPrev_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MousePosPrev/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->MousePosPrev);
	return 1;
}
int lua_ImGuiIO_MousePosPrev_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MousePosPrev/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->MousePosPrev, 2);
	return 0;
}
int lua_ImGuiIO_MouseWheel_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MouseWheel/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->MouseWheel);
	return 1;
}
int lua_ImGuiIO_MouseWheel_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MouseWheel/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->MouseWheel, 2);
	return 0;
}
int lua_ImGuiIO_MouseWheelH_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MouseWheelH/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->MouseWheelH);
	return 1;
}
int lua_ImGuiIO_MouseWheelH_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.MouseWheelH/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->MouseWheelH, 2);
	return 0;
}
int lua_ImGuiIO_NavActive_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.NavActive/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->NavActive);
	return 1;
}
int lua_ImGuiIO_NavActive_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.NavActive/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->NavActive, 2);
	return 0;
}
int lua_ImGuiIO_NavVisible_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.NavVisible/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->NavVisible);
	return 1;
}
int lua_ImGuiIO_NavVisible_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.NavVisible/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->NavVisible, 2);
	return 0;
}
int lua_ImGuiIO_PenPressure_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.PenPressure/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->PenPressure);
	return 1;
}
int lua_ImGuiIO_PenPressure_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.PenPressure/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->PenPressure, 2);
	return 0;
}
int lua_ImGuiIO_WantCaptureKeyboard_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.WantCaptureKeyboard/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->WantCaptureKeyboard);
	return 1;
}
int lua_ImGuiIO_WantCaptureKeyboard_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.WantCaptureKeyboard/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->WantCaptureKeyboard, 2);
	return 0;
}
int lua_ImGuiIO_WantCaptureMouse_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.WantCaptureMouse/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->WantCaptureMouse);
	return 1;
}
int lua_ImGuiIO_WantCaptureMouse_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.WantCaptureMouse/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->WantCaptureMouse, 2);
	return 0;
}
int lua_ImGuiIO_WantCaptureMouseUnlessPopupClose_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.WantCaptureMouseUnlessPopupClose/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->WantCaptureMouseUnlessPopupClose);
	return 1;
}
int lua_ImGuiIO_WantCaptureMouseUnlessPopupClose_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.WantCaptureMouseUnlessPopupClose/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->WantCaptureMouseUnlessPopupClose, 2);
	return 0;
}
int lua_ImGuiIO_WantSaveIniSettings_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.WantSaveIniSettings/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->WantSaveIniSettings);
	return 1;
}
int lua_ImGuiIO_WantSaveIniSettings_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.WantSaveIniSettings/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->WantSaveIniSettings, 2);
	return 0;
}
int lua_ImGuiIO_WantSetMousePos_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.WantSetMousePos/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->WantSetMousePos);
	return 1;
}
int lua_ImGuiIO_WantSetMousePos_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.WantSetMousePos/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->WantSetMousePos, 2);
	return 0;
}
int lua_ImGuiIO_WantTextInput_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.WantTextInput/getter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_PUSH_NATIVE(cobj->WantTextInput);
	return 1;
}
int lua_ImGuiIO_WantTextInput_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImGuiIO.WantTextInput/setter");
	auto cobj = LUA_TO_COBJ(ImGuiIO*, 1);
	LUA_NATIVE_SETTER(cobj->WantTextInput, 2);
	return 0;
}
int lua_ImGuiIO_addFocusEvent(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImGuiIO", "imgui.ImGuiIO:addFocusEvent");
	LUA_TRY_INVOKE(1, &ImGuiIO::AddFocusEvent);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGuiIO_addInputCharacter(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImGuiIO", "imgui.ImGuiIO:addInputCharacter");
	LUA_TRY_INVOKE(1, &ImGuiIO::AddInputCharacter);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGuiIO_addInputCharacterUTF16(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImGuiIO", "imgui.ImGuiIO:addInputCharacterUTF16");
	LUA_TRY_INVOKE(1, &ImGuiIO::AddInputCharacterUTF16);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGuiIO_addInputCharactersUTF8(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImGuiIO", "imgui.ImGuiIO:addInputCharactersUTF8");
	LUA_TRY_INVOKE(1, &ImGuiIO::AddInputCharactersUTF8);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGuiIO_addKeyAnalogEvent(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImGuiIO", "imgui.ImGuiIO:addKeyAnalogEvent");
	LUA_TRY_INVOKE(3, &ImGuiIO::AddKeyAnalogEvent);
	LUA_INVOKE_FOOTER("3");
}
int lua_ImGuiIO_addKeyEvent(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImGuiIO", "imgui.ImGuiIO:addKeyEvent");
	LUA_TRY_INVOKE(2, &ImGuiIO::AddKeyEvent);
	LUA_INVOKE_FOOTER("2");
}
int lua_ImGuiIO_addMouseButtonEvent(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImGuiIO", "imgui.ImGuiIO:addMouseButtonEvent");
	LUA_TRY_INVOKE(2, &ImGuiIO::AddMouseButtonEvent);
	LUA_INVOKE_FOOTER("2");
}
int lua_ImGuiIO_addMousePosEvent(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImGuiIO", "imgui.ImGuiIO:addMousePosEvent");
	LUA_TRY_INVOKE(2, &ImGuiIO::AddMousePosEvent);
	LUA_INVOKE_FOOTER("2");
}
int lua_ImGuiIO_addMouseViewportEvent(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImGuiIO", "imgui.ImGuiIO:addMouseViewportEvent");
	LUA_TRY_INVOKE(1, &ImGuiIO::AddMouseViewportEvent);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGuiIO_addMouseWheelEvent(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImGuiIO", "imgui.ImGuiIO:addMouseWheelEvent");
	LUA_TRY_INVOKE(2, &ImGuiIO::AddMouseWheelEvent);
	LUA_INVOKE_FOOTER("2");
}
int lua_ImGuiIO_clearInputCharacters(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImGuiIO", "imgui.ImGuiIO:clearInputCharacters");
	LUA_TRY_INVOKE(0, &ImGuiIO::ClearInputCharacters);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGuiIO_clearInputKeys(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImGuiIO", "imgui.ImGuiIO:clearInputKeys");
	LUA_TRY_INVOKE(0, &ImGuiIO::ClearInputKeys);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGuiIO_setAppAcceptingEvents(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImGuiIO", "imgui.ImGuiIO:setAppAcceptingEvents");
	LUA_TRY_INVOKE(1, &ImGuiIO::SetAppAcceptingEvents);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGuiIO_setKeyEventNativeData(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImGuiIO", "imgui.ImGuiIO:setKeyEventNativeData");
	LUA_TRY_INVOKE(4, static_cast<void(ImGuiIO::*)(ImGuiKey, int, int, int)>(&ImGuiIO::SetKeyEventNativeData));
	LUA_TRY_INVOKE(3, [](ImGuiIO* obj,ImGuiKey arg0,int arg1,int arg2){{return obj->SetKeyEventNativeData(std::move(arg0),std::move(arg1),std::move(arg2));}});
	LUA_INVOKE_FOOTER("3,4");
}
int luaReg_imguiIO_imguiImGuiIO(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_CLS_DEF(ImGuiIO, "ImGuiIO", "imgui.ImGuiIO",
		nullptr, nullptr);
	LUA_FIELD("AppAcceptingEvents", lua_ImGuiIO_AppAcceptingEvents_getter, lua_ImGuiIO_AppAcceptingEvents_setter);
	LUA_FIELD("AppFocusLost", lua_ImGuiIO_AppFocusLost_getter, lua_ImGuiIO_AppFocusLost_setter);
	LUA_FIELD("BackendFlags", lua_ImGuiIO_BackendFlags_getter, lua_ImGuiIO_BackendFlags_setter);
	LUA_FIELD("BackendPlatformName", lua_ImGuiIO_BackendPlatformName_getter, lua_ImGuiIO_BackendPlatformName_setter);
	LUA_FIELD("BackendRendererName", lua_ImGuiIO_BackendRendererName_getter, lua_ImGuiIO_BackendRendererName_setter);
	LUA_FIELD("BackendUsingLegacyKeyArrays", lua_ImGuiIO_BackendUsingLegacyKeyArrays_getter, lua_ImGuiIO_BackendUsingLegacyKeyArrays_setter);
	LUA_FIELD("BackendUsingLegacyNavInputArray", lua_ImGuiIO_BackendUsingLegacyNavInputArray_getter, lua_ImGuiIO_BackendUsingLegacyNavInputArray_setter);
	LUA_FIELD("ConfigDockingAlwaysTabBar", lua_ImGuiIO_ConfigDockingAlwaysTabBar_getter, lua_ImGuiIO_ConfigDockingAlwaysTabBar_setter);
	LUA_FIELD("ConfigDockingNoSplit", lua_ImGuiIO_ConfigDockingNoSplit_getter, lua_ImGuiIO_ConfigDockingNoSplit_setter);
	LUA_FIELD("ConfigDockingTransparentPayload", lua_ImGuiIO_ConfigDockingTransparentPayload_getter, lua_ImGuiIO_ConfigDockingTransparentPayload_setter);
	LUA_FIELD("ConfigDockingWithShift", lua_ImGuiIO_ConfigDockingWithShift_getter, lua_ImGuiIO_ConfigDockingWithShift_setter);
	LUA_FIELD("ConfigDragClickToInputText", lua_ImGuiIO_ConfigDragClickToInputText_getter, lua_ImGuiIO_ConfigDragClickToInputText_setter);
	LUA_FIELD("ConfigFlags", lua_ImGuiIO_ConfigFlags_getter, lua_ImGuiIO_ConfigFlags_setter);
	LUA_FIELD("ConfigInputTextCursorBlink", lua_ImGuiIO_ConfigInputTextCursorBlink_getter, lua_ImGuiIO_ConfigInputTextCursorBlink_setter);
	LUA_FIELD("ConfigInputTextEnterKeepActive", lua_ImGuiIO_ConfigInputTextEnterKeepActive_getter, lua_ImGuiIO_ConfigInputTextEnterKeepActive_setter);
	LUA_FIELD("ConfigInputTrickleEventQueue", lua_ImGuiIO_ConfigInputTrickleEventQueue_getter, lua_ImGuiIO_ConfigInputTrickleEventQueue_setter);
	LUA_FIELD("ConfigMacOSXBehaviors", lua_ImGuiIO_ConfigMacOSXBehaviors_getter, lua_ImGuiIO_ConfigMacOSXBehaviors_setter);
	LUA_FIELD("ConfigMemoryCompactTimer", lua_ImGuiIO_ConfigMemoryCompactTimer_getter, lua_ImGuiIO_ConfigMemoryCompactTimer_setter);
	LUA_FIELD("ConfigViewportsNoAutoMerge", lua_ImGuiIO_ConfigViewportsNoAutoMerge_getter, lua_ImGuiIO_ConfigViewportsNoAutoMerge_setter);
	LUA_FIELD("ConfigViewportsNoDecoration", lua_ImGuiIO_ConfigViewportsNoDecoration_getter, lua_ImGuiIO_ConfigViewportsNoDecoration_setter);
	LUA_FIELD("ConfigViewportsNoDefaultParent", lua_ImGuiIO_ConfigViewportsNoDefaultParent_getter, lua_ImGuiIO_ConfigViewportsNoDefaultParent_setter);
	LUA_FIELD("ConfigViewportsNoTaskBarIcon", lua_ImGuiIO_ConfigViewportsNoTaskBarIcon_getter, lua_ImGuiIO_ConfigViewportsNoTaskBarIcon_setter);
	LUA_FIELD("ConfigWindowsMoveFromTitleBarOnly", lua_ImGuiIO_ConfigWindowsMoveFromTitleBarOnly_getter, lua_ImGuiIO_ConfigWindowsMoveFromTitleBarOnly_setter);
	LUA_FIELD("ConfigWindowsResizeFromEdges", lua_ImGuiIO_ConfigWindowsResizeFromEdges_getter, lua_ImGuiIO_ConfigWindowsResizeFromEdges_setter);
	LUA_FIELD("DeltaTime", lua_ImGuiIO_DeltaTime_getter, lua_ImGuiIO_DeltaTime_setter);
	LUA_FIELD("DisplayFramebufferScale", lua_ImGuiIO_DisplayFramebufferScale_getter, lua_ImGuiIO_DisplayFramebufferScale_setter);
	LUA_FIELD("DisplaySize", lua_ImGuiIO_DisplaySize_getter, lua_ImGuiIO_DisplaySize_setter);
	LUA_FIELD("FontAllowUserScaling", lua_ImGuiIO_FontAllowUserScaling_getter, lua_ImGuiIO_FontAllowUserScaling_setter);
	LUA_FIELD("FontDefault", lua_ImGuiIO_FontDefault_getter, lua_ImGuiIO_FontDefault_setter);
	LUA_FIELD("FontGlobalScale", lua_ImGuiIO_FontGlobalScale_getter, lua_ImGuiIO_FontGlobalScale_setter);
	LUA_FIELD("Fonts", lua_ImGuiIO_Fonts_getter, lua_ImGuiIO_Fonts_setter);
	LUA_FIELD("Framerate", lua_ImGuiIO_Framerate_getter, lua_ImGuiIO_Framerate_setter);
	LUA_FIELD("HoverDelayNormal", lua_ImGuiIO_HoverDelayNormal_getter, lua_ImGuiIO_HoverDelayNormal_setter);
	LUA_FIELD("HoverDelayShort", lua_ImGuiIO_HoverDelayShort_getter, lua_ImGuiIO_HoverDelayShort_setter);
	LUA_FIELD("IniFilename", lua_ImGuiIO_IniFilename_getter, lua_ImGuiIO_IniFilename_setter);
	LUA_FIELD("IniSavingRate", lua_ImGuiIO_IniSavingRate_getter, lua_ImGuiIO_IniSavingRate_setter);
	LUA_FIELD("InputQueueSurrogate", lua_ImGuiIO_InputQueueSurrogate_getter, lua_ImGuiIO_InputQueueSurrogate_setter);
	LUA_FIELD("KeyAlt", lua_ImGuiIO_KeyAlt_getter, lua_ImGuiIO_KeyAlt_setter);
	LUA_FIELD("KeyCtrl", lua_ImGuiIO_KeyCtrl_getter, lua_ImGuiIO_KeyCtrl_setter);
	LUA_FIELD("KeyMods", lua_ImGuiIO_KeyMods_getter, lua_ImGuiIO_KeyMods_setter);
	LUA_FIELD("KeyRepeatDelay", lua_ImGuiIO_KeyRepeatDelay_getter, lua_ImGuiIO_KeyRepeatDelay_setter);
	LUA_FIELD("KeyRepeatRate", lua_ImGuiIO_KeyRepeatRate_getter, lua_ImGuiIO_KeyRepeatRate_setter);
	LUA_FIELD("KeyShift", lua_ImGuiIO_KeyShift_getter, lua_ImGuiIO_KeyShift_setter);
	LUA_FIELD("KeySuper", lua_ImGuiIO_KeySuper_getter, lua_ImGuiIO_KeySuper_setter);
	LUA_FIELD("LogFilename", lua_ImGuiIO_LogFilename_getter, lua_ImGuiIO_LogFilename_setter);
	LUA_FIELD("MetricsActiveAllocations", lua_ImGuiIO_MetricsActiveAllocations_getter, lua_ImGuiIO_MetricsActiveAllocations_setter);
	LUA_FIELD("MetricsActiveWindows", lua_ImGuiIO_MetricsActiveWindows_getter, lua_ImGuiIO_MetricsActiveWindows_setter);
	LUA_FIELD("MetricsRenderIndices", lua_ImGuiIO_MetricsRenderIndices_getter, lua_ImGuiIO_MetricsRenderIndices_setter);
	LUA_FIELD("MetricsRenderVertices", lua_ImGuiIO_MetricsRenderVertices_getter, lua_ImGuiIO_MetricsRenderVertices_setter);
	LUA_FIELD("MetricsRenderWindows", lua_ImGuiIO_MetricsRenderWindows_getter, lua_ImGuiIO_MetricsRenderWindows_setter);
	LUA_FIELD("MouseDelta", lua_ImGuiIO_MouseDelta_getter, lua_ImGuiIO_MouseDelta_setter);
	LUA_FIELD("MouseDoubleClickMaxDist", lua_ImGuiIO_MouseDoubleClickMaxDist_getter, lua_ImGuiIO_MouseDoubleClickMaxDist_setter);
	LUA_FIELD("MouseDoubleClickTime", lua_ImGuiIO_MouseDoubleClickTime_getter, lua_ImGuiIO_MouseDoubleClickTime_setter);
	LUA_FIELD("MouseDragThreshold", lua_ImGuiIO_MouseDragThreshold_getter, lua_ImGuiIO_MouseDragThreshold_setter);
	LUA_FIELD("MouseDrawCursor", lua_ImGuiIO_MouseDrawCursor_getter, lua_ImGuiIO_MouseDrawCursor_setter);
	LUA_FIELD("MouseHoveredViewport", lua_ImGuiIO_MouseHoveredViewport_getter, lua_ImGuiIO_MouseHoveredViewport_setter);
	LUA_FIELD("MousePos", lua_ImGuiIO_MousePos_getter, lua_ImGuiIO_MousePos_setter);
	LUA_FIELD("MousePosPrev", lua_ImGuiIO_MousePosPrev_getter, lua_ImGuiIO_MousePosPrev_setter);
	LUA_FIELD("MouseWheel", lua_ImGuiIO_MouseWheel_getter, lua_ImGuiIO_MouseWheel_setter);
	LUA_FIELD("MouseWheelH", lua_ImGuiIO_MouseWheelH_getter, lua_ImGuiIO_MouseWheelH_setter);
	LUA_FIELD("NavActive", lua_ImGuiIO_NavActive_getter, lua_ImGuiIO_NavActive_setter);
	LUA_FIELD("NavVisible", lua_ImGuiIO_NavVisible_getter, lua_ImGuiIO_NavVisible_setter);
	LUA_FIELD("PenPressure", lua_ImGuiIO_PenPressure_getter, lua_ImGuiIO_PenPressure_setter);
	LUA_FIELD("WantCaptureKeyboard", lua_ImGuiIO_WantCaptureKeyboard_getter, lua_ImGuiIO_WantCaptureKeyboard_setter);
	LUA_FIELD("WantCaptureMouse", lua_ImGuiIO_WantCaptureMouse_getter, lua_ImGuiIO_WantCaptureMouse_setter);
	LUA_FIELD("WantCaptureMouseUnlessPopupClose", lua_ImGuiIO_WantCaptureMouseUnlessPopupClose_getter, lua_ImGuiIO_WantCaptureMouseUnlessPopupClose_setter);
	LUA_FIELD("WantSaveIniSettings", lua_ImGuiIO_WantSaveIniSettings_getter, lua_ImGuiIO_WantSaveIniSettings_setter);
	LUA_FIELD("WantSetMousePos", lua_ImGuiIO_WantSetMousePos_getter, lua_ImGuiIO_WantSetMousePos_setter);
	LUA_FIELD("WantTextInput", lua_ImGuiIO_WantTextInput_getter, lua_ImGuiIO_WantTextInput_setter);
	LUA_METHOD("addFocusEvent", lua_ImGuiIO_addFocusEvent);
	LUA_METHOD("addInputCharacter", lua_ImGuiIO_addInputCharacter);
	LUA_METHOD("addInputCharacterUTF16", lua_ImGuiIO_addInputCharacterUTF16);
	LUA_METHOD("addInputCharactersUTF8", lua_ImGuiIO_addInputCharactersUTF8);
	LUA_METHOD("addKeyAnalogEvent", lua_ImGuiIO_addKeyAnalogEvent);
	LUA_METHOD("addKeyEvent", lua_ImGuiIO_addKeyEvent);
	LUA_METHOD("addMouseButtonEvent", lua_ImGuiIO_addMouseButtonEvent);
	LUA_METHOD("addMousePosEvent", lua_ImGuiIO_addMousePosEvent);
	LUA_METHOD("addMouseViewportEvent", lua_ImGuiIO_addMouseViewportEvent);
	LUA_METHOD("addMouseWheelEvent", lua_ImGuiIO_addMouseWheelEvent);
	LUA_METHOD("clearInputCharacters", lua_ImGuiIO_clearInputCharacters);
	LUA_METHOD("clearInputKeys", lua_ImGuiIO_clearInputKeys);
	LUA_METHOD("setAppAcceptingEvents", lua_ImGuiIO_setAppAcceptingEvents);
	LUA_METHOD("setKeyEventNativeData", lua_ImGuiIO_setKeyEventNativeData);
	LUA_CLS_END();
	LUA_ENTRY_END(1);
	return 0;
}
