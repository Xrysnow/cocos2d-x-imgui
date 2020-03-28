--------------------------------
-- @module ImDrawList
-- @parent_module imgui

---@type imgui.ImDrawList
local ImDrawList = {}

---
---@param font imgui.ImFont
---@param font_size number
---@param pos ImVec2
---@param col number
---@param text string
---@param wrap_width number optional
---@param cpu_fine_clip_rect ImVec4 optional
---@overload fun(self:imgui.ImDrawList,pos:ImVec2,col:number,text:string)
function ImDrawList:addText(font, font_size, pos, col, text, wrap_width, cpu_fine_clip_rect)
end

---
---@param texture cc.Texture2D
---@param a ImVec2
---@param b ImVec2
---@param uv_a ImVec2 optional
---@param uv_b ImVec2 optional
---@param col number optional
---@overload fun(self:imgui.ImDrawList,sp:cc.Sprite,a:ImVec2,b:ImVec2,col:number)
function ImDrawList:addImage(texture, a, b, uv_a, uv_b, col)
end

---
---@param texture cc.Texture2D
---@param a ImVec2
---@param b ImVec2
---@param c ImVec2
---@param d ImVec2
---@param uv_a ImVec2 optional
---@param uv_b ImVec2 optional
---@param uv_c ImVec2 optional
---@param uv_d ImVec2 optional
---@param col number optional
---@overload fun(self:imgui.ImDrawList,sp:cc.Sprite,a:ImVec2,b:ImVec2,c:ImVec2,d:ImVec2,col:number)
function ImDrawList:addImageQuad(texture, a, b, c, d, uv_a, uv_b, uv_c, uv_d, col)
end

---
---@param texture cc.Texture2D
---@param a ImVec2
---@param b ImVec2
---@param uv_a ImVec2
---@param uv_b ImVec2
---@param col number
---@param rounding number
---@param rounding_corners number optional
---@overload fun(self:imgui.ImDrawList,sp:cc.Sprite,a:ImVec2,b:ImVec2,col:number,rounding:number,rounding_corners:number)
function ImDrawList:addImageRounded(texture, a, b, uv_a, uv_b, col, rounding, rounding_corners)
end

---
---@param points ImVec2[]
---@param col number
---@param closed boolean
---@param thickness number
function ImDrawList:addPolyline(points, col, closed, thickness)
end

--- Note: Anti-aliased filling requires points to be in clockwise order.
---@param points ImVec2[]
---@param col number
function ImDrawList:addConvexPolyFilled(points, col)
end

---
---@param node cc.Node
---@param pos ImVec2
function ImDrawList:addCCNode(node, pos)
end

return nil
