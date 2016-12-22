#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// PlayerController
struct PlayerController_t4148409433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimeManager
struct  TimeManager_t3416697488  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TimeManager::startingTime
	float ___startingTime_2;
	// System.Single TimeManager::countingTime
	float ___countingTime_3;
	// UnityEngine.UI.Text TimeManager::theText
	Text_t356221433 * ___theText_4;
	// PlayerController TimeManager::thePlayer
	PlayerController_t4148409433 * ___thePlayer_5;

public:
	inline static int32_t get_offset_of_startingTime_2() { return static_cast<int32_t>(offsetof(TimeManager_t3416697488, ___startingTime_2)); }
	inline float get_startingTime_2() const { return ___startingTime_2; }
	inline float* get_address_of_startingTime_2() { return &___startingTime_2; }
	inline void set_startingTime_2(float value)
	{
		___startingTime_2 = value;
	}

	inline static int32_t get_offset_of_countingTime_3() { return static_cast<int32_t>(offsetof(TimeManager_t3416697488, ___countingTime_3)); }
	inline float get_countingTime_3() const { return ___countingTime_3; }
	inline float* get_address_of_countingTime_3() { return &___countingTime_3; }
	inline void set_countingTime_3(float value)
	{
		___countingTime_3 = value;
	}

	inline static int32_t get_offset_of_theText_4() { return static_cast<int32_t>(offsetof(TimeManager_t3416697488, ___theText_4)); }
	inline Text_t356221433 * get_theText_4() const { return ___theText_4; }
	inline Text_t356221433 ** get_address_of_theText_4() { return &___theText_4; }
	inline void set_theText_4(Text_t356221433 * value)
	{
		___theText_4 = value;
		Il2CppCodeGenWriteBarrier(&___theText_4, value);
	}

	inline static int32_t get_offset_of_thePlayer_5() { return static_cast<int32_t>(offsetof(TimeManager_t3416697488, ___thePlayer_5)); }
	inline PlayerController_t4148409433 * get_thePlayer_5() const { return ___thePlayer_5; }
	inline PlayerController_t4148409433 ** get_address_of_thePlayer_5() { return &___thePlayer_5; }
	inline void set_thePlayer_5(PlayerController_t4148409433 * value)
	{
		___thePlayer_5 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayer_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
