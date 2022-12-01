// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseTrigger.h"


// Sets default values
ABaseTrigger::ABaseTrigger()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled=false;
}

void ABaseTrigger::FlipState_Implementation()
{
	for(auto& operable : AffectedInterfaces)
	{
		bool bIsOperating=IOperable::Execute_IsOperating(operable.GetObject());
		if(bIsOperating)
		{
			
			IOperable::Execute_StopOperate(operable.GetObject());
		}
		else
		{			
			IOperable::Execute_StartOperate(operable.GetObject());
		}
	}
}

void ABaseTrigger::TurnOn_Implementation()
{
	for(auto& operable : AffectedInterfaces)
	{
		IOperable::Execute_StartOperate(operable.GetObject());
	}
}

void ABaseTrigger::TurnOff_Implementation()
{
	for(auto& operable : AffectedInterfaces)
	{
		IOperable::Execute_StopOperate(operable.GetObject());
	}
}

void ABaseTrigger::BeginPlay()
{
	Super::BeginPlay();

	if(!AffectedActors.IsEmpty())
	{
		for (auto& actor : AffectedActors)
		{			
			if(actor->Implements<UOperable>())
			{
				AffectedInterfaces.Emplace(actor);
			}
			
		}
	}
}
