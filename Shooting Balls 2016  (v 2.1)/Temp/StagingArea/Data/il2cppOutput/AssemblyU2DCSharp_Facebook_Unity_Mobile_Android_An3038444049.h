#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Facebook.Unity.Mobile.Android.IAndroidJavaClass
struct IAndroidJavaClass_t3006205204;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_Facebook_Unity_Mobile_MobileFace2099931062.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Mobile.Android.AndroidFacebook
struct  AndroidFacebook_t3038444049  : public MobileFacebook_t2099931062
{
public:
	// System.Boolean Facebook.Unity.Mobile.Android.AndroidFacebook::limitEventUsage
	bool ___limitEventUsage_5;
	// Facebook.Unity.Mobile.Android.IAndroidJavaClass Facebook.Unity.Mobile.Android.AndroidFacebook::facebookJava
	Il2CppObject * ___facebookJava_6;
	// System.String Facebook.Unity.Mobile.Android.AndroidFacebook::<KeyHash>k__BackingField
	String_t* ___U3CKeyHashU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_limitEventUsage_5() { return static_cast<int32_t>(offsetof(AndroidFacebook_t3038444049, ___limitEventUsage_5)); }
	inline bool get_limitEventUsage_5() const { return ___limitEventUsage_5; }
	inline bool* get_address_of_limitEventUsage_5() { return &___limitEventUsage_5; }
	inline void set_limitEventUsage_5(bool value)
	{
		___limitEventUsage_5 = value;
	}

	inline static int32_t get_offset_of_facebookJava_6() { return static_cast<int32_t>(offsetof(AndroidFacebook_t3038444049, ___facebookJava_6)); }
	inline Il2CppObject * get_facebookJava_6() const { return ___facebookJava_6; }
	inline Il2CppObject ** get_address_of_facebookJava_6() { return &___facebookJava_6; }
	inline void set_facebookJava_6(Il2CppObject * value)
	{
		___facebookJava_6 = value;
		Il2CppCodeGenWriteBarrier(&___facebookJava_6, value);
	}

	inline static int32_t get_offset_of_U3CKeyHashU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AndroidFacebook_t3038444049, ___U3CKeyHashU3Ek__BackingField_7)); }
	inline String_t* get_U3CKeyHashU3Ek__BackingField_7() const { return ___U3CKeyHashU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CKeyHashU3Ek__BackingField_7() { return &___U3CKeyHashU3Ek__BackingField_7; }
	inline void set_U3CKeyHashU3Ek__BackingField_7(String_t* value)
	{
		___U3CKeyHashU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CKeyHashU3Ek__BackingField_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
