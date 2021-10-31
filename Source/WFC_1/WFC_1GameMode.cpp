// Copyright Epic Games, Inc. All Rights Reserved.

#include "WFC_1GameMode.h"
#include "WFC_1Character.h"
#include "UObject/ConstructorHelpers.h"

AWFC_1GameMode::AWFC_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
