
--------------------------------
-- @module ImFontAtlasCustomRect
-- @parent_module imgui

---@class imgui.ImFontAtlasCustomRect
local ImFontAtlasCustomRect = {}
imgui.ImFontAtlasCustomRect = ImFontAtlasCustomRect
--------------------------------

--- 
---@return boolean
function ImFontAtlasCustomRect:IsPacked()
end

--------------------------------

--- User ID. Use <0x10000 to map into a font glyph, >=0x10000 for other/internal/custom texture data.
--- Input
---@type number
ImFontAtlasCustomRect.ID = nil

--------------------------------

--- Desired rectangle dimension
--- Input
---@type number
ImFontAtlasCustomRect.Width = nil

--------------------------------

--- Desired rectangle dimension
--- Input
---@type number
ImFontAtlasCustomRect.Height = nil

--------------------------------

--- Packed position in Atlas
--- Output
---@type number
ImFontAtlasCustomRect.X = nil

--------------------------------

--- Packed position in Atlas
--- Output
---@type number
ImFontAtlasCustomRect.Y = nil

--------------------------------

--- For custom font glyphs only (ID<0x10000): glyph xadvance
--- Input
---@type number
ImFontAtlasCustomRect.GlyphAdvanceX = nil

--------------------------------

--- For custom font glyphs only (ID<0x10000): glyph display offset
--- Input
---@type ImVec2
ImFontAtlasCustomRect.GlyphOffset = nil

--------------------------------

--- For custom font glyphs only (ID<0x10000): target font
--- Input
---@type ImFont
ImFontAtlasCustomRect.Font = nil


return nil
