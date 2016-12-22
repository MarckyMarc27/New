#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Animator
struct Animator_t69676727;
// BallScript
struct BallScript_t652658930;
// LifeManager
struct LifeManager_t3097606751;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PlayerController::rocket
	GameObject_t1756533147 * ___rocket_2;
	// System.Single PlayerController::speed
	float ___speed_3;
	// System.Single PlayerController::maxVelocity
	float ___maxVelocity_4;
	// UnityEngine.Rigidbody2D PlayerController::myRB
	Rigidbody2D_t502193897 * ___myRB_5;
	// UnityEngine.Animator PlayerController::anim
	Animator_t69676727 * ___anim_6;
	// BallScript PlayerController::theBall
	BallScript_t652658930 * ___theBall_7;
	// System.Boolean PlayerController::canShoot
	bool ___canShoot_8;
	// System.Boolean PlayerController::canWalk
	bool ___canWalk_9;
	// LifeManager PlayerController::lives
	LifeManager_t3097606751 * ___lives_10;
	// System.String PlayerController::currentLevel
	String_t* ___currentLevel_11;
	// System.Int32 PlayerController::worldIndex
	int32_t ___worldIndex_12;
	// System.Int32 PlayerController::levelIndex
	int32_t ___levelIndex_13;
	// System.Boolean PlayerController::wonTheGame
	bool ___wonTheGame_14;

public:
	inline static int32_t get_offset_of_rocket_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___rocket_2)); }
	inline GameObject_t1756533147 * get_rocket_2() const { return ___rocket_2; }
	inline GameObject_t1756533147 ** get_address_of_rocket_2() { return &___rocket_2; }
	inline void set_rocket_2(GameObject_t1756533147 * value)
	{
		___rocket_2 = value;
		Il2CppCodeGenWriteBarrier(&___rocket_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_maxVelocity_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___maxVelocity_4)); }
	inline float get_maxVelocity_4() const { return ___maxVelocity_4; }
	inline float* get_address_of_maxVelocity_4() { return &___maxVelocity_4; }
	inline void set_maxVelocity_4(float value)
	{
		___maxVelocity_4 = value;
	}

	inline static int32_t get_offset_of_myRB_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___myRB_5)); }
	inline Rigidbody2D_t502193897 * get_myRB_5() const { return ___myRB_5; }
	inline Rigidbody2D_t502193897 ** get_address_of_myRB_5() { return &___myRB_5; }
	inline void set_myRB_5(Rigidbody2D_t502193897 * value)
	{
		___myRB_5 = value;
		Il2CppCodeGenWriteBarrier(&___myRB_5, value);
	}

	inline static int32_t get_offset_of_anim_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___anim_6)); }
	inline Animator_t69676727 * get_anim_6() const { return ___anim_6; }
	inline Animator_t69676727 ** get_address_of_anim_6() { return &___anim_6; }
	inline void set_anim_6(Animator_t69676727 * value)
	{
		___anim_6 = value;
		Il2CppCodeGenWriteBarrier(&___anim_6, value);
	}

	inline static int32_t get_offset_of_theBall_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___theBall_7)); }
	inline BallScript_t652658930 * get_theBall_7() const { return ___theBall_7; }
	inline BallScript_t652658930 ** get_address_of_theBall_7() { return &___theBall_7; }
	inline void set_theBall_7(BallScript_t652658930 * value)
	{
		___theBall_7 = value;
		Il2CppCodeGenWriteBarrier(&___theBall_7, value);
	}

	inline static int32_t get_offset_of_canShoot_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___canShoot_8)); }
	inline bool get_canShoot_8() const { return ___canShoot_8; }
	inline bool* get_address_of_canShoot_8() { return &___canShoot_8; }
	inline void set_canShoot_8(bool value)
	{
		___canShoot_8 = value;
	}

	inline static int32_t get_offset_of_canWalk_9() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___canWalk_9)); }
	inline bool get_canWalk_9() const { return ___canWalk_9; }
	inline bool* get_address_of_canWalk_9() { return &___canWalk_9; }
	inline void set_canWalk_9(bool value)
	{
		___canWalk_9 = value;
	}

	inline static int32_t get_offset_of_lives_10() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___lives_10)); }
	inline LifeManager_t3097606751 * get_lives_10() const { return ___lives_10; }
	inline LifeManager_t3097606751 ** get_address_of_lives_10() { return &___lives_10; }
	inline void set_lives_10(LifeManager_t3097606751 * value)
	{
		___lives_10 = value;
		Il2CppCodeGenWriteBarrier(&___lives_10, value);
	}

	inline static int32_t get_offset_of_currentLevel_11() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___currentLevel_11)); }
	inline String_t* get_currentLevel_11() const { return ___currentLevel_11; }
	inline String_t** get_address_of_currentLevel_11() { return &___currentLevel_11; }
	inline void set_currentLevel_11(String_t* value)
	{
		___currentLevel_11 = value;
		Il2CppCodeGenWriteBarrier(&___currentLevel_11, value);
	}

	inline static int32_t get_offset_of_worldIndex_12() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___worldIndex_12)); }
	inline int32_t get_worldIndex_12() const { return ___worldIndex_12; }
	inline int32_t* get_address_of_worldIndex_12() { return &___worldIndex_12; }
	inline void set_worldIndex_12(int32_t value)
	{
		___worldIndex_12 = value;
	}

	inline static int32_t get_offset_of_levelIndex_13() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___levelIndex_13)); }
	inline int32_t get_levelIndex_13() const { return ___levelIndex_13; }
	inline int32_t* get_address_of_levelIndex_13() { return &___levelIndex_13; }
	inline void set_levelIndex_13(int32_t value)
	{
		___levelIndex_13 = value;
	}

	inline static int32_t get_offset_of_wonTheGame_14() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___wonTheGame_14)); }
	inline bool get_wonTheGame_14() const { return ___wonTheGame_14; }
	inline bool* get_address_of_wonTheGame_14() { return &___wonTheGame_14; }
	inline void set_wonTheGame_14(bool value)
	{
		___wonTheGame_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
