// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCollisionResponseComponent.h"
#include "UObject/Object.h"
#include "DamageCollisionResponseComponent.generated.h"

/**
 * 
 */

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent),Blueprintable,BlueprintType)
class ELEET_API UDamageCollisionResponseComponent : public UBaseCollisionResponseComponent
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = Config, meta=(AllowPrivateAccess=true))
	TSubclassOf<UDamageType> DamageType;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = Config, meta=(AllowPrivateAccess=true))
	float DamageAmount=1.f;
	
	UDamageCollisionResponseComponent();
	
	virtual void RespondToHit_Implementation(AActor* HittingActor, UPARAM(ref) FHitResult& Hit) override;
	
};
