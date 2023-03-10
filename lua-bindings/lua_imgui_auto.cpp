#include "lua_imgui_auto.hpp"
#include "imgui.h"
#include "imgui_lua.hpp"

int luaReg_imgui_imguiImGuiWindowFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiWindowFlags");
	LUA_ENUM_ENTRY("None", ImGuiWindowFlags_::ImGuiWindowFlags_None);
	LUA_ENUM_ENTRY("NoTitleBar", ImGuiWindowFlags_::ImGuiWindowFlags_NoTitleBar);
	LUA_ENUM_ENTRY("NoResize", ImGuiWindowFlags_::ImGuiWindowFlags_NoResize);
	LUA_ENUM_ENTRY("NoMove", ImGuiWindowFlags_::ImGuiWindowFlags_NoMove);
	LUA_ENUM_ENTRY("NoScrollbar", ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar);
	LUA_ENUM_ENTRY("NoScrollWithMouse", ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollWithMouse);
	LUA_ENUM_ENTRY("NoCollapse", ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse);
	LUA_ENUM_ENTRY("AlwaysAutoResize", ImGuiWindowFlags_::ImGuiWindowFlags_AlwaysAutoResize);
	LUA_ENUM_ENTRY("NoBackground", ImGuiWindowFlags_::ImGuiWindowFlags_NoBackground);
	LUA_ENUM_ENTRY("NoSavedSettings", ImGuiWindowFlags_::ImGuiWindowFlags_NoSavedSettings);
	LUA_ENUM_ENTRY("NoMouseInputs", ImGuiWindowFlags_::ImGuiWindowFlags_NoMouseInputs);
	LUA_ENUM_ENTRY("MenuBar", ImGuiWindowFlags_::ImGuiWindowFlags_MenuBar);
	LUA_ENUM_ENTRY("HorizontalScrollbar", ImGuiWindowFlags_::ImGuiWindowFlags_HorizontalScrollbar);
	LUA_ENUM_ENTRY("NoFocusOnAppearing", ImGuiWindowFlags_::ImGuiWindowFlags_NoFocusOnAppearing);
	LUA_ENUM_ENTRY("NoBringToFrontOnFocus", ImGuiWindowFlags_::ImGuiWindowFlags_NoBringToFrontOnFocus);
	LUA_ENUM_ENTRY("AlwaysVerticalScrollbar", ImGuiWindowFlags_::ImGuiWindowFlags_AlwaysVerticalScrollbar);
	LUA_ENUM_ENTRY("AlwaysHorizontalScrollbar", ImGuiWindowFlags_::ImGuiWindowFlags_AlwaysHorizontalScrollbar);
	LUA_ENUM_ENTRY("AlwaysUseWindowPadding", ImGuiWindowFlags_::ImGuiWindowFlags_AlwaysUseWindowPadding);
	LUA_ENUM_ENTRY("NoNavInputs", ImGuiWindowFlags_::ImGuiWindowFlags_NoNavInputs);
	LUA_ENUM_ENTRY("NoNavFocus", ImGuiWindowFlags_::ImGuiWindowFlags_NoNavFocus);
	LUA_ENUM_ENTRY("UnsavedDocument", ImGuiWindowFlags_::ImGuiWindowFlags_UnsavedDocument);
	LUA_ENUM_ENTRY("NoDocking", ImGuiWindowFlags_::ImGuiWindowFlags_NoDocking);
	LUA_ENUM_ENTRY("NoNav", ImGuiWindowFlags_::ImGuiWindowFlags_NoNav);
	LUA_ENUM_ENTRY("NoDecoration", ImGuiWindowFlags_::ImGuiWindowFlags_NoDecoration);
	LUA_ENUM_ENTRY("NoInputs", ImGuiWindowFlags_::ImGuiWindowFlags_NoInputs);
	LUA_ENUM_ENTRY("NavFlattened", ImGuiWindowFlags_::ImGuiWindowFlags_NavFlattened);
	LUA_ENUM_ENTRY("ChildWindow", ImGuiWindowFlags_::ImGuiWindowFlags_ChildWindow);
	LUA_ENUM_ENTRY("Tooltip", ImGuiWindowFlags_::ImGuiWindowFlags_Tooltip);
	LUA_ENUM_ENTRY("Popup", ImGuiWindowFlags_::ImGuiWindowFlags_Popup);
	LUA_ENUM_ENTRY("Modal", ImGuiWindowFlags_::ImGuiWindowFlags_Modal);
	LUA_ENUM_ENTRY("ChildMenu", ImGuiWindowFlags_::ImGuiWindowFlags_ChildMenu);
	LUA_ENUM_ENTRY("DockNodeHost", ImGuiWindowFlags_::ImGuiWindowFlags_DockNodeHost);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiInputTextFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiInputTextFlags");
	LUA_ENUM_ENTRY("None", ImGuiInputTextFlags_::ImGuiInputTextFlags_None);
	LUA_ENUM_ENTRY("CharsDecimal", ImGuiInputTextFlags_::ImGuiInputTextFlags_CharsDecimal);
	LUA_ENUM_ENTRY("CharsHexadecimal", ImGuiInputTextFlags_::ImGuiInputTextFlags_CharsHexadecimal);
	LUA_ENUM_ENTRY("CharsUppercase", ImGuiInputTextFlags_::ImGuiInputTextFlags_CharsUppercase);
	LUA_ENUM_ENTRY("CharsNoBlank", ImGuiInputTextFlags_::ImGuiInputTextFlags_CharsNoBlank);
	LUA_ENUM_ENTRY("AutoSelectAll", ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll);
	LUA_ENUM_ENTRY("EnterReturnsTrue", ImGuiInputTextFlags_::ImGuiInputTextFlags_EnterReturnsTrue);
	LUA_ENUM_ENTRY("CallbackCompletion", ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackCompletion);
	LUA_ENUM_ENTRY("CallbackHistory", ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackHistory);
	LUA_ENUM_ENTRY("CallbackAlways", ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackAlways);
	LUA_ENUM_ENTRY("CallbackCharFilter", ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackCharFilter);
	LUA_ENUM_ENTRY("AllowTabInput", ImGuiInputTextFlags_::ImGuiInputTextFlags_AllowTabInput);
	LUA_ENUM_ENTRY("CtrlEnterForNewLine", ImGuiInputTextFlags_::ImGuiInputTextFlags_CtrlEnterForNewLine);
	LUA_ENUM_ENTRY("NoHorizontalScroll", ImGuiInputTextFlags_::ImGuiInputTextFlags_NoHorizontalScroll);
	LUA_ENUM_ENTRY("AlwaysOverwrite", ImGuiInputTextFlags_::ImGuiInputTextFlags_AlwaysOverwrite);
	LUA_ENUM_ENTRY("ReadOnly", ImGuiInputTextFlags_::ImGuiInputTextFlags_ReadOnly);
	LUA_ENUM_ENTRY("Password", ImGuiInputTextFlags_::ImGuiInputTextFlags_Password);
	LUA_ENUM_ENTRY("NoUndoRedo", ImGuiInputTextFlags_::ImGuiInputTextFlags_NoUndoRedo);
	LUA_ENUM_ENTRY("CharsScientific", ImGuiInputTextFlags_::ImGuiInputTextFlags_CharsScientific);
	LUA_ENUM_ENTRY("CallbackResize", ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackResize);
	LUA_ENUM_ENTRY("CallbackEdit", ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackEdit);
	LUA_ENUM_ENTRY("EscapeClearsAll", ImGuiInputTextFlags_::ImGuiInputTextFlags_EscapeClearsAll);
	LUA_ENUM_ENTRY("AlwaysInsertMode", ImGuiInputTextFlags_::ImGuiInputTextFlags_AlwaysInsertMode);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiTreeNodeFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiTreeNodeFlags");
	LUA_ENUM_ENTRY("None", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_None);
	LUA_ENUM_ENTRY("Selected", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_Selected);
	LUA_ENUM_ENTRY("Framed", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_Framed);
	LUA_ENUM_ENTRY("AllowItemOverlap", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_AllowItemOverlap);
	LUA_ENUM_ENTRY("NoTreePushOnOpen", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_NoTreePushOnOpen);
	LUA_ENUM_ENTRY("NoAutoOpenOnLog", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_NoAutoOpenOnLog);
	LUA_ENUM_ENTRY("DefaultOpen", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_DefaultOpen);
	LUA_ENUM_ENTRY("OpenOnDoubleClick", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_OpenOnDoubleClick);
	LUA_ENUM_ENTRY("OpenOnArrow", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_OpenOnArrow);
	LUA_ENUM_ENTRY("Leaf", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_Leaf);
	LUA_ENUM_ENTRY("Bullet", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_Bullet);
	LUA_ENUM_ENTRY("FramePadding", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_FramePadding);
	LUA_ENUM_ENTRY("SpanAvailWidth", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_SpanAvailWidth);
	LUA_ENUM_ENTRY("SpanFullWidth", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_SpanFullWidth);
	LUA_ENUM_ENTRY("NavLeftJumpsBackHere", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_NavLeftJumpsBackHere);
	LUA_ENUM_ENTRY("CollapsingHeader", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_CollapsingHeader);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiPopupFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiPopupFlags");
	LUA_ENUM_ENTRY("None", ImGuiPopupFlags_::ImGuiPopupFlags_None);
	LUA_ENUM_ENTRY("MouseButtonLeft", ImGuiPopupFlags_::ImGuiPopupFlags_MouseButtonLeft);
	LUA_ENUM_ENTRY("MouseButtonRight", ImGuiPopupFlags_::ImGuiPopupFlags_MouseButtonRight);
	LUA_ENUM_ENTRY("MouseButtonMiddle", ImGuiPopupFlags_::ImGuiPopupFlags_MouseButtonMiddle);
	LUA_ENUM_ENTRY("MouseButtonMask_", ImGuiPopupFlags_::ImGuiPopupFlags_MouseButtonMask_);
	LUA_ENUM_ENTRY("MouseButtonDefault_", ImGuiPopupFlags_::ImGuiPopupFlags_MouseButtonDefault_);
	LUA_ENUM_ENTRY("NoOpenOverExistingPopup", ImGuiPopupFlags_::ImGuiPopupFlags_NoOpenOverExistingPopup);
	LUA_ENUM_ENTRY("NoOpenOverItems", ImGuiPopupFlags_::ImGuiPopupFlags_NoOpenOverItems);
	LUA_ENUM_ENTRY("AnyPopupId", ImGuiPopupFlags_::ImGuiPopupFlags_AnyPopupId);
	LUA_ENUM_ENTRY("AnyPopupLevel", ImGuiPopupFlags_::ImGuiPopupFlags_AnyPopupLevel);
	LUA_ENUM_ENTRY("AnyPopup", ImGuiPopupFlags_::ImGuiPopupFlags_AnyPopup);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiSelectableFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiSelectableFlags");
	LUA_ENUM_ENTRY("None", ImGuiSelectableFlags_::ImGuiSelectableFlags_None);
	LUA_ENUM_ENTRY("DontClosePopups", ImGuiSelectableFlags_::ImGuiSelectableFlags_DontClosePopups);
	LUA_ENUM_ENTRY("SpanAllColumns", ImGuiSelectableFlags_::ImGuiSelectableFlags_SpanAllColumns);
	LUA_ENUM_ENTRY("AllowDoubleClick", ImGuiSelectableFlags_::ImGuiSelectableFlags_AllowDoubleClick);
	LUA_ENUM_ENTRY("Disabled", ImGuiSelectableFlags_::ImGuiSelectableFlags_Disabled);
	LUA_ENUM_ENTRY("AllowItemOverlap", ImGuiSelectableFlags_::ImGuiSelectableFlags_AllowItemOverlap);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiComboFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiComboFlags");
	LUA_ENUM_ENTRY("None", ImGuiComboFlags_::ImGuiComboFlags_None);
	LUA_ENUM_ENTRY("PopupAlignLeft", ImGuiComboFlags_::ImGuiComboFlags_PopupAlignLeft);
	LUA_ENUM_ENTRY("HeightSmall", ImGuiComboFlags_::ImGuiComboFlags_HeightSmall);
	LUA_ENUM_ENTRY("HeightRegular", ImGuiComboFlags_::ImGuiComboFlags_HeightRegular);
	LUA_ENUM_ENTRY("HeightLarge", ImGuiComboFlags_::ImGuiComboFlags_HeightLarge);
	LUA_ENUM_ENTRY("HeightLargest", ImGuiComboFlags_::ImGuiComboFlags_HeightLargest);
	LUA_ENUM_ENTRY("NoArrowButton", ImGuiComboFlags_::ImGuiComboFlags_NoArrowButton);
	LUA_ENUM_ENTRY("NoPreview", ImGuiComboFlags_::ImGuiComboFlags_NoPreview);
	LUA_ENUM_ENTRY("HeightMask_", ImGuiComboFlags_::ImGuiComboFlags_HeightMask_);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiTabBarFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiTabBarFlags");
	LUA_ENUM_ENTRY("None", ImGuiTabBarFlags_::ImGuiTabBarFlags_None);
	LUA_ENUM_ENTRY("Reorderable", ImGuiTabBarFlags_::ImGuiTabBarFlags_Reorderable);
	LUA_ENUM_ENTRY("AutoSelectNewTabs", ImGuiTabBarFlags_::ImGuiTabBarFlags_AutoSelectNewTabs);
	LUA_ENUM_ENTRY("TabListPopupButton", ImGuiTabBarFlags_::ImGuiTabBarFlags_TabListPopupButton);
	LUA_ENUM_ENTRY("NoCloseWithMiddleMouseButton", ImGuiTabBarFlags_::ImGuiTabBarFlags_NoCloseWithMiddleMouseButton);
	LUA_ENUM_ENTRY("NoTabListScrollingButtons", ImGuiTabBarFlags_::ImGuiTabBarFlags_NoTabListScrollingButtons);
	LUA_ENUM_ENTRY("NoTooltip", ImGuiTabBarFlags_::ImGuiTabBarFlags_NoTooltip);
	LUA_ENUM_ENTRY("FittingPolicyResizeDown", ImGuiTabBarFlags_::ImGuiTabBarFlags_FittingPolicyResizeDown);
	LUA_ENUM_ENTRY("FittingPolicyScroll", ImGuiTabBarFlags_::ImGuiTabBarFlags_FittingPolicyScroll);
	LUA_ENUM_ENTRY("FittingPolicyMask_", ImGuiTabBarFlags_::ImGuiTabBarFlags_FittingPolicyMask_);
	LUA_ENUM_ENTRY("FittingPolicyDefault_", ImGuiTabBarFlags_::ImGuiTabBarFlags_FittingPolicyDefault_);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiTabItemFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiTabItemFlags");
	LUA_ENUM_ENTRY("None", ImGuiTabItemFlags_::ImGuiTabItemFlags_None);
	LUA_ENUM_ENTRY("UnsavedDocument", ImGuiTabItemFlags_::ImGuiTabItemFlags_UnsavedDocument);
	LUA_ENUM_ENTRY("SetSelected", ImGuiTabItemFlags_::ImGuiTabItemFlags_SetSelected);
	LUA_ENUM_ENTRY("NoCloseWithMiddleMouseButton", ImGuiTabItemFlags_::ImGuiTabItemFlags_NoCloseWithMiddleMouseButton);
	LUA_ENUM_ENTRY("NoPushId", ImGuiTabItemFlags_::ImGuiTabItemFlags_NoPushId);
	LUA_ENUM_ENTRY("NoTooltip", ImGuiTabItemFlags_::ImGuiTabItemFlags_NoTooltip);
	LUA_ENUM_ENTRY("NoReorder", ImGuiTabItemFlags_::ImGuiTabItemFlags_NoReorder);
	LUA_ENUM_ENTRY("Leading", ImGuiTabItemFlags_::ImGuiTabItemFlags_Leading);
	LUA_ENUM_ENTRY("Trailing", ImGuiTabItemFlags_::ImGuiTabItemFlags_Trailing);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiTableFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiTableFlags");
	LUA_ENUM_ENTRY("None", ImGuiTableFlags_::ImGuiTableFlags_None);
	LUA_ENUM_ENTRY("Resizable", ImGuiTableFlags_::ImGuiTableFlags_Resizable);
	LUA_ENUM_ENTRY("Reorderable", ImGuiTableFlags_::ImGuiTableFlags_Reorderable);
	LUA_ENUM_ENTRY("Hideable", ImGuiTableFlags_::ImGuiTableFlags_Hideable);
	LUA_ENUM_ENTRY("Sortable", ImGuiTableFlags_::ImGuiTableFlags_Sortable);
	LUA_ENUM_ENTRY("NoSavedSettings", ImGuiTableFlags_::ImGuiTableFlags_NoSavedSettings);
	LUA_ENUM_ENTRY("ContextMenuInBody", ImGuiTableFlags_::ImGuiTableFlags_ContextMenuInBody);
	LUA_ENUM_ENTRY("RowBg", ImGuiTableFlags_::ImGuiTableFlags_RowBg);
	LUA_ENUM_ENTRY("BordersInnerH", ImGuiTableFlags_::ImGuiTableFlags_BordersInnerH);
	LUA_ENUM_ENTRY("BordersOuterH", ImGuiTableFlags_::ImGuiTableFlags_BordersOuterH);
	LUA_ENUM_ENTRY("BordersInnerV", ImGuiTableFlags_::ImGuiTableFlags_BordersInnerV);
	LUA_ENUM_ENTRY("BordersOuterV", ImGuiTableFlags_::ImGuiTableFlags_BordersOuterV);
	LUA_ENUM_ENTRY("BordersH", ImGuiTableFlags_::ImGuiTableFlags_BordersH);
	LUA_ENUM_ENTRY("BordersV", ImGuiTableFlags_::ImGuiTableFlags_BordersV);
	LUA_ENUM_ENTRY("BordersInner", ImGuiTableFlags_::ImGuiTableFlags_BordersInner);
	LUA_ENUM_ENTRY("BordersOuter", ImGuiTableFlags_::ImGuiTableFlags_BordersOuter);
	LUA_ENUM_ENTRY("Borders", ImGuiTableFlags_::ImGuiTableFlags_Borders);
	LUA_ENUM_ENTRY("NoBordersInBody", ImGuiTableFlags_::ImGuiTableFlags_NoBordersInBody);
	LUA_ENUM_ENTRY("NoBordersInBodyUntilResize", ImGuiTableFlags_::ImGuiTableFlags_NoBordersInBodyUntilResize);
	LUA_ENUM_ENTRY("SizingFixedFit", ImGuiTableFlags_::ImGuiTableFlags_SizingFixedFit);
	LUA_ENUM_ENTRY("SizingFixedSame", ImGuiTableFlags_::ImGuiTableFlags_SizingFixedSame);
	LUA_ENUM_ENTRY("SizingStretchProp", ImGuiTableFlags_::ImGuiTableFlags_SizingStretchProp);
	LUA_ENUM_ENTRY("SizingStretchSame", ImGuiTableFlags_::ImGuiTableFlags_SizingStretchSame);
	LUA_ENUM_ENTRY("NoHostExtendX", ImGuiTableFlags_::ImGuiTableFlags_NoHostExtendX);
	LUA_ENUM_ENTRY("NoHostExtendY", ImGuiTableFlags_::ImGuiTableFlags_NoHostExtendY);
	LUA_ENUM_ENTRY("NoKeepColumnsVisible", ImGuiTableFlags_::ImGuiTableFlags_NoKeepColumnsVisible);
	LUA_ENUM_ENTRY("PreciseWidths", ImGuiTableFlags_::ImGuiTableFlags_PreciseWidths);
	LUA_ENUM_ENTRY("NoClip", ImGuiTableFlags_::ImGuiTableFlags_NoClip);
	LUA_ENUM_ENTRY("PadOuterX", ImGuiTableFlags_::ImGuiTableFlags_PadOuterX);
	LUA_ENUM_ENTRY("NoPadOuterX", ImGuiTableFlags_::ImGuiTableFlags_NoPadOuterX);
	LUA_ENUM_ENTRY("NoPadInnerX", ImGuiTableFlags_::ImGuiTableFlags_NoPadInnerX);
	LUA_ENUM_ENTRY("ScrollX", ImGuiTableFlags_::ImGuiTableFlags_ScrollX);
	LUA_ENUM_ENTRY("ScrollY", ImGuiTableFlags_::ImGuiTableFlags_ScrollY);
	LUA_ENUM_ENTRY("SortMulti", ImGuiTableFlags_::ImGuiTableFlags_SortMulti);
	LUA_ENUM_ENTRY("SortTristate", ImGuiTableFlags_::ImGuiTableFlags_SortTristate);
	LUA_ENUM_ENTRY("SizingMask_", ImGuiTableFlags_::ImGuiTableFlags_SizingMask_);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiTableColumnFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiTableColumnFlags");
	LUA_ENUM_ENTRY("None", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_None);
	LUA_ENUM_ENTRY("Disabled", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_Disabled);
	LUA_ENUM_ENTRY("DefaultHide", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_DefaultHide);
	LUA_ENUM_ENTRY("DefaultSort", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_DefaultSort);
	LUA_ENUM_ENTRY("WidthStretch", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_WidthStretch);
	LUA_ENUM_ENTRY("WidthFixed", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_WidthFixed);
	LUA_ENUM_ENTRY("NoResize", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_NoResize);
	LUA_ENUM_ENTRY("NoReorder", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_NoReorder);
	LUA_ENUM_ENTRY("NoHide", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_NoHide);
	LUA_ENUM_ENTRY("NoClip", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_NoClip);
	LUA_ENUM_ENTRY("NoSort", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_NoSort);
	LUA_ENUM_ENTRY("NoSortAscending", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_NoSortAscending);
	LUA_ENUM_ENTRY("NoSortDescending", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_NoSortDescending);
	LUA_ENUM_ENTRY("NoHeaderLabel", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_NoHeaderLabel);
	LUA_ENUM_ENTRY("NoHeaderWidth", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_NoHeaderWidth);
	LUA_ENUM_ENTRY("PreferSortAscending", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_PreferSortAscending);
	LUA_ENUM_ENTRY("PreferSortDescending", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_PreferSortDescending);
	LUA_ENUM_ENTRY("IndentEnable", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_IndentEnable);
	LUA_ENUM_ENTRY("IndentDisable", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_IndentDisable);
	LUA_ENUM_ENTRY("IsEnabled", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_IsEnabled);
	LUA_ENUM_ENTRY("IsVisible", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_IsVisible);
	LUA_ENUM_ENTRY("IsSorted", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_IsSorted);
	LUA_ENUM_ENTRY("IsHovered", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_IsHovered);
	LUA_ENUM_ENTRY("WidthMask_", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_WidthMask_);
	LUA_ENUM_ENTRY("IndentMask_", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_IndentMask_);
	LUA_ENUM_ENTRY("StatusMask_", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_StatusMask_);
	LUA_ENUM_ENTRY("NoDirectResize_", ImGuiTableColumnFlags_::ImGuiTableColumnFlags_NoDirectResize_);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiTableRowFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiTableRowFlags");
	LUA_ENUM_ENTRY("None", ImGuiTableRowFlags_::ImGuiTableRowFlags_None);
	LUA_ENUM_ENTRY("Headers", ImGuiTableRowFlags_::ImGuiTableRowFlags_Headers);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiTableBgTarget(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiTableBgTarget");
	LUA_ENUM_ENTRY("None", ImGuiTableBgTarget_::ImGuiTableBgTarget_None);
	LUA_ENUM_ENTRY("RowBg0", ImGuiTableBgTarget_::ImGuiTableBgTarget_RowBg0);
	LUA_ENUM_ENTRY("RowBg1", ImGuiTableBgTarget_::ImGuiTableBgTarget_RowBg1);
	LUA_ENUM_ENTRY("CellBg", ImGuiTableBgTarget_::ImGuiTableBgTarget_CellBg);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiFocusedFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiFocusedFlags");
	LUA_ENUM_ENTRY("None", ImGuiFocusedFlags_::ImGuiFocusedFlags_None);
	LUA_ENUM_ENTRY("ChildWindows", ImGuiFocusedFlags_::ImGuiFocusedFlags_ChildWindows);
	LUA_ENUM_ENTRY("RootWindow", ImGuiFocusedFlags_::ImGuiFocusedFlags_RootWindow);
	LUA_ENUM_ENTRY("AnyWindow", ImGuiFocusedFlags_::ImGuiFocusedFlags_AnyWindow);
	LUA_ENUM_ENTRY("NoPopupHierarchy", ImGuiFocusedFlags_::ImGuiFocusedFlags_NoPopupHierarchy);
	LUA_ENUM_ENTRY("DockHierarchy", ImGuiFocusedFlags_::ImGuiFocusedFlags_DockHierarchy);
	LUA_ENUM_ENTRY("RootAndChildWindows", ImGuiFocusedFlags_::ImGuiFocusedFlags_RootAndChildWindows);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiHoveredFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiHoveredFlags");
	LUA_ENUM_ENTRY("None", ImGuiHoveredFlags_::ImGuiHoveredFlags_None);
	LUA_ENUM_ENTRY("ChildWindows", ImGuiHoveredFlags_::ImGuiHoveredFlags_ChildWindows);
	LUA_ENUM_ENTRY("RootWindow", ImGuiHoveredFlags_::ImGuiHoveredFlags_RootWindow);
	LUA_ENUM_ENTRY("AnyWindow", ImGuiHoveredFlags_::ImGuiHoveredFlags_AnyWindow);
	LUA_ENUM_ENTRY("NoPopupHierarchy", ImGuiHoveredFlags_::ImGuiHoveredFlags_NoPopupHierarchy);
	LUA_ENUM_ENTRY("DockHierarchy", ImGuiHoveredFlags_::ImGuiHoveredFlags_DockHierarchy);
	LUA_ENUM_ENTRY("AllowWhenBlockedByPopup", ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup);
	LUA_ENUM_ENTRY("AllowWhenBlockedByActiveItem", ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByActiveItem);
	LUA_ENUM_ENTRY("AllowWhenOverlapped", ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenOverlapped);
	LUA_ENUM_ENTRY("AllowWhenDisabled", ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenDisabled);
	LUA_ENUM_ENTRY("NoNavOverride", ImGuiHoveredFlags_::ImGuiHoveredFlags_NoNavOverride);
	LUA_ENUM_ENTRY("RectOnly", ImGuiHoveredFlags_::ImGuiHoveredFlags_RectOnly);
	LUA_ENUM_ENTRY("RootAndChildWindows", ImGuiHoveredFlags_::ImGuiHoveredFlags_RootAndChildWindows);
	LUA_ENUM_ENTRY("DelayNormal", ImGuiHoveredFlags_::ImGuiHoveredFlags_DelayNormal);
	LUA_ENUM_ENTRY("DelayShort", ImGuiHoveredFlags_::ImGuiHoveredFlags_DelayShort);
	LUA_ENUM_ENTRY("NoSharedDelay", ImGuiHoveredFlags_::ImGuiHoveredFlags_NoSharedDelay);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiDockNodeFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiDockNodeFlags");
	LUA_ENUM_ENTRY("None", ImGuiDockNodeFlags_::ImGuiDockNodeFlags_None);
	LUA_ENUM_ENTRY("KeepAliveOnly", ImGuiDockNodeFlags_::ImGuiDockNodeFlags_KeepAliveOnly);
	LUA_ENUM_ENTRY("NoDockingInCentralNode", ImGuiDockNodeFlags_::ImGuiDockNodeFlags_NoDockingInCentralNode);
	LUA_ENUM_ENTRY("PassthruCentralNode", ImGuiDockNodeFlags_::ImGuiDockNodeFlags_PassthruCentralNode);
	LUA_ENUM_ENTRY("NoSplit", ImGuiDockNodeFlags_::ImGuiDockNodeFlags_NoSplit);
	LUA_ENUM_ENTRY("NoResize", ImGuiDockNodeFlags_::ImGuiDockNodeFlags_NoResize);
	LUA_ENUM_ENTRY("AutoHideTabBar", ImGuiDockNodeFlags_::ImGuiDockNodeFlags_AutoHideTabBar);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiDragDropFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiDragDropFlags");
	LUA_ENUM_ENTRY("None", ImGuiDragDropFlags_::ImGuiDragDropFlags_None);
	LUA_ENUM_ENTRY("SourceNoPreviewTooltip", ImGuiDragDropFlags_::ImGuiDragDropFlags_SourceNoPreviewTooltip);
	LUA_ENUM_ENTRY("SourceNoDisableHover", ImGuiDragDropFlags_::ImGuiDragDropFlags_SourceNoDisableHover);
	LUA_ENUM_ENTRY("SourceNoHoldToOpenOthers", ImGuiDragDropFlags_::ImGuiDragDropFlags_SourceNoHoldToOpenOthers);
	LUA_ENUM_ENTRY("SourceAllowNullID", ImGuiDragDropFlags_::ImGuiDragDropFlags_SourceAllowNullID);
	LUA_ENUM_ENTRY("SourceExtern", ImGuiDragDropFlags_::ImGuiDragDropFlags_SourceExtern);
	LUA_ENUM_ENTRY("SourceAutoExpirePayload", ImGuiDragDropFlags_::ImGuiDragDropFlags_SourceAutoExpirePayload);
	LUA_ENUM_ENTRY("AcceptBeforeDelivery", ImGuiDragDropFlags_::ImGuiDragDropFlags_AcceptBeforeDelivery);
	LUA_ENUM_ENTRY("AcceptNoDrawDefaultRect", ImGuiDragDropFlags_::ImGuiDragDropFlags_AcceptNoDrawDefaultRect);
	LUA_ENUM_ENTRY("AcceptNoPreviewTooltip", ImGuiDragDropFlags_::ImGuiDragDropFlags_AcceptNoPreviewTooltip);
	LUA_ENUM_ENTRY("AcceptPeekOnly", ImGuiDragDropFlags_::ImGuiDragDropFlags_AcceptPeekOnly);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiDataType(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiDataType");
	LUA_ENUM_ENTRY("S8", ImGuiDataType_::ImGuiDataType_S8);
	LUA_ENUM_ENTRY("U8", ImGuiDataType_::ImGuiDataType_U8);
	LUA_ENUM_ENTRY("S16", ImGuiDataType_::ImGuiDataType_S16);
	LUA_ENUM_ENTRY("U16", ImGuiDataType_::ImGuiDataType_U16);
	LUA_ENUM_ENTRY("S32", ImGuiDataType_::ImGuiDataType_S32);
	LUA_ENUM_ENTRY("U32", ImGuiDataType_::ImGuiDataType_U32);
	LUA_ENUM_ENTRY("S64", ImGuiDataType_::ImGuiDataType_S64);
	LUA_ENUM_ENTRY("U64", ImGuiDataType_::ImGuiDataType_U64);
	LUA_ENUM_ENTRY("Float", ImGuiDataType_::ImGuiDataType_Float);
	LUA_ENUM_ENTRY("Double", ImGuiDataType_::ImGuiDataType_Double);
	LUA_ENUM_ENTRY("COUNT", ImGuiDataType_::ImGuiDataType_COUNT);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiDir(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiDir");
	LUA_ENUM_ENTRY("None", ImGuiDir_::ImGuiDir_None);
	LUA_ENUM_ENTRY("Left", ImGuiDir_::ImGuiDir_Left);
	LUA_ENUM_ENTRY("Right", ImGuiDir_::ImGuiDir_Right);
	LUA_ENUM_ENTRY("Up", ImGuiDir_::ImGuiDir_Up);
	LUA_ENUM_ENTRY("Down", ImGuiDir_::ImGuiDir_Down);
	LUA_ENUM_ENTRY("COUNT", ImGuiDir_::ImGuiDir_COUNT);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiSortDirection(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiSortDirection");
	LUA_ENUM_ENTRY("None", ImGuiSortDirection_::ImGuiSortDirection_None);
	LUA_ENUM_ENTRY("Ascending", ImGuiSortDirection_::ImGuiSortDirection_Ascending);
	LUA_ENUM_ENTRY("Descending", ImGuiSortDirection_::ImGuiSortDirection_Descending);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiKey(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiKey");
	LUA_ENUM_ENTRY("None", ImGuiKey::ImGuiKey_None);
	LUA_ENUM_ENTRY("Tab", ImGuiKey::ImGuiKey_Tab);
	LUA_ENUM_ENTRY("LeftArrow", ImGuiKey::ImGuiKey_LeftArrow);
	LUA_ENUM_ENTRY("RightArrow", ImGuiKey::ImGuiKey_RightArrow);
	LUA_ENUM_ENTRY("UpArrow", ImGuiKey::ImGuiKey_UpArrow);
	LUA_ENUM_ENTRY("DownArrow", ImGuiKey::ImGuiKey_DownArrow);
	LUA_ENUM_ENTRY("PageUp", ImGuiKey::ImGuiKey_PageUp);
	LUA_ENUM_ENTRY("PageDown", ImGuiKey::ImGuiKey_PageDown);
	LUA_ENUM_ENTRY("Home", ImGuiKey::ImGuiKey_Home);
	LUA_ENUM_ENTRY("End", ImGuiKey::ImGuiKey_End);
	LUA_ENUM_ENTRY("Insert", ImGuiKey::ImGuiKey_Insert);
	LUA_ENUM_ENTRY("Delete", ImGuiKey::ImGuiKey_Delete);
	LUA_ENUM_ENTRY("Backspace", ImGuiKey::ImGuiKey_Backspace);
	LUA_ENUM_ENTRY("Space", ImGuiKey::ImGuiKey_Space);
	LUA_ENUM_ENTRY("Enter", ImGuiKey::ImGuiKey_Enter);
	LUA_ENUM_ENTRY("Escape", ImGuiKey::ImGuiKey_Escape);
	LUA_ENUM_ENTRY("LeftCtrl", ImGuiKey::ImGuiKey_LeftCtrl);
	LUA_ENUM_ENTRY("LeftShift", ImGuiKey::ImGuiKey_LeftShift);
	LUA_ENUM_ENTRY("LeftAlt", ImGuiKey::ImGuiKey_LeftAlt);
	LUA_ENUM_ENTRY("LeftSuper", ImGuiKey::ImGuiKey_LeftSuper);
	LUA_ENUM_ENTRY("RightCtrl", ImGuiKey::ImGuiKey_RightCtrl);
	LUA_ENUM_ENTRY("RightShift", ImGuiKey::ImGuiKey_RightShift);
	LUA_ENUM_ENTRY("RightAlt", ImGuiKey::ImGuiKey_RightAlt);
	LUA_ENUM_ENTRY("RightSuper", ImGuiKey::ImGuiKey_RightSuper);
	LUA_ENUM_ENTRY("Menu", ImGuiKey::ImGuiKey_Menu);
	LUA_ENUM_ENTRY("0", ImGuiKey::ImGuiKey_0);
	LUA_ENUM_ENTRY("1", ImGuiKey::ImGuiKey_1);
	LUA_ENUM_ENTRY("2", ImGuiKey::ImGuiKey_2);
	LUA_ENUM_ENTRY("3", ImGuiKey::ImGuiKey_3);
	LUA_ENUM_ENTRY("4", ImGuiKey::ImGuiKey_4);
	LUA_ENUM_ENTRY("5", ImGuiKey::ImGuiKey_5);
	LUA_ENUM_ENTRY("6", ImGuiKey::ImGuiKey_6);
	LUA_ENUM_ENTRY("7", ImGuiKey::ImGuiKey_7);
	LUA_ENUM_ENTRY("8", ImGuiKey::ImGuiKey_8);
	LUA_ENUM_ENTRY("9", ImGuiKey::ImGuiKey_9);
	LUA_ENUM_ENTRY("A", ImGuiKey::ImGuiKey_A);
	LUA_ENUM_ENTRY("B", ImGuiKey::ImGuiKey_B);
	LUA_ENUM_ENTRY("C", ImGuiKey::ImGuiKey_C);
	LUA_ENUM_ENTRY("D", ImGuiKey::ImGuiKey_D);
	LUA_ENUM_ENTRY("E", ImGuiKey::ImGuiKey_E);
	LUA_ENUM_ENTRY("F", ImGuiKey::ImGuiKey_F);
	LUA_ENUM_ENTRY("G", ImGuiKey::ImGuiKey_G);
	LUA_ENUM_ENTRY("H", ImGuiKey::ImGuiKey_H);
	LUA_ENUM_ENTRY("I", ImGuiKey::ImGuiKey_I);
	LUA_ENUM_ENTRY("J", ImGuiKey::ImGuiKey_J);
	LUA_ENUM_ENTRY("K", ImGuiKey::ImGuiKey_K);
	LUA_ENUM_ENTRY("L", ImGuiKey::ImGuiKey_L);
	LUA_ENUM_ENTRY("M", ImGuiKey::ImGuiKey_M);
	LUA_ENUM_ENTRY("N", ImGuiKey::ImGuiKey_N);
	LUA_ENUM_ENTRY("O", ImGuiKey::ImGuiKey_O);
	LUA_ENUM_ENTRY("P", ImGuiKey::ImGuiKey_P);
	LUA_ENUM_ENTRY("Q", ImGuiKey::ImGuiKey_Q);
	LUA_ENUM_ENTRY("R", ImGuiKey::ImGuiKey_R);
	LUA_ENUM_ENTRY("S", ImGuiKey::ImGuiKey_S);
	LUA_ENUM_ENTRY("T", ImGuiKey::ImGuiKey_T);
	LUA_ENUM_ENTRY("U", ImGuiKey::ImGuiKey_U);
	LUA_ENUM_ENTRY("V", ImGuiKey::ImGuiKey_V);
	LUA_ENUM_ENTRY("W", ImGuiKey::ImGuiKey_W);
	LUA_ENUM_ENTRY("X", ImGuiKey::ImGuiKey_X);
	LUA_ENUM_ENTRY("Y", ImGuiKey::ImGuiKey_Y);
	LUA_ENUM_ENTRY("Z", ImGuiKey::ImGuiKey_Z);
	LUA_ENUM_ENTRY("F1", ImGuiKey::ImGuiKey_F1);
	LUA_ENUM_ENTRY("F2", ImGuiKey::ImGuiKey_F2);
	LUA_ENUM_ENTRY("F3", ImGuiKey::ImGuiKey_F3);
	LUA_ENUM_ENTRY("F4", ImGuiKey::ImGuiKey_F4);
	LUA_ENUM_ENTRY("F5", ImGuiKey::ImGuiKey_F5);
	LUA_ENUM_ENTRY("F6", ImGuiKey::ImGuiKey_F6);
	LUA_ENUM_ENTRY("F7", ImGuiKey::ImGuiKey_F7);
	LUA_ENUM_ENTRY("F8", ImGuiKey::ImGuiKey_F8);
	LUA_ENUM_ENTRY("F9", ImGuiKey::ImGuiKey_F9);
	LUA_ENUM_ENTRY("F10", ImGuiKey::ImGuiKey_F10);
	LUA_ENUM_ENTRY("F11", ImGuiKey::ImGuiKey_F11);
	LUA_ENUM_ENTRY("F12", ImGuiKey::ImGuiKey_F12);
	LUA_ENUM_ENTRY("Apostrophe", ImGuiKey::ImGuiKey_Apostrophe);
	LUA_ENUM_ENTRY("Comma", ImGuiKey::ImGuiKey_Comma);
	LUA_ENUM_ENTRY("Minus", ImGuiKey::ImGuiKey_Minus);
	LUA_ENUM_ENTRY("Period", ImGuiKey::ImGuiKey_Period);
	LUA_ENUM_ENTRY("Slash", ImGuiKey::ImGuiKey_Slash);
	LUA_ENUM_ENTRY("Semicolon", ImGuiKey::ImGuiKey_Semicolon);
	LUA_ENUM_ENTRY("Equal", ImGuiKey::ImGuiKey_Equal);
	LUA_ENUM_ENTRY("LeftBracket", ImGuiKey::ImGuiKey_LeftBracket);
	LUA_ENUM_ENTRY("Backslash", ImGuiKey::ImGuiKey_Backslash);
	LUA_ENUM_ENTRY("RightBracket", ImGuiKey::ImGuiKey_RightBracket);
	LUA_ENUM_ENTRY("GraveAccent", ImGuiKey::ImGuiKey_GraveAccent);
	LUA_ENUM_ENTRY("CapsLock", ImGuiKey::ImGuiKey_CapsLock);
	LUA_ENUM_ENTRY("ScrollLock", ImGuiKey::ImGuiKey_ScrollLock);
	LUA_ENUM_ENTRY("NumLock", ImGuiKey::ImGuiKey_NumLock);
	LUA_ENUM_ENTRY("PrintScreen", ImGuiKey::ImGuiKey_PrintScreen);
	LUA_ENUM_ENTRY("Pause", ImGuiKey::ImGuiKey_Pause);
	LUA_ENUM_ENTRY("Keypad0", ImGuiKey::ImGuiKey_Keypad0);
	LUA_ENUM_ENTRY("Keypad1", ImGuiKey::ImGuiKey_Keypad1);
	LUA_ENUM_ENTRY("Keypad2", ImGuiKey::ImGuiKey_Keypad2);
	LUA_ENUM_ENTRY("Keypad3", ImGuiKey::ImGuiKey_Keypad3);
	LUA_ENUM_ENTRY("Keypad4", ImGuiKey::ImGuiKey_Keypad4);
	LUA_ENUM_ENTRY("Keypad5", ImGuiKey::ImGuiKey_Keypad5);
	LUA_ENUM_ENTRY("Keypad6", ImGuiKey::ImGuiKey_Keypad6);
	LUA_ENUM_ENTRY("Keypad7", ImGuiKey::ImGuiKey_Keypad7);
	LUA_ENUM_ENTRY("Keypad8", ImGuiKey::ImGuiKey_Keypad8);
	LUA_ENUM_ENTRY("Keypad9", ImGuiKey::ImGuiKey_Keypad9);
	LUA_ENUM_ENTRY("KeypadDecimal", ImGuiKey::ImGuiKey_KeypadDecimal);
	LUA_ENUM_ENTRY("KeypadDivide", ImGuiKey::ImGuiKey_KeypadDivide);
	LUA_ENUM_ENTRY("KeypadMultiply", ImGuiKey::ImGuiKey_KeypadMultiply);
	LUA_ENUM_ENTRY("KeypadSubtract", ImGuiKey::ImGuiKey_KeypadSubtract);
	LUA_ENUM_ENTRY("KeypadAdd", ImGuiKey::ImGuiKey_KeypadAdd);
	LUA_ENUM_ENTRY("KeypadEnter", ImGuiKey::ImGuiKey_KeypadEnter);
	LUA_ENUM_ENTRY("KeypadEqual", ImGuiKey::ImGuiKey_KeypadEqual);
	LUA_ENUM_ENTRY("GamepadStart", ImGuiKey::ImGuiKey_GamepadStart);
	LUA_ENUM_ENTRY("GamepadBack", ImGuiKey::ImGuiKey_GamepadBack);
	LUA_ENUM_ENTRY("GamepadFaceLeft", ImGuiKey::ImGuiKey_GamepadFaceLeft);
	LUA_ENUM_ENTRY("GamepadFaceRight", ImGuiKey::ImGuiKey_GamepadFaceRight);
	LUA_ENUM_ENTRY("GamepadFaceUp", ImGuiKey::ImGuiKey_GamepadFaceUp);
	LUA_ENUM_ENTRY("GamepadFaceDown", ImGuiKey::ImGuiKey_GamepadFaceDown);
	LUA_ENUM_ENTRY("GamepadDpadLeft", ImGuiKey::ImGuiKey_GamepadDpadLeft);
	LUA_ENUM_ENTRY("GamepadDpadRight", ImGuiKey::ImGuiKey_GamepadDpadRight);
	LUA_ENUM_ENTRY("GamepadDpadUp", ImGuiKey::ImGuiKey_GamepadDpadUp);
	LUA_ENUM_ENTRY("GamepadDpadDown", ImGuiKey::ImGuiKey_GamepadDpadDown);
	LUA_ENUM_ENTRY("GamepadL1", ImGuiKey::ImGuiKey_GamepadL1);
	LUA_ENUM_ENTRY("GamepadR1", ImGuiKey::ImGuiKey_GamepadR1);
	LUA_ENUM_ENTRY("GamepadL2", ImGuiKey::ImGuiKey_GamepadL2);
	LUA_ENUM_ENTRY("GamepadR2", ImGuiKey::ImGuiKey_GamepadR2);
	LUA_ENUM_ENTRY("GamepadL3", ImGuiKey::ImGuiKey_GamepadL3);
	LUA_ENUM_ENTRY("GamepadR3", ImGuiKey::ImGuiKey_GamepadR3);
	LUA_ENUM_ENTRY("GamepadLStickLeft", ImGuiKey::ImGuiKey_GamepadLStickLeft);
	LUA_ENUM_ENTRY("GamepadLStickRight", ImGuiKey::ImGuiKey_GamepadLStickRight);
	LUA_ENUM_ENTRY("GamepadLStickUp", ImGuiKey::ImGuiKey_GamepadLStickUp);
	LUA_ENUM_ENTRY("GamepadLStickDown", ImGuiKey::ImGuiKey_GamepadLStickDown);
	LUA_ENUM_ENTRY("GamepadRStickLeft", ImGuiKey::ImGuiKey_GamepadRStickLeft);
	LUA_ENUM_ENTRY("GamepadRStickRight", ImGuiKey::ImGuiKey_GamepadRStickRight);
	LUA_ENUM_ENTRY("GamepadRStickUp", ImGuiKey::ImGuiKey_GamepadRStickUp);
	LUA_ENUM_ENTRY("GamepadRStickDown", ImGuiKey::ImGuiKey_GamepadRStickDown);
	LUA_ENUM_ENTRY("MouseLeft", ImGuiKey::ImGuiKey_MouseLeft);
	LUA_ENUM_ENTRY("MouseRight", ImGuiKey::ImGuiKey_MouseRight);
	LUA_ENUM_ENTRY("MouseMiddle", ImGuiKey::ImGuiKey_MouseMiddle);
	LUA_ENUM_ENTRY("MouseX1", ImGuiKey::ImGuiKey_MouseX1);
	LUA_ENUM_ENTRY("MouseX2", ImGuiKey::ImGuiKey_MouseX2);
	LUA_ENUM_ENTRY("MouseWheelX", ImGuiKey::ImGuiKey_MouseWheelX);
	LUA_ENUM_ENTRY("MouseWheelY", ImGuiKey::ImGuiKey_MouseWheelY);
	LUA_ENUM_ENTRY("ReservedForModCtrl", ImGuiKey::ImGuiKey_ReservedForModCtrl);
	LUA_ENUM_ENTRY("ReservedForModShift", ImGuiKey::ImGuiKey_ReservedForModShift);
	LUA_ENUM_ENTRY("ReservedForModAlt", ImGuiKey::ImGuiKey_ReservedForModAlt);
	LUA_ENUM_ENTRY("ReservedForModSuper", ImGuiKey::ImGuiKey_ReservedForModSuper);
	LUA_ENUM_ENTRY("COUNT", ImGuiKey::ImGuiKey_COUNT);
	LUA_ENUM_ENTRY("ImGuiMod_None", ImGuiKey::ImGuiMod_None);
	LUA_ENUM_ENTRY("ImGuiMod_Ctrl", ImGuiKey::ImGuiMod_Ctrl);
	LUA_ENUM_ENTRY("ImGuiMod_Shift", ImGuiKey::ImGuiMod_Shift);
	LUA_ENUM_ENTRY("ImGuiMod_Alt", ImGuiKey::ImGuiMod_Alt);
	LUA_ENUM_ENTRY("ImGuiMod_Super", ImGuiKey::ImGuiMod_Super);
	LUA_ENUM_ENTRY("ImGuiMod_Shortcut", ImGuiKey::ImGuiMod_Shortcut);
	LUA_ENUM_ENTRY("ImGuiMod_Mask_", ImGuiKey::ImGuiMod_Mask_);
	LUA_ENUM_ENTRY("NamedKey_BEGIN", ImGuiKey::ImGuiKey_NamedKey_BEGIN);
	LUA_ENUM_ENTRY("NamedKey_END", ImGuiKey::ImGuiKey_NamedKey_END);
	LUA_ENUM_ENTRY("NamedKey_COUNT", ImGuiKey::ImGuiKey_NamedKey_COUNT);
	LUA_ENUM_ENTRY("KeysData_SIZE", ImGuiKey::ImGuiKey_KeysData_SIZE);
	LUA_ENUM_ENTRY("KeysData_OFFSET", ImGuiKey::ImGuiKey_KeysData_OFFSET);
	LUA_ENUM_ENTRY("ModCtrl", ImGuiKey::ImGuiKey_ModCtrl);
	LUA_ENUM_ENTRY("ModShift", ImGuiKey::ImGuiKey_ModShift);
	LUA_ENUM_ENTRY("ModAlt", ImGuiKey::ImGuiKey_ModAlt);
	LUA_ENUM_ENTRY("ModSuper", ImGuiKey::ImGuiKey_ModSuper);
	LUA_ENUM_ENTRY("KeyPadEnter", ImGuiKey::ImGuiKey_KeyPadEnter);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiNavInput(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiNavInput");
	LUA_ENUM_ENTRY("ImGuiNavInput_Activate", ImGuiNavInput::ImGuiNavInput_Activate);
	LUA_ENUM_ENTRY("ImGuiNavInput_Cancel", ImGuiNavInput::ImGuiNavInput_Cancel);
	LUA_ENUM_ENTRY("ImGuiNavInput_Input", ImGuiNavInput::ImGuiNavInput_Input);
	LUA_ENUM_ENTRY("ImGuiNavInput_Menu", ImGuiNavInput::ImGuiNavInput_Menu);
	LUA_ENUM_ENTRY("ImGuiNavInput_DpadLeft", ImGuiNavInput::ImGuiNavInput_DpadLeft);
	LUA_ENUM_ENTRY("ImGuiNavInput_DpadRight", ImGuiNavInput::ImGuiNavInput_DpadRight);
	LUA_ENUM_ENTRY("ImGuiNavInput_DpadUp", ImGuiNavInput::ImGuiNavInput_DpadUp);
	LUA_ENUM_ENTRY("ImGuiNavInput_DpadDown", ImGuiNavInput::ImGuiNavInput_DpadDown);
	LUA_ENUM_ENTRY("ImGuiNavInput_LStickLeft", ImGuiNavInput::ImGuiNavInput_LStickLeft);
	LUA_ENUM_ENTRY("ImGuiNavInput_LStickRight", ImGuiNavInput::ImGuiNavInput_LStickRight);
	LUA_ENUM_ENTRY("ImGuiNavInput_LStickUp", ImGuiNavInput::ImGuiNavInput_LStickUp);
	LUA_ENUM_ENTRY("ImGuiNavInput_LStickDown", ImGuiNavInput::ImGuiNavInput_LStickDown);
	LUA_ENUM_ENTRY("ImGuiNavInput_FocusPrev", ImGuiNavInput::ImGuiNavInput_FocusPrev);
	LUA_ENUM_ENTRY("ImGuiNavInput_FocusNext", ImGuiNavInput::ImGuiNavInput_FocusNext);
	LUA_ENUM_ENTRY("ImGuiNavInput_TweakSlow", ImGuiNavInput::ImGuiNavInput_TweakSlow);
	LUA_ENUM_ENTRY("ImGuiNavInput_TweakFast", ImGuiNavInput::ImGuiNavInput_TweakFast);
	LUA_ENUM_ENTRY("ImGuiNavInput_COUNT", ImGuiNavInput::ImGuiNavInput_COUNT);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiConfigFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiConfigFlags");
	LUA_ENUM_ENTRY("None", ImGuiConfigFlags_::ImGuiConfigFlags_None);
	LUA_ENUM_ENTRY("NavEnableKeyboard", ImGuiConfigFlags_::ImGuiConfigFlags_NavEnableKeyboard);
	LUA_ENUM_ENTRY("NavEnableGamepad", ImGuiConfigFlags_::ImGuiConfigFlags_NavEnableGamepad);
	LUA_ENUM_ENTRY("NavEnableSetMousePos", ImGuiConfigFlags_::ImGuiConfigFlags_NavEnableSetMousePos);
	LUA_ENUM_ENTRY("NavNoCaptureKeyboard", ImGuiConfigFlags_::ImGuiConfigFlags_NavNoCaptureKeyboard);
	LUA_ENUM_ENTRY("NoMouse", ImGuiConfigFlags_::ImGuiConfigFlags_NoMouse);
	LUA_ENUM_ENTRY("NoMouseCursorChange", ImGuiConfigFlags_::ImGuiConfigFlags_NoMouseCursorChange);
	LUA_ENUM_ENTRY("DockingEnable", ImGuiConfigFlags_::ImGuiConfigFlags_DockingEnable);
	LUA_ENUM_ENTRY("ViewportsEnable", ImGuiConfigFlags_::ImGuiConfigFlags_ViewportsEnable);
	LUA_ENUM_ENTRY("DpiEnableScaleViewports", ImGuiConfigFlags_::ImGuiConfigFlags_DpiEnableScaleViewports);
	LUA_ENUM_ENTRY("DpiEnableScaleFonts", ImGuiConfigFlags_::ImGuiConfigFlags_DpiEnableScaleFonts);
	LUA_ENUM_ENTRY("IsSRGB", ImGuiConfigFlags_::ImGuiConfigFlags_IsSRGB);
	LUA_ENUM_ENTRY("IsTouchScreen", ImGuiConfigFlags_::ImGuiConfigFlags_IsTouchScreen);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiBackendFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiBackendFlags");
	LUA_ENUM_ENTRY("None", ImGuiBackendFlags_::ImGuiBackendFlags_None);
	LUA_ENUM_ENTRY("HasGamepad", ImGuiBackendFlags_::ImGuiBackendFlags_HasGamepad);
	LUA_ENUM_ENTRY("HasMouseCursors", ImGuiBackendFlags_::ImGuiBackendFlags_HasMouseCursors);
	LUA_ENUM_ENTRY("HasSetMousePos", ImGuiBackendFlags_::ImGuiBackendFlags_HasSetMousePos);
	LUA_ENUM_ENTRY("RendererHasVtxOffset", ImGuiBackendFlags_::ImGuiBackendFlags_RendererHasVtxOffset);
	LUA_ENUM_ENTRY("PlatformHasViewports", ImGuiBackendFlags_::ImGuiBackendFlags_PlatformHasViewports);
	LUA_ENUM_ENTRY("HasMouseHoveredViewport", ImGuiBackendFlags_::ImGuiBackendFlags_HasMouseHoveredViewport);
	LUA_ENUM_ENTRY("RendererHasViewports", ImGuiBackendFlags_::ImGuiBackendFlags_RendererHasViewports);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiCol(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiCol");
	LUA_ENUM_ENTRY("Text", ImGuiCol_::ImGuiCol_Text);
	LUA_ENUM_ENTRY("TextDisabled", ImGuiCol_::ImGuiCol_TextDisabled);
	LUA_ENUM_ENTRY("WindowBg", ImGuiCol_::ImGuiCol_WindowBg);
	LUA_ENUM_ENTRY("ChildBg", ImGuiCol_::ImGuiCol_ChildBg);
	LUA_ENUM_ENTRY("PopupBg", ImGuiCol_::ImGuiCol_PopupBg);
	LUA_ENUM_ENTRY("Border", ImGuiCol_::ImGuiCol_Border);
	LUA_ENUM_ENTRY("BorderShadow", ImGuiCol_::ImGuiCol_BorderShadow);
	LUA_ENUM_ENTRY("FrameBg", ImGuiCol_::ImGuiCol_FrameBg);
	LUA_ENUM_ENTRY("FrameBgHovered", ImGuiCol_::ImGuiCol_FrameBgHovered);
	LUA_ENUM_ENTRY("FrameBgActive", ImGuiCol_::ImGuiCol_FrameBgActive);
	LUA_ENUM_ENTRY("TitleBg", ImGuiCol_::ImGuiCol_TitleBg);
	LUA_ENUM_ENTRY("TitleBgActive", ImGuiCol_::ImGuiCol_TitleBgActive);
	LUA_ENUM_ENTRY("TitleBgCollapsed", ImGuiCol_::ImGuiCol_TitleBgCollapsed);
	LUA_ENUM_ENTRY("MenuBarBg", ImGuiCol_::ImGuiCol_MenuBarBg);
	LUA_ENUM_ENTRY("ScrollbarBg", ImGuiCol_::ImGuiCol_ScrollbarBg);
	LUA_ENUM_ENTRY("ScrollbarGrab", ImGuiCol_::ImGuiCol_ScrollbarGrab);
	LUA_ENUM_ENTRY("ScrollbarGrabHovered", ImGuiCol_::ImGuiCol_ScrollbarGrabHovered);
	LUA_ENUM_ENTRY("ScrollbarGrabActive", ImGuiCol_::ImGuiCol_ScrollbarGrabActive);
	LUA_ENUM_ENTRY("CheckMark", ImGuiCol_::ImGuiCol_CheckMark);
	LUA_ENUM_ENTRY("SliderGrab", ImGuiCol_::ImGuiCol_SliderGrab);
	LUA_ENUM_ENTRY("SliderGrabActive", ImGuiCol_::ImGuiCol_SliderGrabActive);
	LUA_ENUM_ENTRY("Button", ImGuiCol_::ImGuiCol_Button);
	LUA_ENUM_ENTRY("ButtonHovered", ImGuiCol_::ImGuiCol_ButtonHovered);
	LUA_ENUM_ENTRY("ButtonActive", ImGuiCol_::ImGuiCol_ButtonActive);
	LUA_ENUM_ENTRY("Header", ImGuiCol_::ImGuiCol_Header);
	LUA_ENUM_ENTRY("HeaderHovered", ImGuiCol_::ImGuiCol_HeaderHovered);
	LUA_ENUM_ENTRY("HeaderActive", ImGuiCol_::ImGuiCol_HeaderActive);
	LUA_ENUM_ENTRY("Separator", ImGuiCol_::ImGuiCol_Separator);
	LUA_ENUM_ENTRY("SeparatorHovered", ImGuiCol_::ImGuiCol_SeparatorHovered);
	LUA_ENUM_ENTRY("SeparatorActive", ImGuiCol_::ImGuiCol_SeparatorActive);
	LUA_ENUM_ENTRY("ResizeGrip", ImGuiCol_::ImGuiCol_ResizeGrip);
	LUA_ENUM_ENTRY("ResizeGripHovered", ImGuiCol_::ImGuiCol_ResizeGripHovered);
	LUA_ENUM_ENTRY("ResizeGripActive", ImGuiCol_::ImGuiCol_ResizeGripActive);
	LUA_ENUM_ENTRY("Tab", ImGuiCol_::ImGuiCol_Tab);
	LUA_ENUM_ENTRY("TabHovered", ImGuiCol_::ImGuiCol_TabHovered);
	LUA_ENUM_ENTRY("TabActive", ImGuiCol_::ImGuiCol_TabActive);
	LUA_ENUM_ENTRY("TabUnfocused", ImGuiCol_::ImGuiCol_TabUnfocused);
	LUA_ENUM_ENTRY("TabUnfocusedActive", ImGuiCol_::ImGuiCol_TabUnfocusedActive);
	LUA_ENUM_ENTRY("DockingPreview", ImGuiCol_::ImGuiCol_DockingPreview);
	LUA_ENUM_ENTRY("DockingEmptyBg", ImGuiCol_::ImGuiCol_DockingEmptyBg);
	LUA_ENUM_ENTRY("PlotLines", ImGuiCol_::ImGuiCol_PlotLines);
	LUA_ENUM_ENTRY("PlotLinesHovered", ImGuiCol_::ImGuiCol_PlotLinesHovered);
	LUA_ENUM_ENTRY("PlotHistogram", ImGuiCol_::ImGuiCol_PlotHistogram);
	LUA_ENUM_ENTRY("PlotHistogramHovered", ImGuiCol_::ImGuiCol_PlotHistogramHovered);
	LUA_ENUM_ENTRY("TableHeaderBg", ImGuiCol_::ImGuiCol_TableHeaderBg);
	LUA_ENUM_ENTRY("TableBorderStrong", ImGuiCol_::ImGuiCol_TableBorderStrong);
	LUA_ENUM_ENTRY("TableBorderLight", ImGuiCol_::ImGuiCol_TableBorderLight);
	LUA_ENUM_ENTRY("TableRowBg", ImGuiCol_::ImGuiCol_TableRowBg);
	LUA_ENUM_ENTRY("TableRowBgAlt", ImGuiCol_::ImGuiCol_TableRowBgAlt);
	LUA_ENUM_ENTRY("TextSelectedBg", ImGuiCol_::ImGuiCol_TextSelectedBg);
	LUA_ENUM_ENTRY("DragDropTarget", ImGuiCol_::ImGuiCol_DragDropTarget);
	LUA_ENUM_ENTRY("NavHighlight", ImGuiCol_::ImGuiCol_NavHighlight);
	LUA_ENUM_ENTRY("NavWindowingHighlight", ImGuiCol_::ImGuiCol_NavWindowingHighlight);
	LUA_ENUM_ENTRY("NavWindowingDimBg", ImGuiCol_::ImGuiCol_NavWindowingDimBg);
	LUA_ENUM_ENTRY("ModalWindowDimBg", ImGuiCol_::ImGuiCol_ModalWindowDimBg);
	LUA_ENUM_ENTRY("COUNT", ImGuiCol_::ImGuiCol_COUNT);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiStyleVar(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiStyleVar");
	LUA_ENUM_ENTRY("Alpha", ImGuiStyleVar_::ImGuiStyleVar_Alpha);
	LUA_ENUM_ENTRY("DisabledAlpha", ImGuiStyleVar_::ImGuiStyleVar_DisabledAlpha);
	LUA_ENUM_ENTRY("WindowPadding", ImGuiStyleVar_::ImGuiStyleVar_WindowPadding);
	LUA_ENUM_ENTRY("WindowRounding", ImGuiStyleVar_::ImGuiStyleVar_WindowRounding);
	LUA_ENUM_ENTRY("WindowBorderSize", ImGuiStyleVar_::ImGuiStyleVar_WindowBorderSize);
	LUA_ENUM_ENTRY("WindowMinSize", ImGuiStyleVar_::ImGuiStyleVar_WindowMinSize);
	LUA_ENUM_ENTRY("WindowTitleAlign", ImGuiStyleVar_::ImGuiStyleVar_WindowTitleAlign);
	LUA_ENUM_ENTRY("ChildRounding", ImGuiStyleVar_::ImGuiStyleVar_ChildRounding);
	LUA_ENUM_ENTRY("ChildBorderSize", ImGuiStyleVar_::ImGuiStyleVar_ChildBorderSize);
	LUA_ENUM_ENTRY("PopupRounding", ImGuiStyleVar_::ImGuiStyleVar_PopupRounding);
	LUA_ENUM_ENTRY("PopupBorderSize", ImGuiStyleVar_::ImGuiStyleVar_PopupBorderSize);
	LUA_ENUM_ENTRY("FramePadding", ImGuiStyleVar_::ImGuiStyleVar_FramePadding);
	LUA_ENUM_ENTRY("FrameRounding", ImGuiStyleVar_::ImGuiStyleVar_FrameRounding);
	LUA_ENUM_ENTRY("FrameBorderSize", ImGuiStyleVar_::ImGuiStyleVar_FrameBorderSize);
	LUA_ENUM_ENTRY("ItemSpacing", ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing);
	LUA_ENUM_ENTRY("ItemInnerSpacing", ImGuiStyleVar_::ImGuiStyleVar_ItemInnerSpacing);
	LUA_ENUM_ENTRY("IndentSpacing", ImGuiStyleVar_::ImGuiStyleVar_IndentSpacing);
	LUA_ENUM_ENTRY("CellPadding", ImGuiStyleVar_::ImGuiStyleVar_CellPadding);
	LUA_ENUM_ENTRY("ScrollbarSize", ImGuiStyleVar_::ImGuiStyleVar_ScrollbarSize);
	LUA_ENUM_ENTRY("ScrollbarRounding", ImGuiStyleVar_::ImGuiStyleVar_ScrollbarRounding);
	LUA_ENUM_ENTRY("GrabMinSize", ImGuiStyleVar_::ImGuiStyleVar_GrabMinSize);
	LUA_ENUM_ENTRY("GrabRounding", ImGuiStyleVar_::ImGuiStyleVar_GrabRounding);
	LUA_ENUM_ENTRY("TabRounding", ImGuiStyleVar_::ImGuiStyleVar_TabRounding);
	LUA_ENUM_ENTRY("ButtonTextAlign", ImGuiStyleVar_::ImGuiStyleVar_ButtonTextAlign);
	LUA_ENUM_ENTRY("SelectableTextAlign", ImGuiStyleVar_::ImGuiStyleVar_SelectableTextAlign);
	LUA_ENUM_ENTRY("SeparatorTextBorderSize", ImGuiStyleVar_::ImGuiStyleVar_SeparatorTextBorderSize);
	LUA_ENUM_ENTRY("SeparatorTextAlign", ImGuiStyleVar_::ImGuiStyleVar_SeparatorTextAlign);
	LUA_ENUM_ENTRY("SeparatorTextPadding", ImGuiStyleVar_::ImGuiStyleVar_SeparatorTextPadding);
	LUA_ENUM_ENTRY("COUNT", ImGuiStyleVar_::ImGuiStyleVar_COUNT);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiButtonFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiButtonFlags");
	LUA_ENUM_ENTRY("None", ImGuiButtonFlags_::ImGuiButtonFlags_None);
	LUA_ENUM_ENTRY("MouseButtonLeft", ImGuiButtonFlags_::ImGuiButtonFlags_MouseButtonLeft);
	LUA_ENUM_ENTRY("MouseButtonRight", ImGuiButtonFlags_::ImGuiButtonFlags_MouseButtonRight);
	LUA_ENUM_ENTRY("MouseButtonMiddle", ImGuiButtonFlags_::ImGuiButtonFlags_MouseButtonMiddle);
	LUA_ENUM_ENTRY("MouseButtonMask_", ImGuiButtonFlags_::ImGuiButtonFlags_MouseButtonMask_);
	LUA_ENUM_ENTRY("MouseButtonDefault_", ImGuiButtonFlags_::ImGuiButtonFlags_MouseButtonDefault_);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiColorEditFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiColorEditFlags");
	LUA_ENUM_ENTRY("None", ImGuiColorEditFlags_::ImGuiColorEditFlags_None);
	LUA_ENUM_ENTRY("NoAlpha", ImGuiColorEditFlags_::ImGuiColorEditFlags_NoAlpha);
	LUA_ENUM_ENTRY("NoPicker", ImGuiColorEditFlags_::ImGuiColorEditFlags_NoPicker);
	LUA_ENUM_ENTRY("NoOptions", ImGuiColorEditFlags_::ImGuiColorEditFlags_NoOptions);
	LUA_ENUM_ENTRY("NoSmallPreview", ImGuiColorEditFlags_::ImGuiColorEditFlags_NoSmallPreview);
	LUA_ENUM_ENTRY("NoInputs", ImGuiColorEditFlags_::ImGuiColorEditFlags_NoInputs);
	LUA_ENUM_ENTRY("NoTooltip", ImGuiColorEditFlags_::ImGuiColorEditFlags_NoTooltip);
	LUA_ENUM_ENTRY("NoLabel", ImGuiColorEditFlags_::ImGuiColorEditFlags_NoLabel);
	LUA_ENUM_ENTRY("NoSidePreview", ImGuiColorEditFlags_::ImGuiColorEditFlags_NoSidePreview);
	LUA_ENUM_ENTRY("NoDragDrop", ImGuiColorEditFlags_::ImGuiColorEditFlags_NoDragDrop);
	LUA_ENUM_ENTRY("NoBorder", ImGuiColorEditFlags_::ImGuiColorEditFlags_NoBorder);
	LUA_ENUM_ENTRY("AlphaBar", ImGuiColorEditFlags_::ImGuiColorEditFlags_AlphaBar);
	LUA_ENUM_ENTRY("AlphaPreview", ImGuiColorEditFlags_::ImGuiColorEditFlags_AlphaPreview);
	LUA_ENUM_ENTRY("AlphaPreviewHalf", ImGuiColorEditFlags_::ImGuiColorEditFlags_AlphaPreviewHalf);
	LUA_ENUM_ENTRY("HDR", ImGuiColorEditFlags_::ImGuiColorEditFlags_HDR);
	LUA_ENUM_ENTRY("DisplayRGB", ImGuiColorEditFlags_::ImGuiColorEditFlags_DisplayRGB);
	LUA_ENUM_ENTRY("DisplayHSV", ImGuiColorEditFlags_::ImGuiColorEditFlags_DisplayHSV);
	LUA_ENUM_ENTRY("DisplayHex", ImGuiColorEditFlags_::ImGuiColorEditFlags_DisplayHex);
	LUA_ENUM_ENTRY("Uint8", ImGuiColorEditFlags_::ImGuiColorEditFlags_Uint8);
	LUA_ENUM_ENTRY("Float", ImGuiColorEditFlags_::ImGuiColorEditFlags_Float);
	LUA_ENUM_ENTRY("PickerHueBar", ImGuiColorEditFlags_::ImGuiColorEditFlags_PickerHueBar);
	LUA_ENUM_ENTRY("PickerHueWheel", ImGuiColorEditFlags_::ImGuiColorEditFlags_PickerHueWheel);
	LUA_ENUM_ENTRY("InputRGB", ImGuiColorEditFlags_::ImGuiColorEditFlags_InputRGB);
	LUA_ENUM_ENTRY("InputHSV", ImGuiColorEditFlags_::ImGuiColorEditFlags_InputHSV);
	LUA_ENUM_ENTRY("DefaultOptions_", ImGuiColorEditFlags_::ImGuiColorEditFlags_DefaultOptions_);
	LUA_ENUM_ENTRY("DisplayMask_", ImGuiColorEditFlags_::ImGuiColorEditFlags_DisplayMask_);
	LUA_ENUM_ENTRY("DataTypeMask_", ImGuiColorEditFlags_::ImGuiColorEditFlags_DataTypeMask_);
	LUA_ENUM_ENTRY("PickerMask_", ImGuiColorEditFlags_::ImGuiColorEditFlags_PickerMask_);
	LUA_ENUM_ENTRY("InputMask_", ImGuiColorEditFlags_::ImGuiColorEditFlags_InputMask_);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiSliderFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiSliderFlags");
	LUA_ENUM_ENTRY("None", ImGuiSliderFlags_::ImGuiSliderFlags_None);
	LUA_ENUM_ENTRY("AlwaysClamp", ImGuiSliderFlags_::ImGuiSliderFlags_AlwaysClamp);
	LUA_ENUM_ENTRY("Logarithmic", ImGuiSliderFlags_::ImGuiSliderFlags_Logarithmic);
	LUA_ENUM_ENTRY("NoRoundToFormat", ImGuiSliderFlags_::ImGuiSliderFlags_NoRoundToFormat);
	LUA_ENUM_ENTRY("NoInput", ImGuiSliderFlags_::ImGuiSliderFlags_NoInput);
	LUA_ENUM_ENTRY("InvalidMask_", ImGuiSliderFlags_::ImGuiSliderFlags_InvalidMask_);
	LUA_ENUM_ENTRY("ClampOnInput", ImGuiSliderFlags_::ImGuiSliderFlags_ClampOnInput);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiMouseButton(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiMouseButton");
	LUA_ENUM_ENTRY("Left", ImGuiMouseButton_::ImGuiMouseButton_Left);
	LUA_ENUM_ENTRY("Right", ImGuiMouseButton_::ImGuiMouseButton_Right);
	LUA_ENUM_ENTRY("Middle", ImGuiMouseButton_::ImGuiMouseButton_Middle);
	LUA_ENUM_ENTRY("COUNT", ImGuiMouseButton_::ImGuiMouseButton_COUNT);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiMouseCursor(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiMouseCursor");
	LUA_ENUM_ENTRY("None", ImGuiMouseCursor_::ImGuiMouseCursor_None);
	LUA_ENUM_ENTRY("Arrow", ImGuiMouseCursor_::ImGuiMouseCursor_Arrow);
	LUA_ENUM_ENTRY("TextInput", ImGuiMouseCursor_::ImGuiMouseCursor_TextInput);
	LUA_ENUM_ENTRY("ResizeAll", ImGuiMouseCursor_::ImGuiMouseCursor_ResizeAll);
	LUA_ENUM_ENTRY("ResizeNS", ImGuiMouseCursor_::ImGuiMouseCursor_ResizeNS);
	LUA_ENUM_ENTRY("ResizeEW", ImGuiMouseCursor_::ImGuiMouseCursor_ResizeEW);
	LUA_ENUM_ENTRY("ResizeNESW", ImGuiMouseCursor_::ImGuiMouseCursor_ResizeNESW);
	LUA_ENUM_ENTRY("ResizeNWSE", ImGuiMouseCursor_::ImGuiMouseCursor_ResizeNWSE);
	LUA_ENUM_ENTRY("Hand", ImGuiMouseCursor_::ImGuiMouseCursor_Hand);
	LUA_ENUM_ENTRY("NotAllowed", ImGuiMouseCursor_::ImGuiMouseCursor_NotAllowed);
	LUA_ENUM_ENTRY("COUNT", ImGuiMouseCursor_::ImGuiMouseCursor_COUNT);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imgui_imguiImGuiCond(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImGuiCond");
	LUA_ENUM_ENTRY("None", ImGuiCond_::ImGuiCond_None);
	LUA_ENUM_ENTRY("Always", ImGuiCond_::ImGuiCond_Always);
	LUA_ENUM_ENTRY("Once", ImGuiCond_::ImGuiCond_Once);
	LUA_ENUM_ENTRY("FirstUseEver", ImGuiCond_::ImGuiCond_FirstUseEver);
	LUA_ENUM_ENTRY("Appearing", ImGuiCond_::ImGuiCond_Appearing);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int lua_ImGui_alignTextToFramePadding(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.alignTextToFramePadding");
	LUA_TRY_INVOKE(0, &ImGui::AlignTextToFramePadding);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_arrowButton(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.arrowButton");
	LUA_TRY_INVOKE_R(2, &ImGui::ArrowButton);
	LUA_GINVOKE_FOOTER("2");
}
int lua_ImGui_beginChildFrame(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.beginChildFrame");
	LUA_TRY_INVOKE_R(3, static_cast<bool(*)(ImGuiID, const ImVec2&, ImGuiWindowFlags)>(&ImGui::BeginChildFrame));
	LUA_TRY_INVOKE_R(2, [](ImGuiID arg0,const ImVec2& arg1){{return ImGui::BeginChildFrame(std::move(arg0),arg1);}});
	LUA_GINVOKE_FOOTER("2,3");
}
int lua_ImGui_beginCombo(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.beginCombo");
	LUA_TRY_INVOKE_R(3, static_cast<bool(*)(const char*, const char*, ImGuiComboFlags)>(&ImGui::BeginCombo));
	LUA_TRY_INVOKE_R(2, [](const char* arg0,const char* arg1){{return ImGui::BeginCombo(arg0,arg1);}});
	LUA_GINVOKE_FOOTER("2,3");
}
int lua_ImGui_beginDisabled(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.beginDisabled");
	LUA_TRY_INVOKE(1, static_cast<void(*)(bool)>(&ImGui::BeginDisabled));
	LUA_TRY_INVOKE(0, [](){{return ImGui::BeginDisabled();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_beginDragDropSource(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.beginDragDropSource");
	LUA_TRY_INVOKE_R(1, static_cast<bool(*)(ImGuiDragDropFlags)>(&ImGui::BeginDragDropSource));
	LUA_TRY_INVOKE_R(0, [](){{return ImGui::BeginDragDropSource();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_beginDragDropTarget(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.beginDragDropTarget");
	LUA_TRY_INVOKE_R(0, &ImGui::BeginDragDropTarget);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_beginGroup(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.beginGroup");
	LUA_TRY_INVOKE(0, &ImGui::BeginGroup);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_beginListBox(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.beginListBox");
	LUA_TRY_INVOKE_R(2, static_cast<bool(*)(const char*, const ImVec2&)>(&ImGui::BeginListBox));
	LUA_TRY_INVOKE_R(1, [](const char* arg0){{return ImGui::BeginListBox(arg0);}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_beginMainMenuBar(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.beginMainMenuBar");
	LUA_TRY_INVOKE_R(0, &ImGui::BeginMainMenuBar);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_beginMenu(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.beginMenu");
	LUA_TRY_INVOKE_R(2, static_cast<bool(*)(const char*, bool)>(&ImGui::BeginMenu));
	LUA_TRY_INVOKE_R(1, [](const char* arg0){{return ImGui::BeginMenu(arg0);}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_beginMenuBar(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.beginMenuBar");
	LUA_TRY_INVOKE_R(0, &ImGui::BeginMenuBar);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_beginPopup(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.beginPopup");
	LUA_TRY_INVOKE_R(2, static_cast<bool(*)(const char*, ImGuiWindowFlags)>(&ImGui::BeginPopup));
	LUA_TRY_INVOKE_R(1, [](const char* arg0){{return ImGui::BeginPopup(arg0);}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_beginPopupContextItem(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.beginPopupContextItem");
	LUA_TRY_INVOKE_R(2, static_cast<bool(*)(const char*, ImGuiPopupFlags)>(&ImGui::BeginPopupContextItem));
	LUA_TRY_INVOKE_R(1, [](const char* arg0){{return ImGui::BeginPopupContextItem(arg0);}});
	LUA_TRY_INVOKE_R(0, [](){{return ImGui::BeginPopupContextItem();}});
	LUA_GINVOKE_FOOTER("0,1,2");
}
int lua_ImGui_beginPopupContextVoid(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.beginPopupContextVoid");
	LUA_TRY_INVOKE_R(2, static_cast<bool(*)(const char*, ImGuiPopupFlags)>(&ImGui::BeginPopupContextVoid));
	LUA_TRY_INVOKE_R(1, [](const char* arg0){{return ImGui::BeginPopupContextVoid(arg0);}});
	LUA_TRY_INVOKE_R(0, [](){{return ImGui::BeginPopupContextVoid();}});
	LUA_GINVOKE_FOOTER("0,1,2");
}
int lua_ImGui_beginPopupContextWindow(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.beginPopupContextWindow");
	LUA_TRY_INVOKE_R(2, static_cast<bool(*)(const char*, ImGuiPopupFlags)>(&ImGui::BeginPopupContextWindow));
	LUA_TRY_INVOKE_R(1, [](const char* arg0){{return ImGui::BeginPopupContextWindow(arg0);}});
	LUA_TRY_INVOKE_R(0, [](){{return ImGui::BeginPopupContextWindow();}});
	LUA_GINVOKE_FOOTER("0,1,2");
}
int lua_ImGui_beginTabBar(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.beginTabBar");
	LUA_TRY_INVOKE_R(2, static_cast<bool(*)(const char*, ImGuiTabBarFlags)>(&ImGui::BeginTabBar));
	LUA_TRY_INVOKE_R(1, [](const char* arg0){{return ImGui::BeginTabBar(arg0);}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_beginTable(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.beginTable");
	LUA_TRY_INVOKE_R(5, static_cast<bool(*)(const char*, int, ImGuiTableFlags, const ImVec2&, float)>(&ImGui::BeginTable));
	LUA_TRY_INVOKE_R(4, [](const char* arg0,int arg1,ImGuiTableFlags arg2,const ImVec2& arg3){{return ImGui::BeginTable(arg0,std::move(arg1),std::move(arg2),arg3);}});
	LUA_TRY_INVOKE_R(3, [](const char* arg0,int arg1,ImGuiTableFlags arg2){{return ImGui::BeginTable(arg0,std::move(arg1),std::move(arg2));}});
	LUA_TRY_INVOKE_R(2, [](const char* arg0,int arg1){{return ImGui::BeginTable(arg0,std::move(arg1));}});
	LUA_GINVOKE_FOOTER("2,3,4,5");
}
int lua_ImGui_beginTooltip(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.beginTooltip");
	LUA_TRY_INVOKE(0, &ImGui::BeginTooltip);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_bullet(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.bullet");
	LUA_TRY_INVOKE(0, &ImGui::Bullet);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_bulletText(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.bulletText");
	LUA_TRY_INVOKE(1, [](const char* arg0){{return ImGui::BulletText("%s",arg0);}});
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_button(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.button");
	LUA_TRY_INVOKE_R(2, static_cast<bool(*)(const char*, const ImVec2&)>(&ImGui::Button));
	LUA_TRY_INVOKE_R(1, [](const char* arg0){{return ImGui::Button(arg0);}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_calcItemWidth(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.calcItemWidth");
	LUA_TRY_INVOKE_R(0, &ImGui::CalcItemWidth);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_closeCurrentPopup(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.closeCurrentPopup");
	LUA_TRY_INVOKE(0, &ImGui::CloseCurrentPopup);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_colorButton(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.colorButton");
	LUA_TRY_INVOKE_R(4, static_cast<bool(*)(const char*, const ImVec4&, ImGuiColorEditFlags, const ImVec2&)>(&ImGui::ColorButton));
	LUA_TRY_INVOKE_R(3, [](const char* arg0,const ImVec4& arg1,ImGuiColorEditFlags arg2){{return ImGui::ColorButton(arg0,arg1,std::move(arg2));}});
	LUA_TRY_INVOKE_R(2, [](const char* arg0,const ImVec4& arg1){{return ImGui::ColorButton(arg0,arg1);}});
	LUA_GINVOKE_FOOTER("2,3,4");
}
int lua_ImGui_colorConvertFloat4ToU32(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.colorConvertFloat4ToU32");
	LUA_TRY_INVOKE_R(1, &ImGui::ColorConvertFloat4ToU32);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_colorConvertU32ToFloat4(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.colorConvertU32ToFloat4");
	LUA_TRY_INVOKE_R(1, &ImGui::ColorConvertU32ToFloat4);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_columns(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.columns");
	LUA_TRY_INVOKE(3, static_cast<void(*)(int, const char*, bool)>(&ImGui::Columns));
	LUA_TRY_INVOKE(2, [](int arg0,const char* arg1){{return ImGui::Columns(std::move(arg0),arg1);}});
	LUA_TRY_INVOKE(1, [](int arg0){{return ImGui::Columns(std::move(arg0));}});
	LUA_TRY_INVOKE(0, [](){{return ImGui::Columns();}});
	LUA_GINVOKE_FOOTER("0,1,2,3");
}
int lua_ImGui_debugCheckVersionAndDataLayout(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.debugCheckVersionAndDataLayout");
	LUA_TRY_INVOKE_R(7, &ImGui::DebugCheckVersionAndDataLayout);
	LUA_GINVOKE_FOOTER("7");
}
int lua_ImGui_debugTextEncoding(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.debugTextEncoding");
	LUA_TRY_INVOKE(1, &ImGui::DebugTextEncoding);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_destroyPlatformWindows(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.destroyPlatformWindows");
	LUA_TRY_INVOKE(0, &ImGui::DestroyPlatformWindows);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_dockSpace(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.dockSpace");
	LUA_TRY_INVOKE_R(4, static_cast<unsigned int(*)(ImGuiID, const ImVec2&, ImGuiDockNodeFlags, const ImGuiWindowClass*)>(&ImGui::DockSpace));
	LUA_TRY_INVOKE_R(3, [](ImGuiID arg0,const ImVec2& arg1,ImGuiDockNodeFlags arg2){{return ImGui::DockSpace(std::move(arg0),arg1,std::move(arg2));}});
	LUA_TRY_INVOKE_R(2, [](ImGuiID arg0,const ImVec2& arg1){{return ImGui::DockSpace(std::move(arg0),arg1);}});
	LUA_TRY_INVOKE_R(1, [](ImGuiID arg0){{return ImGui::DockSpace(std::move(arg0));}});
	LUA_GINVOKE_FOOTER("1,2,3,4");
}
int lua_ImGui_dockSpaceOverViewport(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.dockSpaceOverViewport");
	LUA_TRY_INVOKE_R(3, static_cast<unsigned int(*)(const ImGuiViewport*, ImGuiDockNodeFlags, const ImGuiWindowClass*)>(&ImGui::DockSpaceOverViewport));
	LUA_TRY_INVOKE_R(2, [](const ImGuiViewport* arg0,ImGuiDockNodeFlags arg1){{return ImGui::DockSpaceOverViewport(arg0,std::move(arg1));}});
	LUA_TRY_INVOKE_R(1, [](const ImGuiViewport* arg0){{return ImGui::DockSpaceOverViewport(arg0);}});
	LUA_TRY_INVOKE_R(0, [](){{return ImGui::DockSpaceOverViewport();}});
	LUA_GINVOKE_FOOTER("0,1,2,3");
}
int lua_ImGui_dummy(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.dummy");
	LUA_TRY_INVOKE(1, &ImGui::Dummy);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_endChildFrame(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.endChildFrame");
	LUA_TRY_INVOKE(0, &ImGui::EndChildFrame);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_endCombo(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.endCombo");
	LUA_TRY_INVOKE(0, &ImGui::EndCombo);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_endDisabled(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.endDisabled");
	LUA_TRY_INVOKE(0, &ImGui::EndDisabled);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_endDragDropSource(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.endDragDropSource");
	LUA_TRY_INVOKE(0, &ImGui::EndDragDropSource);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_endDragDropTarget(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.endDragDropTarget");
	LUA_TRY_INVOKE(0, &ImGui::EndDragDropTarget);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_endFrame(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.endFrame");
	LUA_TRY_INVOKE(0, &ImGui::EndFrame);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_endGroup(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.endGroup");
	LUA_TRY_INVOKE(0, &ImGui::EndGroup);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_endListBox(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.endListBox");
	LUA_TRY_INVOKE(0, &ImGui::EndListBox);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_endMainMenuBar(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.endMainMenuBar");
	LUA_TRY_INVOKE(0, &ImGui::EndMainMenuBar);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_endMenu(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.endMenu");
	LUA_TRY_INVOKE(0, &ImGui::EndMenu);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_endMenuBar(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.endMenuBar");
	LUA_TRY_INVOKE(0, &ImGui::EndMenuBar);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_endPopup(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.endPopup");
	LUA_TRY_INVOKE(0, &ImGui::EndPopup);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_endTabBar(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.endTabBar");
	LUA_TRY_INVOKE(0, &ImGui::EndTabBar);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_endTabItem(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.endTabItem");
	LUA_TRY_INVOKE(0, &ImGui::EndTabItem);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_endTable(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.endTable");
	LUA_TRY_INVOKE(0, &ImGui::EndTable);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_endTooltip(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.endTooltip");
	LUA_TRY_INVOKE(0, &ImGui::EndTooltip);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_findViewportByID(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.findViewportByID");
	LUA_TRY_INVOKE_R(1, &ImGui::FindViewportByID);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_getBackgroundDrawList(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getBackgroundDrawList");
	LUA_TRY_INVOKE_R(1, static_cast<ImDrawList*(*)(ImGuiViewport*)>(&ImGui::GetBackgroundDrawList));
	LUA_TRY_INVOKE_R(0, static_cast<ImDrawList*(*)()>(&ImGui::GetBackgroundDrawList));
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_getClipboardText(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getClipboardText");
	LUA_TRY_INVOKE_R(0, &ImGui::GetClipboardText);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getColumnIndex(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getColumnIndex");
	LUA_TRY_INVOKE_R(0, &ImGui::GetColumnIndex);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getColumnOffset(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getColumnOffset");
	LUA_TRY_INVOKE_R(1, static_cast<float(*)(int)>(&ImGui::GetColumnOffset));
	LUA_TRY_INVOKE_R(0, [](){{return ImGui::GetColumnOffset();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_getColumnWidth(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getColumnWidth");
	LUA_TRY_INVOKE_R(1, static_cast<float(*)(int)>(&ImGui::GetColumnWidth));
	LUA_TRY_INVOKE_R(0, [](){{return ImGui::GetColumnWidth();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_getColumnsCount(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getColumnsCount");
	LUA_TRY_INVOKE_R(0, &ImGui::GetColumnsCount);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getContentRegionAvail(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getContentRegionAvail");
	LUA_TRY_INVOKE_R(0, &ImGui::GetContentRegionAvail);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getContentRegionMax(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getContentRegionMax");
	LUA_TRY_INVOKE_R(0, &ImGui::GetContentRegionMax);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getCursorPos(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getCursorPos");
	LUA_TRY_INVOKE_R(0, &ImGui::GetCursorPos);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getCursorPosX(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getCursorPosX");
	LUA_TRY_INVOKE_R(0, &ImGui::GetCursorPosX);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getCursorPosY(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getCursorPosY");
	LUA_TRY_INVOKE_R(0, &ImGui::GetCursorPosY);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getCursorScreenPos(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getCursorScreenPos");
	LUA_TRY_INVOKE_R(0, &ImGui::GetCursorScreenPos);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getCursorStartPos(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getCursorStartPos");
	LUA_TRY_INVOKE_R(0, &ImGui::GetCursorStartPos);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getFontSize(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getFontSize");
	LUA_TRY_INVOKE_R(0, &ImGui::GetFontSize);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getFontTexUvWhitePixel(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getFontTexUvWhitePixel");
	LUA_TRY_INVOKE_R(0, &ImGui::GetFontTexUvWhitePixel);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getForegroundDrawList(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getForegroundDrawList");
	LUA_TRY_INVOKE_R(1, static_cast<ImDrawList*(*)(ImGuiViewport*)>(&ImGui::GetForegroundDrawList));
	LUA_TRY_INVOKE_R(0, static_cast<ImDrawList*(*)()>(&ImGui::GetForegroundDrawList));
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_getFrameCount(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getFrameCount");
	LUA_TRY_INVOKE_R(0, &ImGui::GetFrameCount);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getFrameHeight(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getFrameHeight");
	LUA_TRY_INVOKE_R(0, &ImGui::GetFrameHeight);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getFrameHeightWithSpacing(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getFrameHeightWithSpacing");
	LUA_TRY_INVOKE_R(0, &ImGui::GetFrameHeightWithSpacing);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getID(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getID");
	LUA_TRY_INVOKE_R(2, static_cast<unsigned int(*)(const char*, const char*)>(&ImGui::GetID));
	LUA_TRY_INVOKE_R(1, static_cast<unsigned int(*)(const char*)>(&ImGui::GetID));
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_getItemID(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getItemID");
	LUA_TRY_INVOKE_R(0, &ImGui::GetItemID);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getItemRectMax(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getItemRectMax");
	LUA_TRY_INVOKE_R(0, &ImGui::GetItemRectMax);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getItemRectMin(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getItemRectMin");
	LUA_TRY_INVOKE_R(0, &ImGui::GetItemRectMin);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getItemRectSize(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getItemRectSize");
	LUA_TRY_INVOKE_R(0, &ImGui::GetItemRectSize);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getKeyName(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getKeyName");
	LUA_TRY_INVOKE_R(1, &ImGui::GetKeyName);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_getKeyPressedAmount(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getKeyPressedAmount");
	LUA_TRY_INVOKE_R(3, &ImGui::GetKeyPressedAmount);
	LUA_GINVOKE_FOOTER("3");
}
int lua_ImGui_getMainViewport(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getMainViewport");
	LUA_TRY_INVOKE_R(0, &ImGui::GetMainViewport);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getMouseClickedCount(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getMouseClickedCount");
	LUA_TRY_INVOKE_R(1, &ImGui::GetMouseClickedCount);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_getMouseCursor(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getMouseCursor");
	LUA_TRY_INVOKE_R(0, &ImGui::GetMouseCursor);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getMouseDragDelta(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getMouseDragDelta");
	LUA_TRY_INVOKE_R(2, static_cast<ImVec2(*)(ImGuiMouseButton, float)>(&ImGui::GetMouseDragDelta));
	LUA_TRY_INVOKE_R(1, [](ImGuiMouseButton arg0){{return ImGui::GetMouseDragDelta(std::move(arg0));}});
	LUA_TRY_INVOKE_R(0, [](){{return ImGui::GetMouseDragDelta();}});
	LUA_GINVOKE_FOOTER("0,1,2");
}
int lua_ImGui_getMousePos(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getMousePos");
	LUA_TRY_INVOKE_R(0, &ImGui::GetMousePos);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getMousePosOnOpeningCurrentPopup(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getMousePosOnOpeningCurrentPopup");
	LUA_TRY_INVOKE_R(0, &ImGui::GetMousePosOnOpeningCurrentPopup);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getScrollMaxX(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getScrollMaxX");
	LUA_TRY_INVOKE_R(0, &ImGui::GetScrollMaxX);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getScrollMaxY(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getScrollMaxY");
	LUA_TRY_INVOKE_R(0, &ImGui::GetScrollMaxY);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getScrollX(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getScrollX");
	LUA_TRY_INVOKE_R(0, &ImGui::GetScrollX);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getScrollY(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getScrollY");
	LUA_TRY_INVOKE_R(0, &ImGui::GetScrollY);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getStyleColorName(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getStyleColorName");
	LUA_TRY_INVOKE_R(1, &ImGui::GetStyleColorName);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_getStyleColorVec4(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getStyleColorVec4");
	LUA_TRY_INVOKE_R(1, &ImGui::GetStyleColorVec4);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_getTextLineHeight(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getTextLineHeight");
	LUA_TRY_INVOKE_R(0, &ImGui::GetTextLineHeight);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getTextLineHeightWithSpacing(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getTextLineHeightWithSpacing");
	LUA_TRY_INVOKE_R(0, &ImGui::GetTextLineHeightWithSpacing);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getTime(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getTime");
	LUA_TRY_INVOKE_R(0, &ImGui::GetTime);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getTreeNodeToLabelSpacing(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getTreeNodeToLabelSpacing");
	LUA_TRY_INVOKE_R(0, &ImGui::GetTreeNodeToLabelSpacing);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getVersion(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getVersion");
	LUA_TRY_INVOKE_R(0, &ImGui::GetVersion);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getWindowContentRegionMax(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getWindowContentRegionMax");
	LUA_TRY_INVOKE_R(0, &ImGui::GetWindowContentRegionMax);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getWindowContentRegionMin(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getWindowContentRegionMin");
	LUA_TRY_INVOKE_R(0, &ImGui::GetWindowContentRegionMin);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getWindowDockID(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getWindowDockID");
	LUA_TRY_INVOKE_R(0, &ImGui::GetWindowDockID);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getWindowDpiScale(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getWindowDpiScale");
	LUA_TRY_INVOKE_R(0, &ImGui::GetWindowDpiScale);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getWindowDrawList(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getWindowDrawList");
	LUA_TRY_INVOKE_R(0, &ImGui::GetWindowDrawList);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getWindowHeight(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getWindowHeight");
	LUA_TRY_INVOKE_R(0, &ImGui::GetWindowHeight);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getWindowPos(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getWindowPos");
	LUA_TRY_INVOKE_R(0, &ImGui::GetWindowPos);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getWindowSize(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getWindowSize");
	LUA_TRY_INVOKE_R(0, &ImGui::GetWindowSize);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getWindowViewport(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getWindowViewport");
	LUA_TRY_INVOKE_R(0, &ImGui::GetWindowViewport);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_getWindowWidth(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.getWindowWidth");
	LUA_TRY_INVOKE_R(0, &ImGui::GetWindowWidth);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_indent(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.indent");
	LUA_TRY_INVOKE(1, static_cast<void(*)(float)>(&ImGui::Indent));
	LUA_TRY_INVOKE(0, [](){{return ImGui::Indent();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_invisibleButton(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.invisibleButton");
	LUA_TRY_INVOKE_R(3, static_cast<bool(*)(const char*, const ImVec2&, ImGuiButtonFlags)>(&ImGui::InvisibleButton));
	LUA_TRY_INVOKE_R(2, [](const char* arg0,const ImVec2& arg1){{return ImGui::InvisibleButton(arg0,arg1);}});
	LUA_GINVOKE_FOOTER("2,3");
}
int lua_ImGui_isAnyItemActive(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isAnyItemActive");
	LUA_TRY_INVOKE_R(0, &ImGui::IsAnyItemActive);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_isAnyItemFocused(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isAnyItemFocused");
	LUA_TRY_INVOKE_R(0, &ImGui::IsAnyItemFocused);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_isAnyItemHovered(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isAnyItemHovered");
	LUA_TRY_INVOKE_R(0, &ImGui::IsAnyItemHovered);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_isAnyMouseDown(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isAnyMouseDown");
	LUA_TRY_INVOKE_R(0, &ImGui::IsAnyMouseDown);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_isItemActivated(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isItemActivated");
	LUA_TRY_INVOKE_R(0, &ImGui::IsItemActivated);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_isItemActive(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isItemActive");
	LUA_TRY_INVOKE_R(0, &ImGui::IsItemActive);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_isItemClicked(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isItemClicked");
	LUA_TRY_INVOKE_R(1, static_cast<bool(*)(ImGuiMouseButton)>(&ImGui::IsItemClicked));
	LUA_TRY_INVOKE_R(0, [](){{return ImGui::IsItemClicked();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_isItemDeactivated(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isItemDeactivated");
	LUA_TRY_INVOKE_R(0, &ImGui::IsItemDeactivated);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_isItemDeactivatedAfterEdit(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isItemDeactivatedAfterEdit");
	LUA_TRY_INVOKE_R(0, &ImGui::IsItemDeactivatedAfterEdit);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_isItemEdited(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isItemEdited");
	LUA_TRY_INVOKE_R(0, &ImGui::IsItemEdited);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_isItemFocused(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isItemFocused");
	LUA_TRY_INVOKE_R(0, &ImGui::IsItemFocused);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_isItemHovered(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isItemHovered");
	LUA_TRY_INVOKE_R(1, static_cast<bool(*)(ImGuiHoveredFlags)>(&ImGui::IsItemHovered));
	LUA_TRY_INVOKE_R(0, [](){{return ImGui::IsItemHovered();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_isItemToggledOpen(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isItemToggledOpen");
	LUA_TRY_INVOKE_R(0, &ImGui::IsItemToggledOpen);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_isItemVisible(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isItemVisible");
	LUA_TRY_INVOKE_R(0, &ImGui::IsItemVisible);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_isKeyDown(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isKeyDown");
	LUA_TRY_INVOKE_R(1, &ImGui::IsKeyDown);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_isKeyPressed(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isKeyPressed");
	LUA_TRY_INVOKE_R(2, static_cast<bool(*)(ImGuiKey, bool)>(&ImGui::IsKeyPressed));
	LUA_TRY_INVOKE_R(1, [](ImGuiKey arg0){{return ImGui::IsKeyPressed(std::move(arg0));}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_isKeyReleased(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isKeyReleased");
	LUA_TRY_INVOKE_R(1, &ImGui::IsKeyReleased);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_isMouseClicked(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isMouseClicked");
	LUA_TRY_INVOKE_R(2, static_cast<bool(*)(ImGuiMouseButton, bool)>(&ImGui::IsMouseClicked));
	LUA_TRY_INVOKE_R(1, [](ImGuiMouseButton arg0){{return ImGui::IsMouseClicked(std::move(arg0));}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_isMouseDoubleClicked(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isMouseDoubleClicked");
	LUA_TRY_INVOKE_R(1, &ImGui::IsMouseDoubleClicked);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_isMouseDown(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isMouseDown");
	LUA_TRY_INVOKE_R(1, &ImGui::IsMouseDown);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_isMouseDragging(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isMouseDragging");
	LUA_TRY_INVOKE_R(2, static_cast<bool(*)(ImGuiMouseButton, float)>(&ImGui::IsMouseDragging));
	LUA_TRY_INVOKE_R(1, [](ImGuiMouseButton arg0){{return ImGui::IsMouseDragging(std::move(arg0));}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_isMouseHoveringRect(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isMouseHoveringRect");
	LUA_TRY_INVOKE_R(3, static_cast<bool(*)(const ImVec2&, const ImVec2&, bool)>(&ImGui::IsMouseHoveringRect));
	LUA_TRY_INVOKE_R(2, [](const ImVec2& arg0,const ImVec2& arg1){{return ImGui::IsMouseHoveringRect(arg0,arg1);}});
	LUA_GINVOKE_FOOTER("2,3");
}
int lua_ImGui_isMouseReleased(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isMouseReleased");
	LUA_TRY_INVOKE_R(1, &ImGui::IsMouseReleased);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_isPopupOpen(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isPopupOpen");
	LUA_TRY_INVOKE_R(2, static_cast<bool(*)(const char*, ImGuiPopupFlags)>(&ImGui::IsPopupOpen));
	LUA_TRY_INVOKE_R(1, [](const char* arg0){{return ImGui::IsPopupOpen(arg0);}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_isRectVisible(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isRectVisible");
	LUA_TRY_INVOKE_R(2, static_cast<bool(*)(const ImVec2&, const ImVec2&)>(&ImGui::IsRectVisible));
	LUA_TRY_INVOKE_R(1, static_cast<bool(*)(const ImVec2&)>(&ImGui::IsRectVisible));
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_isWindowAppearing(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isWindowAppearing");
	LUA_TRY_INVOKE_R(0, &ImGui::IsWindowAppearing);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_isWindowCollapsed(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isWindowCollapsed");
	LUA_TRY_INVOKE_R(0, &ImGui::IsWindowCollapsed);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_isWindowDocked(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isWindowDocked");
	LUA_TRY_INVOKE_R(0, &ImGui::IsWindowDocked);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_isWindowFocused(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isWindowFocused");
	LUA_TRY_INVOKE_R(1, static_cast<bool(*)(ImGuiFocusedFlags)>(&ImGui::IsWindowFocused));
	LUA_TRY_INVOKE_R(0, [](){{return ImGui::IsWindowFocused();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_isWindowHovered(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.isWindowHovered");
	LUA_TRY_INVOKE_R(1, static_cast<bool(*)(ImGuiHoveredFlags)>(&ImGui::IsWindowHovered));
	LUA_TRY_INVOKE_R(0, [](){{return ImGui::IsWindowHovered();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_labelText(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.labelText");
	LUA_TRY_INVOKE(2, [](const char* arg0,const char* arg1){{return ImGui::LabelText(arg0,"%s",arg1);}});
	LUA_GINVOKE_FOOTER("2");
}
int lua_ImGui_loadIniSettingsFromDisk(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.loadIniSettingsFromDisk");
	LUA_TRY_INVOKE(1, &ImGui::LoadIniSettingsFromDisk);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_loadIniSettingsFromMemory(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.loadIniSettingsFromMemory");
	LUA_TRY_INVOKE(2, static_cast<void(*)(const char*, size_t)>(&ImGui::LoadIniSettingsFromMemory));
	LUA_TRY_INVOKE(1, [](const char* arg0){{return ImGui::LoadIniSettingsFromMemory(arg0);}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_logButtons(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.logButtons");
	LUA_TRY_INVOKE(0, &ImGui::LogButtons);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_logFinish(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.logFinish");
	LUA_TRY_INVOKE(0, &ImGui::LogFinish);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_logText(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.logText");
	LUA_TRY_INVOKE(1, [](const char* arg0){{return ImGui::LogText("%s",arg0);}});
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_logToClipboard(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.logToClipboard");
	LUA_TRY_INVOKE(1, static_cast<void(*)(int)>(&ImGui::LogToClipboard));
	LUA_TRY_INVOKE(0, [](){{return ImGui::LogToClipboard();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_logToFile(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.logToFile");
	LUA_TRY_INVOKE(2, static_cast<void(*)(int, const char*)>(&ImGui::LogToFile));
	LUA_TRY_INVOKE(1, [](int arg0){{return ImGui::LogToFile(std::move(arg0));}});
	LUA_TRY_INVOKE(0, [](){{return ImGui::LogToFile();}});
	LUA_GINVOKE_FOOTER("0,1,2");
}
int lua_ImGui_logToTTY(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.logToTTY");
	LUA_TRY_INVOKE(1, static_cast<void(*)(int)>(&ImGui::LogToTTY));
	LUA_TRY_INVOKE(0, [](){{return ImGui::LogToTTY();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_newFrame(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.newFrame");
	LUA_TRY_INVOKE(0, &ImGui::NewFrame);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_newLine(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.newLine");
	LUA_TRY_INVOKE(0, &ImGui::NewLine);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_nextColumn(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.nextColumn");
	LUA_TRY_INVOKE(0, &ImGui::NextColumn);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_openPopup(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.openPopup");
	LUA_TRY_INVOKE(2, static_cast<void(*)(ImGuiID, ImGuiPopupFlags)>(&ImGui::OpenPopup));
	LUA_TRY_INVOKE(2, [](const char* arg0,ImGuiPopupFlags arg1){{return ImGui::OpenPopup(arg0,std::move(arg1));}});
	LUA_TRY_INVOKE(1, [](ImGuiID arg0){{return ImGui::OpenPopup(std::move(arg0));}});
	LUA_TRY_INVOKE(1, [](const char* arg0){{return ImGui::OpenPopup(arg0);}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_openPopupOnItemClick(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.openPopupOnItemClick");
	LUA_TRY_INVOKE(2, static_cast<void(*)(const char*, ImGuiPopupFlags)>(&ImGui::OpenPopupOnItemClick));
	LUA_TRY_INVOKE(1, [](const char* arg0){{return ImGui::OpenPopupOnItemClick(arg0);}});
	LUA_TRY_INVOKE(0, [](){{return ImGui::OpenPopupOnItemClick();}});
	LUA_GINVOKE_FOOTER("0,1,2");
}
int lua_ImGui_popAllowKeyboardFocus(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.popAllowKeyboardFocus");
	LUA_TRY_INVOKE(0, &ImGui::PopAllowKeyboardFocus);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_popButtonRepeat(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.popButtonRepeat");
	LUA_TRY_INVOKE(0, &ImGui::PopButtonRepeat);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_popClipRect(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.popClipRect");
	LUA_TRY_INVOKE(0, &ImGui::PopClipRect);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_popFont(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.popFont");
	LUA_TRY_INVOKE(0, &ImGui::PopFont);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_popID(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.popID");
	LUA_TRY_INVOKE(0, &ImGui::PopID);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_popItemWidth(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.popItemWidth");
	LUA_TRY_INVOKE(0, &ImGui::PopItemWidth);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_popStyleColor(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.popStyleColor");
	LUA_TRY_INVOKE(1, static_cast<void(*)(int)>(&ImGui::PopStyleColor));
	LUA_TRY_INVOKE(0, [](){{return ImGui::PopStyleColor();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_popStyleVar(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.popStyleVar");
	LUA_TRY_INVOKE(1, static_cast<void(*)(int)>(&ImGui::PopStyleVar));
	LUA_TRY_INVOKE(0, [](){{return ImGui::PopStyleVar();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_popTextWrapPos(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.popTextWrapPos");
	LUA_TRY_INVOKE(0, &ImGui::PopTextWrapPos);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_progressBar(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.progressBar");
	LUA_TRY_INVOKE(3, static_cast<void(*)(float, const ImVec2&, const char*)>(&ImGui::ProgressBar));
	LUA_TRY_INVOKE(2, [](float arg0,const ImVec2& arg1){{return ImGui::ProgressBar(std::move(arg0),arg1);}});
	LUA_TRY_INVOKE(1, [](float arg0){{return ImGui::ProgressBar(std::move(arg0));}});
	LUA_GINVOKE_FOOTER("1,2,3");
}
int lua_ImGui_pushAllowKeyboardFocus(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.pushAllowKeyboardFocus");
	LUA_TRY_INVOKE(1, &ImGui::PushAllowKeyboardFocus);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_pushButtonRepeat(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.pushButtonRepeat");
	LUA_TRY_INVOKE(1, &ImGui::PushButtonRepeat);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_pushClipRect(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.pushClipRect");
	LUA_TRY_INVOKE(3, &ImGui::PushClipRect);
	LUA_GINVOKE_FOOTER("3");
}
int lua_ImGui_pushItemWidth(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.pushItemWidth");
	LUA_TRY_INVOKE(1, &ImGui::PushItemWidth);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_pushTextWrapPos(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.pushTextWrapPos");
	LUA_TRY_INVOKE(1, static_cast<void(*)(float)>(&ImGui::PushTextWrapPos));
	LUA_TRY_INVOKE(0, [](){{return ImGui::PushTextWrapPos();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_render(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.render");
	LUA_TRY_INVOKE(0, &ImGui::Render);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_renderPlatformWindowsDefault(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.renderPlatformWindowsDefault");
	LUA_TRY_INVOKE(0, [](){{return ImGui::RenderPlatformWindowsDefault();}});
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_resetMouseDragDelta(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.resetMouseDragDelta");
	LUA_TRY_INVOKE(1, static_cast<void(*)(ImGuiMouseButton)>(&ImGui::ResetMouseDragDelta));
	LUA_TRY_INVOKE(0, [](){{return ImGui::ResetMouseDragDelta();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_sameLine(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.sameLine");
	LUA_TRY_INVOKE(2, static_cast<void(*)(float, float)>(&ImGui::SameLine));
	LUA_TRY_INVOKE(1, [](float arg0){{return ImGui::SameLine(std::move(arg0));}});
	LUA_TRY_INVOKE(0, [](){{return ImGui::SameLine();}});
	LUA_GINVOKE_FOOTER("0,1,2");
}
int lua_ImGui_saveIniSettingsToDisk(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.saveIniSettingsToDisk");
	LUA_TRY_INVOKE(1, &ImGui::SaveIniSettingsToDisk);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_separator(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.separator");
	LUA_TRY_INVOKE(0, &ImGui::Separator);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_separatorText(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.separatorText");
	LUA_TRY_INVOKE(1, &ImGui::SeparatorText);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_setClipboardText(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setClipboardText");
	LUA_TRY_INVOKE(1, &ImGui::SetClipboardText);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_setColorEditOptions(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setColorEditOptions");
	LUA_TRY_INVOKE(1, &ImGui::SetColorEditOptions);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_setColumnOffset(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setColumnOffset");
	LUA_TRY_INVOKE(2, &ImGui::SetColumnOffset);
	LUA_GINVOKE_FOOTER("2");
}
int lua_ImGui_setColumnWidth(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setColumnWidth");
	LUA_TRY_INVOKE(2, &ImGui::SetColumnWidth);
	LUA_GINVOKE_FOOTER("2");
}
int lua_ImGui_setCursorPos(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setCursorPos");
	LUA_TRY_INVOKE(1, &ImGui::SetCursorPos);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_setCursorPosX(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setCursorPosX");
	LUA_TRY_INVOKE(1, &ImGui::SetCursorPosX);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_setCursorPosY(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setCursorPosY");
	LUA_TRY_INVOKE(1, &ImGui::SetCursorPosY);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_setCursorScreenPos(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setCursorScreenPos");
	LUA_TRY_INVOKE(1, &ImGui::SetCursorScreenPos);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_setItemAllowOverlap(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setItemAllowOverlap");
	LUA_TRY_INVOKE(0, &ImGui::SetItemAllowOverlap);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_setItemDefaultFocus(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setItemDefaultFocus");
	LUA_TRY_INVOKE(0, &ImGui::SetItemDefaultFocus);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_setKeyboardFocusHere(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setKeyboardFocusHere");
	LUA_TRY_INVOKE(1, static_cast<void(*)(int)>(&ImGui::SetKeyboardFocusHere));
	LUA_TRY_INVOKE(0, [](){{return ImGui::SetKeyboardFocusHere();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_setMouseCursor(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setMouseCursor");
	LUA_TRY_INVOKE(1, &ImGui::SetMouseCursor);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_setNextFrameWantCaptureKeyboard(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setNextFrameWantCaptureKeyboard");
	LUA_TRY_INVOKE(1, &ImGui::SetNextFrameWantCaptureKeyboard);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_setNextFrameWantCaptureMouse(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setNextFrameWantCaptureMouse");
	LUA_TRY_INVOKE(1, &ImGui::SetNextFrameWantCaptureMouse);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_setNextItemOpen(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setNextItemOpen");
	LUA_TRY_INVOKE(2, static_cast<void(*)(bool, ImGuiCond)>(&ImGui::SetNextItemOpen));
	LUA_TRY_INVOKE(1, [](bool arg0){{return ImGui::SetNextItemOpen(std::move(arg0));}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_setNextItemWidth(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setNextItemWidth");
	LUA_TRY_INVOKE(1, &ImGui::SetNextItemWidth);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_setNextWindowBgAlpha(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setNextWindowBgAlpha");
	LUA_TRY_INVOKE(1, &ImGui::SetNextWindowBgAlpha);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_setNextWindowCollapsed(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setNextWindowCollapsed");
	LUA_TRY_INVOKE(2, static_cast<void(*)(bool, ImGuiCond)>(&ImGui::SetNextWindowCollapsed));
	LUA_TRY_INVOKE(1, [](bool arg0){{return ImGui::SetNextWindowCollapsed(std::move(arg0));}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_setNextWindowContentSize(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setNextWindowContentSize");
	LUA_TRY_INVOKE(1, &ImGui::SetNextWindowContentSize);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_setNextWindowDockID(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setNextWindowDockID");
	LUA_TRY_INVOKE(2, static_cast<void(*)(ImGuiID, ImGuiCond)>(&ImGui::SetNextWindowDockID));
	LUA_TRY_INVOKE(1, [](ImGuiID arg0){{return ImGui::SetNextWindowDockID(std::move(arg0));}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_setNextWindowFocus(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setNextWindowFocus");
	LUA_TRY_INVOKE(0, &ImGui::SetNextWindowFocus);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_setNextWindowPos(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setNextWindowPos");
	LUA_TRY_INVOKE(3, static_cast<void(*)(const ImVec2&, ImGuiCond, const ImVec2&)>(&ImGui::SetNextWindowPos));
	LUA_TRY_INVOKE(2, [](const ImVec2& arg0,ImGuiCond arg1){{return ImGui::SetNextWindowPos(arg0,std::move(arg1));}});
	LUA_TRY_INVOKE(1, [](const ImVec2& arg0){{return ImGui::SetNextWindowPos(arg0);}});
	LUA_GINVOKE_FOOTER("1,2,3");
}
int lua_ImGui_setNextWindowScroll(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setNextWindowScroll");
	LUA_TRY_INVOKE(1, &ImGui::SetNextWindowScroll);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_setNextWindowSize(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setNextWindowSize");
	LUA_TRY_INVOKE(2, static_cast<void(*)(const ImVec2&, ImGuiCond)>(&ImGui::SetNextWindowSize));
	LUA_TRY_INVOKE(1, [](const ImVec2& arg0){{return ImGui::SetNextWindowSize(arg0);}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_setNextWindowSizeConstraints(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setNextWindowSizeConstraints");
	LUA_TRY_INVOKE(3, [](const ImVec2& arg0,const ImVec2& arg1,ImGuiSizeCallback arg2){{return ImGui::SetNextWindowSizeConstraints(arg0,arg1,std::move(arg2));}});
	LUA_TRY_INVOKE(2, [](const ImVec2& arg0,const ImVec2& arg1){{return ImGui::SetNextWindowSizeConstraints(arg0,arg1);}});
	LUA_GINVOKE_FOOTER("2,3");
}
int lua_ImGui_setNextWindowViewport(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setNextWindowViewport");
	LUA_TRY_INVOKE(1, &ImGui::SetNextWindowViewport);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_setScrollFromPosX(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setScrollFromPosX");
	LUA_TRY_INVOKE(2, static_cast<void(*)(float, float)>(&ImGui::SetScrollFromPosX));
	LUA_TRY_INVOKE(1, [](float arg0){{return ImGui::SetScrollFromPosX(std::move(arg0));}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_setScrollFromPosY(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setScrollFromPosY");
	LUA_TRY_INVOKE(2, static_cast<void(*)(float, float)>(&ImGui::SetScrollFromPosY));
	LUA_TRY_INVOKE(1, [](float arg0){{return ImGui::SetScrollFromPosY(std::move(arg0));}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_setScrollHereX(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setScrollHereX");
	LUA_TRY_INVOKE(1, static_cast<void(*)(float)>(&ImGui::SetScrollHereX));
	LUA_TRY_INVOKE(0, [](){{return ImGui::SetScrollHereX();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_setScrollHereY(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setScrollHereY");
	LUA_TRY_INVOKE(1, static_cast<void(*)(float)>(&ImGui::SetScrollHereY));
	LUA_TRY_INVOKE(0, [](){{return ImGui::SetScrollHereY();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_setScrollX(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setScrollX");
	LUA_TRY_INVOKE(1, &ImGui::SetScrollX);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_setScrollY(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setScrollY");
	LUA_TRY_INVOKE(1, &ImGui::SetScrollY);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_setTabItemClosed(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setTabItemClosed");
	LUA_TRY_INVOKE(1, &ImGui::SetTabItemClosed);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_setTooltip(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setTooltip");
	LUA_TRY_INVOKE(1, [](const char* arg0){{return ImGui::SetTooltip("%s",arg0);}});
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_setWindowCollapsed(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setWindowCollapsed");
	LUA_TRY_INVOKE(3, static_cast<void(*)(const char*, bool, ImGuiCond)>(&ImGui::SetWindowCollapsed));
	LUA_TRY_INVOKE(2, [](const char* arg0,bool arg1){{return ImGui::SetWindowCollapsed(arg0,std::move(arg1));}});
	LUA_TRY_INVOKE(2, [](bool arg0,ImGuiCond arg1){{return ImGui::SetWindowCollapsed(std::move(arg0),std::move(arg1));}});
	LUA_TRY_INVOKE(1, [](bool arg0){{return ImGui::SetWindowCollapsed(std::move(arg0));}});
	LUA_GINVOKE_FOOTER("1,2,3");
}
int lua_ImGui_setWindowFocus(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setWindowFocus");
	LUA_TRY_INVOKE(1, static_cast<void(*)(const char*)>(&ImGui::SetWindowFocus));
	LUA_TRY_INVOKE(0, static_cast<void(*)()>(&ImGui::SetWindowFocus));
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_setWindowFontScale(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setWindowFontScale");
	LUA_TRY_INVOKE(1, &ImGui::SetWindowFontScale);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_setWindowPos(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setWindowPos");
	LUA_TRY_INVOKE(3, static_cast<void(*)(const char*, const ImVec2&, ImGuiCond)>(&ImGui::SetWindowPos));
	LUA_TRY_INVOKE(2, [](const char* arg0,const ImVec2& arg1){{return ImGui::SetWindowPos(arg0,arg1);}});
	LUA_TRY_INVOKE(2, [](const ImVec2& arg0,ImGuiCond arg1){{return ImGui::SetWindowPos(arg0,std::move(arg1));}});
	LUA_TRY_INVOKE(1, [](const ImVec2& arg0){{return ImGui::SetWindowPos(arg0);}});
	LUA_GINVOKE_FOOTER("1,2,3");
}
int lua_ImGui_setWindowSize(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.setWindowSize");
	LUA_TRY_INVOKE(3, static_cast<void(*)(const char*, const ImVec2&, ImGuiCond)>(&ImGui::SetWindowSize));
	LUA_TRY_INVOKE(2, [](const char* arg0,const ImVec2& arg1){{return ImGui::SetWindowSize(arg0,arg1);}});
	LUA_TRY_INVOKE(2, [](const ImVec2& arg0,ImGuiCond arg1){{return ImGui::SetWindowSize(arg0,std::move(arg1));}});
	LUA_TRY_INVOKE(1, [](const ImVec2& arg0){{return ImGui::SetWindowSize(arg0);}});
	LUA_GINVOKE_FOOTER("1,2,3");
}
int lua_ImGui_showFontSelector(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.showFontSelector");
	LUA_TRY_INVOKE(1, &ImGui::ShowFontSelector);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_showStyleSelector(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.showStyleSelector");
	LUA_TRY_INVOKE_R(1, &ImGui::ShowStyleSelector);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_showUserGuide(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.showUserGuide");
	LUA_TRY_INVOKE(0, &ImGui::ShowUserGuide);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_smallButton(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.smallButton");
	LUA_TRY_INVOKE_R(1, &ImGui::SmallButton);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_spacing(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.spacing");
	LUA_TRY_INVOKE(0, &ImGui::Spacing);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_tabItemButton(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.tabItemButton");
	LUA_TRY_INVOKE_R(2, static_cast<bool(*)(const char*, ImGuiTabItemFlags)>(&ImGui::TabItemButton));
	LUA_TRY_INVOKE_R(1, [](const char* arg0){{return ImGui::TabItemButton(arg0);}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_tableGetColumnCount(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.tableGetColumnCount");
	LUA_TRY_INVOKE_R(0, &ImGui::TableGetColumnCount);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_tableGetColumnFlags(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.tableGetColumnFlags");
	LUA_TRY_INVOKE_R(1, static_cast<int(*)(int)>(&ImGui::TableGetColumnFlags));
	LUA_TRY_INVOKE_R(0, [](){{return ImGui::TableGetColumnFlags();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_tableGetColumnIndex(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.tableGetColumnIndex");
	LUA_TRY_INVOKE_R(0, &ImGui::TableGetColumnIndex);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_tableGetColumnName(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.tableGetColumnName");
	LUA_TRY_INVOKE_R(1, static_cast<const char*(*)(int)>(&ImGui::TableGetColumnName));
	LUA_TRY_INVOKE_R(0, [](){{return ImGui::TableGetColumnName();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_tableGetRowIndex(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.tableGetRowIndex");
	LUA_TRY_INVOKE_R(0, &ImGui::TableGetRowIndex);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_tableHeader(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.tableHeader");
	LUA_TRY_INVOKE(1, &ImGui::TableHeader);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_tableHeadersRow(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.tableHeadersRow");
	LUA_TRY_INVOKE(0, &ImGui::TableHeadersRow);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_tableNextColumn(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.tableNextColumn");
	LUA_TRY_INVOKE_R(0, &ImGui::TableNextColumn);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_tableNextRow(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.tableNextRow");
	LUA_TRY_INVOKE(2, static_cast<void(*)(ImGuiTableRowFlags, float)>(&ImGui::TableNextRow));
	LUA_TRY_INVOKE(1, [](ImGuiTableRowFlags arg0){{return ImGui::TableNextRow(std::move(arg0));}});
	LUA_TRY_INVOKE(0, [](){{return ImGui::TableNextRow();}});
	LUA_GINVOKE_FOOTER("0,1,2");
}
int lua_ImGui_tableSetBgColor(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.tableSetBgColor");
	LUA_TRY_INVOKE(3, static_cast<void(*)(ImGuiTableBgTarget, ImU32, int)>(&ImGui::TableSetBgColor));
	LUA_TRY_INVOKE(2, [](ImGuiTableBgTarget arg0,ImU32 arg1){{return ImGui::TableSetBgColor(std::move(arg0),std::move(arg1));}});
	LUA_GINVOKE_FOOTER("2,3");
}
int lua_ImGui_tableSetColumnEnabled(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.tableSetColumnEnabled");
	LUA_TRY_INVOKE(2, &ImGui::TableSetColumnEnabled);
	LUA_GINVOKE_FOOTER("2");
}
int lua_ImGui_tableSetColumnIndex(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.tableSetColumnIndex");
	LUA_TRY_INVOKE_R(1, &ImGui::TableSetColumnIndex);
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_tableSetupColumn(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.tableSetupColumn");
	LUA_TRY_INVOKE(4, static_cast<void(*)(const char*, ImGuiTableColumnFlags, float, ImGuiID)>(&ImGui::TableSetupColumn));
	LUA_TRY_INVOKE(3, [](const char* arg0,ImGuiTableColumnFlags arg1,float arg2){{return ImGui::TableSetupColumn(arg0,std::move(arg1),std::move(arg2));}});
	LUA_TRY_INVOKE(2, [](const char* arg0,ImGuiTableColumnFlags arg1){{return ImGui::TableSetupColumn(arg0,std::move(arg1));}});
	LUA_TRY_INVOKE(1, [](const char* arg0){{return ImGui::TableSetupColumn(arg0);}});
	LUA_GINVOKE_FOOTER("1,2,3,4");
}
int lua_ImGui_tableSetupScrollFreeze(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.tableSetupScrollFreeze");
	LUA_TRY_INVOKE(2, &ImGui::TableSetupScrollFreeze);
	LUA_GINVOKE_FOOTER("2");
}
int lua_ImGui_text(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.text");
	LUA_TRY_INVOKE(1, [](const char* arg0){{return ImGui::Text("%s",arg0);}});
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_textColored(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.textColored");
	LUA_TRY_INVOKE(2, [](const ImVec4& arg0,const char* arg1){{return ImGui::TextColored(arg0,"%s",arg1);}});
	LUA_GINVOKE_FOOTER("2");
}
int lua_ImGui_textDisabled(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.textDisabled");
	LUA_TRY_INVOKE(1, [](const char* arg0){{return ImGui::TextDisabled("%s",arg0);}});
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_textUnformatted(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.textUnformatted");
	LUA_TRY_INVOKE(2, static_cast<void(*)(const char*, const char*)>(&ImGui::TextUnformatted));
	LUA_TRY_INVOKE(1, [](const char* arg0){{return ImGui::TextUnformatted(arg0);}});
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_textWrapped(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.textWrapped");
	LUA_TRY_INVOKE(1, [](const char* arg0){{return ImGui::TextWrapped("%s",arg0);}});
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_treeNode(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.treeNode");
	LUA_TRY_INVOKE_R(2, [](const char* arg0,const char* arg1){{return ImGui::TreeNode(arg0,"%s",arg1);}});
	LUA_TRY_INVOKE_R(1, static_cast<bool(*)(const char*)>(&ImGui::TreeNode));
	LUA_GINVOKE_FOOTER("1,2");
}
int lua_ImGui_treeNodeEx(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.treeNodeEx");
	LUA_TRY_INVOKE_R(3, [](const char* arg0,ImGuiTreeNodeFlags arg1,const char* arg2){{return ImGui::TreeNodeEx(arg0,std::move(arg1),"%s",arg2);}});
	LUA_TRY_INVOKE_R(2, [](const char* arg0,ImGuiTreeNodeFlags arg1){{return ImGui::TreeNodeEx(arg0,std::move(arg1));}});
	LUA_TRY_INVOKE_R(1, [](const char* arg0){{return ImGui::TreeNodeEx(arg0);}});
	LUA_GINVOKE_FOOTER("1,2,3");
}
int lua_ImGui_treePop(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.treePop");
	LUA_TRY_INVOKE(0, &ImGui::TreePop);
	LUA_GINVOKE_FOOTER("0");
}
int lua_ImGui_treePush(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.treePush");
	LUA_TRY_INVOKE(1, static_cast<void(*)(const char*)>(&ImGui::TreePush));
	LUA_GINVOKE_FOOTER("1");
}
int lua_ImGui_unindent(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.unindent");
	LUA_TRY_INVOKE(1, static_cast<void(*)(float)>(&ImGui::Unindent));
	LUA_TRY_INVOKE(0, [](){{return ImGui::Unindent();}});
	LUA_GINVOKE_FOOTER("0,1");
}
int lua_ImGui_updatePlatformWindows(lua_State* lua_S)
{
	LUA_GINVOKE_HEADER("ImGui", "ImGui.updatePlatformWindows");
	LUA_TRY_INVOKE(0, &ImGui::UpdatePlatformWindows);
	LUA_GINVOKE_FOOTER("0");
}
int luaReg_imgui_imgui_global_functions(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_METHOD("alignTextToFramePadding", lua_ImGui_alignTextToFramePadding);
	LUA_METHOD("arrowButton", lua_ImGui_arrowButton);
	LUA_METHOD("beginChildFrame", lua_ImGui_beginChildFrame);
	LUA_METHOD("beginCombo", lua_ImGui_beginCombo);
	LUA_METHOD("beginDisabled", lua_ImGui_beginDisabled);
	LUA_METHOD("beginDragDropSource", lua_ImGui_beginDragDropSource);
	LUA_METHOD("beginDragDropTarget", lua_ImGui_beginDragDropTarget);
	LUA_METHOD("beginGroup", lua_ImGui_beginGroup);
	LUA_METHOD("beginListBox", lua_ImGui_beginListBox);
	LUA_METHOD("beginMainMenuBar", lua_ImGui_beginMainMenuBar);
	LUA_METHOD("beginMenu", lua_ImGui_beginMenu);
	LUA_METHOD("beginMenuBar", lua_ImGui_beginMenuBar);
	LUA_METHOD("beginPopup", lua_ImGui_beginPopup);
	LUA_METHOD("beginPopupContextItem", lua_ImGui_beginPopupContextItem);
	LUA_METHOD("beginPopupContextVoid", lua_ImGui_beginPopupContextVoid);
	LUA_METHOD("beginPopupContextWindow", lua_ImGui_beginPopupContextWindow);
	LUA_METHOD("beginTabBar", lua_ImGui_beginTabBar);
	LUA_METHOD("beginTable", lua_ImGui_beginTable);
	LUA_METHOD("beginTooltip", lua_ImGui_beginTooltip);
	LUA_METHOD("bullet", lua_ImGui_bullet);
	LUA_METHOD("bulletText", lua_ImGui_bulletText);
	LUA_METHOD("button", lua_ImGui_button);
	LUA_METHOD("calcItemWidth", lua_ImGui_calcItemWidth);
	LUA_METHOD("closeCurrentPopup", lua_ImGui_closeCurrentPopup);
	LUA_METHOD("colorButton", lua_ImGui_colorButton);
	LUA_METHOD("colorConvertFloat4ToU32", lua_ImGui_colorConvertFloat4ToU32);
	LUA_METHOD("colorConvertU32ToFloat4", lua_ImGui_colorConvertU32ToFloat4);
	LUA_METHOD("columns", lua_ImGui_columns);
	LUA_METHOD("debugCheckVersionAndDataLayout", lua_ImGui_debugCheckVersionAndDataLayout);
	LUA_METHOD("debugTextEncoding", lua_ImGui_debugTextEncoding);
	LUA_METHOD("destroyPlatformWindows", lua_ImGui_destroyPlatformWindows);
	LUA_METHOD("dockSpace", lua_ImGui_dockSpace);
	LUA_METHOD("dockSpaceOverViewport", lua_ImGui_dockSpaceOverViewport);
	LUA_METHOD("dummy", lua_ImGui_dummy);
	LUA_METHOD("endChildFrame", lua_ImGui_endChildFrame);
	LUA_METHOD("endCombo", lua_ImGui_endCombo);
	LUA_METHOD("endDisabled", lua_ImGui_endDisabled);
	LUA_METHOD("endDragDropSource", lua_ImGui_endDragDropSource);
	LUA_METHOD("endDragDropTarget", lua_ImGui_endDragDropTarget);
	LUA_METHOD("endFrame", lua_ImGui_endFrame);
	LUA_METHOD("endGroup", lua_ImGui_endGroup);
	LUA_METHOD("endListBox", lua_ImGui_endListBox);
	LUA_METHOD("endMainMenuBar", lua_ImGui_endMainMenuBar);
	LUA_METHOD("endMenu", lua_ImGui_endMenu);
	LUA_METHOD("endMenuBar", lua_ImGui_endMenuBar);
	LUA_METHOD("endPopup", lua_ImGui_endPopup);
	LUA_METHOD("endTabBar", lua_ImGui_endTabBar);
	LUA_METHOD("endTabItem", lua_ImGui_endTabItem);
	LUA_METHOD("endTable", lua_ImGui_endTable);
	LUA_METHOD("endTooltip", lua_ImGui_endTooltip);
	LUA_METHOD("findViewportByID", lua_ImGui_findViewportByID);
	LUA_METHOD("getBackgroundDrawList", lua_ImGui_getBackgroundDrawList);
	LUA_METHOD("getClipboardText", lua_ImGui_getClipboardText);
	LUA_METHOD("getColumnIndex", lua_ImGui_getColumnIndex);
	LUA_METHOD("getColumnOffset", lua_ImGui_getColumnOffset);
	LUA_METHOD("getColumnWidth", lua_ImGui_getColumnWidth);
	LUA_METHOD("getColumnsCount", lua_ImGui_getColumnsCount);
	LUA_METHOD("getContentRegionAvail", lua_ImGui_getContentRegionAvail);
	LUA_METHOD("getContentRegionMax", lua_ImGui_getContentRegionMax);
	LUA_METHOD("getCursorPos", lua_ImGui_getCursorPos);
	LUA_METHOD("getCursorPosX", lua_ImGui_getCursorPosX);
	LUA_METHOD("getCursorPosY", lua_ImGui_getCursorPosY);
	LUA_METHOD("getCursorScreenPos", lua_ImGui_getCursorScreenPos);
	LUA_METHOD("getCursorStartPos", lua_ImGui_getCursorStartPos);
	LUA_METHOD("getFontSize", lua_ImGui_getFontSize);
	LUA_METHOD("getFontTexUvWhitePixel", lua_ImGui_getFontTexUvWhitePixel);
	LUA_METHOD("getForegroundDrawList", lua_ImGui_getForegroundDrawList);
	LUA_METHOD("getFrameCount", lua_ImGui_getFrameCount);
	LUA_METHOD("getFrameHeight", lua_ImGui_getFrameHeight);
	LUA_METHOD("getFrameHeightWithSpacing", lua_ImGui_getFrameHeightWithSpacing);
	LUA_METHOD("getID", lua_ImGui_getID);
	LUA_METHOD("getItemID", lua_ImGui_getItemID);
	LUA_METHOD("getItemRectMax", lua_ImGui_getItemRectMax);
	LUA_METHOD("getItemRectMin", lua_ImGui_getItemRectMin);
	LUA_METHOD("getItemRectSize", lua_ImGui_getItemRectSize);
	LUA_METHOD("getKeyName", lua_ImGui_getKeyName);
	LUA_METHOD("getKeyPressedAmount", lua_ImGui_getKeyPressedAmount);
	LUA_METHOD("getMainViewport", lua_ImGui_getMainViewport);
	LUA_METHOD("getMouseClickedCount", lua_ImGui_getMouseClickedCount);
	LUA_METHOD("getMouseCursor", lua_ImGui_getMouseCursor);
	LUA_METHOD("getMouseDragDelta", lua_ImGui_getMouseDragDelta);
	LUA_METHOD("getMousePos", lua_ImGui_getMousePos);
	LUA_METHOD("getMousePosOnOpeningCurrentPopup", lua_ImGui_getMousePosOnOpeningCurrentPopup);
	LUA_METHOD("getScrollMaxX", lua_ImGui_getScrollMaxX);
	LUA_METHOD("getScrollMaxY", lua_ImGui_getScrollMaxY);
	LUA_METHOD("getScrollX", lua_ImGui_getScrollX);
	LUA_METHOD("getScrollY", lua_ImGui_getScrollY);
	LUA_METHOD("getStyleColorName", lua_ImGui_getStyleColorName);
	LUA_METHOD("getStyleColorVec4", lua_ImGui_getStyleColorVec4);
	LUA_METHOD("getTextLineHeight", lua_ImGui_getTextLineHeight);
	LUA_METHOD("getTextLineHeightWithSpacing", lua_ImGui_getTextLineHeightWithSpacing);
	LUA_METHOD("getTime", lua_ImGui_getTime);
	LUA_METHOD("getTreeNodeToLabelSpacing", lua_ImGui_getTreeNodeToLabelSpacing);
	LUA_METHOD("getVersion", lua_ImGui_getVersion);
	LUA_METHOD("getWindowContentRegionMax", lua_ImGui_getWindowContentRegionMax);
	LUA_METHOD("getWindowContentRegionMin", lua_ImGui_getWindowContentRegionMin);
	LUA_METHOD("getWindowDockID", lua_ImGui_getWindowDockID);
	LUA_METHOD("getWindowDpiScale", lua_ImGui_getWindowDpiScale);
	LUA_METHOD("getWindowDrawList", lua_ImGui_getWindowDrawList);
	LUA_METHOD("getWindowHeight", lua_ImGui_getWindowHeight);
	LUA_METHOD("getWindowPos", lua_ImGui_getWindowPos);
	LUA_METHOD("getWindowSize", lua_ImGui_getWindowSize);
	LUA_METHOD("getWindowViewport", lua_ImGui_getWindowViewport);
	LUA_METHOD("getWindowWidth", lua_ImGui_getWindowWidth);
	LUA_METHOD("indent", lua_ImGui_indent);
	LUA_METHOD("invisibleButton", lua_ImGui_invisibleButton);
	LUA_METHOD("isAnyItemActive", lua_ImGui_isAnyItemActive);
	LUA_METHOD("isAnyItemFocused", lua_ImGui_isAnyItemFocused);
	LUA_METHOD("isAnyItemHovered", lua_ImGui_isAnyItemHovered);
	LUA_METHOD("isAnyMouseDown", lua_ImGui_isAnyMouseDown);
	LUA_METHOD("isItemActivated", lua_ImGui_isItemActivated);
	LUA_METHOD("isItemActive", lua_ImGui_isItemActive);
	LUA_METHOD("isItemClicked", lua_ImGui_isItemClicked);
	LUA_METHOD("isItemDeactivated", lua_ImGui_isItemDeactivated);
	LUA_METHOD("isItemDeactivatedAfterEdit", lua_ImGui_isItemDeactivatedAfterEdit);
	LUA_METHOD("isItemEdited", lua_ImGui_isItemEdited);
	LUA_METHOD("isItemFocused", lua_ImGui_isItemFocused);
	LUA_METHOD("isItemHovered", lua_ImGui_isItemHovered);
	LUA_METHOD("isItemToggledOpen", lua_ImGui_isItemToggledOpen);
	LUA_METHOD("isItemVisible", lua_ImGui_isItemVisible);
	LUA_METHOD("isKeyDown", lua_ImGui_isKeyDown);
	LUA_METHOD("isKeyPressed", lua_ImGui_isKeyPressed);
	LUA_METHOD("isKeyReleased", lua_ImGui_isKeyReleased);
	LUA_METHOD("isMouseClicked", lua_ImGui_isMouseClicked);
	LUA_METHOD("isMouseDoubleClicked", lua_ImGui_isMouseDoubleClicked);
	LUA_METHOD("isMouseDown", lua_ImGui_isMouseDown);
	LUA_METHOD("isMouseDragging", lua_ImGui_isMouseDragging);
	LUA_METHOD("isMouseHoveringRect", lua_ImGui_isMouseHoveringRect);
	LUA_METHOD("isMouseReleased", lua_ImGui_isMouseReleased);
	LUA_METHOD("isPopupOpen", lua_ImGui_isPopupOpen);
	LUA_METHOD("isRectVisible", lua_ImGui_isRectVisible);
	LUA_METHOD("isWindowAppearing", lua_ImGui_isWindowAppearing);
	LUA_METHOD("isWindowCollapsed", lua_ImGui_isWindowCollapsed);
	LUA_METHOD("isWindowDocked", lua_ImGui_isWindowDocked);
	LUA_METHOD("isWindowFocused", lua_ImGui_isWindowFocused);
	LUA_METHOD("isWindowHovered", lua_ImGui_isWindowHovered);
	LUA_METHOD("labelText", lua_ImGui_labelText);
	LUA_METHOD("loadIniSettingsFromDisk", lua_ImGui_loadIniSettingsFromDisk);
	LUA_METHOD("loadIniSettingsFromMemory", lua_ImGui_loadIniSettingsFromMemory);
	LUA_METHOD("logButtons", lua_ImGui_logButtons);
	LUA_METHOD("logFinish", lua_ImGui_logFinish);
	LUA_METHOD("logText", lua_ImGui_logText);
	LUA_METHOD("logToClipboard", lua_ImGui_logToClipboard);
	LUA_METHOD("logToFile", lua_ImGui_logToFile);
	LUA_METHOD("logToTTY", lua_ImGui_logToTTY);
	LUA_METHOD("newFrame", lua_ImGui_newFrame);
	LUA_METHOD("newLine", lua_ImGui_newLine);
	LUA_METHOD("nextColumn", lua_ImGui_nextColumn);
	LUA_METHOD("openPopup", lua_ImGui_openPopup);
	LUA_METHOD("openPopupOnItemClick", lua_ImGui_openPopupOnItemClick);
	LUA_METHOD("popAllowKeyboardFocus", lua_ImGui_popAllowKeyboardFocus);
	LUA_METHOD("popButtonRepeat", lua_ImGui_popButtonRepeat);
	LUA_METHOD("popClipRect", lua_ImGui_popClipRect);
	LUA_METHOD("popFont", lua_ImGui_popFont);
	LUA_METHOD("popID", lua_ImGui_popID);
	LUA_METHOD("popItemWidth", lua_ImGui_popItemWidth);
	LUA_METHOD("popStyleColor", lua_ImGui_popStyleColor);
	LUA_METHOD("popStyleVar", lua_ImGui_popStyleVar);
	LUA_METHOD("popTextWrapPos", lua_ImGui_popTextWrapPos);
	LUA_METHOD("progressBar", lua_ImGui_progressBar);
	LUA_METHOD("pushAllowKeyboardFocus", lua_ImGui_pushAllowKeyboardFocus);
	LUA_METHOD("pushButtonRepeat", lua_ImGui_pushButtonRepeat);
	LUA_METHOD("pushClipRect", lua_ImGui_pushClipRect);
	LUA_METHOD("pushItemWidth", lua_ImGui_pushItemWidth);
	LUA_METHOD("pushTextWrapPos", lua_ImGui_pushTextWrapPos);
	LUA_METHOD("render", lua_ImGui_render);
	LUA_METHOD("renderPlatformWindowsDefault", lua_ImGui_renderPlatformWindowsDefault);
	LUA_METHOD("resetMouseDragDelta", lua_ImGui_resetMouseDragDelta);
	LUA_METHOD("sameLine", lua_ImGui_sameLine);
	LUA_METHOD("saveIniSettingsToDisk", lua_ImGui_saveIniSettingsToDisk);
	LUA_METHOD("separator", lua_ImGui_separator);
	LUA_METHOD("separatorText", lua_ImGui_separatorText);
	LUA_METHOD("setClipboardText", lua_ImGui_setClipboardText);
	LUA_METHOD("setColorEditOptions", lua_ImGui_setColorEditOptions);
	LUA_METHOD("setColumnOffset", lua_ImGui_setColumnOffset);
	LUA_METHOD("setColumnWidth", lua_ImGui_setColumnWidth);
	LUA_METHOD("setCursorPos", lua_ImGui_setCursorPos);
	LUA_METHOD("setCursorPosX", lua_ImGui_setCursorPosX);
	LUA_METHOD("setCursorPosY", lua_ImGui_setCursorPosY);
	LUA_METHOD("setCursorScreenPos", lua_ImGui_setCursorScreenPos);
	LUA_METHOD("setItemAllowOverlap", lua_ImGui_setItemAllowOverlap);
	LUA_METHOD("setItemDefaultFocus", lua_ImGui_setItemDefaultFocus);
	LUA_METHOD("setKeyboardFocusHere", lua_ImGui_setKeyboardFocusHere);
	LUA_METHOD("setMouseCursor", lua_ImGui_setMouseCursor);
	LUA_METHOD("setNextFrameWantCaptureKeyboard", lua_ImGui_setNextFrameWantCaptureKeyboard);
	LUA_METHOD("setNextFrameWantCaptureMouse", lua_ImGui_setNextFrameWantCaptureMouse);
	LUA_METHOD("setNextItemOpen", lua_ImGui_setNextItemOpen);
	LUA_METHOD("setNextItemWidth", lua_ImGui_setNextItemWidth);
	LUA_METHOD("setNextWindowBgAlpha", lua_ImGui_setNextWindowBgAlpha);
	LUA_METHOD("setNextWindowCollapsed", lua_ImGui_setNextWindowCollapsed);
	LUA_METHOD("setNextWindowContentSize", lua_ImGui_setNextWindowContentSize);
	LUA_METHOD("setNextWindowDockID", lua_ImGui_setNextWindowDockID);
	LUA_METHOD("setNextWindowFocus", lua_ImGui_setNextWindowFocus);
	LUA_METHOD("setNextWindowPos", lua_ImGui_setNextWindowPos);
	LUA_METHOD("setNextWindowScroll", lua_ImGui_setNextWindowScroll);
	LUA_METHOD("setNextWindowSize", lua_ImGui_setNextWindowSize);
	LUA_METHOD("setNextWindowSizeConstraints", lua_ImGui_setNextWindowSizeConstraints);
	LUA_METHOD("setNextWindowViewport", lua_ImGui_setNextWindowViewport);
	LUA_METHOD("setScrollFromPosX", lua_ImGui_setScrollFromPosX);
	LUA_METHOD("setScrollFromPosY", lua_ImGui_setScrollFromPosY);
	LUA_METHOD("setScrollHereX", lua_ImGui_setScrollHereX);
	LUA_METHOD("setScrollHereY", lua_ImGui_setScrollHereY);
	LUA_METHOD("setScrollX", lua_ImGui_setScrollX);
	LUA_METHOD("setScrollY", lua_ImGui_setScrollY);
	LUA_METHOD("setTabItemClosed", lua_ImGui_setTabItemClosed);
	LUA_METHOD("setTooltip", lua_ImGui_setTooltip);
	LUA_METHOD("setWindowCollapsed", lua_ImGui_setWindowCollapsed);
	LUA_METHOD("setWindowFocus", lua_ImGui_setWindowFocus);
	LUA_METHOD("setWindowFontScale", lua_ImGui_setWindowFontScale);
	LUA_METHOD("setWindowPos", lua_ImGui_setWindowPos);
	LUA_METHOD("setWindowSize", lua_ImGui_setWindowSize);
	LUA_METHOD("showFontSelector", lua_ImGui_showFontSelector);
	LUA_METHOD("showStyleSelector", lua_ImGui_showStyleSelector);
	LUA_METHOD("showUserGuide", lua_ImGui_showUserGuide);
	LUA_METHOD("smallButton", lua_ImGui_smallButton);
	LUA_METHOD("spacing", lua_ImGui_spacing);
	LUA_METHOD("tabItemButton", lua_ImGui_tabItemButton);
	LUA_METHOD("tableGetColumnCount", lua_ImGui_tableGetColumnCount);
	LUA_METHOD("tableGetColumnFlags", lua_ImGui_tableGetColumnFlags);
	LUA_METHOD("tableGetColumnIndex", lua_ImGui_tableGetColumnIndex);
	LUA_METHOD("tableGetColumnName", lua_ImGui_tableGetColumnName);
	LUA_METHOD("tableGetRowIndex", lua_ImGui_tableGetRowIndex);
	LUA_METHOD("tableHeader", lua_ImGui_tableHeader);
	LUA_METHOD("tableHeadersRow", lua_ImGui_tableHeadersRow);
	LUA_METHOD("tableNextColumn", lua_ImGui_tableNextColumn);
	LUA_METHOD("tableNextRow", lua_ImGui_tableNextRow);
	LUA_METHOD("tableSetBgColor", lua_ImGui_tableSetBgColor);
	LUA_METHOD("tableSetColumnEnabled", lua_ImGui_tableSetColumnEnabled);
	LUA_METHOD("tableSetColumnIndex", lua_ImGui_tableSetColumnIndex);
	LUA_METHOD("tableSetupColumn", lua_ImGui_tableSetupColumn);
	LUA_METHOD("tableSetupScrollFreeze", lua_ImGui_tableSetupScrollFreeze);
	LUA_METHOD("text", lua_ImGui_text);
	LUA_METHOD("textColored", lua_ImGui_textColored);
	LUA_METHOD("textDisabled", lua_ImGui_textDisabled);
	LUA_METHOD("textUnformatted", lua_ImGui_textUnformatted);
	LUA_METHOD("textWrapped", lua_ImGui_textWrapped);
	LUA_METHOD("treeNode", lua_ImGui_treeNode);
	LUA_METHOD("treeNodeEx", lua_ImGui_treeNodeEx);
	LUA_METHOD("treePop", lua_ImGui_treePop);
	LUA_METHOD("treePush", lua_ImGui_treePush);
	LUA_METHOD("unindent", lua_ImGui_unindent);
	LUA_METHOD("updatePlatformWindows", lua_ImGui_updatePlatformWindows);
	LUA_ENTRY_END(1);
	return 0;
}
