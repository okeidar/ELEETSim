// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCollisionResponseComponent.h"


// Sets default values for this component's properties
UBaseCollisionResponseComponent::UBaseCollisionResponseComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;

}

void UBaseCollisionResponseComponent::RespondToHit_Implementation( AActor* HittingActor, FHitResult& Hit)
{
	UE_LOG(LogTemp,Warning,TEXT("I was called in the base class :("));
}




