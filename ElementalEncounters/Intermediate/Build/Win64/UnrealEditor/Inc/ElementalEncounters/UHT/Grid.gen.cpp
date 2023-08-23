// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementalEncounters/Public/Grid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrid() {}
// Cross Module References
	ELEMENTALENCOUNTERS_API UClass* Z_Construct_UClass_AGrid();
	ELEMENTALENCOUNTERS_API UClass* Z_Construct_UClass_AGrid_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ElementalEncounters();
// End Cross Module References
	void AGrid::StaticRegisterNativesAGrid()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrid);
	UClass* Z_Construct_UClass_AGrid_NoRegister()
	{
		return AGrid::StaticClass();
	}
	struct Z_Construct_UClass_AGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xGridPosition_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_xGridPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_yGridPosition_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_yGridPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentChar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentChar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementalEncounters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Grid.h" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::NewProp_xGridPosition_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_xGridPosition = { "xGridPosition", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGrid, xGridPosition), METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::NewProp_xGridPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::NewProp_xGridPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::NewProp_yGridPosition_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_yGridPosition = { "yGridPosition", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGrid, yGridPosition), METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::NewProp_yGridPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::NewProp_yGridPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::NewProp_currentChar_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_currentChar = { "currentChar", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGrid, currentChar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::NewProp_currentChar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::NewProp_currentChar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_xGridPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_yGridPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_currentChar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrid_Statics::ClassParams = {
		&AGrid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrid()
	{
		if (!Z_Registration_Info_UClass_AGrid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrid.OuterSingleton, Z_Construct_UClass_AGrid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGrid.OuterSingleton;
	}
	template<> ELEMENTALENCOUNTERS_API UClass* StaticClass<AGrid>()
	{
		return AGrid::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrid);
	AGrid::~AGrid() {}
	struct Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_Public_Grid_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_Public_Grid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGrid, AGrid::StaticClass, TEXT("AGrid"), &Z_Registration_Info_UClass_AGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrid), 3639560928U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_Public_Grid_h_1912906962(TEXT("/Script/ElementalEncounters"),
		Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_Public_Grid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_Public_Grid_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
