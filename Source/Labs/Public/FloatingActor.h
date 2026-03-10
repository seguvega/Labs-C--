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


	UPROPERTY(EditAnywhere, Category = "Movement")
	float AmplitudeX;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float AmplitudeY;

	UPROPERTY( EditAnywhere, Category = "Movement")
	float MovAmplitude;

	UPROPERTY(EditAnywhere, Category = "Movement", meta = (ClampMin = "0.6", ClampMax = "1.4"))
	float XYFactor;

	virtual void Tick(float DeltaTime) override;


protected:
	float RunningTime;

	virtual void BeginPlay() override;

};
