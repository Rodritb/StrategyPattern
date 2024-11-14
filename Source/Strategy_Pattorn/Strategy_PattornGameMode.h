// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Strategy_PattornGameMode.generated.h"

UCLASS(minimalapi)
class AStrategy_PattornGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AStrategy_PattornGameMode();

protected:
	virtual void BeginPlay() override;
public:

	virtual void Tick(float DeltaTime) override;
};



