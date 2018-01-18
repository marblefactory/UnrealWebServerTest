// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UConnection;
enum class EHttpRequestMethod : uint8;
class UWebServer;
#ifdef UNREALWEBSERVER_Webserver_generated_h
#error "Webserver.generated.h already included, missing '#pragma once' in Webserver.h"
#endif
#define UNREALWEBSERVER_Webserver_generated_h

#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Webserver_h_12_DELEGATE \
struct _Script_UnrealWebServer_eventRESTServerCallDelegate_Parms \
{ \
	UConnection* Connection; \
}; \
static inline void FRESTServerCallDelegate_DelegateWrapper(const FScriptDelegate& RESTServerCallDelegate, UConnection* Connection) \
{ \
	_Script_UnrealWebServer_eventRESTServerCallDelegate_Parms Parms; \
	Parms.Connection=Connection; \
	RESTServerCallDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Webserver_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsStarted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsStarted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddURIHandler) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_Callback); \
		P_GET_ENUM(EHttpRequestMethod,Z_Param_Method); \
		P_GET_UBOOL(Z_Param_ExecuteInGameThread); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddURIHandler(Z_Param_Path,FRESTServerCallDelegate(Z_Param_Out_Callback),EHttpRequestMethod(Z_Param_Method),Z_Param_ExecuteInGameThread); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartServer) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Port); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DocumentRoot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartServer(Z_Param_Port,Z_Param_DocumentRoot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOrCreateWebServerInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWebServer**)Z_Param__Result=UWebServer::GetOrCreateWebServerInstance(); \
		P_NATIVE_END; \
	}


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Webserver_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsStarted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsStarted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddURIHandler) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_Callback); \
		P_GET_ENUM(EHttpRequestMethod,Z_Param_Method); \
		P_GET_UBOOL(Z_Param_ExecuteInGameThread); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddURIHandler(Z_Param_Path,FRESTServerCallDelegate(Z_Param_Out_Callback),EHttpRequestMethod(Z_Param_Method),Z_Param_ExecuteInGameThread); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartServer) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Port); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DocumentRoot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartServer(Z_Param_Port,Z_Param_DocumentRoot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOrCreateWebServerInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWebServer**)Z_Param__Result=UWebServer::GetOrCreateWebServerInstance(); \
		P_NATIVE_END; \
	}


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Webserver_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebServer(); \
	friend UNREALWEBSERVER_API class UClass* Z_Construct_UClass_UWebServer(); \
public: \
	DECLARE_CLASS(UWebServer, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealWebServer"), NO_API) \
	DECLARE_SERIALIZER(UWebServer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Webserver_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUWebServer(); \
	friend UNREALWEBSERVER_API class UClass* Z_Construct_UClass_UWebServer(); \
public: \
	DECLARE_CLASS(UWebServer, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealWebServer"), NO_API) \
	DECLARE_SERIALIZER(UWebServer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Webserver_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebServer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebServer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebServer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebServer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebServer(UWebServer&&); \
	NO_API UWebServer(const UWebServer&); \
public:


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Webserver_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebServer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebServer(UWebServer&&); \
	NO_API UWebServer(const UWebServer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebServer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebServer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebServer)


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Webserver_h_40_PRIVATE_PROPERTY_OFFSET
#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Webserver_h_36_PROLOG
#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Webserver_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Webserver_h_40_PRIVATE_PROPERTY_OFFSET \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Webserver_h_40_RPC_WRAPPERS \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Webserver_h_40_INCLASS \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Webserver_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Webserver_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Webserver_h_40_PRIVATE_PROPERTY_OFFSET \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Webserver_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Webserver_h_40_INCLASS_NO_PURE_DECLS \
	UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Webserver_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealWebServerTest_Plugins_UnrealWebServer_Source_UnrealWebServer_Classes_Webserver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
