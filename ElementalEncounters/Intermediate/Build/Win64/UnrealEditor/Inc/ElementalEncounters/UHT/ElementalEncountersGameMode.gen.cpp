// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementalEncounters/ElementalEncountersGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElementalEncountersGameMode() {}
// Cross Module References
	ELEMENTALENCOUNTERS_API UClass* Z_Construct_UClass_AElementalEncountersGameMode();
	ELEMENTALENCOUNTERS_API UClass* Z_Construct_UClass_AElementalEncountersGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ElementalEncounters();
// End Cross Module References
	void AElementalEncountersGameMode::StaticRegisterNativesAElementalEncountersGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AElementalEncountersGameMode);
	UClass* Z_Construct_UClass_AElementalEncountersGameMode_NoRegister()
	{
		return AElementalEncountersGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AElementalEncountersGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElementalEncountersGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementalEncounters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalEncountersGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ElementalEncountersGameMode.h" },
		{ "ModuleRelativePath", "ElementalEncountersGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElementalEncountersGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElementalEncountersGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AElementalEncountersGameMode_Statics::ClassParams = {
		&AElementalEncountersGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AElementalEncountersGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalEncountersGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElementalEncountersGameMode()
	{
		if (!Z_Registration_Info_UClass_AElementalEncountersGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AElementalEncountersGameMode.OuterSingleton, Z_Construct_UClass_AElementalEncountersGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AElementalEncountersGameMode.OuterSingleton;
	}
	template<> ELEMENTALENCOUNTERS_API UClass* StaticClass<AElementalEncountersGameMode>()
	{
		return AElementalEncountersGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElementalEncountersGameMode);
	AElementalEncountersGameMode::~AElementalEncountersGameMode() {}
	struct Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_ElementalEncountersGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_ElementalEncountersGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AElementalEncountersGameMode, AElementalEncountersGameMode::StaticClass, TEXT("AElementalEncountersGameMode"), &Z_Registration_Info_UClass_AElementalEncountersGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AElementalEncountersGameMode), 1377924641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_ElementalEncountersGameMode_h_3895018716(TEXT("/Script/ElementalEncounters"),
		Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_ElementalEncountersGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_ElementalEncountersGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
