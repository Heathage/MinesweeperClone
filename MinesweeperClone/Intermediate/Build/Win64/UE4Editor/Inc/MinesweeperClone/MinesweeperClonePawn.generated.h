// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINESWEEPERCLONE_MinesweeperClonePawn_generated_h
#error "MinesweeperClonePawn.generated.h already included, missing '#pragma once' in MinesweeperClonePawn.h"
#endif
#define MINESWEEPERCLONE_MinesweeperClonePawn_generated_h

#define MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_12_SPARSE_DATA
#define MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_12_RPC_WRAPPERS
#define MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinesweeperClonePawn(); \
	friend struct Z_Construct_UClass_AMinesweeperClonePawn_Statics; \
public: \
	DECLARE_CLASS(AMinesweeperClonePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinesweeperClone"), NO_API) \
	DECLARE_SERIALIZER(AMinesweeperClonePawn)


#define MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMinesweeperClonePawn(); \
	friend struct Z_Construct_UClass_AMinesweeperClonePawn_Statics; \
public: \
	DECLARE_CLASS(AMinesweeperClonePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinesweeperClone"), NO_API) \
	DECLARE_SERIALIZER(AMinesweeperClonePawn)


#define MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMinesweeperClonePawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMinesweeperClonePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinesweeperClonePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinesweeperClonePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMinesweeperClonePawn(AMinesweeperClonePawn&&); \
	NO_API AMinesweeperClonePawn(const AMinesweeperClonePawn&); \
public:


#define MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMinesweeperClonePawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMinesweeperClonePawn(AMinesweeperClonePawn&&); \
	NO_API AMinesweeperClonePawn(const AMinesweeperClonePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinesweeperClonePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinesweeperClonePawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMinesweeperClonePawn)


#define MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentBlockFocus() { return STRUCT_OFFSET(AMinesweeperClonePawn, CurrentBlockFocus); }


#define MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_9_PROLOG
#define MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_12_SPARSE_DATA \
	MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_12_RPC_WRAPPERS \
	MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_12_INCLASS \
	MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_12_SPARSE_DATA \
	MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_12_INCLASS_NO_PURE_DECLS \
	MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MinesweeperClonePawn."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINESWEEPERCLONE_API UClass* StaticClass<class AMinesweeperClonePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MinesweeperClone_Source_MinesweeperClone_MinesweeperClonePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
