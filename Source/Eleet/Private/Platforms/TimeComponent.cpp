// Fill out your copyright notice in the Description page of Project Settings.


#include "Platforms/TimeComponent.h"

// Sets default values for this component's properties
UTimeComponent::UTimeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTimeComponent::BeginPlay()
{
	Super::BeginPlay();	

	CurrentTime = StartTime;
}


// Called every frame
void UTimeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!bActive)
		return;

	CurrentTime -= DeltaTime;

	if (CurrentTime <= 0)
	{
		OnTimeUp.Broadcast();
	}
}

void UTimeComponent::StartTimer()
{
	bActive = true;
}

void UTimeComponent::PauseTimer()
{
	bActive = false;
}

void UTimeComponent::ResetTimer()
{
	CurrentTime = StartTime;
}

