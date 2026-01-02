// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiminalRoomGen_init() {}
	LIMINALROOMGEN_API UFunction* Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LiminalRoomGen;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LiminalRoomGen()
	{
		if (!Z_Registration_Info_UPackage__Script_LiminalRoomGen.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_LiminalRoomGen_LiminalGenerationComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LiminalRoomGen",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x17D3275E,
				0x09ECF93D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LiminalRoomGen.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LiminalRoomGen.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LiminalRoomGen(Z_Construct_UPackage__Script_LiminalRoomGen, TEXT("/Script/LiminalRoomGen"), Z_Registration_Info_UPackage__Script_LiminalRoomGen, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x17D3275E, 0x09ECF93D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
