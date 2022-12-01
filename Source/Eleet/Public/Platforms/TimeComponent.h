// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TimeComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTimeUp);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ELEET_API UTimeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTimeComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	float CurrentTime;
	bool bActive;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float StartTime;

	UFUNCTION(BlueprintCallable)
		void StartTimer();
	UFUNCTION(BlueprintCallable)
		void PauseTimer();
	UFUNCTION(BlueprintCallable)
		void ResetTimer();

	UPROPERTY(BlueprintAssignable)
		FOnTimeUp OnTimeUp;
};
