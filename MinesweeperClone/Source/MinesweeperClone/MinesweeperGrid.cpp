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
		////above level
		//int32 TopLeftCell = SquareNumber - 11;
		//int32 TopCell = SquareNumber - 10;
		//int32 TopRightCell = SquareNumber - 9;

		////same level
		//int32 LeftCell = SquareNumber - 1;
		//int32 RightCell = SquareNumber + 1;

		////below level
		//int32 BottomLeftCell = SquareNumber + 9;
		//int32 BottomCell = SquareNumber + 10;
		//int32 BottomRightCell = SquareNumber + 11;

		//if (TopLeftCell >= 0)
		//{
		//	ListOfGridSquares[TopLeftCell]->AddToMineNeighbouringValue();
		//}

		//if (TopCell >= 0)
		//{
		//	ListOfGridSquares[TopCell]->AddToMineNeighbouringValue();
		//}

		//if (TopRightCell >= 0)
		//{
		//	ListOfGridSquares[TopRightCell]->AddToMineNeighbouringValue();
		//}

		//if (LeftCell >= 0)
		//{
		//	ListOfGridSquares[LeftCell]->AddToMineNeighbouringValue();
		//}

		//if (RightCell <= 99)
		//{
		//	ListOfGridSquares[RightCell]->AddToMineNeighbouringValue();
		//}

		//if (BottomLeftCell <= 99)
		//{
		//	ListOfGridSquares[BottomLeftCell]->AddToMineNeighbouringValue();
		//}

		//if (BottomCell <= 99)
		//{
		//	ListOfGridSquares[BottomCell]->AddToMineNeighbouringValue();
		//}

		//if (BottomRightCell <= 99)
		//{
		//	ListOfGridSquares[BottomRightCell]->AddToMineNeighbouringValue();
		//}
	}
}

void AMinesweeperGrid::GenerateRandomNumber()
{
	Random = FMath::RandRange(0, 99);
}


