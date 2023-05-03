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

	static ConstructorHelpers::FObjectFinder<UBlueprint>ItemBlueprint(TEXT("Blueprint'/Game/MyBlueprints/BP_MyGridSquare'"));
	if (ItemBlueprint.Object)
	{
		GridSquare = (UClass*)ItemBlueprint.Object->GeneratedClass;
	}
}

// Called when the game starts or when spawned
void AMinesweeperGrid::BeginPlay()
{
	Super::BeginPlay();

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

	for (int32 i = 0; i < 10; i++)
	{
		GenerateRandomNumber();

		while (ListOfGridSquares[Random]->IsMine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Repeated"));
			GenerateRandomNumber();
		}

		if (ListOfGridSquares[Random]->IsMine == false)
		{
			ListOfGridSquares[Random]->IsMine = true;
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("Set Mine"));
		}
	}

	for (AGridSquare* Cell : ListOfGridSquares)
	{

	}

	
	
}

// Called every frame
void AMinesweeperGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMinesweeperGrid::GenerateRandomNumber()
{
	Random = FMath::RandRange(0, 99);
}

