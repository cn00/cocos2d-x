LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := cocos2d_lua_android_static

LOCAL_MODULE_FILENAME := libluacocos2dandroid

LOCAL_ARM_MODE := arm

LOCAL_SRC_FILES := ../manual/platform/android/CCLuaJavaBridge.cpp \
                   ../manual/platform/android/jni/Java_org_cocos2dx_lib_Cocos2dxLuaJavaBridge.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../.. \
                    $(LOCAL_PATH)/../manual \
                    $(LOCAL_PATH)/../../../../external/lua/tolua \
                    $(LOCAL_PATH)/../manual/platform/android \
                    $(LOCAL_PATH)/../manual/platform/android/jni

LOCAL_EXPORT_LDLIBS := -lGLESv2 \
                       -llog \
                       -landroid

LUA_STATIC_LIB := lua_static
LUA_IMPORT_PATH := lua/lua
LUA_INCLUDE_PATH := $(LOCAL_PATH)/../../../../external/lua/lua

LOCAL_STATIC_LIBRARIES := $(LUA_STATIC_LIB)

include $(BUILD_STATIC_LIBRARY)

#==============================================================

include $(CLEAR_VARS)

LOCAL_MODULE    := cocos2d_lua_static

LOCAL_MODULE_FILENAME := libluacocos2d

LOCAL_ARM_MODE := arm

LOCAL_XXTEE_SRC_FILES 		:= $(LOCAL_PATH)/../../../../external/xxtea/xxtea.cpp

LOCAL_TOLUA_SRC_FILES 		:= $(wildcard $(LOCAL_PATH)/../../../../external/lua/tolua/*.c)
LOCAL_LUASOCKET_SRC_FILES 	:= $(wildcard $(LOCAL_PATH)/../../../../external/lua/luasocket/*.c)

LOCAL_AUTO_SRC_FILES 	:= $(wildcard $(LOCAL_PATH)/../auto/*.cpp)
LOCAL_AUTO_SRC_FILES 	+= $(wildcard $(LOCAL_PATH)/../auto/*.c)
LOCAL_AUTO_SRC_FILES 	+= $(wildcard $(LOCAL_PATH)/../auto/*/*.cpp)
LOCAL_AUTO_SRC_FILES 	+= $(wildcard $(LOCAL_PATH)/../auto/*/*.c)
LOCAL_MANUAL_SRC_FILES 	:= $(wildcard $(LOCAL_PATH)/../manual/*.cpp)
LOCAL_MANUAL_SRC_FILES 	+= $(wildcard $(LOCAL_PATH)/../manual/*.c)
LOCAL_MANUAL_SRC_FILES 	+= $(wildcard $(LOCAL_PATH)/../manual/*/*.cpp)
LOCAL_MANUAL_SRC_FILES 	+= $(wildcard $(LOCAL_PATH)/../manual/*/*.c)

LOCAL_ALL_SRC_FILES := $(LOCAL_XXTEE_SRC_FILES) \
				$(LOCAL_TOLUA_SRC_FILES) \
				$(LOCAL_LUASOCKET_SRC_FILES) \
				$(LOCAL_AUTO_SRC_FILES) \
				$(LOCAL_MANUAL_SRC_FILES)
LOCAL_SRC_FILES = $(LOCAL_ALL_SRC_FILES:$(LOCAL_PATH)/%=%)

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../../external/lua/tolua \
                    $(LUA_INCLUDE_PATH) \
                    $(LOCAL_PATH)/../../../2d \
                    $(LOCAL_PATH)/../../../3d \
                    $(LOCAL_PATH)/../../../network \
                    $(LOCAL_PATH)/../../../editor-support/cocosbuilder \
                    $(LOCAL_PATH)/../../../editor-support/cocostudio \
                    $(LOCAL_PATH)/../../../editor-support/cocostudio/ActionTimeline \
                    $(LOCAL_PATH)/../../../editor-support/spine \
                    $(LOCAL_PATH)/../../../ui \
                    $(LOCAL_PATH)/../../../physics3d \
                    $(LOCAL_PATH)/../../../navmesh \
                    $(LOCAL_PATH)/../../../../extensions \
                    $(LOCAL_PATH)/../auto \
                    $(LOCAL_PATH)/../manual \
                    $(LOCAL_PATH)/../manual/cocos2d \
                    $(LOCAL_PATH)/../manual/3d \
                    $(LOCAL_PATH)/../manual/cocosdenshion \
                    $(LOCAL_PATH)/../manual/audioengine \
                    $(LOCAL_PATH)/../manual/network \
                    $(LOCAL_PATH)/../manual/extension \
                    $(LOCAL_PATH)/../manual/cocostudio \
                    $(LOCAL_PATH)/../manual/cocosbuilder \
                    $(LOCAL_PATH)/../manual/spine \
                    $(LOCAL_PATH)/../manual/ui \
                    $(LOCAL_PATH)/../manual/navmesh \
                    $(LOCAL_PATH)/../../../../external/xxtea \
                    $(LOCAL_PATH)/../../../.. \
                    $(LOCAL_PATH)/../../../../external/lua

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../../../../external/lua/tolua \
						   $(LUA_INCLUDE_PATH) \
                           $(LOCAL_PATH)/../auto \
                           $(LOCAL_PATH)/../manual \
                           $(LOCAL_PATH)/../manual/cocos2d \
                           $(LOCAL_PATH)/../manual/3d \
                           $(LOCAL_PATH)/../manual/cocosdenshion \
                           $(LOCAL_PATH)/../manual/audioengine \
                           $(LOCAL_PATH)/../manual/network \
                           $(LOCAL_PATH)/../manual/cocosbuilder \
                           $(LOCAL_PATH)/../manual/cocostudio \
                           $(LOCAL_PATH)/../manual/spine \
                           $(LOCAL_PATH)/../manual/extension \
                           $(LOCAL_PATH)/../manual/ui \
                           $(LOCAL_PATH)/../manual/navmesh \
                           $(LOCAL_PATH)/../../../..

LOCAL_WHOLE_STATIC_LIBRARIES := cocos2d_lua_android_static

LOCAL_STATIC_LIBRARIES := cocos2dx_static

include $(BUILD_STATIC_LIBRARY)

$(call import-module,$(LUA_IMPORT_PATH))
$(call import-module,.)
