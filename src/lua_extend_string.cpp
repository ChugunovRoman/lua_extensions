#include "lua_extend_string.h"

int str_trim(lua_State *L)
{
    const char *front;
    const char *end;
    size_t size;
    front = luaL_checklstring(L, 1, &size);
    end = &front[size - 1];
    for (; size && isspace(*front); size--, front++)
        ;
    for (; size && isspace(*end); size--, end--)
        ;
    lua_pushlstring(L, front, (size_t)(end - front) + 1);
    return 1;
}

int str_trim_l(lua_State *L)
{
    const char *front;
    const char *end;
    size_t size;
    front = luaL_checklstring(L, 1, &size);
    end = &front[size - 1];
    for (; size && isspace(*front); size--, front++)
        ;
    lua_pushlstring(L, front, (size_t)(end - front) + 1);
    return 1;
}

int str_trim_r(lua_State *L)
{
    const char *front;
    const char *end;
    size_t size;
    front = luaL_checklstring(L, 1, &size);
    end = &front[size - 1];
    for (; size && isspace(*end); size--, end--)
        ;
    lua_pushlstring(L, front, (size_t)(end - front) + 1);
    return 1;
}

int str_trim_w(lua_State *L)
{
    int i = 0, d, n;
    const char *s = luaL_checkstring(L, 1);
    ;
    while (s[i] == ' ')
        i++;
    n = i;
    while (s[i] != ' ' && s[i])
        i++;
    d = i - n;
    lua_pushlstring(L, s + n, d);
    return 1;
}

const luaL_Reg strlib[] = {
    {"trim", str_trim},
    {"trim_l", str_trim_l},
    {"trim_r", str_trim_r},
    {"trim_w", str_trim_w},
    {NULL, NULL}};

int open_string(lua_State *L)
{
    luaL_openlib(L, LUA_STRLIBNAME, strlib, 0);
    return 0;
}
