// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT3_MyProject3Pawn_generated_h
#error "MyProject3Pawn.generated.h already included, missing '#pragma once' in MyProject3Pawn.h"
#endif
#define MYPROJECT3_MyProject3Pawn_generated_h

#define MyProject3_Source_MyProject3_MyProject3Pawn_h_9_RPC_WRAPPERS
#define MyProject3_Source_MyProject3_MyProject3Pawn_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject3_Source_MyProject3_MyProject3Pawn_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAMyProject3Pawn(); \
	friend MYPROJECT3_API class UClass* Z_Construct_UClass_AMyProject3Pawn(); \
	public: \
	DECLARE_CLASS(AMyProject3Pawn, APawn, COMPILED_IN_FLAGS(0), 0, MyProject3, NO_API) \
	DECLARE_SERIALIZER(AMyProject3Pawn) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AMyProject3Pawn*>(this); }


#define MyProject3_Source_MyProject3_MyProject3Pawn_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesAMyProject3Pawn(); \
	friend MYPROJECT3_API class UClass* Z_Construct_UClass_AMyProject3Pawn(); \
	public: \
	DECLARE_CLASS(AMyProject3Pawn, APawn, COMPILED_IN_FLAGS(0), 0, MyProject3, NO_API) \
	DECLARE_SERIALIZER(AMyProject3Pawn) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AMyProject3Pawn*>(this); }


#define MyProject3_Source_MyProject3_MyProject3Pawn_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProject3Pawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject3Pawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject3Pawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject3Pawn); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AMyProject3Pawn(const AMyProject3Pawn& InCopy); \
public:


#define MyProject3_Source_MyProject3_MyProject3Pawn_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AMyProject3Pawn(const AMyProject3Pawn& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject3Pawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject3Pawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject3Pawn)


#define MyProject3_Source_MyProject3_MyProject3Pawn_h_6_PROLOG
#define MyProject3_Source_MyProject3_MyProject3Pawn_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject3_Source_MyProject3_MyProject3Pawn_h_9_RPC_WRAPPERS \
	MyProject3_Source_MyProject3_MyProject3Pawn_h_9_INCLASS \
	MyProject3_Source_MyProject3_MyProject3Pawn_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject3_Source_MyProject3_MyProject3Pawn_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject3_Source_MyProject3_MyProject3Pawn_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject3_Source_MyProject3_MyProject3Pawn_h_9_INCLASS_NO_PURE_DECLS \
	MyProject3_Source_MyProject3_MyProject3Pawn_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject3_Source_MyProject3_MyProject3Pawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
