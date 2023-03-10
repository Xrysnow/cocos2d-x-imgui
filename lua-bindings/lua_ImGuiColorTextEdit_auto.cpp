#include "lua_imguiColorTextEdit_auto.hpp"
#include "../CCImGuiColorTextEdit.h"
#include "imgui_lua.hpp"

int luaReg_imguiColorTextEdit_imguiColorTextEditPaletteIndex(lua_State* lua_S)
{
	LUA_ENUM_DEF("PaletteIndex");
	LUA_ENUM_ENTRY("Default", ImGui::ColorTextEdit::PaletteIndex::Default);
	LUA_ENUM_ENTRY("Keyword", ImGui::ColorTextEdit::PaletteIndex::Keyword);
	LUA_ENUM_ENTRY("Number", ImGui::ColorTextEdit::PaletteIndex::Number);
	LUA_ENUM_ENTRY("String", ImGui::ColorTextEdit::PaletteIndex::String);
	LUA_ENUM_ENTRY("CharLiteral", ImGui::ColorTextEdit::PaletteIndex::CharLiteral);
	LUA_ENUM_ENTRY("Punctuation", ImGui::ColorTextEdit::PaletteIndex::Punctuation);
	LUA_ENUM_ENTRY("Preprocessor", ImGui::ColorTextEdit::PaletteIndex::Preprocessor);
	LUA_ENUM_ENTRY("Identifier", ImGui::ColorTextEdit::PaletteIndex::Identifier);
	LUA_ENUM_ENTRY("KnownIdentifier", ImGui::ColorTextEdit::PaletteIndex::KnownIdentifier);
	LUA_ENUM_ENTRY("PreprocIdentifier", ImGui::ColorTextEdit::PaletteIndex::PreprocIdentifier);
	LUA_ENUM_ENTRY("Comment", ImGui::ColorTextEdit::PaletteIndex::Comment);
	LUA_ENUM_ENTRY("MultiLineComment", ImGui::ColorTextEdit::PaletteIndex::MultiLineComment);
	LUA_ENUM_ENTRY("Background", ImGui::ColorTextEdit::PaletteIndex::Background);
	LUA_ENUM_ENTRY("Cursor", ImGui::ColorTextEdit::PaletteIndex::Cursor);
	LUA_ENUM_ENTRY("Selection", ImGui::ColorTextEdit::PaletteIndex::Selection);
	LUA_ENUM_ENTRY("ErrorMarker", ImGui::ColorTextEdit::PaletteIndex::ErrorMarker);
	LUA_ENUM_ENTRY("Breakpoint", ImGui::ColorTextEdit::PaletteIndex::Breakpoint);
	LUA_ENUM_ENTRY("LineNumber", ImGui::ColorTextEdit::PaletteIndex::LineNumber);
	LUA_ENUM_ENTRY("CurrentLineFill", ImGui::ColorTextEdit::PaletteIndex::CurrentLineFill);
	LUA_ENUM_ENTRY("CurrentLineFillInactive", ImGui::ColorTextEdit::PaletteIndex::CurrentLineFillInactive);
	LUA_ENUM_ENTRY("CurrentLineEdge", ImGui::ColorTextEdit::PaletteIndex::CurrentLineEdge);
	LUA_ENUM_ENTRY("Max", ImGui::ColorTextEdit::PaletteIndex::Max);
	LUA_ENUM_END();
	return 0;
}
int luaReg_imguiColorTextEdit_imguiColorTextEditSelectionMode(lua_State* lua_S)
{
	LUA_ENUM_DEF("SelectionMode");
	LUA_ENUM_ENTRY("Normal", ImGui::ColorTextEdit::SelectionMode::Normal);
	LUA_ENUM_ENTRY("Word", ImGui::ColorTextEdit::SelectionMode::Word);
	LUA_ENUM_ENTRY("Line", ImGui::ColorTextEdit::SelectionMode::Line);
	LUA_ENUM_END();
	return 0;
}
int lua_ImGui_ColorTextEdit_addLanguageIdentifier(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:addLanguageIdentifier");
	LUA_TRY_INVOKE(1, &ImGui::ColorTextEdit::addLanguageIdentifier);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGui_ColorTextEdit_addLanguagePreprocIdentifier(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:addLanguagePreprocIdentifier");
	LUA_TRY_INVOKE(1, &ImGui::ColorTextEdit::addLanguagePreprocIdentifier);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGui_ColorTextEdit_canRedo(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:canRedo");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::canRedo);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_canUndo(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:canUndo");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::canUndo);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_copy(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:copy");
	LUA_TRY_INVOKE(0, &ImGui::ColorTextEdit::copy);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_cut(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:cut");
	LUA_TRY_INVOKE(0, &ImGui::ColorTextEdit::cut);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_delete(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:delete");
	LUA_TRY_INVOKE(0, &ImGui::ColorTextEdit::delete_);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_getCurrentLineText(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:getCurrentLineText");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::getCurrentLineText);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_getCursorPosition(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:getCursorPosition");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::getCursorPosition);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_getHoveredCoordinates(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:getHoveredCoordinates");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::getHoveredCoordinates);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_getHoveredDeclaration(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:getHoveredDeclaration");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::getHoveredDeclaration);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_getHoveredWord(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:getHoveredWord");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::getHoveredWord);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_getHoveredWordIndex(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:getHoveredWordIndex");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::getHoveredWordIndex);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_getPalette(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:getPalette");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::getPalette);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_getSelectedText(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:getSelectedText");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::getSelectedText);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_getTabSize(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:getTabSize");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::getTabSize);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_getText(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:getText");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::getText);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_getTextLines(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:getTextLines");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::getTextLines);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_getTotalLines(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:getTotalLines");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::getTotalLines);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_hasSelection(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:hasSelection");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::hasSelection);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_insertText(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:insertText");
	LUA_TRY_INVOKE(1, &ImGui::ColorTextEdit::insertText);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGui_ColorTextEdit_isAutoTooltip(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:isAutoTooltip");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::isAutoTooltip);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_isColorizerEnabled(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:isColorizerEnabled");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::isColorizerEnabled);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_isCursorPositionChanged(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:isCursorPositionChanged");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::isCursorPositionChanged);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_isHandleKeyboardInputsEnabled(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:isHandleKeyboardInputsEnabled");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::isHandleKeyboardInputsEnabled);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_isHandleMouseInputsEnabled(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:isHandleMouseInputsEnabled");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::isHandleMouseInputsEnabled);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_isImGuiChildIgnored(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:isImGuiChildIgnored");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::isImGuiChildIgnored);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_isOverwrite(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:isOverwrite");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::isOverwrite);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_isReadOnly(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:isReadOnly");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::isReadOnly);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_isShowingShortTabGlyphs(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:isShowingShortTabGlyphs");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::isShowingShortTabGlyphs);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_isShowingWhitespaces(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:isShowingWhitespaces");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::isShowingWhitespaces);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_isTextChanged(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:isTextChanged");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::isTextChanged);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_moveBottom(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:moveBottom");
	LUA_TRY_INVOKE(1, static_cast<void(ImGui::ColorTextEdit::*)(bool)>(&ImGui::ColorTextEdit::moveBottom));
	LUA_TRY_INVOKE(0, [](ImGui::ColorTextEdit* obj){{return obj->moveBottom();}});
	LUA_INVOKE_FOOTER("0,1");
}
int lua_ImGui_ColorTextEdit_moveDown(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:moveDown");
	LUA_TRY_INVOKE(2, static_cast<void(ImGui::ColorTextEdit::*)(int, bool)>(&ImGui::ColorTextEdit::moveDown));
	LUA_TRY_INVOKE(1, [](ImGui::ColorTextEdit* obj,int arg0){{return obj->moveDown(std::move(arg0));}});
	LUA_TRY_INVOKE(0, [](ImGui::ColorTextEdit* obj){{return obj->moveDown();}});
	LUA_INVOKE_FOOTER("0,1,2");
}
int lua_ImGui_ColorTextEdit_moveEnd(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:moveEnd");
	LUA_TRY_INVOKE(1, static_cast<void(ImGui::ColorTextEdit::*)(bool)>(&ImGui::ColorTextEdit::moveEnd));
	LUA_TRY_INVOKE(0, [](ImGui::ColorTextEdit* obj){{return obj->moveEnd();}});
	LUA_INVOKE_FOOTER("0,1");
}
int lua_ImGui_ColorTextEdit_moveHome(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:moveHome");
	LUA_TRY_INVOKE(1, static_cast<void(ImGui::ColorTextEdit::*)(bool)>(&ImGui::ColorTextEdit::moveHome));
	LUA_TRY_INVOKE(0, [](ImGui::ColorTextEdit* obj){{return obj->moveHome();}});
	LUA_INVOKE_FOOTER("0,1");
}
int lua_ImGui_ColorTextEdit_moveLeft(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:moveLeft");
	LUA_TRY_INVOKE(3, static_cast<void(ImGui::ColorTextEdit::*)(int, bool, bool)>(&ImGui::ColorTextEdit::moveLeft));
	LUA_TRY_INVOKE(2, [](ImGui::ColorTextEdit* obj,int arg0,bool arg1){{return obj->moveLeft(std::move(arg0),std::move(arg1));}});
	LUA_TRY_INVOKE(1, [](ImGui::ColorTextEdit* obj,int arg0){{return obj->moveLeft(std::move(arg0));}});
	LUA_TRY_INVOKE(0, [](ImGui::ColorTextEdit* obj){{return obj->moveLeft();}});
	LUA_INVOKE_FOOTER("0,1,2,3");
}
int lua_ImGui_ColorTextEdit_moveRight(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:moveRight");
	LUA_TRY_INVOKE(3, static_cast<void(ImGui::ColorTextEdit::*)(int, bool, bool)>(&ImGui::ColorTextEdit::moveRight));
	LUA_TRY_INVOKE(2, [](ImGui::ColorTextEdit* obj,int arg0,bool arg1){{return obj->moveRight(std::move(arg0),std::move(arg1));}});
	LUA_TRY_INVOKE(1, [](ImGui::ColorTextEdit* obj,int arg0){{return obj->moveRight(std::move(arg0));}});
	LUA_TRY_INVOKE(0, [](ImGui::ColorTextEdit* obj){{return obj->moveRight();}});
	LUA_INVOKE_FOOTER("0,1,2,3");
}
int lua_ImGui_ColorTextEdit_moveTop(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:moveTop");
	LUA_TRY_INVOKE(1, static_cast<void(ImGui::ColorTextEdit::*)(bool)>(&ImGui::ColorTextEdit::moveTop));
	LUA_TRY_INVOKE(0, [](ImGui::ColorTextEdit* obj){{return obj->moveTop();}});
	LUA_INVOKE_FOOTER("0,1");
}
int lua_ImGui_ColorTextEdit_moveUp(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:moveUp");
	LUA_TRY_INVOKE(2, static_cast<void(ImGui::ColorTextEdit::*)(int, bool)>(&ImGui::ColorTextEdit::moveUp));
	LUA_TRY_INVOKE(1, [](ImGui::ColorTextEdit* obj,int arg0){{return obj->moveUp(std::move(arg0));}});
	LUA_TRY_INVOKE(0, [](ImGui::ColorTextEdit* obj){{return obj->moveUp();}});
	LUA_INVOKE_FOOTER("0,1,2");
}
int lua_ImGui_ColorTextEdit_paste(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:paste");
	LUA_TRY_INVOKE(0, &ImGui::ColorTextEdit::paste);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_redo(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:redo");
	LUA_TRY_INVOKE(1, static_cast<void(ImGui::ColorTextEdit::*)(int)>(&ImGui::ColorTextEdit::redo));
	LUA_TRY_INVOKE(0, [](ImGui::ColorTextEdit* obj){{return obj->redo();}});
	LUA_INVOKE_FOOTER("0,1");
}
int lua_ImGui_ColorTextEdit_render(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:render");
	LUA_TRY_INVOKE(3, static_cast<void(ImGui::ColorTextEdit::*)(const char*, const cocos2d::Vec2&, bool)>(&ImGui::ColorTextEdit::render));
	LUA_TRY_INVOKE(2, [](ImGui::ColorTextEdit* obj,const char* arg0,const cocos2d::Vec2& arg1){{return obj->render(arg0,arg1);}});
	LUA_TRY_INVOKE(1, [](ImGui::ColorTextEdit* obj,const char* arg0){{return obj->render(arg0);}});
	LUA_INVOKE_FOOTER("1,2,3");
}
int lua_ImGui_ColorTextEdit_selectAll(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:selectAll");
	LUA_TRY_INVOKE(0, &ImGui::ColorTextEdit::selectAll);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_selectWordUnderCursor(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:selectWordUnderCursor");
	LUA_TRY_INVOKE(0, &ImGui::ColorTextEdit::selectWordUnderCursor);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_setAutoTooltip(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setAutoTooltip");
	LUA_TRY_INVOKE(1, &ImGui::ColorTextEdit::setAutoTooltip);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGui_ColorTextEdit_setBreakpoints(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setBreakpoints");
	LUA_TRY_INVOKE(1, &ImGui::ColorTextEdit::setBreakpoints);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGui_ColorTextEdit_setColorizerEnable(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setColorizerEnable");
	LUA_TRY_INVOKE(1, &ImGui::ColorTextEdit::setColorizerEnable);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGui_ColorTextEdit_setCursorPosition(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setCursorPosition");
	LUA_TRY_INVOKE(2, &ImGui::ColorTextEdit::setCursorPosition);
	LUA_INVOKE_FOOTER("2");
}
int lua_ImGui_ColorTextEdit_setErrorMarkers(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setErrorMarkers");
	LUA_TRY_INVOKE(1, &ImGui::ColorTextEdit::setErrorMarkers);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGui_ColorTextEdit_setHandleKeyboardInputs(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setHandleKeyboardInputs");
	LUA_TRY_INVOKE(1, &ImGui::ColorTextEdit::setHandleKeyboardInputs);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGui_ColorTextEdit_setHandleMouseInputs(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setHandleMouseInputs");
	LUA_TRY_INVOKE(1, &ImGui::ColorTextEdit::setHandleMouseInputs);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGui_ColorTextEdit_setImGuiChildIgnored(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setImGuiChildIgnored");
	LUA_TRY_INVOKE(1, &ImGui::ColorTextEdit::setImGuiChildIgnored);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGui_ColorTextEdit_setLanguageAngelScript(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setLanguageAngelScript");
	LUA_TRY_INVOKE(0, &ImGui::ColorTextEdit::setLanguageAngelScript);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_setLanguageC(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setLanguageC");
	LUA_TRY_INVOKE(0, &ImGui::ColorTextEdit::setLanguageC);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_setLanguageCPlusPlus(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setLanguageCPlusPlus");
	LUA_TRY_INVOKE(0, &ImGui::ColorTextEdit::setLanguageCPlusPlus);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_setLanguageDefinition(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setLanguageDefinition");
	LUA_TRY_INVOKE(11, static_cast<void(ImGui::ColorTextEdit::*)(const std::string&, const std::unordered_set<std::basic_string<char>>&, const std::unordered_map<std::basic_string<char>, std::basic_string<char>>&, const std::unordered_map<std::basic_string<char>, std::basic_string<char>>&, const std::vector<std::pair<std::basic_string<char>, ImGui::ColorTextEdit::PaletteIndex>>&, const std::string&, const std::string&, const std::string&, const std::string&, bool, bool)>(&ImGui::ColorTextEdit::setLanguageDefinition));
	LUA_TRY_INVOKE(10, [](ImGui::ColorTextEdit* obj,const std::string& arg0,const std::unordered_set<std::basic_string<char>>& arg1,const std::unordered_map<std::basic_string<char>, std::basic_string<char>>& arg2,const std::unordered_map<std::basic_string<char>, std::basic_string<char>>& arg3,const std::vector<std::pair<std::basic_string<char>, ImGui::ColorTextEdit::PaletteIndex>>& arg4,const std::string& arg5,const std::string& arg6,const std::string& arg7,const std::string& arg8,bool arg9){{return obj->setLanguageDefinition(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,std::move(arg9));}});
	LUA_TRY_INVOKE(9, [](ImGui::ColorTextEdit* obj,const std::string& arg0,const std::unordered_set<std::basic_string<char>>& arg1,const std::unordered_map<std::basic_string<char>, std::basic_string<char>>& arg2,const std::unordered_map<std::basic_string<char>, std::basic_string<char>>& arg3,const std::vector<std::pair<std::basic_string<char>, ImGui::ColorTextEdit::PaletteIndex>>& arg4,const std::string& arg5,const std::string& arg6,const std::string& arg7,const std::string& arg8){{return obj->setLanguageDefinition(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);}});
	LUA_TRY_INVOKE(8, [](ImGui::ColorTextEdit* obj,const std::string& arg0,const std::unordered_set<std::basic_string<char>>& arg1,const std::unordered_map<std::basic_string<char>, std::basic_string<char>>& arg2,const std::unordered_map<std::basic_string<char>, std::basic_string<char>>& arg3,const std::vector<std::pair<std::basic_string<char>, ImGui::ColorTextEdit::PaletteIndex>>& arg4,const std::string& arg5,const std::string& arg6,const std::string& arg7){{return obj->setLanguageDefinition(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);}});
	LUA_INVOKE_FOOTER("10,11,8,9");
}
int lua_ImGui_ColorTextEdit_setLanguageGLSL(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setLanguageGLSL");
	LUA_TRY_INVOKE(0, &ImGui::ColorTextEdit::setLanguageGLSL);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_setLanguageHLSL(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setLanguageHLSL");
	LUA_TRY_INVOKE(0, &ImGui::ColorTextEdit::setLanguageHLSL);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_setLanguageLua(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setLanguageLua");
	LUA_TRY_INVOKE(0, &ImGui::ColorTextEdit::setLanguageLua);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_setLanguageSQL(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setLanguageSQL");
	LUA_TRY_INVOKE(0, &ImGui::ColorTextEdit::setLanguageSQL);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_setPalette(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setPalette");
	LUA_TRY_INVOKE(1, &ImGui::ColorTextEdit::setPalette);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGui_ColorTextEdit_setPaletteDark(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setPaletteDark");
	LUA_TRY_INVOKE(0, &ImGui::ColorTextEdit::setPaletteDark);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_setPaletteLight(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setPaletteLight");
	LUA_TRY_INVOKE(0, &ImGui::ColorTextEdit::setPaletteLight);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_setPaletteRetroBlue(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setPaletteRetroBlue");
	LUA_TRY_INVOKE(0, &ImGui::ColorTextEdit::setPaletteRetroBlue);
	LUA_INVOKE_FOOTER("0");
}
int lua_ImGui_ColorTextEdit_setReadOnly(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setReadOnly");
	LUA_TRY_INVOKE(1, &ImGui::ColorTextEdit::setReadOnly);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGui_ColorTextEdit_setSelection(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setSelection");
	LUA_TRY_INVOKE(5, static_cast<void(ImGui::ColorTextEdit::*)(int, int, int, int, ImGui::ColorTextEdit::SelectionMode)>(&ImGui::ColorTextEdit::setSelection));
	LUA_TRY_INVOKE(4, [](ImGui::ColorTextEdit* obj,int arg0,int arg1,int arg2,int arg3){{return obj->setSelection(std::move(arg0),std::move(arg1),std::move(arg2),std::move(arg3));}});
	LUA_INVOKE_FOOTER("4,5");
}
int lua_ImGui_ColorTextEdit_setSelectionEnd(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setSelectionEnd");
	LUA_TRY_INVOKE(2, &ImGui::ColorTextEdit::setSelectionEnd);
	LUA_INVOKE_FOOTER("2");
}
int lua_ImGui_ColorTextEdit_setSelectionStart(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setSelectionStart");
	LUA_TRY_INVOKE(2, &ImGui::ColorTextEdit::setSelectionStart);
	LUA_INVOKE_FOOTER("2");
}
int lua_ImGui_ColorTextEdit_setShowShortTabGlyphs(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setShowShortTabGlyphs");
	LUA_TRY_INVOKE(1, &ImGui::ColorTextEdit::setShowShortTabGlyphs);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGui_ColorTextEdit_setShowWhitespaces(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setShowWhitespaces");
	LUA_TRY_INVOKE(1, &ImGui::ColorTextEdit::setShowWhitespaces);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGui_ColorTextEdit_setTabSize(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setTabSize");
	LUA_TRY_INVOKE(1, &ImGui::ColorTextEdit::setTabSize);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGui_ColorTextEdit_setText(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setText");
	LUA_TRY_INVOKE(1, &ImGui::ColorTextEdit::setText);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGui_ColorTextEdit_setTextLines(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:setTextLines");
	LUA_TRY_INVOKE(1, &ImGui::ColorTextEdit::setTextLines);
	LUA_INVOKE_FOOTER("1");
}
int lua_ImGui_ColorTextEdit_undo(lua_State* lua_S)
{
	LUA_INVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:undo");
	LUA_TRY_INVOKE(1, static_cast<void(ImGui::ColorTextEdit::*)(int)>(&ImGui::ColorTextEdit::undo));
	LUA_TRY_INVOKE(0, [](ImGui::ColorTextEdit* obj){{return obj->undo();}});
	LUA_INVOKE_FOOTER("0,1");
}
int lua_ImGui_ColorTextEdit_create(lua_State* lua_S)
{
	LUA_SINVOKE_HEADER("imgui.ColorTextEdit", "imgui.ColorTextEdit:create");
	LUA_TRY_INVOKE_R(0, &ImGui::ColorTextEdit::create);
	LUA_SINVOKE_FOOTER("0");
}
int luaReg_imguiColorTextEdit_imguiColorTextEdit(lua_State* lua_S)
{
	LUA_ENTRY("imgui");
	LUA_CLS_DEF_BASE(ImGui::ColorTextEdit, "ColorTextEdit", "imgui.ColorTextEdit",
		cocos2d::Node, "imgui.cocos2d.Node",
		nullptr, nullptr);
	LUA_METHOD("addLanguageIdentifier", lua_ImGui_ColorTextEdit_addLanguageIdentifier);
	LUA_METHOD("addLanguagePreprocIdentifier", lua_ImGui_ColorTextEdit_addLanguagePreprocIdentifier);
	LUA_METHOD("canRedo", lua_ImGui_ColorTextEdit_canRedo);
	LUA_METHOD("canUndo", lua_ImGui_ColorTextEdit_canUndo);
	LUA_METHOD("copy", lua_ImGui_ColorTextEdit_copy);
	LUA_METHOD("cut", lua_ImGui_ColorTextEdit_cut);
	LUA_METHOD("delete", lua_ImGui_ColorTextEdit_delete);
	LUA_METHOD("getCurrentLineText", lua_ImGui_ColorTextEdit_getCurrentLineText);
	LUA_METHOD("getCursorPosition", lua_ImGui_ColorTextEdit_getCursorPosition);
	LUA_METHOD("getHoveredCoordinates", lua_ImGui_ColorTextEdit_getHoveredCoordinates);
	LUA_METHOD("getHoveredDeclaration", lua_ImGui_ColorTextEdit_getHoveredDeclaration);
	LUA_METHOD("getHoveredWord", lua_ImGui_ColorTextEdit_getHoveredWord);
	LUA_METHOD("getHoveredWordIndex", lua_ImGui_ColorTextEdit_getHoveredWordIndex);
	LUA_METHOD("getPalette", lua_ImGui_ColorTextEdit_getPalette);
	LUA_METHOD("getSelectedText", lua_ImGui_ColorTextEdit_getSelectedText);
	LUA_METHOD("getTabSize", lua_ImGui_ColorTextEdit_getTabSize);
	LUA_METHOD("getText", lua_ImGui_ColorTextEdit_getText);
	LUA_METHOD("getTextLines", lua_ImGui_ColorTextEdit_getTextLines);
	LUA_METHOD("getTotalLines", lua_ImGui_ColorTextEdit_getTotalLines);
	LUA_METHOD("hasSelection", lua_ImGui_ColorTextEdit_hasSelection);
	LUA_METHOD("insertText", lua_ImGui_ColorTextEdit_insertText);
	LUA_METHOD("isAutoTooltip", lua_ImGui_ColorTextEdit_isAutoTooltip);
	LUA_METHOD("isColorizerEnabled", lua_ImGui_ColorTextEdit_isColorizerEnabled);
	LUA_METHOD("isCursorPositionChanged", lua_ImGui_ColorTextEdit_isCursorPositionChanged);
	LUA_METHOD("isHandleKeyboardInputsEnabled", lua_ImGui_ColorTextEdit_isHandleKeyboardInputsEnabled);
	LUA_METHOD("isHandleMouseInputsEnabled", lua_ImGui_ColorTextEdit_isHandleMouseInputsEnabled);
	LUA_METHOD("isImGuiChildIgnored", lua_ImGui_ColorTextEdit_isImGuiChildIgnored);
	LUA_METHOD("isOverwrite", lua_ImGui_ColorTextEdit_isOverwrite);
	LUA_METHOD("isReadOnly", lua_ImGui_ColorTextEdit_isReadOnly);
	LUA_METHOD("isShowingShortTabGlyphs", lua_ImGui_ColorTextEdit_isShowingShortTabGlyphs);
	LUA_METHOD("isShowingWhitespaces", lua_ImGui_ColorTextEdit_isShowingWhitespaces);
	LUA_METHOD("isTextChanged", lua_ImGui_ColorTextEdit_isTextChanged);
	LUA_METHOD("moveBottom", lua_ImGui_ColorTextEdit_moveBottom);
	LUA_METHOD("moveDown", lua_ImGui_ColorTextEdit_moveDown);
	LUA_METHOD("moveEnd", lua_ImGui_ColorTextEdit_moveEnd);
	LUA_METHOD("moveHome", lua_ImGui_ColorTextEdit_moveHome);
	LUA_METHOD("moveLeft", lua_ImGui_ColorTextEdit_moveLeft);
	LUA_METHOD("moveRight", lua_ImGui_ColorTextEdit_moveRight);
	LUA_METHOD("moveTop", lua_ImGui_ColorTextEdit_moveTop);
	LUA_METHOD("moveUp", lua_ImGui_ColorTextEdit_moveUp);
	LUA_METHOD("paste", lua_ImGui_ColorTextEdit_paste);
	LUA_METHOD("redo", lua_ImGui_ColorTextEdit_redo);
	LUA_METHOD("render", lua_ImGui_ColorTextEdit_render);
	LUA_METHOD("selectAll", lua_ImGui_ColorTextEdit_selectAll);
	LUA_METHOD("selectWordUnderCursor", lua_ImGui_ColorTextEdit_selectWordUnderCursor);
	LUA_METHOD("setAutoTooltip", lua_ImGui_ColorTextEdit_setAutoTooltip);
	LUA_METHOD("setBreakpoints", lua_ImGui_ColorTextEdit_setBreakpoints);
	LUA_METHOD("setColorizerEnable", lua_ImGui_ColorTextEdit_setColorizerEnable);
	LUA_METHOD("setCursorPosition", lua_ImGui_ColorTextEdit_setCursorPosition);
	LUA_METHOD("setErrorMarkers", lua_ImGui_ColorTextEdit_setErrorMarkers);
	LUA_METHOD("setHandleKeyboardInputs", lua_ImGui_ColorTextEdit_setHandleKeyboardInputs);
	LUA_METHOD("setHandleMouseInputs", lua_ImGui_ColorTextEdit_setHandleMouseInputs);
	LUA_METHOD("setImGuiChildIgnored", lua_ImGui_ColorTextEdit_setImGuiChildIgnored);
	LUA_METHOD("setLanguageAngelScript", lua_ImGui_ColorTextEdit_setLanguageAngelScript);
	LUA_METHOD("setLanguageC", lua_ImGui_ColorTextEdit_setLanguageC);
	LUA_METHOD("setLanguageCPlusPlus", lua_ImGui_ColorTextEdit_setLanguageCPlusPlus);
	LUA_METHOD("setLanguageDefinition", lua_ImGui_ColorTextEdit_setLanguageDefinition);
	LUA_METHOD("setLanguageGLSL", lua_ImGui_ColorTextEdit_setLanguageGLSL);
	LUA_METHOD("setLanguageHLSL", lua_ImGui_ColorTextEdit_setLanguageHLSL);
	LUA_METHOD("setLanguageLua", lua_ImGui_ColorTextEdit_setLanguageLua);
	LUA_METHOD("setLanguageSQL", lua_ImGui_ColorTextEdit_setLanguageSQL);
	LUA_METHOD("setPalette", lua_ImGui_ColorTextEdit_setPalette);
	LUA_METHOD("setPaletteDark", lua_ImGui_ColorTextEdit_setPaletteDark);
	LUA_METHOD("setPaletteLight", lua_ImGui_ColorTextEdit_setPaletteLight);
	LUA_METHOD("setPaletteRetroBlue", lua_ImGui_ColorTextEdit_setPaletteRetroBlue);
	LUA_METHOD("setReadOnly", lua_ImGui_ColorTextEdit_setReadOnly);
	LUA_METHOD("setSelection", lua_ImGui_ColorTextEdit_setSelection);
	LUA_METHOD("setSelectionEnd", lua_ImGui_ColorTextEdit_setSelectionEnd);
	LUA_METHOD("setSelectionStart", lua_ImGui_ColorTextEdit_setSelectionStart);
	LUA_METHOD("setShowShortTabGlyphs", lua_ImGui_ColorTextEdit_setShowShortTabGlyphs);
	LUA_METHOD("setShowWhitespaces", lua_ImGui_ColorTextEdit_setShowWhitespaces);
	LUA_METHOD("setTabSize", lua_ImGui_ColorTextEdit_setTabSize);
	LUA_METHOD("setText", lua_ImGui_ColorTextEdit_setText);
	LUA_METHOD("setTextLines", lua_ImGui_ColorTextEdit_setTextLines);
	LUA_METHOD("undo", lua_ImGui_ColorTextEdit_undo);
	LUA_METHOD("create", lua_ImGui_ColorTextEdit_create);
	luaReg_imguiColorTextEdit_imguiColorTextEditPaletteIndex(lua_S);
	luaReg_imguiColorTextEdit_imguiColorTextEditSelectionMode(lua_S);
	LUA_CLS_END();
	LUA_ENTRY_END(1);
	return 0;
}
