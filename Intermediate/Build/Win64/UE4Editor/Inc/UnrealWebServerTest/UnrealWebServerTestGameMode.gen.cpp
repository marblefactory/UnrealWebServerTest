// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "UnrealWebServerTestGameMode.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealWebServerTestGameMode() {}
// Cross Module References
	UNREALWEBSERVERTEST_API UClass* Z_Construct_UClass_AUnrealWebServerTestGameMode_NoRegister();
	UNREALWEBSERVERTEST_API UClass* Z_Construct_UClass_AUnrealWebServerTestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealWebServerTest();
// End Cross Module References
	void AUnrealWebServerTestGameMode::StaticRegisterNativesAUnrealWebServerTestGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUnrealWebServerTestGameMode_NoRegister()
	{
		return AUnrealWebServerTestGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AUnrealWebServerTestGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_UnrealWebServerTest();
			OuterClass = AUnrealWebServerTestGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AUnrealWebServerTestGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UnrealWebServerTestGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("UnrealWebServerTestGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealWebServerTestGameMode, 870682216);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealWebServerTestGameMode(Z_Construct_UClass_AUnrealWebServerTestGameMode, &AUnrealWebServerTestGameMode::StaticClass, TEXT("/Script/UnrealWebServerTest"), TEXT("AUnrealWebServerTestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealWebServerTestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
