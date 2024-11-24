// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LogitechBPLibrary.h"
#include "ILogitechWheelPlugin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLogitechBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LOGITECHWHEELPLUGIN_API UClass* Z_Construct_UClass_ULogitechBPLibrary();
	LOGITECHWHEELPLUGIN_API UClass* Z_Construct_UClass_ULogitechBPLibrary_NoRegister();
	LOGITECHWHEELPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceState();
	UPackage* Z_Construct_UPackage__Script_LogitechWheelPlugin();
// End Cross Module References
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelGetState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDeviceState*)Z_Param__Result=ULogitechBPLibrary::WheelGetState(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		ULogitechBPLibrary::WheelShutdown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlayLeds)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_currentRPM);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rpmFirstLedTurnsOn);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rpmRedLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlayLeds(Z_Param_index,Z_Param_currentRPM,Z_Param_rpmFirstLedTurnsOn,Z_Param_rpmRedLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelGetOperatingRange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_range);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelGetOperatingRange(Z_Param_index,Z_Param_Out_range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelSetOperatingRange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_range);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelSetOperatingRange(Z_Param_index,Z_Param_range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelGetShifterMode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ULogitechBPLibrary::WheelGetShifterMode(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelStopSoftstopForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelStopSoftstopForce(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlaySoftstopForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_usableRangePercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlaySoftstopForce(Z_Param_index,Z_Param_usableRangePercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelStopCarAirborne)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelStopCarAirborne(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlayCarAirborne)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlayCarAirborne(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelStopSurfaceEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelStopSurfaceEffect(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlaySurfaceEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_type);
		P_GET_PROPERTY(FIntProperty,Z_Param_magnitudePercentage);
		P_GET_PROPERTY(FIntProperty,Z_Param_period);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlaySurfaceEffect(Z_Param_index,Z_Param_type,Z_Param_magnitudePercentage,Z_Param_period);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelStopSlipperyRoadEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelStopSlipperyRoadEffect(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlaySlipperyRoadEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_magnitudePercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlaySlipperyRoadEffect(Z_Param_index,Z_Param_magnitudePercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelStopBumpyRoadEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelStopBumpyRoadEffect(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlayBumpyRoadEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_magnitudePercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlayBumpyRoadEffect(Z_Param_index,Z_Param_magnitudePercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelStopDirtRoadEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelStopDirtRoadEffect(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlayDirtRoadEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_magnitudePercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlayDirtRoadEffect(Z_Param_index,Z_Param_magnitudePercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlayFrontalCollisionForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_magnitudePercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlayFrontalCollisionForce(Z_Param_index,Z_Param_magnitudePercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlaySideCollisionForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_magnitudePercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlaySideCollisionForce(Z_Param_index,Z_Param_magnitudePercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelStopDamperForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelStopDamperForce(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlayDamperForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_coefficientPercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlayDamperForce(Z_Param_index,Z_Param_coefficientPercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelStopConstantForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelStopConstantForce(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlayConstantForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_magnitudePercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlayConstantForce(Z_Param_index,Z_Param_magnitudePercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelStopSpringForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelStopSpringForce(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlaySpringForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_offsetPercentage);
		P_GET_PROPERTY(FIntProperty,Z_Param_saturationPercentage);
		P_GET_PROPERTY(FIntProperty,Z_Param_coefficientPercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlaySpringForce(Z_Param_index,Z_Param_offsetPercentage,Z_Param_saturationPercentage,Z_Param_coefficientPercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelIsPlaying)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_forceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelIsPlaying(Z_Param_index,Z_Param_forceType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelHasForceFeedback)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelHasForceFeedback(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelGetNonLinearValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_inputValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ULogitechBPLibrary::WheelGetNonLinearValue(Z_Param_index,Z_Param_inputValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelGenerateNonLinearValues)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_nonLinCoeff);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelGenerateNonLinearValues(Z_Param_index,Z_Param_nonLinCoeff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelButtonIsPressed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonNbr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelButtonIsPressed(Z_Param_index,Z_Param_buttonNbr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelButtonReleased)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonNbr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelButtonReleased(Z_Param_index,Z_Param_buttonNbr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelButtonTriggered)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonNbr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelButtonTriggered(Z_Param_index,Z_Param_buttonNbr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelIsModelConnected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_modelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelIsModelConnected(Z_Param_index,Z_Param_modelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelIsManufacturerConnected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_manufacturerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelIsManufacturerConnected(Z_Param_index,Z_Param_manufacturerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelIsDeviceConnected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelIsDeviceConnected(Z_Param_index,Z_Param_deviceType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelIsConnected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelIsConnected(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelInit)
	{
		P_GET_UBOOL(Z_Param_ignoreXInputControllers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelInit(Z_Param_ignoreXInputControllers);
		P_NATIVE_END;
	}
	void ULogitechBPLibrary::StaticRegisterNativesULogitechBPLibrary()
	{
		UClass* Class = ULogitechBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WheelButtonIsPressed", &ULogitechBPLibrary::execWheelButtonIsPressed },
			{ "WheelButtonReleased", &ULogitechBPLibrary::execWheelButtonReleased },
			{ "WheelButtonTriggered", &ULogitechBPLibrary::execWheelButtonTriggered },
			{ "WheelGenerateNonLinearValues", &ULogitechBPLibrary::execWheelGenerateNonLinearValues },
			{ "WheelGetNonLinearValue", &ULogitechBPLibrary::execWheelGetNonLinearValue },
			{ "WheelGetOperatingRange", &ULogitechBPLibrary::execWheelGetOperatingRange },
			{ "WheelGetShifterMode", &ULogitechBPLibrary::execWheelGetShifterMode },
			{ "WheelGetState", &ULogitechBPLibrary::execWheelGetState },
			{ "WheelHasForceFeedback", &ULogitechBPLibrary::execWheelHasForceFeedback },
			{ "WheelInit", &ULogitechBPLibrary::execWheelInit },
			{ "WheelIsConnected", &ULogitechBPLibrary::execWheelIsConnected },
			{ "WheelIsDeviceConnected", &ULogitechBPLibrary::execWheelIsDeviceConnected },
			{ "WheelIsManufacturerConnected", &ULogitechBPLibrary::execWheelIsManufacturerConnected },
			{ "WheelIsModelConnected", &ULogitechBPLibrary::execWheelIsModelConnected },
			{ "WheelIsPlaying", &ULogitechBPLibrary::execWheelIsPlaying },
			{ "WheelPlayBumpyRoadEffect", &ULogitechBPLibrary::execWheelPlayBumpyRoadEffect },
			{ "WheelPlayCarAirborne", &ULogitechBPLibrary::execWheelPlayCarAirborne },
			{ "WheelPlayConstantForce", &ULogitechBPLibrary::execWheelPlayConstantForce },
			{ "WheelPlayDamperForce", &ULogitechBPLibrary::execWheelPlayDamperForce },
			{ "WheelPlayDirtRoadEffect", &ULogitechBPLibrary::execWheelPlayDirtRoadEffect },
			{ "WheelPlayFrontalCollisionForce", &ULogitechBPLibrary::execWheelPlayFrontalCollisionForce },
			{ "WheelPlayLeds", &ULogitechBPLibrary::execWheelPlayLeds },
			{ "WheelPlaySideCollisionForce", &ULogitechBPLibrary::execWheelPlaySideCollisionForce },
			{ "WheelPlaySlipperyRoadEffect", &ULogitechBPLibrary::execWheelPlaySlipperyRoadEffect },
			{ "WheelPlaySoftstopForce", &ULogitechBPLibrary::execWheelPlaySoftstopForce },
			{ "WheelPlaySpringForce", &ULogitechBPLibrary::execWheelPlaySpringForce },
			{ "WheelPlaySurfaceEffect", &ULogitechBPLibrary::execWheelPlaySurfaceEffect },
			{ "WheelSetOperatingRange", &ULogitechBPLibrary::execWheelSetOperatingRange },
			{ "WheelShutdown", &ULogitechBPLibrary::execWheelShutdown },
			{ "WheelStopBumpyRoadEffect", &ULogitechBPLibrary::execWheelStopBumpyRoadEffect },
			{ "WheelStopCarAirborne", &ULogitechBPLibrary::execWheelStopCarAirborne },
			{ "WheelStopConstantForce", &ULogitechBPLibrary::execWheelStopConstantForce },
			{ "WheelStopDamperForce", &ULogitechBPLibrary::execWheelStopDamperForce },
			{ "WheelStopDirtRoadEffect", &ULogitechBPLibrary::execWheelStopDirtRoadEffect },
			{ "WheelStopSlipperyRoadEffect", &ULogitechBPLibrary::execWheelStopSlipperyRoadEffect },
			{ "WheelStopSoftstopForce", &ULogitechBPLibrary::execWheelStopSoftstopForce },
			{ "WheelStopSpringForce", &ULogitechBPLibrary::execWheelStopSpringForce },
			{ "WheelStopSurfaceEffect", &ULogitechBPLibrary::execWheelStopSurfaceEffect },
			{ "WheelUpdate", &ULogitechBPLibrary::execWheelUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics
	{
		struct LogitechBPLibrary_eventWheelButtonIsPressed_Parms
		{
			int32 index;
			int32 buttonNbr;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buttonNbr_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_buttonNbr;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelButtonIsPressed_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_buttonNbr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_buttonNbr = { "buttonNbr", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelButtonIsPressed_Parms, buttonNbr), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_buttonNbr_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_buttonNbr_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelButtonIsPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelButtonIsPressed_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_buttonNbr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//Checks if on the device connected at index is currently being pressed the button specified\n" },
		{ "DisplayName", "Is Wheel Button Pressed" },
		{ "Keywords", "LogitechBPLibrary wheel steering button pressed" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Checks if on the device connected at index is currently being pressed the button specified" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelButtonIsPressed", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::LogitechBPLibrary_eventWheelButtonIsPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::LogitechBPLibrary_eventWheelButtonIsPressed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics
	{
		struct LogitechBPLibrary_eventWheelButtonReleased_Parms
		{
			int32 index;
			int32 buttonNbr;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buttonNbr_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_buttonNbr;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelButtonReleased_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_buttonNbr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_buttonNbr = { "buttonNbr", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelButtonReleased_Parms, buttonNbr), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_buttonNbr_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_buttonNbr_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelButtonReleased_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelButtonReleased_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_buttonNbr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//Checks if on the device connected at index has been released the button specified\n" },
		{ "DisplayName", "Is Wheel Button Released" },
		{ "Keywords", "LogitechBPLibrary wheel steering button released" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Checks if on the device connected at index has been released the button specified" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelButtonReleased", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::LogitechBPLibrary_eventWheelButtonReleased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::LogitechBPLibrary_eventWheelButtonReleased_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics
	{
		struct LogitechBPLibrary_eventWheelButtonTriggered_Parms
		{
			int32 index;
			int32 buttonNbr;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buttonNbr_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_buttonNbr;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelButtonTriggered_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_buttonNbr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_buttonNbr = { "buttonNbr", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelButtonTriggered_Parms, buttonNbr), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_buttonNbr_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_buttonNbr_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelButtonTriggered_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelButtonTriggered_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_buttonNbr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//Checks if the device connected at index is currently triggering the button specified\n" },
		{ "DisplayName", "Is Wheel Button Triggered" },
		{ "Keywords", "LogitechBPLibrary wheel steering button triggered" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Checks if the device connected at index is currently triggering the button specified" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelButtonTriggered", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::LogitechBPLibrary_eventWheelButtonTriggered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::LogitechBPLibrary_eventWheelButtonTriggered_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics
	{
		struct LogitechBPLibrary_eventWheelGenerateNonLinearValues_Parms
		{
			int32 index;
			int32 nonLinCoeff;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nonLinCoeff_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_nonLinCoeff;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGenerateNonLinearValues_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_nonLinCoeff_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_nonLinCoeff = { "nonLinCoeff", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGenerateNonLinearValues_Parms, nonLinCoeff), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_nonLinCoeff_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_nonLinCoeff_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelGenerateNonLinearValues_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelGenerateNonLinearValues_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_nonLinCoeff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//The WheelGenerateNonLinearValues () function generate non-linear values for the game controller's axis.\n" },
		{ "DisplayName", "Wheel Generate Non Linear Values" },
		{ "Keywords", "LogitechBPLibrary wheel steering" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "The WheelGenerateNonLinearValues () function generate non-linear values for the game controller's axis." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelGenerateNonLinearValues", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::LogitechBPLibrary_eventWheelGenerateNonLinearValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::LogitechBPLibrary_eventWheelGenerateNonLinearValues_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics
	{
		struct LogitechBPLibrary_eventWheelGetNonLinearValue_Parms
		{
			int32 index;
			int32 inputValue;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inputValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_inputValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGetNonLinearValue_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_inputValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_inputValue = { "inputValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGetNonLinearValue_Parms, inputValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_inputValue_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_inputValue_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGetNonLinearValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_inputValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//The WheelGetNonLinearValue () function returns a non-linear value from a table previously generated. This can be  used for the response of a steering wheel.\n" },
		{ "DisplayName", "Wheel Get Non Linear Values" },
		{ "Keywords", "LogitechBPLibrary wheel steering" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "The WheelGetNonLinearValue () function returns a non-linear value from a table previously generated. This can be  used for the response of a steering wheel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelGetNonLinearValue", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::LogitechBPLibrary_eventWheelGetNonLinearValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::LogitechBPLibrary_eventWheelGetNonLinearValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics
	{
		struct LogitechBPLibrary_eventWheelGetOperatingRange_Parms
		{
			int32 index;
			int32 range;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_range;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGetOperatingRange_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_index_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGetOperatingRange_Parms, range), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelGetOperatingRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelGetOperatingRange_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Fills the range parameter of the controller with the current controller operating range\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09range : integer to receive the current operating range \n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Get Wheel Operating Range" },
		{ "Keywords", "LogitechBPLibrary wheel steering operating range" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Fills the range parameter of the controller with the current controller operating range\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       range : integer to receive the current operating range\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelGetOperatingRange", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::LogitechBPLibrary_eventWheelGetOperatingRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::LogitechBPLibrary_eventWheelGetOperatingRange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics
	{
		struct LogitechBPLibrary_eventWheelGetShifterMode_Parms
		{
			int32 index;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGetShifterMode_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::NewProp_index_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGetShifterMode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Gets current shifter mode (gated or sequential) \n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09Return Value\n\x09\x09""1 if shifter is gated,  0 if shifter is sequential,  -1 if unknown \n\x09*/" },
		{ "DisplayName", "Get Wheel Shifter Mode" },
		{ "Keywords", "LogitechBPLibrary wheel steering shift mode" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Gets current shifter mode (gated or sequential)\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       Return Value\n               1 if shifter is gated,  0 if shifter is sequential,  -1 if unknown" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelGetShifterMode", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::LogitechBPLibrary_eventWheelGetShifterMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::LogitechBPLibrary_eventWheelGetShifterMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics
	{
		struct LogitechBPLibrary_eventWheelGetState_Parms
		{
			int32 index;
			FDeviceState ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGetState_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::NewProp_index_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGetState_Parms, ReturnValue), Z_Construct_UScriptStruct_FDeviceState, METADATA_PARAMS(0, nullptr) }; // 1249224283
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//Returns the state of the controller\n" },
		{ "DisplayName", "Get Wheel State" },
		{ "Keywords", "LogitechBPLibrary wheel steering state" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Returns the state of the controller" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelGetState", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::LogitechBPLibrary_eventWheelGetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::LogitechBPLibrary_eventWheelGetState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics
	{
		struct LogitechBPLibrary_eventWheelHasForceFeedback_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelHasForceFeedback_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::NewProp_index_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelHasForceFeedback_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelHasForceFeedback_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//Checks if the controller at index has force feedback\n" },
		{ "DisplayName", "Wheel Has Force Feedback" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Checks if the controller at index has force feedback" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelHasForceFeedback", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::LogitechBPLibrary_eventWheelHasForceFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::LogitechBPLibrary_eventWheelHasForceFeedback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics
	{
		struct LogitechBPLibrary_eventWheelInit_Parms
		{
			bool ignoreXInputControllers;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ignoreXInputControllers_MetaData[];
#endif
		static void NewProp_ignoreXInputControllers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ignoreXInputControllers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ignoreXInputControllers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ignoreXInputControllers_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelInit_Parms*)Obj)->ignoreXInputControllers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ignoreXInputControllers = { "ignoreXInputControllers", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelInit_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ignoreXInputControllers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ignoreXInputControllers_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ignoreXInputControllers_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelInit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelInit_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ignoreXInputControllers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//The Wheel will automatically try to initialize\n" },
		{ "DisplayName", "Initialize Wheel" },
		{ "Keywords", "LogitechBPLibrary wheel steering initialize" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "The Wheel will automatically try to initialize" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelInit", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::LogitechBPLibrary_eventWheelInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::LogitechBPLibrary_eventWheelInit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics
	{
		struct LogitechBPLibrary_eventWheelIsConnected_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelIsConnected_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::NewProp_index_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelIsConnected_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//Returns whether a wheel is connected at the provided index. index 0 = first controller\n" },
		{ "DisplayName", "Is Wheel Connected" },
		{ "Keywords", "LogitechBPLibrary wheel steering connected" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Returns whether a wheel is connected at the provided index. index 0 = first controller" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelIsConnected", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::LogitechBPLibrary_eventWheelIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::LogitechBPLibrary_eventWheelIsConnected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics
	{
		struct LogitechBPLibrary_eventWheelIsDeviceConnected_Parms
		{
			int32 index;
			int32 deviceType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelIsDeviceConnected_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_deviceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_deviceType = { "deviceType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelIsDeviceConnected_Parms, deviceType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_deviceType_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_deviceType_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelIsDeviceConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelIsDeviceConnected_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_deviceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Returns whether a logitech device is connected at the provided index. index 0 = first controller. \n\x09""Device Types\n\x09\x09""0 = Wheel\n\x09\x09""1 = Joystick\n\x09\x09""2 = Gamepad\n\x09\x09""3 = Other\n\x09*/" },
		{ "DisplayName", "Is Logitech Device Connected" },
		{ "Keywords", "LogitechBPLibrary wheel steering connected" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Returns whether a logitech device is connected at the provided index. index 0 = first controller.\n       Device Types\n               0 = Wheel\n               1 = Joystick\n               2 = Gamepad\n               3 = Other" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelIsDeviceConnected", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::LogitechBPLibrary_eventWheelIsDeviceConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::LogitechBPLibrary_eventWheelIsDeviceConnected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics
	{
		struct LogitechBPLibrary_eventWheelIsManufacturerConnected_Parms
		{
			int32 index;
			int32 manufacturerName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_manufacturerName_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_manufacturerName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelIsManufacturerConnected_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_manufacturerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_manufacturerName = { "manufacturerName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelIsManufacturerConnected_Parms, manufacturerName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_manufacturerName_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_manufacturerName_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelIsManufacturerConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelIsManufacturerConnected_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_manufacturerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Checks if the device connected at index is made from the manufacturer specified by manufacturerName\n\x09Manufacturer Names\n\x09\x09""0 = Logitech\n\x09\x09""1 = Microsoft\n\x09\x09""2 = Other\n\x09*/" },
		{ "DisplayName", "Is Wheel Manufacturer Connected" },
		{ "Keywords", "LogitechBPLibrary wheel steering connected" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Checks if the device connected at index is made from the manufacturer specified by manufacturerName\n       Manufacturer Names\n               0 = Logitech\n               1 = Microsoft\n               2 = Other" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelIsManufacturerConnected", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::LogitechBPLibrary_eventWheelIsManufacturerConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::LogitechBPLibrary_eventWheelIsManufacturerConnected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics
	{
		struct LogitechBPLibrary_eventWheelIsModelConnected_Parms
		{
			int32 index;
			int32 modelName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_modelName_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_modelName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelIsModelConnected_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_modelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_modelName = { "modelName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelIsModelConnected_Parms, modelName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_modelName_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_modelName_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelIsModelConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelIsModelConnected_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_modelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/* Checks if the device connected at index is the model specified.\n\x09Model Names\n\x09\x09""0 = G27\x09\x09\x09\x09\x09""5 = Driving Force Pro\x09\x09""10 = Force 3D Pro\x09\x09""15 = Strice Force 3D\x09""20 = Rumblepad 2\x09\x09\x09""25 = Chillstream\n\x09\x09""1 = Driving Force GT\x09""6 = Driving Force\x09\x09\x09""11 = Extreme 3D Pro\x09\x09""16 = G940 Joystick\x09\x09""21 = Cordless Rumblepad 2\x09""26 = G29\n\x09\x09""2 = G25\x09\x09\x09\x09\x09""7 = Nascar Racing Wheel\x09\x09""12 = Freedom 24\x09\x09\x09""17 = G940 Throttle\x09\x09""22 = Cordless Gamepad\x09\x09""27 = G920\n\x09\x09""3 = Momo Racing\x09\x09\x09""8 = Formula Force\x09\x09\x09""13 = Attack 3\x09\x09\x09""18 = G940 Pedals\x09\x09""23 = Dual Action Gamepad\x09\n\x09\x09""4 = Momo Force\x09\x09\x09""9 = Formula Force GP\x09\x09""14 = Force 3D\x09\x09\x09""19 = Rumblepad\x09\x09\x09""24 = Precision Gamepad 2\n\x09*/" },
		{ "DisplayName", "Is Wheel Model Connected" },
		{ "Keywords", "LogitechBPLibrary wheel steering connected model" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Checks if the device connected at index is the model specified.\n      Model Names\n              0 = G27                                 5 = Driving Force Pro           10 = Force 3D Pro               15 = Strice Force 3D    20 = Rumblepad 2                        25 = Chillstream\n              1 = Driving Force GT    6 = Driving Force                       11 = Extreme 3D Pro             16 = G940 Joystick              21 = Cordless Rumblepad 2       26 = G29\n              2 = G25                                 7 = Nascar Racing Wheel         12 = Freedom 24                 17 = G940 Throttle              22 = Cordless Gamepad           27 = G920\n              3 = Momo Racing                 8 = Formula Force                       13 = Attack 3                   18 = G940 Pedals                23 = Dual Action Gamepad\n              4 = Momo Force                  9 = Formula Force GP            14 = Force 3D                   19 = Rumblepad                  24 = Precision Gamepad 2" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelIsModelConnected", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::LogitechBPLibrary_eventWheelIsModelConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::LogitechBPLibrary_eventWheelIsModelConnected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics
	{
		struct LogitechBPLibrary_eventWheelIsPlaying_Parms
		{
			int32 index;
			int32 forceType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_forceType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_forceType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelIsPlaying_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_forceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_forceType = { "forceType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelIsPlaying_Parms, forceType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_forceType_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_forceType_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelIsPlaying_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_forceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Checks if a certain force effect is currently playing. \n\n\x09True if the LogiIsPlaying device can do force feedback, false otherwise.\n\n\x09""Force Types\n\x09\x09""0 = Spring\x09\x09\x09\x09""5 = Dirt Road\n\x09\x09""1 = Constant\x09\x09\x09""6 = Bumpy Road\n\x09\x09""2 = Damper\x09\x09\x09\x09""7 = Slippery Road\n\x09\x09""3 = Side Collision\x09\x09""8 = Surface Effect\n\x09\x09""4 = Frontal Collision\x09""9 = Car Airborne\n\x09*/" },
		{ "DisplayName", "Wheel Is Playing" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback playing" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Checks if a certain force effect is currently playing.\n\n       True if the LogiIsPlaying device can do force feedback, false otherwise.\n\n       Force Types\n               0 = Spring                              5 = Dirt Road\n               1 = Constant                    6 = Bumpy Road\n               2 = Damper                              7 = Slippery Road\n               3 = Side Collision              8 = Surface Effect\n               4 = Frontal Collision   9 = Car Airborne" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelIsPlaying", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::LogitechBPLibrary_eventWheelIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::LogitechBPLibrary_eventWheelIsPlaying_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics
	{
		struct LogitechBPLibrary_eventWheelPlayBumpyRoadEffect_Parms
		{
			int32 index;
			int32 magnitudePercentage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_magnitudePercentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_magnitudePercentage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayBumpyRoadEffect_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_magnitudePercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_magnitudePercentage = { "magnitudePercentage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayBumpyRoadEffect_Parms, magnitudePercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_magnitudePercentage_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_magnitudePercentage_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlayBumpyRoadEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlayBumpyRoadEffect_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_magnitudePercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the bumpy road effect. \n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09magnitudePercentage : Specifies the magnitude of the bumpy road effect.  Valid ranges for magnitudePercentage are 0 to 100. Values higher than 100 are silently clamped.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Bumpy Road Effect" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback bumpy road" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the bumpy road effect.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       magnitudePercentage : Specifies the magnitude of the bumpy road effect.  Valid ranges for magnitudePercentage are 0 to 100. Values higher than 100 are silently clamped.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlayBumpyRoadEffect", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::LogitechBPLibrary_eventWheelPlayBumpyRoadEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::LogitechBPLibrary_eventWheelPlayBumpyRoadEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics
	{
		struct LogitechBPLibrary_eventWheelPlayCarAirborne_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayCarAirborne_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::NewProp_index_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlayCarAirborne_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlayCarAirborne_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the car airborne effect.\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Car Airborne Effect" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback airborne" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the car airborne effect.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlayCarAirborne", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::LogitechBPLibrary_eventWheelPlayCarAirborne_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::LogitechBPLibrary_eventWheelPlayCarAirborne_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics
	{
		struct LogitechBPLibrary_eventWheelPlayConstantForce_Parms
		{
			int32 index;
			int32 magnitudePercentage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_magnitudePercentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_magnitudePercentage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayConstantForce_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_magnitudePercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_magnitudePercentage = { "magnitudePercentage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayConstantForce_Parms, magnitudePercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_magnitudePercentage_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_magnitudePercentage_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlayConstantForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlayConstantForce_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_magnitudePercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the constant force\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09magnitudePercentage : Specifies the magnitude of the constant force effect. A negative value reverses the direction of the force. \n\x09Valid ranges for magnitudePercentage are -100 to 100. Any values outside the valid range are silently clamped.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Constant Force" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback constant" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the constant force\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       magnitudePercentage : Specifies the magnitude of the constant force effect. A negative value reverses the direction of the force.\n       Valid ranges for magnitudePercentage are -100 to 100. Any values outside the valid range are silently clamped.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlayConstantForce", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::LogitechBPLibrary_eventWheelPlayConstantForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::LogitechBPLibrary_eventWheelPlayConstantForce_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics
	{
		struct LogitechBPLibrary_eventWheelPlayDamperForce_Parms
		{
			int32 index;
			int32 coefficientPercentage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_coefficientPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_coefficientPercentage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayDamperForce_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_coefficientPercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_coefficientPercentage = { "coefficientPercentage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayDamperForce_Parms, coefficientPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_coefficientPercentage_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_coefficientPercentage_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlayDamperForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlayDamperForce_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_coefficientPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the damper force\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09""coefficientPercentage : specify the slope of the effect strength increase relative to the amount of deflection from the center of the condition.  \n\x09Higher values mean that the saturation level is reached sooner.  Valid ranges are -100 to 100. Any value outside the valid range is silently clamped.\n\x09-100 simulates a very slippery effect, +100 makes the wheel/joystick very hard to move, simulating the car at a stop or in mud.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Damper Force" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback damper" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the damper force\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       coefficientPercentage : specify the slope of the effect strength increase relative to the amount of deflection from the center of the condition.\n       Higher values mean that the saturation level is reached sooner.  Valid ranges are -100 to 100. Any value outside the valid range is silently clamped.\n       -100 simulates a very slippery effect, +100 makes the wheel/joystick very hard to move, simulating the car at a stop or in mud.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlayDamperForce", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::LogitechBPLibrary_eventWheelPlayDamperForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::LogitechBPLibrary_eventWheelPlayDamperForce_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics
	{
		struct LogitechBPLibrary_eventWheelPlayDirtRoadEffect_Parms
		{
			int32 index;
			int32 magnitudePercentage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_magnitudePercentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_magnitudePercentage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayDirtRoadEffect_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_magnitudePercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_magnitudePercentage = { "magnitudePercentage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayDirtRoadEffect_Parms, magnitudePercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_magnitudePercentage_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_magnitudePercentage_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlayDirtRoadEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlayDirtRoadEffect_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_magnitudePercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the dirt road effect. \n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09magnitudePercentage : Specifies the magnitude of the dirt road effect.  Valid ranges for magnitudePercentage are 0 to 100. Values higher than 100 are silently clamped.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Dirt Road Effect" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback dirt road" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the dirt road effect.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       magnitudePercentage : Specifies the magnitude of the dirt road effect.  Valid ranges for magnitudePercentage are 0 to 100. Values higher than 100 are silently clamped.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlayDirtRoadEffect", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::LogitechBPLibrary_eventWheelPlayDirtRoadEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::LogitechBPLibrary_eventWheelPlayDirtRoadEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics
	{
		struct LogitechBPLibrary_eventWheelPlayFrontalCollisionForce_Parms
		{
			int32 index;
			int32 magnitudePercentage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_magnitudePercentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_magnitudePercentage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayFrontalCollisionForce_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_magnitudePercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_magnitudePercentage = { "magnitudePercentage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayFrontalCollisionForce_Parms, magnitudePercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_magnitudePercentage_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_magnitudePercentage_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlayFrontalCollisionForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlayFrontalCollisionForce_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_magnitudePercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the frontal collision force\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09magnitudePercentage : specifies the magnitude of the frontal collision force effect.  Valid ranges for magnitudePercentage are 0 to 100. Values higher than 100 are silently clamped.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Frontal Collision Force" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback frontal collision" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the frontal collision force\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       magnitudePercentage : specifies the magnitude of the frontal collision force effect.  Valid ranges for magnitudePercentage are 0 to 100. Values higher than 100 are silently clamped.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlayFrontalCollisionForce", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::LogitechBPLibrary_eventWheelPlayFrontalCollisionForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::LogitechBPLibrary_eventWheelPlayFrontalCollisionForce_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics
	{
		struct LogitechBPLibrary_eventWheelPlayLeds_Parms
		{
			int32 index;
			float currentRPM;
			float rpmFirstLedTurnsOn;
			float rpmRedLine;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentRPM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentRPM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rpmFirstLedTurnsOn_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rpmFirstLedTurnsOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rpmRedLine_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rpmRedLine;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayLeds_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_currentRPM_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_currentRPM = { "currentRPM", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayLeds_Parms, currentRPM), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_currentRPM_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_currentRPM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_rpmFirstLedTurnsOn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_rpmFirstLedTurnsOn = { "rpmFirstLedTurnsOn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayLeds_Parms, rpmFirstLedTurnsOn), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_rpmFirstLedTurnsOn_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_rpmFirstLedTurnsOn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_rpmRedLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_rpmRedLine = { "rpmRedLine", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayLeds_Parms, rpmRedLine), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_rpmRedLine_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_rpmRedLine_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlayLeds_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlayLeds_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_currentRPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_rpmFirstLedTurnsOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_rpmRedLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the leds on the controller\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09""currentRPM  : current RPM\n\n\x09rpmFirstLedTurnsOn : RPM when first LEDs are to turn on.\n\n\x09rpmRedLine : just below this RPM, all LEDs will be on. Just above,  all LEDs will start flashing.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel LEDS" },
		{ "Keywords", "LogitechBPLibrary wheel steering leds" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the leds on the controller\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       currentRPM  : current RPM\n\n       rpmFirstLedTurnsOn : RPM when first LEDs are to turn on.\n\n       rpmRedLine : just below this RPM, all LEDs will be on. Just above,  all LEDs will start flashing.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlayLeds", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::LogitechBPLibrary_eventWheelPlayLeds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::LogitechBPLibrary_eventWheelPlayLeds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics
	{
		struct LogitechBPLibrary_eventWheelPlaySideCollisionForce_Parms
		{
			int32 index;
			int32 magnitudePercentage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_magnitudePercentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_magnitudePercentage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySideCollisionForce_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_magnitudePercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_magnitudePercentage = { "magnitudePercentage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySideCollisionForce_Parms, magnitudePercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_magnitudePercentage_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_magnitudePercentage_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlaySideCollisionForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlaySideCollisionForce_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_magnitudePercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the side collision force\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09magnitudePercentage : Specifies the magnitude of the side collision force effect. A negative value reverses the direction of the force. Valid ranges for magnitudePercentage are -100 to 100.\n\x09""Any values outside the valid range are silently clamped.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Side Collision Force" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback side collision" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the side collision force\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       magnitudePercentage : Specifies the magnitude of the side collision force effect. A negative value reverses the direction of the force. Valid ranges for magnitudePercentage are -100 to 100.\n       Any values outside the valid range are silently clamped.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlaySideCollisionForce", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::LogitechBPLibrary_eventWheelPlaySideCollisionForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::LogitechBPLibrary_eventWheelPlaySideCollisionForce_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics
	{
		struct LogitechBPLibrary_eventWheelPlaySlipperyRoadEffect_Parms
		{
			int32 index;
			int32 magnitudePercentage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_magnitudePercentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_magnitudePercentage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySlipperyRoadEffect_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_magnitudePercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_magnitudePercentage = { "magnitudePercentage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySlipperyRoadEffect_Parms, magnitudePercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_magnitudePercentage_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_magnitudePercentage_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlaySlipperyRoadEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlaySlipperyRoadEffect_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_magnitudePercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the slippery road effect. \n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09magnitudePercentage : Specifies the magnitude of the slippery road effect.  Valid ranges for magnitudePercentage are 0 to 100. 100 corresponds to the most slippery effect.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Slippery Road Effect" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback slippery road" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the slippery road effect.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       magnitudePercentage : Specifies the magnitude of the slippery road effect.  Valid ranges for magnitudePercentage are 0 to 100. 100 corresponds to the most slippery effect.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlaySlipperyRoadEffect", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::LogitechBPLibrary_eventWheelPlaySlipperyRoadEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::LogitechBPLibrary_eventWheelPlaySlipperyRoadEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics
	{
		struct LogitechBPLibrary_eventWheelPlaySoftstopForce_Parms
		{
			int32 index;
			int32 usableRangePercentage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_usableRangePercentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_usableRangePercentage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySoftstopForce_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_usableRangePercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_usableRangePercentage = { "usableRangePercentage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySoftstopForce_Parms, usableRangePercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_usableRangePercentage_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_usableRangePercentage_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlaySoftstopForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlaySoftstopForce_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_usableRangePercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the soft stop force. \n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09usableRangePercentage : specifies the deadband in percentage of the softstop force effect.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Soft Stop Force" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback soft stop" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the soft stop force.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       usableRangePercentage : specifies the deadband in percentage of the softstop force effect.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlaySoftstopForce", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::LogitechBPLibrary_eventWheelPlaySoftstopForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::LogitechBPLibrary_eventWheelPlaySoftstopForce_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics
	{
		struct LogitechBPLibrary_eventWheelPlaySpringForce_Parms
		{
			int32 index;
			int32 offsetPercentage;
			int32 saturationPercentage;
			int32 coefficientPercentage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_offsetPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_offsetPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_saturationPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_saturationPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_coefficientPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_coefficientPercentage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySpringForce_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_offsetPercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_offsetPercentage = { "offsetPercentage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySpringForce_Parms, offsetPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_offsetPercentage_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_offsetPercentage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_saturationPercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_saturationPercentage = { "saturationPercentage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySpringForce_Parms, saturationPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_saturationPercentage_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_saturationPercentage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_coefficientPercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_coefficientPercentage = { "coefficientPercentage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySpringForce_Parms, coefficientPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_coefficientPercentage_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_coefficientPercentage_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlaySpringForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlaySpringForce_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_offsetPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_saturationPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_coefficientPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the spring force\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09offsetPercentage: Specifies the center of the spring force effect. Valid range is -100 to 100. Specifying 0 centers the spring. Any values outside this range are silently clamped.\n\n\x09saturationPercentage: Specify the level of saturation of the spring force effect. The saturation stays constant after a certain deflection from the center of the spring. \n\x09It is comparable to a magnitude.  Valid ranges are 0 to 100. Any value higher than 100 is silently clamped. \n\n\x09""coefficientPercentage - Specify the slope of the effect strength increase relative to the amount of deflection from the center of the condition.  \n\x09Higher values mean that the saturation level is  reached sooner.  Valid ranges are -100 to 100. Any value outside the valid range is silently clamped.\n\x09\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Spring Force" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback spring" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the spring force\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       offsetPercentage: Specifies the center of the spring force effect. Valid range is -100 to 100. Specifying 0 centers the spring. Any values outside this range are silently clamped.\n\n       saturationPercentage: Specify the level of saturation of the spring force effect. The saturation stays constant after a certain deflection from the center of the spring.\n       It is comparable to a magnitude.  Valid ranges are 0 to 100. Any value higher than 100 is silently clamped.\n\n       coefficientPercentage - Specify the slope of the effect strength increase relative to the amount of deflection from the center of the condition.\n       Higher values mean that the saturation level is  reached sooner.  Valid ranges are -100 to 100. Any value outside the valid range is silently clamped.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlaySpringForce", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::LogitechBPLibrary_eventWheelPlaySpringForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::LogitechBPLibrary_eventWheelPlaySpringForce_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics
	{
		struct LogitechBPLibrary_eventWheelPlaySurfaceEffect_Parms
		{
			int32 index;
			int32 type;
			int32 magnitudePercentage;
			int32 period;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_magnitudePercentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_magnitudePercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_period_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_period;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySurfaceEffect_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySurfaceEffect_Parms, type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_type_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_magnitudePercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_magnitudePercentage = { "magnitudePercentage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySurfaceEffect_Parms, magnitudePercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_magnitudePercentage_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_magnitudePercentage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_period_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_period = { "period", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySurfaceEffect_Parms, period), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_period_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_period_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlaySurfaceEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlaySurfaceEffect_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_magnitudePercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_period,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the surface effect.\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09type : Specifies the type of force effect. Can be one of the  following values:\n\x09\x09o LOGI_PERIODICTYPE_SINE\n\x09\x09o LOGI_PERIODICTYPE_SQUARE\n\x09\x09o LOGI_PERIODICTYPE_TRIANGLE\n\n\x09magnitudePercentage - Specifies the magnitude of the surface effect.  Valid ranges for magnitudePercentage are 0 to 100. Values higher than 100 are silently clamped.\n\n\x09period - Specifies the period of the periodic force effect. The value is the duration for one full cycle of the periodic function measured in milliseconds. \n\x09""A good range of values for the period is  20 ms (sand) to 120 ms (wooden bridge or cobblestones). For a surface effect the period should not be any bigger than 150 ms.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Surface Effect" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback surface" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the surface effect.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       type : Specifies the type of force effect. Can be one of the  following values:\n               o LOGI_PERIODICTYPE_SINE\n               o LOGI_PERIODICTYPE_SQUARE\n               o LOGI_PERIODICTYPE_TRIANGLE\n\n       magnitudePercentage - Specifies the magnitude of the surface effect.  Valid ranges for magnitudePercentage are 0 to 100. Values higher than 100 are silently clamped.\n\n       period - Specifies the period of the periodic force effect. The value is the duration for one full cycle of the periodic function measured in milliseconds.\n       A good range of values for the period is  20 ms (sand) to 120 ms (wooden bridge or cobblestones). For a surface effect the period should not be any bigger than 150 ms.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlaySurfaceEffect", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::LogitechBPLibrary_eventWheelPlaySurfaceEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::LogitechBPLibrary_eventWheelPlaySurfaceEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics
	{
		struct LogitechBPLibrary_eventWheelSetOperatingRange_Parms
		{
			int32 index;
			int32 range;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_range_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_range;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelSetOperatingRange_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_range_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelSetOperatingRange_Parms, range), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_range_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_range_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelSetOperatingRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelSetOperatingRange_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Sets the operating range of the controller with the range parameter \n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\x09\n\x09range : the operating range to be set\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Set Wheel Operating Range" },
		{ "Keywords", "LogitechBPLibrary wheel steering operating range" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Sets the operating range of the controller with the range parameter\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       range : the operating range to be set\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelSetOperatingRange", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::LogitechBPLibrary_eventWheelSetOperatingRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::LogitechBPLibrary_eventWheelSetOperatingRange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelShutdown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelShutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//shuts down the SDK and destroys the controller objects \n" },
		{ "DisplayName", "Shutdown Wheel" },
		{ "Keywords", "LogitechBPLibrary wheel steering shutdown" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "shuts down the SDK and destroys the controller objects" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelShutdown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelShutdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelShutdown_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelShutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelShutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics
	{
		struct LogitechBPLibrary_eventWheelStopBumpyRoadEffect_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelStopBumpyRoadEffect_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::NewProp_index_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelStopBumpyRoadEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelStopBumpyRoadEffect_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Stops the bumpy road effect.\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Stop Wheel Bumpy Road Effect" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback bumpy road" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Stops the bumpy road effect.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelStopBumpyRoadEffect", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::LogitechBPLibrary_eventWheelStopBumpyRoadEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::LogitechBPLibrary_eventWheelStopBumpyRoadEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics
	{
		struct LogitechBPLibrary_eventWheelStopCarAirborne_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelStopCarAirborne_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::NewProp_index_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelStopCarAirborne_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelStopCarAirborne_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Stops the car airborne effect.\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Stop Wheel Car Airborne Effect" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback airborne" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Stops the car airborne effect.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelStopCarAirborne", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::LogitechBPLibrary_eventWheelStopCarAirborne_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::LogitechBPLibrary_eventWheelStopCarAirborne_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics
	{
		struct LogitechBPLibrary_eventWheelStopConstantForce_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelStopConstantForce_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::NewProp_index_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelStopConstantForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelStopConstantForce_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Stops the constant force\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Stop Wheel Constant Force" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback constant" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Stops the constant force\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelStopConstantForce", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::LogitechBPLibrary_eventWheelStopConstantForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::LogitechBPLibrary_eventWheelStopConstantForce_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics
	{
		struct LogitechBPLibrary_eventWheelStopDamperForce_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelStopDamperForce_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::NewProp_index_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelStopDamperForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelStopDamperForce_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Stops the damper force\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Stop Wheel Damper Force" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback damper" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Stops the damper force\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelStopDamperForce", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::LogitechBPLibrary_eventWheelStopDamperForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::LogitechBPLibrary_eventWheelStopDamperForce_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics
	{
		struct LogitechBPLibrary_eventWheelStopDirtRoadEffect_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelStopDirtRoadEffect_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::NewProp_index_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelStopDirtRoadEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelStopDirtRoadEffect_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Stops the dirt road effect. \n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Stop Wheel Dirt Road Effect" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback dirt road" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Stops the dirt road effect.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelStopDirtRoadEffect", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::LogitechBPLibrary_eventWheelStopDirtRoadEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::LogitechBPLibrary_eventWheelStopDirtRoadEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics
	{
		struct LogitechBPLibrary_eventWheelStopSlipperyRoadEffect_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelStopSlipperyRoadEffect_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::NewProp_index_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelStopSlipperyRoadEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelStopSlipperyRoadEffect_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Stops the slippery road effect.\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Stop Wheel Slippery Road Effect" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback slippery road" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Stops the slippery road effect.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelStopSlipperyRoadEffect", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::LogitechBPLibrary_eventWheelStopSlipperyRoadEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::LogitechBPLibrary_eventWheelStopSlipperyRoadEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics
	{
		struct LogitechBPLibrary_eventWheelStopSoftstopForce_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelStopSoftstopForce_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::NewProp_index_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelStopSoftstopForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelStopSoftstopForce_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Stops the soft stop force.\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Stop Wheel Soft Stop Force" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback soft stop" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Stops the soft stop force.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelStopSoftstopForce", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::LogitechBPLibrary_eventWheelStopSoftstopForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::LogitechBPLibrary_eventWheelStopSoftstopForce_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics
	{
		struct LogitechBPLibrary_eventWheelStopSpringForce_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelStopSpringForce_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::NewProp_index_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelStopSpringForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelStopSpringForce_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Stops the spring force\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Stop Wheel Spring Force" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback spring" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Stops the spring force\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelStopSpringForce", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::LogitechBPLibrary_eventWheelStopSpringForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::LogitechBPLibrary_eventWheelStopSpringForce_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics
	{
		struct LogitechBPLibrary_eventWheelStopSurfaceEffect_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelStopSurfaceEffect_Parms, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::NewProp_index_MetaData), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::NewProp_index_MetaData) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelStopSurfaceEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelStopSurfaceEffect_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Stops the surface effect. \n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Stop Wheel Surface Effect" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback surface" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Stops the surface effect.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       True if success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelStopSurfaceEffect", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::LogitechBPLibrary_eventWheelStopSurfaceEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::LogitechBPLibrary_eventWheelStopSurfaceEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics
	{
		struct LogitechBPLibrary_eventWheelUpdate_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelUpdate_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//The Wheel State is automatically updated every frame in LogitechWheelInputDevice.cpp\n" },
		{ "DisplayName", "Update Wheel State" },
		{ "Keywords", "LogitechBPLibrary wheel steering update state" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "The Wheel State is automatically updated every frame in LogitechWheelInputDevice.cpp" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelUpdate", nullptr, nullptr, Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::LogitechBPLibrary_eventWheelUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::LogitechBPLibrary_eventWheelUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULogitechBPLibrary);
	UClass* Z_Construct_UClass_ULogitechBPLibrary_NoRegister()
	{
		return ULogitechBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULogitechBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULogitechBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LogitechWheelPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULogitechBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULogitechBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed, "WheelButtonIsPressed" }, // 1380634807
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased, "WheelButtonReleased" }, // 3712464612
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered, "WheelButtonTriggered" }, // 3824088013
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues, "WheelGenerateNonLinearValues" }, // 2211967639
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue, "WheelGetNonLinearValue" }, // 3075126140
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange, "WheelGetOperatingRange" }, // 2697417539
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode, "WheelGetShifterMode" }, // 1024623123
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState, "WheelGetState" }, // 1501523344
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback, "WheelHasForceFeedback" }, // 1385644143
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelInit, "WheelInit" }, // 1427583129
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected, "WheelIsConnected" }, // 2911392715
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected, "WheelIsDeviceConnected" }, // 1076324080
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected, "WheelIsManufacturerConnected" }, // 2097180314
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected, "WheelIsModelConnected" }, // 2097458995
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying, "WheelIsPlaying" }, // 1104998710
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect, "WheelPlayBumpyRoadEffect" }, // 1837950268
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne, "WheelPlayCarAirborne" }, // 903115176
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce, "WheelPlayConstantForce" }, // 3606878767
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce, "WheelPlayDamperForce" }, // 2093204202
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect, "WheelPlayDirtRoadEffect" }, // 2493215936
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce, "WheelPlayFrontalCollisionForce" }, // 3768237535
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds, "WheelPlayLeds" }, // 4164869095
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce, "WheelPlaySideCollisionForce" }, // 4010319258
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect, "WheelPlaySlipperyRoadEffect" }, // 2184983962
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce, "WheelPlaySoftstopForce" }, // 140143839
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce, "WheelPlaySpringForce" }, // 1807044246
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect, "WheelPlaySurfaceEffect" }, // 3770852263
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange, "WheelSetOperatingRange" }, // 2300033538
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelShutdown, "WheelShutdown" }, // 3207873037
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect, "WheelStopBumpyRoadEffect" }, // 357723595
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne, "WheelStopCarAirborne" }, // 898064353
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce, "WheelStopConstantForce" }, // 1784899
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce, "WheelStopDamperForce" }, // 4173432244
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect, "WheelStopDirtRoadEffect" }, // 347559689
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect, "WheelStopSlipperyRoadEffect" }, // 2983268468
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce, "WheelStopSoftstopForce" }, // 3747209773
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce, "WheelStopSpringForce" }, // 2127487439
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect, "WheelStopSurfaceEffect" }, // 3963255633
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate, "WheelUpdate" }, // 928776258
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULogitechBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogitechBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "LogitechBPLibrary.h" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULogitechBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULogitechBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULogitechBPLibrary_Statics::ClassParams = {
		&ULogitechBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULogitechBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULogitechBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULogitechBPLibrary()
	{
		if (!Z_Registration_Info_UClass_ULogitechBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULogitechBPLibrary.OuterSingleton, Z_Construct_UClass_ULogitechBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULogitechBPLibrary.OuterSingleton;
	}
	template<> LOGITECHWHEELPLUGIN_API UClass* StaticClass<ULogitechBPLibrary>()
	{
		return ULogitechBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULogitechBPLibrary);
	ULogitechBPLibrary::~ULogitechBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_novos_plugins_Logitech_HostProject_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_novos_plugins_Logitech_HostProject_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULogitechBPLibrary, ULogitechBPLibrary::StaticClass, TEXT("ULogitechBPLibrary"), &Z_Registration_Info_UClass_ULogitechBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULogitechBPLibrary), 2361496383U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_novos_plugins_Logitech_HostProject_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_1628682248(TEXT("/Script/LogitechWheelPlugin"),
		Z_CompiledInDeferFile_FID_novos_plugins_Logitech_HostProject_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_novos_plugins_Logitech_HostProject_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
