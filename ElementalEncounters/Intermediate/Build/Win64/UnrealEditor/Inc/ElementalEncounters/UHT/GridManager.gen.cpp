// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementalEncounters/Public/GridManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridManager() {}
// Cross Module References
	ELEMENTALENCOUNTERS_API UClass* Z_Construct_UClass_AGrid_NoRegister();
	ELEMENTALENCOUNTERS_API UClass* Z_Construct_UClass_AGridManager();
	ELEMENTALENCOUNTERS_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ElementalEncounters();
// End Cross Module References
	void AGridManager::StaticRegisterNativesAGridManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridManager);
	UClass* Z_Construct_UClass_AGridManager_NoRegister()
	{
		return AGridManager::StaticClass();
	}
	struct Z_Construct_UClass_AGridManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xTileSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_xTileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_yTileSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_yTileSize;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GridListTest_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridListTest_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GridListTest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerStartX_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_playerStartX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerStartY_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_playerStartY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_turn0Player1Enemy_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_turn0Player1Enemy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isAllEnemyHasMoved_MetaData[];
#endif
		static void NewProp_isAllEnemyHasMoved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isAllEnemyHasMoved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotate1Left2Right3Up4Down_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Rotate1Left2Right3Up4Down;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementalEncounters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GridManager.h" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::NewProp_xTileSize_MetaData[] = {
		{ "Category", "Editable" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_xTileSize = { "xTileSize", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGridManager, xTileSize), METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_xTileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_xTileSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::NewProp_yTileSize_MetaData[] = {
		{ "Category", "Editable" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_yTileSize = { "yTileSize", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGridManager, yTileSize), METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_yTileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_yTileSize_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridListTest_Inner = { "GridListTest", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::NewProp_GridListTest_MetaData[] = {
		{ "Category", "Grid Test Nih Woi" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridListTest = { "GridListTest", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGridManager, GridListTest), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_GridListTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_GridListTest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::NewProp_playerStartX_MetaData[] = {
		{ "Category", "PlayerStatus" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_playerStartX = { "playerStartX", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGridManager, playerStartX), METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_playerStartX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_playerStartX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::NewProp_playerStartY_MetaData[] = {
		{ "Category", "PlayerStatus" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_playerStartY = { "playerStartY", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGridManager, playerStartY), METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_playerStartY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_playerStartY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::NewProp_turn0Player1Enemy_MetaData[] = {
		{ "Category", "Editable" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_turn0Player1Enemy = { "turn0Player1Enemy", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGridManager, turn0Player1Enemy), METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_turn0Player1Enemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_turn0Player1Enemy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::NewProp_isAllEnemyHasMoved_MetaData[] = {
		{ "Category", "GridManager" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	void Z_Construct_UClass_AGridManager_Statics::NewProp_isAllEnemyHasMoved_SetBit(void* Obj)
	{
		((AGridManager*)Obj)->isAllEnemyHasMoved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_isAllEnemyHasMoved = { "isAllEnemyHasMoved", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGridManager), &Z_Construct_UClass_AGridManager_Statics::NewProp_isAllEnemyHasMoved_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_isAllEnemyHasMoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_isAllEnemyHasMoved_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridManager_Statics::NewProp_Rotate1Left2Right3Up4Down_MetaData[] = {
		{ "Category", "PlayerStatus" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_Rotate1Left2Right3Up4Down = { "Rotate1Left2Right3Up4Down", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGridManager, Rotate1Left2Right3Up4Down), METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::NewProp_Rotate1Left2Right3Up4Down_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::NewProp_Rotate1Left2Right3Up4Down_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_xTileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_yTileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridListTest_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridListTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_playerStartX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_playerStartY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_turn0Player1Enemy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_isAllEnemyHasMoved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_Rotate1Left2Right3Up4Down,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridManager_Statics::ClassParams = {
		&AGridManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGridManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGridManager()
	{
		if (!Z_Registration_Info_UClass_AGridManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridManager.OuterSingleton, Z_Construct_UClass_AGridManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGridManager.OuterSingleton;
	}
	template<> ELEMENTALENCOUNTERS_API UClass* StaticClass<AGridManager>()
	{
		return AGridManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridManager);
	AGridManager::~AGridManager() {}
	struct Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_Public_GridManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_Public_GridManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGridManager, AGridManager::StaticClass, TEXT("AGridManager"), &Z_Registration_Info_UClass_AGridManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridManager), 4093211218U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_Public_GridManager_h_4161866859(TEXT("/Script/ElementalEncounters"),
		Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_Public_GridManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_Public_GridManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
