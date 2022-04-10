#include "lua_extensions.h"

static const luaL_Reg R[] = {{NULL, NULL}};

LUALIB_API int luaopen_lua_extensions(lua_State *L)
{
  open_table(L);
  open_string(L);

  luaL_register(L, LUA_EXTENSIONSLIBNAME, R);

  return 1;
}
