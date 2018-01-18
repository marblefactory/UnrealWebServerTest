// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/UnrealWebServerPrivatePCH.h"
#include "Private/HttpRequestMethod.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpRequestMethod() {}
// Cross Module References
	UNREALWEBSERVER_API UEnum* Z_Construct_UEnum_UnrealWebServer_EHttpRequestMethod();
	UPackage* Z_Construct_UPackage__Script_UnrealWebServer();
// End Cross Module References
static UEnum* EHttpRequestMethod_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealWebServer_EHttpRequestMethod, Z_Construct_UPackage__Script_UnrealWebServer(), TEXT("EHttpRequestMethod"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHttpRequestMethod(EHttpRequestMethod_StaticEnum, TEXT("/Script/UnrealWebServer"), TEXT("EHttpRequestMethod"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_UnrealWebServer_EHttpRequestMethod()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealWebServer();
		extern uint32 Get_Z_Construct_UEnum_UnrealWebServer_EHttpRequestMethod_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHttpRequestMethod"), 0, Get_Z_Construct_UEnum_UnrealWebServer_EHttpRequestMethod_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EHttpRequestMethod"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EHttpRequestMethod::VE_ALL"), 0);
			EnumNames.Emplace(TEXT("EHttpRequestMethod::VE_GET"), 1);
			EnumNames.Emplace(TEXT("EHttpRequestMethod::VE_POST"), 2);
			EnumNames.Emplace(TEXT("EHttpRequestMethod::VE_HEAD"), 3);
			EnumNames.Emplace(TEXT("EHttpRequestMethod::VE_CONNECT"), 4);
			EnumNames.Emplace(TEXT("EHttpRequestMethod::VE_PUT"), 5);
			EnumNames.Emplace(TEXT("EHttpRequestMethod::VE_OPTIONS"), 6);
			EnumNames.Emplace(TEXT("EHttpRequestMethod::VE_PROPFIND"), 7);
			EnumNames.Emplace(TEXT("EHttpRequestMethod::VE_MKCOL"), 8);
			EnumNames.Emplace(TEXT("EHttpRequestMethod::VE_MAX"), 9);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EHttpRequestMethod");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Private/HttpRequestMethod.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("The EHttpRequestMethod enum stores all HTTP request methods\nThis enum is needed to fulfill the AddURIHandler method of UWebServer\n@author Isara Technologies.\n@version 1.0"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_ALL.DisplayName"), TEXT("*"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_CONNECT.DisplayName"), TEXT("CONNECT"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_GET.DisplayName"), TEXT("GET"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_HEAD.DisplayName"), TEXT("HEAD"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_MKCOL.DisplayName"), TEXT("MKCOL"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_OPTIONS.DisplayName"), TEXT("OPTIONS"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_POST.DisplayName"), TEXT("POST"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_PROPFIND.DisplayName"), TEXT("PROPFIND"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_PUT.DisplayName"), TEXT("PUT"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_UnrealWebServer_EHttpRequestMethod_CRC() { return 1786427120U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
