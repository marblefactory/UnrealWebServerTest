// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/UnrealWebServerPrivatePCH.h"
#include "Classes/Webserver.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebserver() {}
// Cross Module References
	UNREALWEBSERVER_API UFunction* Z_Construct_UDelegateFunction_UnrealWebServer_RESTServerCallDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnrealWebServer();
	UNREALWEBSERVER_API UClass* Z_Construct_UClass_UConnection_NoRegister();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UWebServer_AddURIHandler();
	UNREALWEBSERVER_API UClass* Z_Construct_UClass_UWebServer();
	UNREALWEBSERVER_API UEnum* Z_Construct_UEnum_UnrealWebServer_EHttpRequestMethod();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UWebServer_GetOrCreateWebServerInstance();
	UNREALWEBSERVER_API UClass* Z_Construct_UClass_UWebServer_NoRegister();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UWebServer_IsStarted();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UWebServer_StartServer();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UWebServer_StopServer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UnrealWebServer_RESTServerCallDelegate__DelegateSignature()
	{
		struct _Script_UnrealWebServer_eventRESTServerCallDelegate_Parms
		{
			UConnection* Connection;
		};
		UObject* Outer = Z_Construct_UPackage__Script_UnrealWebServer();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RESTServerCallDelegate__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00120000, 65535, sizeof(_Script_UnrealWebServer_eventRESTServerCallDelegate_Parms));
			UProperty* NewProp_Connection = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Connection"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Connection, _Script_UnrealWebServer_eventRESTServerCallDelegate_Parms), 0x0010000000000080, Z_Construct_UClass_UConnection_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Webserver.h"));
#endif
		}
		return ReturnFunction;
	}
	void UWebServer::StaticRegisterNativesUWebServer()
	{
		UClass* Class = UWebServer::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddURIHandler", (Native)&UWebServer::execAddURIHandler },
			{ "GetOrCreateWebServerInstance", (Native)&UWebServer::execGetOrCreateWebServerInstance },
			{ "IsStarted", (Native)&UWebServer::execIsStarted },
			{ "StartServer", (Native)&UWebServer::execStartServer },
			{ "StopServer", (Native)&UWebServer::execStopServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UWebServer_AddURIHandler()
	{
		struct WebServer_eventAddURIHandler_Parms
		{
			FString Path;
			FScriptDelegate Callback;
			EHttpRequestMethod Method;
			bool ExecuteInGameThread;
		};
		UObject* Outer = Z_Construct_UClass_UWebServer();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddURIHandler"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(WebServer_eventAddURIHandler_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ExecuteInGameThread, WebServer_eventAddURIHandler_Parms);
			UProperty* NewProp_ExecuteInGameThread = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ExecuteInGameThread"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ExecuteInGameThread, WebServer_eventAddURIHandler_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(ExecuteInGameThread, WebServer_eventAddURIHandler_Parms), sizeof(bool), true);
			UProperty* NewProp_Method = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Method"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Method, WebServer_eventAddURIHandler_Parms), 0x0010000000000080, Z_Construct_UEnum_UnrealWebServer_EHttpRequestMethod());
			UProperty* NewProp_Method_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Method, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Callback = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Callback"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateProperty(CPP_PROPERTY_BASE(Callback, WebServer_eventAddURIHandler_Parms), 0x0010000008000182, Z_Construct_UDelegateFunction_UnrealWebServer_RESTServerCallDelegate__DelegateSignature());
			UProperty* NewProp_Path = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Path"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Path, WebServer_eventAddURIHandler_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Webserver.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Adds an URI handler\n@param Path the URI path\n@param Callback the function called (this function needs a UConnection object as parameter)\n@param Method the HTTP method to filters\n@param ExecuteInGameThread does this callback must be executed in game thread?"));
			MetaData->SetValue(NewProp_Callback, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Path, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWebServer_GetOrCreateWebServerInstance()
	{
		struct WebServer_eventGetOrCreateWebServerInstance_Parms
		{
			UWebServer* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UWebServer();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetOrCreateWebServerInstance"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(WebServer_eventGetOrCreateWebServerInstance_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, WebServer_eventGetOrCreateWebServerInstance_Parms), 0x0010000000000580, Z_Construct_UClass_UWebServer_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Webserver.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets or creates a Web Server instance\n@return Returns an instance of the singleton"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWebServer_IsStarted()
	{
		struct WebServer_eventIsStarted_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UWebServer();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsStarted"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(WebServer_eventIsStarted_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, WebServer_eventIsStarted_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, WebServer_eventIsStarted_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, WebServer_eventIsStarted_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Webserver.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns <code>true</code> if the server is started, <code>false</code> otherwise\n@return <code>true</code> if the server is started, <code>false</code> otherwise"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWebServer_StartServer()
	{
		struct WebServer_eventStartServer_Parms
		{
			int32 Port;
			FString DocumentRoot;
		};
		UObject* Outer = Z_Construct_UClass_UWebServer();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartServer"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(WebServer_eventStartServer_Parms));
			UProperty* NewProp_DocumentRoot = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DocumentRoot"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(DocumentRoot, WebServer_eventStartServer_Parms), 0x0010000000000080);
			UProperty* NewProp_Port = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Port"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Port, WebServer_eventStartServer_Parms), 0x0010000000000082);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Webserver.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Starts the web server\n@param Port the port of the server\n@param DocumentRoot the location of static files (html, js, css, etc...)\nThe path can be either absolute or relative (using Game Contents folder)"));
			MetaData->SetValue(NewProp_DocumentRoot, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Port, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWebServer_StopServer()
	{
		UObject* Outer = Z_Construct_UClass_UWebServer();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopServer"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Webserver.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stops the web server"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebServer_NoRegister()
	{
		return UWebServer::StaticClass();
	}
	UClass* Z_Construct_UClass_UWebServer()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_UnrealWebServer();
			OuterClass = UWebServer::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UWebServer_AddURIHandler());
				OuterClass->LinkChild(Z_Construct_UFunction_UWebServer_GetOrCreateWebServerInstance());
				OuterClass->LinkChild(Z_Construct_UFunction_UWebServer_IsStarted());
				OuterClass->LinkChild(Z_Construct_UFunction_UWebServer_StartServer());
				OuterClass->LinkChild(Z_Construct_UFunction_UWebServer_StopServer());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebServer_AddURIHandler(), "AddURIHandler"); // 2284441578
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebServer_GetOrCreateWebServerInstance(), "GetOrCreateWebServerInstance"); // 4231652905
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebServer_IsStarted(), "IsStarted"); // 2012235154
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebServer_StartServer(), "StartServer"); // 857591194
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebServer_StopServer(), "StopServer"); // 1408078671
				static TCppClassTypeInfo<TCppClassTypeTraits<UWebServer> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Webserver.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/Webserver.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("UWebServer is the main singleton of the UnrealWebServer plugin.\nIts job is to manage and monitor the web server status.\n@author Isara Technologies.\n@version 1.3"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebServer, 2558181321);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebServer(Z_Construct_UClass_UWebServer, &UWebServer::StaticClass, TEXT("/Script/UnrealWebServer"), TEXT("UWebServer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebServer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
