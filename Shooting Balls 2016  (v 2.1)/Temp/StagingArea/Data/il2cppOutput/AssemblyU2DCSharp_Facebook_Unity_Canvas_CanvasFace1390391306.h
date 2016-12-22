#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "AssemblyU2DCSharp_Facebook_Unity_FacebookBase2463540723.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Canvas.CanvasFacebook
struct  CanvasFacebook_t1390391306  : public FacebookBase_t2463540723
{
public:
	// System.String Facebook.Unity.Canvas.CanvasFacebook::appId
	String_t* ___appId_14;
	// System.Boolean Facebook.Unity.Canvas.CanvasFacebook::sdkDebug
	bool ___sdkDebug_15;
	// System.String Facebook.Unity.Canvas.CanvasFacebook::appLinkUrl
	String_t* ___appLinkUrl_16;
	// System.Boolean Facebook.Unity.Canvas.CanvasFacebook::<LimitEventUsage>k__BackingField
	bool ___U3CLimitEventUsageU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_appId_14() { return static_cast<int32_t>(offsetof(CanvasFacebook_t1390391306, ___appId_14)); }
	inline String_t* get_appId_14() const { return ___appId_14; }
	inline String_t** get_address_of_appId_14() { return &___appId_14; }
	inline void set_appId_14(String_t* value)
	{
		___appId_14 = value;
		Il2CppCodeGenWriteBarrier(&___appId_14, value);
	}

	inline static int32_t get_offset_of_sdkDebug_15() { return static_cast<int32_t>(offsetof(CanvasFacebook_t1390391306, ___sdkDebug_15)); }
	inline bool get_sdkDebug_15() const { return ___sdkDebug_15; }
	inline bool* get_address_of_sdkDebug_15() { return &___sdkDebug_15; }
	inline void set_sdkDebug_15(bool value)
	{
		___sdkDebug_15 = value;
	}

	inline static int32_t get_offset_of_appLinkUrl_16() { return static_cast<int32_t>(offsetof(CanvasFacebook_t1390391306, ___appLinkUrl_16)); }
	inline String_t* get_appLinkUrl_16() const { return ___appLinkUrl_16; }
	inline String_t** get_address_of_appLinkUrl_16() { return &___appLinkUrl_16; }
	inline void set_appLinkUrl_16(String_t* value)
	{
		___appLinkUrl_16 = value;
		Il2CppCodeGenWriteBarrier(&___appLinkUrl_16, value);
	}

	inline static int32_t get_offset_of_U3CLimitEventUsageU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(CanvasFacebook_t1390391306, ___U3CLimitEventUsageU3Ek__BackingField_17)); }
	inline bool get_U3CLimitEventUsageU3Ek__BackingField_17() const { return ___U3CLimitEventUsageU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CLimitEventUsageU3Ek__BackingField_17() { return &___U3CLimitEventUsageU3Ek__BackingField_17; }
	inline void set_U3CLimitEventUsageU3Ek__BackingField_17(bool value)
	{
		___U3CLimitEventUsageU3Ek__BackingField_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
