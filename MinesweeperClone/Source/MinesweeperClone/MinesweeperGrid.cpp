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
	NumberOfMines = 9;
	WinScore = NumberOfMines;

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
			NewGridSquare->GridSquareNumber = i;
		}
	}
}

void AMinesweeperGrid::SetMines()
{
	for (int32 i = 0; i < NumberOfMines; i++)
	{
		GenerateRandomNumber();

		while (ListOfGridSquares[Random]->bIsMine)
		{
			GenerateRandomNumber();
		}

		if (ListOfGridSquares[Random]->bIsMine == false)
		{
			ListOfGridSquares[Random]->SetMineMaterial();

			int32 X = Random % GridSize;
			int32 Y = (Random - X) / GridSize;

			MineGridPositions.Add(FVector2D(X, Y));

			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Set Mine"));
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

		if (TopLeftInt >= 0 && !bOutOfBounds)
		{
			ListOfGridSquares[TopLeftInt]->AddToMineNeighbouringValue();
		}

		FVector2D TopCell = FVector2D(GridPosition.X, GridPosition.Y - 1);;
		int32 TopInt = TopCell.Y * GridSize + TopCell.X;
		CheckBounds(TopCell);

		if (TopInt >= 0 && !bOutOfBounds)
		{
			ListOfGridSquares[TopInt]->AddToMineNeighbouringValue();
		}

		FVector2D TopRightCell = FVector2D(GridPosition.X + 1, GridPosition.Y - 1);;
		int32 TopRightInt = TopRightCell.Y * GridSize + TopRightCell.X;
		CheckBounds(TopRightCell);

		if (TopRightInt >= 0 && !bOutOfBounds)
		{
			ListOfGridSquares[TopRightInt]->AddToMineNeighbouringValue();
		}

		//same level
		FVector2D LeftCell = FVector2D(GridPosition.X - 1, GridPosition.Y);;
		int32 LeftInt = LeftCell.Y * GridSize + LeftCell.X;
		CheckBounds(LeftCell);

		if (LeftInt >= 0 && !bOutOfBounds)
		{
			ListOfGridSquares[LeftInt]->AddToMineNeighbouringValue();
		}

		FVector2D RightCell = FVector2D(GridPosition.X + 1, GridPosition.Y);;
		int32 RightInt = RightCell.Y * GridSize + RightCell.X;
		CheckBounds(RightCell);

		if (RightInt <= 99 && !bOutOfBounds)
		{
			ListOfGridSquares[RightInt]->AddToMineNeighbouringValue();
		}

		//below level
		FVector2D BottomLeftCell = FVector2D(GridPosition.X - 1, GridPosition.Y + 1);
		int32 BottomLeftInt = BottomLeftCell.Y * GridSize + BottomLeftCell.X;
		CheckBounds(BottomLeftCell);

		if (BottomLeftInt <= 99 && !bOutOfBounds)
		{
			ListOfGridSquares[BottomLeftInt]->AddToMineNeighbouringValue();
		}

		FVector2D BottomCell = FVector2D(GridPosition.X, GridPosition.Y + 1);
		int32 BottomInt = BottomCell.Y * GridSize + BottomCell.X;
		CheckBounds(BottomCell);

		if (BottomInt <= 99 && !bOutOfBounds)
		{
			ListOfGridSquares[BottomInt]->AddToMineNeighbouringValue();
		}

		FVector2D BottomRightCell = FVector2D(GridPosition.X + 1, GridPosition.Y + 1);
		int32 BottomRightInt = BottomRightCell.Y * GridSize + BottomRightCell.X;
		CheckBounds(BottomRightCell);

		if (BottomRightInt <= 99 && !bOutOfBounds)
		{
			ListOfGridSquares[BottomRightInt]->AddToMineNeighbouringValue();
		}
	}
}

void AMinesweeperGrid::CheckBounds(FVector2D GridPosition)
{
	bOutOfBounds = false;

	if (GridPosition.X < 0 || GridPosition.X > 9)
	{
		bOutOfBounds = true;
	}

	if (GridPosition.Y < 0 || GridPosition.Y > 9)
	{
		bOutOfBounds = true;
	}
}

void AMinesweeperGrid::WinCondition(int32 Value)
{
	CurrentScore += Value;
	if (CurrentScore == WinScore)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("YOU WIN!!"));
	}
}

void AMinesweeperGrid::FlipAllMines()
{
	for (AGridSquare* Square : ListOfGridSquares)
	{
		if (Square->bIsMine)
		{
			Square->FlipCell();
		}
	}
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("YOU LOSE!!"));
}

void AMinesweeperGrid::FlipEmptyCells(int32 GridSquareNumber)
{
	int32 X = GridSquareNumber % GridSize;
	int32 Y = (GridSquareNumber - X) / GridSize;

	FVector2D GridSquareCoordinates = FVector2D(X, Y);

	FVector2D TopLeftCell = FVector2D(GridSquareCoordinates.X - 1, GridSquareCoordinates.Y - 1);
	int32 TopLeftInt = TopLeftCell.Y * GridSize + TopLeftCell.X;
	CheckBounds(TopLeftCell);

	if (TopLeftInt >= 0 && !bOutOfBounds)
	{
		if (!ListOfGridSquares[TopLeftInt]->bIsFlagged)
		{
			ListOfGridSquares[TopLeftInt]->FlipCell();
		}
	}

	FVector2D TopCell = FVector2D(GridSquareCoordinates.X, GridSquareCoordinates.Y - 1);;
	int32 TopInt = TopCell.Y * GridSize + TopCell.X;
	CheckBounds(TopCell);

	if (TopInt >= 0 && !bOutOfBounds)
	{
		if (!ListOfGridSquares[TopInt]->bIsFlagged)
		{
			ListOfGridSquares[TopInt]->FlipCell();
		}
	}

	FVector2D TopRightCell = FVector2D(GridSquareCoordinates.X + 1, GridSquareCoordinates.Y - 1);;
	int32 TopRightInt = TopRightCell.Y * GridSize + TopRightCell.X;
	CheckBounds(TopRightCell);

	if (TopRightInt >= 0 && !bOutOfBounds)
	{
		if (!ListOfGridSquares[TopRightInt]->bIsFlagged)
		{
			ListOfGridSquares[TopRightInt]->FlipCell();
		}
	}

	//same level
	FVector2D LeftCell = FVector2D(GridSquareCoordinates.X - 1, GridSquareCoordinates.Y);;
	int32 LeftInt = LeftCell.Y * GridSize + LeftCell.X;
	CheckBounds(LeftCell);

	if (LeftInt >= 0 && !bOutOfBounds)
	{
		if (!ListOfGridSquares[LeftInt]->bIsFlagged)
		{
			ListOfGridSquares[LeftInt]->FlipCell();
		}
	}

	FVector2D RightCell = FVector2D(GridSquareCoordinates.X + 1, GridSquareCoordinates.Y);;
	int32 RightInt = RightCell.Y * GridSize + RightCell.X;
	CheckBounds(RightCell);

	if (RightInt <= 99 && !bOutOfBounds)
	{
		if (!ListOfGridSquares[RightInt]->bIsFlagged)
		{
			ListOfGridSquares[RightInt]->FlipCell();
		}
	}

	//below level
	FVector2D BottomLeftCell = FVector2D(GridSquareCoordinates.X - 1, GridSquareCoordinates.Y + 1);
	int32 BottomLeftInt = BottomLeftCell.Y * GridSize + BottomLeftCell.X;
	CheckBounds(BottomLeftCell);

	if (BottomLeftInt <= 99 && !bOutOfBounds)
	{
		if (!ListOfGridSquares[BottomLeftInt]->bIsFlagged)
		{
			ListOfGridSquares[BottomLeftInt]->FlipCell();
		}
	}

	FVector2D BottomCell = FVector2D(GridSquareCoordinates.X, GridSquareCoordinates.Y + 1);
	int32 BottomInt = BottomCell.Y * GridSize + BottomCell.X;
	CheckBounds(BottomCell);

	if (BottomInt <= 99 && !bOutOfBounds)
	{
		if (!ListOfGridSquares[BottomInt]->bIsFlagged)
		{
			ListOfGridSquares[BottomInt]->FlipCell();
		}
	}

	FVector2D BottomRightCell = FVector2D(GridSquareCoordinates.X + 1, GridSquareCoordinates.Y + 1);
	int32 BottomRightInt = BottomRightCell.Y * GridSize + BottomRightCell.X;
	CheckBounds(BottomRightCell);

	if (BottomRightInt <= 99 && !bOutOfBounds)
	{
		if (!ListOfGridSquares[BottomRightInt]->bIsFlagged)
		{
			ListOfGridSquares[BottomRightInt]->FlipCell();
		}
	}
}

void AMinesweeperGrid::GenerateRandomNumber()
{
	Random = FMath::RandRange(0, 99);
}


