// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseCollisionResponseComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent),Blueprintable,BlueprintType)
class ELEET_API UBaseCollisionResponseComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UBaseCollisionResponseComponent();

	UFUNCTION(BlueprintCallable)
	void RespondToOverlap();
	
	UFUNCTION(BlueprintCallable)
	void RespondToHit();
};
