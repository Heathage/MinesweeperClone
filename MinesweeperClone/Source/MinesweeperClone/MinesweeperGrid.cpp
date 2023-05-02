// Fill out your copyright notice in the Description page of Project Settings.


#include "MinesweeperGrid.h"
#include "GridSquare.h"

// Sets default values
AMinesweeperGrid::AMinesweeperGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GridSize = 10;
	CellSpacing = 300;

	//GridSquare = 

}

// Called when the game starts or when spawned
void AMinesweeperGrid::BeginPlay()
{
	Super::BeginPlay();

	NumGridCells = GridSize * GridSize;

	for (uint32 i = 0; i < NumGridCells; i++)
	{
		const float XOffset = (i / GridSize) * CellSpacing;
		const float YOffset = (i % GridSize) * CellSpacing;

		const FVector CellLocation = FVector(XOffset, YOffset, 0.f) + GetActorLocation();

		AGridSquare* NewGridSquare = GetWorld()->SpawnActor<AGridSquare>(GridSquare, CellLocation, FRotator::ZeroRotator);

		if (NewGridSquare != nullptr)
		{
			NewGridSquare->OwningGrid = this;
		}
	}
	
}

// Called every frame
void AMinesweeperGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

