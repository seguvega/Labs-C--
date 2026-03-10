// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingActor.h"

// Sets default values
AFloatingActor::AFloatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AmplitudeX = 20.f;
	AmplitudeY = 20.f;
	MovAmplitude = 21.f;
	XYFactor = 1.f;
}

// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.Z += DeltaHeight * MovAmplitude; //Scale our height by a factor of 20
	RunningTime += DeltaTime;

	float NewDeltafactor = DeltaTime * XYFactor;

	// Periodic motion on X and Y
	NewLocation.X += FMath::Sin(RunningTime) * AmplitudeX * NewDeltafactor;
	NewLocation.Y += FMath::Cos(RunningTime) * AmplitudeY * NewDeltafactor;

	SetActorLocation(NewLocation);
}

