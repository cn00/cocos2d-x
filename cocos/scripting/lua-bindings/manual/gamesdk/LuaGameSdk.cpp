 /****************************************************************************
 Copyright (c) 2013      Edward Zhou
 Copyright (c) 2013-2014 Chukong Technologies Inc.
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "LuaGameSdk.h"
#include "cocos2d.h"

USING_NS_CC;


LuaGameSdk::LuaGameSdk():
	GameSdk()
{}

LuaGameSdk::~LuaGameSdk()
{

}

void LuaGameSdk::setAccessKey(const char* token)
{
    this->mToken = token;
}

const char* LuaGameSdk::getAccessKey()
{
    return this->mToken;
}

LuaGameSdk* LuaGameSdk::getInstance()
{
	static LuaGameSdk instance;
	return &instance;
}

void LuaGameSdk::printLog()
{
	CCLOG("LuaGameSdk print log test.........");
}

void LuaGameSdk::onLoginSuccess(const char* uid, const char* username, const char* access_token)
{
    CCLOG("LuaGameSdk print log onLoginSuccess........");
	int nHandler = ScriptHandlerMgr::getInstance()->getObjectHandler((void*)this, ScriptHandlerMgr::HandlerType::EVENT_GAMESDK);
	if( nHandler <= 0 ){
		return;
	}
	if (NULL == ScriptEngineManager::getInstance()->getScriptEngine()) {
		return;
	}
	LuaStack *pStack = LuaEngine::getInstance()->getLuaStack();
	if (NULL == pStack) {
		return;
	}
	lua_State *tolua_s = pStack->getLuaState();
	if (NULL == tolua_s) {
		return;
	}
    CCLOG("LuaGameSdk print log onLoginSuccess........11");
	std::string eventType = "onLoginSuccess";
	LuaValueDict gamesdkEvent;
	gamesdkEvent.insert(gamesdkEvent.end(), LuaValueDict::value_type("type", LuaValue::stringValue(eventType)));
    CCLOG("LuaGameSdk print log onLoginSuccess........22");
	LuaValueDict eventData;
	eventData.insert(eventData.end(), LuaValueDict::value_type("uid", LuaValue::stringValue(uid)));
	eventData.insert(eventData.end(), LuaValueDict::value_type("username", LuaValue::stringValue(username)));
	eventData.insert(eventData.end(), LuaValueDict::value_type("access_token", LuaValue::stringValue(access_token)));
	//eventData.insert(eventData.end(), LuaValueDict::value_type("refresh_token", LuaValue::stringValue(refresh_token)));
	gamesdkEvent.insert(gamesdkEvent.end(), LuaValueDict::value_type("eventData", LuaValue::dictValue(eventData)));
    CCLOG("LuaGameSdk print log onLoginSuccess........33");
    Director::getInstance()->getScheduler()->performFunctionInCocosThread([=]{
		pStack->pushLuaValueDict(gamesdkEvent);
		pStack->executeFunctionByHandler(nHandler, 1);
	    CCLOG("LuaGameSdk print log onLoginSuccess........44");
		pStack->clean();
	    CCLOG("LuaGameSdk print log onLoginSuccess........55");
	});
}

void LuaGameSdk::onCheckLoginSuccess(bool isLogin)
{
	int nHandler = ScriptHandlerMgr::getInstance()->getObjectHandler((void*)this, ScriptHandlerMgr::HandlerType::EVENT_GAMESDK);
	if( nHandler <= 0 ){
		return;
	}
	if (NULL == ScriptEngineManager::getInstance()->getScriptEngine()) {
		return;
	}
	LuaStack *pStack = LuaEngine::getInstance()->getLuaStack();
	if (NULL == pStack) {
		return;
	}
	lua_State *tolua_s = pStack->getLuaState();
	if (NULL == tolua_s) {
		return;
	}

	std::string eventType = "onCheckLoginSuccess";
	LuaValueDict gamesdkEvent;
	gamesdkEvent.insert(gamesdkEvent.end(), LuaValueDict::value_type("type", LuaValue::stringValue(eventType)));

	LuaValueDict eventData;
	eventData.insert(eventData.end(), LuaValueDict::value_type("isLogin", LuaValue::booleanValue(isLogin)));
	gamesdkEvent.insert(gamesdkEvent.end(), LuaValueDict::value_type("eventData", LuaValue::dictValue(eventData)));

    Director::getInstance()->getScheduler()->performFunctionInCocosThread([=]{
		pStack->pushLuaValueDict(gamesdkEvent);
		pStack->executeFunctionByHandler(nHandler, 1);
		pStack->clean();
	    CCLOG("%s ........ execute end", __FUNCTION__);
	});
}
/*
void LuaGameSdk::onCheckLoginFail(int code, const char* data)
{

}*/

void LuaGameSdk::onGetUserInfoSuccess(int code, const char* uid, const char* username, const char* access_token)
{
	int nHandler = ScriptHandlerMgr::getInstance()->getObjectHandler((void*)this, ScriptHandlerMgr::HandlerType::EVENT_GAMESDK);
	if( nHandler <= 0 ){
		return;
	}
	if (NULL == ScriptEngineManager::getInstance()->getScriptEngine()) {
		return;
	}
	LuaStack *pStack = LuaEngine::getInstance()->getLuaStack();
	if (NULL == pStack) {
		return;
	}
	lua_State *tolua_s = pStack->getLuaState();
	if (NULL == tolua_s) {
		return;
	}

 	std::string eventType = "onGetUserInfoSuccess";
	LuaValueDict gamesdkEvent;
	gamesdkEvent.insert(gamesdkEvent.end(), LuaValueDict::value_type("type", LuaValue::stringValue(eventType)));

	LuaValueDict eventData;
    eventData.insert(eventData.end(), LuaValueDict::value_type("code", LuaValue::intValue(code)));
	eventData.insert(eventData.end(), LuaValueDict::value_type("uid", LuaValue::stringValue(uid)));
	eventData.insert(eventData.end(), LuaValueDict::value_type("username", LuaValue::stringValue(username)));
	eventData.insert(eventData.end(), LuaValueDict::value_type("access_token", LuaValue::stringValue(access_token)));
	//eventData.insert(eventData.end(), LuaValueDict::value_type("refresh_token", LuaValue::stringValue(refresh_token)));
	gamesdkEvent.insert(gamesdkEvent.end(), LuaValueDict::value_type("eventData", LuaValue::dictValue(eventData)));

    Director::getInstance()->getScheduler()->performFunctionInCocosThread([=]{
		pStack->pushLuaValueDict(gamesdkEvent);
		pStack->executeFunctionByHandler(nHandler, 1);
		pStack->clean();
	    CCLOG("%s ........ execute end", __FUNCTION__);
	});
}

/*void LuaGameSdk::onGetUserInfoFail(int code, const char* data)
{
	int nHandler = ScriptHandlerMgr::getInstance()->getObjectHandler((void*)this, ScriptHandlerMgr::HandlerType::EVENT_GAMESDK);
	if( nHandler <= 0 ){
		return;
	}
	if (NULL == ScriptEngineManager::getInstance()->getScriptEngine()) {
		return;
	}
	LuaStack *pStack = LuaEngine::getInstance()->getLuaStack();
	if (NULL == pStack) {
		return;
	}
	lua_State *tolua_s = pStack->getLuaState();
	if (NULL == tolua_s) {
		return;
	}

	std::string eventType = "onGetUserInfoFail";
	LuaValueDict gamesdkEvent;
	gamesdkEvent.insert(gamesdkEvent.end(), LuaValueDict::value_type("type", LuaValue::stringValue(eventType)));

	LuaValueDict eventData;
	eventData.insert(eventData.end(), LuaValueDict::value_type("code", LuaValue::intValue(code)));
	eventData.insert(eventData.end(), LuaValueDict::value_type("message", LuaValue::stringValue(data)));
	gamesdkEvent.insert(gamesdkEvent.end(), LuaValueDict::value_type("eventData", LuaValue::dictValue(eventData)));

    Director::getInstance()->getScheduler()->performFunctionInCocosThread([=]{
		pStack->pushLuaValueDict(gamesdkEvent);
		pStack->executeFunctionByHandler(nHandler, 1);
		pStack->clean();
	    CCLOG("%s ........ execute end", __FUNCTION__);
	});
}*/

void LuaGameSdk::onLogoutSuccess()
{
	int nHandler = ScriptHandlerMgr::getInstance()->getObjectHandler((void*)this, ScriptHandlerMgr::HandlerType::EVENT_GAMESDK);
	if( nHandler <= 0 ){
		return;
	}
	if (NULL == ScriptEngineManager::getInstance()->getScriptEngine()) {
		return;
	}
	LuaStack *pStack = LuaEngine::getInstance()->getLuaStack();
	if (NULL == pStack) {
		return;
	}
	lua_State *tolua_s = pStack->getLuaState();
	if (NULL == tolua_s) {
		return;
	}

	std::string eventType = "onLogoutSuccess";
	LuaValueDict gamesdkEvent;
	gamesdkEvent.insert(gamesdkEvent.end(), LuaValueDict::value_type("type", LuaValue::stringValue(eventType)));

    Director::getInstance()->getScheduler()->performFunctionInCocosThread([=]{
		pStack->pushLuaValueDict(gamesdkEvent);
		pStack->executeFunctionByHandler(nHandler, 1);
		pStack->clean();
	    CCLOG("%s ........ execute end", __FUNCTION__);
	});
}
/*
void LuaGameSdk::onLogoutFail(int code, const char* message)
{
	int nHandler = ScriptHandlerMgr::getInstance()->getObjectHandler((void*)this, ScriptHandlerMgr::HandlerType::EVENT_GAMESDK);
	if( nHandler <= 0 ){
		return;
	}
	if (NULL == ScriptEngineManager::getInstance()->getScriptEngine()) {
		return;
	}
	LuaStack *pStack = LuaEngine::getInstance()->getLuaStack();
	if (NULL == pStack) {
		return;
	}
	lua_State *tolua_s = pStack->getLuaState();
	if (NULL == tolua_s) {
		return;
	}

	std::string eventType = "onLogoutFail";
	LuaValueDict gamesdkEvent;
	gamesdkEvent.insert(gamesdkEvent.end(), LuaValueDict::value_type("type", LuaValue::stringValue(eventType)));

	LuaValueDict eventData;
	eventData.insert(eventData.end(), LuaValueDict::value_type("code", LuaValue::intValue(code)));
	eventData.insert(eventData.end(), LuaValueDict::value_type("message", LuaValue::stringValue(message)));
	gamesdkEvent.insert(gamesdkEvent.end(), LuaValueDict::value_type("eventData", LuaValue::dictValue(eventData)));

	pStack->pushLuaValueDict(gamesdkEvent);
	pStack->executeFunctionByHandler(nHandler, 1);
	pStack->clean();
}*/
/*
void LuaGameSdk::onAccountInvalid(const char* message)
{
	int nHandler = ScriptHandlerMgr::getInstance()->getObjectHandler((void*)this, ScriptHandlerMgr::HandlerType::EVENT_GAMESDK);
	if( nHandler <= 0 ){
		return;
	}
	if (NULL == ScriptEngineManager::getInstance()->getScriptEngine()) {
		return;
	}
	LuaStack *pStack = LuaEngine::getInstance()->getLuaStack();
	if (NULL == pStack) {
		return;
	}
	lua_State *tolua_s = pStack->getLuaState();
	if (NULL == tolua_s) {
		return;
	}

	std::string eventType = "onAccountInvalid";
	LuaValueDict gamesdkEvent;
	gamesdkEvent.insert(gamesdkEvent.end(), LuaValueDict::value_type("type", LuaValue::stringValue(eventType)));

	LuaValueDict eventData;
	eventData.insert(eventData.end(), LuaValueDict::value_type("message", LuaValue::stringValue(message)));
	gamesdkEvent.insert(gamesdkEvent.end(), LuaValueDict::value_type("eventData", LuaValue::dictValue(eventData)));

    Director::getInstance()->getScheduler()->performFunctionInCocosThread([=]{
		pStack->pushLuaValueDict(gamesdkEvent);
		pStack->executeFunctionByHandler(nHandler, 1);
		pStack->clean();
	    CCLOG("%s ........ execute end", __FUNCTION__);
	});
}*/

void LuaGameSdk::onPaySuccess(const char* data)
{
	int nHandler = ScriptHandlerMgr::getInstance()->getObjectHandler((void*)this, ScriptHandlerMgr::HandlerType::EVENT_GAMESDK);
	if( nHandler <= 0 ){
		return;
	}
	if (NULL == ScriptEngineManager::getInstance()->getScriptEngine()) {
		return;
	}
	LuaStack *pStack = LuaEngine::getInstance()->getLuaStack();
	if (NULL == pStack) {
		return;
	}
	lua_State *tolua_s = pStack->getLuaState();
	if (NULL == tolua_s) {
		return;
	}
     CCLOG("LuaGameSdk print log onPaySuccess........11");
	std::string eventType = "onPaySuccess";
	LuaValueDict gamesdkEvent;
	gamesdkEvent.insert(gamesdkEvent.end(), LuaValueDict::value_type("type", LuaValue::stringValue(eventType)));

	LuaValueDict eventData;
	//eventData.insert(eventData.end(), LuaValueDict::value_type("out_trade_no", LuaValue::stringValue(out_trade_no)));
	eventData.insert(eventData.end(), LuaValueDict::value_type("bs_trade_no", LuaValue::stringValue(data)));
	gamesdkEvent.insert(gamesdkEvent.end(), LuaValueDict::value_type("eventData", LuaValue::dictValue(eventData)));

    Director::getInstance()->getScheduler()->performFunctionInCocosThread([=]{
		pStack->pushLuaValueDict(gamesdkEvent);
		pStack->executeFunctionByHandler(nHandler, 1);
		pStack->clean();
	    CCLOG("%s ........ execute end", __FUNCTION__);
	});
}

void LuaGameSdk::onPayFail(int code, const char* message)
{
	int nHandler = ScriptHandlerMgr::getInstance()->getObjectHandler((void*)this, ScriptHandlerMgr::HandlerType::EVENT_GAMESDK);
	if( nHandler <= 0 ){
		return;
	}
	if (NULL == ScriptEngineManager::getInstance()->getScriptEngine()) {
		return;
	}
	LuaStack *pStack = LuaEngine::getInstance()->getLuaStack();
	if (NULL == pStack) {
		return;
	}
	lua_State *tolua_s = pStack->getLuaState();
	if (NULL == tolua_s) {
		return;
	}
     CCLOG("LuaGameSdk print log onPayFail........11");
	std::string eventType = "onPayFail";
	LuaValueDict gamesdkEvent;
	gamesdkEvent.insert(gamesdkEvent.end(), LuaValueDict::value_type("type", LuaValue::stringValue(eventType)));

	LuaValueDict eventData;
	eventData.insert(eventData.end(), LuaValueDict::value_type("message", LuaValue::stringValue(message)));
	//eventData.insert(eventData.end(), LuaValueDict::value_type("out_trade_no", LuaValue::stringValue(out_trade_no)));
	gamesdkEvent.insert(gamesdkEvent.end(), LuaValueDict::value_type("eventData", LuaValue::dictValue(eventData)));

    Director::getInstance()->getScheduler()->performFunctionInCocosThread([=]{
		pStack->pushLuaValueDict(gamesdkEvent);
		pStack->executeFunctionByHandler(nHandler, 1);
		pStack->clean();
	    CCLOG("%s ........ execute end", __FUNCTION__);
	});
}

void LuaGameSdk::onLoginFail(int code, const char* message)
{
	cocos2d::log("this LuaGameSdk onLoginFail 1");
	int nHandler = ScriptHandlerMgr::getInstance()->getObjectHandler((void*)this, ScriptHandlerMgr::HandlerType::EVENT_GAMESDK);
	if( nHandler <= 0 ){
		return;
	}
	cocos2d::log("this LuaGameSdk onLoginFail 2");
	if (NULL == ScriptEngineManager::getInstance()->getScriptEngine()) {
		return;
	}
	cocos2d::log("this LuaGameSdk onLoginFail 3");
	LuaStack *pStack = LuaEngine::getInstance()->getLuaStack();
	if (NULL == pStack) {
		return;
	}
	cocos2d::log("this LuaGameSdk onLoginFail 4");
	lua_State *tolua_s = pStack->getLuaState();
	if (NULL == tolua_s) {
		return;
	}
	cocos2d::log("this LuaGameSdk onLoginFail 5");
	std::string eventType = "onLoginFail";
	LuaValueDict gamesdkEvent;
	gamesdkEvent.insert(gamesdkEvent.end(), LuaValueDict::value_type("type", LuaValue::stringValue(eventType)));

	LuaValueDict eventData;
	eventData.insert(eventData.end(), LuaValueDict::value_type("code", LuaValue::intValue(code)));
	eventData.insert(eventData.end(), LuaValueDict::value_type("message", LuaValue::stringValue(message)));
	//eventData.insert(eventData.end(), LuaValueDict::value_type("out_trade_no", LuaValue::stringValue(out_trade_no)));
	gamesdkEvent.insert(gamesdkEvent.end(), LuaValueDict::value_type("eventData", LuaValue::dictValue(eventData)));

    Director::getInstance()->getScheduler()->performFunctionInCocosThread([=]{
		pStack->pushLuaValueDict(gamesdkEvent);
		pStack->executeFunctionByHandler(nHandler, 1);
		pStack->clean();
	    CCLOG("%s ........ execute end", __FUNCTION__);
	});
}
