// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiminalRoomGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLiminalRoomGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
LIMINALROOMGEN_API UClass* Z_Construct_UClass_ALiminalRoomGenerator();
LIMINALROOMGEN_API UClass* Z_Construct_UClass_ALiminalRoomGenerator_NoRegister();
LIMINALROOMGEN_API UEnum* Z_Construct_UEnum_LiminalRoomGen_ELiminalCellType();
LIMINALROOMGEN_API UEnum* Z_Construct_UEnum_LiminalRoomGen_ELiminalPrefabForwardAxis();
LIMINALROOMGEN_API UFunction* Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalFirstRoomSpawned__DelegateSignature();
LIMINALROOMGEN_API UFunction* Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationComplete__DelegateSignature();
LIMINALROOMGEN_API UFunction* Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationStarted__DelegateSignature();
LIMINALROOMGEN_API UFunction* Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationStopped__DelegateSignature();
LIMINALROOMGEN_API UFunction* Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalTestDelegate__DelegateSignature();
LIMINALROOMGEN_API UScriptStruct* Z_Construct_UScriptStruct_FLiminalCell();
UPackage* Z_Construct_UPackage__Script_LiminalRoomGen();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELiminalCellType **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELiminalCellType;
static UEnum* ELiminalCellType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELiminalCellType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELiminalCellType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiminalRoomGen_ELiminalCellType, (UObject*)Z_Construct_UPackage__Script_LiminalRoomGen(), TEXT("ELiminalCellType"));
	}
	return Z_Registration_Info_UEnum_ELiminalCellType.OuterSingleton;
}
template<> LIMINALROOMGEN_API UEnum* StaticEnum<ELiminalCellType>()
{
	return ELiminalCellType_StaticEnum();
}
struct Z_Construct_UEnum_LiminalRoomGen_ELiminalCellType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Empty.DisplayName", "Empty" },
		{ "Empty.Name", "ELiminalCellType::Empty" },
		{ "Exit.DisplayName", "Exit" },
		{ "Exit.Name", "ELiminalCellType::Exit" },
		{ "ExitTransition.DisplayName", "Exit Transition" },
		{ "ExitTransition.Name", "ELiminalCellType::ExitTransition" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
		{ "Room.DisplayName", "Room" },
		{ "Room.Name", "ELiminalCellType::Room" },
		{ "Start.DisplayName", "Start" },
		{ "Start.Name", "ELiminalCellType::Start" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELiminalCellType::Empty", (int64)ELiminalCellType::Empty },
		{ "ELiminalCellType::Start", (int64)ELiminalCellType::Start },
		{ "ELiminalCellType::Room", (int64)ELiminalCellType::Room },
		{ "ELiminalCellType::ExitTransition", (int64)ELiminalCellType::ExitTransition },
		{ "ELiminalCellType::Exit", (int64)ELiminalCellType::Exit },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiminalRoomGen_ELiminalCellType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LiminalRoomGen,
	nullptr,
	"ELiminalCellType",
	"ELiminalCellType",
	Z_Construct_UEnum_LiminalRoomGen_ELiminalCellType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LiminalRoomGen_ELiminalCellType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LiminalRoomGen_ELiminalCellType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LiminalRoomGen_ELiminalCellType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LiminalRoomGen_ELiminalCellType()
{
	if (!Z_Registration_Info_UEnum_ELiminalCellType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELiminalCellType.InnerSingleton, Z_Construct_UEnum_LiminalRoomGen_ELiminalCellType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELiminalCellType.InnerSingleton;
}
// ********** End Enum ELiminalCellType ************************************************************

// ********** Begin Enum ELiminalPrefabForwardAxis *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELiminalPrefabForwardAxis;
static UEnum* ELiminalPrefabForwardAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELiminalPrefabForwardAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELiminalPrefabForwardAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiminalRoomGen_ELiminalPrefabForwardAxis, (UObject*)Z_Construct_UPackage__Script_LiminalRoomGen(), TEXT("ELiminalPrefabForwardAxis"));
	}
	return Z_Registration_Info_UEnum_ELiminalPrefabForwardAxis.OuterSingleton;
}
template<> LIMINALROOMGEN_API UEnum* StaticEnum<ELiminalPrefabForwardAxis>()
{
	return ELiminalPrefabForwardAxis_StaticEnum();
}
struct Z_Construct_UEnum_LiminalRoomGen_ELiminalPrefabForwardAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ForwardX.DisplayName", "Prefab faces +X" },
		{ "ForwardX.Name", "ELiminalPrefabForwardAxis::ForwardX" },
		{ "ForwardY.DisplayName", "Prefab faces +Y" },
		{ "ForwardY.Name", "ELiminalPrefabForwardAxis::ForwardY" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELiminalPrefabForwardAxis::ForwardX", (int64)ELiminalPrefabForwardAxis::ForwardX },
		{ "ELiminalPrefabForwardAxis::ForwardY", (int64)ELiminalPrefabForwardAxis::ForwardY },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiminalRoomGen_ELiminalPrefabForwardAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LiminalRoomGen,
	nullptr,
	"ELiminalPrefabForwardAxis",
	"ELiminalPrefabForwardAxis",
	Z_Construct_UEnum_LiminalRoomGen_ELiminalPrefabForwardAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LiminalRoomGen_ELiminalPrefabForwardAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LiminalRoomGen_ELiminalPrefabForwardAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LiminalRoomGen_ELiminalPrefabForwardAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LiminalRoomGen_ELiminalPrefabForwardAxis()
{
	if (!Z_Registration_Info_UEnum_ELiminalPrefabForwardAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELiminalPrefabForwardAxis.InnerSingleton, Z_Construct_UEnum_LiminalRoomGen_ELiminalPrefabForwardAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELiminalPrefabForwardAxis.InnerSingleton;
}
// ********** End Enum ELiminalPrefabForwardAxis ***************************************************

// ********** Begin ScriptStruct FLiminalCell ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLiminalCell;
class UScriptStruct* FLiminalCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLiminalCell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLiminalCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiminalCell, (UObject*)Z_Construct_UPackage__Script_LiminalRoomGen(), TEXT("LiminalCell"));
	}
	return Z_Registration_Info_UScriptStruct_FLiminalCell.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLiminalCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "LiminalCell" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiminalCell>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLiminalCell_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLiminalCell_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiminalCell, Type), Z_Construct_UEnum_LiminalRoomGen_ELiminalCellType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1645101277
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiminalCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiminalCell_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiminalCell_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiminalCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiminalCell_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiminalRoomGen,
	nullptr,
	&NewStructOps,
	"LiminalCell",
	Z_Construct_UScriptStruct_FLiminalCell_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiminalCell_Statics::PropPointers),
	sizeof(FLiminalCell),
	alignof(FLiminalCell),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiminalCell_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiminalCell_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiminalCell()
{
	if (!Z_Registration_Info_UScriptStruct_FLiminalCell.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLiminalCell.InnerSingleton, Z_Construct_UScriptStruct_FLiminalCell_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLiminalCell.InnerSingleton;
}
// ********** End ScriptStruct FLiminalCell ********************************************************

// ********** Begin Delegate FLiminalGenerationComplete ********************************************
struct Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationComplete__DelegateSignature_Statics
{
	struct _Script_LiminalRoomGen_eventLiminalGenerationComplete_Parms
	{
		TSoftObjectPtr<UWorld> StartLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fired when all spawned Level Instances for a generation have finished loading.\n" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired when all spawned Level Instances for a generation have finished loading." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StartLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationComplete__DelegateSignature_Statics::NewProp_StartLevel = { "StartLevel", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LiminalRoomGen_eventLiminalGenerationComplete_Parms, StartLevel), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationComplete__DelegateSignature_Statics::NewProp_StartLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LiminalRoomGen, nullptr, "LiminalGenerationComplete__DelegateSignature", Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationComplete__DelegateSignature_Statics::_Script_LiminalRoomGen_eventLiminalGenerationComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationComplete__DelegateSignature_Statics::_Script_LiminalRoomGen_eventLiminalGenerationComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLiminalGenerationComplete_DelegateWrapper(const FMulticastScriptDelegate& LiminalGenerationComplete, const TSoftObjectPtr<UWorld>& StartLevel)
{
	struct _Script_LiminalRoomGen_eventLiminalGenerationComplete_Parms
	{
		TSoftObjectPtr<UWorld> StartLevel;
	};
	_Script_LiminalRoomGen_eventLiminalGenerationComplete_Parms Parms;
	Parms.StartLevel=StartLevel;
	LiminalGenerationComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FLiminalGenerationComplete **********************************************

// ********** Begin Delegate FLiminalGenerationStarted *********************************************
struct Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationStarted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fired when generation starts.\n" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired when generation starts." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationStarted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LiminalRoomGen, nullptr, "LiminalGenerationStarted__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationStarted__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLiminalGenerationStarted_DelegateWrapper(const FMulticastScriptDelegate& LiminalGenerationStarted)
{
	LiminalGenerationStarted.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FLiminalGenerationStarted ***********************************************

// ********** Begin Delegate FLiminalFirstRoomSpawned **********************************************
struct Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalFirstRoomSpawned__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fired when the first room is spawned.\n" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired when the first room is spawned." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalFirstRoomSpawned__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LiminalRoomGen, nullptr, "LiminalFirstRoomSpawned__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalFirstRoomSpawned__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalFirstRoomSpawned__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalFirstRoomSpawned__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalFirstRoomSpawned__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLiminalFirstRoomSpawned_DelegateWrapper(const FMulticastScriptDelegate& LiminalFirstRoomSpawned)
{
	LiminalFirstRoomSpawned.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FLiminalFirstRoomSpawned ************************************************

// ********** Begin Delegate FLiminalGenerationStopped *********************************************
struct Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationStopped__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fired when generation stops (cleared).\n" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired when generation stops (cleared)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationStopped__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LiminalRoomGen, nullptr, "LiminalGenerationStopped__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationStopped__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationStopped__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationStopped__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationStopped__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLiminalGenerationStopped_DelegateWrapper(const FMulticastScriptDelegate& LiminalGenerationStopped)
{
	LiminalGenerationStopped.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FLiminalGenerationStopped ***********************************************

// ********** Begin Delegate FLiminalTestDelegate **************************************************
struct Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalTestDelegate__DelegateSignature_Statics
{
	struct _Script_LiminalRoomGen_eventLiminalTestDelegate_Parms
	{
		FString TestMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Simple test delegate to verify delegate system works\n" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple test delegate to verify delegate system works" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TestMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalTestDelegate__DelegateSignature_Statics::NewProp_TestMessage = { "TestMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LiminalRoomGen_eventLiminalTestDelegate_Parms, TestMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalTestDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalTestDelegate__DelegateSignature_Statics::NewProp_TestMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalTestDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalTestDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LiminalRoomGen, nullptr, "LiminalTestDelegate__DelegateSignature", Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalTestDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalTestDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalTestDelegate__DelegateSignature_Statics::_Script_LiminalRoomGen_eventLiminalTestDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalTestDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalTestDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalTestDelegate__DelegateSignature_Statics::_Script_LiminalRoomGen_eventLiminalTestDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalTestDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalTestDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLiminalTestDelegate_DelegateWrapper(const FMulticastScriptDelegate& LiminalTestDelegate, const FString& TestMessage)
{
	struct _Script_LiminalRoomGen_eventLiminalTestDelegate_Parms
	{
		FString TestMessage;
	};
	_Script_LiminalRoomGen_eventLiminalTestDelegate_Parms Parms;
	Parms.TestMessage=TestMessage;
	LiminalTestDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FLiminalTestDelegate ****************************************************

// ********** Begin Class ALiminalRoomGenerator Function ClearGeneration ***************************
struct Z_Construct_UFunction_ALiminalRoomGenerator_ClearGeneration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Liminal|Generation" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALiminalRoomGenerator_ClearGeneration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALiminalRoomGenerator, nullptr, "ClearGeneration", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALiminalRoomGenerator_ClearGeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALiminalRoomGenerator_ClearGeneration_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ALiminalRoomGenerator_ClearGeneration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALiminalRoomGenerator_ClearGeneration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALiminalRoomGenerator::execClearGeneration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearGeneration();
	P_NATIVE_END;
}
// ********** End Class ALiminalRoomGenerator Function ClearGeneration *****************************

// ********** Begin Class ALiminalRoomGenerator Function ClearRuntime ******************************
struct Z_Construct_UFunction_ALiminalRoomGenerator_ClearRuntime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Liminal|Generation" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALiminalRoomGenerator_ClearRuntime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALiminalRoomGenerator, nullptr, "ClearRuntime", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALiminalRoomGenerator_ClearRuntime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALiminalRoomGenerator_ClearRuntime_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ALiminalRoomGenerator_ClearRuntime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALiminalRoomGenerator_ClearRuntime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALiminalRoomGenerator::execClearRuntime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearRuntime();
	P_NATIVE_END;
}
// ********** End Class ALiminalRoomGenerator Function ClearRuntime ********************************

// ********** Begin Class ALiminalRoomGenerator Function Generate **********************************
struct Z_Construct_UFunction_ALiminalRoomGenerator_Generate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Liminal|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Editor Buttons ---\n" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Editor Buttons ---" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALiminalRoomGenerator_Generate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALiminalRoomGenerator, nullptr, "Generate", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALiminalRoomGenerator_Generate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALiminalRoomGenerator_Generate_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ALiminalRoomGenerator_Generate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALiminalRoomGenerator_Generate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALiminalRoomGenerator::execGenerate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Generate();
	P_NATIVE_END;
}
// ********** End Class ALiminalRoomGenerator Function Generate ************************************

// ********** Begin Class ALiminalRoomGenerator Function GenerateRuntime ***************************
struct Z_Construct_UFunction_ALiminalRoomGenerator_GenerateRuntime_Statics
{
	struct LiminalRoomGenerator_eventGenerateRuntime_Parms
	{
		bool bClearFirst;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Liminal|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Runtime API ---\n" },
#endif
		{ "CPP_Default_bClearFirst", "true" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Runtime API ---" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bClearFirst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearFirst;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALiminalRoomGenerator_GenerateRuntime_Statics::NewProp_bClearFirst_SetBit(void* Obj)
{
	((LiminalRoomGenerator_eventGenerateRuntime_Parms*)Obj)->bClearFirst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALiminalRoomGenerator_GenerateRuntime_Statics::NewProp_bClearFirst = { "bClearFirst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LiminalRoomGenerator_eventGenerateRuntime_Parms), &Z_Construct_UFunction_ALiminalRoomGenerator_GenerateRuntime_Statics::NewProp_bClearFirst_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALiminalRoomGenerator_GenerateRuntime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALiminalRoomGenerator_GenerateRuntime_Statics::NewProp_bClearFirst,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALiminalRoomGenerator_GenerateRuntime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALiminalRoomGenerator_GenerateRuntime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALiminalRoomGenerator, nullptr, "GenerateRuntime", Z_Construct_UFunction_ALiminalRoomGenerator_GenerateRuntime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALiminalRoomGenerator_GenerateRuntime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALiminalRoomGenerator_GenerateRuntime_Statics::LiminalRoomGenerator_eventGenerateRuntime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALiminalRoomGenerator_GenerateRuntime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALiminalRoomGenerator_GenerateRuntime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ALiminalRoomGenerator_GenerateRuntime_Statics::LiminalRoomGenerator_eventGenerateRuntime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALiminalRoomGenerator_GenerateRuntime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALiminalRoomGenerator_GenerateRuntime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALiminalRoomGenerator::execGenerateRuntime)
{
	P_GET_UBOOL(Z_Param_bClearFirst);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateRuntime(Z_Param_bClearFirst);
	P_NATIVE_END;
}
// ********** End Class ALiminalRoomGenerator Function GenerateRuntime *****************************

// ********** Begin Class ALiminalRoomGenerator Function GetExitCell *******************************
struct Z_Construct_UFunction_ALiminalRoomGenerator_GetExitCell_Statics
{
	struct LiminalRoomGenerator_eventGetExitCell_Parms
	{
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Liminal|Query" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the exit cell (grid coordinates). */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the exit cell (grid coordinates)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALiminalRoomGenerator_GetExitCell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiminalRoomGenerator_eventGetExitCell_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALiminalRoomGenerator_GetExitCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALiminalRoomGenerator_GetExitCell_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALiminalRoomGenerator_GetExitCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALiminalRoomGenerator_GetExitCell_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALiminalRoomGenerator, nullptr, "GetExitCell", Z_Construct_UFunction_ALiminalRoomGenerator_GetExitCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALiminalRoomGenerator_GetExitCell_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALiminalRoomGenerator_GetExitCell_Statics::LiminalRoomGenerator_eventGetExitCell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALiminalRoomGenerator_GetExitCell_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALiminalRoomGenerator_GetExitCell_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ALiminalRoomGenerator_GetExitCell_Statics::LiminalRoomGenerator_eventGetExitCell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALiminalRoomGenerator_GetExitCell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALiminalRoomGenerator_GetExitCell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALiminalRoomGenerator::execGetExitCell)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetExitCell();
	P_NATIVE_END;
}
// ********** End Class ALiminalRoomGenerator Function GetExitCell *********************************

// ********** Begin Class ALiminalRoomGenerator Function GetStartCell ******************************
struct Z_Construct_UFunction_ALiminalRoomGenerator_GetStartCell_Statics
{
	struct LiminalRoomGenerator_eventGetStartCell_Parms
	{
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Liminal|Query" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the start cell (grid coordinates). */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the start cell (grid coordinates)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALiminalRoomGenerator_GetStartCell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiminalRoomGenerator_eventGetStartCell_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALiminalRoomGenerator_GetStartCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALiminalRoomGenerator_GetStartCell_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALiminalRoomGenerator_GetStartCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALiminalRoomGenerator_GetStartCell_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALiminalRoomGenerator, nullptr, "GetStartCell", Z_Construct_UFunction_ALiminalRoomGenerator_GetStartCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALiminalRoomGenerator_GetStartCell_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALiminalRoomGenerator_GetStartCell_Statics::LiminalRoomGenerator_eventGetStartCell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALiminalRoomGenerator_GetStartCell_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALiminalRoomGenerator_GetStartCell_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ALiminalRoomGenerator_GetStartCell_Statics::LiminalRoomGenerator_eventGetStartCell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALiminalRoomGenerator_GetStartCell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALiminalRoomGenerator_GetStartCell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALiminalRoomGenerator::execGetStartCell)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetStartCell();
	P_NATIVE_END;
}
// ********** End Class ALiminalRoomGenerator Function GetStartCell ********************************

// ********** Begin Class ALiminalRoomGenerator Function HandleOneStreamedLevelLoaded **************
struct Z_Construct_UFunction_ALiminalRoomGenerator_HandleOneStreamedLevelLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALiminalRoomGenerator_HandleOneStreamedLevelLoaded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALiminalRoomGenerator, nullptr, "HandleOneStreamedLevelLoaded", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALiminalRoomGenerator_HandleOneStreamedLevelLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALiminalRoomGenerator_HandleOneStreamedLevelLoaded_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ALiminalRoomGenerator_HandleOneStreamedLevelLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALiminalRoomGenerator_HandleOneStreamedLevelLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALiminalRoomGenerator::execHandleOneStreamedLevelLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOneStreamedLevelLoaded();
	P_NATIVE_END;
}
// ********** End Class ALiminalRoomGenerator Function HandleOneStreamedLevelLoaded ****************

// ********** Begin Class ALiminalRoomGenerator Function TestDelegateSystem ************************
struct Z_Construct_UFunction_ALiminalRoomGenerator_TestDelegateSystem_Statics
{
	struct LiminalRoomGenerator_eventTestDelegateSystem_Parms
	{
		FString TestMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Liminal|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** TEST: Call this from Blueprint to test if delegates work. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TEST: Call this from Blueprint to test if delegates work." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TestMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALiminalRoomGenerator_TestDelegateSystem_Statics::NewProp_TestMessage = { "TestMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiminalRoomGenerator_eventTestDelegateSystem_Parms, TestMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestMessage_MetaData), NewProp_TestMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALiminalRoomGenerator_TestDelegateSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALiminalRoomGenerator_TestDelegateSystem_Statics::NewProp_TestMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALiminalRoomGenerator_TestDelegateSystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALiminalRoomGenerator_TestDelegateSystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALiminalRoomGenerator, nullptr, "TestDelegateSystem", Z_Construct_UFunction_ALiminalRoomGenerator_TestDelegateSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALiminalRoomGenerator_TestDelegateSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALiminalRoomGenerator_TestDelegateSystem_Statics::LiminalRoomGenerator_eventTestDelegateSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALiminalRoomGenerator_TestDelegateSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALiminalRoomGenerator_TestDelegateSystem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ALiminalRoomGenerator_TestDelegateSystem_Statics::LiminalRoomGenerator_eventTestDelegateSystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALiminalRoomGenerator_TestDelegateSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALiminalRoomGenerator_TestDelegateSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALiminalRoomGenerator::execTestDelegateSystem)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_TestMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestDelegateSystem(Z_Param_TestMessage);
	P_NATIVE_END;
}
// ********** End Class ALiminalRoomGenerator Function TestDelegateSystem **************************

// ********** Begin Class ALiminalRoomGenerator ****************************************************
void ALiminalRoomGenerator::StaticRegisterNativesALiminalRoomGenerator()
{
	UClass* Class = ALiminalRoomGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearGeneration", &ALiminalRoomGenerator::execClearGeneration },
		{ "ClearRuntime", &ALiminalRoomGenerator::execClearRuntime },
		{ "Generate", &ALiminalRoomGenerator::execGenerate },
		{ "GenerateRuntime", &ALiminalRoomGenerator::execGenerateRuntime },
		{ "GetExitCell", &ALiminalRoomGenerator::execGetExitCell },
		{ "GetStartCell", &ALiminalRoomGenerator::execGetStartCell },
		{ "HandleOneStreamedLevelLoaded", &ALiminalRoomGenerator::execHandleOneStreamedLevelLoaded },
		{ "TestDelegateSystem", &ALiminalRoomGenerator::execTestDelegateSystem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALiminalRoomGenerator;
UClass* ALiminalRoomGenerator::GetPrivateStaticClass()
{
	using TClass = ALiminalRoomGenerator;
	if (!Z_Registration_Info_UClass_ALiminalRoomGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LiminalRoomGenerator"),
			Z_Registration_Info_UClass_ALiminalRoomGenerator.InnerSingleton,
			StaticRegisterNativesALiminalRoomGenerator,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ALiminalRoomGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_ALiminalRoomGenerator_NoRegister()
{
	return ALiminalRoomGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALiminalRoomGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LiminalRoomGenerator.h" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotateStartAndExitToPath_MetaData[] = {
		{ "Category", "Liminal|Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, Start / ExitTransition / Exit rotate to face their connection direction. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, Start / ExitTransition / Exit rotate to face their connection direction." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrefabForwardAxis_MetaData[] = {
		{ "Category", "Liminal|Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Which axis your prefab considers \"forward\" when yaw is 0. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which axis your prefab considers \"forward\" when yaw is 0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileYawOffset_MetaData[] = {
		{ "Category", "Liminal|Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Global yaw offset applied to ALL spawned prefabs (use to correct prefab authoring). */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global yaw offset applied to ALL spawned prefabs (use to correct prefab authoring)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartYawOffset_MetaData[] = {
		{ "Category", "Liminal|Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Extra yaw offset applied only to the Start prefab. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extra yaw offset applied only to the Start prefab." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitYawOffset_MetaData[] = {
		{ "Category", "Liminal|Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Extra yaw offset applied only to the ExitTransition and Exit prefabs. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extra yaw offset applied only to the ExitTransition and Exit prefabs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitYawExtra_PosX_MetaData[] = {
		{ "Category", "Liminal|Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additional yaw tweak based on the exit spawn direction (cardinal). Useful for prefab authoring quirks. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional yaw tweak based on the exit spawn direction (cardinal). Useful for prefab authoring quirks." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitYawExtra_NegX_MetaData[] = {
		{ "Category", "Liminal|Rotation" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitYawExtra_PosY_MetaData[] = {
		{ "Category", "Liminal|Rotation" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitYawExtra_NegY_MetaData[] = {
		{ "Category", "Liminal|Rotation" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSizeX_MetaData[] = {
		{ "Category", "Liminal|Generation" },
		{ "ClampMin", "3" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Generation Controls ---\n" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Generation Controls ---" },
#endif
		{ "UIMin", "3" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSizeY_MetaData[] = {
		{ "Category", "Liminal|Generation" },
		{ "ClampMin", "3" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
		{ "UIMin", "3" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "Liminal|Generation" },
		{ "ClampMin", "100.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Size of one room tile in Unreal units (X/Y). */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of one room tile in Unreal units (X/Y)." },
#endif
		{ "UIMin", "100.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathLengthMin_MetaData[] = {
		{ "Category", "Liminal|Generation" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Path length will be randomly selected between Min and Max. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Path length will be randomly selected between Min and Max." },
#endif
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathLengthMax_MetaData[] = {
		{ "Category", "Liminal|Generation" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRandomSeed_MetaData[] = {
		{ "Category", "Liminal|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, Seed is ignored and a random seed is used each generation. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, Seed is ignored and a random seed is used each generation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Liminal|Generation" },
		{ "EditCondition", "!bUseRandomSeed" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateOnBeginPlay_MetaData[] = {
		{ "Category", "Liminal|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, Generate() is called on BeginPlay (runtime). */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, Generate() is called on BeginPlay (runtime)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridOriginLocal_MetaData[] = {
		{ "Category", "Liminal|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Origin offset in local space for the grid (0,0) cell. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Origin offset in local space for the grid (0,0) cell." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCenterCells_MetaData[] = {
		{ "Category", "Liminal|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, each grid cell position is treated as the CENTER of the tile.\n\x09 * This matches the most common prefab authoring pattern (tile centered at (0,0) in the prefab level).\n\x09 * If your prefab levels are authored with the tile's corner at (0,0), set this to false.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, each grid cell position is treated as the CENTER of the tile.\nThis matches the most common prefab authoring pattern (tile centered at (0,0) in the prefab level).\nIf your prefab levels are authored with the tile's corner at (0,0), set this to false." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TilePrefabOffsetLocal_MetaData[] = {
		{ "Category", "Liminal|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additional local-space offset applied to every spawned tile (room/start/exit) level instance. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional local-space offset applied to every spawned tile (room/start/exit) level instance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CeilingPrefabOffsetLocal_MetaData[] = {
		{ "Category", "Liminal|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additional local-space offset applied to every spawned ceiling level instance. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional local-space offset applied to every spawned ceiling level instance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallPrefabOffsetLocal_MetaData[] = {
		{ "Category", "Liminal|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additional local-space offset applied to every spawned wall level instance. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional local-space offset applied to every spawned wall level instance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlushStreamingAfterGenerate_MetaData[] = {
		{ "Category", "Liminal|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, we flush level streaming after generation. This can stall the editor for large layouts. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, we flush level streaming after generation. This can stall the editor for large layouts." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnExitTransitionThenExit_MetaData[] = {
		{ "Category", "Liminal|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ensures ExitTransition (lounge) is spawned/loaded before spawning Exit. Useful if your exit prefabs self-resolve based on adjacency. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ensures ExitTransition (lounge) is spawned/loaded before spawning Exit. Useful if your exit prefabs self-resolve based on adjacency." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockOnLoadExitTransition_MetaData[] = {
		{ "Category", "Liminal|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, ExitTransition will block on load (editor-safe). Avoids race where Exit loads first. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, ExitTransition will block on load (editor-safe). Avoids race where Exit loads first." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlushStreamingBetweenExitTransitionAndExit_MetaData[] = {
		{ "Category", "Liminal|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, flush streaming after ExitTransition loads and before spawning Exit. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, flush streaming after ExitTransition loads and before spawning Exit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CeilingHeight_MetaData[] = {
		{ "Category", "Liminal|Geometry" },
		{ "ClampMin", "50.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Geometry / Layout ---\n" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Geometry / Layout ---" },
#endif
		{ "UIMin", "50.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallMidZ_MetaData[] = {
		{ "Category", "Liminal|Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If your wall mesh pivot is centered, WallMidZ should be about half wall height (often CeilingHeight*0.5). */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If your wall mesh pivot is centered, WallMidZ should be about half wall height (often CeilingHeight*0.5)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorZ_MetaData[] = {
		{ "Category", "Liminal|Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Z offsets for spawned prefabs (in UU). If your prefabs already include height, you can leave these at 0. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Z offsets for spawned prefabs (in UU). If your prefabs already include height, you can leave these at 0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CeilingZ_MetaData[] = {
		{ "Category", "Liminal|Geometry" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallZ_MetaData[] = {
		{ "Category", "Liminal|Geometry" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnCeilings_MetaData[] = {
		{ "Category", "Liminal|Geometry" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnWalls_MetaData[] = {
		{ "Category", "Liminal|Geometry" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomLevel_MetaData[] = {
		{ "Category", "Liminal|Prefabs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Prefab level for a normal room tile (type 1). */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prefab level for a normal room tile (type 1)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLevel_MetaData[] = {
		{ "Category", "Liminal|Prefabs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Prefab level for the starting tile (still a type 1, but special). If unset, RoomLevel is used. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prefab level for the starting tile (still a type 1, but special). If unset, RoomLevel is used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitTransitionLevel_MetaData[] = {
		{ "Category", "Liminal|Prefabs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Prefab level for the exit transition tile (type 2). If unset, RoomLevel is used. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prefab level for the exit transition tile (type 2). If unset, RoomLevel is used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitLevel_MetaData[] = {
		{ "Category", "Liminal|Prefabs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Prefab level for the exit tile (type 3). If unset, RoomLevel is used. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prefab level for the exit tile (type 3). If unset, RoomLevel is used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallLevel_MetaData[] = {
		{ "Category", "Liminal|Prefabs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Prefab level for a single wall segment (placed on open edges). */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prefab level for a single wall segment (placed on open edges)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CeilingLevel_MetaData[] = {
		{ "Category", "Liminal|Prefabs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Prefab level for a ceiling segment (placed above each generated tile). */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prefab level for a ceiling segment (placed above each generated tile)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationStarted_MetaData[] = {
		{ "Category", "Liminal|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Broadcast when generation starts. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast when generation starts." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstRoomSpawned_MetaData[] = {
		{ "Category", "Liminal|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Broadcast when the first room is spawned. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast when the first room is spawned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationStopped_MetaData[] = {
		{ "Category", "Liminal|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Broadcast when generation stops (cleared). */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast when generation stops (cleared)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationComplete_MetaData[] = {
		{ "Category", "Liminal|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Broadcast after all spawned Level Instances for the most recent GenerateRuntime() call are loaded & visible. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast after all spawned Level Instances for the most recent GenerateRuntime() call are loaded & visible." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestDelegate_MetaData[] = {
		{ "Category", "Liminal|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** TEST: Simple test delegate to verify delegate system works. */" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TEST: Simple test delegate to verify delegate system works." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Debug_TotalSpawnedLevels_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Debug ---\n" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Debug ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Debug_LoadedLevels_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugLogStreamingStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPendingEditorGenerate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Editor-safe deferred generate/clear (LevelInstanceSubsystem is not safe to mutate directly from Details panel click).\n" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editor-safe deferred generate/clear (LevelInstanceSubsystem is not safe to mutate directly from Details panel click)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPendingEditorClear_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedPrefabs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spawned streaming levels (prefab instances)\n" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawned streaming levels (prefab instances)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[] = {
		{ "Category", "Liminal|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid data\n" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartCell_MetaData[] = {
		{ "Category", "Liminal|Debug" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitTransitionCell_MetaData[] = {
		{ "Category", "Liminal|Debug" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitCell_MetaData[] = {
		{ "Category", "Liminal|Debug" },
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFacingDir_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Facing directions (grid) computed during generation for rotation.\n" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Facing directions (grid) computed during generation for rotation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitFacingDir_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingStreamLoads_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Streaming completion tracking ---\n" },
#endif
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Streaming completion tracking ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerationCompleteBroadcasted_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiminalRoomGenerator.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bRotateStartAndExitToPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateStartAndExitToPath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrefabForwardAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrefabForwardAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileYawOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartYawOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExitYawOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExitYawExtra_PosX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExitYawExtra_NegX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExitYawExtra_PosY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExitYawExtra_NegY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridSizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridSizeY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PathLengthMin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PathLengthMax;
	static void NewProp_bUseRandomSeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRandomSeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static void NewProp_bGenerateOnBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateOnBeginPlay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridOriginLocal;
	static void NewProp_bCenterCells_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterCells;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TilePrefabOffsetLocal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CeilingPrefabOffsetLocal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WallPrefabOffsetLocal;
	static void NewProp_bFlushStreamingAfterGenerate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlushStreamingAfterGenerate;
	static void NewProp_bSpawnExitTransitionThenExit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnExitTransitionThenExit;
	static void NewProp_bBlockOnLoadExitTransition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockOnLoadExitTransition;
	static void NewProp_bFlushStreamingBetweenExitTransitionAndExit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlushStreamingBetweenExitTransitionAndExit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CeilingHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallMidZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CeilingZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallZ;
	static void NewProp_bSpawnCeilings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnCeilings;
	static void NewProp_bSpawnWalls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnWalls;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RoomLevel;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StartLevel;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ExitTransitionLevel;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ExitLevel;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WallLevel;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CeilingLevel;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GenerationStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FirstRoomSpawned;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GenerationStopped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GenerationComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_TestDelegate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Debug_TotalSpawnedLevels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Debug_LoadedLevels;
	static void NewProp_bDebugLogStreamingStatus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugLogStreamingStatus;
	static void NewProp_bPendingEditorGenerate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingEditorGenerate;
	static void NewProp_bPendingEditorClear_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingEditorClear;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedPrefabs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedPrefabs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Grid_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Grid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartCell;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExitTransitionCell;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExitCell;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartFacingDir;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExitFacingDir;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PendingStreamLoads;
	static void NewProp_bGenerationCompleteBroadcasted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerationCompleteBroadcasted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALiminalRoomGenerator_ClearGeneration, "ClearGeneration" }, // 2803250825
		{ &Z_Construct_UFunction_ALiminalRoomGenerator_ClearRuntime, "ClearRuntime" }, // 1395085869
		{ &Z_Construct_UFunction_ALiminalRoomGenerator_Generate, "Generate" }, // 2104525424
		{ &Z_Construct_UFunction_ALiminalRoomGenerator_GenerateRuntime, "GenerateRuntime" }, // 623446921
		{ &Z_Construct_UFunction_ALiminalRoomGenerator_GetExitCell, "GetExitCell" }, // 207072676
		{ &Z_Construct_UFunction_ALiminalRoomGenerator_GetStartCell, "GetStartCell" }, // 1919035914
		{ &Z_Construct_UFunction_ALiminalRoomGenerator_HandleOneStreamedLevelLoaded, "HandleOneStreamedLevelLoaded" }, // 1417676048
		{ &Z_Construct_UFunction_ALiminalRoomGenerator_TestDelegateSystem, "TestDelegateSystem" }, // 640197762
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALiminalRoomGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bRotateStartAndExitToPath_SetBit(void* Obj)
{
	((ALiminalRoomGenerator*)Obj)->bRotateStartAndExitToPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bRotateStartAndExitToPath = { "bRotateStartAndExitToPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALiminalRoomGenerator), &Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bRotateStartAndExitToPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotateStartAndExitToPath_MetaData), NewProp_bRotateStartAndExitToPath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_PrefabForwardAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_PrefabForwardAxis = { "PrefabForwardAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, PrefabForwardAxis), Z_Construct_UEnum_LiminalRoomGen_ELiminalPrefabForwardAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrefabForwardAxis_MetaData), NewProp_PrefabForwardAxis_MetaData) }; // 1467246545
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_TileYawOffset = { "TileYawOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, TileYawOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileYawOffset_MetaData), NewProp_TileYawOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_StartYawOffset = { "StartYawOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, StartYawOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartYawOffset_MetaData), NewProp_StartYawOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_ExitYawOffset = { "ExitYawOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, ExitYawOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitYawOffset_MetaData), NewProp_ExitYawOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_ExitYawExtra_PosX = { "ExitYawExtra_PosX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, ExitYawExtra_PosX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitYawExtra_PosX_MetaData), NewProp_ExitYawExtra_PosX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_ExitYawExtra_NegX = { "ExitYawExtra_NegX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, ExitYawExtra_NegX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitYawExtra_NegX_MetaData), NewProp_ExitYawExtra_NegX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_ExitYawExtra_PosY = { "ExitYawExtra_PosY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, ExitYawExtra_PosY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitYawExtra_PosY_MetaData), NewProp_ExitYawExtra_PosY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_ExitYawExtra_NegY = { "ExitYawExtra_NegY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, ExitYawExtra_NegY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitYawExtra_NegY_MetaData), NewProp_ExitYawExtra_NegY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_GridSizeX = { "GridSizeX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, GridSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSizeX_MetaData), NewProp_GridSizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_GridSizeY = { "GridSizeY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, GridSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSizeY_MetaData), NewProp_GridSizeY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_PathLengthMin = { "PathLengthMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, PathLengthMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathLengthMin_MetaData), NewProp_PathLengthMin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_PathLengthMax = { "PathLengthMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, PathLengthMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathLengthMax_MetaData), NewProp_PathLengthMax_MetaData) };
void Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bUseRandomSeed_SetBit(void* Obj)
{
	((ALiminalRoomGenerator*)Obj)->bUseRandomSeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bUseRandomSeed = { "bUseRandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALiminalRoomGenerator), &Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bUseRandomSeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRandomSeed_MetaData), NewProp_bUseRandomSeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
void Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bGenerateOnBeginPlay_SetBit(void* Obj)
{
	((ALiminalRoomGenerator*)Obj)->bGenerateOnBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bGenerateOnBeginPlay = { "bGenerateOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALiminalRoomGenerator), &Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bGenerateOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateOnBeginPlay_MetaData), NewProp_bGenerateOnBeginPlay_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_GridOriginLocal = { "GridOriginLocal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, GridOriginLocal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridOriginLocal_MetaData), NewProp_GridOriginLocal_MetaData) };
void Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bCenterCells_SetBit(void* Obj)
{
	((ALiminalRoomGenerator*)Obj)->bCenterCells = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bCenterCells = { "bCenterCells", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALiminalRoomGenerator), &Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bCenterCells_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCenterCells_MetaData), NewProp_bCenterCells_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_TilePrefabOffsetLocal = { "TilePrefabOffsetLocal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, TilePrefabOffsetLocal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TilePrefabOffsetLocal_MetaData), NewProp_TilePrefabOffsetLocal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_CeilingPrefabOffsetLocal = { "CeilingPrefabOffsetLocal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, CeilingPrefabOffsetLocal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CeilingPrefabOffsetLocal_MetaData), NewProp_CeilingPrefabOffsetLocal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_WallPrefabOffsetLocal = { "WallPrefabOffsetLocal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, WallPrefabOffsetLocal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallPrefabOffsetLocal_MetaData), NewProp_WallPrefabOffsetLocal_MetaData) };
void Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bFlushStreamingAfterGenerate_SetBit(void* Obj)
{
	((ALiminalRoomGenerator*)Obj)->bFlushStreamingAfterGenerate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bFlushStreamingAfterGenerate = { "bFlushStreamingAfterGenerate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALiminalRoomGenerator), &Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bFlushStreamingAfterGenerate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlushStreamingAfterGenerate_MetaData), NewProp_bFlushStreamingAfterGenerate_MetaData) };
void Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bSpawnExitTransitionThenExit_SetBit(void* Obj)
{
	((ALiminalRoomGenerator*)Obj)->bSpawnExitTransitionThenExit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bSpawnExitTransitionThenExit = { "bSpawnExitTransitionThenExit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALiminalRoomGenerator), &Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bSpawnExitTransitionThenExit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpawnExitTransitionThenExit_MetaData), NewProp_bSpawnExitTransitionThenExit_MetaData) };
void Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bBlockOnLoadExitTransition_SetBit(void* Obj)
{
	((ALiminalRoomGenerator*)Obj)->bBlockOnLoadExitTransition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bBlockOnLoadExitTransition = { "bBlockOnLoadExitTransition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALiminalRoomGenerator), &Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bBlockOnLoadExitTransition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockOnLoadExitTransition_MetaData), NewProp_bBlockOnLoadExitTransition_MetaData) };
void Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bFlushStreamingBetweenExitTransitionAndExit_SetBit(void* Obj)
{
	((ALiminalRoomGenerator*)Obj)->bFlushStreamingBetweenExitTransitionAndExit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bFlushStreamingBetweenExitTransitionAndExit = { "bFlushStreamingBetweenExitTransitionAndExit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALiminalRoomGenerator), &Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bFlushStreamingBetweenExitTransitionAndExit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlushStreamingBetweenExitTransitionAndExit_MetaData), NewProp_bFlushStreamingBetweenExitTransitionAndExit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_CeilingHeight = { "CeilingHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, CeilingHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CeilingHeight_MetaData), NewProp_CeilingHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_WallMidZ = { "WallMidZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, WallMidZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallMidZ_MetaData), NewProp_WallMidZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_FloorZ = { "FloorZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, FloorZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorZ_MetaData), NewProp_FloorZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_CeilingZ = { "CeilingZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, CeilingZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CeilingZ_MetaData), NewProp_CeilingZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_WallZ = { "WallZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, WallZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallZ_MetaData), NewProp_WallZ_MetaData) };
void Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bSpawnCeilings_SetBit(void* Obj)
{
	((ALiminalRoomGenerator*)Obj)->bSpawnCeilings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bSpawnCeilings = { "bSpawnCeilings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALiminalRoomGenerator), &Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bSpawnCeilings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpawnCeilings_MetaData), NewProp_bSpawnCeilings_MetaData) };
void Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bSpawnWalls_SetBit(void* Obj)
{
	((ALiminalRoomGenerator*)Obj)->bSpawnWalls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bSpawnWalls = { "bSpawnWalls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALiminalRoomGenerator), &Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bSpawnWalls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpawnWalls_MetaData), NewProp_bSpawnWalls_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_RoomLevel = { "RoomLevel", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, RoomLevel), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomLevel_MetaData), NewProp_RoomLevel_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_StartLevel = { "StartLevel", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, StartLevel), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLevel_MetaData), NewProp_StartLevel_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_ExitTransitionLevel = { "ExitTransitionLevel", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, ExitTransitionLevel), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitTransitionLevel_MetaData), NewProp_ExitTransitionLevel_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_ExitLevel = { "ExitLevel", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, ExitLevel), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitLevel_MetaData), NewProp_ExitLevel_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_WallLevel = { "WallLevel", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, WallLevel), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallLevel_MetaData), NewProp_WallLevel_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_CeilingLevel = { "CeilingLevel", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, CeilingLevel), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CeilingLevel_MetaData), NewProp_CeilingLevel_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_GenerationStarted = { "GenerationStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, GenerationStarted), Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationStarted_MetaData), NewProp_GenerationStarted_MetaData) }; // 3193739797
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_FirstRoomSpawned = { "FirstRoomSpawned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, FirstRoomSpawned), Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalFirstRoomSpawned__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstRoomSpawned_MetaData), NewProp_FirstRoomSpawned_MetaData) }; // 2331266269
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_GenerationStopped = { "GenerationStopped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, GenerationStopped), Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationStopped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationStopped_MetaData), NewProp_GenerationStopped_MetaData) }; // 1490464053
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_GenerationComplete = { "GenerationComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, GenerationComplete), Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationComplete_MetaData), NewProp_GenerationComplete_MetaData) }; // 1899875562
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_TestDelegate = { "TestDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, TestDelegate), Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalTestDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestDelegate_MetaData), NewProp_TestDelegate_MetaData) }; // 2920502733
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_Debug_TotalSpawnedLevels = { "Debug_TotalSpawnedLevels", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, Debug_TotalSpawnedLevels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Debug_TotalSpawnedLevels_MetaData), NewProp_Debug_TotalSpawnedLevels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_Debug_LoadedLevels = { "Debug_LoadedLevels", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, Debug_LoadedLevels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Debug_LoadedLevels_MetaData), NewProp_Debug_LoadedLevels_MetaData) };
void Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bDebugLogStreamingStatus_SetBit(void* Obj)
{
	((ALiminalRoomGenerator*)Obj)->bDebugLogStreamingStatus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bDebugLogStreamingStatus = { "bDebugLogStreamingStatus", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALiminalRoomGenerator), &Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bDebugLogStreamingStatus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugLogStreamingStatus_MetaData), NewProp_bDebugLogStreamingStatus_MetaData) };
void Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bPendingEditorGenerate_SetBit(void* Obj)
{
	((ALiminalRoomGenerator*)Obj)->bPendingEditorGenerate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bPendingEditorGenerate = { "bPendingEditorGenerate", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALiminalRoomGenerator), &Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bPendingEditorGenerate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPendingEditorGenerate_MetaData), NewProp_bPendingEditorGenerate_MetaData) };
void Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bPendingEditorClear_SetBit(void* Obj)
{
	((ALiminalRoomGenerator*)Obj)->bPendingEditorClear = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bPendingEditorClear = { "bPendingEditorClear", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALiminalRoomGenerator), &Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bPendingEditorClear_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPendingEditorClear_MetaData), NewProp_bPendingEditorClear_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_SpawnedPrefabs_Inner = { "SpawnedPrefabs", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULevelStreamingDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_SpawnedPrefabs = { "SpawnedPrefabs", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, SpawnedPrefabs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedPrefabs_MetaData), NewProp_SpawnedPrefabs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_Grid_Inner = { "Grid", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLiminalCell, METADATA_PARAMS(0, nullptr) }; // 81449611
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, Grid), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grid_MetaData), NewProp_Grid_MetaData) }; // 81449611
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_StartCell = { "StartCell", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, StartCell), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartCell_MetaData), NewProp_StartCell_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_ExitTransitionCell = { "ExitTransitionCell", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, ExitTransitionCell), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitTransitionCell_MetaData), NewProp_ExitTransitionCell_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_ExitCell = { "ExitCell", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, ExitCell), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitCell_MetaData), NewProp_ExitCell_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_StartFacingDir = { "StartFacingDir", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, StartFacingDir), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFacingDir_MetaData), NewProp_StartFacingDir_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_ExitFacingDir = { "ExitFacingDir", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, ExitFacingDir), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitFacingDir_MetaData), NewProp_ExitFacingDir_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_PendingStreamLoads = { "PendingStreamLoads", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALiminalRoomGenerator, PendingStreamLoads), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingStreamLoads_MetaData), NewProp_PendingStreamLoads_MetaData) };
void Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bGenerationCompleteBroadcasted_SetBit(void* Obj)
{
	((ALiminalRoomGenerator*)Obj)->bGenerationCompleteBroadcasted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bGenerationCompleteBroadcasted = { "bGenerationCompleteBroadcasted", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALiminalRoomGenerator), &Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bGenerationCompleteBroadcasted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerationCompleteBroadcasted_MetaData), NewProp_bGenerationCompleteBroadcasted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALiminalRoomGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bRotateStartAndExitToPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_PrefabForwardAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_PrefabForwardAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_TileYawOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_StartYawOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_ExitYawOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_ExitYawExtra_PosX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_ExitYawExtra_NegX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_ExitYawExtra_PosY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_ExitYawExtra_NegY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_GridSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_GridSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_PathLengthMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_PathLengthMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bUseRandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bGenerateOnBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_GridOriginLocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bCenterCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_TilePrefabOffsetLocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_CeilingPrefabOffsetLocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_WallPrefabOffsetLocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bFlushStreamingAfterGenerate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bSpawnExitTransitionThenExit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bBlockOnLoadExitTransition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bFlushStreamingBetweenExitTransitionAndExit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_CeilingHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_WallMidZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_FloorZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_CeilingZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_WallZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bSpawnCeilings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bSpawnWalls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_RoomLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_StartLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_ExitTransitionLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_ExitLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_WallLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_CeilingLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_GenerationStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_FirstRoomSpawned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_GenerationStopped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_GenerationComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_TestDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_Debug_TotalSpawnedLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_Debug_LoadedLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bDebugLogStreamingStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bPendingEditorGenerate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bPendingEditorClear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_SpawnedPrefabs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_SpawnedPrefabs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_Grid_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_Grid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_StartCell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_ExitTransitionCell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_ExitCell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_StartFacingDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_ExitFacingDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_PendingStreamLoads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiminalRoomGenerator_Statics::NewProp_bGenerationCompleteBroadcasted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALiminalRoomGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALiminalRoomGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LiminalRoomGen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALiminalRoomGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALiminalRoomGenerator_Statics::ClassParams = {
	&ALiminalRoomGenerator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALiminalRoomGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALiminalRoomGenerator_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALiminalRoomGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_ALiminalRoomGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALiminalRoomGenerator()
{
	if (!Z_Registration_Info_UClass_ALiminalRoomGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALiminalRoomGenerator.OuterSingleton, Z_Construct_UClass_ALiminalRoomGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALiminalRoomGenerator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALiminalRoomGenerator);
ALiminalRoomGenerator::~ALiminalRoomGenerator() {}
// ********** End Class ALiminalRoomGenerator ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Liminal_Plugins_LiminalRoomGen_Source_LiminalRoomGen_Public_LiminalRoomGenerator_h__Script_LiminalRoomGen_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELiminalCellType_StaticEnum, TEXT("ELiminalCellType"), &Z_Registration_Info_UEnum_ELiminalCellType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1645101277U) },
		{ ELiminalPrefabForwardAxis_StaticEnum, TEXT("ELiminalPrefabForwardAxis"), &Z_Registration_Info_UEnum_ELiminalPrefabForwardAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1467246545U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiminalCell::StaticStruct, Z_Construct_UScriptStruct_FLiminalCell_Statics::NewStructOps, TEXT("LiminalCell"), &Z_Registration_Info_UScriptStruct_FLiminalCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiminalCell), 81449611U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALiminalRoomGenerator, ALiminalRoomGenerator::StaticClass, TEXT("ALiminalRoomGenerator"), &Z_Registration_Info_UClass_ALiminalRoomGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALiminalRoomGenerator), 3234891917U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Liminal_Plugins_LiminalRoomGen_Source_LiminalRoomGen_Public_LiminalRoomGenerator_h__Script_LiminalRoomGen_995739867(TEXT("/Script/LiminalRoomGen"),
	Z_CompiledInDeferFile_FID_Liminal_Plugins_LiminalRoomGen_Source_LiminalRoomGen_Public_LiminalRoomGenerator_h__Script_LiminalRoomGen_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Liminal_Plugins_LiminalRoomGen_Source_LiminalRoomGen_Public_LiminalRoomGenerator_h__Script_LiminalRoomGen_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Liminal_Plugins_LiminalRoomGen_Source_LiminalRoomGen_Public_LiminalRoomGenerator_h__Script_LiminalRoomGen_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Liminal_Plugins_LiminalRoomGen_Source_LiminalRoomGen_Public_LiminalRoomGenerator_h__Script_LiminalRoomGen_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Liminal_Plugins_LiminalRoomGen_Source_LiminalRoomGen_Public_LiminalRoomGenerator_h__Script_LiminalRoomGen_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Liminal_Plugins_LiminalRoomGen_Source_LiminalRoomGen_Public_LiminalRoomGenerator_h__Script_LiminalRoomGen_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
