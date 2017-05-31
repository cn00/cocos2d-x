#include "lua_cocos2dx_gamesdk_auto.hpp"
#include "gamesdk/GameSdk.h"
#include "cocos/scripting/lua-bindings/manual/tolua_fix.h"
#include "cocos/scripting/lua-bindings/manual/LuaBasicConversions.h"



int lua_cocos2dx_gamesdk_GameSdk_onCheckLoginSuccess(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_onCheckLoginSuccess'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "GameSdk:onCheckLoginSuccess");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_onCheckLoginSuccess'", nullptr);
            return 0;
        }
        cobj->onCheckLoginSuccess(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:onCheckLoginSuccess",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_onCheckLoginSuccess'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_payUO(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_payUO'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 6) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        const char* arg3;
        const char* arg4;
        const char* arg5;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "GameSdk:payUO"); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "GameSdk:payUO"); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "GameSdk:payUO"); arg2 = arg2_tmp.c_str();

        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp, "GameSdk:payUO"); arg3 = arg3_tmp.c_str();

        std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp, "GameSdk:payUO"); arg4 = arg4_tmp.c_str();

        std::string arg5_tmp; ok &= luaval_to_std_string(tolua_S, 7, &arg5_tmp, "GameSdk:payUO"); arg5 = arg5_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_payUO'", nullptr);
            return 0;
        }
        cobj->payUO(arg0, arg1, arg2, arg3, arg4, arg5);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:payUO",argc, 6);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_payUO'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_createRole(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_createRole'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        const char* arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "GameSdk:createRole"); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "GameSdk:createRole"); arg1 = arg1_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_createRole'", nullptr);
            return 0;
        }
        cobj->createRole(arg0, arg1);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:createRole",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_createRole'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_isIgnoreGameSdk(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_isIgnoreGameSdk'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_isIgnoreGameSdk'", nullptr);
            return 0;
        }
        bool ret = cobj->isIgnoreGameSdk();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:isIgnoreGameSdk",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_isIgnoreGameSdk'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_pay(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_pay'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 10) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        const char* arg3;
        const char* arg4;
        const char* arg5;
        const char* arg6;
        const char* arg7;
        const char* arg8;
        const char* arg9;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "GameSdk:pay"); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "GameSdk:pay"); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "GameSdk:pay"); arg2 = arg2_tmp.c_str();

        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp, "GameSdk:pay"); arg3 = arg3_tmp.c_str();

        std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp, "GameSdk:pay"); arg4 = arg4_tmp.c_str();

        std::string arg5_tmp; ok &= luaval_to_std_string(tolua_S, 7, &arg5_tmp, "GameSdk:pay"); arg5 = arg5_tmp.c_str();

        std::string arg6_tmp; ok &= luaval_to_std_string(tolua_S, 8, &arg6_tmp, "GameSdk:pay"); arg6 = arg6_tmp.c_str();

        std::string arg7_tmp; ok &= luaval_to_std_string(tolua_S, 9, &arg7_tmp, "GameSdk:pay"); arg7 = arg7_tmp.c_str();

        std::string arg8_tmp; ok &= luaval_to_std_string(tolua_S, 10, &arg8_tmp, "GameSdk:pay"); arg8 = arg8_tmp.c_str();

        std::string arg9_tmp; ok &= luaval_to_std_string(tolua_S, 11, &arg9_tmp, "GameSdk:pay"); arg9 = arg9_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_pay'", nullptr);
            return 0;
        }
        cobj->pay(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:pay",argc, 10);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_pay'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_payIOS(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_payIOS'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 11) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        const char* arg3;
        const char* arg4;
        const char* arg5;
        const char* arg6;
        const char* arg7;
        const char* arg8;
        const char* arg9;
        const char* arg10;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "GameSdk:payIOS"); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "GameSdk:payIOS"); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "GameSdk:payIOS"); arg2 = arg2_tmp.c_str();

        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp, "GameSdk:payIOS"); arg3 = arg3_tmp.c_str();

        std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp, "GameSdk:payIOS"); arg4 = arg4_tmp.c_str();

        std::string arg5_tmp; ok &= luaval_to_std_string(tolua_S, 7, &arg5_tmp, "GameSdk:payIOS"); arg5 = arg5_tmp.c_str();

        std::string arg6_tmp; ok &= luaval_to_std_string(tolua_S, 8, &arg6_tmp, "GameSdk:payIOS"); arg6 = arg6_tmp.c_str();

        std::string arg7_tmp; ok &= luaval_to_std_string(tolua_S, 9, &arg7_tmp, "GameSdk:payIOS"); arg7 = arg7_tmp.c_str();

        std::string arg8_tmp; ok &= luaval_to_std_string(tolua_S, 10, &arg8_tmp, "GameSdk:payIOS"); arg8 = arg8_tmp.c_str();

        std::string arg9_tmp; ok &= luaval_to_std_string(tolua_S, 11, &arg9_tmp, "GameSdk:payIOS"); arg9 = arg9_tmp.c_str();

        std::string arg10_tmp; ok &= luaval_to_std_string(tolua_S, 12, &arg10_tmp, "GameSdk:payIOS"); arg10 = arg10_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_payIOS'", nullptr);
            return 0;
        }
        cobj->payIOS(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:payIOS",argc, 11);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_payIOS'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_onLoginSuccess(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_onLoginSuccess'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "GameSdk:onLoginSuccess"); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "GameSdk:onLoginSuccess"); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "GameSdk:onLoginSuccess"); arg2 = arg2_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_onLoginSuccess'", nullptr);
            return 0;
        }
        cobj->onLoginSuccess(arg0, arg1, arg2);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:onLoginSuccess",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_onLoginSuccess'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_registerUser(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_registerUser'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_registerUser'", nullptr);
            return 0;
        }
        cobj->registerUser();
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:registerUser",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_registerUser'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_onLogoutSuccess(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_onLogoutSuccess'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_onLogoutSuccess'", nullptr);
            return 0;
        }
        cobj->onLogoutSuccess();
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:onLogoutSuccess",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_onLogoutSuccess'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_onLoginFail(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_onLoginFail'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        int arg0;
        const char* arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "GameSdk:onLoginFail");

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "GameSdk:onLoginFail"); arg1 = arg1_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_onLoginFail'", nullptr);
            return 0;
        }
        cobj->onLoginFail(arg0, arg1);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:onLoginFail",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_onLoginFail'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_channelId(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_channelId'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_channelId'", nullptr);
            return 0;
        }
        int ret = cobj->channelId();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:channelId",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_channelId'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_logout(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_logout'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_logout'", nullptr);
            return 0;
        }
        cobj->logout();
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:logout",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_logout'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_notifyZone(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_notifyZone'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        const char* arg3;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "GameSdk:notifyZone"); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "GameSdk:notifyZone"); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "GameSdk:notifyZone"); arg2 = arg2_tmp.c_str();

        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp, "GameSdk:notifyZone"); arg3 = arg3_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_notifyZone'", nullptr);
            return 0;
        }
        cobj->notifyZone(arg0, arg1, arg2, arg3);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:notifyZone",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_notifyZone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_onGetUserInfoSuccess(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_onGetUserInfoSuccess'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        int arg0;
        const char* arg1;
        const char* arg2;
        const char* arg3;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "GameSdk:onGetUserInfoSuccess");

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "GameSdk:onGetUserInfoSuccess"); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "GameSdk:onGetUserInfoSuccess"); arg2 = arg2_tmp.c_str();

        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp, "GameSdk:onGetUserInfoSuccess"); arg3 = arg3_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_onGetUserInfoSuccess'", nullptr);
            return 0;
        }
        cobj->onGetUserInfoSuccess(arg0, arg1, arg2, arg3);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:onGetUserInfoSuccess",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_onGetUserInfoSuccess'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_getUserInfo(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_getUserInfo'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_getUserInfo'", nullptr);
            return 0;
        }
        cobj->getUserInfo();
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:getUserInfo",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_getUserInfo'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_onPayFail(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_onPayFail'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        int arg0;
        const char* arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "GameSdk:onPayFail");

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "GameSdk:onPayFail"); arg1 = arg1_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_onPayFail'", nullptr);
            return 0;
        }
        cobj->onPayFail(arg0, arg1);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:onPayFail",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_onPayFail'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_createRoleUO(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_createRoleUO'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 9) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        const char* arg3;
        const char* arg4;
        const char* arg5;
        const char* arg6;
        const char* arg7;
        const char* arg8;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "GameSdk:createRoleUO"); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "GameSdk:createRoleUO"); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "GameSdk:createRoleUO"); arg2 = arg2_tmp.c_str();

        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp, "GameSdk:createRoleUO"); arg3 = arg3_tmp.c_str();

        std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp, "GameSdk:createRoleUO"); arg4 = arg4_tmp.c_str();

        std::string arg5_tmp; ok &= luaval_to_std_string(tolua_S, 7, &arg5_tmp, "GameSdk:createRoleUO"); arg5 = arg5_tmp.c_str();

        std::string arg6_tmp; ok &= luaval_to_std_string(tolua_S, 8, &arg6_tmp, "GameSdk:createRoleUO"); arg6 = arg6_tmp.c_str();

        std::string arg7_tmp; ok &= luaval_to_std_string(tolua_S, 9, &arg7_tmp, "GameSdk:createRoleUO"); arg7 = arg7_tmp.c_str();

        std::string arg8_tmp; ok &= luaval_to_std_string(tolua_S, 10, &arg8_tmp, "GameSdk:createRoleUO"); arg8 = arg8_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_createRoleUO'", nullptr);
            return 0;
        }
        cobj->createRoleUO(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:createRoleUO",argc, 9);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_createRoleUO'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_checkLogin(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_checkLogin'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_checkLogin'", nullptr);
            return 0;
        }
        cobj->checkLogin();
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:checkLogin",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_checkLogin'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_levelUp(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_levelUp'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "GameSdk:levelUp"); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "GameSdk:levelUp"); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "GameSdk:levelUp"); arg2 = arg2_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_levelUp'", nullptr);
            return 0;
        }
        cobj->levelUp(arg0, arg1, arg2);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:levelUp",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_levelUp'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_chooseServer(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_chooseServer'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 9) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        const char* arg3;
        const char* arg4;
        const char* arg5;
        const char* arg6;
        const char* arg7;
        const char* arg8;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "GameSdk:chooseServer"); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "GameSdk:chooseServer"); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "GameSdk:chooseServer"); arg2 = arg2_tmp.c_str();

        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp, "GameSdk:chooseServer"); arg3 = arg3_tmp.c_str();

        std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp, "GameSdk:chooseServer"); arg4 = arg4_tmp.c_str();

        std::string arg5_tmp; ok &= luaval_to_std_string(tolua_S, 7, &arg5_tmp, "GameSdk:chooseServer"); arg5 = arg5_tmp.c_str();

        std::string arg6_tmp; ok &= luaval_to_std_string(tolua_S, 8, &arg6_tmp, "GameSdk:chooseServer"); arg6 = arg6_tmp.c_str();

        std::string arg7_tmp; ok &= luaval_to_std_string(tolua_S, 9, &arg7_tmp, "GameSdk:chooseServer"); arg7 = arg7_tmp.c_str();

        std::string arg8_tmp; ok &= luaval_to_std_string(tolua_S, 10, &arg8_tmp, "GameSdk:chooseServer"); arg8 = arg8_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_chooseServer'", nullptr);
            return 0;
        }
        cobj->chooseServer(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:chooseServer",argc, 9);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_chooseServer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_onRegisterSuccess(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_onRegisterSuccess'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "GameSdk:onRegisterSuccess"); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "GameSdk:onRegisterSuccess"); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "GameSdk:onRegisterSuccess"); arg2 = arg2_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_onRegisterSuccess'", nullptr);
            return 0;
        }
        cobj->onRegisterSuccess(arg0, arg1, arg2);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:onRegisterSuccess",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_onRegisterSuccess'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_login(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_login'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "GameSdk:login");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_login'", nullptr);
            return 0;
        }
        cobj->login(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:login",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_login'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_onPaySuccess(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GameSdk",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GameSdk*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_gamesdk_GameSdk_onPaySuccess'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "GameSdk:onPaySuccess"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_onPaySuccess'", nullptr);
            return 0;
        }
        cobj->onPaySuccess(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:onPaySuccess",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_onPaySuccess'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_gamesdk_GameSdk_constructor(lua_State* tolua_S)
{
    int argc = 0;
    GameSdk* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_gamesdk_GameSdk_constructor'", nullptr);
            return 0;
        }
        cobj = new GameSdk();
        tolua_pushusertype(tolua_S,(void*)cobj,"GameSdk");
        tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GameSdk:GameSdk",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_gamesdk_GameSdk_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_gamesdk_GameSdk_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (GameSdk)");
    return 0;
}

int lua_register_cocos2dx_gamesdk_GameSdk(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"GameSdk");
    tolua_cclass(tolua_S,"GameSdk","GameSdk","",nullptr);

    tolua_beginmodule(tolua_S,"GameSdk");
        tolua_function(tolua_S,"new",lua_cocos2dx_gamesdk_GameSdk_constructor);
        tolua_function(tolua_S,"onCheckLoginSuccess",lua_cocos2dx_gamesdk_GameSdk_onCheckLoginSuccess);
        tolua_function(tolua_S,"payUO",lua_cocos2dx_gamesdk_GameSdk_payUO);
        tolua_function(tolua_S,"createRole",lua_cocos2dx_gamesdk_GameSdk_createRole);
        tolua_function(tolua_S,"isIgnoreGameSdk",lua_cocos2dx_gamesdk_GameSdk_isIgnoreGameSdk);
        tolua_function(tolua_S,"pay",lua_cocos2dx_gamesdk_GameSdk_pay);
        tolua_function(tolua_S,"payIOS",lua_cocos2dx_gamesdk_GameSdk_payIOS);
        tolua_function(tolua_S,"onLoginSuccess",lua_cocos2dx_gamesdk_GameSdk_onLoginSuccess);
        tolua_function(tolua_S,"registerUser",lua_cocos2dx_gamesdk_GameSdk_registerUser);
        tolua_function(tolua_S,"onLogoutSuccess",lua_cocos2dx_gamesdk_GameSdk_onLogoutSuccess);
        tolua_function(tolua_S,"onLoginFail",lua_cocos2dx_gamesdk_GameSdk_onLoginFail);
        tolua_function(tolua_S,"channelId",lua_cocos2dx_gamesdk_GameSdk_channelId);
        tolua_function(tolua_S,"logout",lua_cocos2dx_gamesdk_GameSdk_logout);
        tolua_function(tolua_S,"notifyZone",lua_cocos2dx_gamesdk_GameSdk_notifyZone);
        tolua_function(tolua_S,"onGetUserInfoSuccess",lua_cocos2dx_gamesdk_GameSdk_onGetUserInfoSuccess);
        tolua_function(tolua_S,"getUserInfo",lua_cocos2dx_gamesdk_GameSdk_getUserInfo);
        tolua_function(tolua_S,"onPayFail",lua_cocos2dx_gamesdk_GameSdk_onPayFail);
        tolua_function(tolua_S,"createRoleUO",lua_cocos2dx_gamesdk_GameSdk_createRoleUO);
        tolua_function(tolua_S,"checkLogin",lua_cocos2dx_gamesdk_GameSdk_checkLogin);
        tolua_function(tolua_S,"levelUp",lua_cocos2dx_gamesdk_GameSdk_levelUp);
        tolua_function(tolua_S,"chooseServer",lua_cocos2dx_gamesdk_GameSdk_chooseServer);
        tolua_function(tolua_S,"onRegisterSuccess",lua_cocos2dx_gamesdk_GameSdk_onRegisterSuccess);
        tolua_function(tolua_S,"login",lua_cocos2dx_gamesdk_GameSdk_login);
        tolua_function(tolua_S,"onPaySuccess",lua_cocos2dx_gamesdk_GameSdk_onPaySuccess);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(GameSdk).name();
    g_luaType[typeName] = "GameSdk";
    g_typeCast["GameSdk"] = "GameSdk";
    return 1;
}
TOLUA_API int register_all_cocos2dx_gamesdk(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"gamesdk",0);
	tolua_beginmodule(tolua_S,"gamesdk");

	lua_register_cocos2dx_gamesdk_GameSdk(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

