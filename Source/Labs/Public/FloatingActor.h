// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"

UCLASS()
class LABS_API AFloatingActor : public AActor
{
	GENERATED_BODY()

public:	

	AFloatingActor();

	UPROPERTY( EditAnywhere, Category = "Movement")
	float MovAmplitude;

	UPROPERTY(EditAnywhere, Category = "Movement", meta = (ClampMin = "0.6", ClampMax = "1.5"))
	float XYFactor;

	virtual void Tick(float DeltaTime) override;


protected:
	float RunningTime;

	float AmplitudeX;

	float AmplitudeY;

	virtual void BeginPlay() override;

};
