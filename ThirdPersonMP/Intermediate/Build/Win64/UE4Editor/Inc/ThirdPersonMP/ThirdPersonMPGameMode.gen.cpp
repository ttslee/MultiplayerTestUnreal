// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonMP/ThirdPersonMPGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonMPGameMode() {}
// Cross Module References
	THIRDPERSONMP_API UClass* Z_Construct_UClass_AThirdPersonMPGameMode_NoRegister();
	THIRDPERSONMP_API UClass* Z_Construct_UClass_AThirdPersonMPGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonMP();
// End Cross Module References
	void AThirdPersonMPGameMode::StaticRegisterNativesAThirdPersonMPGameMode()
	{
	}
	UClass* Z_Construct_UClass_AThirdPersonMPGameMode_NoRegister()
	{
		return AThirdPersonMPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AThirdPersonMPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdPersonMPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonMP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonMPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ThirdPersonMPGameMode.h" },
		{ "ModuleRelativePath", "ThirdPersonMPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdPersonMPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonMPGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonMPGameMode_Statics::ClassParams = {
		&AThirdPersonMPGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AThirdPersonMPGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonMPGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThirdPersonMPGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThirdPersonMPGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThirdPersonMPGameMode, 78900403);
	template<> THIRDPERSONMP_API UClass* StaticClass<AThirdPersonMPGameMode>()
	{
		return AThirdPersonMPGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThirdPersonMPGameMode(Z_Construct_UClass_AThirdPersonMPGameMode, &AThirdPersonMPGameMode::StaticClass, TEXT("/Script/ThirdPersonMP"), TEXT("AThirdPersonMPGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonMPGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
