// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "UnrealWebServerTestGameMode.h"
#include "UnrealWebServerTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealWebServerTestGameMode::AUnrealWebServerTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
