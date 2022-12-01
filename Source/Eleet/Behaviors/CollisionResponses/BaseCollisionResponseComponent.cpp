// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCollisionResponseComponent.h"


// Sets default values for this component's properties
UBaseCollisionResponseComponent::UBaseCollisionResponseComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;

}

void UBaseCollisionResponseComponent::RespondToOverlap()
{
}

void UBaseCollisionResponseComponent::RespondToHit()
{
}


