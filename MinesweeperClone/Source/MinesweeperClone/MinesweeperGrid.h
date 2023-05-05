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

	int32 GridSize;
	int32 CellSpacing;

private:
	int32 NumGridCells;
	int32 Random;

	int32 NumberOfMines;
	UPROPERTY(VisibleAnywhere)
	int32 WinScore;
	UPROPERTY(VisibleAnywhere)
	int32 CurrentScore;

	TArray<AGridSquare*> ListOfGridSquares;
	TArray<FVector2D> GridPositions;
	TArray<FVector2D> MineGridPositions;

	uint8 bOutOfBounds:1;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void FlipAllMines();

	void FlipEmptyCells(int32 GridSquareNumber);

	void WinCondition(int32 Value);

private:
	void CreateGrid();
	void SetMines();
	void GenerateRandomNumber();
	void CalculateNeighbouringTilesValue();
	void CheckIndividualTiles(FVector2D CellVector2D, int32 CellInt);


	void CheckBounds(FVector2D GridPosition);
	void CheckCells(FVector2D GridSquareCoordinates);
};
