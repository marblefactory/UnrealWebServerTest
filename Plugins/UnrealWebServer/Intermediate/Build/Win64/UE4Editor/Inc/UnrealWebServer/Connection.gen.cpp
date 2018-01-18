// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/UnrealWebServerPrivatePCH.h"
#include "Classes/Connection.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConnection() {}
// Cross Module References
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UConnection_GetCOOKIEVar();
	UNREALWEBSERVER_API UClass* Z_Construct_UClass_UConnection();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UConnection_GetData();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UConnection_GetGETVar();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UConnection_GetHeader();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UConnection_GetPOSTVar();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UConnection_SendRawResponse();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UConnection_SendRawResponseByte();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UConnection_SendResponse();
	UNREALWEBSERVER_API UClass* Z_Construct_UClass_UResponse_NoRegister();
	UNREALWEBSERVER_API UClass* Z_Construct_UClass_UConnection_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealWebServer();
// End Cross Module References
	void UConnection::StaticRegisterNativesUConnection()
	{
		UClass* Class = UConnection::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetCOOKIEVar", (Native)&UConnection::execGetCOOKIEVar },
			{ "GetData", (Native)&UConnection::execGetData },
			{ "GetGETVar", (Native)&UConnection::execGetGETVar },
			{ "GetHeader", (Native)&UConnection::execGetHeader },
			{ "GetPOSTVar", (Native)&UConnection::execGetPOSTVar },
			{ "SendRawResponse", (Native)&UConnection::execSendRawResponse },
			{ "SendRawResponseByte", (Native)&UConnection::execSendRawResponseByte },
			{ "SendResponse", (Native)&UConnection::execSendResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UConnection_GetCOOKIEVar()
	{
		struct Connection_eventGetCOOKIEVar_Parms
		{
			FString name;
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UConnection();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCOOKIEVar"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(Connection_eventGetCOOKIEVar_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, Connection_eventGetCOOKIEVar_Parms), 0x0010000000000580);
			UProperty* NewProp_name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(name, Connection_eventGetCOOKIEVar_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Connection.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets the value of the wished COOKIE variable\n@param name The COOKIE var name to find the value of\n@return the COOKIE var value if found\nEmpty string if not found."));
			MetaData->SetValue(NewProp_name, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UConnection_GetData()
	{
		struct Connection_eventGetData_Parms
		{
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UConnection();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetData"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(Connection_eventGetData_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, Connection_eventGetData_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Connection.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets the whole data available in the request\n@return the data"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UConnection_GetGETVar()
	{
		struct Connection_eventGetGETVar_Parms
		{
			FString name;
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UConnection();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetGETVar"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(Connection_eventGetGETVar_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, Connection_eventGetGETVar_Parms), 0x0010000000000580);
			UProperty* NewProp_name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(name, Connection_eventGetGETVar_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Connection.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets the value of the wished GET variable\n@param name The GET var name to find the value of\n@return the GET var value if found\nEmpty string if not found."));
			MetaData->SetValue(NewProp_name, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UConnection_GetHeader()
	{
		struct Connection_eventGetHeader_Parms
		{
			FString name;
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UConnection();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetHeader"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(Connection_eventGetHeader_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, Connection_eventGetHeader_Parms), 0x0010000000000580);
			UProperty* NewProp_name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(name, Connection_eventGetHeader_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Connection.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets the value of the wished header\n@param name The header name to find the value of\n@return the header value if found\nEmpty string if not found."));
			MetaData->SetValue(NewProp_name, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UConnection_GetPOSTVar()
	{
		struct Connection_eventGetPOSTVar_Parms
		{
			FString name;
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UConnection();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetPOSTVar"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(Connection_eventGetPOSTVar_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, Connection_eventGetPOSTVar_Parms), 0x0010000000000580);
			UProperty* NewProp_name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(name, Connection_eventGetPOSTVar_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Connection.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets the value of the wished POST variable\n@param name The POST var name to find the value of\n@return the POST var value if found\nEmpty string if not found."));
			MetaData->SetValue(NewProp_name, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UConnection_SendRawResponse()
	{
		struct Connection_eventSendRawResponse_Parms
		{
			FString responseData;
		};
		UObject* Outer = Z_Construct_UClass_UConnection();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SendRawResponse"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x44020401, 65535, sizeof(Connection_eventSendRawResponse_Parms));
			UProperty* NewProp_responseData = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("responseData"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(responseData, Connection_eventSendRawResponse_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Connection.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("This raw responde must include http headers and response code"));
			MetaData->SetValue(NewProp_responseData, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UConnection_SendRawResponseByte()
	{
		struct Connection_eventSendRawResponseByte_Parms
		{
			uint8 responseByte;
		};
		UObject* Outer = Z_Construct_UClass_UConnection();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SendRawResponseByte"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54420401, 65535, sizeof(Connection_eventSendRawResponseByte_Parms));
			UProperty* NewProp_responseByte = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("responseByte"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(responseByte, Connection_eventSendRawResponseByte_Parms), 0x0010000008000182);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Connection.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Send a raw response single byte to the client\n@param responseByte The byte containing data to send to response"));
			MetaData->SetValue(NewProp_responseByte, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UConnection_SendResponse()
	{
		struct Connection_eventSendResponse_Parms
		{
			UResponse* response;
		};
		UObject* Outer = Z_Construct_UClass_UConnection();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SendResponse"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x44020401, 65535, sizeof(Connection_eventSendResponse_Parms));
			UProperty* NewProp_response = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("response"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(response, Connection_eventSendResponse_Parms), 0x0010000000000080, Z_Construct_UClass_UResponse_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Connection.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Send the response to the client\n@param response The fulfilled response to send to the client"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConnection_NoRegister()
	{
		return UConnection::StaticClass();
	}
	UClass* Z_Construct_UClass_UConnection()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_UnrealWebServer();
			OuterClass = UConnection::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UConnection_GetCOOKIEVar());
				OuterClass->LinkChild(Z_Construct_UFunction_UConnection_GetData());
				OuterClass->LinkChild(Z_Construct_UFunction_UConnection_GetGETVar());
				OuterClass->LinkChild(Z_Construct_UFunction_UConnection_GetHeader());
				OuterClass->LinkChild(Z_Construct_UFunction_UConnection_GetPOSTVar());
				OuterClass->LinkChild(Z_Construct_UFunction_UConnection_SendRawResponse());
				OuterClass->LinkChild(Z_Construct_UFunction_UConnection_SendRawResponseByte());
				OuterClass->LinkChild(Z_Construct_UFunction_UConnection_SendResponse());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UConnection_GetCOOKIEVar(), "GetCOOKIEVar"); // 3812043906
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UConnection_GetData(), "GetData"); // 2189370155
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UConnection_GetGETVar(), "GetGETVar"); // 667099230
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UConnection_GetHeader(), "GetHeader"); // 1108975865
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UConnection_GetPOSTVar(), "GetPOSTVar"); // 803786451
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UConnection_SendRawResponse(), "SendRawResponse"); // 1459527801
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UConnection_SendRawResponseByte(), "SendRawResponseByte"); // 1492480439
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UConnection_SendResponse(), "SendResponse"); // 3359183710
				static TCppClassTypeInfo<TCppClassTypeTraits<UConnection> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Connection.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/Connection.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("The UConnection class is used to store all informations about the HTTP connection established with the client.\nThe connection is fulfilled with all HTTP and client informations\nGetters can easily access to the connection variables (headers, etc...)\n@author Isara Technologies.\n@version 1.3"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConnection, 851792194);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConnection(Z_Construct_UClass_UConnection, &UConnection::StaticClass, TEXT("/Script/UnrealWebServer"), TEXT("UConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConnection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
