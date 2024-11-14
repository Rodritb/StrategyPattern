// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Strategy_Pattorn/EstrategiaMovimietnoDos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaMovimietnoDos() {}
// Cross Module References
	STRATEGY_PATTORN_API UClass* Z_Construct_UClass_AEstrategiaMovimietnoDos_NoRegister();
	STRATEGY_PATTORN_API UClass* Z_Construct_UClass_AEstrategiaMovimietnoDos();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Strategy_Pattorn();
	STRATEGY_PATTORN_API UClass* Z_Construct_UClass_UEstrategias_NoRegister();
// End Cross Module References
	void AEstrategiaMovimietnoDos::StaticRegisterNativesAEstrategiaMovimietnoDos()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaMovimietnoDos_NoRegister()
	{
		return AEstrategiaMovimietnoDos::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaMovimietnoDos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaMovimietnoDos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Strategy_Pattorn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaMovimietnoDos_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaMovimietnoDos.h" },
		{ "ModuleRelativePath", "EstrategiaMovimietnoDos.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaMovimietnoDos_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstrategias_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaMovimietnoDos, IEstrategias), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaMovimietnoDos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaMovimietnoDos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaMovimietnoDos_Statics::ClassParams = {
		&AEstrategiaMovimietnoDos::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaMovimietnoDos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaMovimietnoDos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaMovimietnoDos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaMovimietnoDos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaMovimietnoDos, 2996943069);
	template<> STRATEGY_PATTORN_API UClass* StaticClass<AEstrategiaMovimietnoDos>()
	{
		return AEstrategiaMovimietnoDos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaMovimietnoDos(Z_Construct_UClass_AEstrategiaMovimietnoDos, &AEstrategiaMovimietnoDos::StaticClass, TEXT("/Script/Strategy_Pattorn"), TEXT("AEstrategiaMovimietnoDos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaMovimietnoDos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
