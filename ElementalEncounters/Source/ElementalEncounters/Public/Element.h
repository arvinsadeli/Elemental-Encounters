// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Element.generated.h"

UCLASS()
class ELEMENTALENCOUNTERS_API AElement : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AElement();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Status")
	int currentElement1Fire2Air3Earth4Water5Light6Dark;

};
