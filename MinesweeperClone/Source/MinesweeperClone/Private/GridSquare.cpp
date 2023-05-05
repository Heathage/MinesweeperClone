// Fill out your copyright notice in the Description page of Project Settings.


#include "GridSquare.h"
#include "Components/TextRenderComponent.h"
#include "../Public/MyPawn.h"
#include "Kismet/GameplayStatics.h"
#include "../MinesweeperGrid.h"

// Sets default values
AGridSquare::AGridSquare()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Set materials
	ConstructorHelpers::FObjectFinder<UMaterial>DefaultMaterial(TEXT("/Game/Textures/GridSquare_Mat"));
	DefaultImage = DefaultMaterial.Object;

	ConstructorHelpers::FObjectFinder<UMaterial>FlagMaterial(TEXT("/Game/Textures/T_Flag_Mat"));
	Flag = FlagMaterial.Object;

	ConstructorHelpers::FObjectFinder<UMaterial>MineMaterial(TEXT("/Game/Textures/T_Mine_Mat"));
	Mine = MineMaterial.Object;

	//Add number materials to array
	ConstructorHelpers::FObjectFinder<UMaterial>OneMaterial(TEXT("/Game/Textures/1_Mat"));
	Numbers.Add(OneMaterial.Object);
	ConstructorHelpers::FObjectFinder<UMaterial>TwoMaterial(TEXT("/Game/Textures/2_Mat"));
	Numbers.Add(TwoMaterial.Object);
	ConstructorHelpers::FObjectFinder<UMaterial>ThreeMaterial(TEXT("/Game/Textures/3_Mat"));
	Numbers.Add(ThreeMaterial.Object);
	ConstructorHelpers::FObjectFinder<UMaterial>FourMaterial(TEXT("/Game/Textures/4_Mat"));
	Numbers.Add(FourMaterial.Object);
	ConstructorHelpers::FObjectFinder<UMaterial>FiveMaterial(TEXT("/Game/Textures/5_Mat"));
	Numbers.Add(FiveMaterial.Object);
	ConstructorHelpers::FObjectFinder<UMaterial>SixMaterial(TEXT("/Game/Textures/6_Mat"));
	Numbers.Add(SixMaterial.Object);
	ConstructorHelpers::FObjectFinder<UMaterial>SevenMaterial(TEXT("/Game/Textures/7_Mat"));
	Numbers.Add(SevenMaterial.Object);
	ConstructorHelpers::FObjectFinder<UMaterial>EightMaterial(TEXT("/Game/Textures/8_Mat"));
	Numbers.Add(EightMaterial.Object);

	
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->SetRootComponent(Root);


	FrontPlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Front Plane"));
	FrontPlane->SetupAttachment(this->Root);

	BackPlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Back Plane"));
	BackPlane->SetupAttachment(this->Root);

	Text = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Number"));
	Text->SetupAttachment(this->BackPlane);
	Text->SetTextRenderColor(FColor::Red);

}

// Called when the game starts or when spawned
void AGridSquare::BeginPlay()
{
	Super::BeginPlay();
	bIsFlipped = false;

	Text->SetText("");
	bIsFlagged = false;
	bIsEmpty = true;
}

// Called every frame
void AGridSquare::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//To show where the mines are.
void AGridSquare::SetMineMaterial()
{
	bIsMine = true;
	bIsEmpty = false;
	BackPlane->SetMaterial(0, Mine);
}

//To show where the player set the flag, and to check win condition.
void AGridSquare::SetFlag()
{
	switch (bIsFlagged)
	{
		case true:
		{
			bIsFlagged = false;
			bIsEmpty = true;
			FrontPlane->SetMaterial(0, DefaultImage);

			if (bIsMine)
			{
				OwningGrid->WinCondition(-1);
			}
			break;
		}
		case false:
		{	
			bIsFlagged = true;
			bIsEmpty = false;
			FrontPlane->SetMaterial(0, Flag);

			if (bIsMine)
			{
				OwningGrid->WinCondition(1);
			}
			break;
		}
	}
}

//Handles all cases that could cause a grid square to flip.
void AGridSquare::FlipCell()
{
	if (bIsFlipped == false)
	{
		if (!bIsFlagged)
		{
			bIsFlipped = true;
			this->SetActorRotation(FRotator(180, 0, 0));
		}

		if (bIsMine && !bIsFlagged)
		{
			bIsFlipped = true;
			this->SetActorRotation(FRotator(180, 0, 0));
			OwningGrid->FlipAllMines();
		}

		if (bIsEmpty)
		{
			OwningGrid->FlipEmptyCells(GridSquareNumber);
		}
	}
}

//To handle how many mines this grid square is adjacent to.
void AGridSquare::AddToMineNeighbouringValue()
{
	if (bIsMine == false)
	{
		NumNeighbouringMines++;

		bIsEmpty = false;

		BackPlane->SetMaterial(0, Numbers[NumNeighbouringMines - 1]);
	}
}

