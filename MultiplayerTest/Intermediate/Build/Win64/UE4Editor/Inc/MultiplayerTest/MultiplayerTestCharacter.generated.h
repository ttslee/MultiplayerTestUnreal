// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDamageEvent;
class AController;
class AActor;
#ifdef MULTIPLAYERTEST_MultiplayerTestCharacter_generated_h
#error "MultiplayerTestCharacter.generated.h already included, missing '#pragma once' in MultiplayerTestCharacter.h"
#endif
#define MULTIPLAYERTEST_MultiplayerTestCharacter_generated_h

#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_SPARSE_DATA
#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_RPC_WRAPPERS \
	virtual void HandleFire_Implementation(); \
 \
	DECLARE_FUNCTION(execHandleFire); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetMaxHealth);


#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleFire_Implementation(); \
 \
	DECLARE_FUNCTION(execHandleFire); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetMaxHealth);


#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_EVENT_PARMS
#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_CALLBACK_WRAPPERS
#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerTestCharacter(); \
	friend struct Z_Construct_UClass_AMultiplayerTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerTest"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerTestCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMultiplayerTestCharacter(); \
	friend struct Z_Construct_UClass_AMultiplayerTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerTest"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerTestCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMultiplayerTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiplayerTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerTestCharacter(AMultiplayerTestCharacter&&); \
	NO_API AMultiplayerTestCharacter(const AMultiplayerTestCharacter&); \
public:


#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerTestCharacter(AMultiplayerTestCharacter&&); \
	NO_API AMultiplayerTestCharacter(const AMultiplayerTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerTestCharacter)


#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMultiplayerTestCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMultiplayerTestCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(AMultiplayerTestCharacter, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__CurrentHealth() { return STRUCT_OFFSET(AMultiplayerTestCharacter, CurrentHealth); } \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(AMultiplayerTestCharacter, ProjectileClass); } \
	FORCEINLINE static uint32 __PPO__FireRate() { return STRUCT_OFFSET(AMultiplayerTestCharacter, FireRate); }


#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_9_PROLOG \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_EVENT_PARMS


#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_SPARSE_DATA \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_RPC_WRAPPERS \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_CALLBACK_WRAPPERS \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_INCLASS \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_SPARSE_DATA \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_CALLBACK_WRAPPERS \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERTEST_API UClass* StaticClass<class AMultiplayerTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
