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


	virtual void Tick(float DeltaTime) override;


protected:
	float RunningTime;

	virtual void BeginPlay() override;

};
