// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include "Camera/CameraComponent.h"
#include "MyPlayerController.h"
#include "GridSquare.h"
#include "DrawDebugHelpers.h"


// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraMain"));
	Camera->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();

	this->SetActorLocation(FVector(450, 450, 1200));
	this->SetActorRotation(FRotator(270, 270, 0));
	
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyPawn::LeftClick()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("LeftClick"));
	FHitResult HitResult;

	if (AMyPlayerController* PC = Cast<AMyPlayerController>(GetController()))
	{
		PC->GetHitResultUnderCursorByChannel(UEngineTypes::ConvertToTraceType(ECC_Camera), true, HitResult);
	}

	if (HitResult.Actor.IsValid())
	{
		AGridSquare* HitBlock = Cast<AGridSquare>(HitResult.Actor.Get());
		HitBlock->FlipCell();
	}
}

void AMyPawn::RightClick()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("RightClick"));
	FHitResult HitResult;

	if (AMyPlayerController* PC = Cast<AMyPlayerController>(GetController()))
	{
		PC->GetHitResultUnderCursorByChannel(UEngineTypes::ConvertToTraceType(ECC_Camera), true, HitResult);
	}

	if (HitResult.Actor.IsValid())
	{
		AGridSquare* HitBlock = Cast<AGridSquare>(HitResult.Actor.Get());
		HitBlock->SetFlagMaterial();
	}
}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("LMB", EInputEvent::IE_Pressed, this, &AMyPawn::LeftClick);
	PlayerInputComponent->BindAction("RMB", EInputEvent::IE_Pressed, this, &AMyPawn::RightClick);

}

