#include "common.h"

#define LUA_EXTENSIONSLIBNAME "lua_extensions"

#ifdef __cplusplus
extern "C"
{
#endif

  LUALIB_API int luaopen_lua_extensions(lua_State *L);

#ifdef __cplusplus
}
#endif