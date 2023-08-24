// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementalEncounters/ElementalEncountersCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElementalEncountersCharacter() {}
// Cross Module References
	ELEMENTALENCOUNTERS_API UClass* Z_Construct_UClass_AElementalEncountersCharacter();
	ELEMENTALENCOUNTERS_API UClass* Z_Construct_UClass_AElementalEncountersCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ElementalEncounters();
// End Cross Module References
	void AElementalEncountersCharacter::StaticRegisterNativesAElementalEncountersCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AElementalEncountersCharacter);
	UClass* Z_Construct_UClass_AElementalEncountersCharacter_NoRegister()
	{
		return AElementalEncountersCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AElementalEncountersCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentX_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_currentX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentY_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_currentY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentElement1Fire2Air3Earth4Water5Light6Dark_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_currentElement1Fire2Air3Earth4Water5Light6Dark;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentAttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_currentAttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentAmmoTurn_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_currentAmmoTurn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fireAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_fireAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_airAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_airAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_earthAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_earthAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_waterAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_waterAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lightAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_lightAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_darkAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_darkAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fireAttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_fireAttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_airAttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_airAttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_earthAttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_earthAttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_waterAttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_waterAttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lightAttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_lightAttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_darkAttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_darkAttackRange;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_elementSlot_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_elementSlot_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_elementSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentElementSlot_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_currentElementSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElementalEncountersCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementalEncounters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ElementalEncountersCharacter.h" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentX_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentX = { "currentX", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, currentX), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentY_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentY = { "currentY", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, currentY), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_maxHealth_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, maxHealth), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_maxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_maxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentHealth_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentHealth = { "currentHealth", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, currentHealth), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, damage), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentElement1Fire2Air3Earth4Water5Light6Dark_MetaData[] = {
		{ "Category", "Current" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentElement1Fire2Air3Earth4Water5Light6Dark = { "currentElement1Fire2Air3Earth4Water5Light6Dark", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, currentElement1Fire2Air3Earth4Water5Light6Dark), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentElement1Fire2Air3Earth4Water5Light6Dark_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentElement1Fire2Air3Earth4Water5Light6Dark_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentAttackRange_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentAttackRange = { "currentAttackRange", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, currentAttackRange), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentAttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentAttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentAmmoTurn_MetaData[] = {
		{ "Category", "Current" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentAmmoTurn = { "currentAmmoTurn", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, currentAmmoTurn), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentAmmoTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentAmmoTurn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_fireAmmo_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_fireAmmo = { "fireAmmo", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, fireAmmo), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_fireAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_fireAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_airAmmo_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_airAmmo = { "airAmmo", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, airAmmo), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_airAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_airAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_earthAmmo_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_earthAmmo = { "earthAmmo", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, earthAmmo), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_earthAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_earthAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_waterAmmo_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_waterAmmo = { "waterAmmo", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, waterAmmo), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_waterAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_waterAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_lightAmmo_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_lightAmmo = { "lightAmmo", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, lightAmmo), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_lightAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_lightAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_darkAmmo_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_darkAmmo = { "darkAmmo", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, darkAmmo), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_darkAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_darkAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_fireAttackRange_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_fireAttackRange = { "fireAttackRange", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, fireAttackRange), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_fireAttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_fireAttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_airAttackRange_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_airAttackRange = { "airAttackRange", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, airAttackRange), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_airAttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_airAttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_earthAttackRange_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_earthAttackRange = { "earthAttackRange", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, earthAttackRange), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_earthAttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_earthAttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_waterAttackRange_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_waterAttackRange = { "waterAttackRange", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, waterAttackRange), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_waterAttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_waterAttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_lightAttackRange_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_lightAttackRange = { "lightAttackRange", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, lightAttackRange), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_lightAttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_lightAttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_darkAttackRange_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_darkAttackRange = { "darkAttackRange", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, darkAttackRange), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_darkAttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_darkAttackRange_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_elementSlot_Inner = { "elementSlot", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_elementSlot_MetaData[] = {
		{ "Category", "Current" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_elementSlot = { "elementSlot", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, elementSlot), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_elementSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_elementSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentElementSlot_MetaData[] = {
		{ "Category", "Current" },
		{ "ModuleRelativePath", "ElementalEncountersCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentElementSlot = { "currentElementSlot", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElementalEncountersCharacter, currentElementSlot), METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentElementSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentElementSlot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AElementalEncountersCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_maxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentElement1Fire2Air3Earth4Water5Light6Dark,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentAttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentAmmoTurn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_fireAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_airAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_earthAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_waterAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_lightAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_darkAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_fireAttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_airAttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_earthAttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_waterAttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_lightAttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_darkAttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_elementSlot_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_elementSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalEncountersCharacter_Statics::NewProp_currentElementSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElementalEncountersCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElementalEncountersCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AElementalEncountersCharacter_Statics::ClassParams = {
		&AElementalEncountersCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AElementalEncountersCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElementalEncountersCharacter()
	{
		if (!Z_Registration_Info_UClass_AElementalEncountersCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AElementalEncountersCharacter.OuterSingleton, Z_Construct_UClass_AElementalEncountersCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AElementalEncountersCharacter.OuterSingleton;
	}
	template<> ELEMENTALENCOUNTERS_API UClass* StaticClass<AElementalEncountersCharacter>()
	{
		return AElementalEncountersCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElementalEncountersCharacter);
	AElementalEncountersCharacter::~AElementalEncountersCharacter() {}
	struct Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_ElementalEncountersCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_ElementalEncountersCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AElementalEncountersCharacter, AElementalEncountersCharacter::StaticClass, TEXT("AElementalEncountersCharacter"), &Z_Registration_Info_UClass_AElementalEncountersCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AElementalEncountersCharacter), 2847467066U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_ElementalEncountersCharacter_h_113857135(TEXT("/Script/ElementalEncounters"),
		Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_ElementalEncountersCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_ElementalEncountersCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
