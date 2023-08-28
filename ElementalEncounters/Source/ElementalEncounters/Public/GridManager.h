// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Grid.h"
#include "GridManager.generated.h"

UCLASS()
class ELEMENTALENCOUNTERS_API AGridManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGridManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Editable")
	int xTileSize;
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Editable")
	int yTileSize;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Grid Test Nih Woi")
	TArray<AGrid*> GridListTest;


	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "PlayerStatus")
	int playerStartX;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "PlayerStatus")
	int playerStartY;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Editable")
	int turn0Player1Enemy;

	UPROPERTY(BlueprintReadWrite)
	bool isAllEnemyHasMoved;

	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "PlayerStatus")
	int Rotate1Left2Right3Up4Down;

};
