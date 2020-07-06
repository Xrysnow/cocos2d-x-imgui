#include "CCImGuiColorTextEdit.h"

using namespace ImGui;
using namespace cocos2d;

ColorTextEdit* ColorTextEdit::create()
{
	auto ret = new (std::nothrow) ColorTextEdit();
	if (ret && ret->init())
	{
		ret->autorelease();
		return ret;
	}
	delete ret;
	return nullptr;
}

void ColorTextEdit::setLanguageDefinition(
	const std::string& name,
	const std::unordered_set<std::string>& keywords,
	const std::unordered_map<std::string, std::string>& identifiers,
	const std::unordered_map<std::string, std::string>& preprocIdentifiers,
	const std::vector<std::pair<std::string, PaletteIndex>>& tokenRegexStrings,
	const std::string& commentStart,
	const std::string& commentEnd,
	const std::string& singleLineComment,
	const std::string& preprocChar,
	bool autoIndentation,
	bool caseSensitive)
{
	LanguageDefinition lang;
	lang.mName = name;
	lang.mKeywords = keywords;
	TextEditor::Identifiers id;
	for (auto&& it : identifiers)
		id[it.first] = { {},it.second };
	lang.mIdentifiers = id;
	TextEditor::Identifiers pid;
	for (auto&& it : preprocIdentifiers)
		id[it.first] = { {},it.second };
	lang.mPreprocIdentifiers = pid;
	TextEditor::LanguageDefinition::TokenRegexStrings tokens;
	for (auto&& it : tokenRegexStrings)
		tokens.emplace_back(it.first, (TextEditor::PaletteIndex)it.second);
	lang.mTokenRegexStrings = tokens;
	lang.mCommentStart = commentStart;
	lang.mCommentEnd = commentEnd;
	lang.mSingleLineComment = singleLineComment;
	lang.mPreprocChar = preprocChar.empty() ? '\0' : preprocChar.at(0);
	lang.mAutoIndentation = autoIndentation;
	lang.mCaseSensitive = caseSensitive;
	try
	{
		e.SetLanguageDefinition(lang);
	}
	catch (...)
	{
		lang.mTokenRegexStrings.clear();
		e.SetLanguageDefinition(lang);
		cocos2d::log("invalid regex");
	}
}

void ColorTextEdit::addLanguageIdentifier(const std::unordered_map<std::string, std::string>& identifiers)
{
	auto lang = e.GetLanguageDefinition();
	for (auto&& it : identifiers)
	{		
		TextEditor::Identifier id;
		id.mDeclaration = it.second;
		lang.mIdentifiers.emplace(it.first, id);
	}
	e.SetLanguageDefinition(lang);
}

void ColorTextEdit::addLanguagePreprocIdentifier(const std::unordered_map<std::string, std::string>& identifiers)
{
	auto lang = e.GetLanguageDefinition();
	for (auto&& it : identifiers)
	{
		TextEditor::Identifier id;
		id.mDeclaration = it.second;
		lang.mPreprocIdentifiers.emplace(it.first, id);
	}
	e.SetLanguageDefinition(lang);
}

void ColorTextEdit::setPaletteDark()
{
	e.SetPalette(TextEditor::GetDarkPalette());
}

void ColorTextEdit::setPaletteLight()
{
	e.SetPalette(TextEditor::GetLightPalette());
}

void ColorTextEdit::setPaletteRetroBlue()
{
	e.SetPalette(TextEditor::GetRetroBluePalette());
}

std::vector<uint32_t> ColorTextEdit::getPalette() const
{
	std::vector<uint32_t> ret;
	for (auto&& v : e.GetPalette())
		ret.push_back(v);
	return ret;
}

void ColorTextEdit::setPalette(const std::vector<uint32_t>& value)
{
	TextEditor::Palette v;
	for (int i = 0; i < std::min(value.size(), v.size()); ++i)
		v[i] = value[i];
	e.SetPalette(v);
}

void ColorTextEdit::render(const char* title, const Vec2& size, bool border)
{
	e.Render(title, { size.x,size.y }, border);
}

std::array<int, 2> ColorTextEdit::getCursorPosition() const
{
	const auto p = e.GetCursorPosition();
	return { p.mLine,p.mColumn };
}

void ColorTextEdit::setCursorPosition(int line, int column)
{
	e.SetCursorPosition({ line, column });
}

void ColorTextEdit::setSelectionStart(int line, int column)
{
	e.SetSelectionStart({ line, column });
}

void ColorTextEdit::setSelectionEnd(int line, int column)
{
	e.SetSelectionEnd({ line, column });
}

void ColorTextEdit::setSelection(
	int lineStart, int columnStart,
	int lineEnd, int columnEnd,
	SelectionMode mode)
{
	e.SetSelection(
		{ lineStart, columnStart }, { lineEnd, columnEnd },
		(TextEditor::SelectionMode)mode);
}

std::array<int, 2> ColorTextEdit::getHoveredCoordinates() const
{
	const auto p = e.GetHoveredCoordinates();
	return { p.mLine,p.mColumn };
}
