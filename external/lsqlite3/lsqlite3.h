
#ifndef LSQLITE3_H
#define LSQLITE3_H

#include "external/lua/lua/lua.h"
#include "external/lua/lua/lauxlib.h"

#ifndef LUA_LIB
#	define LUA_LIB
#endif
/*-------------------------------------------------------------------------*\
* This macro prefixes all exported API functions
\*-------------------------------------------------------------------------*/
#ifndef LUASOCKET_API
#define LUASOCKET_API extern
#endif

LUALIB_API int luaopen_lsqlite3(lua_State *L);

#endif