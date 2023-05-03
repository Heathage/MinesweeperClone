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
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMine_MetaData[];
#endif
		static void NewProp_IsMine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFlipped_MetaData[];
#endif
		static void NewProp_bIsFlipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFlipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Flag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrontPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSquare_Statics::NewProp_IsMine_MetaData[] = {
		{ "Category", "GridSquare" },
		{ "ModuleRelativePath", "Public/GridSquare.h" },
	};
#endif
	void Z_Construct_UClass_AGridSquare_Statics::NewProp_IsMine_SetBit(void* Obj)
	{
		((AGridSquare*)Obj)->IsMine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridSquare_Statics::NewProp_IsMine = { "IsMine", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGridSquare), &Z_Construct_UClass_AGridSquare_Statics::NewProp_IsMine_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGridSquare_Statics::NewProp_IsMine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridSquare_Statics::NewProp_IsMine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSquare_Statics::NewProp_bIsFlipped_MetaData[] = {
		{ "Category", "GridSquare" },
		{ "ModuleRelativePath", "Public/GridSquare.h" },
	};
#endif
	void Z_Construct_UClass_AGridSquare_Statics::NewProp_bIsFlipped_SetBit(void* Obj)
	{
		((AGridSquare*)Obj)->bIsFlipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridSquare_Statics::NewProp_bIsFlipped = { "bIsFlipped", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AGridSquare), &Z_Construct_UClass_AGridSquare_Statics::NewProp_bIsFlipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGridSquare_Statics::NewProp_bIsFlipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridSquare_Statics::NewProp_bIsFlipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSquare_Statics::NewProp_Mine_MetaData[] = {
		{ "Category", "GridSquare" },
		{ "ModuleRelativePath", "Public/GridSquare.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridSquare_Statics::NewProp_Mine = { "Mine", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridSquare, Mine), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridSquare_Statics::NewProp_Mine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridSquare_Statics::NewProp_Mine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSquare_Statics::NewProp_Flag_MetaData[] = {
		{ "Category", "GridSquare" },
		{ "ModuleRelativePath", "Public/GridSquare.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridSquare_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridSquare, Flag), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridSquare_Statics::NewProp_Flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridSquare_Statics::NewProp_Flag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSquare_Statics::NewProp_FrontPlane_MetaData[] = {
		{ "Category", "GridSquare" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GridSquare.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridSquare_Statics::NewProp_FrontPlane = { "FrontPlane", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridSquare, FrontPlane), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridSquare_Statics::NewProp_FrontPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridSquare_Statics::NewProp_FrontPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSquare_Statics::NewProp_BackPlane_MetaData[] = {
		{ "Category", "GridSquare" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GridSquare.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridSquare_Statics::NewProp_BackPlane = { "BackPlane", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridSquare, BackPlane), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridSquare_Statics::NewProp_BackPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridSquare_Statics::NewProp_BackPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSquare_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "GridSquare" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GridSquare.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridSquare_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridSquare, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridSquare_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridSquare_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridSquare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSquare_Statics::NewProp_OwningGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSquare_Statics::NewProp_IsMine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSquare_Statics::NewProp_bIsFlipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSquare_Statics::NewProp_Mine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSquare_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSquare_Statics::NewProp_FrontPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSquare_Statics::NewProp_BackPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSquare_Statics::NewProp_Root,
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
	IMPLEMENT_CLASS(AGridSquare, 3188410417);
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
