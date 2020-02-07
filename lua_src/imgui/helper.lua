--
local dir = cc.Director:getInstance()
local fu = cc.FileUtils:getInstance()
local _iniFile = 'imgui.ini'
local _globalSchedule

---@return cc.Layer
function imgui.create()
    local la = imgui.createLayer()
    local base = require('imgui.Widget')
    la._handler = base._handler
    la.addChild = base.addChild
    imgui.draw = function()
        base.handler(la)
    end
    -- toggle with grave key
    local e = cc.EventListenerKeyboard()
    e:registerScriptHandler(function(k)
        if k == require('keycode').GRAVE then
            imgui.setVisible(not imgui.isVisible())
        end
    end, cc.Handler.EVENT_KEYBOARD_PRESSED)
    dir:getEventDispatcher():addEventListenerWithFixedPriority(e, 1)
    -- load
    local ini = fu:getStringFromFile(_iniFile)
    if #ini > 0 then
        imgui.loadIniSettingsFromMemory(ini, #ini)
    end
    if not _globalSchedule then
        _globalSchedule = dir:getScheduler():scheduleScriptFunc(function()
            -- auto save ini
            local io = imgui.getIO()
            if io.WantSaveIniSettings then
                local path = plus.getWritablePath() .. _iniFile
                fu:writeStringToFile(imgui.saveIniSettingsToMemory(), path)
                io.WantSaveIniSettings = false
            end
            -- check error
            if imgui.error then
                error(imgui.error)
            end
        end, 0, false)
    end
    return la
end

local layerName = '::imgui::'
local listener1
local listener2

---@return cc.Layer
function imgui.on(target)
    local get = imgui.get()
    if get then
        return get
    end
    local la = imgui.create()
    if target then
        target:addChild(la, 1, layerName)
    else
        local sc = dir:getRunningScene()
        sc:addChild(la, 1, layerName)
    end
    if listener1 or listener2 then
        return la
    end
    local e = dir:getEventDispatcher()
    local im = la
    local la_detached = false
    listener1 = e:addCustomEventListener(
            cc.Director.EVENT_BEFORE_SET_NEXT_SCENE, function()
                im = imgui.get()
                if im then
                    im:retain()
                    im:removeSelf()
                    la_detached = true
                end
            end
    )
    listener2 = e:addCustomEventListener(
            cc.Director.EVENT_AFTER_SET_NEXT_SCENE, function()
                if im and la_detached then
                    dir:getRunningScene():addChild(im, 1, layerName)
                    im:release()
                    la_detached = false
                end
            end
    )
    local io = imgui.getIO()
    -- enable docking
    io.ConfigFlags = bit.bor(io.ConfigFlags, imgui.ConfigFlags.DockingEnable)
    local st = imgui.getStyle()
    st.DisplaySafeAreaPadding = cc.p(30, 30)
    st.TabBorderSize = 1
    st.TabRounding = 0
    st.ScrollbarRounding = 0
    return la
end

---@return cc.Layer
function imgui.get()
    return dir:getRunningScene():getChildByName(layerName)
end

function imgui.off()
    dir:getRunningScene():removeChildByName(layerName)
    dir:getScheduler():unscheduleScriptEntry(_globalSchedule)
    _globalSchedule = nil
end

function imgui.isVisible()
    local la = imgui.get()
    if la then
        return la:isVisible()
    else
        return false
    end
end

function imgui.setVisible(b)
    b = b and true or false
    local la = imgui.get()
    if la then
        la:setVisible(b)
    end
    setting.imgui_visible = b
end

function imgui.hide()
    imgui.setVisible(false)
end

function imgui.show()
    imgui.setVisible(true)
end

function imgui.clear()
    local la = imgui.get()
    if la then
        la:removeAllChildren()
    end
end

--

function imgui.p(x, y)
    return cc.p(x or 0, y or 0)
end

function imgui.vec2(x, y)
    return cc.p(x, y)
end

function imgui.vec4(x, y, z, w)
    return cc.vec4(x, y, z, w)
end

function imgui.color(...)
    local arg = { ... }
    if #arg == 1 then
        arg = arg[1]
        if arg.r then
            local a = 1
            if arg.a then
                a = arg.a / 255
            end
            return cc.vec4(arg.r / 255, arg.g / 255, arg.b / 255, a)
        elseif arg.x then
            return arg
        end
    elseif #arg >= 3 then
        local a = 1
        if arg[4] then
            a = arg[4] / 255
        end
        return cc.vec4(arg[1] / 255, arg[2] / 255, arg[3] / 255, a)
    end
    return cc.vec4(0, 0, 0, 0)
end

function imgui.c4b(r, g, b, a)
    return cc.vec4(r / 255, g / 255, b / 255, a / 255)
end

function imgui.c3b(r, g, b)
    return cc.vec4(r / 255, g / 255, b / 255, 1)
end

function imgui.size(...)
    local arg = { ... }
    if #arg == 1 then
        arg = arg[1]
        if arg.width then
            return cc.p(arg.width, arg.height)
        elseif arg.x then
            return cc.p(arg.x, arg.y)
        end
    elseif #arg >= 2 then
        return cc.p(arg[1], arg[2])
    end
    return cc.p(0, 0)
end

function imgui.tocc4b(imVec4)
    return cc.c4b(
            imVec4.x * 255,
            imVec4.y * 255,
            imVec4.z * 255,
            imVec4.w * 255
    )
end

function imgui.toccsize(imVec2)
    return cc.size(imVec2.x, imVec2.y)
end

function imgui.getColorU32(idx, alpha_mul)
    alpha_mul = alpha_mul or 1
    local v = imgui.getStyleColorVec4(idx)
    if v then
        v.w = v.w * imgui.getStyle().Alpha * alpha_mul
        return imgui.colorConvertFloat4ToU32(v)
    else
        return 0
    end
end

function imgui.unpack(t)
    return unpack(t, 1, table.maxn(t))
end

function imgui.ImFontConfig.__call()
    return {}
end

---
---@param path string
---@param size number
---@param config table
---@param ranges number
---@return imgui.ImFont
function imgui.ImFontAtlas.addFontFromFileTTF(path, size, config, ranges)
    return imgui.addFontTTF(path, size, config, ranges)
end

local GlyphRanges = {}
imgui.GlyphRanges = GlyphRanges
--- Basic Latin, Extended Latin
GlyphRanges.Default = 0
--- Default + Korean characters
GlyphRanges.Korean = 1
--- Default + Hiragana, Katakana, Half-Width, Selection of 1946 Ideographs
GlyphRanges.Japanese = 2
--- Default + Half-Width + Japanese Hiragana/Katakana + full set of about 21000 CJK Unified Ideographs
GlyphRanges.ChineseFull = 3
--- Default + Half-Width + Japanese Hiragana/Katakana + set of 2500 CJK Unified Ideographs for common simplified Chinese
GlyphRanges.ChineseSimplifiedCommon = 4
--- Default + about 400 Cyrillic characters
GlyphRanges.Cyrillic = 5
--- Default + Thai characters
GlyphRanges.Thai = 6
--- Default + Vietname characters
GlyphRanges.Vietnamese = 7

local GlyphRangesDefault = {
    0x0020, 0x00FF, -- Basic Latin + Latin Supplement
    0,
}
local GlyphRangesKorean = {
    0x0020, 0x00FF, -- Basic Latin + Latin Supplement
    0x3131, 0x3163, -- Korean alphabets
    0xAC00, 0xD79D, -- Korean characters
    0,
}
local GlyphRangesChineseFull = {
    0x0020, 0x00FF, -- Basic Latin + Latin Supplement
    0x2000, 0x206F, -- General Punctuation
    0x3000, 0x30FF, -- CJK Symbols and Punctuations, Hiragana, Katakana
    0x31F0, 0x31FF, -- Katakana Phonetic Extensions
    0xFF00, 0xFFEF, -- Half-width characters
    0x4e00, 0x9FAF, -- CJK Ideograms
    0,
}
local GlyphRangesCyrillic = {
    0x0020, 0x00FF, -- Basic Latin + Latin Supplement
    0x0400, 0x052F, -- Cyrillic + Cyrillic Supplement
    0x2DE0, 0x2DFF, -- Cyrillic Extended-A
    0xA640, 0xA69F, -- Cyrillic Extended-B
    0,
}
local GlyphRangesThai = {
    0x0020, 0x00FF, -- Basic Latin
    0x2010, 0x205E, -- Punctuations
    0x0E00, 0x0E7F, -- Thai
    0,
}
local GlyphRangesVietnamese = {
    0x0020, 0x00FF, -- Basic Latin
    0x0102, 0x0103,
    0x0110, 0x0111,
    0x0128, 0x0129,
    0x0168, 0x0169,
    0x01A0, 0x01A1,
    0x01AF, 0x01B0,
    0x1EA0, 0x1EF9,
    0,
}
