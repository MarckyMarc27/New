#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Toggle
struct Toggle_t3976754468;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.CheckBoxToggler
struct  CheckBoxToggler_t1562645611  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Toggle MaterialUI.CheckBoxToggler::theToggle
	Toggle_t3976754468 * ___theToggle_2;

public:
	inline static int32_t get_offset_of_theToggle_2() { return static_cast<int32_t>(offsetof(CheckBoxToggler_t1562645611, ___theToggle_2)); }
	inline Toggle_t3976754468 * get_theToggle_2() const { return ___theToggle_2; }
	inline Toggle_t3976754468 ** get_address_of_theToggle_2() { return &___theToggle_2; }
	inline void set_theToggle_2(Toggle_t3976754468 * value)
	{
		___theToggle_2 = value;
		Il2CppCodeGenWriteBarrier(&___theToggle_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
