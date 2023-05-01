// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MinesweeperGameMode.generated.h"

class AMinesweeperGrid;

/**
 * 
 */
UCLASS()
class MINESWEEPERCLONE_API AMinesweeperGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	AMinesweeperGameMode();

protected:
	virtual void BeginPlay() override;

private:
	AMinesweeperGrid* Grid;
	
};
