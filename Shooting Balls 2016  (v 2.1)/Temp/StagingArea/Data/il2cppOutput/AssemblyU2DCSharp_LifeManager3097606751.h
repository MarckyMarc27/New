#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerController
struct PlayerController_t4148409433;
// HealthManager
struct HealthManager_t1640282077;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LifeManager
struct  LifeManager_t3097606751  : public MonoBehaviour_t1158329972
{
public:
	// PlayerController LifeManager::thePlayer
	PlayerController_t4148409433 * ___thePlayer_2;
	// HealthManager LifeManager::healthManager
	HealthManager_t1640282077 * ___healthManager_3;
	// UnityEngine.GameObject LifeManager::gameOverScreen
	GameObject_t1756533147 * ___gameOverScreen_4;
	// System.Single LifeManager::waitAfterGameOver
	float ___waitAfterGameOver_5;
	// System.Int32 LifeManager::lifeCounter
	int32_t ___lifeCounter_6;
	// UnityEngine.UI.Text LifeManager::theText
	Text_t356221433 * ___theText_7;

public:
	inline static int32_t get_offset_of_thePlayer_2() { return static_cast<int32_t>(offsetof(LifeManager_t3097606751, ___thePlayer_2)); }
	inline PlayerController_t4148409433 * get_thePlayer_2() const { return ___thePlayer_2; }
	inline PlayerController_t4148409433 ** get_address_of_thePlayer_2() { return &___thePlayer_2; }
	inline void set_thePlayer_2(PlayerController_t4148409433 * value)
	{
		___thePlayer_2 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayer_2, value);
	}

	inline static int32_t get_offset_of_healthManager_3() { return static_cast<int32_t>(offsetof(LifeManager_t3097606751, ___healthManager_3)); }
	inline HealthManager_t1640282077 * get_healthManager_3() const { return ___healthManager_3; }
	inline HealthManager_t1640282077 ** get_address_of_healthManager_3() { return &___healthManager_3; }
	inline void set_healthManager_3(HealthManager_t1640282077 * value)
	{
		___healthManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___healthManager_3, value);
	}

	inline static int32_t get_offset_of_gameOverScreen_4() { return static_cast<int32_t>(offsetof(LifeManager_t3097606751, ___gameOverScreen_4)); }
	inline GameObject_t1756533147 * get_gameOverScreen_4() const { return ___gameOverScreen_4; }
	inline GameObject_t1756533147 ** get_address_of_gameOverScreen_4() { return &___gameOverScreen_4; }
	inline void set_gameOverScreen_4(GameObject_t1756533147 * value)
	{
		___gameOverScreen_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverScreen_4, value);
	}

	inline static int32_t get_offset_of_waitAfterGameOver_5() { return static_cast<int32_t>(offsetof(LifeManager_t3097606751, ___waitAfterGameOver_5)); }
	inline float get_waitAfterGameOver_5() const { return ___waitAfterGameOver_5; }
	inline float* get_address_of_waitAfterGameOver_5() { return &___waitAfterGameOver_5; }
	inline void set_waitAfterGameOver_5(float value)
	{
		___waitAfterGameOver_5 = value;
	}

	inline static int32_t get_offset_of_lifeCounter_6() { return static_cast<int32_t>(offsetof(LifeManager_t3097606751, ___lifeCounter_6)); }
	inline int32_t get_lifeCounter_6() const { return ___lifeCounter_6; }
	inline int32_t* get_address_of_lifeCounter_6() { return &___lifeCounter_6; }
	inline void set_lifeCounter_6(int32_t value)
	{
		___lifeCounter_6 = value;
	}

	inline static int32_t get_offset_of_theText_7() { return static_cast<int32_t>(offsetof(LifeManager_t3097606751, ___theText_7)); }
	inline Text_t356221433 * get_theText_7() const { return ___theText_7; }
	inline Text_t356221433 ** get_address_of_theText_7() { return &___theText_7; }
	inline void set_theText_7(Text_t356221433 * value)
	{
		___theText_7 = value;
		Il2CppCodeGenWriteBarrier(&___theText_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
