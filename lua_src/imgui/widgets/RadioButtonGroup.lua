local base = require('imgui.Widget')

---@class im.RadioButtonGroup:im.Widget
local M = class('im.RadioButtonGroup', base)

function M:ctor(labels, handlers, initIndex, sameLine)
    labels = labels or {}
    self._count = #labels
    self._labels = labels
    self._events = handlers or {}
    self._idx = initIndex or 1
    self._sameLine = sameLine and true or false
end

function M:getSelected()
    return self._idx
end

function M:setSelected(idx)
    self._idx = idx
    return self
end

function M:getLabel(idx)
    return self._labels[idx]
end

function M:setLabel(idx, str)
    if self._labels[idx] then
        self._labels[idx] = str
    end
    return self
end

function M:isSameLine()
    return self._sameLine
end

function M:setSameLine(b)
    self._sameLine = b
    return self
end

function M:getCount()
    return self._count
end

function M:_handler()
    local ret
    for i = 1, self._count do
        ret, self._idx = imgui.radioButton(self._labels[i], self._idx, i)
        if ret and self._events[i] then
            self._events[i](self)
        end
        if self._sameLine and i < self._count then
            imgui.sameLine()
        end
    end
end

return M
