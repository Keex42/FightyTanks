// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_FightyTanks/UE_FightyTanksGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_FightyTanksGameModeBase() {}
// Cross Module References
	UE_FIGHTYTANKS_API UClass* Z_Construct_UClass_AUE_FightyTanksGameModeBase_NoRegister();
	UE_FIGHTYTANKS_API UClass* Z_Construct_UClass_AUE_FightyTanksGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE_FightyTanks();
// End Cross Module References
	void AUE_FightyTanksGameModeBase::StaticRegisterNativesAUE_FightyTanksGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUE_FightyTanksGameModeBase_NoRegister()
	{
		return AUE_FightyTanksGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE_FightyTanksGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE_FightyTanksGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_FightyTanks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE_FightyTanksGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UE_FightyTanksGameModeBase.h" },
		{ "ModuleRelativePath", "UE_FightyTanksGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE_FightyTanksGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE_FightyTanksGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE_FightyTanksGameModeBase_Statics::ClassParams = {
		&AUE_FightyTanksGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AUE_FightyTanksGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUE_FightyTanksGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE_FightyTanksGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE_FightyTanksGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE_FightyTanksGameModeBase, 1619655303);
	template<> UE_FIGHTYTANKS_API UClass* StaticClass<AUE_FightyTanksGameModeBase>()
	{
		return AUE_FightyTanksGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE_FightyTanksGameModeBase(Z_Construct_UClass_AUE_FightyTanksGameModeBase, &AUE_FightyTanksGameModeBase::StaticClass, TEXT("/Script/UE_FightyTanks"), TEXT("AUE_FightyTanksGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE_FightyTanksGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
