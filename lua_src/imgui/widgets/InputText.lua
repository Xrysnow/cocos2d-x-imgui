local base = require('imgui.Widget')

---@class im.InputText:im.Widget
local M = class('im.InputText', base)

function M:ctor(...)
    base.ctor(self, ...)
    self._param[2] = self._param[2] or ''
end

function M:setLabel(label)
    self:setParam(1, label)
    return self
end

function M:getLabel()
    return self:getParam(1)
end

function M:setString(s)
    self:setParam(2, s)
    return self
end

---@return string
function M:getString()
    return self:getParam(2)
end

function M:setFlags(flag, ...)
    self:setParam(3, bit.band(flag, ...))
    return self
end

function M:getFlags()
    return self:getParam(3)
end

function M:setWidth(v)
    self._width = v
    return self
end

function M:getWidth()
    return self._width or 0
end

function M:setOnChange(f)
    self._onChange = f
end

function M:_handler()
    if self._width then
        imgui.setNextItemWidth(self._width)
    end
    local ret = { imgui.inputText(unpack(self._param)) }
    self._ret = ret
    self._param[2] = ret[2]
    if ret[1] and self._onChange then
        self:_onChange()
    end
    base._handler(self)
end

return M
