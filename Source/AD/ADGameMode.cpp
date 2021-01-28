// Copyright Epic Games, Inc. All Rights Reserved.

#include "ADGameMode.h"
#include "ADPawn.h"

AADGameMode::AADGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AADPawn::StaticClass();
}
