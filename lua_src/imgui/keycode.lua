local M = {}
-- use glfw on desktop platforms, use cocos on mobile platforms

local is_desktop = lstg.glfw and true or false
local glfw = is_desktop and require('platform.glfw') or {}
---@return number
local function code(c1, c2)
    if is_desktop then
        return assert(c2)
    else
        return c1
    end
end

M.ESCAPE = code(6, glfw.GLFW_KEY_ESCAPE)
M.BACKSPACE = code(7, glfw.GLFW_KEY_BACKSPACE)
M.TAB = code(8, glfw.GLFW_KEY_TAB)
M.ENTER = code(164, glfw.GLFW_KEY_ENTER)
M.SPACE = code(59, glfw.GLFW_KEY_SPACE)

M.PAUSE = code(1, glfw.GLFW_KEY_PAUSE)
M.CAPSLOCK = code(11, glfw.GLFW_KEY_CAPS_LOCK)
M.NUMLOCK = code(30, glfw.GLFW_KEY_NUM_LOCK)
M.SCROLLLOCK = code(2, glfw.GLFW_KEY_SCROLL_LOCK)

M.PGUP = code(22, glfw.GLFW_KEY_PAGE_UP)
M.PGDN = code(25, glfw.GLFW_KEY_PAGE_DOWN)
M.HOME = code(21, glfw.GLFW_KEY_HOME)
M.END = code(24, glfw.GLFW_KEY_END)
M.INSERT = code(20, glfw.GLFW_KEY_INSERT)
M.DELETE = code(23, glfw.GLFW_KEY_DELETE)

M.LEFT = code(26, glfw.GLFW_KEY_LEFT)
M.RIGHT = code(27, glfw.GLFW_KEY_RIGHT)
M.UP = code(28, glfw.GLFW_KEY_UP)
M.DOWN = code(29, glfw.GLFW_KEY_DOWN)

M['0'] = code(76, glfw.GLFW_KEY_0)
M['1'] = code(77, glfw.GLFW_KEY_1)
M['2'] = code(78, glfw.GLFW_KEY_2)
M['3'] = code(79, glfw.GLFW_KEY_3)
M['4'] = code(80, glfw.GLFW_KEY_4)
M['5'] = code(81, glfw.GLFW_KEY_5)
M['6'] = code(82, glfw.GLFW_KEY_6)
M['7'] = code(83, glfw.GLFW_KEY_7)
M['8'] = code(84, glfw.GLFW_KEY_8)
M['9'] = code(85, glfw.GLFW_KEY_9)

M.A = code(124, glfw.GLFW_KEY_A)
M.B = code(125, glfw.GLFW_KEY_B)
M.C = code(126, glfw.GLFW_KEY_C)
M.D = code(127, glfw.GLFW_KEY_D)
M.E = code(128, glfw.GLFW_KEY_E)
M.F = code(129, glfw.GLFW_KEY_F)
M.G = code(130, glfw.GLFW_KEY_G)
M.H = code(131, glfw.GLFW_KEY_H)
M.I = code(132, glfw.GLFW_KEY_I)
M.J = code(133, glfw.GLFW_KEY_J)
M.K = code(134, glfw.GLFW_KEY_K)
M.L = code(135, glfw.GLFW_KEY_L)
M.M = code(136, glfw.GLFW_KEY_M)
M.N = code(137, glfw.GLFW_KEY_N)
M.O = code(138, glfw.GLFW_KEY_O)
M.P = code(139, glfw.GLFW_KEY_P)
M.Q = code(140, glfw.GLFW_KEY_Q)
M.R = code(141, glfw.GLFW_KEY_R)
M.S = code(142, glfw.GLFW_KEY_S)
M.T = code(143, glfw.GLFW_KEY_T)
M.U = code(144, glfw.GLFW_KEY_U)
M.V = code(145, glfw.GLFW_KEY_V)
M.W = code(146, glfw.GLFW_KEY_W)
M.X = code(147, glfw.GLFW_KEY_X)
M.Y = code(148, glfw.GLFW_KEY_Y)
M.Z = code(149, glfw.GLFW_KEY_Z)

M.GRAVE = code(123, glfw.GLFW_KEY_GRAVE_ACCENT)
M.MINUS = code(73, glfw.GLFW_KEY_MINUS)
M.EQUAL = code(89, glfw.GLFW_KEY_EQUAL)
M.BACKSLASH = code(120, glfw.GLFW_KEY_BACKSLASH)
M.LBRACKET = code(119, glfw.GLFW_KEY_LEFT_BRACKET)
M.RBRACKET = code(121, glfw.GLFW_KEY_RIGHT_BRACKET)
M.SEMICOLON = code(87, glfw.GLFW_KEY_SEMICOLON)
M.APOSTROPHE = code(67, glfw.GLFW_KEY_APOSTROPHE)
M.COMMA = code(72, glfw.GLFW_KEY_COMMA)
M.PERIOD = code(74, glfw.GLFW_KEY_PERIOD)
M.SLASH = code(75, glfw.GLFW_KEY_SLASH)

M.MULTIPLY = code(33, glfw.GLFW_KEY_KP_MULTIPLY)
M.DIVIDE = code(34, glfw.GLFW_KEY_KP_DIVIDE)
M.ADD = code(31, glfw.GLFW_KEY_KP_ADD)
M.SUBTRACT = code(32, glfw.GLFW_KEY_KP_SUBTRACT)
M.DECIMAL = code(74, glfw.GLFW_KEY_KP_DECIMAL)

M.F1 = code(47, glfw.GLFW_KEY_F1)
M.F2 = code(48, glfw.GLFW_KEY_F2)
M.F3 = code(49, glfw.GLFW_KEY_F3)
M.F4 = code(50, glfw.GLFW_KEY_F4)
M.F5 = code(51, glfw.GLFW_KEY_F5)
M.F6 = code(52, glfw.GLFW_KEY_F6)
M.F7 = code(53, glfw.GLFW_KEY_F7)
M.F8 = code(54, glfw.GLFW_KEY_F8)
M.F9 = code(55, glfw.GLFW_KEY_F9)
M.F10 = code(56, glfw.GLFW_KEY_F10)
M.F11 = code(57, glfw.GLFW_KEY_F11)
M.F12 = code(58, glfw.GLFW_KEY_F12)

return M
