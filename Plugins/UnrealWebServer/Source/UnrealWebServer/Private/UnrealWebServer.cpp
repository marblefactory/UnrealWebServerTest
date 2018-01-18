// Copyright (c) 2017 Isara Technologies. All Rights Reserved.

#include "UnrealWebServerPrivatePCH.h"

#include "UnrealWebServer.h"

#define LOCTEXT_NAMESPACE "FUnrealWebServerModule"

DEFINE_LOG_CATEGORY(UnrealWebServer);

void FUnrealWebServerModule::StartupModule()
{
}

void FUnrealWebServerModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUnrealWebServerModule, UnrealWebServer)