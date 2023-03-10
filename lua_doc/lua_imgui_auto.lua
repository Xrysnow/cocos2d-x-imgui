------------------------------
--- Tag: imgui
--- Date: 2023-03-10
------------------------------

---@class imgui
imgui = imgui or {}
---@class ImVec2
local ImVec2 = { x = 0, y = 0 }
---@class ImVec4
local ImVec4 = { x = 0, y = 0, z = 0, w = 0 }

local ImGuiWindowFlags = {
	None = 0,
	NoTitleBar = 1,
	NoResize = 2,
	NoMove = 4,
	NoScrollbar = 8,
	NoScrollWithMouse = 16,
	NoCollapse = 32,
	AlwaysAutoResize = 64,
	NoBackground = 128,
	NoSavedSettings = 256,
	NoMouseInputs = 512,
	MenuBar = 1024,
	HorizontalScrollbar = 2048,
	NoFocusOnAppearing = 4096,
	NoBringToFrontOnFocus = 8192,
	AlwaysVerticalScrollbar = 16384,
	AlwaysHorizontalScrollbar = 32768,
	AlwaysUseWindowPadding = 65536,
	NoNavInputs = 262144,
	NoNavFocus = 524288,
	UnsavedDocument = 1048576,
	NoDocking = 2097152,
	NoNav = 786432,
	NoDecoration = 43,
	NoInputs = 786944,
	NavFlattened = 8388608,
	ChildWindow = 16777216,
	Tooltip = 33554432,
	Popup = 67108864,
	Modal = 134217728,
	ChildMenu = 268435456,
	DockNodeHost = 536870912,
}
---
---@class imgui.ImGuiWindowFlags
imgui.ImGuiWindowFlags = ImGuiWindowFlags

local ImGuiInputTextFlags = {
	None = 0,
	CharsDecimal = 1,
	CharsHexadecimal = 2,
	CharsUppercase = 4,
	CharsNoBlank = 8,
	AutoSelectAll = 16,
	EnterReturnsTrue = 32,
	CallbackCompletion = 64,
	CallbackHistory = 128,
	CallbackAlways = 256,
	CallbackCharFilter = 512,
	AllowTabInput = 1024,
	CtrlEnterForNewLine = 2048,
	NoHorizontalScroll = 4096,
	AlwaysOverwrite = 8192,
	ReadOnly = 16384,
	Password = 32768,
	NoUndoRedo = 65536,
	CharsScientific = 131072,
	CallbackResize = 262144,
	CallbackEdit = 524288,
	EscapeClearsAll = 1048576,
	AlwaysInsertMode = 8192,
}
---
---@class imgui.ImGuiInputTextFlags
imgui.ImGuiInputTextFlags = ImGuiInputTextFlags

local ImGuiTreeNodeFlags = {
	None = 0,
	Selected = 1,
	Framed = 2,
	AllowItemOverlap = 4,
	NoTreePushOnOpen = 8,
	NoAutoOpenOnLog = 16,
	DefaultOpen = 32,
	OpenOnDoubleClick = 64,
	OpenOnArrow = 128,
	Leaf = 256,
	Bullet = 512,
	FramePadding = 1024,
	SpanAvailWidth = 2048,
	SpanFullWidth = 4096,
	NavLeftJumpsBackHere = 8192,
	CollapsingHeader = 26,
}
---
---@class imgui.ImGuiTreeNodeFlags
imgui.ImGuiTreeNodeFlags = ImGuiTreeNodeFlags

local ImGuiPopupFlags = {
	None = 0,
	MouseButtonLeft = 0,
	MouseButtonRight = 1,
	MouseButtonMiddle = 2,
	MouseButtonMask_ = 31,
	MouseButtonDefault_ = 1,
	NoOpenOverExistingPopup = 32,
	NoOpenOverItems = 64,
	AnyPopupId = 128,
	AnyPopupLevel = 256,
	AnyPopup = 384,
}
---
---@class imgui.ImGuiPopupFlags
imgui.ImGuiPopupFlags = ImGuiPopupFlags

local ImGuiSelectableFlags = {
	None = 0,
	DontClosePopups = 1,
	SpanAllColumns = 2,
	AllowDoubleClick = 4,
	Disabled = 8,
	AllowItemOverlap = 16,
}
---
---@class imgui.ImGuiSelectableFlags
imgui.ImGuiSelectableFlags = ImGuiSelectableFlags

local ImGuiComboFlags = {
	None = 0,
	PopupAlignLeft = 1,
	HeightSmall = 2,
	HeightRegular = 4,
	HeightLarge = 8,
	HeightLargest = 16,
	NoArrowButton = 32,
	NoPreview = 64,
	HeightMask_ = 30,
}
---
---@class imgui.ImGuiComboFlags
imgui.ImGuiComboFlags = ImGuiComboFlags

local ImGuiTabBarFlags = {
	None = 0,
	Reorderable = 1,
	AutoSelectNewTabs = 2,
	TabListPopupButton = 4,
	NoCloseWithMiddleMouseButton = 8,
	NoTabListScrollingButtons = 16,
	NoTooltip = 32,
	FittingPolicyResizeDown = 64,
	FittingPolicyScroll = 128,
	FittingPolicyMask_ = 192,
	FittingPolicyDefault_ = 64,
}
---
---@class imgui.ImGuiTabBarFlags
imgui.ImGuiTabBarFlags = ImGuiTabBarFlags

local ImGuiTabItemFlags = {
	None = 0,
	UnsavedDocument = 1,
	SetSelected = 2,
	NoCloseWithMiddleMouseButton = 4,
	NoPushId = 8,
	NoTooltip = 16,
	NoReorder = 32,
	Leading = 64,
	Trailing = 128,
}
---
---@class imgui.ImGuiTabItemFlags
imgui.ImGuiTabItemFlags = ImGuiTabItemFlags

local ImGuiTableFlags = {
	None = 0,
	Resizable = 1,
	Reorderable = 2,
	Hideable = 4,
	Sortable = 8,
	NoSavedSettings = 16,
	ContextMenuInBody = 32,
	RowBg = 64,
	BordersInnerH = 128,
	BordersOuterH = 256,
	BordersInnerV = 512,
	BordersOuterV = 1024,
	BordersH = 384,
	BordersV = 1536,
	BordersInner = 640,
	BordersOuter = 1280,
	Borders = 1920,
	NoBordersInBody = 2048,
	NoBordersInBodyUntilResize = 4096,
	SizingFixedFit = 8192,
	SizingFixedSame = 16384,
	SizingStretchProp = 24576,
	SizingStretchSame = 32768,
	NoHostExtendX = 65536,
	NoHostExtendY = 131072,
	NoKeepColumnsVisible = 262144,
	PreciseWidths = 524288,
	NoClip = 1048576,
	PadOuterX = 2097152,
	NoPadOuterX = 4194304,
	NoPadInnerX = 8388608,
	ScrollX = 16777216,
	ScrollY = 33554432,
	SortMulti = 67108864,
	SortTristate = 134217728,
	SizingMask_ = 57344,
}
---
---@class imgui.ImGuiTableFlags
imgui.ImGuiTableFlags = ImGuiTableFlags

local ImGuiTableColumnFlags = {
	None = 0,
	Disabled = 1,
	DefaultHide = 2,
	DefaultSort = 4,
	WidthStretch = 8,
	WidthFixed = 16,
	NoResize = 32,
	NoReorder = 64,
	NoHide = 128,
	NoClip = 256,
	NoSort = 512,
	NoSortAscending = 1024,
	NoSortDescending = 2048,
	NoHeaderLabel = 4096,
	NoHeaderWidth = 8192,
	PreferSortAscending = 16384,
	PreferSortDescending = 32768,
	IndentEnable = 65536,
	IndentDisable = 131072,
	IsEnabled = 16777216,
	IsVisible = 33554432,
	IsSorted = 67108864,
	IsHovered = 134217728,
	WidthMask_ = 24,
	IndentMask_ = 196608,
	StatusMask_ = 251658240,
	NoDirectResize_ = 1073741824,
}
---
---@class imgui.ImGuiTableColumnFlags
imgui.ImGuiTableColumnFlags = ImGuiTableColumnFlags

local ImGuiTableRowFlags = {
	None = 0,
	Headers = 1,
}
---
---@class imgui.ImGuiTableRowFlags
imgui.ImGuiTableRowFlags = ImGuiTableRowFlags

local ImGuiTableBgTarget = {
	None = 0,
	RowBg0 = 1,
	RowBg1 = 2,
	CellBg = 3,
}
---
---@class imgui.ImGuiTableBgTarget
imgui.ImGuiTableBgTarget = ImGuiTableBgTarget

local ImGuiFocusedFlags = {
	None = 0,
	ChildWindows = 1,
	RootWindow = 2,
	AnyWindow = 4,
	NoPopupHierarchy = 8,
	DockHierarchy = 16,
	RootAndChildWindows = 3,
}
---
---@class imgui.ImGuiFocusedFlags
imgui.ImGuiFocusedFlags = ImGuiFocusedFlags

local ImGuiHoveredFlags = {
	None = 0,
	ChildWindows = 1,
	RootWindow = 2,
	AnyWindow = 4,
	NoPopupHierarchy = 8,
	DockHierarchy = 16,
	AllowWhenBlockedByPopup = 32,
	AllowWhenBlockedByActiveItem = 128,
	AllowWhenOverlapped = 256,
	AllowWhenDisabled = 512,
	NoNavOverride = 1024,
	RectOnly = 416,
	RootAndChildWindows = 3,
	DelayNormal = 2048,
	DelayShort = 4096,
	NoSharedDelay = 8192,
}
---
---@class imgui.ImGuiHoveredFlags
imgui.ImGuiHoveredFlags = ImGuiHoveredFlags

local ImGuiDockNodeFlags = {
	None = 0,
	KeepAliveOnly = 1,
	NoDockingInCentralNode = 4,
	PassthruCentralNode = 8,
	NoSplit = 16,
	NoResize = 32,
	AutoHideTabBar = 64,
}
---
---@class imgui.ImGuiDockNodeFlags
imgui.ImGuiDockNodeFlags = ImGuiDockNodeFlags

local ImGuiDragDropFlags = {
	None = 0,
	SourceNoPreviewTooltip = 1,
	SourceNoDisableHover = 2,
	SourceNoHoldToOpenOthers = 4,
	SourceAllowNullID = 8,
	SourceExtern = 16,
	SourceAutoExpirePayload = 32,
	AcceptBeforeDelivery = 1024,
	AcceptNoDrawDefaultRect = 2048,
	AcceptNoPreviewTooltip = 4096,
	AcceptPeekOnly = 3072,
}
---
---@class imgui.ImGuiDragDropFlags
imgui.ImGuiDragDropFlags = ImGuiDragDropFlags

local ImGuiDataType = {
	S8 = 0,
	U8 = 1,
	S16 = 2,
	U16 = 3,
	S32 = 4,
	U32 = 5,
	S64 = 6,
	U64 = 7,
	Float = 8,
	Double = 9,
	COUNT = 10,
}
---
---@class imgui.ImGuiDataType
imgui.ImGuiDataType = ImGuiDataType

local ImGuiDir = {
	None = -1,
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	COUNT = 4,
}
---
---@class imgui.ImGuiDir
imgui.ImGuiDir = ImGuiDir

local ImGuiSortDirection = {
	None = 0,
	Ascending = 1,
	Descending = 2,
}
---
---@class imgui.ImGuiSortDirection
imgui.ImGuiSortDirection = ImGuiSortDirection

local ImGuiKey = {
	None = 0,
	Tab = 512,
	LeftArrow = 513,
	RightArrow = 514,
	UpArrow = 515,
	DownArrow = 516,
	PageUp = 517,
	PageDown = 518,
	Home = 519,
	End = 520,
	Insert = 521,
	Delete = 522,
	Backspace = 523,
	Space = 524,
	Enter = 525,
	Escape = 526,
	LeftCtrl = 527,
	LeftShift = 528,
	LeftAlt = 529,
	LeftSuper = 530,
	RightCtrl = 531,
	RightShift = 532,
	RightAlt = 533,
	RightSuper = 534,
	Menu = 535,
	["0"] = 536,
	["1"] = 537,
	["2"] = 538,
	["3"] = 539,
	["4"] = 540,
	["5"] = 541,
	["6"] = 542,
	["7"] = 543,
	["8"] = 544,
	["9"] = 545,
	A = 546,
	B = 547,
	C = 548,
	D = 549,
	E = 550,
	F = 551,
	G = 552,
	H = 553,
	I = 554,
	J = 555,
	K = 556,
	L = 557,
	M = 558,
	N = 559,
	O = 560,
	P = 561,
	Q = 562,
	R = 563,
	S = 564,
	T = 565,
	U = 566,
	V = 567,
	W = 568,
	X = 569,
	Y = 570,
	Z = 571,
	F1 = 572,
	F2 = 573,
	F3 = 574,
	F4 = 575,
	F5 = 576,
	F6 = 577,
	F7 = 578,
	F8 = 579,
	F9 = 580,
	F10 = 581,
	F11 = 582,
	F12 = 583,
	Apostrophe = 584,
	Comma = 585,
	Minus = 586,
	Period = 587,
	Slash = 588,
	Semicolon = 589,
	Equal = 590,
	LeftBracket = 591,
	Backslash = 592,
	RightBracket = 593,
	GraveAccent = 594,
	CapsLock = 595,
	ScrollLock = 596,
	NumLock = 597,
	PrintScreen = 598,
	Pause = 599,
	Keypad0 = 600,
	Keypad1 = 601,
	Keypad2 = 602,
	Keypad3 = 603,
	Keypad4 = 604,
	Keypad5 = 605,
	Keypad6 = 606,
	Keypad7 = 607,
	Keypad8 = 608,
	Keypad9 = 609,
	KeypadDecimal = 610,
	KeypadDivide = 611,
	KeypadMultiply = 612,
	KeypadSubtract = 613,
	KeypadAdd = 614,
	KeypadEnter = 615,
	KeypadEqual = 616,
	GamepadStart = 617,
	GamepadBack = 618,
	GamepadFaceLeft = 619,
	GamepadFaceRight = 620,
	GamepadFaceUp = 621,
	GamepadFaceDown = 622,
	GamepadDpadLeft = 623,
	GamepadDpadRight = 624,
	GamepadDpadUp = 625,
	GamepadDpadDown = 626,
	GamepadL1 = 627,
	GamepadR1 = 628,
	GamepadL2 = 629,
	GamepadR2 = 630,
	GamepadL3 = 631,
	GamepadR3 = 632,
	GamepadLStickLeft = 633,
	GamepadLStickRight = 634,
	GamepadLStickUp = 635,
	GamepadLStickDown = 636,
	GamepadRStickLeft = 637,
	GamepadRStickRight = 638,
	GamepadRStickUp = 639,
	GamepadRStickDown = 640,
	MouseLeft = 641,
	MouseRight = 642,
	MouseMiddle = 643,
	MouseX1 = 644,
	MouseX2 = 645,
	MouseWheelX = 646,
	MouseWheelY = 647,
	ReservedForModCtrl = 648,
	ReservedForModShift = 649,
	ReservedForModAlt = 650,
	ReservedForModSuper = 651,
	COUNT = 652,
	ImGuiMod_None = 0,
	ImGuiMod_Ctrl = 4096,
	ImGuiMod_Shift = 8192,
	ImGuiMod_Alt = 16384,
	ImGuiMod_Super = 32768,
	ImGuiMod_Mask_ = 61440,
	ImGuiMod_Shortcut = 4096,
	NamedKey_BEGIN = 512,
	NamedKey_END = 652,
	NamedKey_COUNT = 140,
	KeysData_SIZE = 652,
	KeysData_OFFSET = 0,
	ModCtrl = 4096,
	ModShift = 8192,
	ModAlt = 16384,
	ModSuper = 32768,
	KeyPadEnter = 615,
}
---
---@class imgui.ImGuiKey
imgui.ImGuiKey = ImGuiKey

local ImGuiNavInput = {
	ImGuiNavInput_Activate = 0,
	ImGuiNavInput_Cancel = 1,
	ImGuiNavInput_Input = 2,
	ImGuiNavInput_Menu = 3,
	ImGuiNavInput_DpadLeft = 4,
	ImGuiNavInput_DpadRight = 5,
	ImGuiNavInput_DpadUp = 6,
	ImGuiNavInput_DpadDown = 7,
	ImGuiNavInput_LStickLeft = 8,
	ImGuiNavInput_LStickRight = 9,
	ImGuiNavInput_LStickUp = 10,
	ImGuiNavInput_LStickDown = 11,
	ImGuiNavInput_FocusPrev = 12,
	ImGuiNavInput_FocusNext = 13,
	ImGuiNavInput_TweakSlow = 14,
	ImGuiNavInput_TweakFast = 15,
	ImGuiNavInput_COUNT = 16,
}
---
---@class imgui.ImGuiNavInput
imgui.ImGuiNavInput = ImGuiNavInput

local ImGuiConfigFlags = {
	None = 0,
	NavEnableKeyboard = 1,
	NavEnableGamepad = 2,
	NavEnableSetMousePos = 4,
	NavNoCaptureKeyboard = 8,
	NoMouse = 16,
	NoMouseCursorChange = 32,
	DockingEnable = 64,
	ViewportsEnable = 1024,
	DpiEnableScaleViewports = 16384,
	DpiEnableScaleFonts = 32768,
	IsSRGB = 1048576,
	IsTouchScreen = 2097152,
}
---
---@class imgui.ImGuiConfigFlags
imgui.ImGuiConfigFlags = ImGuiConfigFlags

local ImGuiBackendFlags = {
	None = 0,
	HasGamepad = 1,
	HasMouseCursors = 2,
	HasSetMousePos = 4,
	RendererHasVtxOffset = 8,
	PlatformHasViewports = 1024,
	HasMouseHoveredViewport = 2048,
	RendererHasViewports = 4096,
}
---
---@class imgui.ImGuiBackendFlags
imgui.ImGuiBackendFlags = ImGuiBackendFlags

local ImGuiCol = {
	Text = 0,
	TextDisabled = 1,
	WindowBg = 2,
	ChildBg = 3,
	PopupBg = 4,
	Border = 5,
	BorderShadow = 6,
	FrameBg = 7,
	FrameBgHovered = 8,
	FrameBgActive = 9,
	TitleBg = 10,
	TitleBgActive = 11,
	TitleBgCollapsed = 12,
	MenuBarBg = 13,
	ScrollbarBg = 14,
	ScrollbarGrab = 15,
	ScrollbarGrabHovered = 16,
	ScrollbarGrabActive = 17,
	CheckMark = 18,
	SliderGrab = 19,
	SliderGrabActive = 20,
	Button = 21,
	ButtonHovered = 22,
	ButtonActive = 23,
	Header = 24,
	HeaderHovered = 25,
	HeaderActive = 26,
	Separator = 27,
	SeparatorHovered = 28,
	SeparatorActive = 29,
	ResizeGrip = 30,
	ResizeGripHovered = 31,
	ResizeGripActive = 32,
	Tab = 33,
	TabHovered = 34,
	TabActive = 35,
	TabUnfocused = 36,
	TabUnfocusedActive = 37,
	DockingPreview = 38,
	DockingEmptyBg = 39,
	PlotLines = 40,
	PlotLinesHovered = 41,
	PlotHistogram = 42,
	PlotHistogramHovered = 43,
	TableHeaderBg = 44,
	TableBorderStrong = 45,
	TableBorderLight = 46,
	TableRowBg = 47,
	TableRowBgAlt = 48,
	TextSelectedBg = 49,
	DragDropTarget = 50,
	NavHighlight = 51,
	NavWindowingHighlight = 52,
	NavWindowingDimBg = 53,
	ModalWindowDimBg = 54,
	COUNT = 55,
}
---
---@class imgui.ImGuiCol
imgui.ImGuiCol = ImGuiCol

local ImGuiStyleVar = {
	Alpha = 0,
	DisabledAlpha = 1,
	WindowPadding = 2,
	WindowRounding = 3,
	WindowBorderSize = 4,
	WindowMinSize = 5,
	WindowTitleAlign = 6,
	ChildRounding = 7,
	ChildBorderSize = 8,
	PopupRounding = 9,
	PopupBorderSize = 10,
	FramePadding = 11,
	FrameRounding = 12,
	FrameBorderSize = 13,
	ItemSpacing = 14,
	ItemInnerSpacing = 15,
	IndentSpacing = 16,
	CellPadding = 17,
	ScrollbarSize = 18,
	ScrollbarRounding = 19,
	GrabMinSize = 20,
	GrabRounding = 21,
	TabRounding = 22,
	ButtonTextAlign = 23,
	SelectableTextAlign = 24,
	COUNT = 25,
}
---
---@class imgui.ImGuiStyleVar
imgui.ImGuiStyleVar = ImGuiStyleVar

local ImGuiButtonFlags = {
	None = 0,
	MouseButtonLeft = 1,
	MouseButtonRight = 2,
	MouseButtonMiddle = 4,
	MouseButtonMask_ = 7,
	MouseButtonDefault_ = 1,
}
---
---@class imgui.ImGuiButtonFlags
imgui.ImGuiButtonFlags = ImGuiButtonFlags

local ImGuiColorEditFlags = {
	None = 0,
	NoAlpha = 2,
	NoPicker = 4,
	NoOptions = 8,
	NoSmallPreview = 16,
	NoInputs = 32,
	NoTooltip = 64,
	NoLabel = 128,
	NoSidePreview = 256,
	NoDragDrop = 512,
	NoBorder = 1024,
	AlphaBar = 65536,
	AlphaPreview = 131072,
	AlphaPreviewHalf = 262144,
	HDR = 524288,
	DisplayRGB = 1048576,
	DisplayHSV = 2097152,
	DisplayHex = 4194304,
	Uint8 = 8388608,
	Float = 16777216,
	PickerHueBar = 33554432,
	PickerHueWheel = 67108864,
	InputRGB = 134217728,
	InputHSV = 268435456,
	DefaultOptions_ = 177209344,
	DisplayMask_ = 7340032,
	DataTypeMask_ = 25165824,
	PickerMask_ = 100663296,
	InputMask_ = 402653184,
}
---
---@class imgui.ImGuiColorEditFlags
imgui.ImGuiColorEditFlags = ImGuiColorEditFlags

local ImGuiSliderFlags = {
	None = 0,
	AlwaysClamp = 16,
	Logarithmic = 32,
	NoRoundToFormat = 64,
	NoInput = 128,
	InvalidMask_ = 1879048207,
	ClampOnInput = 16,
}
---
---@class imgui.ImGuiSliderFlags
imgui.ImGuiSliderFlags = ImGuiSliderFlags

local ImGuiMouseButton = {
	Left = 0,
	Right = 1,
	Middle = 2,
	COUNT = 5,
}
---
---@class imgui.ImGuiMouseButton
imgui.ImGuiMouseButton = ImGuiMouseButton

local ImGuiMouseCursor = {
	None = -1,
	Arrow = 0,
	TextInput = 1,
	ResizeAll = 2,
	ResizeNS = 3,
	ResizeEW = 4,
	ResizeNESW = 5,
	ResizeNWSE = 6,
	Hand = 7,
	NotAllowed = 8,
	COUNT = 9,
}
---
---@class imgui.ImGuiMouseCursor
imgui.ImGuiMouseCursor = ImGuiMouseCursor

local ImGuiCond = {
	None = 0,
	Always = 1,
	Once = 2,
	FirstUseEver = 4,
	Appearing = 8,
}
---
---@class imgui.ImGuiCond
imgui.ImGuiCond = ImGuiCond

--- vertically align upcoming text baseline to FramePadding.y so that it will align properly to regularly framed items (call if you have text on a line before a framed item)
---@return nil @(void)
function imgui.alignTextToFramePadding()
end

--- square button with an arrow shape
---@param str_id string @(const char*)
---@param dir number @(ImGuiDir)
---@return boolean @(bool)
function imgui.arrowButton(str_id, dir)
end

--- helper to create a child window scrolling region that looks like a normal widget frame
---@param id number @(ImGuiID)
---@param size ImVec2 @(ImVec2)
---@param flags number @(ImGuiWindowFlags)
---@return boolean @(bool)
function imgui.beginChildFrame(id, size, flags)
end

--- helper to create a child window scrolling region that looks like a normal widget frame
---@param id number @(ImGuiID)
---@param size ImVec2 @(ImVec2)
---@return boolean @(bool)
function imgui.beginChildFrame(id, size)
end

---@param label string @(const char*)
---@param preview_value string @(const char*)
---@param flags number @(ImGuiComboFlags)
---@return boolean @(bool)
function imgui.beginCombo(label, preview_value, flags)
end

---@param label string @(const char*)
---@param preview_value string @(const char*)
---@return boolean @(bool)
function imgui.beginCombo(label, preview_value)
end

---@param disabled boolean @(bool)
---@return nil @(void)
function imgui.beginDisabled(disabled)
end

---@return nil @(void)
function imgui.beginDisabled()
end

--- call after submitting an item which may be dragged. when this return true, you can call SetDragDropPayload() + EndDragDropSource()
---@param flags number @(ImGuiDragDropFlags)
---@return boolean @(bool)
function imgui.beginDragDropSource(flags)
end

--- call after submitting an item which may be dragged. when this return true, you can call SetDragDropPayload() + EndDragDropSource()
---@return boolean @(bool)
function imgui.beginDragDropSource()
end

--- call after submitting an item that may receive a payload. If this returns true, you can call AcceptDragDropPayload() + EndDragDropTarget()
---@return boolean @(bool)
function imgui.beginDragDropTarget()
end

--- lock horizontal starting position
---@return nil @(void)
function imgui.beginGroup()
end

--- open a framed scrolling region
---@param label string @(const char*)
---@param size ImVec2 @(ImVec2)
---@return boolean @(bool)
function imgui.beginListBox(label, size)
end

--- open a framed scrolling region
---@param label string @(const char*)
---@return boolean @(bool)
function imgui.beginListBox(label)
end

--- create and append to a full screen menu-bar.
---@return boolean @(bool)
function imgui.beginMainMenuBar()
end

--- create a sub-menu entry. only call EndMenu() if this returns true!
---@param label string @(const char*)
---@param enabled boolean @(bool)
---@return boolean @(bool)
function imgui.beginMenu(label, enabled)
end

--- create a sub-menu entry. only call EndMenu() if this returns true!
---@param label string @(const char*)
---@return boolean @(bool)
function imgui.beginMenu(label)
end

--- append to menu-bar of current window (requires ImGuiWindowFlags_MenuBar flag set on parent window).
---@return boolean @(bool)
function imgui.beginMenuBar()
end

--- return true if the popup is open, and you can start outputting to it.
---@param str_id string @(const char*)
---@param flags number @(ImGuiWindowFlags)
---@return boolean @(bool)
function imgui.beginPopup(str_id, flags)
end

--- return true if the popup is open, and you can start outputting to it.
---@param str_id string @(const char*)
---@return boolean @(bool)
function imgui.beginPopup(str_id)
end

--- open+begin popup when clicked on last item. Use str_id==NULL to associate the popup to previous item. If you want to use that on a non-interactive item such as Text() you need to pass in an explicit ID here. read comments in .cpp!
---@param str_id string @(const char*)
---@param popup_flags number @(ImGuiPopupFlags)
---@return boolean @(bool)
function imgui.beginPopupContextItem(str_id, popup_flags)
end

--- open+begin popup when clicked on last item. Use str_id==NULL to associate the popup to previous item. If you want to use that on a non-interactive item such as Text() you need to pass in an explicit ID here. read comments in .cpp!
---@param str_id string @(const char*)
---@return boolean @(bool)
function imgui.beginPopupContextItem(str_id)
end

--- open+begin popup when clicked on last item. Use str_id==NULL to associate the popup to previous item. If you want to use that on a non-interactive item such as Text() you need to pass in an explicit ID here. read comments in .cpp!
---@return boolean @(bool)
function imgui.beginPopupContextItem()
end

--- open+begin popup when clicked in void (where there are no windows).
---@param str_id string @(const char*)
---@param popup_flags number @(ImGuiPopupFlags)
---@return boolean @(bool)
function imgui.beginPopupContextVoid(str_id, popup_flags)
end

--- open+begin popup when clicked in void (where there are no windows).
---@param str_id string @(const char*)
---@return boolean @(bool)
function imgui.beginPopupContextVoid(str_id)
end

--- open+begin popup when clicked in void (where there are no windows).
---@return boolean @(bool)
function imgui.beginPopupContextVoid()
end

--- open+begin popup when clicked on current window.
---@param str_id string @(const char*)
---@param popup_flags number @(ImGuiPopupFlags)
---@return boolean @(bool)
function imgui.beginPopupContextWindow(str_id, popup_flags)
end

--- open+begin popup when clicked on current window.
---@param str_id string @(const char*)
---@return boolean @(bool)
function imgui.beginPopupContextWindow(str_id)
end

--- open+begin popup when clicked on current window.
---@return boolean @(bool)
function imgui.beginPopupContextWindow()
end

--- create and append into a TabBar
---@param str_id string @(const char*)
---@param flags number @(ImGuiTabBarFlags)
---@return boolean @(bool)
function imgui.beginTabBar(str_id, flags)
end

--- create and append into a TabBar
---@param str_id string @(const char*)
---@return boolean @(bool)
function imgui.beginTabBar(str_id)
end

---@param str_id string @(const char*)
---@param column number @(int)
---@param flags number @(ImGuiTableFlags)
---@param outer_size ImVec2 @(ImVec2)
---@param inner_width number @(float)
---@return boolean @(bool)
function imgui.beginTable(str_id, column, flags, outer_size, inner_width)
end

---@param str_id string @(const char*)
---@param column number @(int)
---@param flags number @(ImGuiTableFlags)
---@param outer_size ImVec2 @(ImVec2)
---@return boolean @(bool)
function imgui.beginTable(str_id, column, flags, outer_size)
end

---@param str_id string @(const char*)
---@param column number @(int)
---@param flags number @(ImGuiTableFlags)
---@return boolean @(bool)
function imgui.beginTable(str_id, column, flags)
end

---@param str_id string @(const char*)
---@param column number @(int)
---@return boolean @(bool)
function imgui.beginTable(str_id, column)
end

--- beginappend a tooltip window. to create full-featured tooltip (with any kind of items).
---@return nil @(void)
function imgui.beginTooltip()
end

--- draw a small circle + keep the cursor on the same line. advance cursor x position by GetTreeNodeToLabelSpacing(), same distance that TreeNode() uses
---@return nil @(void)
function imgui.bullet()
end

--- shortcut for Bullet()+Text()
---@param fmt string @(const char*)
---@return nil @(void)
function imgui.bulletText(fmt)
end

--- button
---@param label string @(const char*)
---@param size ImVec2 @(ImVec2)
---@return boolean @(bool)
function imgui.button(label, size)
end

--- button
---@param label string @(const char*)
---@return boolean @(bool)
function imgui.button(label)
end

--- width of item given pushed settings and current cursor position. NOT necessarily the width of last item unlike most 'Item' functions.
---@return number @(float)
function imgui.calcItemWidth()
end

--- manually close the popup we have begin-ed into.
---@return nil @(void)
function imgui.closeCurrentPopup()
end

--- display a color squarebutton, hover for details, return true when pressed.
---@param desc_id string @(const char*)
---@param col ImVec4 @(ImVec4)
---@param flags number @(ImGuiColorEditFlags)
---@param size ImVec2 @(ImVec2)
---@return boolean @(bool)
function imgui.colorButton(desc_id, col, flags, size)
end

--- display a color squarebutton, hover for details, return true when pressed.
---@param desc_id string @(const char*)
---@param col ImVec4 @(ImVec4)
---@param flags number @(ImGuiColorEditFlags)
---@return boolean @(bool)
function imgui.colorButton(desc_id, col, flags)
end

--- display a color squarebutton, hover for details, return true when pressed.
---@param desc_id string @(const char*)
---@param col ImVec4 @(ImVec4)
---@return boolean @(bool)
function imgui.colorButton(desc_id, col)
end

---@param in_ ImVec4 @(ImVec4)
---@return number @(ImU32)
function imgui.colorConvertFloat4ToU32(in_)
end

---@param in_ number @(ImU32)
---@return ImVec4 @(ImVec4)
function imgui.colorConvertU32ToFloat4(in_)
end

---@param count number @(int)
---@param id string @(const char*)
---@param border boolean @(bool)
---@return nil @(void)
function imgui.columns(count, id, border)
end

---@param count number @(int)
---@param id string @(const char*)
---@return nil @(void)
function imgui.columns(count, id)
end

---@param count number @(int)
---@return nil @(void)
function imgui.columns(count)
end

---@return nil @(void)
function imgui.columns()
end

--- This is called by IMGUI_CHECKVERSION() macro.
---@param version_str string @(const char*)
---@param sz_io number @(size_t)
---@param sz_style number @(size_t)
---@param sz_vec2 number @(size_t)
---@param sz_vec4 number @(size_t)
---@param sz_drawvert number @(size_t)
---@param sz_drawidx number @(size_t)
---@return boolean @(bool)
function imgui.debugCheckVersionAndDataLayout(version_str, sz_io, sz_style, sz_vec2, sz_vec4, sz_drawvert, sz_drawidx)
end

---@param text string @(const char*)
---@return nil @(void)
function imgui.debugTextEncoding(text)
end

--- call DestroyWindow platform functions for all viewports. call from backend Shutdown() if you need to close platform windows before imgui shutdown. otherwise will be called by DestroyContext().
---@return nil @(void)
function imgui.destroyPlatformWindows()
end

---@param id number @(ImGuiID)
---@param size ImVec2 @(ImVec2)
---@param flags number @(ImGuiDockNodeFlags)
---@param window_class ImGuiWindowClass @(const ImGuiWindowClass*)
---@return number @(ImGuiID)
function imgui.dockSpace(id, size, flags, window_class)
end

---@param id number @(ImGuiID)
---@param size ImVec2 @(ImVec2)
---@param flags number @(ImGuiDockNodeFlags)
---@return number @(ImGuiID)
function imgui.dockSpace(id, size, flags)
end

---@param id number @(ImGuiID)
---@param size ImVec2 @(ImVec2)
---@return number @(ImGuiID)
function imgui.dockSpace(id, size)
end

---@param id number @(ImGuiID)
---@return number @(ImGuiID)
function imgui.dockSpace(id)
end

---@param viewport ImGuiViewport @(const ImGuiViewport*)
---@param flags number @(ImGuiDockNodeFlags)
---@param window_class ImGuiWindowClass @(const ImGuiWindowClass*)
---@return number @(ImGuiID)
function imgui.dockSpaceOverViewport(viewport, flags, window_class)
end

---@param viewport ImGuiViewport @(const ImGuiViewport*)
---@param flags number @(ImGuiDockNodeFlags)
---@return number @(ImGuiID)
function imgui.dockSpaceOverViewport(viewport, flags)
end

---@param viewport ImGuiViewport @(const ImGuiViewport*)
---@return number @(ImGuiID)
function imgui.dockSpaceOverViewport(viewport)
end

---@return number @(ImGuiID)
function imgui.dockSpaceOverViewport()
end

--- add a dummy item of given size. unlike InvisibleButton(), Dummy() won't take the mouse click or be navigable into.
---@param size ImVec2 @(ImVec2)
---@return nil @(void)
function imgui.dummy(size)
end

--- always call EndChildFrame() regardless of BeginChildFrame() return values (which indicates a collapsedclipped window)
---@return nil @(void)
function imgui.endChildFrame()
end

--- only call EndCombo() if BeginCombo() returns true!
---@return nil @(void)
function imgui.endCombo()
end

---@return nil @(void)
function imgui.endDisabled()
end

--- only call EndDragDropSource() if BeginDragDropSource() returns true!
---@return nil @(void)
function imgui.endDragDropSource()
end

--- only call EndDragDropTarget() if BeginDragDropTarget() returns true!
---@return nil @(void)
function imgui.endDragDropTarget()
end

--- ends the Dear ImGui frame. automatically called by Render(). If you don't need to render data (skipping rendering) you may call EndFrame() without Render()... but you'll have wasted CPU already! If you don't need to render, better to not create any windows and not call NewFrame() at all!
---@return nil @(void)
function imgui.endFrame()
end

--- unlock horizontal starting position + capture the whole group bounding box into one "item" (so you can use IsItemHovered() or layout primitives such as SameLine() on whole group, etc.)
---@return nil @(void)
function imgui.endGroup()
end

--- only call EndListBox() if BeginListBox() returned true!
---@return nil @(void)
function imgui.endListBox()
end

--- only call EndMainMenuBar() if BeginMainMenuBar() returns true!
---@return nil @(void)
function imgui.endMainMenuBar()
end

--- only call EndMenu() if BeginMenu() returns true!
---@return nil @(void)
function imgui.endMenu()
end

--- only call EndMenuBar() if BeginMenuBar() returns true!
---@return nil @(void)
function imgui.endMenuBar()
end

--- only call EndPopup() if BeginPopupXXX() returns true!
---@return nil @(void)
function imgui.endPopup()
end

--- only call EndTabBar() if BeginTabBar() returns true!
---@return nil @(void)
function imgui.endTabBar()
end

--- only call EndTabItem() if BeginTabItem() returns true!
---@return nil @(void)
function imgui.endTabItem()
end

--- only call EndTable() if BeginTable() returns true!
---@return nil @(void)
function imgui.endTable()
end

---@return nil @(void)
function imgui.endTooltip()
end

--- this is a helper for backends.
---@param id number @(ImGuiID)
---@return ImGuiViewport @(ImGuiViewport*)
function imgui.findViewportByID(id)
end

--- get background draw list for the given viewport. this draw list will be the first rendering one. Useful to quickly draw shapestext behind dear imgui contents.
---@param viewport ImGuiViewport @(ImGuiViewport*)
---@return ImDrawList @(ImDrawList*)
function imgui.getBackgroundDrawList(viewport)
end

--- get background draw list for the viewport associated to the current window. this draw list will be the first rendering one. Useful to quickly draw shapestext behind dear imgui contents.
---@return ImDrawList @(ImDrawList*)
function imgui.getBackgroundDrawList()
end

---@return string @(const char*)
function imgui.getClipboardText()
end

--- get current column index
---@return number @(int)
function imgui.getColumnIndex()
end

--- get position of column line (in pixels, from the left side of the contents region). pass -1 to use current column, otherwise 0..GetColumnsCount() inclusive. column 0 is typically 0.0f
---@param column_index number @(int)
---@return number @(float)
function imgui.getColumnOffset(column_index)
end

--- get position of column line (in pixels, from the left side of the contents region). pass -1 to use current column, otherwise 0..GetColumnsCount() inclusive. column 0 is typically 0.0f
---@return number @(float)
function imgui.getColumnOffset()
end

--- get column width (in pixels). pass -1 to use current column
---@param column_index number @(int)
---@return number @(float)
function imgui.getColumnWidth(column_index)
end

--- get column width (in pixels). pass -1 to use current column
---@return number @(float)
function imgui.getColumnWidth()
end

---@return number @(int)
function imgui.getColumnsCount()
end

--- == GetContentRegionMax() - GetCursorPos()
---@return ImVec2 @(ImVec2)
function imgui.getContentRegionAvail()
end

--- current content boundaries (typically window boundaries including scrolling, or current column boundaries), in windows coordinates
---@return ImVec2 @(ImVec2)
function imgui.getContentRegionMax()
end

--- cursor position in window coordinates (relative to window position)
---@return ImVec2 @(ImVec2)
function imgui.getCursorPos()
end

--- (some functions are using window-relative coordinates, such as: GetCursorPos, GetCursorStartPos, GetContentRegionMax, GetWindowContentRegion* etc.
---@return number @(float)
function imgui.getCursorPosX()
end

--- other functions such as GetCursorScreenPos or everything in ImDrawList::
---@return number @(float)
function imgui.getCursorPosY()
end

--- cursor position in absolute coordinates (useful to work with ImDrawList API). generally top-left == GetMainViewport()->Pos == (0,0) in single viewport mode, and bottom-right == GetMainViewport()->Pos+Size == io.DisplaySize in single-viewport mode.
---@return ImVec2 @(ImVec2)
function imgui.getCursorScreenPos()
end

--- initial cursor position in window coordinates
---@return ImVec2 @(ImVec2)
function imgui.getCursorStartPos()
end

--- get current font size (= height in pixels) of current font with current scale applied
---@return number @(float)
function imgui.getFontSize()
end

--- get UV coordinate for a while pixel, useful to draw custom shapes via the ImDrawList API
---@return ImVec2 @(ImVec2)
function imgui.getFontTexUvWhitePixel()
end

--- get foreground draw list for the given viewport. this draw list will be the last rendered one. Useful to quickly draw shapestext over dear imgui contents.
---@param viewport ImGuiViewport @(ImGuiViewport*)
---@return ImDrawList @(ImDrawList*)
function imgui.getForegroundDrawList(viewport)
end

--- get foreground draw list for the viewport associated to the current window. this draw list will be the last rendered one. Useful to quickly draw shapestext over dear imgui contents.
---@return ImDrawList @(ImDrawList*)
function imgui.getForegroundDrawList()
end

--- get global imgui frame count. incremented by 1 every frame.
---@return number @(int)
function imgui.getFrameCount()
end

--- ~ FontSize + style.FramePadding.y * 2
---@return number @(float)
function imgui.getFrameHeight()
end

--- ~ FontSize + style.FramePadding.y * 2 + style.ItemSpacing.y (distance in pixels between 2 consecutive lines of framed widgets)
---@return number @(float)
function imgui.getFrameHeightWithSpacing()
end

---@param str_id_begin string @(const char*)
---@param str_id_end string @(const char*)
---@return number @(ImGuiID)
function imgui.getID(str_id_begin, str_id_end)
end

--- calculate unique ID (hash of whole ID stack + given parameter). e.g. if you want to query into ImGuiStorage yourself
---@param str_id string @(const char*)
---@return number @(ImGuiID)
function imgui.getID(str_id)
end

--- get lower-right bounding rectangle of the last item (screen space)
---@return ImVec2 @(ImVec2)
function imgui.getItemRectMax()
end

--- get upper-left bounding rectangle of the last item (screen space)
---@return ImVec2 @(ImVec2)
function imgui.getItemRectMin()
end

--- get size of last item
---@return ImVec2 @(ImVec2)
function imgui.getItemRectSize()
end

--- [DEBUG] returns English name of the key. Those names a provided for debugging purpose and are not meant to be saved persistently not compared.
---@param key imgui.ImGuiKey @(ImGuiKey)
---@return string @(const char*)
function imgui.getKeyName(key)
end

--- uses provided repeat ratedelay. return a count, most often 0 or 1 but might be >1 if RepeatRate is small enough that DeltaTime > RepeatRate
---@param key imgui.ImGuiKey @(ImGuiKey)
---@param repeat_delay number @(float)
---@param rate number @(float)
---@return number @(int)
function imgui.getKeyPressedAmount(key, repeat_delay, rate)
end

--- return primarydefault viewport. This can never be NULL.
---@return ImGuiViewport @(ImGuiViewport*)
function imgui.getMainViewport()
end

--- return the number of successive mouse-clicks at the time where a click happen (otherwise 0).
---@param button number @(ImGuiMouseButton)
---@return number @(int)
function imgui.getMouseClickedCount(button)
end

--- get desired cursor type, reset in ImGui::NewFrame(), this is updated during the frame. valid before Render(). If you use software rendering by setting io.MouseDrawCursor ImGui will render those for you
---@return number @(ImGuiMouseCursor)
function imgui.getMouseCursor()
end

--- return the delta from the initial clicking position while the mouse button is pressed or was just released. This is locked and return 0.0f until the mouse moves past a distance threshold at least once (if lock_threshold < -1.0f, uses io.MouseDraggingThreshold)
---@param button number @(ImGuiMouseButton)
---@param lock_threshold number @(float)
---@return ImVec2 @(ImVec2)
function imgui.getMouseDragDelta(button, lock_threshold)
end

--- return the delta from the initial clicking position while the mouse button is pressed or was just released. This is locked and return 0.0f until the mouse moves past a distance threshold at least once (if lock_threshold < -1.0f, uses io.MouseDraggingThreshold)
---@param button number @(ImGuiMouseButton)
---@return ImVec2 @(ImVec2)
function imgui.getMouseDragDelta(button)
end

--- return the delta from the initial clicking position while the mouse button is pressed or was just released. This is locked and return 0.0f until the mouse moves past a distance threshold at least once (if lock_threshold < -1.0f, uses io.MouseDraggingThreshold)
---@return ImVec2 @(ImVec2)
function imgui.getMouseDragDelta()
end

--- shortcut to ImGui::GetIO().MousePos provided by user, to be consistent with other calls
---@return ImVec2 @(ImVec2)
function imgui.getMousePos()
end

--- retrieve mouse position at the time of opening popup we have BeginPopup() into (helper to avoid user backing that value themselves)
---@return ImVec2 @(ImVec2)
function imgui.getMousePosOnOpeningCurrentPopup()
end

--- get maximum scrolling amount ~~ ContentSize.x - WindowSize.x - DecorationsSize.x
---@return number @(float)
function imgui.getScrollMaxX()
end

--- get maximum scrolling amount ~~ ContentSize.y - WindowSize.y - DecorationsSize.y
---@return number @(float)
function imgui.getScrollMaxY()
end

--- get scrolling amount [0 .. GetScrollMaxX()]
---@return number @(float)
function imgui.getScrollX()
end

--- get scrolling amount [0 .. GetScrollMaxY()]
---@return number @(float)
function imgui.getScrollY()
end

--- get a string corresponding to the enum value (for display, saving, etc.).
---@param idx number @(ImGuiCol)
---@return string @(const char*)
function imgui.getStyleColorName(idx)
end

--- retrieve style color as stored in ImGuiStyle structure. use to feed back into PushStyleColor(), otherwise use GetColorU32() to get style color with style alpha baked in.
---@param idx number @(ImGuiCol)
---@return ImVec4 @(const ImVec4&)
function imgui.getStyleColorVec4(idx)
end

--- ~ FontSize
---@return number @(float)
function imgui.getTextLineHeight()
end

--- ~ FontSize + style.ItemSpacing.y (distance in pixels between 2 consecutive lines of text)
---@return number @(float)
function imgui.getTextLineHeightWithSpacing()
end

--- get global imgui time. incremented by io.DeltaTime every frame.
---@return number @(double)
function imgui.getTime()
end

--- horizontal distance preceding label when using TreeNode*() or Bullet() == (g.FontSize + style.FramePadding.x*2) for a regular unframed TreeNode
---@return number @(float)
function imgui.getTreeNodeToLabelSpacing()
end

--- get the compiled version string e.g. "1.80 WIP" (essentially the value for IMGUI_VERSION from the compiled version of imgui.cpp)
---@return string @(const char*)
function imgui.getVersion()
end

--- content boundaries max for the full window (roughly (0,0)+Size-Scroll) where Size can be overridden with SetNextWindowContentSize(), in window coordinates
---@return ImVec2 @(ImVec2)
function imgui.getWindowContentRegionMax()
end

--- content boundaries min for the full window (roughly (0,0)-Scroll), in window coordinates
---@return ImVec2 @(ImVec2)
function imgui.getWindowContentRegionMin()
end

---@return number @(ImGuiID)
function imgui.getWindowDockID()
end

--- get DPI scale currently associated to the current window's viewport.
---@return number @(float)
function imgui.getWindowDpiScale()
end

--- get draw list associated to the current window, to append your own drawing primitives
---@return ImDrawList @(ImDrawList*)
function imgui.getWindowDrawList()
end

--- get current window height (shortcut for GetWindowSize().y)
---@return number @(float)
function imgui.getWindowHeight()
end

--- get current window position in screen space (useful if you want to do your own drawing via the DrawList API)
---@return ImVec2 @(ImVec2)
function imgui.getWindowPos()
end

--- get current window size
---@return ImVec2 @(ImVec2)
function imgui.getWindowSize()
end

--- get viewport currently associated to the current window.
---@return ImGuiViewport @(ImGuiViewport*)
function imgui.getWindowViewport()
end

--- get current window width (shortcut for GetWindowSize().x)
---@return number @(float)
function imgui.getWindowWidth()
end

--- move content position toward the right, by indent_w, or style.IndentSpacing if indent_w <= 0
---@param indent_w number @(float)
---@return nil @(void)
function imgui.indent(indent_w)
end

--- move content position toward the right, by indent_w, or style.IndentSpacing if indent_w <= 0
---@return nil @(void)
function imgui.indent()
end

--- flexible button behavior without the visuals, frequently useful to build custom behaviors using the public api (along with IsItemActive, IsItemHovered, etc.)
---@param str_id string @(const char*)
---@param size ImVec2 @(ImVec2)
---@param flags number @(ImGuiButtonFlags)
---@return boolean @(bool)
function imgui.invisibleButton(str_id, size, flags)
end

--- flexible button behavior without the visuals, frequently useful to build custom behaviors using the public api (along with IsItemActive, IsItemHovered, etc.)
---@param str_id string @(const char*)
---@param size ImVec2 @(ImVec2)
---@return boolean @(bool)
function imgui.invisibleButton(str_id, size)
end

--- is any item active?
---@return boolean @(bool)
function imgui.isAnyItemActive()
end

--- is any item focused?
---@return boolean @(bool)
function imgui.isAnyItemFocused()
end

--- is any item hovered?
---@return boolean @(bool)
function imgui.isAnyItemHovered()
end

--- [WILL OBSOLETE] is any mouse button held? This was designed for backends, but prefer having backend maintain a mask of held mouse buttons, because upcoming input queue system will make this invalid.
---@return boolean @(bool)
function imgui.isAnyMouseDown()
end

--- was the last item just made active (item was previously inactive).
---@return boolean @(bool)
function imgui.isItemActivated()
end

--- is the last item active? (e.g. button being held, text field being edited. This will continuously return true while holding mouse button on an item. Items that don't interact will always return false)
---@return boolean @(bool)
function imgui.isItemActive()
end

--- is the last item hovered and mouse clicked on? (**)  == IsMouseClicked(mouse_button) && IsItemHovered()Important. (**) this is NOT equivalent to the behavior of e.g. Button(). Read comments in function definition.
---@param mouse_button number @(ImGuiMouseButton)
---@return boolean @(bool)
function imgui.isItemClicked(mouse_button)
end

--- is the last item hovered and mouse clicked on? (**)  == IsMouseClicked(mouse_button) && IsItemHovered()Important. (**) this is NOT equivalent to the behavior of e.g. Button(). Read comments in function definition.
---@return boolean @(bool)
function imgui.isItemClicked()
end

--- was the last item just made inactive (item was previously active). Useful for UndoRedo patterns with widgets that require continuous editing.
---@return boolean @(bool)
function imgui.isItemDeactivated()
end

--- was the last item just made inactive and made a value change when it was active? (e.g. SliderDrag moved). Useful for UndoRedo patterns with widgets that require continuous editing. Note that you may get false positives (some widgets such as Combo()ListBox()Selectable() will return true even when clicking an already selected item).
---@return boolean @(bool)
function imgui.isItemDeactivatedAfterEdit()
end

--- did the last item modify its underlying value this frame? or was pressed? This is generally the same as the "bool" return value of many widgets.
---@return boolean @(bool)
function imgui.isItemEdited()
end

--- is the last item focused for keyboardgamepad navigation?
---@return boolean @(bool)
function imgui.isItemFocused()
end

--- is the last item hovered? (and usable, aka not blocked by a popup, etc.). See ImGuiHoveredFlags for more options.
---@param flags number @(ImGuiHoveredFlags)
---@return boolean @(bool)
function imgui.isItemHovered(flags)
end

--- is the last item hovered? (and usable, aka not blocked by a popup, etc.). See ImGuiHoveredFlags for more options.
---@return boolean @(bool)
function imgui.isItemHovered()
end

--- was the last item open state toggled? set by TreeNode().
---@return boolean @(bool)
function imgui.isItemToggledOpen()
end

--- is the last item visible? (items may be out of sight because of clippingscrolling)
---@return boolean @(bool)
function imgui.isItemVisible()
end

--- is key being held.
---@param key imgui.ImGuiKey @(ImGuiKey)
---@return boolean @(bool)
function imgui.isKeyDown(key)
end

--- was key pressed (went from !Down to Down)? if repeat=true, uses io.KeyRepeatDelay KeyRepeatRate
---@param key imgui.ImGuiKey @(ImGuiKey)
---@param repeat_ boolean @(bool)
---@return boolean @(bool)
function imgui.isKeyPressed(key, repeat_)
end

--- was key pressed (went from !Down to Down)? if repeat=true, uses io.KeyRepeatDelay KeyRepeatRate
---@param key imgui.ImGuiKey @(ImGuiKey)
---@return boolean @(bool)
function imgui.isKeyPressed(key)
end

--- was key released (went from Down to !Down)?
---@param key imgui.ImGuiKey @(ImGuiKey)
---@return boolean @(bool)
function imgui.isKeyReleased(key)
end

--- did mouse button clicked? (went from !Down to Down). Same as GetMouseClickedCount() == 1.
---@param button number @(ImGuiMouseButton)
---@param repeat_ boolean @(bool)
---@return boolean @(bool)
function imgui.isMouseClicked(button, repeat_)
end

--- did mouse button clicked? (went from !Down to Down). Same as GetMouseClickedCount() == 1.
---@param button number @(ImGuiMouseButton)
---@return boolean @(bool)
function imgui.isMouseClicked(button)
end

--- did mouse button double-clicked? Same as GetMouseClickedCount() == 2. (note that a double-click will also report IsMouseClicked() == true)
---@param button number @(ImGuiMouseButton)
---@return boolean @(bool)
function imgui.isMouseDoubleClicked(button)
end

--- is mouse button held?
---@param button number @(ImGuiMouseButton)
---@return boolean @(bool)
function imgui.isMouseDown(button)
end

--- is mouse dragging? (if lock_threshold < -1.0f, uses io.MouseDraggingThreshold)
---@param button number @(ImGuiMouseButton)
---@param lock_threshold number @(float)
---@return boolean @(bool)
function imgui.isMouseDragging(button, lock_threshold)
end

--- is mouse dragging? (if lock_threshold < -1.0f, uses io.MouseDraggingThreshold)
---@param button number @(ImGuiMouseButton)
---@return boolean @(bool)
function imgui.isMouseDragging(button)
end

--- is mouse hovering given bounding rect (in screen space). clipped by current clipping settings, but disregarding of other consideration of focuswindow orderingpopup-block.
---@param r_min ImVec2 @(ImVec2)
---@param r_max ImVec2 @(ImVec2)
---@param clip boolean @(bool)
---@return boolean @(bool)
function imgui.isMouseHoveringRect(r_min, r_max, clip)
end

--- is mouse hovering given bounding rect (in screen space). clipped by current clipping settings, but disregarding of other consideration of focuswindow orderingpopup-block.
---@param r_min ImVec2 @(ImVec2)
---@param r_max ImVec2 @(ImVec2)
---@return boolean @(bool)
function imgui.isMouseHoveringRect(r_min, r_max)
end

--- did mouse button released? (went from Down to !Down)
---@param button number @(ImGuiMouseButton)
---@return boolean @(bool)
function imgui.isMouseReleased(button)
end

--- return true if the popup is open.
---@param str_id string @(const char*)
---@param flags number @(ImGuiPopupFlags)
---@return boolean @(bool)
function imgui.isPopupOpen(str_id, flags)
end

--- return true if the popup is open.
---@param str_id string @(const char*)
---@return boolean @(bool)
function imgui.isPopupOpen(str_id)
end

--- test if rectangle (in screen space) is visible not clipped. to perform coarse clipping on user's side.
---@param rect_min ImVec2 @(ImVec2)
---@param rect_max ImVec2 @(ImVec2)
---@return boolean @(bool)
function imgui.isRectVisible(rect_min, rect_max)
end

--- test if rectangle (of given size, starting from cursor position) is visible not clipped.
---@param size ImVec2 @(ImVec2)
---@return boolean @(bool)
function imgui.isRectVisible(size)
end

---@return boolean @(bool)
function imgui.isWindowAppearing()
end

---@return boolean @(bool)
function imgui.isWindowCollapsed()
end

--- is current window docked into another window?
---@return boolean @(bool)
function imgui.isWindowDocked()
end

--- is current window focused? or its rootchild, depending on flags. see flags for options.
---@param flags number @(ImGuiFocusedFlags)
---@return boolean @(bool)
function imgui.isWindowFocused(flags)
end

--- is current window focused? or its rootchild, depending on flags. see flags for options.
---@return boolean @(bool)
function imgui.isWindowFocused()
end

--- is current window hovered (and typically: not blocked by a popupmodal)? see flags for options. NB: If you are trying to check whether your mouse should be dispatched to imgui or to your app, you should use the 'io.WantCaptureMouse' boolean for that! Please read the FAQ!
---@param flags number @(ImGuiHoveredFlags)
---@return boolean @(bool)
function imgui.isWindowHovered(flags)
end

--- is current window hovered (and typically: not blocked by a popupmodal)? see flags for options. NB: If you are trying to check whether your mouse should be dispatched to imgui or to your app, you should use the 'io.WantCaptureMouse' boolean for that! Please read the FAQ!
---@return boolean @(bool)
function imgui.isWindowHovered()
end

--- display text+label aligned the same way as value+label widgets
---@param label string @(const char*)
---@param fmt string @(const char*)
---@return nil @(void)
function imgui.labelText(label, fmt)
end

--- call after CreateContext() and before the first call to NewFrame(). NewFrame() automatically calls LoadIniSettingsFromDisk(io.IniFilename).
---@param ini_filename string @(const char*)
---@return nil @(void)
function imgui.loadIniSettingsFromDisk(ini_filename)
end

--- call after CreateContext() and before the first call to NewFrame() to provide .ini data from your own data source.
---@param ini_data string @(const char*)
---@param ini_size number @(size_t)
---@return nil @(void)
function imgui.loadIniSettingsFromMemory(ini_data, ini_size)
end

--- call after CreateContext() and before the first call to NewFrame() to provide .ini data from your own data source.
---@param ini_data string @(const char*)
---@return nil @(void)
function imgui.loadIniSettingsFromMemory(ini_data)
end

--- helper to display buttons for logging to ttyfileclipboard
---@return nil @(void)
function imgui.logButtons()
end

--- stop logging (close file, etc.)
---@return nil @(void)
function imgui.logFinish()
end

--- pass text data straight to log (without being displayed)
---@param fmt string @(const char*)
---@return nil @(void)
function imgui.logText(fmt)
end

--- start logging to OS clipboard
---@param auto_open_depth number @(int)
---@return nil @(void)
function imgui.logToClipboard(auto_open_depth)
end

--- start logging to OS clipboard
---@return nil @(void)
function imgui.logToClipboard()
end

--- start logging to file
---@param auto_open_depth number @(int)
---@param filename string @(const char*)
---@return nil @(void)
function imgui.logToFile(auto_open_depth, filename)
end

--- start logging to file
---@param auto_open_depth number @(int)
---@return nil @(void)
function imgui.logToFile(auto_open_depth)
end

--- start logging to file
---@return nil @(void)
function imgui.logToFile()
end

--- start logging to tty (stdout)
---@param auto_open_depth number @(int)
---@return nil @(void)
function imgui.logToTTY(auto_open_depth)
end

--- start logging to tty (stdout)
---@return nil @(void)
function imgui.logToTTY()
end

--- start a new Dear ImGui frame, you can submit any command from this point until Render()EndFrame().
---@return nil @(void)
function imgui.newFrame()
end

--- undo a SameLine() or force a new line when in a horizontal-layout context.
---@return nil @(void)
function imgui.newLine()
end

--- next column, defaults to current row or next row if the current row is finished
---@return nil @(void)
function imgui.nextColumn()
end

--- id overload to facilitate calling from nested stacks
---@param id number @(ImGuiID)
---@param popup_flags number @(ImGuiPopupFlags)
---@return nil @(void)
function imgui.openPopup(id, popup_flags)
end

--- call to mark popup as open (don't call every frame!).
---@param str_id string @(const char*)
---@param popup_flags number @(ImGuiPopupFlags)
---@return nil @(void)
function imgui.openPopup(str_id, popup_flags)
end

--- id overload to facilitate calling from nested stacks
---@param id number @(ImGuiID)
---@return nil @(void)
function imgui.openPopup(id)
end

--- call to mark popup as open (don't call every frame!).
---@param str_id string @(const char*)
---@return nil @(void)
function imgui.openPopup(str_id)
end

--- helper to open popup when clicked on last item. Default to ImGuiPopupFlags_MouseButtonRight == 1. (note: actually triggers on the mouse _released_ event to be consistent with popup behaviors)
---@param str_id string @(const char*)
---@param popup_flags number @(ImGuiPopupFlags)
---@return nil @(void)
function imgui.openPopupOnItemClick(str_id, popup_flags)
end

--- helper to open popup when clicked on last item. Default to ImGuiPopupFlags_MouseButtonRight == 1. (note: actually triggers on the mouse _released_ event to be consistent with popup behaviors)
---@param str_id string @(const char*)
---@return nil @(void)
function imgui.openPopupOnItemClick(str_id)
end

--- helper to open popup when clicked on last item. Default to ImGuiPopupFlags_MouseButtonRight == 1. (note: actually triggers on the mouse _released_ event to be consistent with popup behaviors)
---@return nil @(void)
function imgui.openPopupOnItemClick()
end

---@return nil @(void)
function imgui.popAllowKeyboardFocus()
end

---@return nil @(void)
function imgui.popButtonRepeat()
end

---@return nil @(void)
function imgui.popClipRect()
end

---@return nil @(void)
function imgui.popFont()
end

--- pop from the ID stack.
---@return nil @(void)
function imgui.popID()
end

---@return nil @(void)
function imgui.popItemWidth()
end

---@param count number @(int)
---@return nil @(void)
function imgui.popStyleColor(count)
end

---@return nil @(void)
function imgui.popStyleColor()
end

---@param count number @(int)
---@return nil @(void)
function imgui.popStyleVar(count)
end

---@return nil @(void)
function imgui.popStyleVar()
end

---@return nil @(void)
function imgui.popTextWrapPos()
end

---@param fraction number @(float)
---@param size_arg ImVec2 @(ImVec2)
---@param overlay string @(const char*)
---@return nil @(void)
function imgui.progressBar(fraction, size_arg, overlay)
end

---@param fraction number @(float)
---@param size_arg ImVec2 @(ImVec2)
---@return nil @(void)
function imgui.progressBar(fraction, size_arg)
end

---@param fraction number @(float)
---@return nil @(void)
function imgui.progressBar(fraction)
end

--- == tab stop enable. Allow focusing using TABShift-TAB, enabled by default but you can disable it for certain widgets
---@param allow_keyboard_focus boolean @(bool)
---@return nil @(void)
function imgui.pushAllowKeyboardFocus(allow_keyboard_focus)
end

--- in 'repeat' mode, Button*() functions return repeated true in a typematic manner (using io.KeyRepeatDelayio.KeyRepeatRate setting). Note that you can call IsItemActive() after any Button() to tell if the button is held in the current frame.
---@param repeat_ boolean @(bool)
---@return nil @(void)
function imgui.pushButtonRepeat(repeat_)
end

---@param clip_rect_min ImVec2 @(ImVec2)
---@param clip_rect_max ImVec2 @(ImVec2)
---@param intersect_with_current_clip_rect boolean @(bool)
---@return nil @(void)
function imgui.pushClipRect(clip_rect_min, clip_rect_max, intersect_with_current_clip_rect)
end

--- push width of items for common large "item+label" widgets. >0.0f: width in pixels, <0.0f align xx pixels to the right of window (so -FLT_MIN always align width to the right side).
---@param item_width number @(float)
---@return nil @(void)
function imgui.pushItemWidth(item_width)
end

--- push word-wrapping position for Text*() commands. < 0.0f: no wrapping; 0.0f: wrap to end of window (or column); > 0.0f: wrap at 'wrap_pos_x' position in window local space
---@param wrap_local_pos_x number @(float)
---@return nil @(void)
function imgui.pushTextWrapPos(wrap_local_pos_x)
end

--- push word-wrapping position for Text*() commands. < 0.0f: no wrapping; 0.0f: wrap to end of window (or column); > 0.0f: wrap at 'wrap_pos_x' position in window local space
---@return nil @(void)
function imgui.pushTextWrapPos()
end

--- ends the Dear ImGui frame, finalize the draw data. You can then get call GetDrawData().
---@return nil @(void)
function imgui.render()
end

--- call in main loop. will call RenderWindowSwapBuffers platform functions for each secondary viewport which doesn't have the ImGuiViewportFlags_Minimized flag set. May be reimplemented by user for custom rendering needs.
---@return nil @(void)
function imgui.renderPlatformWindowsDefault()
end

--- 
---@param button number @(ImGuiMouseButton)
---@return nil @(void)
function imgui.resetMouseDragDelta(button)
end

--- 
---@return nil @(void)
function imgui.resetMouseDragDelta()
end

--- call between widgets or groups to layout them horizontally. X position given in window coordinates.
---@param offset_from_start_x number @(float)
---@param spacing number @(float)
---@return nil @(void)
function imgui.sameLine(offset_from_start_x, spacing)
end

--- call between widgets or groups to layout them horizontally. X position given in window coordinates.
---@param offset_from_start_x number @(float)
---@return nil @(void)
function imgui.sameLine(offset_from_start_x)
end

--- call between widgets or groups to layout them horizontally. X position given in window coordinates.
---@return nil @(void)
function imgui.sameLine()
end

--- this is automatically called (if io.IniFilename is not empty) a few seconds after any modification that should be reflected in the .ini file (and also by DestroyContext).
---@param ini_filename string @(const char*)
---@return nil @(void)
function imgui.saveIniSettingsToDisk(ini_filename)
end

--- separator, generally horizontal. inside a menu bar or in horizontal layout mode, this becomes a vertical separator.
---@return nil @(void)
function imgui.separator()
end

---@param text string @(const char*)
---@return nil @(void)
function imgui.setClipboardText(text)
end

--- initialize current options (generally on application startup) if you want to select a default format, picker type, etc. User will be able to change many settings, unless you pass the _NoOptions flag to your calls.
---@param flags number @(ImGuiColorEditFlags)
---@return nil @(void)
function imgui.setColorEditOptions(flags)
end

--- set position of column line (in pixels, from the left side of the contents region). pass -1 to use current column
---@param column_index number @(int)
---@param offset_x number @(float)
---@return nil @(void)
function imgui.setColumnOffset(column_index, offset_x)
end

--- set column width (in pixels). pass -1 to use current column
---@param column_index number @(int)
---@param width number @(float)
---@return nil @(void)
function imgui.setColumnWidth(column_index, width)
end

--- are using the main, absolute coordinate system.
---@param local_pos ImVec2 @(ImVec2)
---@return nil @(void)
function imgui.setCursorPos(local_pos)
end

--- GetWindowPos() + GetCursorPos() == GetCursorScreenPos() etc.)
---@param local_x number @(float)
---@return nil @(void)
function imgui.setCursorPosX(local_x)
end

--- 
---@param local_y number @(float)
---@return nil @(void)
function imgui.setCursorPosY(local_y)
end

--- cursor position in absolute coordinates
---@param pos ImVec2 @(ImVec2)
---@return nil @(void)
function imgui.setCursorScreenPos(pos)
end

--- allow last item to be overlapped by a subsequent item. sometimes useful with invisible buttons, selectables, etc. to catch unused area.
---@return nil @(void)
function imgui.setItemAllowOverlap()
end

--- make last item the default focused item of a window.
---@return nil @(void)
function imgui.setItemDefaultFocus()
end

--- focus keyboard on the next widget. Use positive 'offset' to access sub components of a multiple component widget. Use -1 to access previous widget.
---@param offset number @(int)
---@return nil @(void)
function imgui.setKeyboardFocusHere(offset)
end

--- focus keyboard on the next widget. Use positive 'offset' to access sub components of a multiple component widget. Use -1 to access previous widget.
---@return nil @(void)
function imgui.setKeyboardFocusHere()
end

--- set desired cursor type
---@param cursor_type number @(ImGuiMouseCursor)
---@return nil @(void)
function imgui.setMouseCursor(cursor_type)
end

--- Override io.WantCaptureKeyboard flag next frame (said flag is left for your application to handle, typically when true it instructs your app to ignore inputs). e.g. force capture keyboard when your widget is being hovered. This is equivalent to setting "io.WantCaptureKeyboard = want_capture_keyboard"; after the next NewFrame() call.
---@param want_capture_keyboard boolean @(bool)
---@return nil @(void)
function imgui.setNextFrameWantCaptureKeyboard(want_capture_keyboard)
end

--- Override io.WantCaptureMouse flag next frame (said flag is left for your application to handle, typical when true it instucts your app to ignore inputs). This is equivalent to setting "io.WantCaptureMouse = want_capture_mouse;" after the next NewFrame() call.
---@param want_capture_mouse boolean @(bool)
---@return nil @(void)
function imgui.setNextFrameWantCaptureMouse(want_capture_mouse)
end

--- set next TreeNodeCollapsingHeader open state.
---@param is_open boolean @(bool)
---@param cond number @(ImGuiCond)
---@return nil @(void)
function imgui.setNextItemOpen(is_open, cond)
end

--- set next TreeNodeCollapsingHeader open state.
---@param is_open boolean @(bool)
---@return nil @(void)
function imgui.setNextItemOpen(is_open)
end

--- set width of the _next_ common large "item+label" widget. >0.0f: width in pixels, <0.0f align xx pixels to the right of window (so -FLT_MIN always align width to the right side)
---@param item_width number @(float)
---@return nil @(void)
function imgui.setNextItemWidth(item_width)
end

--- set next window background color alpha. helper to easily override the Alpha component of ImGuiCol_WindowBgChildBgPopupBg. you may also use ImGuiWindowFlags_NoBackground.
---@param alpha number @(float)
---@return nil @(void)
function imgui.setNextWindowBgAlpha(alpha)
end

--- set next window collapsed state. call before Begin()
---@param collapsed boolean @(bool)
---@param cond number @(ImGuiCond)
---@return nil @(void)
function imgui.setNextWindowCollapsed(collapsed, cond)
end

--- set next window collapsed state. call before Begin()
---@param collapsed boolean @(bool)
---@return nil @(void)
function imgui.setNextWindowCollapsed(collapsed)
end

--- set next window content size (~ scrollable client area, which enforce the range of scrollbars). Not including window decorations (title bar, menu bar, etc.) nor WindowPadding. set an axis to 0.0f to leave it automatic. call before Begin()
---@param size ImVec2 @(ImVec2)
---@return nil @(void)
function imgui.setNextWindowContentSize(size)
end

--- set next window dock id
---@param dock_id number @(ImGuiID)
---@param cond number @(ImGuiCond)
---@return nil @(void)
function imgui.setNextWindowDockID(dock_id, cond)
end

--- set next window dock id
---@param dock_id number @(ImGuiID)
---@return nil @(void)
function imgui.setNextWindowDockID(dock_id)
end

--- set next window to be focused top-most. call before Begin()
---@return nil @(void)
function imgui.setNextWindowFocus()
end

--- set next window position. call before Begin(). use pivot=(0.5f,0.5f) to center on given point, etc.
---@param pos ImVec2 @(ImVec2)
---@param cond number @(ImGuiCond)
---@param pivot ImVec2 @(ImVec2)
---@return nil @(void)
function imgui.setNextWindowPos(pos, cond, pivot)
end

--- set next window position. call before Begin(). use pivot=(0.5f,0.5f) to center on given point, etc.
---@param pos ImVec2 @(ImVec2)
---@param cond number @(ImGuiCond)
---@return nil @(void)
function imgui.setNextWindowPos(pos, cond)
end

--- set next window position. call before Begin(). use pivot=(0.5f,0.5f) to center on given point, etc.
---@param pos ImVec2 @(ImVec2)
---@return nil @(void)
function imgui.setNextWindowPos(pos)
end

--- set next window size. set axis to 0.0f to force an auto-fit on this axis. call before Begin()
---@param size ImVec2 @(ImVec2)
---@param cond number @(ImGuiCond)
---@return nil @(void)
function imgui.setNextWindowSize(size, cond)
end

--- set next window size. set axis to 0.0f to force an auto-fit on this axis. call before Begin()
---@param size ImVec2 @(ImVec2)
---@return nil @(void)
function imgui.setNextWindowSize(size)
end

--- set next window size limits. use -1,-1 on either XY axis to preserve the current size. Sizes will be rounded down. Use callback to apply non-trivial programmatic constraints.
---@param size_min ImVec2 @(ImVec2)
---@param size_max ImVec2 @(ImVec2)
---@param custom_callback void ()(ImGuiSizeCallbackData ) @(ImGuiSizeCallback)
---@return nil @(void)
function imgui.setNextWindowSizeConstraints(size_min, size_max, custom_callback)
end

--- set next window size limits. use -1,-1 on either XY axis to preserve the current size. Sizes will be rounded down. Use callback to apply non-trivial programmatic constraints.
---@param size_min ImVec2 @(ImVec2)
---@param size_max ImVec2 @(ImVec2)
---@return nil @(void)
function imgui.setNextWindowSizeConstraints(size_min, size_max)
end

--- set next window viewport
---@param viewport_id number @(ImGuiID)
---@return nil @(void)
function imgui.setNextWindowViewport(viewport_id)
end

--- adjust scrolling amount to make given position visible. Generally GetCursorStartPos() + offset to compute a valid position.
---@param local_x number @(float)
---@param center_x_ratio number @(float)
---@return nil @(void)
function imgui.setScrollFromPosX(local_x, center_x_ratio)
end

--- adjust scrolling amount to make given position visible. Generally GetCursorStartPos() + offset to compute a valid position.
---@param local_x number @(float)
---@return nil @(void)
function imgui.setScrollFromPosX(local_x)
end

--- adjust scrolling amount to make given position visible. Generally GetCursorStartPos() + offset to compute a valid position.
---@param local_y number @(float)
---@param center_y_ratio number @(float)
---@return nil @(void)
function imgui.setScrollFromPosY(local_y, center_y_ratio)
end

--- adjust scrolling amount to make given position visible. Generally GetCursorStartPos() + offset to compute a valid position.
---@param local_y number @(float)
---@return nil @(void)
function imgui.setScrollFromPosY(local_y)
end

--- adjust scrolling amount to make current cursor position visible. center_x_ratio=0.0: left, 0.5: center, 1.0: right. When using to make a "defaultcurrent item" visible, consider using SetItemDefaultFocus() instead.
---@param center_x_ratio number @(float)
---@return nil @(void)
function imgui.setScrollHereX(center_x_ratio)
end

--- adjust scrolling amount to make current cursor position visible. center_x_ratio=0.0: left, 0.5: center, 1.0: right. When using to make a "defaultcurrent item" visible, consider using SetItemDefaultFocus() instead.
---@return nil @(void)
function imgui.setScrollHereX()
end

--- adjust scrolling amount to make current cursor position visible. center_y_ratio=0.0: top, 0.5: center, 1.0: bottom. When using to make a "defaultcurrent item" visible, consider using SetItemDefaultFocus() instead.
---@param center_y_ratio number @(float)
---@return nil @(void)
function imgui.setScrollHereY(center_y_ratio)
end

--- adjust scrolling amount to make current cursor position visible. center_y_ratio=0.0: top, 0.5: center, 1.0: bottom. When using to make a "defaultcurrent item" visible, consider using SetItemDefaultFocus() instead.
---@return nil @(void)
function imgui.setScrollHereY()
end

--- set scrolling amount [0 .. GetScrollMaxX()]
---@param scroll_x number @(float)
---@return nil @(void)
function imgui.setScrollX(scroll_x)
end

--- set scrolling amount [0 .. GetScrollMaxY()]
---@param scroll_y number @(float)
---@return nil @(void)
function imgui.setScrollY(scroll_y)
end

--- notify TabBar or Docking system of a closed tabwindow ahead (useful to reduce visual flicker on reorderable tab bars). For tab-bar: call after BeginTabBar() and before Tab submissions. Otherwise call with a window name.
---@param tab_or_docked_window_label string @(const char*)
---@return nil @(void)
function imgui.setTabItemClosed(tab_or_docked_window_label)
end

--- set a text-only tooltip, typically use with ImGui::IsItemHovered(). override any previous call to SetTooltip().
---@param fmt string @(const char*)
---@return nil @(void)
function imgui.setTooltip(fmt)
end

--- set named window collapsed state
---@param name string @(const char*)
---@param collapsed boolean @(bool)
---@param cond number @(ImGuiCond)
---@return nil @(void)
function imgui.setWindowCollapsed(name, collapsed, cond)
end

--- set named window collapsed state
---@param name string @(const char*)
---@param collapsed boolean @(bool)
---@return nil @(void)
function imgui.setWindowCollapsed(name, collapsed)
end

--- (not recommended) set current window collapsed state. prefer using SetNextWindowCollapsed().
---@param collapsed boolean @(bool)
---@param cond number @(ImGuiCond)
---@return nil @(void)
function imgui.setWindowCollapsed(collapsed, cond)
end

--- (not recommended) set current window collapsed state. prefer using SetNextWindowCollapsed().
---@param collapsed boolean @(bool)
---@return nil @(void)
function imgui.setWindowCollapsed(collapsed)
end

--- set named window to be focused top-most. use NULL to remove focus.
---@param name string @(const char*)
---@return nil @(void)
function imgui.setWindowFocus(name)
end

--- (not recommended) set current window to be focused top-most. prefer using SetNextWindowFocus().
---@return nil @(void)
function imgui.setWindowFocus()
end

--- [OBSOLETE] set font scale. Adjust IO.FontGlobalScale if you want to scale all windows. This is an old API! For correct scaling, prefer to reload font + rebuild ImFontAtlas + call style.ScaleAllSizes().
---@param scale number @(float)
---@return nil @(void)
function imgui.setWindowFontScale(scale)
end

--- set named window position.
---@param name string @(const char*)
---@param pos ImVec2 @(ImVec2)
---@param cond number @(ImGuiCond)
---@return nil @(void)
function imgui.setWindowPos(name, pos, cond)
end

--- set named window position.
---@param name string @(const char*)
---@param pos ImVec2 @(ImVec2)
---@return nil @(void)
function imgui.setWindowPos(name, pos)
end

--- (not recommended) set current window position - call within Begin()End(). prefer using SetNextWindowPos(), as this may incur tearing and side-effects.
---@param pos ImVec2 @(ImVec2)
---@param cond number @(ImGuiCond)
---@return nil @(void)
function imgui.setWindowPos(pos, cond)
end

--- (not recommended) set current window position - call within Begin()End(). prefer using SetNextWindowPos(), as this may incur tearing and side-effects.
---@param pos ImVec2 @(ImVec2)
---@return nil @(void)
function imgui.setWindowPos(pos)
end

--- set named window size. set axis to 0.0f to force an auto-fit on this axis.
---@param name string @(const char*)
---@param size ImVec2 @(ImVec2)
---@param cond number @(ImGuiCond)
---@return nil @(void)
function imgui.setWindowSize(name, size, cond)
end

--- set named window size. set axis to 0.0f to force an auto-fit on this axis.
---@param name string @(const char*)
---@param size ImVec2 @(ImVec2)
---@return nil @(void)
function imgui.setWindowSize(name, size)
end

--- (not recommended) set current window size - call within Begin()End(). set to ImVec2(0, 0) to force an auto-fit. prefer using SetNextWindowSize(), as this may incur tearing and minor side-effects.
---@param size ImVec2 @(ImVec2)
---@param cond number @(ImGuiCond)
---@return nil @(void)
function imgui.setWindowSize(size, cond)
end

--- (not recommended) set current window size - call within Begin()End(). set to ImVec2(0, 0) to force an auto-fit. prefer using SetNextWindowSize(), as this may incur tearing and minor side-effects.
---@param size ImVec2 @(ImVec2)
---@return nil @(void)
function imgui.setWindowSize(size)
end

--- add font selector block (not a window), essentially a combo listing the loaded fonts.
---@param label string @(const char*)
---@return nil @(void)
function imgui.showFontSelector(label)
end

--- add style selector block (not a window), essentially a combo listing the default styles.
---@param label string @(const char*)
---@return boolean @(bool)
function imgui.showStyleSelector(label)
end

--- add basic helpinfo block (not a window): how to manipulate ImGui as an end-user (mousekeyboard controls).
---@return nil @(void)
function imgui.showUserGuide()
end

--- button with FramePadding=(0,0) to easily embed within text
---@param label string @(const char*)
---@return boolean @(bool)
function imgui.smallButton(label)
end

--- add vertical spacing.
---@return nil @(void)
function imgui.spacing()
end

--- create a Tab behaving like a button. return true when clicked. cannot be selected in the tab bar.
---@param label string @(const char*)
---@param flags number @(ImGuiTabItemFlags)
---@return boolean @(bool)
function imgui.tabItemButton(label, flags)
end

--- create a Tab behaving like a button. return true when clicked. cannot be selected in the tab bar.
---@param label string @(const char*)
---@return boolean @(bool)
function imgui.tabItemButton(label)
end

--- return number of columns (value passed to BeginTable)
---@return number @(int)
function imgui.tableGetColumnCount()
end

--- return column flags so you can query their EnabledVisibleSortedHovered status flags. Pass -1 to use current column.
---@param column_n number @(int)
---@return number @(ImGuiTableColumnFlags)
function imgui.tableGetColumnFlags(column_n)
end

--- return column flags so you can query their EnabledVisibleSortedHovered status flags. Pass -1 to use current column.
---@return number @(ImGuiTableColumnFlags)
function imgui.tableGetColumnFlags()
end

--- return current column index.
---@return number @(int)
function imgui.tableGetColumnIndex()
end

--- return "" if column didn't have a name declared by TableSetupColumn(). Pass -1 to use current column.
---@param column_n number @(int)
---@return string @(const char*)
function imgui.tableGetColumnName(column_n)
end

--- return "" if column didn't have a name declared by TableSetupColumn(). Pass -1 to use current column.
---@return string @(const char*)
function imgui.tableGetColumnName()
end

--- return current row index.
---@return number @(int)
function imgui.tableGetRowIndex()
end

--- submit one header cell manually (rarely used)
---@param label string @(const char*)
---@return nil @(void)
function imgui.tableHeader(label)
end

--- submit all headers cells based on data provided to TableSetupColumn() + submit context menu
---@return nil @(void)
function imgui.tableHeadersRow()
end

--- append into the next column (or first column of next row if currently in last column). Return true when column is visible.
---@return boolean @(bool)
function imgui.tableNextColumn()
end

--- append into the first cell of a new row.
---@param row_flags number @(ImGuiTableRowFlags)
---@param min_row_height number @(float)
---@return nil @(void)
function imgui.tableNextRow(row_flags, min_row_height)
end

--- append into the first cell of a new row.
---@param row_flags number @(ImGuiTableRowFlags)
---@return nil @(void)
function imgui.tableNextRow(row_flags)
end

--- append into the first cell of a new row.
---@return nil @(void)
function imgui.tableNextRow()
end

--- change the color of a cell, row, or column. See ImGuiTableBgTarget_ flags for details.
---@param target number @(ImGuiTableBgTarget)
---@param color number @(ImU32)
---@param column_n number @(int)
---@return nil @(void)
function imgui.tableSetBgColor(target, color, column_n)
end

--- change the color of a cell, row, or column. See ImGuiTableBgTarget_ flags for details.
---@param target number @(ImGuiTableBgTarget)
---@param color number @(ImU32)
---@return nil @(void)
function imgui.tableSetBgColor(target, color)
end

--- change user accessible enableddisabled state of a column. Set to false to hide the column. User can use the context menu to change this themselves (right-click in headers, or right-click in columns body with ImGuiTableFlags_ContextMenuInBody)
---@param column_n number @(int)
---@param v boolean @(bool)
---@return nil @(void)
function imgui.tableSetColumnEnabled(column_n, v)
end

--- append into the specified column. Return true when column is visible.
---@param column_n number @(int)
---@return boolean @(bool)
function imgui.tableSetColumnIndex(column_n)
end

---@param label string @(const char*)
---@param flags number @(ImGuiTableColumnFlags)
---@param init_width_or_weight number @(float)
---@param user_id number @(ImGuiID)
---@return nil @(void)
function imgui.tableSetupColumn(label, flags, init_width_or_weight, user_id)
end

---@param label string @(const char*)
---@param flags number @(ImGuiTableColumnFlags)
---@param init_width_or_weight number @(float)
---@return nil @(void)
function imgui.tableSetupColumn(label, flags, init_width_or_weight)
end

---@param label string @(const char*)
---@param flags number @(ImGuiTableColumnFlags)
---@return nil @(void)
function imgui.tableSetupColumn(label, flags)
end

---@param label string @(const char*)
---@return nil @(void)
function imgui.tableSetupColumn(label)
end

--- lock columnsrows so they stay visible when scrolled.
---@param cols number @(int)
---@param rows number @(int)
---@return nil @(void)
function imgui.tableSetupScrollFreeze(cols, rows)
end

--- formatted text
---@param fmt string @(const char*)
---@return nil @(void)
function imgui.text(fmt)
end

--- shortcut for PushStyleColor(ImGuiCol_Text, col); Text(fmt, ...); PopStyleColor();
---@param col ImVec4 @(ImVec4)
---@param fmt string @(const char*)
---@return nil @(void)
function imgui.textColored(col, fmt)
end

--- shortcut for PushStyleColor(ImGuiCol_Text, style.Colors[ImGuiCol_TextDisabled]); Text(fmt, ...); PopStyleColor();
---@param fmt string @(const char*)
---@return nil @(void)
function imgui.textDisabled(fmt)
end

--- raw text without formatting. Roughly equivalent to Text("%s", text) but: A) doesn't require null terminated string if 'text_end' is specified, B) it's faster, no memory copy is done, no buffer size limits, recommended for long chunks of text.
---@param text string @(const char*)
---@param text_end string @(const char*)
---@return nil @(void)
function imgui.textUnformatted(text, text_end)
end

--- raw text without formatting. Roughly equivalent to Text("%s", text) but: A) doesn't require null terminated string if 'text_end' is specified, B) it's faster, no memory copy is done, no buffer size limits, recommended for long chunks of text.
---@param text string @(const char*)
---@return nil @(void)
function imgui.textUnformatted(text)
end

--- shortcut for PushTextWrapPos(0.0f); Text(fmt, ...); PopTextWrapPos();. Note that this won't work on an auto-resizing window if there's no other widgets to extend the window width, yoy may need to set a size using SetNextWindowSize().
---@param fmt string @(const char*)
---@return nil @(void)
function imgui.textWrapped(fmt)
end

--- helper variation to easily decorelate the id from the displayed string. Read the FAQ about why and how to use ID. to align arbitrary text at the same level as a TreeNode() you can use Bullet().
---@param str_id string @(const char*)
---@param fmt string @(const char*)
---@return boolean @(bool)
function imgui.treeNode(str_id, fmt)
end

---@param label string @(const char*)
---@return boolean @(bool)
function imgui.treeNode(label)
end

---@param str_id string @(const char*)
---@param flags number @(ImGuiTreeNodeFlags)
---@param fmt string @(const char*)
---@return boolean @(bool)
function imgui.treeNodeEx(str_id, flags, fmt)
end

---@param label string @(const char*)
---@param flags number @(ImGuiTreeNodeFlags)
---@return boolean @(bool)
function imgui.treeNodeEx(label, flags)
end

---@param label string @(const char*)
---@return boolean @(bool)
function imgui.treeNodeEx(label)
end

--- ~ Unindent()+PopId()
---@return nil @(void)
function imgui.treePop()
end

--- ~ Indent()+PushId(). Already called by TreeNode() when returning true, but you can call TreePushTreePop yourself if desired.
---@param str_id string @(const char*)
---@return nil @(void)
function imgui.treePush(str_id)
end

--- move content position back to the left, by indent_w, or style.IndentSpacing if indent_w <= 0
---@param indent_w number @(float)
---@return nil @(void)
function imgui.unindent(indent_w)
end

--- move content position back to the left, by indent_w, or style.IndentSpacing if indent_w <= 0
---@return nil @(void)
function imgui.unindent()
end

--- call in main loop. will call CreateWindowResizeWindowetc. platform functions for each secondary viewport, and DestroyWindow for each inactive viewport.
---@return nil @(void)
function imgui.updatePlatformWindows()
end

