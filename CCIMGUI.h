#pragma once
#include "cocos2d.h"
#include "imgui/imgui.h"
#include <tuple>

class CCIMGUI
{
	void init();
public:
	static CCIMGUI* getInstance();
	void update();
	void addCallback(const std::function<void()>& callBack, const std::string& name);
	void removeCallback(const std::string& name);

    // imgui helper

    void image(
		cocos2d::Texture2D* tex,
		const ImVec2& size,
		const ImVec2& uv0 = ImVec2(0, 0),
		const ImVec2& uv1 = ImVec2(1, 1),
		const ImVec4& tint_col = ImVec4(1, 1, 1, 1),
		const ImVec4& border_col = ImVec4(0, 0, 0, 0));
    void image(
		cocos2d::Sprite* sprite,
		const ImVec2& size,
		const ImVec4& tint_col = ImVec4(1, 1, 1, 1),
		const ImVec4& border_col = ImVec4(0, 0, 0, 0));
	bool imageButton(
		cocos2d::Texture2D* tex,
		const ImVec2& size,
		const ImVec2& uv0 = ImVec2(0, 0),
		const ImVec2& uv1 = ImVec2(1, 1),
		int frame_padding = -1,
		const ImVec4& bg_col = ImVec4(0, 0, 0, 0),
		const ImVec4& tint_col = ImVec4(1, 1, 1, 1));
	bool imageButton(
		cocos2d::Sprite* sprite,
		const ImVec2& size,
		int frame_padding = -1,
		const ImVec4& bg_col = ImVec4(0, 0, 0, 0),
		const ImVec4& tint_col = ImVec4(1, 1, 1, 1));

	std::tuple<ImTextureID, int> useTexture(cocos2d::Texture2D* texture);
	std::tuple<ImTextureID, ImVec2, ImVec2, int> useSprite(cocos2d::Sprite* sprite);

	ImWchar* addGlyphRanges(const std::string& key, const std::vector<ImWchar>& ranges);

private:
    std::unordered_map<std::string, std::function<void()>> _callPiplines;
    std::unordered_map<unsigned int, int> _usedTextureIdMap;
    std::unordered_map<cocos2d::Texture2D*, int> _usedCCTextureIdMap;
    std::unordered_map<cocos2d::Sprite*, int> _usedCCSpriteIdMap;
	// cocos objects should be retained until next frame
    cocos2d::Vector<cocos2d::Texture2D*> _usedCCTexture;
	cocos2d::Vector<cocos2d::Sprite*> _usedCCSprite;

	std::unordered_map<std::string, std::vector<ImWchar>> glyphRanges;
};
