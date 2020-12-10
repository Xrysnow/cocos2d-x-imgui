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
		_instance = new CCIMGUI();
		_instance->init();
		if (_onInit)
			_onInit(_instance);
	}
	return _instance;
}

void CCIMGUI::destroyInstance()
{
	if (_instance)
	{
		delete _instance;
		ImGui_ImplCocos2dx_Shutdown();
		_instance = nullptr;
	}
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
	const auto& rect = sprite->getTextureRect();
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
	if (border_col.w > 0.f)
	{
		tr.m[12] += 1;
		tr.m[13] += 1;
	}
	node->setNodeToParentTransform(tr);
	ImGui::PushID(getCCRefId(node));
	ImGui::Image((ImTextureID)node,
		ImVec2(size.width, size.height), ImVec2(0, 0), ImVec2(1, 1), tint_col, border_col);
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
	if (frame_padding >= 0)
	{
		tr.m[12] += (float)frame_padding;
		tr.m[13] += (float)frame_padding;
	}
	else
	{
		tr.m[12] += ImGui::GetStyle().FramePadding.x;
		tr.m[13] += ImGui::GetStyle().FramePadding.y;
	}
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

void CCIMGUI::setNodeColor(Node* node, const ImVec4& col)
{
	if (node)
	{
		node->setColor({ uint8_t(col.x * 255),uint8_t(col.y * 255),uint8_t(col.z * 255) });
		node->setOpacity(uint8_t(col.w * 255));
	}
}

void CCIMGUI::setNodeColor(Node* node, ImGuiCol col)
{
	if (node && 0 <= col && col < ImGuiCol_COUNT)
		setNodeColor(node, ImGui::GetStyleColorVec4(col));
}

void CCIMGUI::setLabelColor(Label* label, const ImVec4& col)
{
	if (label)
	{
		label->setTextColor(
			{ uint8_t(col.x * 255),uint8_t(col.y * 255),uint8_t(col.z * 255),uint8_t(col.w * 255) });
	}
}

void CCIMGUI::setLabelColor(Label* label, bool disabled)
{
	if (label)
		setLabelColor(label, ImGui::GetStyleColorVec4(disabled ? ImGuiCol_TextDisabled : ImGuiCol_Text));
}

void CCIMGUI::setLabelColor(Label* label, ImGuiCol col)
{
	if (label && 0 <= col && col < ImGuiCol_COUNT)
		setLabelColor(label, ImGui::GetStyleColorVec4(col));
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

void CCIMGUI::mergeFontGlyphs(ImFont* dst, ImFont* src, ImWchar start, ImWchar end)
{
	if (!dst || !src || start > end)
		return;
	for (auto i = start; i <= end; ++i)
	{
		const auto g = src->FindGlyphNoFallback(i);
		if (g)
		{
			dst->AddGlyph(src->ConfigData, (ImWchar)g->Codepoint, g->X0, g->Y0, g->X1, g->Y1, g->U0, g->V0, g->U1, g->V1, g->AdvanceX);
		}
	}
	dst->BuildLookupTable();
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
	// BKDR hash
	constexpr unsigned int seed = 131;
	unsigned int hash = 0;
	for (auto i = 0u; i < sizeof(void*); ++i)
		hash = hash * seed + ((const char*)&p)[i];
	for (auto i = 0u; i < sizeof(int); ++i)
		hash = hash * seed + ((const char*)&id)[i];
	return (int)hash;
}

void CCIMGUI::plotImage(const char* label_id, Texture2D* tex, const ImPlotPoint& bounds_min,
	const ImPlotPoint& bounds_max, const ImVec2& uv0, const ImVec2& uv1, const ImVec4& tint_col)
{
	if (!label_id || !tex)
		return;
	ImGui::PushID(getCCRefId(tex));
	ImPlot::PlotImage(label_id, (ImTextureID)tex, bounds_min, bounds_max, uv0, uv1, tint_col);
	ImGui::PopID();
}

void CCIMGUI::plotImage(const char* label_id, Sprite* sprite, const ImPlotPoint& bounds_min,
	const ImPlotPoint& bounds_max, const ImVec4& tint_col)
{
	if (!label_id || !sprite)
		return;
	ImVec2 uv0, uv1;
	std::tie(uv0, uv1) = getTextureUV(sprite);
	ImGui::PushID(getCCRefId(sprite));
	ImPlot::PlotImage(label_id, (ImTextureID)sprite, bounds_min, bounds_max, uv0, uv1, tint_col);
	ImGui::PopID();
}

#include "imgui_markdown/imgui_markdown.h"

static CCIMGUI::MdLinkCallback ImGuiMarkdownLinkCallback = nullptr;
static CCIMGUI::MdTooltipCallback ImGuiMarkdownTooltipCallback = nullptr;
static CCIMGUI::MdImageCallback ImGuiMarkdownImageCallback = nullptr;
static CCIMGUI::MdFormatCallback ImGuiMarkdownFormatCallback = nullptr;
static ImGui::MarkdownImageData ImGuiMarkdownInvalidImageData = {};

void MarkdownLinkCallback(ImGui::MarkdownLinkCallbackData data)
{
	if (ImGuiMarkdownLinkCallback)
	{
		ImGuiMarkdownLinkCallback(
			{ data.text, (size_t)data.textLength },
			{ data.link, (size_t)data.linkLength },
			data.isImage);
	}
}
void MarkdownTooltipCallback(ImGui::MarkdownTooltipCallbackData data)
{
	if(ImGuiMarkdownTooltipCallback)
	{
		ImGuiMarkdownTooltipCallback(
			{ data.linkData.text, (size_t)data.linkData.textLength },
			{ data.linkData.link, (size_t)data.linkData.linkLength },
			data.linkData.isImage,
			data.linkIcon);
	}
	else
	{
		ImGui::defaultMarkdownTooltipCallback(data);
	}
}
ImGui::MarkdownImageData MarkdownImageCallback(ImGui::MarkdownLinkCallbackData data)
{
	if (!data.isImage || !ImGuiMarkdownImageCallback)
		return ImGuiMarkdownInvalidImageData;
	Sprite* sp; ImVec2 size; ImVec4 tint_col; ImVec4 border_col;
	std::tie(sp, size, tint_col, border_col) = ImGuiMarkdownImageCallback(
		{ data.text, (size_t)data.textLength },
		{ data.link, (size_t)data.linkLength });
	if(!sp || !sp->getTexture())
		return ImGuiMarkdownInvalidImageData;
	auto size_ = size;
	const auto& rect = sp->getTextureRect();
	if (size_.x <= 0.f) size_.x = rect.size.width;
	if (size_.y <= 0.f) size_.y = rect.size.height;
	ImVec2 uv0, uv1;
	std::tie(uv0, uv1) = getTextureUV(sp);
	CCIMGUI::getInstance()->getCCRefId(sp);
	ImGui::MarkdownImageData ret;
	ret.isValid = true;
	ret.useLinkCallback = true;
	ret.user_texture_id = (ImTextureID)sp->getTexture();
	ret.size = size_;
	ret.uv0 = uv0;
	ret.uv1 = uv1;
	ret.tint_col = tint_col;
	ret.border_col = border_col;
	return ret;
}
void MarkdownFormatCallback(const ImGui::MarkdownFormatInfo& markdownFormatInfo, bool start)
{
	if(ImGuiMarkdownFormatCallback)
	{
		ImGuiMarkdownFormatCallback(
			int(markdownFormatInfo.type), markdownFormatInfo.level, markdownFormatInfo.itemHovered, start);
	}
	else
	{
		ImGui::defaultMarkdownFormatCallback(markdownFormatInfo, start);
	}
}

struct _ImGuiMarkdownConfig
{
	ImGui::MarkdownConfig config;
	_ImGuiMarkdownConfig()
	{
		config.linkCallback = MarkdownLinkCallback;
		config.imageCallback = MarkdownImageCallback;
		config.formatCallback = MarkdownFormatCallback;
		config.tooltipCallback = MarkdownTooltipCallback;
	}
};
static ImGui::MarkdownConfig& GetMarkdownConfig()
{
	static _ImGuiMarkdownConfig cfg;
	return cfg.config;
}
static std::string ImGuiMarkdownLinkIcon;

void CCIMGUI::setMarkdownLinkCallback(const MdLinkCallback& f)
{
	ImGuiMarkdownLinkCallback = f;
}

void CCIMGUI::setMarkdownTooltipCallback(const MdTooltipCallback& f)
{
	ImGuiMarkdownTooltipCallback = f;
}

void CCIMGUI::setMarkdownImageCallback(const MdImageCallback& f)
{
	ImGuiMarkdownImageCallback = f;
}

void CCIMGUI::setMarkdownFormatCallback(const MdFormatCallback& f)
{
	ImGuiMarkdownFormatCallback = f;
}

void CCIMGUI::setMarkdownFont(int index, ImFont* font, bool seperator)
{
	if (index < 0 || index >= ImGui::MarkdownConfig::NUMHEADINGS)
		return;
	GetMarkdownConfig().headingFormats[index] = { font,seperator };
}

void CCIMGUI::setMarkdownLinkIcon(const std::string& icon)
{
	ImGuiMarkdownLinkIcon = icon;
	GetMarkdownConfig().linkIcon = ImGuiMarkdownLinkIcon.c_str();
}

void CCIMGUI::markdown(const std::string& content)
{
	ImGui::Markdown(content.c_str(), content.size(), GetMarkdownConfig());
}
