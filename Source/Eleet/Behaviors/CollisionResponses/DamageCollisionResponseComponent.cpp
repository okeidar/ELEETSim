// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageCollisionResponseComponent.h"

#include "Kismet/GameplayStatics.h"

UDamageCollisionResponseComponent::UDamageCollisionResponseComponent()
{
}

void UDamageCollisionResponseComponent::RespondToHit_Implementation(AActor* HittingActor,FHitResult& Hit)
{
	if(!HittingActor) return;
	
	UGameplayStatics::ApplyDamage(HittingActor,DamageAmount,nullptr,GetOwner(),DamageType);
}
