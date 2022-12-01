// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Operable.h"
#include "Trigger.h"
#include "GameFramework/Actor.h"
#include "BaseTrigger.generated.h"


UCLASS()
class ELEET_API ABaseTrigger : public AActor, public ITrigger
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABaseTrigger();


	UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
	TArray<AActor*> AffectedActors;
	
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent, Category="Interactions")
	void FlipState();	
	virtual void FlipState_Implementation() override;
	
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent, Category="Interactions")
	void TurnOn();
	virtual void TurnOn_Implementation() override;	
	
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent, Category="Interactions")
	void TurnOff();
	virtual void TurnOff_Implementation() override;

protected:
	virtual void BeginPlay() override;
	
private:
	
	UPROPERTY()
	TArray<TScriptInterface<IOperable>> AffectedInterfaces;
};
