// Fill out your copyright notice in the Description page of Project Settings.


#include "GridSquare.h"

// Sets default values
AGridSquare::AGridSquare()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UMaterial>FlagMaterial(TEXT("/Game/Textures/T_Flag_Mat"));
	Flag = FlagMaterial.Object;

	ConstructorHelpers::FObjectFinder<UMaterial>MineMaterial(TEXT("/Game/Textures/T_Mine_Mat"));
	Mine = MineMaterial.Object;
	
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->SetRootComponent(Root);

	FrontPlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Front Plane"));
	FrontPlane->SetupAttachment(this->Root);

	BackPlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Back Plane"));
	BackPlane->SetupAttachment(this->Root);

}

// Called when the game starts or when spawned
void AGridSquare::BeginPlay()
{
	Super::BeginPlay();
	bIsFlipped = false;
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
	BackPlane->SetMaterial(0, Flag);
}

void AGridSquare::FlipCell()
{
	if (bIsFlipped == false)
	{
		bIsFlipped = true;
		this->SetActorRotation(FRotator(180, 0, 0));
	}
}

