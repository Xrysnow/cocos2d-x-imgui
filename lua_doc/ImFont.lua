
--------------------------------
-- @module ImFont
-- @parent_module imgui

---@class imgui.ImFont
local ImFont = {}
imgui.ImFont = ImFont
--------------------------------

--- 
---@param c number
---@return imgui.ImFontGlyph
function ImFont:findGlyph(c)
end

--------------------------------

--- 
---@param c number
---@return imgui.ImFontGlyph
function ImFont:findGlyphNoFallback(c)
end

--------------------------------

--- 
---@param c number
---@return number
function ImFont:getCharAdvance(c)
end

--------------------------------

--- 'max_width' stops rendering after a certain width (could be turned into a 2d size). FLT_MAX to disable.
---@return string
function ImFont:getDebugName()
end

--------------------------------

--- 
---@return boolean
function ImFont:isLoaded()
end

--------------------------------

--- = FallbackGlyph->AdvanceX
--- out
--- 4
---@type number
ImFont.FallbackAdvanceX = nil

--------------------------------

--- Height of characters/line, set during loading (don't change after loading)
--- in
--- 4
---@type number
ImFont.FontSize = nil

--------------------------------

--- = FindGlyph(FontFallbackChar)
--- out
--- 4-8
---@type imgui.ImFontGlyph
ImFont.FallbackGlyph = nil

--------------------------------

--- What we has been loaded into
--- out
--- 4-8
---@type imgui.ImFontAtlas
ImFont.ContainerAtlas = nil

--------------------------------

--- Pointer within ContainerAtlas->ConfigData
--- in
--- 4-8
---@type imgui.ImFontConfig
ImFont.ConfigData = nil

--------------------------------

--- Number of ImFontConfig involved in creating this font. Bigger than 1 when merging multiple font sources into one ImFont.
--- ~ 1        
--- in
--- 2
---@type number
ImFont.ConfigDataCount = nil

--------------------------------

--- Replacement glyph if one isn't found. Only set via SetFallbackChar()
--- = '?'      
--- in
--- 2
---@type number
ImFont.FallbackChar = nil

--------------------------------

--- Explicitly specify unicode codepoint of ellipsis character. When fonts are being merged first specified ellipsis will be used.
--- -1
---@type number
ImFont.EllipsisChar = nil

--------------------------------

--- out
--- 1
---@type boolean
ImFont.DirtyLookupTables = nil

--------------------------------

--- Base font scale, multiplied by the per-window font scale which you can adjust with SetWindowFontScale()
--- = 1.f      
--- in
--- 4
---@type number
ImFont.Scale = nil

--------------------------------

--- Ascent: distance from top to bottom of e.g. 'A' [0..FontSize]
--- out
--- 4+4
---@type number
ImFont.Ascent = nil

--------------------------------

--- Ascent: distance from top to bottom of e.g. 'A' [0..FontSize]
--- out
--- 4+4
---@type number
ImFont.Descent = nil

--------------------------------

--- Total surface in pixels to get an idea of the font rasterization/texture cost (not exact, we approximate the cost of padding between glyphs)
--- out
--- 4
---@type number
ImFont.MetricsTotalSurface = nil



return nil
