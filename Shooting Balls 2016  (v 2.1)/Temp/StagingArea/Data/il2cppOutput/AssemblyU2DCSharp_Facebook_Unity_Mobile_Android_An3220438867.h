﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Facebook.Unity.Mobile.Android.AndroidFacebook
struct AndroidFacebook_t3038444049;

#include "AssemblyU2DCSharp_Facebook_Unity_MethodCall_1_gen3209607445.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Mobile.Android.AndroidFacebook/JavaMethodCall`1<Facebook.Unity.IResult>
struct  JavaMethodCall_1_t3220438867  : public MethodCall_1_t3209607445
{
public:
	// Facebook.Unity.Mobile.Android.AndroidFacebook Facebook.Unity.Mobile.Android.AndroidFacebook/JavaMethodCall`1::androidImpl
	AndroidFacebook_t3038444049 * ___androidImpl_4;

public:
	inline static int32_t get_offset_of_androidImpl_4() { return static_cast<int32_t>(offsetof(JavaMethodCall_1_t3220438867, ___androidImpl_4)); }
	inline AndroidFacebook_t3038444049 * get_androidImpl_4() const { return ___androidImpl_4; }
	inline AndroidFacebook_t3038444049 ** get_address_of_androidImpl_4() { return &___androidImpl_4; }
	inline void set_androidImpl_4(AndroidFacebook_t3038444049 * value)
	{
		___androidImpl_4 = value;
		Il2CppCodeGenWriteBarrier(&___androidImpl_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
