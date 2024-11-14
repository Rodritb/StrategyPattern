// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Strategy_Pattorn/Strategy_PattornGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategy_PattornGameMode() {}
// Cross Module References
	STRATEGY_PATTORN_API UClass* Z_Construct_UClass_AStrategy_PattornGameMode_NoRegister();
	STRATEGY_PATTORN_API UClass* Z_Construct_UClass_AStrategy_PattornGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Strategy_Pattorn();
// End Cross Module References
	void AStrategy_PattornGameMode::StaticRegisterNativesAStrategy_PattornGameMode()
	{
	}
	UClass* Z_Construct_UClass_AStrategy_PattornGameMode_NoRegister()
	{
		return AStrategy_PattornGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AStrategy_PattornGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStrategy_PattornGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Strategy_Pattorn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategy_PattornGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Strategy_PattornGameMode.h" },
		{ "ModuleRelativePath", "Strategy_PattornGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStrategy_PattornGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrategy_PattornGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStrategy_PattornGameMode_Statics::ClassParams = {
		&AStrategy_PattornGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStrategy_PattornGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategy_PattornGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStrategy_PattornGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStrategy_PattornGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStrategy_PattornGameMode, 2135541719);
	template<> STRATEGY_PATTORN_API UClass* StaticClass<AStrategy_PattornGameMode>()
	{
		return AStrategy_PattornGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStrategy_PattornGameMode(Z_Construct_UClass_AStrategy_PattornGameMode, &AStrategy_PattornGameMode::StaticClass, TEXT("/Script/Strategy_Pattorn"), TEXT("AStrategy_PattornGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStrategy_PattornGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
