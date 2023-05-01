// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinesweeperClone/Public/MinesweeperGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinesweeperGameMode() {}
// Cross Module References
	MINESWEEPERCLONE_API UClass* Z_Construct_UClass_AMinesweeperGameMode_NoRegister();
	MINESWEEPERCLONE_API UClass* Z_Construct_UClass_AMinesweeperGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MinesweeperClone();
// End Cross Module References
	void AMinesweeperGameMode::StaticRegisterNativesAMinesweeperGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMinesweeperGameMode_NoRegister()
	{
		return AMinesweeperGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMinesweeperGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinesweeperGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MinesweeperClone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinesweeperGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MinesweeperGameMode.h" },
		{ "ModuleRelativePath", "Public/MinesweeperGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinesweeperGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinesweeperGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMinesweeperGameMode_Statics::ClassParams = {
		&AMinesweeperGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMinesweeperGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMinesweeperGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMinesweeperGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMinesweeperGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMinesweeperGameMode, 1390893785);
	template<> MINESWEEPERCLONE_API UClass* StaticClass<AMinesweeperGameMode>()
	{
		return AMinesweeperGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMinesweeperGameMode(Z_Construct_UClass_AMinesweeperGameMode, &AMinesweeperGameMode::StaticClass, TEXT("/Script/MinesweeperClone"), TEXT("AMinesweeperGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinesweeperGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
