// Fill out your copyright notice in the Description page of Project Settings.


#include "GridSquare.h"
#include "Components/TextRenderComponent.h"

// Sets default values
AGridSquare::AGridSquare()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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
}

// Called every frame
void AGridSquare::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGridSquare::SetMineMaterial()
{
	IsMine = true;
	BackPlane->SetMaterial(0, Mine);
}

void AGridSquare::SetFlagMaterial()
{
	FrontPlane->SetMaterial(0, Flag);
}

void AGridSquare::FlipCell()
{
	if (bIsFlipped == false)
	{
		bIsFlipped = true;
		this->SetActorRotation(FRotator(180, 0, 0));
	}
}

void AGridSquare::AddToMineNeighbouringValue()
{
	if (IsMine == false)
	{
		NumNeighbouringMines++;

		//FString IntAsString = FString::FromInt(NumNeighbouringMines);

		BackPlane->SetMaterial(0, Numbers[NumNeighbouringMines - 1]);
		//Text->SetText(IntAsString);
	}
}

