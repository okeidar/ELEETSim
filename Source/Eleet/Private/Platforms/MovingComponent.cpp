// Fill out your copyright notice in the Description page of Project Settings.


#include "Platforms/MovingComponent.h"

// Sets default values for this component's properties
UMovingComponent::UMovingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMovingComponent::BeginPlay()
{
	Super::BeginPlay();

	StartMoving();
	bMoveBackToStart = false;
	StartPosition = GetOwner()->GetActorLocation();
	TargetPosition = StartPosition + TargetOffset;
}


// Called every frame
void UMovingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!bShouldMove)
		return;

	FVector CurrentLocation = GetOwner()->GetActorLocation();
	
	CurrentLocation = FMath::VInterpConstantTo(CurrentLocation, TargetPosition, DeltaTime, Speed);

	GetOwner()->SetActorLocation(CurrentLocation);

	if (CurrentLocation == TargetPosition)
	{
		if (bMoveBackToStart)
			TargetPosition = StartPosition + TargetOffset;
		else
			TargetPosition = StartPosition;

		bMoveBackToStart = !bMoveBackToStart;
	}
}

void UMovingComponent::StartMoving()
{
	bShouldMove = true;
}

void UMovingComponent::StopMoving()
{
	bShouldMove = false;
}

