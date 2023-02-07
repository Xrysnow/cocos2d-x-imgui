#include "lua_imguiFont_auto.hpp"
#include "imgui.h"
#include "imgui_lua.hpp"

int lua_ImFontConfig_EllipsisChar_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.EllipsisChar/getter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_PUSH_NATIVE(cobj->EllipsisChar);
	return 1;
}
int lua_ImFontConfig_EllipsisChar_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.EllipsisChar/setter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_NATIVE_SETTER(cobj->EllipsisChar, 2);
	return 0;
}
int lua_ImFontConfig_FontBuilderFlags_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.FontBuilderFlags/getter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_PUSH_NATIVE(cobj->FontBuilderFlags);
	return 1;
}
int lua_ImFontConfig_FontBuilderFlags_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.FontBuilderFlags/setter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_NATIVE_SETTER(cobj->FontBuilderFlags, 2);
	return 0;
}
int lua_ImFontConfig_FontDataOwnedByAtlas_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.FontDataOwnedByAtlas/getter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_PUSH_NATIVE(cobj->FontDataOwnedByAtlas);
	return 1;
}
int lua_ImFontConfig_FontDataOwnedByAtlas_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.FontDataOwnedByAtlas/setter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_NATIVE_SETTER(cobj->FontDataOwnedByAtlas, 2);
	return 0;
}
int lua_ImFontConfig_FontDataSize_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.FontDataSize/getter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_PUSH_NATIVE(cobj->FontDataSize);
	return 1;
}
int lua_ImFontConfig_FontDataSize_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.FontDataSize/setter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_NATIVE_SETTER(cobj->FontDataSize, 2);
	return 0;
}
int lua_ImFontConfig_FontNo_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.FontNo/getter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_PUSH_NATIVE(cobj->FontNo);
	return 1;
}
int lua_ImFontConfig_FontNo_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.FontNo/setter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_NATIVE_SETTER(cobj->FontNo, 2);
	return 0;
}
int lua_ImFontConfig_GlyphExtraSpacing_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.GlyphExtraSpacing/getter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_PUSH_NATIVE(cobj->GlyphExtraSpacing);
	return 1;
}
int lua_ImFontConfig_GlyphExtraSpacing_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.GlyphExtraSpacing/setter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_NATIVE_SETTER(cobj->GlyphExtraSpacing, 2);
	return 0;
}
int lua_ImFontConfig_GlyphMaxAdvanceX_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.GlyphMaxAdvanceX/getter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_PUSH_NATIVE(cobj->GlyphMaxAdvanceX);
	return 1;
}
int lua_ImFontConfig_GlyphMaxAdvanceX_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.GlyphMaxAdvanceX/setter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_NATIVE_SETTER(cobj->GlyphMaxAdvanceX, 2);
	return 0;
}
int lua_ImFontConfig_GlyphMinAdvanceX_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.GlyphMinAdvanceX/getter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_PUSH_NATIVE(cobj->GlyphMinAdvanceX);
	return 1;
}
int lua_ImFontConfig_GlyphMinAdvanceX_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.GlyphMinAdvanceX/setter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_NATIVE_SETTER(cobj->GlyphMinAdvanceX, 2);
	return 0;
}
int lua_ImFontConfig_GlyphOffset_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.GlyphOffset/getter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_PUSH_NATIVE(cobj->GlyphOffset);
	return 1;
}
int lua_ImFontConfig_GlyphOffset_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.GlyphOffset/setter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_NATIVE_SETTER(cobj->GlyphOffset, 2);
	return 0;
}
int lua_ImFontConfig_MergeMode_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.MergeMode/getter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_PUSH_NATIVE(cobj->MergeMode);
	return 1;
}
int lua_ImFontConfig_MergeMode_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.MergeMode/setter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_NATIVE_SETTER(cobj->MergeMode, 2);
	return 0;
}
int lua_ImFontConfig_OversampleH_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.OversampleH/getter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_PUSH_NATIVE(cobj->OversampleH);
	return 1;
}
int lua_ImFontConfig_OversampleH_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.OversampleH/setter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_NATIVE_SETTER(cobj->OversampleH, 2);
	return 0;
}
int lua_ImFontConfig_OversampleV_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.OversampleV/getter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_PUSH_NATIVE(cobj->OversampleV);
	return 1;
}
int lua_ImFontConfig_OversampleV_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.OversampleV/setter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_NATIVE_SETTER(cobj->OversampleV, 2);
	return 0;
}
int lua_ImFontConfig_PixelSnapH_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.PixelSnapH/getter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_PUSH_NATIVE(cobj->PixelSnapH);
	return 1;
}
int lua_ImFontConfig_PixelSnapH_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.PixelSnapH/setter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_NATIVE_SETTER(cobj->PixelSnapH, 2);
	return 0;
}
int lua_ImFontConfig_RasterizerMultiply_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.RasterizerMultiply/getter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_PUSH_NATIVE(cobj->RasterizerMultiply);
	return 1;
}
int lua_ImFontConfig_RasterizerMultiply_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.RasterizerMultiply/setter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_NATIVE_SETTER(cobj->RasterizerMultiply, 2);
	return 0;
}
int lua_ImFontConfig_SizePixels_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.SizePixels/getter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_PUSH_NATIVE(cobj->SizePixels);
	return 1;
}
int lua_ImFontConfig_SizePixels_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontConfig.SizePixels/setter");
	auto cobj = LUA_TO_COBJ(ImFontConfig*, 1);
	LUA_NATIVE_SETTER(cobj->SizePixels, 2);
	return 0;
}
int luaReg_imguiFont_imguiImFontConfig(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_CLS_DEF(ImFontConfig, "ImFontConfig", "imgui.ImFontConfig",
		nullptr, nullptr);
	LUA_FIELD("EllipsisChar", lua_ImFontConfig_EllipsisChar_getter, lua_ImFontConfig_EllipsisChar_setter);
	LUA_FIELD("FontBuilderFlags", lua_ImFontConfig_FontBuilderFlags_getter, lua_ImFontConfig_FontBuilderFlags_setter);
	LUA_FIELD("FontDataOwnedByAtlas", lua_ImFontConfig_FontDataOwnedByAtlas_getter, lua_ImFontConfig_FontDataOwnedByAtlas_setter);
	LUA_FIELD("FontDataSize", lua_ImFontConfig_FontDataSize_getter, lua_ImFontConfig_FontDataSize_setter);
	LUA_FIELD("FontNo", lua_ImFontConfig_FontNo_getter, lua_ImFontConfig_FontNo_setter);
	LUA_FIELD("GlyphExtraSpacing", lua_ImFontConfig_GlyphExtraSpacing_getter, lua_ImFontConfig_GlyphExtraSpacing_setter);
	LUA_FIELD("GlyphMaxAdvanceX", lua_ImFontConfig_GlyphMaxAdvanceX_getter, lua_ImFontConfig_GlyphMaxAdvanceX_setter);
	LUA_FIELD("GlyphMinAdvanceX", lua_ImFontConfig_GlyphMinAdvanceX_getter, lua_ImFontConfig_GlyphMinAdvanceX_setter);
	LUA_FIELD("GlyphOffset", lua_ImFontConfig_GlyphOffset_getter, lua_ImFontConfig_GlyphOffset_setter);
	LUA_FIELD("MergeMode", lua_ImFontConfig_MergeMode_getter, lua_ImFontConfig_MergeMode_setter);
	LUA_FIELD("OversampleH", lua_ImFontConfig_OversampleH_getter, lua_ImFontConfig_OversampleH_setter);
	LUA_FIELD("OversampleV", lua_ImFontConfig_OversampleV_getter, lua_ImFontConfig_OversampleV_setter);
	LUA_FIELD("PixelSnapH", lua_ImFontConfig_PixelSnapH_getter, lua_ImFontConfig_PixelSnapH_setter);
	LUA_FIELD("RasterizerMultiply", lua_ImFontConfig_RasterizerMultiply_getter, lua_ImFontConfig_RasterizerMultiply_setter);
	LUA_FIELD("SizePixels", lua_ImFontConfig_SizePixels_getter, lua_ImFontConfig_SizePixels_setter);
	LUA_CLS_END();
	LUA_ENTRY_END(1);
	return 0;
}
int lua_ImFontGlyph_AdvanceX_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.AdvanceX/getter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	LUA_PUSH_NATIVE(cobj->AdvanceX);
	return 1;
}
int lua_ImFontGlyph_AdvanceX_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.AdvanceX/setter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	LUA_NATIVE_SETTER(cobj->AdvanceX, 2);
	return 0;
}
int lua_ImFontGlyph_Codepoint_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.Codepoint/getter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	const auto cval = cobj->Codepoint;
	LUA_PUSH_NATIVE(cval);
	return 1;
}
int lua_ImFontGlyph_Codepoint_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.Codepoint/setter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	auto cval = cobj->Codepoint;
	LUA_NATIVE_SETTER(cval, 2);
	cobj->Codepoint = cval;
	return 0;
}
int lua_ImFontGlyph_Colored_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.Colored/getter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	const auto cval = cobj->Colored;
	LUA_PUSH_NATIVE(cval);
	return 1;
}
int lua_ImFontGlyph_Colored_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.Colored/setter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	auto cval = cobj->Colored;
	LUA_NATIVE_SETTER(cval, 2);
	cobj->Colored = cval;
	return 0;
}
int lua_ImFontGlyph_U0_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.U0/getter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	LUA_PUSH_NATIVE(cobj->U0);
	return 1;
}
int lua_ImFontGlyph_U0_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.U0/setter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	LUA_NATIVE_SETTER(cobj->U0, 2);
	return 0;
}
int lua_ImFontGlyph_U1_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.U1/getter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	LUA_PUSH_NATIVE(cobj->U1);
	return 1;
}
int lua_ImFontGlyph_U1_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.U1/setter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	LUA_NATIVE_SETTER(cobj->U1, 2);
	return 0;
}
int lua_ImFontGlyph_V0_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.V0/getter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	LUA_PUSH_NATIVE(cobj->V0);
	return 1;
}
int lua_ImFontGlyph_V0_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.V0/setter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	LUA_NATIVE_SETTER(cobj->V0, 2);
	return 0;
}
int lua_ImFontGlyph_V1_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.V1/getter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	LUA_PUSH_NATIVE(cobj->V1);
	return 1;
}
int lua_ImFontGlyph_V1_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.V1/setter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	LUA_NATIVE_SETTER(cobj->V1, 2);
	return 0;
}
int lua_ImFontGlyph_Visible_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.Visible/getter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	const auto cval = cobj->Visible;
	LUA_PUSH_NATIVE(cval);
	return 1;
}
int lua_ImFontGlyph_Visible_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.Visible/setter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	auto cval = cobj->Visible;
	LUA_NATIVE_SETTER(cval, 2);
	cobj->Visible = cval;
	return 0;
}
int lua_ImFontGlyph_X0_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.X0/getter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	LUA_PUSH_NATIVE(cobj->X0);
	return 1;
}
int lua_ImFontGlyph_X0_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.X0/setter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	LUA_NATIVE_SETTER(cobj->X0, 2);
	return 0;
}
int lua_ImFontGlyph_X1_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.X1/getter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	LUA_PUSH_NATIVE(cobj->X1);
	return 1;
}
int lua_ImFontGlyph_X1_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.X1/setter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	LUA_NATIVE_SETTER(cobj->X1, 2);
	return 0;
}
int lua_ImFontGlyph_Y0_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.Y0/getter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	LUA_PUSH_NATIVE(cobj->Y0);
	return 1;
}
int lua_ImFontGlyph_Y0_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.Y0/setter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	LUA_NATIVE_SETTER(cobj->Y0, 2);
	return 0;
}
int lua_ImFontGlyph_Y1_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.Y1/getter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	LUA_PUSH_NATIVE(cobj->Y1);
	return 1;
}
int lua_ImFontGlyph_Y1_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontGlyph.Y1/setter");
	auto cobj = LUA_TO_COBJ(ImFontGlyph*, 1);
	LUA_NATIVE_SETTER(cobj->Y1, 2);
	return 0;
}
int luaReg_imguiFont_imguiImFontGlyph(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_CLS_DEF(ImFontGlyph, "ImFontGlyph", "imgui.ImFontGlyph",
		nullptr, nullptr);
	LUA_FIELD("AdvanceX", lua_ImFontGlyph_AdvanceX_getter, lua_ImFontGlyph_AdvanceX_setter);
	LUA_FIELD("Codepoint", lua_ImFontGlyph_Codepoint_getter, lua_ImFontGlyph_Codepoint_setter);
	LUA_FIELD("Colored", lua_ImFontGlyph_Colored_getter, lua_ImFontGlyph_Colored_setter);
	LUA_FIELD("U0", lua_ImFontGlyph_U0_getter, lua_ImFontGlyph_U0_setter);
	LUA_FIELD("U1", lua_ImFontGlyph_U1_getter, lua_ImFontGlyph_U1_setter);
	LUA_FIELD("V0", lua_ImFontGlyph_V0_getter, lua_ImFontGlyph_V0_setter);
	LUA_FIELD("V1", lua_ImFontGlyph_V1_getter, lua_ImFontGlyph_V1_setter);
	LUA_FIELD("Visible", lua_ImFontGlyph_Visible_getter, lua_ImFontGlyph_Visible_setter);
	LUA_FIELD("X0", lua_ImFontGlyph_X0_getter, lua_ImFontGlyph_X0_setter);
	LUA_FIELD("X1", lua_ImFontGlyph_X1_getter, lua_ImFontGlyph_X1_setter);
	LUA_FIELD("Y0", lua_ImFontGlyph_Y0_getter, lua_ImFontGlyph_Y0_setter);
	LUA_FIELD("Y1", lua_ImFontGlyph_Y1_getter, lua_ImFontGlyph_Y1_setter);
	LUA_CLS_END();
	LUA_ENTRY_END(1);
	return 0;
}
int lua_ImFontAtlasCustomRect_Font_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlasCustomRect.Font/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlasCustomRect*, 1);
	LUA_PUSH_NATIVE(cobj->Font);
	return 1;
}
int lua_ImFontAtlasCustomRect_Font_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlasCustomRect.Font/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlasCustomRect*, 1);
	LUA_NATIVE_SETTER(cobj->Font, 2);
	return 0;
}
int lua_ImFontAtlasCustomRect_GlyphAdvanceX_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlasCustomRect.GlyphAdvanceX/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlasCustomRect*, 1);
	LUA_PUSH_NATIVE(cobj->GlyphAdvanceX);
	return 1;
}
int lua_ImFontAtlasCustomRect_GlyphAdvanceX_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlasCustomRect.GlyphAdvanceX/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlasCustomRect*, 1);
	LUA_NATIVE_SETTER(cobj->GlyphAdvanceX, 2);
	return 0;
}
int lua_ImFontAtlasCustomRect_GlyphID_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlasCustomRect.GlyphID/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlasCustomRect*, 1);
	LUA_PUSH_NATIVE(cobj->GlyphID);
	return 1;
}
int lua_ImFontAtlasCustomRect_GlyphID_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlasCustomRect.GlyphID/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlasCustomRect*, 1);
	LUA_NATIVE_SETTER(cobj->GlyphID, 2);
	return 0;
}
int lua_ImFontAtlasCustomRect_GlyphOffset_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlasCustomRect.GlyphOffset/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlasCustomRect*, 1);
	LUA_PUSH_NATIVE(cobj->GlyphOffset);
	return 1;
}
int lua_ImFontAtlasCustomRect_GlyphOffset_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlasCustomRect.GlyphOffset/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlasCustomRect*, 1);
	LUA_NATIVE_SETTER(cobj->GlyphOffset, 2);
	return 0;
}
int lua_ImFontAtlasCustomRect_Height_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlasCustomRect.Height/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlasCustomRect*, 1);
	LUA_PUSH_NATIVE(cobj->Height);
	return 1;
}
int lua_ImFontAtlasCustomRect_Height_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlasCustomRect.Height/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlasCustomRect*, 1);
	LUA_NATIVE_SETTER(cobj->Height, 2);
	return 0;
}
int lua_ImFontAtlasCustomRect_Width_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlasCustomRect.Width/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlasCustomRect*, 1);
	LUA_PUSH_NATIVE(cobj->Width);
	return 1;
}
int lua_ImFontAtlasCustomRect_Width_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlasCustomRect.Width/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlasCustomRect*, 1);
	LUA_NATIVE_SETTER(cobj->Width, 2);
	return 0;
}
int lua_ImFontAtlasCustomRect_X_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlasCustomRect.X/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlasCustomRect*, 1);
	LUA_PUSH_NATIVE(cobj->X);
	return 1;
}
int lua_ImFontAtlasCustomRect_X_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlasCustomRect.X/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlasCustomRect*, 1);
	LUA_NATIVE_SETTER(cobj->X, 2);
	return 0;
}
int lua_ImFontAtlasCustomRect_Y_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlasCustomRect.Y/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlasCustomRect*, 1);
	LUA_PUSH_NATIVE(cobj->Y);
	return 1;
}
int lua_ImFontAtlasCustomRect_Y_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlasCustomRect.Y/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlasCustomRect*, 1);
	LUA_NATIVE_SETTER(cobj->Y, 2);
	return 0;
}
int lua_ImFontAtlasCustomRect_isPacked(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImFontAtlasCustomRect", "imgui.ImFontAtlasCustomRect:isPacked");
	LUA_TRY_INVOKE_R(0, &ImFontAtlasCustomRect::IsPacked);
	LUA_INVOKE_FOOTER("0");
}
int luaReg_imguiFont_imguiImFontAtlasCustomRect(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_CLS_DEF(ImFontAtlasCustomRect, "ImFontAtlasCustomRect", "imgui.ImFontAtlasCustomRect",
		nullptr, nullptr);
	LUA_FIELD("Font", lua_ImFontAtlasCustomRect_Font_getter, lua_ImFontAtlasCustomRect_Font_setter);
	LUA_FIELD("GlyphAdvanceX", lua_ImFontAtlasCustomRect_GlyphAdvanceX_getter, lua_ImFontAtlasCustomRect_GlyphAdvanceX_setter);
	LUA_FIELD("GlyphID", lua_ImFontAtlasCustomRect_GlyphID_getter, lua_ImFontAtlasCustomRect_GlyphID_setter);
	LUA_FIELD("GlyphOffset", lua_ImFontAtlasCustomRect_GlyphOffset_getter, lua_ImFontAtlasCustomRect_GlyphOffset_setter);
	LUA_FIELD("Height", lua_ImFontAtlasCustomRect_Height_getter, lua_ImFontAtlasCustomRect_Height_setter);
	LUA_FIELD("Width", lua_ImFontAtlasCustomRect_Width_getter, lua_ImFontAtlasCustomRect_Width_setter);
	LUA_FIELD("X", lua_ImFontAtlasCustomRect_X_getter, lua_ImFontAtlasCustomRect_X_setter);
	LUA_FIELD("Y", lua_ImFontAtlasCustomRect_Y_getter, lua_ImFontAtlasCustomRect_Y_setter);
	LUA_METHOD("isPacked", lua_ImFontAtlasCustomRect_isPacked);
	LUA_CLS_END();
	LUA_ENTRY_END(1);
	return 0;
}
int luaReg_imguiFont_imguiImFontAtlasFlags(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_ENUM_DEF("ImFontAtlasFlags");
	LUA_ENUM_ENTRY("None", ImFontAtlasFlags_::ImFontAtlasFlags_None);
	LUA_ENUM_ENTRY("NoPowerOfTwoHeight", ImFontAtlasFlags_::ImFontAtlasFlags_NoPowerOfTwoHeight);
	LUA_ENUM_ENTRY("NoMouseCursors", ImFontAtlasFlags_::ImFontAtlasFlags_NoMouseCursors);
	LUA_ENUM_ENTRY("NoBakedLines", ImFontAtlasFlags_::ImFontAtlasFlags_NoBakedLines);
	LUA_ENUM_END();
	LUA_ENTRY_END(1);
	return 0;
}
int lua_ImFontAtlas_Flags_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.Flags/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_PUSH_NATIVE(cobj->Flags);
	return 1;
}
int lua_ImFontAtlas_Flags_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.Flags/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_NATIVE_SETTER(cobj->Flags, 2);
	return 0;
}
int lua_ImFontAtlas_FontBuilderFlags_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.FontBuilderFlags/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_PUSH_NATIVE(cobj->FontBuilderFlags);
	return 1;
}
int lua_ImFontAtlas_FontBuilderFlags_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.FontBuilderFlags/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_NATIVE_SETTER(cobj->FontBuilderFlags, 2);
	return 0;
}
int lua_ImFontAtlas_Locked_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.Locked/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_PUSH_NATIVE(cobj->Locked);
	return 1;
}
int lua_ImFontAtlas_Locked_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.Locked/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_NATIVE_SETTER(cobj->Locked, 2);
	return 0;
}
int lua_ImFontAtlas_PackIdLines_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.PackIdLines/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_PUSH_NATIVE(cobj->PackIdLines);
	return 1;
}
int lua_ImFontAtlas_PackIdLines_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.PackIdLines/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_NATIVE_SETTER(cobj->PackIdLines, 2);
	return 0;
}
int lua_ImFontAtlas_PackIdMouseCursors_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.PackIdMouseCursors/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_PUSH_NATIVE(cobj->PackIdMouseCursors);
	return 1;
}
int lua_ImFontAtlas_PackIdMouseCursors_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.PackIdMouseCursors/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_NATIVE_SETTER(cobj->PackIdMouseCursors, 2);
	return 0;
}
int lua_ImFontAtlas_TexDesiredWidth_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.TexDesiredWidth/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_PUSH_NATIVE(cobj->TexDesiredWidth);
	return 1;
}
int lua_ImFontAtlas_TexDesiredWidth_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.TexDesiredWidth/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_NATIVE_SETTER(cobj->TexDesiredWidth, 2);
	return 0;
}
int lua_ImFontAtlas_TexGlyphPadding_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.TexGlyphPadding/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_PUSH_NATIVE(cobj->TexGlyphPadding);
	return 1;
}
int lua_ImFontAtlas_TexGlyphPadding_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.TexGlyphPadding/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_NATIVE_SETTER(cobj->TexGlyphPadding, 2);
	return 0;
}
int lua_ImFontAtlas_TexHeight_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.TexHeight/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_PUSH_NATIVE(cobj->TexHeight);
	return 1;
}
int lua_ImFontAtlas_TexHeight_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.TexHeight/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_NATIVE_SETTER(cobj->TexHeight, 2);
	return 0;
}
int lua_ImFontAtlas_TexPixelsUseColors_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.TexPixelsUseColors/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_PUSH_NATIVE(cobj->TexPixelsUseColors);
	return 1;
}
int lua_ImFontAtlas_TexPixelsUseColors_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.TexPixelsUseColors/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_NATIVE_SETTER(cobj->TexPixelsUseColors, 2);
	return 0;
}
int lua_ImFontAtlas_TexReady_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.TexReady/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_PUSH_NATIVE(cobj->TexReady);
	return 1;
}
int lua_ImFontAtlas_TexReady_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.TexReady/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_NATIVE_SETTER(cobj->TexReady, 2);
	return 0;
}
int lua_ImFontAtlas_TexUvScale_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.TexUvScale/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_PUSH_NATIVE(cobj->TexUvScale);
	return 1;
}
int lua_ImFontAtlas_TexUvScale_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.TexUvScale/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_NATIVE_SETTER(cobj->TexUvScale, 2);
	return 0;
}
int lua_ImFontAtlas_TexUvWhitePixel_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.TexUvWhitePixel/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_PUSH_NATIVE(cobj->TexUvWhitePixel);
	return 1;
}
int lua_ImFontAtlas_TexUvWhitePixel_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.TexUvWhitePixel/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_NATIVE_SETTER(cobj->TexUvWhitePixel, 2);
	return 0;
}
int lua_ImFontAtlas_TexWidth_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.TexWidth/getter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_PUSH_NATIVE(cobj->TexWidth);
	return 1;
}
int lua_ImFontAtlas_TexWidth_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFontAtlas.TexWidth/setter");
	auto cobj = LUA_TO_COBJ(ImFontAtlas*, 1);
	LUA_NATIVE_SETTER(cobj->TexWidth, 2);
	return 0;
}
int lua_ImFontAtlas_addCustomRectFontGlyph(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImFontAtlas", "imgui.ImFontAtlas:addCustomRectFontGlyph");
	LUA_TRY_INVOKE_R(6, static_cast<int(ImFontAtlas::*)(ImFont*, ImWchar, int, int, float, const ImVec2&)>(&ImFontAtlas::AddCustomRectFontGlyph));
	LUA_TRY_INVOKE_R(5, [](ImFontAtlas* obj, ImFont* arg0,ImWchar arg1,int arg2,int arg3,float arg4){{return obj->AddCustomRectFontGlyph(std::move(arg0),std::move(arg1),std::move(arg2),std::move(arg3),std::move(arg4));}});
	LUA_INVOKE_FOOTER("5,6");
}
int lua_ImFontAtlas_addCustomRectRegular(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImFontAtlas", "imgui.ImFontAtlas:addCustomRectRegular");
	LUA_TRY_INVOKE_R(2, &ImFontAtlas::AddCustomRectRegular);
	LUA_INVOKE_FOOTER("2");
}
int lua_ImFontAtlas_build(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImFontAtlas", "imgui.ImFontAtlas:build");
	LUA_TRY_INVOKE_R(0, &ImFontAtlas::Build);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImFontAtlas_clear(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImFontAtlas", "imgui.ImFontAtlas:clear");
	LUA_TRY_INVOKE(0, &ImFontAtlas::Clear);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImFontAtlas_clearFonts(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImFontAtlas", "imgui.ImFontAtlas:clearFonts");
	LUA_TRY_INVOKE(0, &ImFontAtlas::ClearFonts);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImFontAtlas_clearInputData(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImFontAtlas", "imgui.ImFontAtlas:clearInputData");
	LUA_TRY_INVOKE(0, &ImFontAtlas::ClearInputData);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImFontAtlas_clearTexData(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImFontAtlas", "imgui.ImFontAtlas:clearTexData");
	LUA_TRY_INVOKE(0, &ImFontAtlas::ClearTexData);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImFontAtlas_getCustomRectByIndex(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImFontAtlas", "imgui.ImFontAtlas:getCustomRectByIndex");
	LUA_TRY_INVOKE_R(1, &ImFontAtlas::GetCustomRectByIndex);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImFontAtlas_isBuilt(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImFontAtlas", "imgui.ImFontAtlas:isBuilt");
	LUA_TRY_INVOKE_R(0, &ImFontAtlas::IsBuilt);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImFontAtlas_setTexID(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImFontAtlas", "imgui.ImFontAtlas:setTexID");
	LUA_TRY_INVOKE(1, &ImFontAtlas::SetTexID);
	LUA_INVOKE_FOOTER("1");
}
int luaReg_imguiFont_imguiImFontAtlas(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_CLS_DEF(ImFontAtlas, "ImFontAtlas", "imgui.ImFontAtlas",
		nullptr, nullptr);
	LUA_FIELD("Flags", lua_ImFontAtlas_Flags_getter, lua_ImFontAtlas_Flags_setter);
	LUA_FIELD("FontBuilderFlags", lua_ImFontAtlas_FontBuilderFlags_getter, lua_ImFontAtlas_FontBuilderFlags_setter);
	LUA_FIELD("Locked", lua_ImFontAtlas_Locked_getter, lua_ImFontAtlas_Locked_setter);
	LUA_FIELD("PackIdLines", lua_ImFontAtlas_PackIdLines_getter, lua_ImFontAtlas_PackIdLines_setter);
	LUA_FIELD("PackIdMouseCursors", lua_ImFontAtlas_PackIdMouseCursors_getter, lua_ImFontAtlas_PackIdMouseCursors_setter);
	LUA_FIELD("TexDesiredWidth", lua_ImFontAtlas_TexDesiredWidth_getter, lua_ImFontAtlas_TexDesiredWidth_setter);
	LUA_FIELD("TexGlyphPadding", lua_ImFontAtlas_TexGlyphPadding_getter, lua_ImFontAtlas_TexGlyphPadding_setter);
	LUA_FIELD("TexHeight", lua_ImFontAtlas_TexHeight_getter, lua_ImFontAtlas_TexHeight_setter);
	LUA_FIELD("TexPixelsUseColors", lua_ImFontAtlas_TexPixelsUseColors_getter, lua_ImFontAtlas_TexPixelsUseColors_setter);
	LUA_FIELD("TexReady", lua_ImFontAtlas_TexReady_getter, lua_ImFontAtlas_TexReady_setter);
	LUA_FIELD("TexUvScale", lua_ImFontAtlas_TexUvScale_getter, lua_ImFontAtlas_TexUvScale_setter);
	LUA_FIELD("TexUvWhitePixel", lua_ImFontAtlas_TexUvWhitePixel_getter, lua_ImFontAtlas_TexUvWhitePixel_setter);
	LUA_FIELD("TexWidth", lua_ImFontAtlas_TexWidth_getter, lua_ImFontAtlas_TexWidth_setter);
	LUA_METHOD("addCustomRectFontGlyph", lua_ImFontAtlas_addCustomRectFontGlyph);
	LUA_METHOD("addCustomRectRegular", lua_ImFontAtlas_addCustomRectRegular);
	LUA_METHOD("build", lua_ImFontAtlas_build);
	LUA_METHOD("clear", lua_ImFontAtlas_clear);
	LUA_METHOD("clearFonts", lua_ImFontAtlas_clearFonts);
	LUA_METHOD("clearInputData", lua_ImFontAtlas_clearInputData);
	LUA_METHOD("clearTexData", lua_ImFontAtlas_clearTexData);
	LUA_METHOD("getCustomRectByIndex", lua_ImFontAtlas_getCustomRectByIndex);
	LUA_METHOD("isBuilt", lua_ImFontAtlas_isBuilt);
	LUA_METHOD("setTexID", lua_ImFontAtlas_setTexID);
	LUA_CLS_END();
	LUA_ENTRY_END(1);
	return 0;
}
int lua_ImFont_Ascent_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.Ascent/getter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_PUSH_NATIVE(cobj->Ascent);
	return 1;
}
int lua_ImFont_Ascent_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.Ascent/setter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_NATIVE_SETTER(cobj->Ascent, 2);
	return 0;
}
int lua_ImFont_ConfigDataCount_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.ConfigDataCount/getter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_PUSH_NATIVE(cobj->ConfigDataCount);
	return 1;
}
int lua_ImFont_ConfigDataCount_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.ConfigDataCount/setter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_NATIVE_SETTER(cobj->ConfigDataCount, 2);
	return 0;
}
int lua_ImFont_ContainerAtlas_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.ContainerAtlas/getter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_PUSH_NATIVE(cobj->ContainerAtlas);
	return 1;
}
int lua_ImFont_ContainerAtlas_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.ContainerAtlas/setter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_NATIVE_SETTER(cobj->ContainerAtlas, 2);
	return 0;
}
int lua_ImFont_Descent_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.Descent/getter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_PUSH_NATIVE(cobj->Descent);
	return 1;
}
int lua_ImFont_Descent_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.Descent/setter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_NATIVE_SETTER(cobj->Descent, 2);
	return 0;
}
int lua_ImFont_DirtyLookupTables_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.DirtyLookupTables/getter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_PUSH_NATIVE(cobj->DirtyLookupTables);
	return 1;
}
int lua_ImFont_DirtyLookupTables_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.DirtyLookupTables/setter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_NATIVE_SETTER(cobj->DirtyLookupTables, 2);
	return 0;
}
int lua_ImFont_DotChar_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.DotChar/getter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_PUSH_NATIVE(cobj->DotChar);
	return 1;
}
int lua_ImFont_DotChar_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.DotChar/setter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_NATIVE_SETTER(cobj->DotChar, 2);
	return 0;
}
int lua_ImFont_EllipsisChar_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.EllipsisChar/getter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_PUSH_NATIVE(cobj->EllipsisChar);
	return 1;
}
int lua_ImFont_EllipsisChar_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.EllipsisChar/setter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_NATIVE_SETTER(cobj->EllipsisChar, 2);
	return 0;
}
int lua_ImFont_FallbackAdvanceX_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.FallbackAdvanceX/getter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_PUSH_NATIVE(cobj->FallbackAdvanceX);
	return 1;
}
int lua_ImFont_FallbackAdvanceX_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.FallbackAdvanceX/setter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_NATIVE_SETTER(cobj->FallbackAdvanceX, 2);
	return 0;
}
int lua_ImFont_FallbackChar_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.FallbackChar/getter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_PUSH_NATIVE(cobj->FallbackChar);
	return 1;
}
int lua_ImFont_FallbackChar_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.FallbackChar/setter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_NATIVE_SETTER(cobj->FallbackChar, 2);
	return 0;
}
int lua_ImFont_FallbackGlyph_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.FallbackGlyph/getter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_PUSH_NATIVE(cobj->FallbackGlyph);
	return 1;
}
int lua_ImFont_FallbackGlyph_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.FallbackGlyph/setter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_NATIVE_SETTER(cobj->FallbackGlyph, 2);
	return 0;
}
int lua_ImFont_FontSize_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.FontSize/getter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_PUSH_NATIVE(cobj->FontSize);
	return 1;
}
int lua_ImFont_FontSize_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.FontSize/setter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_NATIVE_SETTER(cobj->FontSize, 2);
	return 0;
}
int lua_ImFont_MetricsTotalSurface_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.MetricsTotalSurface/getter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_PUSH_NATIVE(cobj->MetricsTotalSurface);
	return 1;
}
int lua_ImFont_MetricsTotalSurface_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.MetricsTotalSurface/setter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_NATIVE_SETTER(cobj->MetricsTotalSurface, 2);
	return 0;
}
int lua_ImFont_Scale_getter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.Scale/getter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_PUSH_NATIVE(cobj->Scale);
	return 1;
}
int lua_ImFont_Scale_setter(lua_State* lua_S)
{
	LUA_CUR_FNAME("imgui.ImFont.Scale/setter");
	auto cobj = LUA_TO_COBJ(ImFont*, 1);
	LUA_NATIVE_SETTER(cobj->Scale, 2);
	return 0;
}
int lua_ImFont_findGlyph(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImFont", "imgui.ImFont:findGlyph");
	LUA_TRY_INVOKE_R(1, &ImFont::FindGlyph);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImFont_findGlyphNoFallback(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImFont", "imgui.ImFont:findGlyphNoFallback");
	LUA_TRY_INVOKE_R(1, &ImFont::FindGlyphNoFallback);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImFont_getCharAdvance(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImFont", "imgui.ImFont:getCharAdvance");
	LUA_TRY_INVOKE_R(1, &ImFont::GetCharAdvance);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImFont_getDebugName(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImFont", "imgui.ImFont:getDebugName");
	LUA_TRY_INVOKE_R(0, &ImFont::GetDebugName);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImFont_isLoaded(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ImFont", "imgui.ImFont:isLoaded");
	LUA_TRY_INVOKE_R(0, &ImFont::IsLoaded);
	LUA_INVOKE_FOOTER("0");
}
int luaReg_imguiFont_imguiImFont(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_CLS_DEF(ImFont, "ImFont", "imgui.ImFont",
		nullptr, nullptr);
	LUA_FIELD("Ascent", lua_ImFont_Ascent_getter, lua_ImFont_Ascent_setter);
	LUA_FIELD("ConfigDataCount", lua_ImFont_ConfigDataCount_getter, lua_ImFont_ConfigDataCount_setter);
	LUA_FIELD("ContainerAtlas", lua_ImFont_ContainerAtlas_getter, lua_ImFont_ContainerAtlas_setter);
	LUA_FIELD("Descent", lua_ImFont_Descent_getter, lua_ImFont_Descent_setter);
	LUA_FIELD("DirtyLookupTables", lua_ImFont_DirtyLookupTables_getter, lua_ImFont_DirtyLookupTables_setter);
	LUA_FIELD("DotChar", lua_ImFont_DotChar_getter, lua_ImFont_DotChar_setter);
	LUA_FIELD("EllipsisChar", lua_ImFont_EllipsisChar_getter, lua_ImFont_EllipsisChar_setter);
	LUA_FIELD("FallbackAdvanceX", lua_ImFont_FallbackAdvanceX_getter, lua_ImFont_FallbackAdvanceX_setter);
	LUA_FIELD("FallbackChar", lua_ImFont_FallbackChar_getter, lua_ImFont_FallbackChar_setter);
	LUA_FIELD("FallbackGlyph", lua_ImFont_FallbackGlyph_getter, lua_ImFont_FallbackGlyph_setter);
	LUA_FIELD("FontSize", lua_ImFont_FontSize_getter, lua_ImFont_FontSize_setter);
	LUA_FIELD("MetricsTotalSurface", lua_ImFont_MetricsTotalSurface_getter, lua_ImFont_MetricsTotalSurface_setter);
	LUA_FIELD("Scale", lua_ImFont_Scale_getter, lua_ImFont_Scale_setter);
	LUA_METHOD("findGlyph", lua_ImFont_findGlyph);
	LUA_METHOD("findGlyphNoFallback", lua_ImFont_findGlyphNoFallback);
	LUA_METHOD("getCharAdvance", lua_ImFont_getCharAdvance);
	LUA_METHOD("getDebugName", lua_ImFont_getDebugName);
	LUA_METHOD("isLoaded", lua_ImFont_isLoaded);
	LUA_CLS_END();
	LUA_ENTRY_END(1);
	return 0;
}
