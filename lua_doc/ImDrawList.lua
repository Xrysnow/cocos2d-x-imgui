--------------------------------
-- @module ImDrawList
-- @parent_module imgui

---@class imgui.ImDrawList
local ImDrawList = {}
imgui.ImDrawList = ImDrawList
--------------------------------

--- 
---@param pos0 ImVec2
---@param cp0 ImVec2
---@param cp1 ImVec2
---@param pos1 ImVec2
---@param col number
---@param thickness number
---@param num_segments number
---@return imgui.ImDrawList
function ImDrawList:addBezierCurve(pos0, cp0, cp1, pos1, col, thickness, num_segments)
end

--------------------------------

--- 
---@param centre ImVec2
---@param radius number
---@param col number
---@param num_segments number
---@param thickness number
---@return imgui.ImDrawList
function ImDrawList:addCircle(centre, radius, col, num_segments, thickness)
end

--------------------------------

--- 
---@param centre ImVec2
---@param radius number
---@param col number
---@param num_segments number
---@return imgui.ImDrawList
function ImDrawList:addCircleFilled(centre, radius, col, num_segments)
end

--------------------------------

---  This is useful if you need to forcefully create a new draw call (to allow for dependent rendering / blending). Otherwise primitives are merged into the same draw-call as much as possible 
---@return imgui.ImDrawList
function ImDrawList:addDrawCmd()
end

--------------------------------

--- 
---@param a ImVec2
---@param b ImVec2
---@param col number
---@param thickness number
---@return imgui.ImDrawList
function ImDrawList:addLine(a, b, col, thickness)
end

--------------------------------

--- 
---@param center ImVec2
---@param radius number
---@param col number
---@param num_segments number
---@param thickness number
---@return imgui.ImDrawList
function ImDrawList:addNgon(center, radius, col, num_segments, thickness)
end

--------------------------------

--- 
---@param center ImVec2
---@param radius number
---@param col number
---@param num_segments number
---@return imgui.ImDrawList
function ImDrawList:addNgonFilled(center, radius, col, num_segments)
end

--------------------------------

--- 
---@param a ImVec2
---@param b ImVec2
---@param c ImVec2
---@param d ImVec2
---@param col number
---@param thickness number
---@return imgui.ImDrawList
function ImDrawList:addQuad(a, b, c, d, col, thickness)
end

--------------------------------

--- 
---@param a ImVec2
---@param b ImVec2
---@param c ImVec2
---@param d ImVec2
---@param col number
---@return imgui.ImDrawList
function ImDrawList:addQuadFilled(a, b, c, d, col)
end

--------------------------------

---  a: upper-left, b: lower-right (== upper-left + size), rounding_corners_flags: 4-bits corresponding to which corner to round 
---@param a ImVec2
---@param b ImVec2
---@param col number
---@param rounding number
---@param rounding_corners_flags number
---@param thickness number
---@return imgui.ImDrawList
function ImDrawList:addRect(a, b, col, rounding, rounding_corners_flags, thickness)
end

--------------------------------

---  a: upper-left, b: lower-right (== upper-left + size) 
---@param a ImVec2
---@param b ImVec2
---@param col number
---@param rounding number
---@param rounding_corners_flags number
---@return imgui.ImDrawList
function ImDrawList:addRectFilled(a, b, col, rounding, rounding_corners_flags)
end

--------------------------------

--- 
---@param a ImVec2
---@param b ImVec2
---@param col_upr_left number
---@param col_upr_right number
---@param col_bot_right number
---@param col_bot_left number
---@return imgui.ImDrawList
function ImDrawList:addRectFilledMultiColor(a, b, col_upr_left, col_upr_right, col_bot_right, col_bot_left)
end

--------------------------------

--- 
---@param a ImVec2
---@param b ImVec2
---@param c ImVec2
---@param col number
---@param thickness number
---@return imgui.ImDrawList
function ImDrawList:addTriangle(a, b, c, col, thickness)
end

--------------------------------

--- 
---@param a ImVec2
---@param b ImVec2
---@param c ImVec2
---@param col number
---@return imgui.ImDrawList
function ImDrawList:addTriangleFilled(a, b, c, col)
end

--------------------------------

--- 
---@return imgui.ImDrawList
function ImDrawList:channelsMerge()
end

--------------------------------

--- 
---@param n number
---@return imgui.ImDrawList
function ImDrawList:channelsSetCurrent(n)
end

--------------------------------

--- 
---@param count number
---@return imgui.ImDrawList
function ImDrawList:channelsSplit(count)
end

--------------------------------

---  Create a clone of the CmdBuffer/IdxBuffer/VtxBuffer. 
---@return imgui.ImDrawList
function ImDrawList:cloneOutput()
end

--------------------------------

--- 
---@return ImVec2
function ImDrawList:getClipRectMax()
end

--------------------------------

--- 
---@return ImVec2
function ImDrawList:getClipRectMin()
end

--------------------------------

--- 
---@param centre ImVec2
---@param radius number
---@param a_min number
---@param a_max number
---@param num_segments number
---@return imgui.ImDrawList
function ImDrawList:pathArcTo(centre, radius, a_min, a_max, num_segments)
end

--------------------------------

---  Use precomputed angles for a 12 steps circle 
---@param centre ImVec2
---@param radius number
---@param a_min_of_12 number
---@param a_max_of_12 number
---@return imgui.ImDrawList
function ImDrawList:pathArcToFast(centre, radius, a_min_of_12, a_max_of_12)
end

--------------------------------

--- 
---@param p1 ImVec2
---@param p2 ImVec2
---@param p3 ImVec2
---@param num_segments number
---@return imgui.ImDrawList
function ImDrawList:pathBezierCurveTo(p1, p2, p3, num_segments)
end

--------------------------------

--- 
---@return imgui.ImDrawList
function ImDrawList:pathClear()
end

--------------------------------

---  Note: Anti-aliased filling requires points to be in clockwise order. 
---@param col number
---@return imgui.ImDrawList
function ImDrawList:pathFillConvex(col)
end

--------------------------------

--- 
---@param pos ImVec2
---@return imgui.ImDrawList
function ImDrawList:pathLineTo(pos)
end

--------------------------------

--- 
---@param pos ImVec2
---@return imgui.ImDrawList
function ImDrawList:pathLineToMergeDuplicate(pos)
end

--------------------------------

--- 
---@param rect_min ImVec2
---@param rect_max ImVec2
---@param rounding number
---@param rounding_corners_flags number
---@return imgui.ImDrawList
function ImDrawList:pathRect(rect_min, rect_max, rounding, rounding_corners_flags)
end

--------------------------------

--- 
---@param col number
---@param closed boolean
---@param thickness number
---@return imgui.ImDrawList
function ImDrawList:pathStroke(col, closed, thickness)
end

--------------------------------

--- 
---@return imgui.ImDrawList
function ImDrawList:popClipRect()
end

--------------------------------

--- 
---@return imgui.ImDrawList
function ImDrawList:popTextureID()
end

--------------------------------

--- 
---@param a ImVec2
---@param b ImVec2
---@param c ImVec2
---@param d ImVec2
---@param uv_a ImVec2
---@param uv_b ImVec2
---@param uv_c ImVec2
---@param uv_d ImVec2
---@param col number
---@return imgui.ImDrawList
function ImDrawList:primQuadUV(a, b, c, d, uv_a, uv_b, uv_c, uv_d, col)
end

--------------------------------

--- 
---@param a ImVec2
---@param b ImVec2
---@param col number
---@return imgui.ImDrawList
function ImDrawList:primRect(a, b, col)
end

--------------------------------

--- 
---@param a ImVec2
---@param b ImVec2
---@param uv_a ImVec2
---@param uv_b ImVec2
---@param col number
---@return imgui.ImDrawList
function ImDrawList:primRectUV(a, b, uv_a, uv_b, col)
end

--------------------------------

--- 
---@param idx_count number
---@param vtx_count number
---@return imgui.ImDrawList
function ImDrawList:primReserve(idx_count, vtx_count)
end

--------------------------------

--- 
---@param idx_count number
---@param vtx_count number
---@return imgui.ImDrawList
function ImDrawList:primUnreserve(idx_count, vtx_count)
end

--------------------------------

--- 
---@param pos ImVec2
---@param uv ImVec2
---@param col number
---@return imgui.ImDrawList
function ImDrawList:primVtx(pos, uv, col)
end

--------------------------------

--- 
---@param idx number
---@return imgui.ImDrawList
function ImDrawList:primWriteIdx(idx)
end

--------------------------------

--- 
---@param pos ImVec2
---@param uv ImVec2
---@param col number
---@return imgui.ImDrawList
function ImDrawList:primWriteVtx(pos, uv, col)
end

--------------------------------

---  Render-level scissoring. This is passed down to your render function but not used for CPU-side coarse clipping. Prefer using higher-level ImGui::PushClipRect() to affect logic (hit-testing and widget culling) 
---@param clip_rect_min ImVec2
---@param clip_rect_max ImVec2
---@param intersect_with_current_clip_rect boolean
---@return imgui.ImDrawList
function ImDrawList:pushClipRect(clip_rect_min, clip_rect_max, intersect_with_current_clip_rect)
end

--------------------------------

--- 
---@return imgui.ImDrawList
function ImDrawList:pushClipRectFullScreen()
end

--------------------------------

---  Flags, you may poke into these to adjust anti-aliasing settings per-primitive. 
---@type number
ImDrawList.Flags = nil

--------------------------------

---  Pointer to owner window's name for debugging 
---@type string
ImDrawList._OwnerName = nil



return nil
