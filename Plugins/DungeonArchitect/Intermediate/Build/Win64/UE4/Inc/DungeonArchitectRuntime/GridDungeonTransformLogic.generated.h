// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGridDungeonModel;
class UGridDungeonConfig;
struct FCell;
struct FRandomStream;
struct FTransform;
#ifdef DUNGEONARCHITECTRUNTIME_GridDungeonTransformLogic_generated_h
#error "GridDungeonTransformLogic.generated.h already included, missing '#pragma once' in GridDungeonTransformLogic.h"
#endif
#define DUNGEONARCHITECTRUNTIME_GridDungeonTransformLogic_generated_h

#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_18_RPC_WRAPPERS \
	virtual void GetNodeOffset_Implementation(UGridDungeonModel* Model, UGridDungeonConfig* Config, FCell const& Cell, FRandomStream const& RandomStream, int32 GridX, int32 GridY, FTransform& Offset); \
 \
	DECLARE_FUNCTION(execGetNodeOffset) \
	{ \
		P_GET_OBJECT(UGridDungeonModel,Z_Param_Model); \
		P_GET_OBJECT(UGridDungeonConfig,Z_Param_Config); \
		P_GET_STRUCT_REF(FCell,Z_Param_Out_Cell); \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream); \
		P_GET_PROPERTY(UIntProperty,Z_Param_GridX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_GridY); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Offset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetNodeOffset_Implementation(Z_Param_Model,Z_Param_Config,Z_Param_Out_Cell,Z_Param_Out_RandomStream,Z_Param_GridX,Z_Param_GridY,Z_Param_Out_Offset); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNodeOffset) \
	{ \
		P_GET_OBJECT(UGridDungeonModel,Z_Param_Model); \
		P_GET_OBJECT(UGridDungeonConfig,Z_Param_Config); \
		P_GET_STRUCT_REF(FCell,Z_Param_Out_Cell); \
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream); \
		P_GET_PROPERTY(UIntProperty,Z_Param_GridX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_GridY); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Offset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetNodeOffset_Implementation(Z_Param_Model,Z_Param_Config,Z_Param_Out_Cell,Z_Param_Out_RandomStream,Z_Param_GridX,Z_Param_GridY,Z_Param_Out_Offset); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_18_EVENT_PARMS \
	struct GridDungeonTransformLogic_eventGetNodeOffset_Parms \
	{ \
		UGridDungeonModel* Model; \
		UGridDungeonConfig* Config; \
		FCell Cell; \
		FRandomStream RandomStream; \
		int32 GridX; \
		int32 GridY; \
		FTransform Offset; \
	};


extern DUNGEONARCHITECTRUNTIME_API  FName DUNGEONARCHITECTRUNTIME_GetNodeOffset;
#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_18_CALLBACK_WRAPPERS
#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_18_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUGridDungeonTransformLogic(); \
	friend DUNGEONARCHITECTRUNTIME_API class UClass* Z_Construct_UClass_UGridDungeonTransformLogic(); \
	public: \
	DECLARE_CLASS(UGridDungeonTransformLogic, UDungeonTransformLogic, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridDungeonTransformLogic) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_18_INCLASS \
	private: \
	static void StaticRegisterNativesUGridDungeonTransformLogic(); \
	friend DUNGEONARCHITECTRUNTIME_API class UClass* Z_Construct_UClass_UGridDungeonTransformLogic(); \
	public: \
	DECLARE_CLASS(UGridDungeonTransformLogic, UDungeonTransformLogic, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridDungeonTransformLogic) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridDungeonTransformLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridDungeonTransformLogic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridDungeonTransformLogic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridDungeonTransformLogic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridDungeonTransformLogic(UGridDungeonTransformLogic&&); \
	NO_API UGridDungeonTransformLogic(const UGridDungeonTransformLogic&); \
public:


#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridDungeonTransformLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridDungeonTransformLogic(UGridDungeonTransformLogic&&); \
	NO_API UGridDungeonTransformLogic(const UGridDungeonTransformLogic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridDungeonTransformLogic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridDungeonTransformLogic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridDungeonTransformLogic)


#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_15_PROLOG \
	HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_18_EVENT_PARMS


#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_18_RPC_WRAPPERS \
	HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_18_CALLBACK_WRAPPERS \
	HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_18_INCLASS \
	HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_18_CALLBACK_WRAPPERS \
	HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_18_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
