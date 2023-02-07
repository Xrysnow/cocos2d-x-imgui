#include "lua_imguiDrawList_auto.hpp"
#include "imgui.h"
#include "imgui_lua.hpp"

int luaReg_imguiDrawList_imguiImDrawFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImDrawFlags");
	LUA_ENUM_ENTRY("None", ImDrawFlags_::ImDrawFlags_None);
	LUA_ENUM_ENTRY("Closed", ImDrawFlags_::ImDrawFlags_Closed);
	LUA_ENUM_ENTRY("RoundCornersTopLeft", ImDrawFlags_::ImDrawFlags_RoundCornersTopLeft);
	LUA_ENUM_ENTRY("RoundCornersTopRight", ImDrawFlags_::ImDrawFlags_RoundCornersTopRight);
	LUA_ENUM_ENTRY("RoundCornersBottomLeft", ImDrawFlags_::ImDrawFlags_RoundCornersBottomLeft);
	LUA_ENUM_ENTRY("RoundCornersBottomRight", ImDrawFlags_::ImDrawFlags_RoundCornersBottomRight);
	LUA_ENUM_ENTRY("RoundCornersNone", ImDrawFlags_::ImDrawFlags_RoundCornersNone);
	LUA_ENUM_ENTRY("RoundCornersTop", ImDrawFlags_::ImDrawFlags_RoundCornersTop);
	LUA_ENUM_ENTRY("RoundCornersBottom", ImDrawFlags_::ImDrawFlags_RoundCornersBottom);
	LUA_ENUM_ENTRY("RoundCornersLeft", ImDrawFlags_::ImDrawFlags_RoundCornersLeft);
	LUA_ENUM_ENTRY("RoundCornersRight", ImDrawFlags_::ImDrawFlags_RoundCornersRight);
	LUA_ENUM_ENTRY("RoundCornersAll", ImDrawFlags_::ImDrawFlags_RoundCornersAll);
	LUA_ENUM_ENTRY("RoundCornersDefault_", ImDrawFlags_::ImDrawFlags_RoundCornersDefault_);
	LUA_ENUM_ENTRY("RoundCornersMask_", ImDrawFlags_::ImDrawFlags_RoundCornersMask_);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imguiDrawList_imguiImDrawListFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImDrawListFlags");
	LUA_ENUM_ENTRY("None", ImDrawListFlags_::ImDrawListFlags_None);
	LUA_ENUM_ENTRY("AntiAliasedLines", ImDrawListFlags_::ImDrawListFlags_AntiAliasedLines);
	LUA_ENUM_ENTRY("AntiAliasedLinesUseTex", ImDrawListFlags_::ImDrawListFlags_AntiAliasedLinesUseTex);
	LUA_ENUM_ENTRY("AntiAliasedFill", ImDrawListFlags_::ImDrawListFlags_AntiAliasedFill);
	LUA_ENUM_ENTRY("AllowVtxOffset", ImDrawListFlags_::ImDrawListFlags_AllowVtxOffset);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int lua_ImDrawList_Flags_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImDrawList.Flags/getter");
	auto cobj = LUA_TO_COBJ(ImDrawList*, 1);
	LUA_PUSH_NATIVE(cobj->Flags);
	return 1;
}
int lua_ImDrawList_Flags_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImDrawList.Flags/setter");
	auto cobj = LUA_TO_COBJ(ImDrawList*, 1);
	LUA_NATIVE_SETTER(cobj->Flags, 2);
	return 0;
}
int lua_ImDrawList__OwnerName_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImDrawList._OwnerName/getter");
	auto cobj = LUA_TO_COBJ(ImDrawList*, 1);
	LUA_PUSH_NATIVE(cobj->_OwnerName);
	return 1;
}
int lua_ImDrawList__OwnerName_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImDrawList._OwnerName/setter");
	auto cobj = LUA_TO_COBJ(ImDrawList*, 1);
	LUA_NATIVE_SETTER(cobj->_OwnerName, 2);
	return 0;
}
int lua_ImDrawList_addBezierCubic(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:addBezierCubic");
	LUA_TRY_INVOKE(7, static_cast<void(ImDrawList::*)(const ImVec2&, const ImVec2&, const ImVec2&, const ImVec2&, ImU32, float, int)>(&ImDrawList::AddBezierCubic));
	LUA_TRY_INVOKE(6, [](ImDrawList* obj, const ImVec2& arg0,const ImVec2& arg1,const ImVec2& arg2,const ImVec2& arg3,ImU32 arg4,float arg5){{return obj->AddBezierCubic(std::move(arg0),std::move(arg1),std::move(arg2),std::move(arg3),std::move(arg4),std::move(arg5));}});
	LUA_INVOKE_FOOTER("6,7");
}
int lua_ImDrawList_addBezierQuadratic(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:addBezierQuadratic");
	LUA_TRY_INVOKE(6, static_cast<void(ImDrawList::*)(const ImVec2&, const ImVec2&, const ImVec2&, ImU32, float, int)>(&ImDrawList::AddBezierQuadratic));
	LUA_TRY_INVOKE(5, [](ImDrawList* obj, const ImVec2& arg0,const ImVec2& arg1,const ImVec2& arg2,ImU32 arg3,float arg4){{return obj->AddBezierQuadratic(std::move(arg0),std::move(arg1),std::move(arg2),std::move(arg3),std::move(arg4));}});
	LUA_INVOKE_FOOTER("5,6");
}
int lua_ImDrawList_addCircle(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:addCircle");
	LUA_TRY_INVOKE(5, static_cast<void(ImDrawList::*)(const ImVec2&, float, ImU32, int, float)>(&ImDrawList::AddCircle));
	LUA_TRY_INVOKE(4, [](ImDrawList* obj, const ImVec2& arg0,float arg1,ImU32 arg2,int arg3){{return obj->AddCircle(std::move(arg0),std::move(arg1),std::move(arg2),std::move(arg3));}});
	LUA_TRY_INVOKE(3, [](ImDrawList* obj, const ImVec2& arg0,float arg1,ImU32 arg2){{return obj->AddCircle(std::move(arg0),std::move(arg1),std::move(arg2));}});
	LUA_INVOKE_FOOTER("3,4,5");
}
int lua_ImDrawList_addCircleFilled(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:addCircleFilled");
	LUA_TRY_INVOKE(4, static_cast<void(ImDrawList::*)(const ImVec2&, float, ImU32, int)>(&ImDrawList::AddCircleFilled));
	LUA_TRY_INVOKE(3, [](ImDrawList* obj, const ImVec2& arg0,float arg1,ImU32 arg2){{return obj->AddCircleFilled(std::move(arg0),std::move(arg1),std::move(arg2));}});
	LUA_INVOKE_FOOTER("3,4");
}
int lua_ImDrawList_addDrawCmd(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:addDrawCmd");
	LUA_TRY_INVOKE(0, &ImDrawList::AddDrawCmd);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImDrawList_addLine(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:addLine");
	LUA_TRY_INVOKE(4, static_cast<void(ImDrawList::*)(const ImVec2&, const ImVec2&, ImU32, float)>(&ImDrawList::AddLine));
	LUA_TRY_INVOKE(3, [](ImDrawList* obj, const ImVec2& arg0,const ImVec2& arg1,ImU32 arg2){{return obj->AddLine(std::move(arg0),std::move(arg1),std::move(arg2));}});
	LUA_INVOKE_FOOTER("3,4");
}
int lua_ImDrawList_addNgon(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:addNgon");
	LUA_TRY_INVOKE(5, static_cast<void(ImDrawList::*)(const ImVec2&, float, ImU32, int, float)>(&ImDrawList::AddNgon));
	LUA_TRY_INVOKE(4, [](ImDrawList* obj, const ImVec2& arg0,float arg1,ImU32 arg2,int arg3){{return obj->AddNgon(std::move(arg0),std::move(arg1),std::move(arg2),std::move(arg3));}});
	LUA_INVOKE_FOOTER("4,5");
}
int lua_ImDrawList_addNgonFilled(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:addNgonFilled");
	LUA_TRY_INVOKE(4, &ImDrawList::AddNgonFilled);
	LUA_INVOKE_FOOTER("4");
}
int lua_ImDrawList_addQuad(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:addQuad");
	LUA_TRY_INVOKE(6, static_cast<void(ImDrawList::*)(const ImVec2&, const ImVec2&, const ImVec2&, const ImVec2&, ImU32, float)>(&ImDrawList::AddQuad));
	LUA_TRY_INVOKE(5, [](ImDrawList* obj, const ImVec2& arg0,const ImVec2& arg1,const ImVec2& arg2,const ImVec2& arg3,ImU32 arg4){{return obj->AddQuad(std::move(arg0),std::move(arg1),std::move(arg2),std::move(arg3),std::move(arg4));}});
	LUA_INVOKE_FOOTER("5,6");
}
int lua_ImDrawList_addQuadFilled(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:addQuadFilled");
	LUA_TRY_INVOKE(5, &ImDrawList::AddQuadFilled);
	LUA_INVOKE_FOOTER("5");
}
int lua_ImDrawList_addRect(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:addRect");
	LUA_TRY_INVOKE(6, static_cast<void(ImDrawList::*)(const ImVec2&, const ImVec2&, ImU32, float, ImDrawFlags, float)>(&ImDrawList::AddRect));
	LUA_TRY_INVOKE(5, [](ImDrawList* obj, const ImVec2& arg0,const ImVec2& arg1,ImU32 arg2,float arg3,ImDrawFlags arg4){{return obj->AddRect(std::move(arg0),std::move(arg1),std::move(arg2),std::move(arg3),std::move(arg4));}});
	LUA_TRY_INVOKE(4, [](ImDrawList* obj, const ImVec2& arg0,const ImVec2& arg1,ImU32 arg2,float arg3){{return obj->AddRect(std::move(arg0),std::move(arg1),std::move(arg2),std::move(arg3));}});
	LUA_TRY_INVOKE(3, [](ImDrawList* obj, const ImVec2& arg0,const ImVec2& arg1,ImU32 arg2){{return obj->AddRect(std::move(arg0),std::move(arg1),std::move(arg2));}});
	LUA_INVOKE_FOOTER("3,4,5,6");
}
int lua_ImDrawList_addRectFilled(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:addRectFilled");
	LUA_TRY_INVOKE(5, static_cast<void(ImDrawList::*)(const ImVec2&, const ImVec2&, ImU32, float, ImDrawFlags)>(&ImDrawList::AddRectFilled));
	LUA_TRY_INVOKE(4, [](ImDrawList* obj, const ImVec2& arg0,const ImVec2& arg1,ImU32 arg2,float arg3){{return obj->AddRectFilled(std::move(arg0),std::move(arg1),std::move(arg2),std::move(arg3));}});
	LUA_TRY_INVOKE(3, [](ImDrawList* obj, const ImVec2& arg0,const ImVec2& arg1,ImU32 arg2){{return obj->AddRectFilled(std::move(arg0),std::move(arg1),std::move(arg2));}});
	LUA_INVOKE_FOOTER("3,4,5");
}
int lua_ImDrawList_addRectFilledMultiColor(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:addRectFilledMultiColor");
	LUA_TRY_INVOKE(6, &ImDrawList::AddRectFilledMultiColor);
	LUA_INVOKE_FOOTER("6");
}
int lua_ImDrawList_addTriangle(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:addTriangle");
	LUA_TRY_INVOKE(5, static_cast<void(ImDrawList::*)(const ImVec2&, const ImVec2&, const ImVec2&, ImU32, float)>(&ImDrawList::AddTriangle));
	LUA_TRY_INVOKE(4, [](ImDrawList* obj, const ImVec2& arg0,const ImVec2& arg1,const ImVec2& arg2,ImU32 arg3){{return obj->AddTriangle(std::move(arg0),std::move(arg1),std::move(arg2),std::move(arg3));}});
	LUA_INVOKE_FOOTER("4,5");
}
int lua_ImDrawList_addTriangleFilled(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:addTriangleFilled");
	LUA_TRY_INVOKE(4, &ImDrawList::AddTriangleFilled);
	LUA_INVOKE_FOOTER("4");
}
int lua_ImDrawList_channelsMerge(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:channelsMerge");
	LUA_TRY_INVOKE(0, &ImDrawList::ChannelsMerge);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImDrawList_channelsSetCurrent(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:channelsSetCurrent");
	LUA_TRY_INVOKE(1, &ImDrawList::ChannelsSetCurrent);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImDrawList_channelsSplit(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:channelsSplit");
	LUA_TRY_INVOKE(1, &ImDrawList::ChannelsSplit);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImDrawList_cloneOutput(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:cloneOutput");
	LUA_TRY_INVOKE_R(0, &ImDrawList::CloneOutput);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImDrawList_getClipRectMax(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:getClipRectMax");
	LUA_TRY_INVOKE_R(0, &ImDrawList::GetClipRectMax);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImDrawList_getClipRectMin(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:getClipRectMin");
	LUA_TRY_INVOKE_R(0, &ImDrawList::GetClipRectMin);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImDrawList_pathArcTo(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:pathArcTo");
	LUA_TRY_INVOKE(5, static_cast<void(ImDrawList::*)(const ImVec2&, float, float, float, int)>(&ImDrawList::PathArcTo));
	LUA_TRY_INVOKE(4, [](ImDrawList* obj, const ImVec2& arg0,float arg1,float arg2,float arg3){{return obj->PathArcTo(std::move(arg0),std::move(arg1),std::move(arg2),std::move(arg3));}});
	LUA_INVOKE_FOOTER("4,5");
}
int lua_ImDrawList_pathArcToFast(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:pathArcToFast");
	LUA_TRY_INVOKE(4, &ImDrawList::PathArcToFast);
	LUA_INVOKE_FOOTER("4");
}
int lua_ImDrawList_pathBezierCubicCurveTo(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:pathBezierCubicCurveTo");
	LUA_TRY_INVOKE(4, static_cast<void(ImDrawList::*)(const ImVec2&, const ImVec2&, const ImVec2&, int)>(&ImDrawList::PathBezierCubicCurveTo));
	LUA_TRY_INVOKE(3, [](ImDrawList* obj, const ImVec2& arg0,const ImVec2& arg1,const ImVec2& arg2){{return obj->PathBezierCubicCurveTo(arg0,arg1,arg2);}});
	LUA_INVOKE_FOOTER("3,4");
}
int lua_ImDrawList_pathBezierQuadraticCurveTo(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:pathBezierQuadraticCurveTo");
	LUA_TRY_INVOKE(3, static_cast<void(ImDrawList::*)(const ImVec2&, const ImVec2&, int)>(&ImDrawList::PathBezierQuadraticCurveTo));
	LUA_TRY_INVOKE(2, [](ImDrawList* obj, const ImVec2& arg0,const ImVec2& arg1){{return obj->PathBezierQuadraticCurveTo(arg0,arg1);}});
	LUA_INVOKE_FOOTER("2,3");
}
int lua_ImDrawList_pathClear(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:pathClear");
	LUA_TRY_INVOKE(0, &ImDrawList::PathClear);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImDrawList_pathFillConvex(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:pathFillConvex");
	LUA_TRY_INVOKE(1, &ImDrawList::PathFillConvex);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImDrawList_pathLineTo(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:pathLineTo");
	LUA_TRY_INVOKE(1, &ImDrawList::PathLineTo);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImDrawList_pathLineToMergeDuplicate(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:pathLineToMergeDuplicate");
	LUA_TRY_INVOKE(1, &ImDrawList::PathLineToMergeDuplicate);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImDrawList_pathRect(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:pathRect");
	LUA_TRY_INVOKE(4, static_cast<void(ImDrawList::*)(const ImVec2&, const ImVec2&, float, ImDrawFlags)>(&ImDrawList::PathRect));
	LUA_TRY_INVOKE(3, [](ImDrawList* obj, const ImVec2& arg0,const ImVec2& arg1,float arg2){{return obj->PathRect(std::move(arg0),std::move(arg1),std::move(arg2));}});
	LUA_TRY_INVOKE(2, [](ImDrawList* obj, const ImVec2& arg0,const ImVec2& arg1){{return obj->PathRect(arg0,arg1);}});
	LUA_INVOKE_FOOTER("2,3,4");
}
int lua_ImDrawList_pathStroke(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:pathStroke");
	LUA_TRY_INVOKE(3, static_cast<void(ImDrawList::*)(ImU32, ImDrawFlags, float)>(&ImDrawList::PathStroke));
	LUA_TRY_INVOKE(2, [](ImDrawList* obj, ImU32 arg0,ImDrawFlags arg1){{return obj->PathStroke(std::move(arg0),std::move(arg1));}});
	LUA_TRY_INVOKE(1, [](ImDrawList* obj, ImU32 arg0){{return obj->PathStroke(std::move(arg0));}});
	LUA_INVOKE_FOOTER("1,2,3");
}
int lua_ImDrawList_popClipRect(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:popClipRect");
	LUA_TRY_INVOKE(0, &ImDrawList::PopClipRect);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImDrawList_popTextureID(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:popTextureID");
	LUA_TRY_INVOKE(0, &ImDrawList::PopTextureID);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImDrawList_primQuadUV(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:primQuadUV");
	LUA_TRY_INVOKE(9, &ImDrawList::PrimQuadUV);
	LUA_INVOKE_FOOTER("9");
}
int lua_ImDrawList_primRect(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:primRect");
	LUA_TRY_INVOKE(3, &ImDrawList::PrimRect);
	LUA_INVOKE_FOOTER("3");
}
int lua_ImDrawList_primRectUV(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:primRectUV");
	LUA_TRY_INVOKE(5, &ImDrawList::PrimRectUV);
	LUA_INVOKE_FOOTER("5");
}
int lua_ImDrawList_primReserve(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:primReserve");
	LUA_TRY_INVOKE(2, &ImDrawList::PrimReserve);
	LUA_INVOKE_FOOTER("2");
}
int lua_ImDrawList_primUnreserve(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:primUnreserve");
	LUA_TRY_INVOKE(2, &ImDrawList::PrimUnreserve);
	LUA_INVOKE_FOOTER("2");
}
int lua_ImDrawList_primVtx(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:primVtx");
	LUA_TRY_INVOKE(3, &ImDrawList::PrimVtx);
	LUA_INVOKE_FOOTER("3");
}
int lua_ImDrawList_primWriteIdx(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:primWriteIdx");
	LUA_TRY_INVOKE(1, &ImDrawList::PrimWriteIdx);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImDrawList_primWriteVtx(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:primWriteVtx");
	LUA_TRY_INVOKE(3, &ImDrawList::PrimWriteVtx);
	LUA_INVOKE_FOOTER("3");
}
int lua_ImDrawList_pushClipRect(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:pushClipRect");
	LUA_TRY_INVOKE(3, static_cast<void(ImDrawList::*)(const ImVec2&, const ImVec2&, bool)>(&ImDrawList::PushClipRect));
	LUA_TRY_INVOKE(2, [](ImDrawList* obj, const ImVec2& arg0,const ImVec2& arg1){{return obj->PushClipRect(arg0,arg1);}});
	LUA_INVOKE_FOOTER("2,3");
}
int lua_ImDrawList_pushClipRectFullScreen(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImDrawList", "imgui.ImDrawList:pushClipRectFullScreen");
	LUA_TRY_INVOKE(0, &ImDrawList::PushClipRectFullScreen);
	LUA_INVOKE_FOOTER("0");
}
int luaReg_imguiDrawList_imguiImDrawList(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_CLS_DEF(ImDrawList, "ImDrawList", "imgui.ImDrawList",
		nullptr, nullptr);
	LUA_FIELD("Flags", lua_ImDrawList_Flags_getter, lua_ImDrawList_Flags_setter);
	LUA_FIELD("_OwnerName", lua_ImDrawList__OwnerName_getter, lua_ImDrawList__OwnerName_setter);
	LUA_METHOD("addBezierCubic", lua_ImDrawList_addBezierCubic);
	LUA_METHOD("addBezierQuadratic", lua_ImDrawList_addBezierQuadratic);
	LUA_METHOD("addCircle", lua_ImDrawList_addCircle);
	LUA_METHOD("addCircleFilled", lua_ImDrawList_addCircleFilled);
	LUA_METHOD("addDrawCmd", lua_ImDrawList_addDrawCmd);
	LUA_METHOD("addLine", lua_ImDrawList_addLine);
	LUA_METHOD("addNgon", lua_ImDrawList_addNgon);
	LUA_METHOD("addNgonFilled", lua_ImDrawList_addNgonFilled);
	LUA_METHOD("addQuad", lua_ImDrawList_addQuad);
	LUA_METHOD("addQuadFilled", lua_ImDrawList_addQuadFilled);
	LUA_METHOD("addRect", lua_ImDrawList_addRect);
	LUA_METHOD("addRectFilled", lua_ImDrawList_addRectFilled);
	LUA_METHOD("addRectFilledMultiColor", lua_ImDrawList_addRectFilledMultiColor);
	LUA_METHOD("addTriangle", lua_ImDrawList_addTriangle);
	LUA_METHOD("addTriangleFilled", lua_ImDrawList_addTriangleFilled);
	LUA_METHOD("channelsMerge", lua_ImDrawList_channelsMerge);
	LUA_METHOD("channelsSetCurrent", lua_ImDrawList_channelsSetCurrent);
	LUA_METHOD("channelsSplit", lua_ImDrawList_channelsSplit);
	LUA_METHOD("cloneOutput", lua_ImDrawList_cloneOutput);
	LUA_METHOD("getClipRectMax", lua_ImDrawList_getClipRectMax);
	LUA_METHOD("getClipRectMin", lua_ImDrawList_getClipRectMin);
	LUA_METHOD("pathArcTo", lua_ImDrawList_pathArcTo);
	LUA_METHOD("pathArcToFast", lua_ImDrawList_pathArcToFast);
	LUA_METHOD("pathBezierCubicCurveTo", lua_ImDrawList_pathBezierCubicCurveTo);
	LUA_METHOD("pathBezierQuadraticCurveTo", lua_ImDrawList_pathBezierQuadraticCurveTo);
	LUA_METHOD("pathClear", lua_ImDrawList_pathClear);
	LUA_METHOD("pathFillConvex", lua_ImDrawList_pathFillConvex);
	LUA_METHOD("pathLineTo", lua_ImDrawList_pathLineTo);
	LUA_METHOD("pathLineToMergeDuplicate", lua_ImDrawList_pathLineToMergeDuplicate);
	LUA_METHOD("pathRect", lua_ImDrawList_pathRect);
	LUA_METHOD("pathStroke", lua_ImDrawList_pathStroke);
	LUA_METHOD("popClipRect", lua_ImDrawList_popClipRect);
	LUA_METHOD("popTextureID", lua_ImDrawList_popTextureID);
	LUA_METHOD("primQuadUV", lua_ImDrawList_primQuadUV);
	LUA_METHOD("primRect", lua_ImDrawList_primRect);
	LUA_METHOD("primRectUV", lua_ImDrawList_primRectUV);
	LUA_METHOD("primReserve", lua_ImDrawList_primReserve);
	LUA_METHOD("primUnreserve", lua_ImDrawList_primUnreserve);
	LUA_METHOD("primVtx", lua_ImDrawList_primVtx);
	LUA_METHOD("primWriteIdx", lua_ImDrawList_primWriteIdx);
	LUA_METHOD("primWriteVtx", lua_ImDrawList_primWriteVtx);
	LUA_METHOD("pushClipRect", lua_ImDrawList_pushClipRect);
	LUA_METHOD("pushClipRectFullScreen", lua_ImDrawList_pushClipRectFullScreen);
	LUA_CLS_END();
	LUA_ENTRY_END(1);
	return 0;
}
