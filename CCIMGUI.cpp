#include "CCIMGUI.h"
#include "imgui_impl_cocos2dx.h"

using namespace cocos2d;
static CCIMGUI* _instance = nullptr;

void CCIMGUI::init()
{
	ImGui_ImplCocos2dx_Init(true);
}

CCIMGUI* CCIMGUI::getInstance()
{
	if(_instance == nullptr)
	{
		_instance = new (std::nothrow) CCIMGUI();
		_instance->init();
	}
	return _instance;
}

void CCIMGUI::update()
{
	// clear things from last frame
    _usedTextureIdMap.clear();
	_usedCCTextureIdMap.clear();
	_usedCCSpriteIdMap.clear();
	_usedCCTexture.clear();
	_usedCCSprite.clear();
	// drawing commands
	auto iter = _callPiplines.begin();
	for (; iter != _callPiplines.end(); ++iter)
	{
		iter->second();
	}
	// commands will be processed after update
}

void CCIMGUI::addCallback(const std::function<void()>& callBack, const std::string& name)
{
	_callPiplines[name] = callBack;
}

void CCIMGUI::removeCallback(const std::string& name)
{
	const auto iter = _callPiplines.find(name);
	if (iter != _callPiplines.end())
		_callPiplines.erase(iter);
}

static std::tuple<ImVec2, ImVec2> getTextureUV(cocos2d::Sprite* sp)
{
	ImVec2 uv0, uv1;
	if (!sp || !sp->getTexture())
		return { uv0,uv1 };
	const auto rect = sp->getTextureRect();
	const auto tex = sp->getTexture();
	const float atlasWidth = (float)tex->getPixelsWide();
	const float atlasHeight = (float)tex->getPixelsHigh();
	uv0.x = rect.origin.x / atlasWidth;
	uv0.y = rect.origin.y / atlasHeight;
	uv1.x = (rect.origin.x + rect.size.width) / atlasWidth;
	uv1.y = (rect.origin.y + rect.size.height) / atlasHeight;
	return { uv0,uv1 };
}

void CCIMGUI::image(cocos2d::Texture2D* tex, const ImVec2& size, const ImVec2& uv0, const ImVec2& uv1, const ImVec4& tint_col,
	const ImVec4& border_col)
{
	if (!tex)
		return;
	auto size_ = size;
	if (size_.x <= 0.f) size_.x = tex->getPixelsWide();
	if (size_.y <= 0.f) size_.y = tex->getPixelsHigh();
	int id = 0;
	const auto it = _usedCCTextureIdMap.find(tex);
	if (it == _usedCCTextureIdMap.end())
	{
		_usedCCTextureIdMap[tex] = 0;
		_usedCCTexture.pushBack(tex);
	}
	else
		id = ++it->second;
	ImGui::PushID(id);
	ImGui::Image((ImTextureID)tex->getName(), size_, uv0, uv1, tint_col, border_col);
	ImGui::PopID();
}

void CCIMGUI::image(cocos2d::Sprite* sprite, const ImVec2& size, const ImVec4& tint_col, const ImVec4& border_col)
{
	if (!sprite || !sprite->getTexture())
		return;
	auto size_ = size;
	const auto rect = sprite->getTextureRect();
	if (size_.x <= 0.f) size_.x = rect.size.width;
	if (size_.y <= 0.f) size_.y = rect.size.height;
	ImVec2 uv0, uv1;
	std::tie(uv0, uv1) = getTextureUV(sprite);
	int id = 0;
	const auto it = _usedCCSpriteIdMap.find(sprite);
	if (it == _usedCCSpriteIdMap.end())
	{
		_usedCCSpriteIdMap[sprite] = 0;
		_usedCCSprite.pushBack(sprite);
	}
	else
		id = ++it->second;
	ImGui::PushID(id);
	ImGui::Image((ImTextureID)sprite->getTexture()->getName(), size_, uv0, uv1, tint_col, border_col);
	ImGui::PopID();
}

bool CCIMGUI::imageButton(cocos2d::Texture2D* tex, const ImVec2& size, const ImVec2& uv0, const ImVec2& uv1,
	int frame_padding, const ImVec4& bg_col, const ImVec4& tint_col)
{
	if (!tex)
		return false;
	auto size_ = size;
	if (size_.x <= 0.f) size_.x = tex->getPixelsWide();
	if (size_.y <= 0.f) size_.y = tex->getPixelsHigh();
	int id = 0;
	const auto it = _usedCCTextureIdMap.find(tex);
	if (it == _usedCCTextureIdMap.end())
	{
		_usedCCTextureIdMap[tex] = 0;
		_usedCCTexture.pushBack(tex);
	}
	else
		id = ++it->second;
	ImGui::PushID(id);
	const auto ret = ImGui::ImageButton((ImTextureID)tex->getName(),
		size_, uv0, uv1, frame_padding, bg_col, tint_col);
	ImGui::PopID();
	return ret;
}

bool CCIMGUI::imageButton(cocos2d::Sprite* sprite, const ImVec2& size, int frame_padding, const ImVec4& bg_col,
	const ImVec4& tint_col)
{
	if (!sprite || !sprite->getTexture())
		return false;
	auto size_ = size;
	const auto rect = sprite->getTextureRect();
	if (size_.x <= 0.f) size_.x = rect.size.width;
	if (size_.y <= 0.f) size_.y = rect.size.height;
	ImVec2 uv0, uv1;
	std::tie(uv0, uv1) = getTextureUV(sprite);
	int id = 0;
	const auto it = _usedCCSpriteIdMap.find(sprite);
	if (it == _usedCCSpriteIdMap.end())
	{
		_usedCCSpriteIdMap[sprite] = 0;
		_usedCCSprite.pushBack(sprite);
	}
	else
		id = ++it->second;
	ImGui::PushID(id);
	const auto ret = ImGui::ImageButton((ImTextureID)sprite->getTexture()->getName(),
		size_, uv0, uv1, frame_padding, bg_col, tint_col);
	ImGui::PopID();
	return ret;
}

std::tuple<ImTextureID, int> CCIMGUI::useTexture(cocos2d::Texture2D* texture)
{
	if (!texture)
		return { nullptr,0 };
	int id = 0;
	const auto it = _usedCCTextureIdMap.find(texture);
	if (it == _usedCCTextureIdMap.end())
	{
		_usedCCTextureIdMap[texture] = 0;
		_usedCCTexture.pushBack(texture);
	}
	else
		id = ++it->second;
	return { (ImTextureID)texture->getName(),id };
}

std::tuple<ImTextureID, ImVec2, ImVec2, int> CCIMGUI::useSprite(cocos2d::Sprite* sprite)
{
	if (!sprite || !sprite->getTexture())
		return { nullptr,{},{},0 };
	int id = 0;
	const auto it = _usedCCSpriteIdMap.find(sprite);
	if (it == _usedCCSpriteIdMap.end())
	{
		_usedCCSpriteIdMap[sprite] = 0;
		_usedCCSprite.pushBack(sprite);
	}
	else
		id = ++it->second;
	ImVec2 uv0, uv1;
	std::tie(uv0, uv1) = getTextureUV(sprite);
	return { (ImTextureID)sprite->getTexture()->getName(),uv0,uv1,id };
}

ImWchar* CCIMGUI::addGlyphRanges(const std::string& key, const std::vector<ImWchar>& ranges)
{
	auto it = glyphRanges.find(key);
	// the pointer must be persistant, do not replace
	if (it != glyphRanges.end())
		return it->second.data();
	glyphRanges[key] = ranges;
	if (ranges.empty())
		glyphRanges[key].push_back(0);
	return glyphRanges[key].data();
}
