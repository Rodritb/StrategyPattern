// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Strategy_Pattorn/EnemigoCocodrillo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoCocodrillo() {}
// Cross Module References
	STRATEGY_PATTORN_API UClass* Z_Construct_UClass_AEnemigoCocodrillo_NoRegister();
	STRATEGY_PATTORN_API UClass* Z_Construct_UClass_AEnemigoCocodrillo();
	STRATEGY_PATTORN_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_Strategy_Pattorn();
// End Cross Module References
	void AEnemigoCocodrillo::StaticRegisterNativesAEnemigoCocodrillo()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoCocodrillo_NoRegister()
	{
		return AEnemigoCocodrillo::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoCocodrillo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoCocodrillo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_Strategy_Pattorn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoCocodrillo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemigoCocodrillo.h" },
		{ "ModuleRelativePath", "EnemigoCocodrillo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoCocodrillo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoCocodrillo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoCocodrillo_Statics::ClassParams = {
		&AEnemigoCocodrillo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoCocodrillo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoCocodrillo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoCocodrillo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoCocodrillo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoCocodrillo, 3583672520);
	template<> STRATEGY_PATTORN_API UClass* StaticClass<AEnemigoCocodrillo>()
	{
		return AEnemigoCocodrillo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoCocodrillo(Z_Construct_UClass_AEnemigoCocodrillo, &AEnemigoCocodrillo::StaticClass, TEXT("/Script/Strategy_Pattorn"), TEXT("AEnemigoCocodrillo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoCocodrillo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
