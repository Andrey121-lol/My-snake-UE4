// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySnake/MyPawnCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPawnCamera() {}
// Cross Module References
	MYSNAKE_API UClass* Z_Construct_UClass_AMyPawnCamera_NoRegister();
	MYSNAKE_API UClass* Z_Construct_UClass_AMyPawnCamera();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MySnake();
// End Cross Module References
	void AMyPawnCamera::StaticRegisterNativesAMyPawnCamera()
	{
	}
	UClass* Z_Construct_UClass_AMyPawnCamera_NoRegister()
	{
		return AMyPawnCamera::StaticClass();
	}
	struct Z_Construct_UClass_AMyPawnCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPawnCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MySnake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawnCamera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPawnCamera.h" },
		{ "ModuleRelativePath", "MyPawnCamera.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPawnCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPawnCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPawnCamera_Statics::ClassParams = {
		&AMyPawnCamera::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyPawnCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawnCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPawnCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyPawnCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPawnCamera, 1468062786);
	template<> MYSNAKE_API UClass* StaticClass<AMyPawnCamera>()
	{
		return AMyPawnCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPawnCamera(Z_Construct_UClass_AMyPawnCamera, &AMyPawnCamera::StaticClass, TEXT("/Script/MySnake"), TEXT("AMyPawnCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPawnCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
