set(LIB_NAME cc_imgui)

include_directories(
    imgui
    imgui/misc/cpp
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${COCOS2DX_ROOT_PATH}/cocos
    ${COCOS2DX_ROOT_PATH}/cocos/base
    ${COCOS2DX_ROOT_PATH}/cocos/platform
    ${COCOS2DX_ROOT_PATH}/external
    ${COCOS2DX_ROOT_PATH}/external/glfw3/include/win32
)

if(WINDOWS)
    include_directories(${COCOS2DX_ROOT_PATH}/external/win32-specific/gles/include/OGLES)
endif()

set(HEADER
    CCIMGUI.h
    CCImGuiLayer.h
    CCImGuiColorTextEdit.h
    imgui_impl_cocos2dx.h
    imgui/imconfig.h
    imgui/imgui.h
    imgui/imgui_internal.h
    imgui/imstb_rectpack.h
    imgui/imstb_textedit.h
    imgui/imstb_truetype.h
    imgui/misc/cpp/imgui_stdlib.h
    imgui_markdown/imgui_markdown.h
    ImGuiColorTextEdit/TextEditor.h
    implot/implot.h
)

set(SOURCE
    CCIMGUI.cpp
    CCImGuiLayer.cpp
    CCImGuiColorTextEdit.cpp
    imgui_impl_cocos2dx.cpp
    imgui/imgui.cpp
    imgui/imgui_demo.cpp
    imgui/imgui_draw.cpp
    imgui/imgui_widgets.cpp
    imgui/misc/cpp/imgui_stdlib.cpp
    ImGuiColorTextEdit/TextEditor.cpp
    implot/implot.cpp
    implot/implot_demo.cpp
)

if(BUILD_LUA_LIBS)
    include_directories(
        lua-bindings
        ${COCOS2DX_ROOT_PATH}/external/lua/luajit/include
        ${COCOS2DX_ROOT_PATH}/external/lua/tolua
    )
    list(APPEND HEADER
        lua-bindings/imgui_lua.hpp
        lua-bindings/lua_conversion.hpp
        lua-bindings/lua_imgui_auto.hpp
        lua-bindings/lua_imguiDrawList_auto.hpp
        lua-bindings/lua_imguiFont_auto.hpp
        lua-bindings/lua_imguiIO_auto.hpp
        lua-bindings/lua_imguiStyle_auto.hpp
        lua-bindings/lua_imguiViewport_auto.hpp
        lua-bindings/lua_ImGuiColorTextEdit_auto.hpp
        lua-bindings/lua_implot_auto.hpp
    )
    list(APPEND SOURCE
        lua-bindings/imgui_lua.cpp
        lua-bindings/lua_imguiDrawList_auto.cpp
        lua-bindings/lua_imguiFont_auto.cpp
        lua-bindings/lua_imguiIO_auto.cpp
        lua-bindings/lua_imguiStyle_auto.cpp
        lua-bindings/lua_imguiViewport_auto.cpp
        lua-bindings/lua_imgui_auto.cpp
        lua-bindings/lua_ImGuiColorTextEdit_auto.cpp
        lua-bindings/lua_implot_auto.cpp
    )
endif()

add_library(${LIB_NAME} STATIC ${SOURCE} ${HEADER})
add_dependencies(${LIB_NAME} cocos2d)
use_cocos2dx_compile_define(${LIB_NAME})
use_cocos2dx_compile_options(${LIB_NAME})

if(BUILD_LUA_LIBS)
    target_compile_definitions(${LIB_NAME} PUBLIC _USRLUASTATIC)
endif()

set_target_properties(${LIB_NAME}
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
)
target_include_directories(${LIB_NAME} INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/imgui
)

if(XCODE OR VS)
    cocos_mark_code_files(${LIB_NAME})
endif()
