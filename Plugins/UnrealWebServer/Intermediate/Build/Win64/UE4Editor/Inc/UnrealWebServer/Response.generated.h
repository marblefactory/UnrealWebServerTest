// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMediaType : uint8;
class UCookie;
enum class EHttpStatusCode : uint8;
class UObject;
class UResponse;
#ifdef UNREALWEBSERVER_Response_generated_h
#error "Response.generated.h already included, missing '#pragma once' in Response.h"
#endif
#define UNREALWEBSERVER_Response_generated_h

#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Response_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetResponseContent) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetResponseContent(Z_Param_content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResponseContentType) \
	{ \
		P_GET_ENUM(EMediaType,Z_Param_contentType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetResponseContentType(EMediaType(Z_Param_contentType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResponseRedirection) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_redirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetResponseRedirection(Z_Param_redirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddResponseCookie) \
	{ \
		P_GET_OBJECT(UCookie,Z_Param_cookie); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddResponseCookie(Z_Param_cookie); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResponseStatusCode) \
	{ \
		P_GET_ENUM(EHttpStatusCode,Z_Param_statusCode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetResponseStatusCode(EHttpStatusCode(Z_Param_statusCode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructResponseExt) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UResponse**)Z_Param__Result=UResponse::ConstructResponseExt(Z_Param_WorldContextObject,Z_Param_content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructResponse) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UResponse**)Z_Param__Result=UResponse::ConstructResponse(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Response_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetResponseContent) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetResponseContent(Z_Param_content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResponseContentType) \
	{ \
		P_GET_ENUM(EMediaType,Z_Param_contentType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetResponseContentType(EMediaType(Z_Param_contentType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResponseRedirection) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_redirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetResponseRedirection(Z_Param_redirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddResponseCookie) \
	{ \
		P_GET_OBJECT(UCookie,Z_Param_cookie); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddResponseCookie(Z_Param_cookie); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResponseStatusCode) \
	{ \
		P_GET_ENUM(EHttpStatusCode,Z_Param_statusCode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetResponseStatusCode(EHttpStatusCode(Z_Param_statusCode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructResponseExt) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UResponse**)Z_Param__Result=UResponse::ConstructResponseExt(Z_Param_WorldContextObject,Z_Param_content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructResponse) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UResponse**)Z_Param__Result=UResponse::ConstructResponse(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Response_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResponse(); \
	friend UNREALWEBSERVER_API class UClass* Z_Construct_UClass_UResponse(); \
public: \
	DECLARE_CLASS(UResponse, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealWebServer"), NO_API) \
	DECLARE_SERIALIZER(UResponse) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Response_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUResponse(); \
	friend UNREALWEBSERVER_API class UClass* Z_Construct_UClass_UResponse(); \
public: \
	DECLARE_CLASS(UResponse, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealWebServer"), NO_API) \
	DECLARE_SERIALIZER(UResponse) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Response_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResponse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResponse) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResponse); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResponse); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResponse(UResponse&&); \
	NO_API UResponse(const UResponse&); \
public:


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Response_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResponse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResponse(UResponse&&); \
	NO_API UResponse(const UResponse&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResponse); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResponse); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResponse)


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Response_h_21_PRIVATE_PROPERTY_OFFSET
#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Response_h_17_PROLOG
#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Response_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Response_h_21_PRIVATE_PROPERTY_OFFSET \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Response_h_21_RPC_WRAPPERS \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Response_h_21_INCLASS \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Response_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Response_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Response_h_21_PRIVATE_PROPERTY_OFFSET \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Response_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Response_h_21_INCLASS_NO_PURE_DECLS \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Response_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Response_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
