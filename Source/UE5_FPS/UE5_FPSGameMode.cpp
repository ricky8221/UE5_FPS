// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_FPSGameMode.h"
#include "UE5_FPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_FPSGameMode::AUE5_FPSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
