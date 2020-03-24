#include "CCIMGUI.h"
#include "imgui_impl_cocos2dx.h"

using namespace cocos2d;
static CCIMGUI* _instance = nullptr;
std::function<void(CCIMGUI*)> CCIMGUI::_onInit;

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
		if (_onInit)
			_onInit(_instance);
	}
	return _instance;
}

void CCIMGUI::setOnInit(const std::function<void(CCIMGUI*)>& callBack)
{
	_onInit = callBack;
}

void CCIMGUI::update()
{
	// clear things from last frame
	usedCCRefIdMap.clear();
	usedCCRef.clear();
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

static std::tuple<ImVec2, ImVec2> getTextureUV(Sprite* sp)
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

void CCIMGUI::image(Texture2D* tex, const ImVec2& size, const ImVec2& uv0, const ImVec2& uv1,
	const ImVec4& tint_col, const ImVec4& border_col)
{
	if (!tex)
		return;
	auto size_ = size;
	if (size_.x <= 0.f) size_.x = tex->getPixelsWide();
	if (size_.y <= 0.f) size_.y = tex->getPixelsHigh();
	ImGui::PushID(getCCRefId(tex));
	ImGui::Image((ImTextureID)tex, size_, uv0, uv1, tint_col, border_col);
	ImGui::PopID();
}

void CCIMGUI::image(Sprite* sprite, const ImVec2& size, const ImVec4& tint_col, const ImVec4& border_col)
{
	if (!sprite || !sprite->getTexture())
		return;
	auto size_ = size;
	const auto rect = sprite->getTextureRect();
	if (size_.x <= 0.f) size_.x = rect.size.width;
	if (size_.y <= 0.f) size_.y = rect.size.height;
	ImVec2 uv0, uv1;
	std::tie(uv0, uv1) = getTextureUV(sprite);
	ImGui::PushID(getCCRefId(sprite));
	ImGui::Image((ImTextureID)sprite->getTexture(), size_, uv0, uv1, tint_col, border_col);
	ImGui::PopID();
}

bool CCIMGUI::imageButton(Texture2D* tex, const ImVec2& size, const ImVec2& uv0, const ImVec2& uv1,
	int frame_padding, const ImVec4& bg_col, const ImVec4& tint_col)
{
	if (!tex)
		return false;
	auto size_ = size;
	if (size_.x <= 0.f) size_.x = tex->getPixelsWide();
	if (size_.y <= 0.f) size_.y = tex->getPixelsHigh();
	ImGui::PushID(getCCRefId(tex));
	const auto ret = ImGui::ImageButton((ImTextureID)tex,
		size_, uv0, uv1, frame_padding, bg_col, tint_col);
	ImGui::PopID();
	return ret;
}

bool CCIMGUI::imageButton(Sprite* sprite, const ImVec2& size, int frame_padding, const ImVec4& bg_col,
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
	ImGui::PushID(getCCRefId(sprite));
	const auto ret = ImGui::ImageButton((ImTextureID)sprite->getTexture(),
		size_, uv0, uv1, frame_padding, bg_col, tint_col);
	ImGui::PopID();
	return ret;
}

void CCIMGUI::node(Node* node, const ImVec4& tint_col, const ImVec4& border_col)
{
	if (!node)
		return;
	const auto size = node->getContentSize();
	const auto pos = ImGui::GetCursorScreenPos();
	Mat4 tr;
	tr.m[5] = -1;
	tr.m[12] = pos.x;
	tr.m[13] = pos.y + size.height;
	node->setNodeToParentTransform(tr);
	ImGui::PushID(getCCRefId(node));
	ImGui::Image((ImTextureID)node, ImVec2(size.width, size.height), ImVec2(0, 0), ImVec2(1, 1), tint_col, border_col);
	ImGui::PopID();
}

bool CCIMGUI::nodeButton(Node* node, int frame_padding, const ImVec4& bg_col, const ImVec4& tint_col)
{
	if (!node)
		return false;
	const auto size = node->getContentSize();
	const auto pos = ImGui::GetCursorScreenPos();
	Mat4 tr;
	tr.m[5] = -1;
	tr.m[12] = pos.x;
	tr.m[13] = pos.y + size.height;
	node->setNodeToParentTransform(tr);
	ImGui::PushID(getCCRefId(node));
	const auto ret = ImGui::ImageButton((ImTextureID)node,
		ImVec2(size.width, size.height), ImVec2(0, 0), ImVec2(1, 1), frame_padding, bg_col, tint_col);
	ImGui::PopID();
	return ret;
}

std::tuple<ImTextureID, int> CCIMGUI::useTexture(Texture2D* texture)
{
	if (!texture)
		return { nullptr,0 };
	return { (ImTextureID)texture,getCCRefId(texture) };
}

std::tuple<ImTextureID, ImVec2, ImVec2, int> CCIMGUI::useSprite(Sprite* sprite)
{
	if (!sprite || !sprite->getTexture())
		return { nullptr,{},{},0 };
	ImVec2 uv0, uv1;
	std::tie(uv0, uv1) = getTextureUV(sprite);
	return { (ImTextureID)sprite->getTexture(),uv0,uv1,getCCRefId(sprite) };
}

std::tuple<ImTextureID, ImVec2, ImVec2, int> CCIMGUI::useNode(Node* node, const ImVec2& pos)
{
	if (!node)
		return { nullptr,{},{},0 };
	const auto size = node->getContentSize();
	Mat4 tr;
	tr.m[5] = -1;
	tr.m[12] = pos.x;
	tr.m[13] = pos.y + size.height;
	node->setNodeToParentTransform(tr);
	return { (ImTextureID)node,pos,ImVec2(pos.x + size.width,pos.y + size.height),getCCRefId(node) };
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

int CCIMGUI::getCCRefId(Ref* p)
{
	int id = 0;
	const auto it = usedCCRefIdMap.find(p);
	if (it == usedCCRefIdMap.end())
	{
		usedCCRefIdMap[p] = 0;
		usedCCRef.pushBack(p);
	}
	else
		id = ++it->second;
	return id;
}
