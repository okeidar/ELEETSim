// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCollisionResponseComponent.h"
#include "Components/ActorComponent.h"
#include "PushCollisionResponseComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class ELEET_API UPushCollisionResponseComponent : public UBaseCollisionResponseComponent
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	float PushStrength=20.f;
	
	
	UPushCollisionResponseComponent();
	virtual void RespondToHit_Implementation(AActor* HittingActor, UPARAM(ref) FHitResult& Hit) override;
};
