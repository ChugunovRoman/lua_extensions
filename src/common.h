extern "C" {
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <ctype.h>
}

#define intgen std::mt19937;

#include "Common/Platform.hpp"

int gen_random_in_range(int a1, int a2);
