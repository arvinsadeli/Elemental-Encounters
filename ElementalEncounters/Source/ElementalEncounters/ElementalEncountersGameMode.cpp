// Copyright Epic Games, Inc. All Rights Reserved.

#include "ElementalEncountersGameMode.h"
#include "ElementalEncountersCharacter.h"
#include "UObject/ConstructorHelpers.h"

AElementalEncountersGameMode::AElementalEncountersGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
