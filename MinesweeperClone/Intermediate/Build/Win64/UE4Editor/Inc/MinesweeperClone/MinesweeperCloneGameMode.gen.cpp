// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinesweeperClone/Unused/MinesweeperCloneGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinesweeperCloneGameMode() {}
// Cross Module References
	MINESWEEPERCLONE_API UClass* Z_Construct_UClass_AMinesweeperCloneGameMode_NoRegister();
	MINESWEEPERCLONE_API UClass* Z_Construct_UClass_AMinesweeperCloneGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MinesweeperClone();
// End Cross Module References
	void AMinesweeperCloneGameMode::StaticRegisterNativesAMinesweeperCloneGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMinesweeperCloneGameMode_NoRegister()
	{
		return AMinesweeperCloneGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMinesweeperCloneGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinesweeperCloneGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MinesweeperClone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinesweeperCloneGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** GameMode class to specify pawn and playercontroller */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Unused/MinesweeperCloneGameMode.h" },
		{ "ModuleRelativePath", "Unused/MinesweeperCloneGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "GameMode class to specify pawn and playercontroller" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinesweeperCloneGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinesweeperCloneGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMinesweeperCloneGameMode_Statics::ClassParams = {
		&AMinesweeperCloneGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMinesweeperCloneGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMinesweeperCloneGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMinesweeperCloneGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMinesweeperCloneGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMinesweeperCloneGameMode, 1011300376);
	template<> MINESWEEPERCLONE_API UClass* StaticClass<AMinesweeperCloneGameMode>()
	{
		return AMinesweeperCloneGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMinesweeperCloneGameMode(Z_Construct_UClass_AMinesweeperCloneGameMode, &AMinesweeperCloneGameMode::StaticClass, TEXT("/Script/MinesweeperClone"), TEXT("AMinesweeperCloneGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinesweeperCloneGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
