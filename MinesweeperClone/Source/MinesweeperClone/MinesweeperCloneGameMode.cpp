// Copyright Epic Games, Inc. All Rights Reserved.

#include "MinesweeperCloneGameMode.h"
#include "MinesweeperClonePlayerController.h"
#include "MinesweeperClonePawn.h"

AMinesweeperCloneGameMode::AMinesweeperCloneGameMode()
{
	// no pawn by default
	DefaultPawnClass = AMinesweeperClonePawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AMinesweeperClonePlayerController::StaticClass();
}
