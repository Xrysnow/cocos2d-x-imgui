
--------------------------------
-- @module ImFontAtlas
-- @parent_module imgui

---@class imgui.ImFontAtlas
local ImFontAtlas = {}
imgui.ImFontAtlas = ImFontAtlas
--------------------------------

--- Clear input data (all ImFontConfig structures including sizes, TTF data, glyph ranges, etc.) = all the data used to build the texture and fonts.
---@return imgui.ImFontAtlas
function ImFontAtlas:ClearInputData()
end

--------------------------------

--- Clear all input and output.
---@return imgui.ImFontAtlas
function ImFontAtlas:Clear()
end

--------------------------------

--- Clear output font data (glyphs storage, UV coordinates).
---@return imgui.ImFontAtlas
function ImFontAtlas:ClearFonts()
end

--------------------------------

--- Id needs to be < 0x10000 to register a rectangle to map into a specific font.
---@param font imgui.ImFont
---@param id number
---@param width number
---@param height number
---@param advance_x number
---@param offset ImVec2
---@return number
function ImFontAtlas:AddCustomRectFontGlyph(font, id, width, height, advance_x, offset)
end

--------------------------------

--- Build pixels data. This is called automatically for you by the GetTexData*** functions.
---@return boolean
function ImFontAtlas:Build()
end

--------------------------------

--- 
---@param index number
---@return imgui.ImFontAtlasCustomRect
function ImFontAtlas:GetCustomRectByIndex(index)
end

--------------------------------

--- Id needs to be >= 0x10000. Id >= 0x80000000 are reserved for ImGui and ImDrawList
---@param id number
---@param width number
---@param height number
---@return number
function ImFontAtlas:AddCustomRectRegular(id, width, height)
end

--------------------------------

--- Clear output texture data (CPU side). Saves RAM once the texture has been copied to graphics memory.
---@return imgui.ImFontAtlas
function ImFontAtlas:ClearTexData()
end

--------------------------------

--- 
---@return boolean
function ImFontAtlas:IsBuilt()
end

--------------------------------

--- Marked as Locked by ImGui::NewFrame() so attempt to modify the atlas will assert.
---@type boolean
ImFontAtlas.Locked = nil

--------------------------------

--- Build flags (see ImFontAtlasFlags_)
---@type number
ImFontAtlas.Flags = nil

--------------------------------

--- User data to refer to the texture once it has been uploaded to user's graphic systems. It is passed back to you during rendering via the ImDrawCmd structure.
---@type void
ImFontAtlas.TexID = nil

--------------------------------

--- Texture width desired by user before Build(). Must be a power-of-two. If have many glyphs your graphics API have texture size restrictions you may want to increase texture width to decrease height.
---@type number
ImFontAtlas.TexDesiredWidth = nil

--------------------------------

--- Padding between glyphs within texture in pixels. Defaults to 1. If your rendering method doesn't rely on bilinear filtering you may set this to 0.
---@type number
ImFontAtlas.TexGlyphPadding = nil


return nil
