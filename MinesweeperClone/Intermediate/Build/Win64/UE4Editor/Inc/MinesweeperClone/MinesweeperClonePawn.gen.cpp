// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinesweeperClone/MinesweeperClonePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinesweeperClonePawn() {}
// Cross Module References
	MINESWEEPERCLONE_API UClass* Z_Construct_UClass_AMinesweeperClonePawn_NoRegister();
	MINESWEEPERCLONE_API UClass* Z_Construct_UClass_AMinesweeperClonePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MinesweeperClone();
	MINESWEEPERCLONE_API UClass* Z_Construct_UClass_AMinesweeperCloneBlock_NoRegister();
// End Cross Module References
	void AMinesweeperClonePawn::StaticRegisterNativesAMinesweeperClonePawn()
	{
	}
	UClass* Z_Construct_UClass_AMinesweeperClonePawn_NoRegister()
	{
		return AMinesweeperClonePawn::StaticClass();
	}
	struct Z_Construct_UClass_AMinesweeperClonePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBlockFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentBlockFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinesweeperClonePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MinesweeperClone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinesweeperClonePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MinesweeperClonePawn.h" },
		{ "ModuleRelativePath", "MinesweeperClonePawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinesweeperClonePawn_Statics::NewProp_CurrentBlockFocus_MetaData[] = {
		{ "Category", "MinesweeperClonePawn" },
		{ "ModuleRelativePath", "MinesweeperClonePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinesweeperClonePawn_Statics::NewProp_CurrentBlockFocus = { "CurrentBlockFocus", nullptr, (EPropertyFlags)0x0020080000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinesweeperClonePawn, CurrentBlockFocus), Z_Construct_UClass_AMinesweeperCloneBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinesweeperClonePawn_Statics::NewProp_CurrentBlockFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinesweeperClonePawn_Statics::NewProp_CurrentBlockFocus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinesweeperClonePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinesweeperClonePawn_Statics::NewProp_CurrentBlockFocus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinesweeperClonePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinesweeperClonePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMinesweeperClonePawn_Statics::ClassParams = {
		&AMinesweeperClonePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMinesweeperClonePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMinesweeperClonePawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMinesweeperClonePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMinesweeperClonePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMinesweeperClonePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMinesweeperClonePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMinesweeperClonePawn, 1761947145);
	template<> MINESWEEPERCLONE_API UClass* StaticClass<AMinesweeperClonePawn>()
	{
		return AMinesweeperClonePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMinesweeperClonePawn(Z_Construct_UClass_AMinesweeperClonePawn, &AMinesweeperClonePawn::StaticClass, TEXT("/Script/MinesweeperClone"), TEXT("AMinesweeperClonePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinesweeperClonePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
