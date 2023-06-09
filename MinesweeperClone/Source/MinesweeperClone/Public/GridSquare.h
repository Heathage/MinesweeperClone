// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridSquare.generated.h"

UCLASS()
class MINESWEEPERCLONE_API AGridSquare : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGridSquare();

	int32 GridSquareNumber;

	UPROPERTY()
	class AMinesweeperGrid* OwningGrid;

	UPROPERTY()
	class UTextRenderComponent* Text;

	UPROPERTY(VisibleAnywhere)
	uint8 bIsMine:1;

	UPROPERTY(VisibleAnywhere)
	uint8 bIsEmpty:1;

	UPROPERTY(VisibleAnywhere)
	uint8 bIsFlagged:1;

	UPROPERTY(VisibleAnywhere)
	uint8 bIsFlipped:1;

	UPROPERTY(VisibleAnywhere)
	int32 NumNeighbouringMines;

	UPROPERTY(VisibleAnywhere)
	UMaterial* DefaultImage;

	UPROPERTY(VisibleAnywhere)
	UMaterial* Mine;

	UPROPERTY(VisibleAnywhere)
	UMaterial* Flag;

	UPROPERTY(VisibleAnywhere)
	TArray<UMaterial*> Numbers;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* FrontPlane;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* BackPlane;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetMineMaterial();

	void SetFlag();

	void FlipCell();

	void AddToMineNeighbouringValue();

};
