#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.ToggleConfig
struct  ToggleConfig_t2616085790  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Slider MaterialUI.ToggleConfig::theSlider
	Slider_t297367283 * ___theSlider_2;
	// UnityEngine.UI.Toggle MaterialUI.ToggleConfig::theToggle
	Toggle_t3976754468 * ___theToggle_3;

public:
	inline static int32_t get_offset_of_theSlider_2() { return static_cast<int32_t>(offsetof(ToggleConfig_t2616085790, ___theSlider_2)); }
	inline Slider_t297367283 * get_theSlider_2() const { return ___theSlider_2; }
	inline Slider_t297367283 ** get_address_of_theSlider_2() { return &___theSlider_2; }
	inline void set_theSlider_2(Slider_t297367283 * value)
	{
		___theSlider_2 = value;
		Il2CppCodeGenWriteBarrier(&___theSlider_2, value);
	}

	inline static int32_t get_offset_of_theToggle_3() { return static_cast<int32_t>(offsetof(ToggleConfig_t2616085790, ___theToggle_3)); }
	inline Toggle_t3976754468 * get_theToggle_3() const { return ___theToggle_3; }
	inline Toggle_t3976754468 ** get_address_of_theToggle_3() { return &___theToggle_3; }
	inline void set_theToggle_3(Toggle_t3976754468 * value)
	{
		___theToggle_3 = value;
		Il2CppCodeGenWriteBarrier(&___theToggle_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
