#include "lua_extensions.h";

#include "lua_extend_table.h";
#include "lua_extend_string.h";

static const luaL_Reg R[] = {
    {"encode", mar_encode},
    {"decode", mar_decode},
    {"clone", mar_clone},
    {NULL, NULL}};

LUALIB_API int luaopen_lua_extensions(lua_State *L)
{
  lua_newtable(L);
  luaL_register(L, LUA_EXTENSIONSLIBNAME, R);

  return 1;
}