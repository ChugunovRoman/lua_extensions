#include "lua_extensions.h"

LUALIB_API int luaopen_lua_extensions(lua_State *L)
{
  lua_newtable(L);

  open_table(L);
  open_string(L);

  return 1;
}