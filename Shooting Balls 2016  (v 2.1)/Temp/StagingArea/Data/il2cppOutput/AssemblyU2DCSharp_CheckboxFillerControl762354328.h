#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image[]
struct ImageU5BU5D_t590162004;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CheckboxFillerControl
struct  CheckboxFillerControl_t762354328  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image[] CheckboxFillerControl::fillers
	ImageU5BU5D_t590162004* ___fillers_2;

public:
	inline static int32_t get_offset_of_fillers_2() { return static_cast<int32_t>(offsetof(CheckboxFillerControl_t762354328, ___fillers_2)); }
	inline ImageU5BU5D_t590162004* get_fillers_2() const { return ___fillers_2; }
	inline ImageU5BU5D_t590162004** get_address_of_fillers_2() { return &___fillers_2; }
	inline void set_fillers_2(ImageU5BU5D_t590162004* value)
	{
		___fillers_2 = value;
		Il2CppCodeGenWriteBarrier(&___fillers_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
