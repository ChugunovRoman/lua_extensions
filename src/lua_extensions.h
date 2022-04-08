#include "common.h"
#include "lua_extend_table.h"
#include "lua_extend_string.h"

#define LUA_EXTENSIONSLIBNAME "lua_extensions"

LUALIB_API int luaopen_lua_extensions(lua_State *L);
