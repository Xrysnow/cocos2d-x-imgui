--------------------------------
-- @module ImFontGlyph
-- @parent_module imgui

---@class imgui.ImFontGlyph
local ImFontGlyph = {}
imgui.ImFontGlyph = ImFontGlyph
--------------------------------

--- Flag to indicate glyph is colored and should generally ignore tinting (make it usable with no shift on little-endian as this is used in loops)
---@type number
ImFontGlyph.Colored = nil

--------------------------------

--- 0x0000..0x10FFFF
---@type number
ImFontGlyph.Codepoint = nil

--------------------------------

--- Flag to indicate glyph has no visible pixels (e.g. space). Allow early out when rendering.
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
