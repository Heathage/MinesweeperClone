// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MinesweeperGrid.generated.h"

class AGridSquare;

UCLASS()
class MINESWEEPERCLONE_API AMinesweeperGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMinesweeperGrid();

	UPROPERTY(EditAnywhere, Category = "GridCell")
	TSubclassOf<AGridSquare> GridSquare;

	UPROPERTY(Category = Grid, EditAnywhere, BlueprintReadOnly)
	int32 GridSize;
	int32 CellSpacing;

private:
	int32 NumGridCells;
	int32 Random;

	TArray<AGridSquare*> ListOfGridSquares;
	TArray<FVector2D> GridPositions;
	TArray<FVector2D> MineGridPositions;

	bool OutOfBounds;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void CreateGrid();
	void SetMines();
	void GenerateRandomNumber();
	void CalculateNeighbouringTilesValue();
	void CheckBounds(FVector2D GridPosition);
};
