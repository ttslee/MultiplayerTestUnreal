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
#ifdef THIRDPERSONMP_ThirdPersonMPCharacter_generated_h
#error "ThirdPersonMPCharacter.generated.h already included, missing '#pragma once' in ThirdPersonMPCharacter.h"
#endif
#define THIRDPERSONMP_ThirdPersonMPCharacter_generated_h

#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_SPARSE_DATA
#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_RPC_WRAPPERS \
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


#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_EVENT_PARMS
#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_CALLBACK_WRAPPERS
#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThirdPersonMPCharacter(); \
	friend struct Z_Construct_UClass_AThirdPersonMPCharacter_Statics; \
public: \
	DECLARE_CLASS(AThirdPersonMPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonMP"), NO_API) \
	DECLARE_SERIALIZER(AThirdPersonMPCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAThirdPersonMPCharacter(); \
	friend struct Z_Construct_UClass_AThirdPersonMPCharacter_Statics; \
public: \
	DECLARE_CLASS(AThirdPersonMPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonMP"), NO_API) \
	DECLARE_SERIALIZER(AThirdPersonMPCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThirdPersonMPCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThirdPersonMPCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonMPCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonMPCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThirdPersonMPCharacter(AThirdPersonMPCharacter&&); \
	NO_API AThirdPersonMPCharacter(const AThirdPersonMPCharacter&); \
public:


#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThirdPersonMPCharacter(AThirdPersonMPCharacter&&); \
	NO_API AThirdPersonMPCharacter(const AThirdPersonMPCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonMPCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonMPCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThirdPersonMPCharacter)


#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AThirdPersonMPCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AThirdPersonMPCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(AThirdPersonMPCharacter, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__CurrentHealth() { return STRUCT_OFFSET(AThirdPersonMPCharacter, CurrentHealth); } \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(AThirdPersonMPCharacter, ProjectileClass); } \
	FORCEINLINE static uint32 __PPO__FireRate() { return STRUCT_OFFSET(AThirdPersonMPCharacter, FireRate); }


#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_9_PROLOG \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_EVENT_PARMS


#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_SPARSE_DATA \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_RPC_WRAPPERS \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_CALLBACK_WRAPPERS \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_INCLASS \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_SPARSE_DATA \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_CALLBACK_WRAPPERS \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONMP_API UClass* StaticClass<class AThirdPersonMPCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
