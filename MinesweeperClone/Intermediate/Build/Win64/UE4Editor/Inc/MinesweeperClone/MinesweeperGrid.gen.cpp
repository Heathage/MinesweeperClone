// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinesweeperClone/MinesweeperGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinesweeperGrid() {}
// Cross Module References
	MINESWEEPERCLONE_API UClass* Z_Construct_UClass_AMinesweeperGrid_NoRegister();
	MINESWEEPERCLONE_API UClass* Z_Construct_UClass_AMinesweeperGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MinesweeperClone();
// End Cross Module References
	void AMinesweeperGrid::StaticRegisterNativesAMinesweeperGrid()
	{
	}
	UClass* Z_Construct_UClass_AMinesweeperGrid_NoRegister()
	{
		return AMinesweeperGrid::StaticClass();
	}
	struct Z_Construct_UClass_AMinesweeperGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinesweeperGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MinesweeperClone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinesweeperGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MinesweeperGrid.h" },
		{ "ModuleRelativePath", "MinesweeperGrid.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinesweeperGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinesweeperGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMinesweeperGrid_Statics::ClassParams = {
		&AMinesweeperGrid::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMinesweeperGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMinesweeperGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMinesweeperGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMinesweeperGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMinesweeperGrid, 3277620160);
	template<> MINESWEEPERCLONE_API UClass* StaticClass<AMinesweeperGrid>()
	{
		return AMinesweeperGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMinesweeperGrid(Z_Construct_UClass_AMinesweeperGrid, &AMinesweeperGrid::StaticClass, TEXT("/Script/MinesweeperClone"), TEXT("AMinesweeperGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinesweeperGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif