// Fill out your copyright notice in the Description page of Project Settings.


#include "PushCollisionResponseComponent.h"

#include "Components/PrimitiveComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"


// Sets default values for this component's properties
UPushCollisionResponseComponent::UPushCollisionResponseComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;

	// ...
}

void UPushCollisionResponseComponent::RespondToHit_Implementation(AActor* HittingActor, FHitResult& Hit)
{
	if (!HittingActor) return;

	ACharacter* asCharacter=Cast<ACharacter>(HittingActor);

	if(asCharacter)
	{
		FVector impactNormal = Hit.ImpactNormal;
		asCharacter->LaunchCharacter(impactNormal * PushStrength,true,false);
	}
	
	UPrimitiveComponent* primitive = Cast<UPrimitiveComponent>(HittingActor->GetComponentByClass(UPrimitiveComponent::StaticClass()));		
	if (!primitive || !primitive->IsSimulatingPhysics()) return;


		FVector impactNormal = Hit.ImpactNormal;
		primitive->AddImpulse(impactNormal * PushStrength, NAME_None, true);
	
	
}
