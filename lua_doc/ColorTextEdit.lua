--------------------------------
-- @module ColorTextEdit
-- @extend Node
-- @parent_module imgui

---@class imgui.ColorTextEdit:cc.Node
local ColorTextEdit = {}
imgui.ColorTextEdit = ColorTextEdit
--------------------------------

--- 
---@param identifiers table<string,string>
---@return imgui.ColorTextEdit
function ColorTextEdit:addLanguageIdentifier(identifiers)
end

--------------------------------

--- 
---@param identifiers table<string,string>
---@return imgui.ColorTextEdit
function ColorTextEdit:addLanguagePreprocIdentifier(identifiers)
end

--------------------------------

--- 
---@return boolean
function ColorTextEdit:canRedo()
end

--------------------------------

--- 
---@return boolean
function ColorTextEdit:canUndo()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:copy()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:create()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:cut()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:delete()
end

--------------------------------

--- 
---@return string
function ColorTextEdit:getCurrentLineText()
end

--------------------------------

--- 
---@return number[]
function ColorTextEdit:getCursorPosition()
end

--------------------------------

--- 
---@return number[]
function ColorTextEdit:getHoveredCoordinates()
end

--------------------------------

--- 
---@return string
function ColorTextEdit:getHoveredDeclaration()
end

--------------------------------

--- 
---@return string
function ColorTextEdit:getHoveredWord()
end

--------------------------------

--- 
---@return number
function ColorTextEdit:getHoveredWordIndex()
end

--------------------------------

--- 
---@return number[]
function ColorTextEdit:getPalette()
end

--------------------------------

--- 
---@return string
function ColorTextEdit:getSelectedText()
end

--------------------------------

--- 
---@return number
function ColorTextEdit:getTabSize()
end

--------------------------------

--- 
---@return string
function ColorTextEdit:getText()
end

--------------------------------

--- 
---@return string[]
function ColorTextEdit:getTextLines()
end

--------------------------------

--- 
---@return number
function ColorTextEdit:getTotalLines()
end

--------------------------------

--- 
---@return boolean
function ColorTextEdit:hasSelection()
end

--------------------------------

--- 
---@param value string
---@return imgui.ColorTextEdit
function ColorTextEdit:insertText(value)
end

--------------------------------

--- 
---@return boolean
function ColorTextEdit:isAutoTooltip()
end

--------------------------------

--- 
---@return boolean
function ColorTextEdit:isColorizerEnabled()
end

--------------------------------

--- 
---@return boolean
function ColorTextEdit:isCursorPositionChanged()
end

--------------------------------

--- 
---@return boolean
function ColorTextEdit:isHandleKeyboardInputsEnabled()
end

--------------------------------

--- 
---@return boolean
function ColorTextEdit:isHandleMouseInputsEnabled()
end

--------------------------------

--- 
---@return boolean
function ColorTextEdit:isImGuiChildIgnored()
end

--------------------------------

--- 
---@return boolean
function ColorTextEdit:isOverwrite()
end

--------------------------------

--- 
---@return boolean
function ColorTextEdit:isReadOnly()
end

--------------------------------

--- 
---@return boolean
function ColorTextEdit:isShowingShortTabGlyphs()
end

--------------------------------

--- 
---@return boolean
function ColorTextEdit:isShowingWhitespaces()
end

--------------------------------

--- 
---@return boolean
function ColorTextEdit:isTextChanged()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:moveBottom()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:moveDown()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:moveEnd()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:moveHome()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:moveLeft()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:moveRight()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:moveTop()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:moveUp()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:paste()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:redo()
end

--------------------------------

--- 
---@param title string
---@param size vec2_table
---@param border boolean
---@return imgui.ColorTextEdit
function ColorTextEdit:render(title, size, border)
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:selectAll()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:selectWordUnderCursor()
end

--------------------------------

--- 
---@param value boolean
---@return imgui.ColorTextEdit
function ColorTextEdit:setAutoTooltip(value)
end

--------------------------------

--- 
---@param markers number[]
---@return imgui.ColorTextEdit
function ColorTextEdit:setBreakpoints(markers)
end

--------------------------------

--- 
---@param value boolean
---@return imgui.ColorTextEdit
function ColorTextEdit:setColorizerEnable(value)
end

--------------------------------

--- 
---@param line number
---@param column number
---@return imgui.ColorTextEdit
function ColorTextEdit:setCursorPosition(line, column)
end

--------------------------------

--- 
---@param markers table<number,string>
---@return imgui.ColorTextEdit
function ColorTextEdit:setErrorMarkers(markers)
end

--------------------------------

--- 
---@param value boolean
---@return imgui.ColorTextEdit
function ColorTextEdit:setHandleKeyboardInputs(value)
end

--------------------------------

--- 
---@param value boolean
---@return imgui.ColorTextEdit
function ColorTextEdit:setHandleMouseInputs(value)
end

--------------------------------

--- 
---@param value boolean
---@return imgui.ColorTextEdit
function ColorTextEdit:setImGuiChildIgnored(value)
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:setLanguageAngelScript()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:setLanguageC()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:setLanguageCPlusPlus()
end

--------------------------------

--- 
---@param name string
---@param keywords string[]
---@param identifiers table<string,string>
---@param preprocIdentifiers table<string,string>
---@param tokenRegexStrings array_table
---@param commentStart string
---@param commentEnd string
---@param singleLineComment string
---@param preprocChar string
---@param autoIndentation boolean
---@param caseSensitive boolean
---@return imgui.ColorTextEdit
function ColorTextEdit:setLanguageDefinition(name, keywords, identifiers, preprocIdentifiers, tokenRegexStrings, commentStart, commentEnd, singleLineComment, preprocChar, autoIndentation, caseSensitive)
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:setLanguageGLSL()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:setLanguageHLSL()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:setLanguageLua()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:setLanguageSQL()
end

--------------------------------

--- 
---@param value number[]
---@return imgui.ColorTextEdit
function ColorTextEdit:setPalette(value)
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:setPaletteDark()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:setPaletteLight()
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:setPaletteRetroBlue()
end

--------------------------------

--- 
---@param value boolean
---@return imgui.ColorTextEdit
function ColorTextEdit:setReadOnly(value)
end

--------------------------------

--- 
---@param lineStart number
---@param columnStart number
---@param lineEnd number
---@param columnEnd number
---@param mode number
---@return imgui.ColorTextEdit
function ColorTextEdit:setSelection(lineStart, columnStart, lineEnd, columnEnd, mode)
end

--------------------------------

--- 
---@param line number
---@param column number
---@return imgui.ColorTextEdit
function ColorTextEdit:setSelectionEnd(line, column)
end

--------------------------------

--- 
---@param line number
---@param column number
---@return imgui.ColorTextEdit
function ColorTextEdit:setSelectionStart(line, column)
end

--------------------------------

--- 
---@param value boolean
---@return imgui.ColorTextEdit
function ColorTextEdit:setShowShortTabGlyphs(value)
end

--------------------------------

--- 
---@param value boolean
---@return imgui.ColorTextEdit
function ColorTextEdit:setShowWhitespaces(value)
end

--------------------------------

--- 
---@param value number
---@return imgui.ColorTextEdit
function ColorTextEdit:setTabSize(value)
end

--------------------------------

--- 
---@param text string
---@return imgui.ColorTextEdit
function ColorTextEdit:setText(text)
end

--------------------------------

--- 
---@param lines string[]
---@return imgui.ColorTextEdit
function ColorTextEdit:setTextLines(lines)
end

--------------------------------

--- 
---@return imgui.ColorTextEdit
function ColorTextEdit:undo()
end


--------------------------------

local PaletteIndex = {}
--- 
ColorTextEdit.PaletteIndex = PaletteIndex
--- 
PaletteIndex.Default = 0
--- 
PaletteIndex.Keyword = 1
--- 
PaletteIndex.Number = 2
--- 
PaletteIndex.String = 3
--- 
PaletteIndex.CharLiteral = 4
--- 
PaletteIndex.Punctuation = 5
--- 
PaletteIndex.Preprocessor = 6
--- 
PaletteIndex.Identifier = 7
--- 
PaletteIndex.KnownIdentifier = 8
--- 
PaletteIndex.PreprocIdentifier = 9
--- 
PaletteIndex.Comment = 10
--- 
PaletteIndex.MultiLineComment = 11
--- 
PaletteIndex.Background = 12
--- 
PaletteIndex.Cursor = 13
--- 
PaletteIndex.Selection = 14
--- 
PaletteIndex.ErrorMarker = 15
--- 
PaletteIndex.Breakpoint = 16
--- 
PaletteIndex.LineNumber = 17
--- 
PaletteIndex.CurrentLineFill = 18
--- 
PaletteIndex.CurrentLineFillInactive = 19
--- 
PaletteIndex.CurrentLineEdge = 20
--- 
PaletteIndex.Max = 21
--------------------------------

local SelectionMode = {}
--- 
ColorTextEdit.SelectionMode = SelectionMode
--- 
SelectionMode.Normal = 0
--- 
SelectionMode.Word = 1
--- 
SelectionMode.Line = 2

return nil
