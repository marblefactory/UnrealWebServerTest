// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/UnrealWebServerPrivatePCH.h"
#include "Private/MediaType.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaType() {}
// Cross Module References
	UNREALWEBSERVER_API UEnum* Z_Construct_UEnum_UnrealWebServer_EMediaType();
	UPackage* Z_Construct_UPackage__Script_UnrealWebServer();
// End Cross Module References
static UEnum* EMediaType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealWebServer_EMediaType, Z_Construct_UPackage__Script_UnrealWebServer(), TEXT("EMediaType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMediaType(EMediaType_StaticEnum, TEXT("/Script/UnrealWebServer"), TEXT("EMediaType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_UnrealWebServer_EMediaType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealWebServer();
		extern uint32 Get_Z_Construct_UEnum_UnrealWebServer_EMediaType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMediaType"), 0, Get_Z_Construct_UEnum_UnrealWebServer_EMediaType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EMediaType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EMediaType::APPLICATION_JAVASCRIPT"), 0);
			EnumNames.Emplace(TEXT("EMediaType::APPLICATION_JSON"), 1);
			EnumNames.Emplace(TEXT("EMediaType::APPLICATION_OCTET_STREAM"), 2);
			EnumNames.Emplace(TEXT("EMediaType::APPLICATION_OGG"), 3);
			EnumNames.Emplace(TEXT("EMediaType::APPLICATION_PDF"), 4);
			EnumNames.Emplace(TEXT("EMediaType::APPLICATION_ZIP"), 5);
			EnumNames.Emplace(TEXT("EMediaType::AUDIO_MPEG"), 6);
			EnumNames.Emplace(TEXT("EMediaType::AUDIO_WAV"), 7);
			EnumNames.Emplace(TEXT("EMediaType::IMAGE_GIF"), 8);
			EnumNames.Emplace(TEXT("EMediaType::IMAGE_JPEG"), 9);
			EnumNames.Emplace(TEXT("EMediaType::IMAGE_PNG"), 10);
			EnumNames.Emplace(TEXT("EMediaType::IMAGE_TIFF"), 11);
			EnumNames.Emplace(TEXT("EMediaType::MULTIPART_FORM_DATA"), 12);
			EnumNames.Emplace(TEXT("EMediaType::TEXT_CSS"), 13);
			EnumNames.Emplace(TEXT("EMediaType::TEXT_CSV"), 14);
			EnumNames.Emplace(TEXT("EMediaType::TEXT_HTML"), 15);
			EnumNames.Emplace(TEXT("EMediaType::TEXT_JAVASCRIPT"), 16);
			EnumNames.Emplace(TEXT("EMediaType::TEXT_PLAIN"), 17);
			EnumNames.Emplace(TEXT("EMediaType::TEXT_XML"), 18);
			EnumNames.Emplace(TEXT("EMediaType::VIDEO_MP4"), 19);
			EnumNames.Emplace(TEXT("EMediaType::VIDEO_MPEG"), 20);
			EnumNames.Emplace(TEXT("EMediaType::VIDEO_QUICKTIME"), 21);
			EnumNames.Emplace(TEXT("EMediaType::VIDEO_WEBM"), 22);
			EnumNames.Emplace(TEXT("EMediaType::EMediaType_MAX"), 23);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EMediaType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Private/MediaType.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("The EMediaType enum stores the most common mime types\nThis enum is needed to fulfill The UResponse with SetResponseContentType method\n@author Isara Technologies.\n@version 1.0"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_UnrealWebServer_EMediaType_CRC() { return 3995598738U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
