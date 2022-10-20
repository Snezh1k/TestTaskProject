// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestTaskProjectGameMode.h"

#include "GameHUD.h"
#include "TestTaskProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestTaskProjectGameMode::ATestTaskProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
		HUDClass = AGameHUD::StaticClass();
	}
}
