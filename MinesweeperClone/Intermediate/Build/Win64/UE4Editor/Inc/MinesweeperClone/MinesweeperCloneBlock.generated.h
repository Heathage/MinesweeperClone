// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
#ifdef MINESWEEPERCLONE_MinesweeperCloneBlock_generated_h
#error "MinesweeperCloneBlock.generated.h already included, missing '#pragma once' in MinesweeperCloneBlock.h"
#endif
#define MINESWEEPERCLONE_MinesweeperCloneBlock_generated_h

#define MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_13_SPARSE_DATA
#define MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock); \
	DECLARE_FUNCTION(execBlockClicked);


#define MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock); \
	DECLARE_FUNCTION(execBlockClicked);


#define MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinesweeperCloneBlock(); \
	friend struct Z_Construct_UClass_AMinesweeperCloneBlock_Statics; \
public: \
	DECLARE_CLASS(AMinesweeperCloneBlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinesweeperClone"), MINESWEEPERCLONE_API) \
	DECLARE_SERIALIZER(AMinesweeperCloneBlock)


#define MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMinesweeperCloneBlock(); \
	friend struct Z_Construct_UClass_AMinesweeperCloneBlock_Statics; \
public: \
	DECLARE_CLASS(AMinesweeperCloneBlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinesweeperClone"), MINESWEEPERCLONE_API) \
	DECLARE_SERIALIZER(AMinesweeperCloneBlock)


#define MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MINESWEEPERCLONE_API AMinesweeperCloneBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMinesweeperCloneBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MINESWEEPERCLONE_API, AMinesweeperCloneBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinesweeperCloneBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MINESWEEPERCLONE_API AMinesweeperCloneBlock(AMinesweeperCloneBlock&&); \
	MINESWEEPERCLONE_API AMinesweeperCloneBlock(const AMinesweeperCloneBlock&); \
public:


#define MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MINESWEEPERCLONE_API AMinesweeperCloneBlock(AMinesweeperCloneBlock&&); \
	MINESWEEPERCLONE_API AMinesweeperCloneBlock(const AMinesweeperCloneBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MINESWEEPERCLONE_API, AMinesweeperCloneBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinesweeperCloneBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMinesweeperCloneBlock)


#define MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(AMinesweeperCloneBlock, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(AMinesweeperCloneBlock, BlockMesh); }


#define MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_10_PROLOG
#define MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_13_SPARSE_DATA \
	MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_13_RPC_WRAPPERS \
	MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_13_INCLASS \
	MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_13_SPARSE_DATA \
	MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_13_INCLASS_NO_PURE_DECLS \
	MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINESWEEPERCLONE_API UClass* StaticClass<class AMinesweeperCloneBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MinesweeperClone_Source_MinesweeperClone_MinesweeperCloneBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
