#ifndef LUAGAMESDK_H_
#define LUAGAMESDK_H_
#include "gamesdk/GameSdk.h"
#include "cocos/scripting/lua-bindings/manual/cocos2d/LuaScriptHandlerMgr.h"
#include "cocos/scripting/lua-bindings/manual/CCLuaStack.h"
#include "cocos/scripting/lua-bindings/manual/CCLuaEngine.h"


class LuaGameSdk: public GameSdk {

public:
	LuaGameSdk();
	virtual ~LuaGameSdk();

	virtual void printLog();
	static LuaGameSdk* getInstance();
    
    void setAccessKey(const char* token);
    const char* getAccessKey();
	// 回调监听
	virtual void onLoginSuccess(const char* uid, const char* username, const char* access_token) override;
	virtual void onCheckLoginSuccess(bool isLogin);
	//virtual void onCheckLoginFail(int code, const char* data);
	virtual void onGetUserInfoSuccess(int code, const char* uid, const char* username, const char* access_token);
	//virtual void onGetUserInfoFail(int code, const char* data);
	virtual void onLogoutSuccess();
    virtual void onRegisterSuccess(const char* uid, const char* username, const char* access_token) {};  //注册成功

	//virtual void onLogoutFail(int code, const char* message);
	//virtual void onAccountInvalid(const char* message);
	virtual void onPaySuccess(const char* data);
	virtual void onPayFail(int code, const char* message);
    virtual void onLoginFail(int code , const char* message) override;
    const char* mToken;
};

#endif /* LUAGAMESDK_H_ */
