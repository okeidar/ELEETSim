// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Operable.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable,BlueprintType)
class UOperable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ELEET_API IOperable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category="Interactions")
	void StartOperate();
	
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category="Interactions")
	void StopOperate();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category="Interactions")
	UPARAM(DisplayName="IsOperating") bool IsOperating();
};
