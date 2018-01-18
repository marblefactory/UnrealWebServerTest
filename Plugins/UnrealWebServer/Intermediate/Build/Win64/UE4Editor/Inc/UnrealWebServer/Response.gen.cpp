// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/UnrealWebServerPrivatePCH.h"
#include "Classes/Response.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResponse() {}
// Cross Module References
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UResponse_AddResponseCookie();
	UNREALWEBSERVER_API UClass* Z_Construct_UClass_UResponse();
	UNREALWEBSERVER_API UClass* Z_Construct_UClass_UCookie_NoRegister();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UResponse_ConstructResponse();
	UNREALWEBSERVER_API UClass* Z_Construct_UClass_UResponse_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UResponse_ConstructResponseExt();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UResponse_SetResponseContent();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UResponse_SetResponseContentType();
	UNREALWEBSERVER_API UEnum* Z_Construct_UEnum_UnrealWebServer_EMediaType();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UResponse_SetResponseRedirection();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UResponse_SetResponseStatusCode();
	UNREALWEBSERVER_API UEnum* Z_Construct_UEnum_UnrealWebServer_EHttpStatusCode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealWebServer();
// End Cross Module References
	void UResponse::StaticRegisterNativesUResponse()
	{
		UClass* Class = UResponse::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddResponseCookie", (Native)&UResponse::execAddResponseCookie },
			{ "ConstructResponse", (Native)&UResponse::execConstructResponse },
			{ "ConstructResponseExt", (Native)&UResponse::execConstructResponseExt },
			{ "SetResponseContent", (Native)&UResponse::execSetResponseContent },
			{ "SetResponseContentType", (Native)&UResponse::execSetResponseContentType },
			{ "SetResponseRedirection", (Native)&UResponse::execSetResponseRedirection },
			{ "SetResponseStatusCode", (Native)&UResponse::execSetResponseStatusCode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UResponse_AddResponseCookie()
	{
		struct Response_eventAddResponseCookie_Parms
		{
			UCookie* cookie;
		};
		UObject* Outer = Z_Construct_UClass_UResponse();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddResponseCookie"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Response_eventAddResponseCookie_Parms));
			UProperty* NewProp_cookie = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("cookie"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(cookie, Response_eventAddResponseCookie_Parms), 0x0010000000000080, Z_Construct_UClass_UCookie_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Response.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Adds a cookie to the response.\nMultiple cookies can be add to a single response\n@param cookie The cookie"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UResponse_ConstructResponse()
	{
		struct Response_eventConstructResponse_Parms
		{
			UObject* WorldContextObject;
			UResponse* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UResponse();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ConstructResponse"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(Response_eventConstructResponse_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, Response_eventConstructResponse_Parms), 0x0010000000000580, Z_Construct_UClass_UResponse_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, Response_eventConstructResponse_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("DefaultToSelf"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Response.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Constructs a new empty response\n@param WorldContextObject autofilled param from Unreal"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UResponse_ConstructResponseExt()
	{
		struct Response_eventConstructResponseExt_Parms
		{
			UObject* WorldContextObject;
			FString content;
			UResponse* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UResponse();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ConstructResponseExt"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(Response_eventConstructResponseExt_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, Response_eventConstructResponseExt_Parms), 0x0010000000000580, Z_Construct_UClass_UResponse_NoRegister());
			UProperty* NewProp_content = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("content"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(content, Response_eventConstructResponseExt_Parms), 0x0010000000000080);
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, Response_eventConstructResponseExt_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("DefaultToSelf"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Response.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Constructs a new response with an http content\nThe HTTPStatus code will be automatically set to 200\n@param WorldContextObject autofilled param from Unreal\n@param content the HTTP content"));
			MetaData->SetValue(NewProp_content, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UResponse_SetResponseContent()
	{
		struct Response_eventSetResponseContent_Parms
		{
			FString content;
		};
		UObject* Outer = Z_Construct_UClass_UResponse();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetResponseContent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Response_eventSetResponseContent_Parms));
			UProperty* NewProp_content = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("content"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(content, Response_eventSetResponseContent_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Response.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets a response content (http body)\n@param content the body of the http response"));
			MetaData->SetValue(NewProp_content, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UResponse_SetResponseContentType()
	{
		struct Response_eventSetResponseContentType_Parms
		{
			EMediaType contentType;
		};
		UObject* Outer = Z_Construct_UClass_UResponse();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetResponseContentType"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Response_eventSetResponseContentType_Parms));
			UProperty* NewProp_contentType = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("contentType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(contentType, Response_eventSetResponseContentType_Parms), 0x0010000000000080, Z_Construct_UEnum_UnrealWebServer_EMediaType());
			UProperty* NewProp_contentType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_contentType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Response.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the response mime content type\n@param contentType the media type of the content"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UResponse_SetResponseRedirection()
	{
		struct Response_eventSetResponseRedirection_Parms
		{
			FString redirection;
		};
		UObject* Outer = Z_Construct_UClass_UResponse();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetResponseRedirection"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Response_eventSetResponseRedirection_Parms));
			UProperty* NewProp_redirection = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("redirection"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(redirection, Response_eventSetResponseRedirection_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Response.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets a response redirection\nIt is wished to use a specific HTTP status code with a redirection (such as Permanently moved)\n@param redirection the URL to redirect the user to"));
			MetaData->SetValue(NewProp_redirection, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UResponse_SetResponseStatusCode()
	{
		struct Response_eventSetResponseStatusCode_Parms
		{
			EHttpStatusCode statusCode;
		};
		UObject* Outer = Z_Construct_UClass_UResponse();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetResponseStatusCode"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Response_eventSetResponseStatusCode_Parms));
			UProperty* NewProp_statusCode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("statusCode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(statusCode, Response_eventSetResponseStatusCode_Parms), 0x0010000000000080, Z_Construct_UEnum_UnrealWebServer_EHttpStatusCode());
			UProperty* NewProp_statusCode_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_statusCode, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Response.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets a specific http response status code\n@param statusCode The HTTP status code"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UResponse_NoRegister()
	{
		return UResponse::StaticClass();
	}
	UClass* Z_Construct_UClass_UResponse()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_UnrealWebServer();
			OuterClass = UResponse::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UResponse_AddResponseCookie());
				OuterClass->LinkChild(Z_Construct_UFunction_UResponse_ConstructResponse());
				OuterClass->LinkChild(Z_Construct_UFunction_UResponse_ConstructResponseExt());
				OuterClass->LinkChild(Z_Construct_UFunction_UResponse_SetResponseContent());
				OuterClass->LinkChild(Z_Construct_UFunction_UResponse_SetResponseContentType());
				OuterClass->LinkChild(Z_Construct_UFunction_UResponse_SetResponseRedirection());
				OuterClass->LinkChild(Z_Construct_UFunction_UResponse_SetResponseStatusCode());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UResponse_AddResponseCookie(), "AddResponseCookie"); // 3905315643
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UResponse_ConstructResponse(), "ConstructResponse"); // 3638141531
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UResponse_ConstructResponseExt(), "ConstructResponseExt"); // 815536486
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UResponse_SetResponseContent(), "SetResponseContent"); // 901411654
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UResponse_SetResponseContentType(), "SetResponseContentType"); // 922740281
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UResponse_SetResponseRedirection(), "SetResponseRedirection"); // 2442336987
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UResponse_SetResponseStatusCode(), "SetResponseStatusCode"); // 2064451274
				static TCppClassTypeInfo<TCppClassTypeTraits<UResponse> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Response.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/Response.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("The UResponse class is used to build an HTTP response to send back to the client\nThis class is needed by the SendResponse method of UConnection\n@author Isara Technologies.\n@version 1.0"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UResponse, 3285179455);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UResponse(Z_Construct_UClass_UResponse, &UResponse::StaticClass, TEXT("/Script/UnrealWebServer"), TEXT("UResponse"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResponse);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
