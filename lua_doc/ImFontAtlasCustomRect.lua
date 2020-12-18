--------------------------------
-- @module ImFontAtlasCustomRect
-- @parent_module imgui

---@class imgui.ImFontAtlasCustomRect
local ImFontAtlasCustomRect = {}
imgui.ImFontAtlasCustomRect = ImFontAtlasCustomRect
--------------------------------

--- 
---@return boolean
function ImFontAtlasCustomRect:isPacked()
end

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

--- For custom font glyphs only (ID < 0x110000)
--- Input
---@type number
ImFontAtlasCustomRect.GlyphID = nil

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
---@type imgui.ImFont
ImFontAtlasCustomRect.Font = nil



return nil
