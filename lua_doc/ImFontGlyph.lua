--------------------------------
-- @module ImFontGlyph
-- @parent_module imgui

---@class imgui.ImFontGlyph
local ImFontGlyph = {}
imgui.ImFontGlyph = ImFontGlyph
--------------------------------

--- 0x0000..0xFFFF
---@type number
ImFontGlyph.Codepoint = nil

--------------------------------

--- Flag to allow early out when rendering
---@type number
ImFontGlyph.Visible = nil

--------------------------------

--- Distance to next character (= data from font + ImFontConfig::GlyphExtraSpacing.x baked in)
---@type number
ImFontGlyph.AdvanceX = nil

--------------------------------

--- Glyph corners
---@type number
ImFontGlyph.X0 = nil

--------------------------------

--- Glyph corners
---@type number
ImFontGlyph.Y0 = nil

--------------------------------

--- Glyph corners
---@type number
ImFontGlyph.X1 = nil

--------------------------------

--- Glyph corners
---@type number
ImFontGlyph.Y1 = nil

--------------------------------

--- Texture coordinates
---@type number
ImFontGlyph.U0 = nil

--------------------------------

--- Texture coordinates
---@type number
ImFontGlyph.V0 = nil

--------------------------------

--- Texture coordinates
---@type number
ImFontGlyph.U1 = nil

--------------------------------

--- Texture coordinates
---@type number
ImFontGlyph.V1 = nil



return nil
