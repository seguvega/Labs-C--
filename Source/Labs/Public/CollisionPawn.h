// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CollisionPawn.generated.h"

class UParticleSystemComponent;
class UCollidingPawnMovementComponent;

UCLASS()
class LABS_API ACollisionPawn : public APawn
{
	GENERATED_BODY()

public:
	ACollisionPawn();

	UPROPERTY()
	TObjectPtr<UParticleSystemComponent> OurParticleSystemComponent;

	UPROPERTY()
	TObjectPtr<UCollidingPawnMovementComponent> OurMovementComponent;

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	virtual void BeginPlay() override;

	void MoveForward(float AxisValue);

	void MoveRight(float AxisValue);

	void Turn(float AxisValue);

	void ParticleToggle();

	bool isActiveParticles;

};
