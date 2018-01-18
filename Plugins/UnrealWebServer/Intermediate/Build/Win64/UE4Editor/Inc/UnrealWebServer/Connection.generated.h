// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UResponse;
#ifdef UNREALWEBSERVER_Connection_generated_h
#error "Connection.generated.h already included, missing '#pragma once' in Connection.h"
#endif
#define UNREALWEBSERVER_Connection_generated_h

#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Connection_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCOOKIEVar) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetCOOKIEVar(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPOSTVar) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetPOSTVar(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGETVar) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetGETVar(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeader) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetHeader(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendRawResponseByte) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_responseByte); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendRawResponseByte(Z_Param_Out_responseByte); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendRawResponse) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_responseData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendRawResponse(Z_Param_responseData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendResponse) \
	{ \
		P_GET_OBJECT(UResponse,Z_Param_response); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendResponse(Z_Param_response); \
		P_NATIVE_END; \
	}


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Connection_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCOOKIEVar) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetCOOKIEVar(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPOSTVar) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetPOSTVar(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGETVar) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetGETVar(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeader) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetHeader(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendRawResponseByte) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_responseByte); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendRawResponseByte(Z_Param_Out_responseByte); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendRawResponse) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_responseData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendRawResponse(Z_Param_responseData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendResponse) \
	{ \
		P_GET_OBJECT(UResponse,Z_Param_response); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendResponse(Z_Param_response); \
		P_NATIVE_END; \
	}


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Connection_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConnection(); \
	friend UNREALWEBSERVER_API class UClass* Z_Construct_UClass_UConnection(); \
public: \
	DECLARE_CLASS(UConnection, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealWebServer"), NO_API) \
	DECLARE_SERIALIZER(UConnection) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Connection_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUConnection(); \
	friend UNREALWEBSERVER_API class UClass* Z_Construct_UClass_UConnection(); \
public: \
	DECLARE_CLASS(UConnection, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealWebServer"), NO_API) \
	DECLARE_SERIALIZER(UConnection) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Connection_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConnection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConnection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConnection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConnection(UConnection&&); \
	NO_API UConnection(const UConnection&); \
public:


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Connection_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConnection(UConnection&&); \
	NO_API UConnection(const UConnection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConnection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConnection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConnection)


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Connection_h_22_PRIVATE_PROPERTY_OFFSET
#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Connection_h_18_PROLOG
#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Connection_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Connection_h_22_PRIVATE_PROPERTY_OFFSET \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Connection_h_22_RPC_WRAPPERS \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Connection_h_22_INCLASS \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Connection_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Connection_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Connection_h_22_PRIVATE_PROPERTY_OFFSET \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Connection_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Connection_h_22_INCLASS_NO_PURE_DECLS \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Connection_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Connection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
