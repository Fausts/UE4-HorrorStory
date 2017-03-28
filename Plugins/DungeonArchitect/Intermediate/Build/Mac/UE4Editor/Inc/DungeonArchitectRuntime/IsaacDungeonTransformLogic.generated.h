// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIsaacDungeonModel;
struct FTransform;
#ifdef DUNGEONARCHITECTRUNTIME_IsaacDungeonTransformLogic_generated_h
#error "IsaacDungeonTransformLogic.generated.h already included, missing '#pragma once' in IsaacDungeonTransformLogic.h"
#endif
#define DUNGEONARCHITECTRUNTIME_IsaacDungeonTransformLogic_generated_h

#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_17_RPC_WRAPPERS \
	virtual void GetNodeOffset_Implementation(UIsaacDungeonModel* Model, FTransform& Offset); \
 \
	DECLARE_FUNCTION(execGetNodeOffset) \
	{ \
		P_GET_OBJECT(UIsaacDungeonModel,Z_Param_Model); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Offset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetNodeOffset_Implementation(Z_Param_Model,Z_Param_Out_Offset); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNodeOffset) \
	{ \
		P_GET_OBJECT(UIsaacDungeonModel,Z_Param_Model); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Offset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetNodeOffset_Implementation(Z_Param_Model,Z_Param_Out_Offset); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_17_EVENT_PARMS \
	struct IsaacDungeonTransformLogic_eventGetNodeOffset_Parms \
	{ \
		UIsaacDungeonModel* Model; \
		FTransform Offset; \
	};


extern DUNGEONARCHITECTRUNTIME_API  FName DUNGEONARCHITECTRUNTIME_GetNodeOffset;
#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_17_CALLBACK_WRAPPERS
#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_17_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUIsaacDungeonTransformLogic(); \
	friend DUNGEONARCHITECTRUNTIME_API class UClass* Z_Construct_UClass_UIsaacDungeonTransformLogic(); \
	public: \
	DECLARE_CLASS(UIsaacDungeonTransformLogic, UDungeonTransformLogic, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UIsaacDungeonTransformLogic) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_17_INCLASS \
	private: \
	static void StaticRegisterNativesUIsaacDungeonTransformLogic(); \
	friend DUNGEONARCHITECTRUNTIME_API class UClass* Z_Construct_UClass_UIsaacDungeonTransformLogic(); \
	public: \
	DECLARE_CLASS(UIsaacDungeonTransformLogic, UDungeonTransformLogic, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UIsaacDungeonTransformLogic) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsaacDungeonTransformLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsaacDungeonTransformLogic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsaacDungeonTransformLogic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsaacDungeonTransformLogic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIsaacDungeonTransformLogic(UIsaacDungeonTransformLogic&&); \
	NO_API UIsaacDungeonTransformLogic(const UIsaacDungeonTransformLogic&); \
public:


#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsaacDungeonTransformLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIsaacDungeonTransformLogic(UIsaacDungeonTransformLogic&&); \
	NO_API UIsaacDungeonTransformLogic(const UIsaacDungeonTransformLogic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsaacDungeonTransformLogic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsaacDungeonTransformLogic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsaacDungeonTransformLogic)


#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_14_PROLOG \
	HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_17_EVENT_PARMS


#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_17_RPC_WRAPPERS \
	HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_17_CALLBACK_WRAPPERS \
	HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_17_INCLASS \
	HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_17_CALLBACK_WRAPPERS \
	HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
