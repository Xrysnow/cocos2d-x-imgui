------------------------------
--- Tag: imguiDrawList
--- Date: 2023-03-10
------------------------------

local ImDrawFlags = {
	None = 0,
	Closed = 1,
	RoundCornersTopLeft = 16,
	RoundCornersTopRight = 32,
	RoundCornersBottomLeft = 64,
	RoundCornersBottomRight = 128,
	RoundCornersNone = 256,
	RoundCornersTop = 48,
	RoundCornersBottom = 192,
	RoundCornersLeft = 80,
	RoundCornersRight = 160,
	RoundCornersAll = 240,
	RoundCornersDefault_ = 240,
	RoundCornersMask_ = 496,
}
---
---@class imgui.ImDrawFlags
imgui.ImDrawFlags = ImDrawFlags

local ImDrawListFlags = {
	None = 0,
	AntiAliasedLines = 1,
	AntiAliasedLinesUseTex = 2,
	AntiAliasedFill = 4,
	AllowVtxOffset = 8,
}
---
---@class imgui.ImDrawListFlags
imgui.ImDrawListFlags = ImDrawListFlags


---@class imgui.ImDrawList
local ImDrawList = {}
imgui.ImDrawList = ImDrawList

--- Flags, you may poke into these to adjust anti-aliasing settings per-primitive.
---@type ImDrawListFlags (ImDrawListFlags)
ImDrawList.Flags = nil

--- Pointer to owner window's name for debugging
---@type string (const char*)
ImDrawList._OwnerName = nil

--- Cubic Bezier (4 control points)
---@param p1 ImVec2 @(ImVec2)
---@param p2 ImVec2 @(ImVec2)
---@param p3 ImVec2 @(ImVec2)
---@param p4 ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@param thickness number @(float)
---@param num_segments number @(int)
---@return nil @(void)
function ImDrawList:addBezierCubic(p1, p2, p3, p4, col, thickness, num_segments)
end

--- Cubic Bezier (4 control points)
---@param p1 ImVec2 @(ImVec2)
---@param p2 ImVec2 @(ImVec2)
---@param p3 ImVec2 @(ImVec2)
---@param p4 ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@param thickness number @(float)
---@return nil @(void)
function ImDrawList:addBezierCubic(p1, p2, p3, p4, col, thickness)
end

--- OBSOLETED in 1.80 (Jan 2021)
---@param p1 ImVec2 @(ImVec2)
---@param p2 ImVec2 @(ImVec2)
---@param p3 ImVec2 @(ImVec2)
---@param p4 ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@param thickness number @(float)
---@param num_segments number @(int)
---@return nil @(void)
function ImDrawList:addBezierCurve(p1, p2, p3, p4, col, thickness, num_segments)
end

--- OBSOLETED in 1.80 (Jan 2021)
---@param p1 ImVec2 @(ImVec2)
---@param p2 ImVec2 @(ImVec2)
---@param p3 ImVec2 @(ImVec2)
---@param p4 ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@param thickness number @(float)
---@return nil @(void)
function ImDrawList:addBezierCurve(p1, p2, p3, p4, col, thickness)
end

--- Quadratic Bezier (3 control points)
---@param p1 ImVec2 @(ImVec2)
---@param p2 ImVec2 @(ImVec2)
---@param p3 ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@param thickness number @(float)
---@param num_segments number @(int)
---@return nil @(void)
function ImDrawList:addBezierQuadratic(p1, p2, p3, col, thickness, num_segments)
end

--- Quadratic Bezier (3 control points)
---@param p1 ImVec2 @(ImVec2)
---@param p2 ImVec2 @(ImVec2)
---@param p3 ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@param thickness number @(float)
---@return nil @(void)
function ImDrawList:addBezierQuadratic(p1, p2, p3, col, thickness)
end

---@param center ImVec2 @(ImVec2)
---@param radius number @(float)
---@param col number @(ImU32)
---@param num_segments number @(int)
---@param thickness number @(float)
---@return nil @(void)
function ImDrawList:addCircle(center, radius, col, num_segments, thickness)
end

---@param center ImVec2 @(ImVec2)
---@param radius number @(float)
---@param col number @(ImU32)
---@param num_segments number @(int)
---@return nil @(void)
function ImDrawList:addCircle(center, radius, col, num_segments)
end

---@param center ImVec2 @(ImVec2)
---@param radius number @(float)
---@param col number @(ImU32)
---@return nil @(void)
function ImDrawList:addCircle(center, radius, col)
end

---@param center ImVec2 @(ImVec2)
---@param radius number @(float)
---@param col number @(ImU32)
---@param num_segments number @(int)
---@return nil @(void)
function ImDrawList:addCircleFilled(center, radius, col, num_segments)
end

---@param center ImVec2 @(ImVec2)
---@param radius number @(float)
---@param col number @(ImU32)
---@return nil @(void)
function ImDrawList:addCircleFilled(center, radius, col)
end

--- This is useful if you need to forcefully create a new draw call (to allow for dependent rendering blending). Otherwise primitives are merged into the same draw-call as much as possible
---@return nil @(void)
function ImDrawList:addDrawCmd()
end

---@param p1 ImVec2 @(ImVec2)
---@param p2 ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@param thickness number @(float)
---@return nil @(void)
function ImDrawList:addLine(p1, p2, col, thickness)
end

---@param p1 ImVec2 @(ImVec2)
---@param p2 ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@return nil @(void)
function ImDrawList:addLine(p1, p2, col)
end

---@param center ImVec2 @(ImVec2)
---@param radius number @(float)
---@param col number @(ImU32)
---@param num_segments number @(int)
---@param thickness number @(float)
---@return nil @(void)
function ImDrawList:addNgon(center, radius, col, num_segments, thickness)
end

---@param center ImVec2 @(ImVec2)
---@param radius number @(float)
---@param col number @(ImU32)
---@param num_segments number @(int)
---@return nil @(void)
function ImDrawList:addNgon(center, radius, col, num_segments)
end

---@param center ImVec2 @(ImVec2)
---@param radius number @(float)
---@param col number @(ImU32)
---@param num_segments number @(int)
---@return nil @(void)
function ImDrawList:addNgonFilled(center, radius, col, num_segments)
end

---@param p1 ImVec2 @(ImVec2)
---@param p2 ImVec2 @(ImVec2)
---@param p3 ImVec2 @(ImVec2)
---@param p4 ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@param thickness number @(float)
---@return nil @(void)
function ImDrawList:addQuad(p1, p2, p3, p4, col, thickness)
end

---@param p1 ImVec2 @(ImVec2)
---@param p2 ImVec2 @(ImVec2)
---@param p3 ImVec2 @(ImVec2)
---@param p4 ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@return nil @(void)
function ImDrawList:addQuad(p1, p2, p3, p4, col)
end

---@param p1 ImVec2 @(ImVec2)
---@param p2 ImVec2 @(ImVec2)
---@param p3 ImVec2 @(ImVec2)
---@param p4 ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@return nil @(void)
function ImDrawList:addQuadFilled(p1, p2, p3, p4, col)
end

--- a: upper-left, b: lower-right (== upper-left + size)
---@param p_min ImVec2 @(ImVec2)
---@param p_max ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@param rounding number @(float)
---@param flags number @(ImDrawFlags)
---@param thickness number @(float)
---@return nil @(void)
function ImDrawList:addRect(p_min, p_max, col, rounding, flags, thickness)
end

--- a: upper-left, b: lower-right (== upper-left + size)
---@param p_min ImVec2 @(ImVec2)
---@param p_max ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@param rounding number @(float)
---@param flags number @(ImDrawFlags)
---@return nil @(void)
function ImDrawList:addRect(p_min, p_max, col, rounding, flags)
end

--- a: upper-left, b: lower-right (== upper-left + size)
---@param p_min ImVec2 @(ImVec2)
---@param p_max ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@param rounding number @(float)
---@return nil @(void)
function ImDrawList:addRect(p_min, p_max, col, rounding)
end

--- a: upper-left, b: lower-right (== upper-left + size)
---@param p_min ImVec2 @(ImVec2)
---@param p_max ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@return nil @(void)
function ImDrawList:addRect(p_min, p_max, col)
end

--- a: upper-left, b: lower-right (== upper-left + size)
---@param p_min ImVec2 @(ImVec2)
---@param p_max ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@param rounding number @(float)
---@param flags number @(ImDrawFlags)
---@return nil @(void)
function ImDrawList:addRectFilled(p_min, p_max, col, rounding, flags)
end

--- a: upper-left, b: lower-right (== upper-left + size)
---@param p_min ImVec2 @(ImVec2)
---@param p_max ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@param rounding number @(float)
---@return nil @(void)
function ImDrawList:addRectFilled(p_min, p_max, col, rounding)
end

--- a: upper-left, b: lower-right (== upper-left + size)
---@param p_min ImVec2 @(ImVec2)
---@param p_max ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@return nil @(void)
function ImDrawList:addRectFilled(p_min, p_max, col)
end

---@param p_min ImVec2 @(ImVec2)
---@param p_max ImVec2 @(ImVec2)
---@param col_upr_left number @(ImU32)
---@param col_upr_right number @(ImU32)
---@param col_bot_right number @(ImU32)
---@param col_bot_left number @(ImU32)
---@return nil @(void)
function ImDrawList:addRectFilledMultiColor(p_min, p_max, col_upr_left, col_upr_right, col_bot_right, col_bot_left)
end

---@param p1 ImVec2 @(ImVec2)
---@param p2 ImVec2 @(ImVec2)
---@param p3 ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@param thickness number @(float)
---@return nil @(void)
function ImDrawList:addTriangle(p1, p2, p3, col, thickness)
end

---@param p1 ImVec2 @(ImVec2)
---@param p2 ImVec2 @(ImVec2)
---@param p3 ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@return nil @(void)
function ImDrawList:addTriangle(p1, p2, p3, col)
end

---@param p1 ImVec2 @(ImVec2)
---@param p2 ImVec2 @(ImVec2)
---@param p3 ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@return nil @(void)
function ImDrawList:addTriangleFilled(p1, p2, p3, col)
end

---@return nil @(void)
function ImDrawList:channelsMerge()
end

---@param n number @(int)
---@return nil @(void)
function ImDrawList:channelsSetCurrent(n)
end

---@param count number @(int)
---@return nil @(void)
function ImDrawList:channelsSplit(count)
end

--- Create a clone of the CmdBufferIdxBufferVtxBuffer.
---@return ImDrawList @(ImDrawList*)
function ImDrawList:cloneOutput()
end

---@return ImVec2 @(ImVec2)
function ImDrawList:getClipRectMax()
end

---@return ImVec2 @(ImVec2)
function ImDrawList:getClipRectMin()
end

---@param center ImVec2 @(ImVec2)
---@param radius number @(float)
---@param a_min number @(float)
---@param a_max number @(float)
---@param num_segments number @(int)
---@return nil @(void)
function ImDrawList:pathArcTo(center, radius, a_min, a_max, num_segments)
end

---@param center ImVec2 @(ImVec2)
---@param radius number @(float)
---@param a_min number @(float)
---@param a_max number @(float)
---@return nil @(void)
function ImDrawList:pathArcTo(center, radius, a_min, a_max)
end

--- Use precomputed angles for a 12 steps circle
---@param center ImVec2 @(ImVec2)
---@param radius number @(float)
---@param a_min_of_12 number @(int)
---@param a_max_of_12 number @(int)
---@return nil @(void)
function ImDrawList:pathArcToFast(center, radius, a_min_of_12, a_max_of_12)
end

--- Cubic Bezier (4 control points)
---@param p2 ImVec2 @(ImVec2)
---@param p3 ImVec2 @(ImVec2)
---@param p4 ImVec2 @(ImVec2)
---@param num_segments number @(int)
---@return nil @(void)
function ImDrawList:pathBezierCubicCurveTo(p2, p3, p4, num_segments)
end

--- Cubic Bezier (4 control points)
---@param p2 ImVec2 @(ImVec2)
---@param p3 ImVec2 @(ImVec2)
---@param p4 ImVec2 @(ImVec2)
---@return nil @(void)
function ImDrawList:pathBezierCubicCurveTo(p2, p3, p4)
end

--- OBSOLETED in 1.80 (Jan 2021)
---@param p2 ImVec2 @(ImVec2)
---@param p3 ImVec2 @(ImVec2)
---@param p4 ImVec2 @(ImVec2)
---@param num_segments number @(int)
---@return nil @(void)
function ImDrawList:pathBezierCurveTo(p2, p3, p4, num_segments)
end

--- OBSOLETED in 1.80 (Jan 2021)
---@param p2 ImVec2 @(ImVec2)
---@param p3 ImVec2 @(ImVec2)
---@param p4 ImVec2 @(ImVec2)
---@return nil @(void)
function ImDrawList:pathBezierCurveTo(p2, p3, p4)
end

--- Quadratic Bezier (3 control points)
---@param p2 ImVec2 @(ImVec2)
---@param p3 ImVec2 @(ImVec2)
---@param num_segments number @(int)
---@return nil @(void)
function ImDrawList:pathBezierQuadraticCurveTo(p2, p3, num_segments)
end

--- Quadratic Bezier (3 control points)
---@param p2 ImVec2 @(ImVec2)
---@param p3 ImVec2 @(ImVec2)
---@return nil @(void)
function ImDrawList:pathBezierQuadraticCurveTo(p2, p3)
end

---@return nil @(void)
function ImDrawList:pathClear()
end

---@param col number @(ImU32)
---@return nil @(void)
function ImDrawList:pathFillConvex(col)
end

---@param pos ImVec2 @(ImVec2)
---@return nil @(void)
function ImDrawList:pathLineTo(pos)
end

---@param pos ImVec2 @(ImVec2)
---@return nil @(void)
function ImDrawList:pathLineToMergeDuplicate(pos)
end

---@param rect_min ImVec2 @(ImVec2)
---@param rect_max ImVec2 @(ImVec2)
---@param rounding number @(float)
---@param flags number @(ImDrawFlags)
---@return nil @(void)
function ImDrawList:pathRect(rect_min, rect_max, rounding, flags)
end

---@param rect_min ImVec2 @(ImVec2)
---@param rect_max ImVec2 @(ImVec2)
---@param rounding number @(float)
---@return nil @(void)
function ImDrawList:pathRect(rect_min, rect_max, rounding)
end

---@param rect_min ImVec2 @(ImVec2)
---@param rect_max ImVec2 @(ImVec2)
---@return nil @(void)
function ImDrawList:pathRect(rect_min, rect_max)
end

---@param col number @(ImU32)
---@param flags number @(ImDrawFlags)
---@param thickness number @(float)
---@return nil @(void)
function ImDrawList:pathStroke(col, flags, thickness)
end

---@param col number @(ImU32)
---@param flags number @(ImDrawFlags)
---@return nil @(void)
function ImDrawList:pathStroke(col, flags)
end

---@param col number @(ImU32)
---@return nil @(void)
function ImDrawList:pathStroke(col)
end

---@return nil @(void)
function ImDrawList:popClipRect()
end

---@return nil @(void)
function ImDrawList:popTextureID()
end

---@param a ImVec2 @(ImVec2)
---@param b ImVec2 @(ImVec2)
---@param c ImVec2 @(ImVec2)
---@param d ImVec2 @(ImVec2)
---@param uv_a ImVec2 @(ImVec2)
---@param uv_b ImVec2 @(ImVec2)
---@param uv_c ImVec2 @(ImVec2)
---@param uv_d ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@return nil @(void)
function ImDrawList:primQuadUV(a, b, c, d, uv_a, uv_b, uv_c, uv_d, col)
end

--- Axis aligned rectangle (composed of two triangles)
---@param a ImVec2 @(ImVec2)
---@param b ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@return nil @(void)
function ImDrawList:primRect(a, b, col)
end

---@param a ImVec2 @(ImVec2)
---@param b ImVec2 @(ImVec2)
---@param uv_a ImVec2 @(ImVec2)
---@param uv_b ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@return nil @(void)
function ImDrawList:primRectUV(a, b, uv_a, uv_b, col)
end

---@param idx_count number @(int)
---@param vtx_count number @(int)
---@return nil @(void)
function ImDrawList:primReserve(idx_count, vtx_count)
end

---@param idx_count number @(int)
---@param vtx_count number @(int)
---@return nil @(void)
function ImDrawList:primUnreserve(idx_count, vtx_count)
end

--- Write vertex with unique index
---@param pos ImVec2 @(ImVec2)
---@param uv ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@return nil @(void)
function ImDrawList:primVtx(pos, uv, col)
end

---@param idx number @(ImDrawIdx)
---@return nil @(void)
function ImDrawList:primWriteIdx(idx)
end

---@param pos ImVec2 @(ImVec2)
---@param uv ImVec2 @(ImVec2)
---@param col number @(ImU32)
---@return nil @(void)
function ImDrawList:primWriteVtx(pos, uv, col)
end

--- Render-level scissoring. This is passed down to your render function but not used for CPU-side coarse clipping. Prefer using higher-level ImGui::PushClipRect() to affect logic (hit-testing and widget culling)
---@param clip_rect_min ImVec2 @(ImVec2)
---@param clip_rect_max ImVec2 @(ImVec2)
---@param intersect_with_current_clip_rect boolean @(bool)
---@return nil @(void)
function ImDrawList:pushClipRect(clip_rect_min, clip_rect_max, intersect_with_current_clip_rect)
end

--- Render-level scissoring. This is passed down to your render function but not used for CPU-side coarse clipping. Prefer using higher-level ImGui::PushClipRect() to affect logic (hit-testing and widget culling)
---@param clip_rect_min ImVec2 @(ImVec2)
---@param clip_rect_max ImVec2 @(ImVec2)
---@return nil @(void)
function ImDrawList:pushClipRect(clip_rect_min, clip_rect_max)
end

---@return nil @(void)
function ImDrawList:pushClipRectFullScreen()
end

