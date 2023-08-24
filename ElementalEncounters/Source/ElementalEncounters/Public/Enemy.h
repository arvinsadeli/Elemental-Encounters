// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

UCLASS()
class ELEMENTALENCOUNTERS_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UPROPERTY(BlueprintReadWrite,EditInstanceOnly, Category = "Status")
	int startX;
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Status")
	int startY;

	UPROPERTY(BlueprintReadWrite, Category = "Status")
	int currentX;
	UPROPERTY(BlueprintReadWrite, Category = "Status")
	int currentY;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Status")
	float MaxHealth;
	UPROPERTY(BlueprintReadWrite, Category = "Status")
	float currentHealth;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Status")
	float damage;

	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Status")
	int elementFire1Air2Earth3Water4Light5Dark6;


	void SetStatus();

};
