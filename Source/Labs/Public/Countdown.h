// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Countdown.generated.h"

class UTextRenderComponent;


UCLASS()
class LABS_API ACountdown : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ACountdown();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

public:

	UPROPERTY(EditAnywhere, Category = "Countdown")
	int32 CountdownTime;

	UTextRenderComponent* CountdownText;

	FTimerHandle CountdownTimerHandle;

	void UpdateTimerDisplay();

	void AdvanceTimer();

	UFUNCTION(BlueprintNativeEvent)
	void CountdownHasFinished();

	virtual void CountdownHasFinished_Implementation();
};
