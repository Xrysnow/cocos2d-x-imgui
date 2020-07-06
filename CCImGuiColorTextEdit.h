#pragma once
#include "cocos2d.h"
#include "ImGuiColorTextEdit/TextEditor.h"

namespace ImGui
{
	class ColorTextEdit : public cocos2d::Node
	{
	public:
		enum class PaletteIndex
		{
			Default,
			Keyword,
			Number,
			String,
			CharLiteral,
			Punctuation,
			Preprocessor,
			Identifier,
			KnownIdentifier,
			PreprocIdentifier,
			Comment,
			MultiLineComment,
			Background,
			Cursor,
			Selection,
			ErrorMarker,
			Breakpoint,
			LineNumber,
			CurrentLineFill,
			CurrentLineFillInactive,
			CurrentLineEdge,
			Max
		};
		enum class SelectionMode
		{
			Normal,
			Word,
			Line
		};
		using LanguageDefinition = TextEditor::LanguageDefinition;

		static ColorTextEdit* create();

		void setLanguageDefinition(
			const std::string& name,
			const std::unordered_set<std::string>& keywords,
			const std::unordered_map<std::string, std::string>& identifiers,
			const std::unordered_map<std::string, std::string>& preprocIdentifiers,
			const std::vector<std::pair<std::string, PaletteIndex>>& tokenRegexStrings,
			const std::string& commentStart,
			const std::string& commentEnd,
			const std::string& singleLineComment,
			const std::string& preprocChar = "#",
			bool autoIndentation = true,
			bool caseSensitive = true
		);

		void addLanguageIdentifier(const std::unordered_map<std::string, std::string>& identifiers);
		void addLanguagePreprocIdentifier(const std::unordered_map<std::string, std::string>& identifiers);

		void setLanguageCPlusPlus() { e.SetLanguageDefinition(LanguageDefinition::CPlusPlus()); }
		void setLanguageHLSL() { e.SetLanguageDefinition(LanguageDefinition::HLSL()); }
		void setLanguageGLSL() { e.SetLanguageDefinition(LanguageDefinition::GLSL()); }
		void setLanguageC() { e.SetLanguageDefinition(LanguageDefinition::C()); }
		void setLanguageSQL() { e.SetLanguageDefinition(LanguageDefinition::SQL()); }
		void setLanguageAngelScript() { e.SetLanguageDefinition(LanguageDefinition::AngelScript()); }
		void setLanguageLua() { e.SetLanguageDefinition(LanguageDefinition::Lua()); }

		void setPaletteDark();
		void setPaletteLight();
		void setPaletteRetroBlue();

		std::vector<uint32_t> getPalette() const;
		void setPalette(const std::vector<uint32_t>& value);

		void setErrorMarkers(const TextEditor::ErrorMarkers& markers) { e.SetErrorMarkers(markers); }
		void setBreakpoints(const TextEditor::Breakpoints& markers) { e.SetBreakpoints(markers); }

		void render(const char* title, const cocos2d::Vec2& size = cocos2d::Vec2(), bool border = false);
		void setText(const std::string& text) { e.SetText(text); }
		std::string getText() const { return e.GetText(); }

		void setTextLines(const std::vector<std::string>& lines) { e.SetTextLines(lines); }
		std::vector<std::string> getTextLines() const { return e.GetTextLines(); }

		std::string getSelectedText() const { return e.GetSelectedText(); }
		std::string getCurrentLineText() const { return e.GetCurrentLineText(); }

		int  getTotalLines() const { return e.GetTotalLines(); }
		bool isOverwrite() const { return e.IsOverwrite(); }
		void setReadOnly(bool value) { e.SetReadOnly(value); }
		bool isReadOnly() const { return e.IsReadOnly(); }
		bool isTextChanged() const { return e.IsTextChanged(); }
		bool isCursorPositionChanged() const { return e.IsCursorPositionChanged(); }
		bool isColorizerEnabled() const { return e.IsColorizerEnabled(); }
		void setColorizerEnable(bool value) { e.SetColorizerEnable(value); }
		std::array<int, 2> getCursorPosition() const;
		void setCursorPosition(int line, int column);
		void setHandleMouseInputs(bool value) { e.SetHandleMouseInputs(value); }
		bool isHandleMouseInputsEnabled() const { return e.IsHandleMouseInputsEnabled(); }
		void setHandleKeyboardInputs(bool value) { e.SetHandleKeyboardInputs(value); }
		bool isHandleKeyboardInputsEnabled() const { return e.IsHandleKeyboardInputsEnabled(); }
		void setImGuiChildIgnored(bool value) { e.SetImGuiChildIgnored(value); }
		bool isImGuiChildIgnored() const { return e.IsImGuiChildIgnored(); }
		void setShowWhitespaces(bool value) { e.SetShowWhitespaces(value); }
		bool isShowingWhitespaces() const { return e.IsShowingWhitespaces(); }
		void setShowShortTabGlyphs(bool value) { e.SetShowShortTabGlyphs(value); }
		bool isShowingShortTabGlyphs() const { return e.IsShowingShortTabGlyphs(); }
		void setTabSize(int value) { e.SetTabSize(value); }
		int  getTabSize() const { return e.GetTabSize(); }
		void insertText(const std::string& value) { e.InsertText(value); }
		void moveUp(int amount = 1, bool select = false) { e.MoveUp(amount, select); }
		void moveDown(int amount = 1, bool select = false) { e.MoveDown(amount, select); }
		void moveLeft(int amount = 1, bool select = false, bool wordMode = false) { e.MoveLeft(amount, select, wordMode); }
		void moveRight(int amount = 1, bool select = false, bool wordMode = false) { e.MoveRight(amount, select, wordMode); }
		void moveTop(bool select = false) { e.MoveTop(select); }
		void moveBottom(bool select = false) { e.MoveBottom(select); }
		void moveHome(bool select = false) { e.MoveHome(select); }
		void moveEnd(bool select = false) { e.MoveEnd(select); }
		void setSelectionStart(int line, int column);
		void setSelectionEnd(int line, int column);

		void setSelection(
			int lineStart, int columnStart,
			int lineEnd, int columnEnd,
			SelectionMode mode = SelectionMode::Normal);
		void selectWordUnderCursor() { e.SelectWordUnderCursor(); }
		void selectAll() { e.SelectAll(); }
		bool hasSelection() const { return e.HasSelection(); }
		void copy() { e.Copy(); }
		void cut() { e.Cut(); }
		void paste() { e.Paste(); }
		void delete_() { e.Delete(); }
		bool canUndo() const { return e.CanUndo(); }
		bool canRedo() const { return e.CanRedo(); }
		void undo(int steps = 1) { e.Undo(steps); }
		void redo(int steps = 1) { e.Redo(steps); }

		void setAutoTooltip(bool value) { e.SetAutoTooltip(value); }
		bool isAutoTooltip() const { return e.IsAutoTooltip(); }
		std::array<int, 2> getHoveredCoordinates() const;
		std::string getHoveredWord() const { return e.GetHoveredWord(); }
		std::string getHoveredDeclaration() const { return e.GetHoveredDeclaration(); }
		PaletteIndex getHoveredWordIndex() const { return (PaletteIndex)e.GetHoveredWordIndex(); }
	protected:
		TextEditor e;
		TextEditor::LanguageDefinition def;
	};
}
