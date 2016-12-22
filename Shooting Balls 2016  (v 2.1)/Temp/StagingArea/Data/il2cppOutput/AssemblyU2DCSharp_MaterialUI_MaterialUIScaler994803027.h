#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t2574720772;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.MaterialUIScaler
struct  MaterialUIScaler_t994803027  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 MaterialUI.MaterialUIScaler::referenceResolution
	Vector2_t2243707579  ___referenceResolution_2;
	// UnityEngine.Vector2 MaterialUI.MaterialUIScaler::currentResolution
	Vector2_t2243707579  ___currentResolution_3;
	// System.Single MaterialUI.MaterialUIScaler::<scaleFactor>k__BackingField
	float ___U3CscaleFactorU3Ek__BackingField_4;
	// UnityEngine.UI.CanvasScaler MaterialUI.MaterialUIScaler::scaler
	CanvasScaler_t2574720772 * ___scaler_5;

public:
	inline static int32_t get_offset_of_referenceResolution_2() { return static_cast<int32_t>(offsetof(MaterialUIScaler_t994803027, ___referenceResolution_2)); }
	inline Vector2_t2243707579  get_referenceResolution_2() const { return ___referenceResolution_2; }
	inline Vector2_t2243707579 * get_address_of_referenceResolution_2() { return &___referenceResolution_2; }
	inline void set_referenceResolution_2(Vector2_t2243707579  value)
	{
		___referenceResolution_2 = value;
	}

	inline static int32_t get_offset_of_currentResolution_3() { return static_cast<int32_t>(offsetof(MaterialUIScaler_t994803027, ___currentResolution_3)); }
	inline Vector2_t2243707579  get_currentResolution_3() const { return ___currentResolution_3; }
	inline Vector2_t2243707579 * get_address_of_currentResolution_3() { return &___currentResolution_3; }
	inline void set_currentResolution_3(Vector2_t2243707579  value)
	{
		___currentResolution_3 = value;
	}

	inline static int32_t get_offset_of_U3CscaleFactorU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MaterialUIScaler_t994803027, ___U3CscaleFactorU3Ek__BackingField_4)); }
	inline float get_U3CscaleFactorU3Ek__BackingField_4() const { return ___U3CscaleFactorU3Ek__BackingField_4; }
	inline float* get_address_of_U3CscaleFactorU3Ek__BackingField_4() { return &___U3CscaleFactorU3Ek__BackingField_4; }
	inline void set_U3CscaleFactorU3Ek__BackingField_4(float value)
	{
		___U3CscaleFactorU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_scaler_5() { return static_cast<int32_t>(offsetof(MaterialUIScaler_t994803027, ___scaler_5)); }
	inline CanvasScaler_t2574720772 * get_scaler_5() const { return ___scaler_5; }
	inline CanvasScaler_t2574720772 ** get_address_of_scaler_5() { return &___scaler_5; }
	inline void set_scaler_5(CanvasScaler_t2574720772 * value)
	{
		___scaler_5 = value;
		Il2CppCodeGenWriteBarrier(&___scaler_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
