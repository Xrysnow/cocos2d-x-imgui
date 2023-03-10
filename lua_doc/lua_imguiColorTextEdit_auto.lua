------------------------------
--- Tag: imguiColorTextEdit
--- Date: 2023-03-10
------------------------------


---@class imgui.ColorTextEdit:cc.Node
local ColorTextEdit = {}
imgui.ColorTextEdit = ColorTextEdit

---@param identifiers table<string, string> @(std::unordered_map<std::basic_string<char>, std::basic_string<char>>)
---@return nil @(void)
function ColorTextEdit:addLanguageIdentifier(identifiers)
end

---@param identifiers table<string, string> @(std::unordered_map<std::basic_string<char>, std::basic_string<char>>)
---@return nil @(void)
function ColorTextEdit:addLanguagePreprocIdentifier(identifiers)
end

---@return boolean @(bool)
function ColorTextEdit:canRedo()
end

---@return boolean @(bool)
function ColorTextEdit:canUndo()
end

---@return nil @(void)
function ColorTextEdit:copy()
end

---@return nil @(void)
function ColorTextEdit:cut()
end

---@return nil @(void)
function ColorTextEdit:delete()
end

---@return string @(std::string)
function ColorTextEdit:getCurrentLineText()
end

---@return int, 2[] @(std::array<int, 2>)
function ColorTextEdit:getCursorPosition()
end

---@return int, 2[] @(std::array<int, 2>)
function ColorTextEdit:getHoveredCoordinates()
end

---@return string @(std::string)
function ColorTextEdit:getHoveredDeclaration()
end

---@return string @(std::string)
function ColorTextEdit:getHoveredWord()
end

---@return imgui.ColorTextEdit.PaletteIndex @(ImGui::ColorTextEdit::PaletteIndex)
function ColorTextEdit:getHoveredWordIndex()
end

---@return number[] @(std::vector<unsigned int>)
function ColorTextEdit:getPalette()
end

---@return string @(std::string)
function ColorTextEdit:getSelectedText()
end

---@return number @(int)
function ColorTextEdit:getTabSize()
end

---@return string @(std::string)
function ColorTextEdit:getText()
end

---@return string[] @(std::vector<std::basic_string<char>>)
function ColorTextEdit:getTextLines()
end

---@return number @(int)
function ColorTextEdit:getTotalLines()
end

---@return boolean @(bool)
function ColorTextEdit:hasSelection()
end

---@param value string @(std::string)
---@return nil @(void)
function ColorTextEdit:insertText(value)
end

---@return boolean @(bool)
function ColorTextEdit:isAutoTooltip()
end

---@return boolean @(bool)
function ColorTextEdit:isColorizerEnabled()
end

---@return boolean @(bool)
function ColorTextEdit:isCursorPositionChanged()
end

---@return boolean @(bool)
function ColorTextEdit:isHandleKeyboardInputsEnabled()
end

---@return boolean @(bool)
function ColorTextEdit:isHandleMouseInputsEnabled()
end

---@return boolean @(bool)
function ColorTextEdit:isImGuiChildIgnored()
end

---@return boolean @(bool)
function ColorTextEdit:isOverwrite()
end

---@return boolean @(bool)
function ColorTextEdit:isReadOnly()
end

---@return boolean @(bool)
function ColorTextEdit:isShowingShortTabGlyphs()
end

---@return boolean @(bool)
function ColorTextEdit:isShowingWhitespaces()
end

---@return boolean @(bool)
function ColorTextEdit:isTextChanged()
end

---@param select boolean @(bool)
---@return nil @(void)
function ColorTextEdit:moveBottom(select)
end

---@return nil @(void)
function ColorTextEdit:moveBottom()
end

---@param amount number @(int)
---@param select boolean @(bool)
---@return nil @(void)
function ColorTextEdit:moveDown(amount, select)
end

---@param amount number @(int)
---@return nil @(void)
function ColorTextEdit:moveDown(amount)
end

---@return nil @(void)
function ColorTextEdit:moveDown()
end

---@param select boolean @(bool)
---@return nil @(void)
function ColorTextEdit:moveEnd(select)
end

---@return nil @(void)
function ColorTextEdit:moveEnd()
end

---@param select boolean @(bool)
---@return nil @(void)
function ColorTextEdit:moveHome(select)
end

---@return nil @(void)
function ColorTextEdit:moveHome()
end

---@param amount number @(int)
---@param select boolean @(bool)
---@param wordMode boolean @(bool)
---@return nil @(void)
function ColorTextEdit:moveLeft(amount, select, wordMode)
end

---@param amount number @(int)
---@param select boolean @(bool)
---@return nil @(void)
function ColorTextEdit:moveLeft(amount, select)
end

---@param amount number @(int)
---@return nil @(void)
function ColorTextEdit:moveLeft(amount)
end

---@return nil @(void)
function ColorTextEdit:moveLeft()
end

---@param amount number @(int)
---@param select boolean @(bool)
---@param wordMode boolean @(bool)
---@return nil @(void)
function ColorTextEdit:moveRight(amount, select, wordMode)
end

---@param amount number @(int)
---@param select boolean @(bool)
---@return nil @(void)
function ColorTextEdit:moveRight(amount, select)
end

---@param amount number @(int)
---@return nil @(void)
function ColorTextEdit:moveRight(amount)
end

---@return nil @(void)
function ColorTextEdit:moveRight()
end

---@param select boolean @(bool)
---@return nil @(void)
function ColorTextEdit:moveTop(select)
end

---@return nil @(void)
function ColorTextEdit:moveTop()
end

---@param amount number @(int)
---@param select boolean @(bool)
---@return nil @(void)
function ColorTextEdit:moveUp(amount, select)
end

---@param amount number @(int)
---@return nil @(void)
function ColorTextEdit:moveUp(amount)
end

---@return nil @(void)
function ColorTextEdit:moveUp()
end

---@return nil @(void)
function ColorTextEdit:paste()
end

---@param steps number @(int)
---@return nil @(void)
function ColorTextEdit:redo(steps)
end

---@return nil @(void)
function ColorTextEdit:redo()
end

---@param title string @(const char*)
---@param size vec2_table @(cocos2d::Vec2)
---@param border boolean @(bool)
---@return nil @(void)
function ColorTextEdit:render(title, size, border)
end

---@param title string @(const char*)
---@param size vec2_table @(cocos2d::Vec2)
---@return nil @(void)
function ColorTextEdit:render(title, size)
end

---@param title string @(const char*)
---@return nil @(void)
function ColorTextEdit:render(title)
end

---@return nil @(void)
function ColorTextEdit:selectAll()
end

---@return nil @(void)
function ColorTextEdit:selectWordUnderCursor()
end

---@param value boolean @(bool)
---@return nil @(void)
function ColorTextEdit:setAutoTooltip(value)
end

---@param markers number[] @(TextEditor::Breakpoints)
---@return nil @(void)
function ColorTextEdit:setBreakpoints(markers)
end

---@param value boolean @(bool)
---@return nil @(void)
function ColorTextEdit:setColorizerEnable(value)
end

---@param line number @(int)
---@param column number @(int)
---@return nil @(void)
function ColorTextEdit:setCursorPosition(line, column)
end

---@param markers table<number, string> @(TextEditor::ErrorMarkers)
---@return nil @(void)
function ColorTextEdit:setErrorMarkers(markers)
end

---@param value boolean @(bool)
---@return nil @(void)
function ColorTextEdit:setHandleKeyboardInputs(value)
end

---@param value boolean @(bool)
---@return nil @(void)
function ColorTextEdit:setHandleMouseInputs(value)
end

---@param value boolean @(bool)
---@return nil @(void)
function ColorTextEdit:setImGuiChildIgnored(value)
end

---@return nil @(void)
function ColorTextEdit:setLanguageAngelScript()
end

---@return nil @(void)
function ColorTextEdit:setLanguageC()
end

---@return nil @(void)
function ColorTextEdit:setLanguageCPlusPlus()
end

---@param name string @(std::string)
---@param keywords string[] @(std::unordered_set<std::basic_string<char>>)
---@param identifiers table<string, string> @(std::unordered_map<std::basic_string<char>, std::basic_string<char>>)
---@param preprocIdentifiers table<string, string> @(std::unordered_map<std::basic_string<char>, std::basic_string<char>>)
---@param tokenRegexStrings table[] @(std::vector<std::pair<std::basic_string<char>, ImGui::ColorTextEdit::PaletteIndex>>)
---@param commentStart string @(std::string)
---@param commentEnd string @(std::string)
---@param singleLineComment string @(std::string)
---@param preprocChar string @(std::string)
---@param autoIndentation boolean @(bool)
---@param caseSensitive boolean @(bool)
---@return nil @(void)
function ColorTextEdit:setLanguageDefinition(name, keywords, identifiers, preprocIdentifiers, tokenRegexStrings, commentStart, commentEnd, singleLineComment, preprocChar, autoIndentation, caseSensitive)
end

---@param name string @(std::string)
---@param keywords string[] @(std::unordered_set<std::basic_string<char>>)
---@param identifiers table<string, string> @(std::unordered_map<std::basic_string<char>, std::basic_string<char>>)
---@param preprocIdentifiers table<string, string> @(std::unordered_map<std::basic_string<char>, std::basic_string<char>>)
---@param tokenRegexStrings table[] @(std::vector<std::pair<std::basic_string<char>, ImGui::ColorTextEdit::PaletteIndex>>)
---@param commentStart string @(std::string)
---@param commentEnd string @(std::string)
---@param singleLineComment string @(std::string)
---@param preprocChar string @(std::string)
---@param autoIndentation boolean @(bool)
---@return nil @(void)
function ColorTextEdit:setLanguageDefinition(name, keywords, identifiers, preprocIdentifiers, tokenRegexStrings, commentStart, commentEnd, singleLineComment, preprocChar, autoIndentation)
end

---@param name string @(std::string)
---@param keywords string[] @(std::unordered_set<std::basic_string<char>>)
---@param identifiers table<string, string> @(std::unordered_map<std::basic_string<char>, std::basic_string<char>>)
---@param preprocIdentifiers table<string, string> @(std::unordered_map<std::basic_string<char>, std::basic_string<char>>)
---@param tokenRegexStrings table[] @(std::vector<std::pair<std::basic_string<char>, ImGui::ColorTextEdit::PaletteIndex>>)
---@param commentStart string @(std::string)
---@param commentEnd string @(std::string)
---@param singleLineComment string @(std::string)
---@param preprocChar string @(std::string)
---@return nil @(void)
function ColorTextEdit:setLanguageDefinition(name, keywords, identifiers, preprocIdentifiers, tokenRegexStrings, commentStart, commentEnd, singleLineComment, preprocChar)
end

---@param name string @(std::string)
---@param keywords string[] @(std::unordered_set<std::basic_string<char>>)
---@param identifiers table<string, string> @(std::unordered_map<std::basic_string<char>, std::basic_string<char>>)
---@param preprocIdentifiers table<string, string> @(std::unordered_map<std::basic_string<char>, std::basic_string<char>>)
---@param tokenRegexStrings table[] @(std::vector<std::pair<std::basic_string<char>, ImGui::ColorTextEdit::PaletteIndex>>)
---@param commentStart string @(std::string)
---@param commentEnd string @(std::string)
---@param singleLineComment string @(std::string)
---@return nil @(void)
function ColorTextEdit:setLanguageDefinition(name, keywords, identifiers, preprocIdentifiers, tokenRegexStrings, commentStart, commentEnd, singleLineComment)
end

---@return nil @(void)
function ColorTextEdit:setLanguageGLSL()
end

---@return nil @(void)
function ColorTextEdit:setLanguageHLSL()
end

---@return nil @(void)
function ColorTextEdit:setLanguageLua()
end

---@return nil @(void)
function ColorTextEdit:setLanguageSQL()
end

---@param value number[] @(std::vector<unsigned int>)
---@return nil @(void)
function ColorTextEdit:setPalette(value)
end

---@return nil @(void)
function ColorTextEdit:setPaletteDark()
end

---@return nil @(void)
function ColorTextEdit:setPaletteLight()
end

---@return nil @(void)
function ColorTextEdit:setPaletteRetroBlue()
end

---@param value boolean @(bool)
---@return nil @(void)
function ColorTextEdit:setReadOnly(value)
end

---@param lineStart number @(int)
---@param columnStart number @(int)
---@param lineEnd number @(int)
---@param columnEnd number @(int)
---@param mode imgui.ColorTextEdit.SelectionMode @(ImGui::ColorTextEdit::SelectionMode)
---@return nil @(void)
function ColorTextEdit:setSelection(lineStart, columnStart, lineEnd, columnEnd, mode)
end

---@param lineStart number @(int)
---@param columnStart number @(int)
---@param lineEnd number @(int)
---@param columnEnd number @(int)
---@return nil @(void)
function ColorTextEdit:setSelection(lineStart, columnStart, lineEnd, columnEnd)
end

---@param line number @(int)
---@param column number @(int)
---@return nil @(void)
function ColorTextEdit:setSelectionEnd(line, column)
end

---@param line number @(int)
---@param column number @(int)
---@return nil @(void)
function ColorTextEdit:setSelectionStart(line, column)
end

---@param value boolean @(bool)
---@return nil @(void)
function ColorTextEdit:setShowShortTabGlyphs(value)
end

---@param value boolean @(bool)
---@return nil @(void)
function ColorTextEdit:setShowWhitespaces(value)
end

---@param value number @(int)
---@return nil @(void)
function ColorTextEdit:setTabSize(value)
end

---@param text string @(std::string)
---@return nil @(void)
function ColorTextEdit:setText(text)
end

---@param lines string[] @(std::vector<std::basic_string<char>>)
---@return nil @(void)
function ColorTextEdit:setTextLines(lines)
end

---@param steps number @(int)
---@return nil @(void)
function ColorTextEdit:undo(steps)
end

---@return nil @(void)
function ColorTextEdit:undo()
end

--- (static)
---@return imgui.ColorTextEdit @(ImGui::ColorTextEdit*)
function ColorTextEdit:create()
end

local PaletteIndex = {
	Default = 0,
	Keyword = 1,
	Number = 2,
	String = 3,
	CharLiteral = 4,
	Punctuation = 5,
	Preprocessor = 6,
	Identifier = 7,
	KnownIdentifier = 8,
	PreprocIdentifier = 9,
	Comment = 10,
	MultiLineComment = 11,
	Background = 12,
	Cursor = 13,
	Selection = 14,
	ErrorMarker = 15,
	Breakpoint = 16,
	LineNumber = 17,
	CurrentLineFill = 18,
	CurrentLineFillInactive = 19,
	CurrentLineEdge = 20,
	Max = 21,
}
---
---@class imgui.ColorTextEdit.PaletteIndex
ColorTextEdit.PaletteIndex = PaletteIndex

local SelectionMode = {
	Normal = 0,
	Word = 1,
	Line = 2,
}
---
---@class imgui.ColorTextEdit.SelectionMode
ColorTextEdit.SelectionMode = SelectionMode

