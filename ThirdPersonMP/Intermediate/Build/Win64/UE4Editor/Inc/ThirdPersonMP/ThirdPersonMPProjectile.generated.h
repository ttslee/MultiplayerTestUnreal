// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef THIRDPERSONMP_ThirdPersonMPProjectile_generated_h
#error "ThirdPersonMPProjectile.generated.h already included, missing '#pragma once' in ThirdPersonMPProjectile.h"
#endif
#define THIRDPERSONMP_ThirdPersonMPProjectile_generated_h

#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_12_SPARSE_DATA
#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnProjectileImpact);


#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnProjectileImpact);


#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThirdPersonMPProjectile(); \
	friend struct Z_Construct_UClass_AThirdPersonMPProjectile_Statics; \
public: \
	DECLARE_CLASS(AThirdPersonMPProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonMP"), NO_API) \
	DECLARE_SERIALIZER(AThirdPersonMPProjectile)


#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAThirdPersonMPProjectile(); \
	friend struct Z_Construct_UClass_AThirdPersonMPProjectile_Statics; \
public: \
	DECLARE_CLASS(AThirdPersonMPProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonMP"), NO_API) \
	DECLARE_SERIALIZER(AThirdPersonMPProjectile)


#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThirdPersonMPProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThirdPersonMPProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonMPProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonMPProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThirdPersonMPProjectile(AThirdPersonMPProjectile&&); \
	NO_API AThirdPersonMPProjectile(const AThirdPersonMPProjectile&); \
public:


#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThirdPersonMPProjectile(AThirdPersonMPProjectile&&); \
	NO_API AThirdPersonMPProjectile(const AThirdPersonMPProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonMPProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonMPProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThirdPersonMPProjectile)


#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_12_PRIVATE_PROPERTY_OFFSET
#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_9_PROLOG
#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_12_SPARSE_DATA \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_12_RPC_WRAPPERS \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_12_INCLASS \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_12_SPARSE_DATA \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_12_INCLASS_NO_PURE_DECLS \
	ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONMP_API UClass* StaticClass<class AThirdPersonMPProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ThirdPersonMP_Source_ThirdPersonMP_ThirdPersonMPProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
