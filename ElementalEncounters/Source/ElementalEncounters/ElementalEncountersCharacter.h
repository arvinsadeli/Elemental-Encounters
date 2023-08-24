// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "ElementalEncountersCharacter.generated.h"


UCLASS(config=Game)
class AElementalEncountersCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

public:
	AElementalEncountersCharacter();


protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);


protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// To add mapping context
	virtual void BeginPlay();

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	UPROPERTY(BlueprintReadWrite, Category = "Status")
	int currentX;
	UPROPERTY(BlueprintReadWrite, Category = "Status")
	int currentY;




	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Status")
	float maxHealth;
	UPROPERTY(BlueprintReadWrite, Category = "Status")
	float currentHealth;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Status")
	float damage;

	UPROPERTY(BlueprintReadWrite, Category = "Current")
	int currentElement1Fire2Air3Earth4Water5Light6Dark;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Status")
	int currentAttackRange;
	UPROPERTY(BlueprintReadWrite, Category = "Current")
	int currentAmmoTurn;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Status")
	int fireAmmo;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Status")
	int airAmmo;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Status")
	int earthAmmo;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Status")
	int waterAmmo;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Status")
	int lightAmmo;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Status")
	int darkAmmo;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Status")
	int fireAttackRange;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Status")
	int airAttackRange;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Status")
	int earthAttackRange;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Status")
	int waterAttackRange;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Status")
	int lightAttackRange;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Status")
	int darkAttackRange;

	UPROPERTY(BlueprintReadWrite, VisibleInstanceOnly, Category = "Current")
	TArray<int> elementSlot;

	UPROPERTY(BlueprintReadWrite, VisibleInstanceOnly, Category = "Current")
	int currentElementSlot;
	 
	void SetStatus();
};

