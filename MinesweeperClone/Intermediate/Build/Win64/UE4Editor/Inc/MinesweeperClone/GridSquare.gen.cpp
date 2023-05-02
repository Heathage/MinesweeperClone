// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinesweeperClone/Public/GridSquare.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridSquare() {}
// Cross Module References
	MINESWEEPERCLONE_API UClass* Z_Construct_UClass_AGridSquare_NoRegister();
	MINESWEEPERCLONE_API UClass* Z_Construct_UClass_AGridSquare();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MinesweeperClone();
	MINESWEEPERCLONE_API UClass* Z_Construct_UClass_AMinesweeperGrid_NoRegister();
// End Cross Module References
	void AGridSquare::StaticRegisterNativesAGridSquare()
	{
	}
	UClass* Z_Construct_UClass_AGridSquare_NoRegister()
	{
		return AGridSquare::StaticClass();
	}
	struct Z_Construct_UClass_AGridSquare_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningGrid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridSquare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MinesweeperClone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSquare_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GridSquare.h" },
		{ "ModuleRelativePath", "Public/GridSquare.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSquare_Statics::NewProp_OwningGrid_MetaData[] = {
		{ "ModuleRelativePath", "Public/GridSquare.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridSquare_Statics::NewProp_OwningGrid = { "OwningGrid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridSquare, OwningGrid), Z_Construct_UClass_AMinesweeperGrid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridSquare_Statics::NewProp_OwningGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridSquare_Statics::NewProp_OwningGrid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridSquare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSquare_Statics::NewProp_OwningGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridSquare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridSquare>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGridSquare_Statics::ClassParams = {
		&AGridSquare::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGridSquare_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGridSquare_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGridSquare_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGridSquare_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGridSquare()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGridSquare_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGridSquare, 2967029187);
	template<> MINESWEEPERCLONE_API UClass* StaticClass<AGridSquare>()
	{
		return AGridSquare::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGridSquare(Z_Construct_UClass_AGridSquare, &AGridSquare::StaticClass, TEXT("/Script/MinesweeperClone"), TEXT("AGridSquare"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridSquare);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
