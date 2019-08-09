
--------------------------------
-- @module CustomRect
-- @parent_module imgui

---@class imgui.CustomRect
local CustomRect = {}
imgui.CustomRect = CustomRect
--------------------------------

--- 
---@return boolean
function CustomRect:IsPacked()
end

--------------------------------

--- User ID. Use <0x10000 to map into a font glyph, >=0x10000 for other/internal/custom texture data.
--- Input
---@type number
CustomRect.ID = nil

--------------------------------

--- Desired rectangle dimension
--- Input
---@type number
CustomRect.Width = nil

--------------------------------

--- Desired rectangle dimension
--- Input
---@type number
CustomRect.Height = nil

--------------------------------

--- Packed position in Atlas
--- Output
---@type number
CustomRect.X = nil

--------------------------------

--- Packed position in Atlas
--- Output
---@type number
CustomRect.Y = nil

--------------------------------

--- For custom font glyphs only (ID<0x10000): glyph xadvance
--- Input
---@type number
CustomRect.GlyphAdvanceX = nil

--------------------------------

--- For custom font glyphs only (ID<0x10000): glyph display offset
--- Input
---@type ImVec2
CustomRect.GlyphOffset = nil

--------------------------------

--- For custom font glyphs only (ID<0x10000): target font
--- Input
---@type ImFont
CustomRect.Font = nil


return nil
