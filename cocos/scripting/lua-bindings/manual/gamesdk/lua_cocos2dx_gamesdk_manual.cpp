
#include "lua_cocos2dx_gamesdk_manual.hpp"
#include "cocos/scripting/lua-bindings/manual/LuaBasicConversions.h"
#include "LuaGameSdk.h"

int lua_cocos2dx_gamesdk_LuaGameSdk_getInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_getInstance'", nullptr);
            return 0;
        }
        LuaGameSdk* ret = LuaGameSdk::getInstance();
        object_to_luaval<GameSdk>(tolua_S, "GameSdk",(GameSdk*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "GameSdk:getInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_getInstance'.",&tolua_err);
#endif
    return 0;
}

static int tolua_Cocos2d_LuaGameSdk_printLog(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
    tolua_Error tolua_err;
    if (
        !tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err) ||
         !tolua_isnoobj(tolua_S,2,&tolua_err)
        )
        goto tolua_lerror;
    else
#endif
    {
        LuaGameSdk* self    = (LuaGameSdk*)  tolua_tousertype(tolua_S,1,0);
        if (NULL != self ) {
            self->printLog();
        }
    }
    return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'printLog'.",&tolua_err);
    return 0;
#endif
}

int tolua_Cocos2d_LuaGameSdk_registerCallbackHandler(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
    tolua_Error tolua_err;
    if (
        !tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err) ||
        !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err) ||
         !tolua_isnoobj(tolua_S,3,&tolua_err)
        )
        goto tolua_lerror;
    else
#endif
    {
        LuaGameSdk* self    = (LuaGameSdk*)  tolua_tousertype(tolua_S,1,0);
        if (NULL != self ) {
            int handler = (  toluafix_ref_function(tolua_S,2,0));
            ScriptHandlerMgr::getInstance()->addObjectHandler((void*)self, handler, ScriptHandlerMgr::HandlerType::EVENT_GAMESDK);
        }
    }
    return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'registerGameSdkCallbackHandler'.",&tolua_err);
    return 0;
#endif
}

static void extendGameSdk(lua_State* L)
{
    lua_pushstring(L, "GameSdk");
    lua_rawget(L, LUA_REGISTRYINDEX);
    if (lua_istable(L,-1))
    {
		tolua_function(L, "getInstance", lua_cocos2dx_gamesdk_LuaGameSdk_getInstance);
        tolua_function(L, "printLog", tolua_Cocos2d_LuaGameSdk_printLog);
        tolua_function(L, "registerCallbackHandler", tolua_Cocos2d_LuaGameSdk_registerCallbackHandler);
    }
    lua_pop(L, 1);
}

int register_all_cocos2dx_gamesdk_manual(lua_State* L)
{
    if (nullptr == L)
        return 0;

    extendGameSdk(L);
    
    return 0;
}

int register_gamesdk_module(lua_State* L)
{
    lua_getglobal(L, "_G");
    if (lua_istable(L,-1))//stack:...,_G,
    {
        register_all_cocos2dx_gamesdk_manual(L);
    }
    lua_pop(L, 1);

    return 1;
}
