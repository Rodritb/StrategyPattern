// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Strategy_Pattorn/EstrategiaMovimientoUno.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaMovimientoUno() {}
// Cross Module References
	STRATEGY_PATTORN_API UClass* Z_Construct_UClass_AEstrategiaMovimientoUno_NoRegister();
	STRATEGY_PATTORN_API UClass* Z_Construct_UClass_AEstrategiaMovimientoUno();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Strategy_Pattorn();
	STRATEGY_PATTORN_API UClass* Z_Construct_UClass_UEstrategias_NoRegister();
// End Cross Module References
	void AEstrategiaMovimientoUno::StaticRegisterNativesAEstrategiaMovimientoUno()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaMovimientoUno_NoRegister()
	{
		return AEstrategiaMovimientoUno::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaMovimientoUno_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaMovimientoUno_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Strategy_Pattorn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaMovimientoUno_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaMovimientoUno.h" },
		{ "ModuleRelativePath", "EstrategiaMovimientoUno.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaMovimientoUno_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstrategias_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaMovimientoUno, IEstrategias), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaMovimientoUno_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaMovimientoUno>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaMovimientoUno_Statics::ClassParams = {
		&AEstrategiaMovimientoUno::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaMovimientoUno_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaMovimientoUno_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaMovimientoUno()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaMovimientoUno_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaMovimientoUno, 894294998);
	template<> STRATEGY_PATTORN_API UClass* StaticClass<AEstrategiaMovimientoUno>()
	{
		return AEstrategiaMovimientoUno::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaMovimientoUno(Z_Construct_UClass_AEstrategiaMovimientoUno, &AEstrategiaMovimientoUno::StaticClass, TEXT("/Script/Strategy_Pattorn"), TEXT("AEstrategiaMovimientoUno"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaMovimientoUno);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
