// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Pawn/Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ATankPlayerController();
	virtual ~ATankPlayerController();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	ATank* GetControlledTank() const;

	// Start the tank moving the barrel so that a shot would hit the target intersecting with the cross hair
	void AimTowardsCrossHair();




};