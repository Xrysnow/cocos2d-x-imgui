------------------------------
--- Tag: imguiFont
--- Date: 2023-03-10
------------------------------


---@class imgui.ImFontConfig
local ImFontConfig = {}
imgui.ImFontConfig = ImFontConfig

--- 
--- Explicitly specify unicode codepoint of ellipsis character. When fonts are being merged first specified ellipsis will be used.
--- -1
---@type ImWchar (ImWchar)
ImFontConfig.EllipsisChar = nil

--- 
--- Settings for custom font builder. THIS IS BUILDER IMPLEMENTATION DEPENDENT. Leave as zero if unsure.
--- 0
---@type number (unsigned int)
ImFontConfig.FontBuilderFlags = nil

--- 
--- TTFOTF data ownership taken by the container ImFontAtlas (will delete memory itself).
--- true
---@type boolean (bool)
ImFontConfig.FontDataOwnedByAtlas = nil

--- 
--- TTFOTF data size
---@type number (int)
ImFontConfig.FontDataSize = nil

--- 
--- Index of font within TTFOTF file
--- 0
---@type number (int)
ImFontConfig.FontNo = nil

--- 
--- Extra spacing (in pixels) between glyphs. Only X axis is supported for now.
--- 0, 0
---@type ImVec2 (ImVec2)
ImFontConfig.GlyphExtraSpacing = nil

--- 
--- Maximum AdvanceX for glyphs
--- FLT_MAX
---@type number (float)
ImFontConfig.GlyphMaxAdvanceX = nil

--- 
--- Minimum AdvanceX for glyphs, set Min to align font icons, set both MinMax to enforce mono-space font
--- 0
---@type number (float)
ImFontConfig.GlyphMinAdvanceX = nil

--- 
--- Offset all glyphs from this font input.
--- 0, 0
---@type ImVec2 (ImVec2)
ImFontConfig.GlyphOffset = nil

--- 
--- Merge into previous ImFont, so you can combine multiple inputs font into one ImFont (e.g. ASCII font + icons + Japanese glyphs). You may want to use GlyphOffset.y when merge font of different heights.
--- false
---@type boolean (bool)
ImFontConfig.MergeMode = nil

--- 
--- Rasterize at higher quality for sub-pixel positioning. Note the difference between 2 and 3 is minimal so you can reduce this to 2 to save memory. Read https:github.comnothingsstbblobmastertestsoversampleREADME.md for details.
--- 3
---@type number (int)
ImFontConfig.OversampleH = nil

--- 
--- Rasterize at higher quality for sub-pixel positioning. This is not really useful as we don't use sub-pixel positions on the Y axis.
--- 1
---@type number (int)
ImFontConfig.OversampleV = nil

--- 
--- Align every glyph to pixel boundary. Useful e.g. if you are merging a non-pixel aligned font with the default font. If enabled, you can set OversampleHV to 1.
--- false
---@type boolean (bool)
ImFontConfig.PixelSnapH = nil

--- 
--- Brighten (>1.0f) or darken (<1.0f) font output. Brightening small fonts may be a good workaround to make them more readable.
--- 1.0f
---@type number (float)
ImFontConfig.RasterizerMultiply = nil

--- 
--- Size in pixels for rasterizer (more or less maps to the resulting font height).
---@type number (float)
ImFontConfig.SizePixels = nil


---@class imgui.ImFontGlyph
local ImFontGlyph = {}
imgui.ImFontGlyph = ImFontGlyph

--- Distance to next character (= data from font + ImFontConfig::GlyphExtraSpacing.x baked in)
---@type number (float)
ImFontGlyph.AdvanceX = nil

--- 0x0000..0x10FFFF
---@type number (unsigned int)
ImFontGlyph.Codepoint = nil

--- Flag to indicate glyph is colored and should generally ignore tinting (make it usable with no shift on little-endian as this is used in loops)
---@type number (unsigned int)
ImFontGlyph.Colored = nil

--- Texture coordinates
---@type number (float)
ImFontGlyph.U0 = nil

--- Texture coordinates
---@type number (float)
ImFontGlyph.U1 = nil

--- Texture coordinates
---@type number (float)
ImFontGlyph.V0 = nil

--- Texture coordinates
---@type number (float)
ImFontGlyph.V1 = nil

--- Flag to indicate glyph has no visible pixels (e.g. space). Allow early out when rendering.
---@type number (unsigned int)
ImFontGlyph.Visible = nil

--- Glyph corners
---@type number (float)
ImFontGlyph.X0 = nil

--- Glyph corners
---@type number (float)
ImFontGlyph.X1 = nil

--- Glyph corners
---@type number (float)
ImFontGlyph.Y0 = nil

--- Glyph corners
---@type number (float)
ImFontGlyph.Y1 = nil


---@class imgui.ImFontAtlasCustomRect
local ImFontAtlasCustomRect = {}
imgui.ImFontAtlasCustomRect = ImFontAtlasCustomRect

--- 
--- For custom font glyphs only: target font
--- Input
---@type ImFont (ImFont*)
ImFontAtlasCustomRect.Font = nil

--- 
--- For custom font glyphs only: glyph xadvance
--- Input
---@type number (float)
ImFontAtlasCustomRect.GlyphAdvanceX = nil

--- 
--- For custom font glyphs only (ID < 0x110000)
--- Input
---@type number (unsigned int)
ImFontAtlasCustomRect.GlyphID = nil

--- 
--- For custom font glyphs only: glyph display offset
--- Input
---@type ImVec2 (ImVec2)
ImFontAtlasCustomRect.GlyphOffset = nil

--- 
--- Desired rectangle dimension
--- Input
---@type number (unsigned short)
ImFontAtlasCustomRect.Height = nil

--- 
--- Desired rectangle dimension
--- Input
---@type number (unsigned short)
ImFontAtlasCustomRect.Width = nil

--- 
--- Packed position in Atlas
--- Output
---@type number (unsigned short)
ImFontAtlasCustomRect.X = nil

--- 
--- Packed position in Atlas
--- Output
---@type number (unsigned short)
ImFontAtlasCustomRect.Y = nil

---@return boolean @(bool)
function ImFontAtlasCustomRect:isPacked()
end

local ImFontAtlasFlags = {
	None = 0,
	NoPowerOfTwoHeight = 1,
	NoMouseCursors = 2,
	NoBakedLines = 4,
}
---
---@class imgui.ImFontAtlasFlags
imgui.ImFontAtlasFlags = ImFontAtlasFlags


---@class imgui.ImFontAtlas
local ImFontAtlas = {}
imgui.ImFontAtlas = ImFontAtlas

--- Build flags (see ImFontAtlasFlags_)
---@type ImFontAtlasFlags (ImFontAtlasFlags)
ImFontAtlas.Flags = nil

--- Shared flags (for all fonts) for custom font builder. THIS IS BUILD IMPLEMENTATION DEPENDENT. Per-font override is also available in ImFontConfig.
---@type number (unsigned int)
ImFontAtlas.FontBuilderFlags = nil

--- Marked as Locked by ImGui::NewFrame() so attempt to modify the atlas will assert.
---@type boolean (bool)
ImFontAtlas.Locked = nil

--- Custom texture rectangle ID for baked anti-aliased lines
---@type number (int)
ImFontAtlas.PackIdLines = nil

--- Custom texture rectangle ID for white pixel and mouse cursors
---@type number (int)
ImFontAtlas.PackIdMouseCursors = nil

--- Texture width desired by user before Build(). Must be a power-of-two. If have many glyphs your graphics API have texture size restrictions you may want to increase texture width to decrease height.
---@type number (int)
ImFontAtlas.TexDesiredWidth = nil

--- Padding between glyphs within texture in pixels. Defaults to 1. If your rendering method doesn't rely on bilinear filtering you may set this to 0 (will also need to set AntiAliasedLinesUseTex = false).
---@type number (int)
ImFontAtlas.TexGlyphPadding = nil

--- Texture height calculated during Build().
---@type number (int)
ImFontAtlas.TexHeight = nil

--- Tell whether our texture data is known to use colors (rather than just alpha channel), in order to help backend select a format.
---@type boolean (bool)
ImFontAtlas.TexPixelsUseColors = nil

--- Set when texture was built matching current font input
---@type boolean (bool)
ImFontAtlas.TexReady = nil

--- = (1.0fTexWidth, 1.0fTexHeight)
---@type ImVec2 (ImVec2)
ImFontAtlas.TexUvScale = nil

--- Texture coordinates to a white pixel
---@type ImVec2 (ImVec2)
ImFontAtlas.TexUvWhitePixel = nil

--- Texture width calculated during Build().
---@type number (int)
ImFontAtlas.TexWidth = nil

---@param font ImFont @(ImFont*)
---@param id number @(ImWchar)
---@param width number @(int)
---@param height number @(int)
---@param advance_x number @(float)
---@param offset ImVec2 @(ImVec2)
---@return number @(int)
function ImFontAtlas:addCustomRectFontGlyph(font, id, width, height, advance_x, offset)
end

---@param font ImFont @(ImFont*)
---@param id number @(ImWchar)
---@param width number @(int)
---@param height number @(int)
---@param advance_x number @(float)
---@return number @(int)
function ImFontAtlas:addCustomRectFontGlyph(font, id, width, height, advance_x)
end

---@param width number @(int)
---@param height number @(int)
---@return number @(int)
function ImFontAtlas:addCustomRectRegular(width, height)
end

--- Build pixels data. This is called automatically for you by the GetTexData*** functions.
---@return boolean @(bool)
function ImFontAtlas:build()
end

--- Clear all input and output.
---@return nil @(void)
function ImFontAtlas:clear()
end

--- Clear output font data (glyphs storage, UV coordinates).
---@return nil @(void)
function ImFontAtlas:clearFonts()
end

--- Clear input data (all ImFontConfig structures including sizes, TTF data, glyph ranges, etc.) = all the data used to build the texture and fonts.
---@return nil @(void)
function ImFontAtlas:clearInputData()
end

--- Clear output texture data (CPU side). Saves RAM once the texture has been copied to graphics memory.
---@return nil @(void)
function ImFontAtlas:clearTexData()
end

---@param index number @(int)
---@return ImFontAtlasCustomRect @(ImFontAtlasCustomRect*)
function ImFontAtlas:getCustomRectByIndex(index)
end

--- Bit ambiguous: used to detect when user didn't build texture but effectively we should check TexID != 0 except that would be backend dependent...
---@return boolean @(bool)
function ImFontAtlas:isBuilt()
end

---@param id void  @(ImTextureID)
---@return nil @(void)
function ImFontAtlas:setTexID(id)
end


---@class imgui.ImFont
local ImFont = {}
imgui.ImFont = ImFont

--- 
--- Ascent: distance from top to bottom of e.g. 'A' [0..FontSize]
--- out
--- 4+4
---@type number (float)
ImFont.Ascent = nil

--- 
--- Number of ImFontConfig involved in creating this font. Bigger than 1 when merging multiple font sources into one ImFont.
--- ~ 1
--- in
--- 2
---@type number (short)
ImFont.ConfigDataCount = nil

--- 
--- What we has been loaded into
--- out
--- 4-8
---@type ImFontAtlas (ImFontAtlas*)
ImFont.ContainerAtlas = nil

--- 
--- Ascent: distance from top to bottom of e.g. 'A' [0..FontSize]
--- out
--- 4+4
---@type number (float)
ImFont.Descent = nil

--- 
--- out
--- 1
---@type boolean (bool)
ImFont.DirtyLookupTables = nil

--- 
--- Character used for ellipsis rendering (if a single '...' character isn't found)
--- = '.'
--- out
--- 2
---@type ImWchar (ImWchar)
ImFont.DotChar = nil

--- 
--- Character used for ellipsis rendering.
--- = '...'
--- out
--- 2
---@type ImWchar (ImWchar)
ImFont.EllipsisChar = nil

--- 
--- = FallbackGlyph->AdvanceX
--- out
--- 4
---@type number (float)
ImFont.FallbackAdvanceX = nil

--- 
--- Character used if a glyph isn't found.
--- = FFFD'?'
--- out
--- 2
---@type ImWchar (ImWchar)
ImFont.FallbackChar = nil

--- 
--- = FindGlyph(FontFallbackChar)
--- out
--- 4-8
---@type ImFontGlyph (const ImFontGlyph*)
ImFont.FallbackGlyph = nil

--- 
--- Height of charactersline, set during loading (don't change after loading)
--- in
--- 4
---@type number (float)
ImFont.FontSize = nil

--- 
--- Total surface in pixels to get an idea of the font rasterizationtexture cost (not exact, we approximate the cost of padding between glyphs)
--- out
--- 4
---@type number (int)
ImFont.MetricsTotalSurface = nil

--- 
--- Base font scale, multiplied by the per-window font scale which you can adjust with SetWindowFontScale()
--- = 1.f
--- in
--- 4
---@type number (float)
ImFont.Scale = nil

---@param c number @(ImWchar)
---@return ImFontGlyph @(const ImFontGlyph*)
function ImFont:findGlyph(c)
end

---@param c number @(ImWchar)
---@return ImFontGlyph @(const ImFontGlyph*)
function ImFont:findGlyphNoFallback(c)
end

---@param c number @(ImWchar)
---@return number @(float)
function ImFont:getCharAdvance(c)
end

---@return string @(const char*)
function ImFont:getDebugName()
end

---@return boolean @(bool)
function ImFont:isLoaded()
end

