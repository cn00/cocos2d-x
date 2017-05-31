#ifndef COCOS_SCRIPTING_LUA_BINDINGS_LUA_COCOS2DX_GAMESDK_MANUAL_H
#define COCOS_SCRIPTING_LUA_BINDINGS_LUA_COCOS2DX_GAMESDK_MANUAL_H

#ifdef __cplusplus
extern "C" {
#endif
#include "tolua++.h"
#ifdef __cplusplus
}
#endif

//#include "typedef_luabind.h"

TOLUA_API int register_all_cocos2dx_gamesdk_manual(lua_State* L);
TOLUA_API int register_gamesdk_module(lua_State* L);


#endif // #ifndef COCOS_SCRIPTING_LUA_BINDINGS_LUA_COCOS2DX_GAMESDK_MANUAL_H
