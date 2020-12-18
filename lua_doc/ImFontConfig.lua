--------------------------------
-- @module ImFontConfig
-- @parent_module imgui

---@class imgui.ImFontConfig
local ImFontConfig = {}
imgui.ImFontConfig = ImFontConfig
--------------------------------

--- TTF/OTF data size
---@type number
ImFontConfig.FontDataSize = nil

--------------------------------

--- TTF/OTF data ownership taken by the container ImFontAtlas (will delete memory itself).
--- true
---@type boolean
ImFontConfig.FontDataOwnedByAtlas = nil

--------------------------------

--- Index of font within TTF/OTF file
--- 0
---@type number
ImFontConfig.FontNo = nil

--------------------------------

--- Size in pixels for rasterizer (more or less maps to the resulting font height).
---@type number
ImFontConfig.SizePixels = nil

--------------------------------

--- Rasterize at higher quality for sub-pixel positioning. Read https:github.com/nothings/stb/blob/master/tests/oversample/README.md for details.
--- 3
---@type number
ImFontConfig.OversampleH = nil

--------------------------------

--- Rasterize at higher quality for sub-pixel positioning. We don't use sub-pixel positions on the Y axis.
--- 1
---@type number
ImFontConfig.OversampleV = nil

--------------------------------

--- Align every glyph to pixel boundary. Useful e.g. if you are merging a non-pixel aligned font with the default font. If enabled, you can set OversampleH/V to 1.
--- false
---@type boolean
ImFontConfig.PixelSnapH = nil

--------------------------------

--- Extra spacing (in pixels) between glyphs. Only X axis is supported for now.
--- 0, 0     
---@type ImVec2
ImFontConfig.GlyphExtraSpacing = nil

--------------------------------

--- Offset all glyphs from this font input.
--- 0, 0     
---@type ImVec2
ImFontConfig.GlyphOffset = nil

--------------------------------

--- Minimum AdvanceX for glyphs, set Min to align font icons, set both Min/Max to enforce mono-space font
--- 0
---@type number
ImFontConfig.GlyphMinAdvanceX = nil

--------------------------------

--- Maximum AdvanceX for glyphs
--- FLT_MAX
---@type number
ImFontConfig.GlyphMaxAdvanceX = nil

--------------------------------

--- Merge into previous ImFont, so you can combine multiple inputs font into one ImFont (e.g. ASCII font + icons + Japanese glyphs). You may want to use GlyphOffset.y when merge font of different heights.
--- false
---@type boolean
ImFontConfig.MergeMode = nil

--------------------------------

--- Settings for custom font rasterizer (e.g. ImGuiFreeType). Leave as zero if you aren't using one.
--- 0x00
---@type number
ImFontConfig.RasterizerFlags = nil

--------------------------------

--- Brighten (>1.0f) or darken (<1.0f) font output. Brightening small fonts may be a good workaround to make them more readable.
--- 1.0f     
---@type number
ImFontConfig.RasterizerMultiply = nil



return nil
