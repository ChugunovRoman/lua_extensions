project(lua_extensions)

set(SRC_FILES
    "src/common.h"
    "src/lua_extend_string.h"
    "src/lua_extend_string.cpp"
    "src/lua_extend_table.h"
    "src/lua_extend_table.cpp"
    "src/lua_extensions.h"
    "src/lua_extensions.cpp"
)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
	${LUA_INCLUDE_DIR}
    ${CMAKE_SOURCE_DIR}/Externals
    ${CMAKE_SOURCE_DIR}/Externals/luabind
)

add_library(${PROJECT_NAME} STATIC ${SRC_FILES})

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    xrLuabind
    ${LIBS}
    ${LUA_LIBRARIES}
)

target_compile_definitions(${PROJECT_NAME}
    PRIVATE
)

set_target_properties(${PROJECT_NAME} PROPERTIES
    PREFIX ""
)
