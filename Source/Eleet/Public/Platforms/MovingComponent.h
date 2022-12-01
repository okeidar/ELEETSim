// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovingComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ELEET_API UMovingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMovingComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	bool bShouldMove;
	FVector TargetPosition;
	FVector StartPosition;
	bool bMoveBackToStart;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float Speed;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FVector TargetOffset;

	UFUNCTION(BlueprintCallable)
		void StartMoving();
	UFUNCTION(BlueprintCallable)
		void StopMoving();
};
