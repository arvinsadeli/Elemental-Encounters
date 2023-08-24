// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementalEncounters/Public/Element.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElement() {}
// Cross Module References
	ELEMENTALENCOUNTERS_API UClass* Z_Construct_UClass_AElement();
	ELEMENTALENCOUNTERS_API UClass* Z_Construct_UClass_AElement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ElementalEncounters();
// End Cross Module References
	void AElement::StaticRegisterNativesAElement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AElement);
	UClass* Z_Construct_UClass_AElement_NoRegister()
	{
		return AElement::StaticClass();
	}
	struct Z_Construct_UClass_AElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentElement1Fire2Air3Earth4Water5Light6Dark_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_currentElement1Fire2Air3Earth4Water5Light6Dark;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementalEncounters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Element.h" },
		{ "ModuleRelativePath", "Public/Element.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElement_Statics::NewProp_currentElement1Fire2Air3Earth4Water5Light6Dark_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Public/Element.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AElement_Statics::NewProp_currentElement1Fire2Air3Earth4Water5Light6Dark = { "currentElement1Fire2Air3Earth4Water5Light6Dark", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AElement, currentElement1Fire2Air3Earth4Water5Light6Dark), METADATA_PARAMS(Z_Construct_UClass_AElement_Statics::NewProp_currentElement1Fire2Air3Earth4Water5Light6Dark_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElement_Statics::NewProp_currentElement1Fire2Air3Earth4Water5Light6Dark_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElement_Statics::NewProp_currentElement1Fire2Air3Earth4Water5Light6Dark,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AElement_Statics::ClassParams = {
		&AElement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AElement_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElement()
	{
		if (!Z_Registration_Info_UClass_AElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AElement.OuterSingleton, Z_Construct_UClass_AElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AElement.OuterSingleton;
	}
	template<> ELEMENTALENCOUNTERS_API UClass* StaticClass<AElement>()
	{
		return AElement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElement);
	AElement::~AElement() {}
	struct Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_Public_Element_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_Public_Element_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AElement, AElement::StaticClass, TEXT("AElement"), &Z_Registration_Info_UClass_AElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AElement), 2472063744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_Public_Element_h_3026804445(TEXT("/Script/ElementalEncounters"),
		Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_Public_Element_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Elemental_Encounters_ElementalEncounters_Source_ElementalEncounters_Public_Element_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
