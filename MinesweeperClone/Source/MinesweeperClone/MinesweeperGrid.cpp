// Fill out your copyright notice in the Description page of Project Settings.


#include "MinesweeperGrid.h"
#include "GridSquare.h"

// Sets default values
AMinesweeperGrid::AMinesweeperGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GridSize = 10;
	CellSpacing = 100;

	static ConstructorHelpers::FObjectFinder<UBlueprint>ItemBlueprint(TEXT("Blueprint'/Game/MyBlueprints/BP_GridSquare'"));
	if (ItemBlueprint.Object)
	{
		GridSquare = (UClass*)ItemBlueprint.Object->GeneratedClass;
	}
}

// Called when the game starts or when spawned
void AMinesweeperGrid::BeginPlay()
{
	Super::BeginPlay();

	CreateGrid();
	SetMines();
	CalculateNeighbouringTilesValue();
}

// Called every frame
void AMinesweeperGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMinesweeperGrid::CreateGrid()
{
	NumGridCells = GridSize * GridSize;

	for (int32 i = 0; i < NumGridCells; i++)
	{
		const float XOffset = (i / GridSize) * CellSpacing;
		const float YOffset = (i % GridSize) * CellSpacing;

		const FVector CellLocation = FVector(XOffset, YOffset, 0.f) + GetActorLocation();

		AGridSquare* NewGridSquare = GetWorld()->SpawnActor<AGridSquare>(GridSquare, CellLocation, FRotator::ZeroRotator);

		ListOfGridSquares.Add(NewGridSquare);

		if (NewGridSquare != nullptr)
		{
			NewGridSquare->OwningGrid = this;
		}
	}
}

void AMinesweeperGrid::SetMines()
{
	for (int32 i = 0; i < 9; i++)
	{
		GenerateRandomNumber();

		while (ListOfGridSquares[Random]->IsMine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Repeated"));
			GenerateRandomNumber();
		}

		if (ListOfGridSquares[Random]->IsMine == false)
		{
			ListOfGridSquares[Random]->SetMineMaterial();

			int32 X = Random % GridSize;
			int32 Y = (Random - X) / GridSize;

			MineGridPositions.Add(FVector2D(X, Y));

			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("Set Mine"));
		}
	}
}

void AMinesweeperGrid::CalculateNeighbouringTilesValue()
{
	for (FVector2D GridPosition : MineGridPositions)
	{
		//above level
		FVector2D TopLeftCell = FVector2D(GridPosition.X - 1, GridPosition.Y - 1);
		int32 TopLeftInt = TopLeftCell.Y * GridSize + TopLeftCell.X;
		CheckBounds(TopLeftCell);

		if (TopLeftInt >= 0 && !OutOfBounds)
		{
			ListOfGridSquares[TopLeftInt]->AddToMineNeighbouringValue();
		}

		FVector2D TopCell = FVector2D(GridPosition.X, GridPosition.Y - 1);;
		int32 TopInt = TopCell.Y * GridSize + TopCell.X;
		CheckBounds(TopCell);

		if (TopInt >= 0 && !OutOfBounds)
		{
			ListOfGridSquares[TopInt]->AddToMineNeighbouringValue();
		}

		FVector2D TopRightCell = FVector2D(GridPosition.X + 1, GridPosition.Y - 1);;
		int32 TopRightInt = TopRightCell.Y * GridSize + TopRightCell.X;
		CheckBounds(TopRightCell);

		if (TopRightInt >= 0 && !OutOfBounds)
		{
			ListOfGridSquares[TopRightInt]->AddToMineNeighbouringValue();
		}

		//same level
		FVector2D LeftCell = FVector2D(GridPosition.X - 1, GridPosition.Y);;
		int32 LeftInt = LeftCell.Y * GridSize + LeftCell.X;
		CheckBounds(LeftCell);

		if (LeftInt >= 0 && !OutOfBounds)
		{
			ListOfGridSquares[LeftInt]->AddToMineNeighbouringValue();
		}

		FVector2D RightCell = FVector2D(GridPosition.X + 1, GridPosition.Y);;
		int32 RightInt = RightCell.Y * GridSize + RightCell.X;
		CheckBounds(RightCell);

		if (RightInt <= 99 && !OutOfBounds)
		{
			ListOfGridSquares[RightInt]->AddToMineNeighbouringValue();
		}

		//below level
		FVector2D BottomLeftCell = FVector2D(GridPosition.X - 1, GridPosition.Y + 1);
		int32 BottomLeftInt = BottomLeftCell.Y * GridSize + BottomLeftCell.X;
		CheckBounds(BottomLeftCell);

		if (BottomLeftInt <= 99 && !OutOfBounds)
		{
			ListOfGridSquares[BottomLeftInt]->AddToMineNeighbouringValue();
		}

		FVector2D BottomCell = FVector2D(GridPosition.X, GridPosition.Y + 1);
		int32 BottomInt = BottomCell.Y * GridSize + BottomCell.X;
		CheckBounds(BottomCell);

		if (BottomInt <= 99 && !OutOfBounds)
		{
			ListOfGridSquares[BottomInt]->AddToMineNeighbouringValue();
		}

		FVector2D BottomRightCell = FVector2D(GridPosition.X + 1, GridPosition.Y + 1);
		int32 BottomRightInt = BottomRightCell.Y * GridSize + BottomRightCell.X;
		CheckBounds(BottomRightCell);

		if (BottomRightInt <= 99 && !OutOfBounds)
		{
			ListOfGridSquares[BottomRightInt]->AddToMineNeighbouringValue();
		}
	}
}

void AMinesweeperGrid::CheckBounds(FVector2D GridPosition)
{
	OutOfBounds = false;

	if (GridPosition.X < 0 || GridPosition.X > 9)
	{
		OutOfBounds = true;
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, TEXT("Check Position X"));
	}

	if (GridPosition.Y < 0 || GridPosition.Y > 9)
	{
		OutOfBounds = true;
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Blue, TEXT("Check Position Y"));
	}
}

void AMinesweeperGrid::GenerateRandomNumber()
{
	Random = FMath::RandRange(0, 99);
}


