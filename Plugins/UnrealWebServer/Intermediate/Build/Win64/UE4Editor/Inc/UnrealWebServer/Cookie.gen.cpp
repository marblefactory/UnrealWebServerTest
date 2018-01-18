// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/UnrealWebServerPrivatePCH.h"
#include "Classes/Cookie.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookie() {}
// Cross Module References
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UCookie_ConstructCookie();
	UNREALWEBSERVER_API UClass* Z_Construct_UClass_UCookie();
	UNREALWEBSERVER_API UClass* Z_Construct_UClass_UCookie_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UCookie_ConstructCookieExt();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UCookie_SetDomain();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UCookie_SetHttpOnly();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UCookie_SetMaxAge();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UCookie_SetName();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UCookie_SetPath();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UCookie_SetSecure();
	UNREALWEBSERVER_API UFunction* Z_Construct_UFunction_UCookie_SetValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealWebServer();
// End Cross Module References
	void UCookie::StaticRegisterNativesUCookie()
	{
		UClass* Class = UCookie::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ConstructCookie", (Native)&UCookie::execConstructCookie },
			{ "ConstructCookieExt", (Native)&UCookie::execConstructCookieExt },
			{ "SetDomain", (Native)&UCookie::execSetDomain },
			{ "SetHttpOnly", (Native)&UCookie::execSetHttpOnly },
			{ "SetMaxAge", (Native)&UCookie::execSetMaxAge },
			{ "SetName", (Native)&UCookie::execSetName },
			{ "SetPath", (Native)&UCookie::execSetPath },
			{ "SetSecure", (Native)&UCookie::execSetSecure },
			{ "SetValue", (Native)&UCookie::execSetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UCookie_ConstructCookie()
	{
		struct Cookie_eventConstructCookie_Parms
		{
			UObject* WorldContextObject;
			UCookie* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UCookie();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ConstructCookie"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(Cookie_eventConstructCookie_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, Cookie_eventConstructCookie_Parms), 0x0010000000000580, Z_Construct_UClass_UCookie_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, Cookie_eventConstructCookie_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("DefaultToSelf"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Cookie.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Constructs a new empty cookie\n@param WorldContextObject autofilled param from Unreal"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCookie_ConstructCookieExt()
	{
		struct Cookie_eventConstructCookieExt_Parms
		{
			UObject* WorldContextObject;
			FString Name;
			FString Value;
			UCookie* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UCookie();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ConstructCookieExt"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(Cookie_eventConstructCookieExt_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, Cookie_eventConstructCookieExt_Parms), 0x0010000000000580, Z_Construct_UClass_UCookie_NoRegister());
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Value, Cookie_eventConstructCookieExt_Parms), 0x0010000000000080);
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Name, Cookie_eventConstructCookieExt_Parms), 0x0010000000000080);
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, Cookie_eventConstructCookieExt_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("DefaultToSelf"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Cookie.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Constructs a new cookie with a defined name and value\n@param WorldContextObject autofilled param from Unreal\n@param Name the cookie name\n@param Value the cookie value"));
			MetaData->SetValue(NewProp_Value, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Name, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCookie_SetDomain()
	{
		struct Cookie_eventSetDomain_Parms
		{
			FString domain;
		};
		UObject* Outer = Z_Construct_UClass_UCookie();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetDomain"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Cookie_eventSetDomain_Parms));
			UProperty* NewProp_domain = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("domain"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(domain, Cookie_eventSetDomain_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Cookie.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the domain of the cookie\n@param domain the max age of the cookie"));
			MetaData->SetValue(NewProp_domain, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCookie_SetHttpOnly()
	{
		struct Cookie_eventSetHttpOnly_Parms
		{
			bool http_only;
		};
		UObject* Outer = Z_Construct_UClass_UCookie();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetHttpOnly"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Cookie_eventSetHttpOnly_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(http_only, Cookie_eventSetHttpOnly_Parms);
			UProperty* NewProp_http_only = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("http_only"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(http_only, Cookie_eventSetHttpOnly_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(http_only, Cookie_eventSetHttpOnly_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Cookie.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets if the cookie is HTTP ONLY or not\n@param http_only is the cookie http_only ?"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCookie_SetMaxAge()
	{
		struct Cookie_eventSetMaxAge_Parms
		{
			int32 max_age;
		};
		UObject* Outer = Z_Construct_UClass_UCookie();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetMaxAge"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Cookie_eventSetMaxAge_Parms));
			UProperty* NewProp_max_age = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("max_age"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(max_age, Cookie_eventSetMaxAge_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Cookie.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the max age of the cookie\n@param max_age the max age of the cookie"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCookie_SetName()
	{
		struct Cookie_eventSetName_Parms
		{
			FString name;
		};
		UObject* Outer = Z_Construct_UClass_UCookie();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Cookie_eventSetName_Parms));
			UProperty* NewProp_name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(name, Cookie_eventSetName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Cookie.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the name of the cookie\n@param name the cookie name"));
			MetaData->SetValue(NewProp_name, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCookie_SetPath()
	{
		struct Cookie_eventSetPath_Parms
		{
			FString path;
		};
		UObject* Outer = Z_Construct_UClass_UCookie();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetPath"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Cookie_eventSetPath_Parms));
			UProperty* NewProp_path = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("path"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(path, Cookie_eventSetPath_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Cookie.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the path of the cookie\n@param path the max age of the cookie"));
			MetaData->SetValue(NewProp_path, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCookie_SetSecure()
	{
		struct Cookie_eventSetSecure_Parms
		{
			bool secure;
		};
		UObject* Outer = Z_Construct_UClass_UCookie();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSecure"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Cookie_eventSetSecure_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(secure, Cookie_eventSetSecure_Parms);
			UProperty* NewProp_secure = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("secure"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(secure, Cookie_eventSetSecure_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(secure, Cookie_eventSetSecure_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Cookie.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets if the cookie is SECURE or not\n@param secure is the cookie secure ?"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCookie_SetValue()
	{
		struct Cookie_eventSetValue_Parms
		{
			FString value;
		};
		UObject* Outer = Z_Construct_UClass_UCookie();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Cookie_eventSetValue_Parms));
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(value, Cookie_eventSetValue_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UnrealWebServer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Cookie.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the value of the cookie\n@param value the cookie value"));
			MetaData->SetValue(NewProp_value, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCookie_NoRegister()
	{
		return UCookie::StaticClass();
	}
	UClass* Z_Construct_UClass_UCookie()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_UnrealWebServer();
			OuterClass = UCookie::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UCookie_ConstructCookie());
				OuterClass->LinkChild(Z_Construct_UFunction_UCookie_ConstructCookieExt());
				OuterClass->LinkChild(Z_Construct_UFunction_UCookie_SetDomain());
				OuterClass->LinkChild(Z_Construct_UFunction_UCookie_SetHttpOnly());
				OuterClass->LinkChild(Z_Construct_UFunction_UCookie_SetMaxAge());
				OuterClass->LinkChild(Z_Construct_UFunction_UCookie_SetName());
				OuterClass->LinkChild(Z_Construct_UFunction_UCookie_SetPath());
				OuterClass->LinkChild(Z_Construct_UFunction_UCookie_SetSecure());
				OuterClass->LinkChild(Z_Construct_UFunction_UCookie_SetValue());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCookie_ConstructCookie(), "ConstructCookie"); // 3513425423
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCookie_ConstructCookieExt(), "ConstructCookieExt"); // 2915562744
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCookie_SetDomain(), "SetDomain"); // 3346103407
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCookie_SetHttpOnly(), "SetHttpOnly"); // 114437956
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCookie_SetMaxAge(), "SetMaxAge"); // 4052693821
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCookie_SetName(), "SetName"); // 1733711161
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCookie_SetPath(), "SetPath"); // 2137189008
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCookie_SetSecure(), "SetSecure"); // 2941334725
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCookie_SetValue(), "SetValue"); // 2749471091
				static TCppClassTypeInfo<TCppClassTypeTraits<UCookie> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Cookie.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/Cookie.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("An UCookie can store all informations about HTTP cookies\nThis UCookie can be used to fulfill an UResponse\n@see UResponse\n@author Isara Technologies.\n@version 1.0"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCookie, 323148756);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCookie(Z_Construct_UClass_UCookie, &UCookie::StaticClass, TEXT("/Script/UnrealWebServer"), TEXT("UCookie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCookie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
