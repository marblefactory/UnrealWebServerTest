// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UCookie;
#ifdef UNREALWEBSERVER_Cookie_generated_h
#error "Cookie.generated.h already included, missing '#pragma once' in Cookie.h"
#endif
#define UNREALWEBSERVER_Cookie_generated_h

#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Cookie_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSecure) \
	{ \
		P_GET_UBOOL(Z_Param_secure); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSecure(Z_Param_secure); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHttpOnly) \
	{ \
		P_GET_UBOOL(Z_Param_http_only); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHttpOnly(Z_Param_http_only); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPath(Z_Param_path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDomain) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_domain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDomain(Z_Param_domain); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxAge) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_max_age); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMaxAge(Z_Param_max_age); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetValue(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetName(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructCookieExt) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCookie**)Z_Param__Result=UCookie::ConstructCookieExt(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructCookie) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCookie**)Z_Param__Result=UCookie::ConstructCookie(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Cookie_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSecure) \
	{ \
		P_GET_UBOOL(Z_Param_secure); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSecure(Z_Param_secure); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHttpOnly) \
	{ \
		P_GET_UBOOL(Z_Param_http_only); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHttpOnly(Z_Param_http_only); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPath(Z_Param_path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDomain) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_domain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDomain(Z_Param_domain); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxAge) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_max_age); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMaxAge(Z_Param_max_age); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetValue(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetName(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructCookieExt) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCookie**)Z_Param__Result=UCookie::ConstructCookieExt(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructCookie) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCookie**)Z_Param__Result=UCookie::ConstructCookie(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Cookie_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCookie(); \
	friend UNREALWEBSERVER_API class UClass* Z_Construct_UClass_UCookie(); \
public: \
	DECLARE_CLASS(UCookie, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealWebServer"), NO_API) \
	DECLARE_SERIALIZER(UCookie) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Cookie_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCookie(); \
	friend UNREALWEBSERVER_API class UClass* Z_Construct_UClass_UCookie(); \
public: \
	DECLARE_CLASS(UCookie, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealWebServer"), NO_API) \
	DECLARE_SERIALIZER(UCookie) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Cookie_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCookie(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookie) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCookie); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookie); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCookie(UCookie&&); \
	NO_API UCookie(const UCookie&); \
public:


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Cookie_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCookie(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCookie(UCookie&&); \
	NO_API UCookie(const UCookie&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCookie); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookie); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookie)


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Cookie_h_18_PRIVATE_PROPERTY_OFFSET
#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Cookie_h_14_PROLOG
#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Cookie_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Cookie_h_18_PRIVATE_PROPERTY_OFFSET \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Cookie_h_18_RPC_WRAPPERS \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Cookie_h_18_INCLASS \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Cookie_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Cookie_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Cookie_h_18_PRIVATE_PROPERTY_OFFSET \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Cookie_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Cookie_h_18_INCLASS_NO_PURE_DECLS \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Cookie_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Cookie_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
