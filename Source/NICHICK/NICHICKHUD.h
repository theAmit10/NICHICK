// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "NICHICKHUD.generated.h"

UCLASS()
class ANICHICKHUD : public AHUD
{
	GENERATED_BODY()

public:
	ANICHICKHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

