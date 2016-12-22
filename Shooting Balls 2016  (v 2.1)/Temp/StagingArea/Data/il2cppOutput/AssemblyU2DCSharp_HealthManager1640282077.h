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
// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HealthManager
struct  HealthManager_t1640282077  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 HealthManager::maxPlayerHealth
	int32_t ___maxPlayerHealth_2;
	// UnityEngine.UI.Slider HealthManager::healthUI
	Slider_t297367283 * ___healthUI_4;
	// PlayerController HealthManager::thePlayer
	PlayerController_t4148409433 * ___thePlayer_5;
	// UnityEngine.UI.Text HealthManager::text
	Text_t356221433 * ___text_6;

public:
	inline static int32_t get_offset_of_maxPlayerHealth_2() { return static_cast<int32_t>(offsetof(HealthManager_t1640282077, ___maxPlayerHealth_2)); }
	inline int32_t get_maxPlayerHealth_2() const { return ___maxPlayerHealth_2; }
	inline int32_t* get_address_of_maxPlayerHealth_2() { return &___maxPlayerHealth_2; }
	inline void set_maxPlayerHealth_2(int32_t value)
	{
		___maxPlayerHealth_2 = value;
	}

	inline static int32_t get_offset_of_healthUI_4() { return static_cast<int32_t>(offsetof(HealthManager_t1640282077, ___healthUI_4)); }
	inline Slider_t297367283 * get_healthUI_4() const { return ___healthUI_4; }
	inline Slider_t297367283 ** get_address_of_healthUI_4() { return &___healthUI_4; }
	inline void set_healthUI_4(Slider_t297367283 * value)
	{
		___healthUI_4 = value;
		Il2CppCodeGenWriteBarrier(&___healthUI_4, value);
	}

	inline static int32_t get_offset_of_thePlayer_5() { return static_cast<int32_t>(offsetof(HealthManager_t1640282077, ___thePlayer_5)); }
	inline PlayerController_t4148409433 * get_thePlayer_5() const { return ___thePlayer_5; }
	inline PlayerController_t4148409433 ** get_address_of_thePlayer_5() { return &___thePlayer_5; }
	inline void set_thePlayer_5(PlayerController_t4148409433 * value)
	{
		___thePlayer_5 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayer_5, value);
	}

	inline static int32_t get_offset_of_text_6() { return static_cast<int32_t>(offsetof(HealthManager_t1640282077, ___text_6)); }
	inline Text_t356221433 * get_text_6() const { return ___text_6; }
	inline Text_t356221433 ** get_address_of_text_6() { return &___text_6; }
	inline void set_text_6(Text_t356221433 * value)
	{
		___text_6 = value;
		Il2CppCodeGenWriteBarrier(&___text_6, value);
	}
};

struct HealthManager_t1640282077_StaticFields
{
public:
	// System.Int32 HealthManager::playerHealth
	int32_t ___playerHealth_3;

public:
	inline static int32_t get_offset_of_playerHealth_3() { return static_cast<int32_t>(offsetof(HealthManager_t1640282077_StaticFields, ___playerHealth_3)); }
	inline int32_t get_playerHealth_3() const { return ___playerHealth_3; }
	inline int32_t* get_address_of_playerHealth_3() { return &___playerHealth_3; }
	inline void set_playerHealth_3(int32_t value)
	{
		___playerHealth_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
