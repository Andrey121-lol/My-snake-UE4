// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYSNAKE_MyPawnCamera_generated_h
#error "MyPawnCamera.generated.h already included, missing '#pragma once' in MyPawnCamera.h"
#endif
#define MYSNAKE_MyPawnCamera_generated_h

#define MySnake_Source_MySnake_MyPawnCamera_h_17_SPARSE_DATA
#define MySnake_Source_MySnake_MyPawnCamera_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScore); \
	DECLARE_FUNCTION(execGetGameMode);


#define MySnake_Source_MySnake_MyPawnCamera_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScore); \
	DECLARE_FUNCTION(execGetGameMode);


#define MySnake_Source_MySnake_MyPawnCamera_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPawnCamera(); \
	friend struct Z_Construct_UClass_AMyPawnCamera_Statics; \
public: \
	DECLARE_CLASS(AMyPawnCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MySnake"), NO_API) \
	DECLARE_SERIALIZER(AMyPawnCamera)


#define MySnake_Source_MySnake_MyPawnCamera_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMyPawnCamera(); \
	friend struct Z_Construct_UClass_AMyPawnCamera_Statics; \
public: \
	DECLARE_CLASS(AMyPawnCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MySnake"), NO_API) \
	DECLARE_SERIALIZER(AMyPawnCamera)


#define MySnake_Source_MySnake_MyPawnCamera_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPawnCamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPawnCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawnCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawnCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawnCamera(AMyPawnCamera&&); \
	NO_API AMyPawnCamera(const AMyPawnCamera&); \
public:


#define MySnake_Source_MySnake_MyPawnCamera_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawnCamera(AMyPawnCamera&&); \
	NO_API AMyPawnCamera(const AMyPawnCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawnCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawnCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPawnCamera)


#define MySnake_Source_MySnake_MyPawnCamera_h_17_PRIVATE_PROPERTY_OFFSET
#define MySnake_Source_MySnake_MyPawnCamera_h_14_PROLOG
#define MySnake_Source_MySnake_MyPawnCamera_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MySnake_Source_MySnake_MyPawnCamera_h_17_PRIVATE_PROPERTY_OFFSET \
	MySnake_Source_MySnake_MyPawnCamera_h_17_SPARSE_DATA \
	MySnake_Source_MySnake_MyPawnCamera_h_17_RPC_WRAPPERS \
	MySnake_Source_MySnake_MyPawnCamera_h_17_INCLASS \
	MySnake_Source_MySnake_MyPawnCamera_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MySnake_Source_MySnake_MyPawnCamera_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MySnake_Source_MySnake_MyPawnCamera_h_17_PRIVATE_PROPERTY_OFFSET \
	MySnake_Source_MySnake_MyPawnCamera_h_17_SPARSE_DATA \
	MySnake_Source_MySnake_MyPawnCamera_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MySnake_Source_MySnake_MyPawnCamera_h_17_INCLASS_NO_PURE_DECLS \
	MySnake_Source_MySnake_MyPawnCamera_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSNAKE_API UClass* StaticClass<class AMyPawnCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MySnake_Source_MySnake_MyPawnCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
