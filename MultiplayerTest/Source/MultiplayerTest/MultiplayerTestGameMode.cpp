// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplayerTestGameMode.h"
#include "MultiplayerTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayerTestGameMode::AMultiplayerTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
