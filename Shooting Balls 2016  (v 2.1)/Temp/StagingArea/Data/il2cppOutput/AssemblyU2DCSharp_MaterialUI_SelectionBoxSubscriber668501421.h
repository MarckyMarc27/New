#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MaterialUI.SelectionBoxConfig
struct SelectionBoxConfig_t2292907685;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.SelectionBoxSubscriber
struct  SelectionBoxSubscriber_t668501421  : public MonoBehaviour_t1158329972
{
public:
	// MaterialUI.SelectionBoxConfig MaterialUI.SelectionBoxSubscriber::config
	SelectionBoxConfig_t2292907685 * ___config_2;

public:
	inline static int32_t get_offset_of_config_2() { return static_cast<int32_t>(offsetof(SelectionBoxSubscriber_t668501421, ___config_2)); }
	inline SelectionBoxConfig_t2292907685 * get_config_2() const { return ___config_2; }
	inline SelectionBoxConfig_t2292907685 ** get_address_of_config_2() { return &___config_2; }
	inline void set_config_2(SelectionBoxConfig_t2292907685 * value)
	{
		___config_2 = value;
		Il2CppCodeGenWriteBarrier(&___config_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
