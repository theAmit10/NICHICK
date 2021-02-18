// Copyright Epic Games, Inc. All Rights Reserved.

#include "NICHICKGameMode.h"
#include "NICHICKHUD.h"
#include "NICHICKCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANICHICKGameMode::ANICHICKGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ANICHICKHUD::StaticClass();
}
