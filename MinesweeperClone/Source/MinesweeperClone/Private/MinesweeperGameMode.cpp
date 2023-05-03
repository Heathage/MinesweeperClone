// Fill out your copyright notice in the Description page of Project Settings.


#include "MinesweeperGameMode.h"
#include "../MinesweeperClonePawn.h"
#include "../MinesweeperGrid.h"
#include "../Public/MyPawn.h"

AMinesweeperGameMode::AMinesweeperGameMode()
{
	DefaultPawnClass = AMyPawn::StaticClass();
}

void AMinesweeperGameMode::BeginPlay()
{
	Super::BeginPlay();

	Grid = GetWorld()->SpawnActor<AMinesweeperGrid>(FVector(0, 0, 0), FRotator(0, 0, 0));
}
