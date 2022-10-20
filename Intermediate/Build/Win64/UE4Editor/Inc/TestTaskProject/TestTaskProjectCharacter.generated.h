// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTTASKPROJECT_TestTaskProjectCharacter_generated_h
#error "TestTaskProjectCharacter.generated.h already included, missing '#pragma once' in TestTaskProjectCharacter.h"
#endif
#define TESTTASKPROJECT_TestTaskProjectCharacter_generated_h

#define TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_16_SPARSE_DATA
#define TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_16_RPC_WRAPPERS
#define TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestTaskProjectCharacter(); \
	friend struct Z_Construct_UClass_ATestTaskProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestTaskProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestTaskProject"), NO_API) \
	DECLARE_SERIALIZER(ATestTaskProjectCharacter)


#define TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATestTaskProjectCharacter(); \
	friend struct Z_Construct_UClass_ATestTaskProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestTaskProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestTaskProject"), NO_API) \
	DECLARE_SERIALIZER(ATestTaskProjectCharacter)


#define TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestTaskProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestTaskProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestTaskProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestTaskProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestTaskProjectCharacter(ATestTaskProjectCharacter&&); \
	NO_API ATestTaskProjectCharacter(const ATestTaskProjectCharacter&); \
public:


#define TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestTaskProjectCharacter(ATestTaskProjectCharacter&&); \
	NO_API ATestTaskProjectCharacter(const ATestTaskProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestTaskProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestTaskProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestTaskProjectCharacter)


#define TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATestTaskProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ATestTaskProjectCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__WeaponComponent() { return STRUCT_OFFSET(ATestTaskProjectCharacter, WeaponComponent); }


#define TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_13_PROLOG
#define TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_16_SPARSE_DATA \
	TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_16_RPC_WRAPPERS \
	TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_16_INCLASS \
	TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_16_SPARSE_DATA \
	TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_16_INCLASS_NO_PURE_DECLS \
	TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTTASKPROJECT_API UClass* StaticClass<class ATestTaskProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestTaskProject_Source_TestTaskProject_TestTaskProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
