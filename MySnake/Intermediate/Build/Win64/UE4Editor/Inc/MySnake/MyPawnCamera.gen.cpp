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
	MYSNAKE_API UClass* Z_Construct_UClass_AMySnakeActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyPawnCamera::execGetScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPawnCamera::execGetGameMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGameMode();
		P_NATIVE_END;
	}
	void AMyPawnCamera::StaticRegisterNativesAMyPawnCamera()
	{
		UClass* Class = AMyPawnCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameMode", &AMyPawnCamera::execGetGameMode },
			{ "GetScore", &AMyPawnCamera::execGetScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyPawnCamera_GetGameMode_Statics
	{
		struct MyPawnCamera_eventGetGameMode_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyPawnCamera_GetGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPawnCamera_eventGetGameMode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawnCamera_GetGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawnCamera_GetGameMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawnCamera_GetGameMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyF" },
		{ "ModuleRelativePath", "MyPawnCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawnCamera_GetGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawnCamera, nullptr, "GetGameMode", nullptr, nullptr, sizeof(MyPawnCamera_eventGetGameMode_Parms), Z_Construct_UFunction_AMyPawnCamera_GetGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawnCamera_GetGameMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPawnCamera_GetGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawnCamera_GetGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPawnCamera_GetGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPawnCamera_GetGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPawnCamera_GetScore_Statics
	{
		struct MyPawnCamera_eventGetScore_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyPawnCamera_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPawnCamera_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawnCamera_GetScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawnCamera_GetScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawnCamera_GetScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyF" },
		{ "ModuleRelativePath", "MyPawnCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawnCamera_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawnCamera, nullptr, "GetScore", nullptr, nullptr, sizeof(MyPawnCamera_eventGetScore_Parms), Z_Construct_UFunction_AMyPawnCamera_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawnCamera_GetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPawnCamera_GetScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawnCamera_GetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPawnCamera_GetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPawnCamera_GetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyPawnCamera_NoRegister()
	{
		return AMyPawnCamera::StaticClass();
	}
	struct Z_Construct_UClass_AMyPawnCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnakePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_wasd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSpring_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraSpring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPawnCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MySnake,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyPawnCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPawnCamera_GetGameMode, "GetGameMode" }, // 915139794
		{ &Z_Construct_UFunction_AMyPawnCamera_GetScore, "GetScore" }, // 8928880
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawnCamera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPawnCamera.h" },
		{ "ModuleRelativePath", "MyPawnCamera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_SnakePlayer_MetaData[] = {
		{ "Category", "MyPawnCamera" },
		{ "Comment", "//\xd0\xb1\xd0\xbb\xd0\xbe\xd0\xba \xd0\xb4\xd0\xbb\xd1\x8f \xd0\xba\xd0\xb0\xd0\xbc\xd0\xb5\xd1\x80\xd1\x8b\n//vars\n" },
		{ "ModuleRelativePath", "MyPawnCamera.h" },
		{ "ToolTip", "\xd0\xb1\xd0\xbb\xd0\xbe\xd0\xba \xd0\xb4\xd0\xbb\xd1\x8f \xd0\xba\xd0\xb0\xd0\xbc\xd0\xb5\xd1\x80\xd1\x8b\nvars" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_SnakePlayer = { "SnakePlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPawnCamera, SnakePlayer), Z_Construct_UClass_AMySnakeActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_SnakePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_SnakePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_wasd_MetaData[] = {
		{ "Category", "MyPawnCamera" },
		{ "ModuleRelativePath", "MyPawnCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_wasd = { "wasd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPawnCamera, wasd), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_wasd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_wasd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_CameraSpring_MetaData[] = {
		{ "Category", "MyPawnCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPawnCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_CameraSpring = { "CameraSpring", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPawnCamera, CameraSpring), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_CameraSpring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_CameraSpring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_MyCamera_MetaData[] = {
		{ "Category", "MyPawnCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPawnCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_MyCamera = { "MyCamera", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPawnCamera, MyCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_MyCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_MyCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_GameMode_MetaData[] = {
		{ "Category", "MyPawnCamera" },
		{ "ModuleRelativePath", "MyPawnCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPawnCamera, GameMode), METADATA_PARAMS(Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_GameMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPawnCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_SnakePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_wasd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_CameraSpring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_MyCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawnCamera_Statics::NewProp_GameMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPawnCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPawnCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPawnCamera_Statics::ClassParams = {
		&AMyPawnCamera::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyPawnCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawnCamera_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AMyPawnCamera, 661836538);
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
