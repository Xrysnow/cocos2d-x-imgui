local base = require('imgui.Widget')

---@class im.Checkbox:im.Widget
local M = class('im.Checkbox', base)

function M:ctor(...)
    base.ctor(self, ...)
end

function M:setLabel(label)
    self:setParam(1, label)
    return self
end

function M:getLabel()
    return self:getParam(1)
end

function M:setChecked(b)
    self:setParam(2, b)
    return self
end

---@return boolean
function M:isChecked()
    return self:getParam(2)
end

---@return boolean
function M:isPressed()
    return self:getReturn(1)
end

function M:setOnCheck(f)
    self._oncheck = f
    return self
end

function M:_handler()
    imgui.pushID(tostring(self))
    self._ret = { imgui.checkbox(unpack(self._param)) }
    imgui.popID()
    self._param[2] = self._ret[2]
    if self._ret[1] and self._oncheck then
        self:_oncheck()
    end
    base._handler(self)
end

return M
