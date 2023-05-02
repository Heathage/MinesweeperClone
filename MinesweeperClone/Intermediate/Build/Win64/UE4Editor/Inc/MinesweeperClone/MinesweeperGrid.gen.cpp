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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MINESWEEPERCLONE_API UClass* Z_Construct_UClass_AGridSquare_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSquare_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GridSquare;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GridSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinesweeperGrid_Statics::NewProp_GridSquare_MetaData[] = {
		{ "Category", "GridCell" },
		{ "ModuleRelativePath", "MinesweeperGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinesweeperGrid_Statics::NewProp_GridSquare = { "GridSquare", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinesweeperGrid, GridSquare), Z_Construct_UClass_AGridSquare_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMinesweeperGrid_Statics::NewProp_GridSquare_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinesweeperGrid_Statics::NewProp_GridSquare_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinesweeperGrid_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "MinesweeperGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinesweeperGrid_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinesweeperGrid, GridSize), METADATA_PARAMS(Z_Construct_UClass_AMinesweeperGrid_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinesweeperGrid_Statics::NewProp_GridSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinesweeperGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinesweeperGrid_Statics::NewProp_GridSquare,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinesweeperGrid_Statics::NewProp_GridSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinesweeperGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinesweeperGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMinesweeperGrid_Statics::ClassParams = {
		&AMinesweeperGrid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMinesweeperGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMinesweeperGrid_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AMinesweeperGrid, 1739171169);
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
