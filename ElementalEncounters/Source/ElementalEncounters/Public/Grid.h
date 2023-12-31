// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Grid.generated.h"

UCLASS()
class ELEMENTALENCOUNTERS_API AGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



public:
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly)
	int xGridPosition;

	UPROPERTY(EditInstanceOnly,BlueprintReadOnly)
	int yGridPosition;

	UPROPERTY(BlueprintReadWrite, VisibleInstanceOnly)
	ACharacter* currentChar;
};
