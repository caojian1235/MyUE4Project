// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectUE4/MyProjectUE4GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProjectUE4GameModeBase() {}
// Cross Module References
	MYPROJECTUE4_API UClass* Z_Construct_UClass_AMyProjectUE4GameModeBase_NoRegister();
	MYPROJECTUE4_API UClass* Z_Construct_UClass_AMyProjectUE4GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyProjectUE4();
// End Cross Module References
	void AMyProjectUE4GameModeBase::StaticRegisterNativesAMyProjectUE4GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMyProjectUE4GameModeBase_NoRegister()
	{
		return AMyProjectUE4GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyProjectUE4GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProjectUE4GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectUE4GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyProjectUE4GameModeBase.h" },
		{ "ModuleRelativePath", "MyProjectUE4GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProjectUE4GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProjectUE4GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProjectUE4GameModeBase_Statics::ClassParams = {
		&AMyProjectUE4GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyProjectUE4GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectUE4GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProjectUE4GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProjectUE4GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProjectUE4GameModeBase, 399600339);
	template<> MYPROJECTUE4_API UClass* StaticClass<AMyProjectUE4GameModeBase>()
	{
		return AMyProjectUE4GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectUE4GameModeBase(Z_Construct_UClass_AMyProjectUE4GameModeBase, &AMyProjectUE4GameModeBase::StaticClass, TEXT("/Script/MyProjectUE4"), TEXT("AMyProjectUE4GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectUE4GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
