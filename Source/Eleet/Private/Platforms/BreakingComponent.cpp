// Fill out your copyright notice in the Description page of Project Settings.


#include "Platforms/BreakingComponent.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"

// Sets default values for this component's properties
UBreakingComponent::UBreakingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UBreakingComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UBreakingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UBreakingComponent::Break()
{
	GetOwner()->K2_DestroyActor();
}

