// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MyPG_MGameMode.h"
#include "MyPG_MCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyPG_MGameMode::AMyPG_MGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
