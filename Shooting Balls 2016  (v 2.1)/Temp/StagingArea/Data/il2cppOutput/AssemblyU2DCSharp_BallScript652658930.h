#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// BallScript
struct BallScript_t652658930;
// PlayerController
struct PlayerController_t4148409433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallScript
struct  BallScript_t652658930  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BallScript::forceX
	float ___forceX_2;
	// System.Single BallScript::forceY
	float ___forceY_3;
	// UnityEngine.Rigidbody2D BallScript::myRB
	Rigidbody2D_t502193897 * ___myRB_4;
	// System.Boolean BallScript::moveLeft
	bool ___moveLeft_5;
	// System.Boolean BallScript::moveRight
	bool ___moveRight_6;
	// UnityEngine.GameObject BallScript::originalBall
	GameObject_t1756533147 * ___originalBall_7;
	// UnityEngine.GameObject BallScript::ball1
	GameObject_t1756533147 * ___ball1_8;
	// UnityEngine.GameObject BallScript::ball2
	GameObject_t1756533147 * ___ball2_9;
	// BallScript BallScript::ball1Script
	BallScript_t652658930 * ___ball1Script_10;
	// BallScript BallScript::ball2Script
	BallScript_t652658930 * ___ball2Script_11;
	// System.Int32 BallScript::pointsToGive
	int32_t ___pointsToGive_12;
	// PlayerController BallScript::thePlayer
	PlayerController_t4148409433 * ___thePlayer_13;

public:
	inline static int32_t get_offset_of_forceX_2() { return static_cast<int32_t>(offsetof(BallScript_t652658930, ___forceX_2)); }
	inline float get_forceX_2() const { return ___forceX_2; }
	inline float* get_address_of_forceX_2() { return &___forceX_2; }
	inline void set_forceX_2(float value)
	{
		___forceX_2 = value;
	}

	inline static int32_t get_offset_of_forceY_3() { return static_cast<int32_t>(offsetof(BallScript_t652658930, ___forceY_3)); }
	inline float get_forceY_3() const { return ___forceY_3; }
	inline float* get_address_of_forceY_3() { return &___forceY_3; }
	inline void set_forceY_3(float value)
	{
		___forceY_3 = value;
	}

	inline static int32_t get_offset_of_myRB_4() { return static_cast<int32_t>(offsetof(BallScript_t652658930, ___myRB_4)); }
	inline Rigidbody2D_t502193897 * get_myRB_4() const { return ___myRB_4; }
	inline Rigidbody2D_t502193897 ** get_address_of_myRB_4() { return &___myRB_4; }
	inline void set_myRB_4(Rigidbody2D_t502193897 * value)
	{
		___myRB_4 = value;
		Il2CppCodeGenWriteBarrier(&___myRB_4, value);
	}

	inline static int32_t get_offset_of_moveLeft_5() { return static_cast<int32_t>(offsetof(BallScript_t652658930, ___moveLeft_5)); }
	inline bool get_moveLeft_5() const { return ___moveLeft_5; }
	inline bool* get_address_of_moveLeft_5() { return &___moveLeft_5; }
	inline void set_moveLeft_5(bool value)
	{
		___moveLeft_5 = value;
	}

	inline static int32_t get_offset_of_moveRight_6() { return static_cast<int32_t>(offsetof(BallScript_t652658930, ___moveRight_6)); }
	inline bool get_moveRight_6() const { return ___moveRight_6; }
	inline bool* get_address_of_moveRight_6() { return &___moveRight_6; }
	inline void set_moveRight_6(bool value)
	{
		___moveRight_6 = value;
	}

	inline static int32_t get_offset_of_originalBall_7() { return static_cast<int32_t>(offsetof(BallScript_t652658930, ___originalBall_7)); }
	inline GameObject_t1756533147 * get_originalBall_7() const { return ___originalBall_7; }
	inline GameObject_t1756533147 ** get_address_of_originalBall_7() { return &___originalBall_7; }
	inline void set_originalBall_7(GameObject_t1756533147 * value)
	{
		___originalBall_7 = value;
		Il2CppCodeGenWriteBarrier(&___originalBall_7, value);
	}

	inline static int32_t get_offset_of_ball1_8() { return static_cast<int32_t>(offsetof(BallScript_t652658930, ___ball1_8)); }
	inline GameObject_t1756533147 * get_ball1_8() const { return ___ball1_8; }
	inline GameObject_t1756533147 ** get_address_of_ball1_8() { return &___ball1_8; }
	inline void set_ball1_8(GameObject_t1756533147 * value)
	{
		___ball1_8 = value;
		Il2CppCodeGenWriteBarrier(&___ball1_8, value);
	}

	inline static int32_t get_offset_of_ball2_9() { return static_cast<int32_t>(offsetof(BallScript_t652658930, ___ball2_9)); }
	inline GameObject_t1756533147 * get_ball2_9() const { return ___ball2_9; }
	inline GameObject_t1756533147 ** get_address_of_ball2_9() { return &___ball2_9; }
	inline void set_ball2_9(GameObject_t1756533147 * value)
	{
		___ball2_9 = value;
		Il2CppCodeGenWriteBarrier(&___ball2_9, value);
	}

	inline static int32_t get_offset_of_ball1Script_10() { return static_cast<int32_t>(offsetof(BallScript_t652658930, ___ball1Script_10)); }
	inline BallScript_t652658930 * get_ball1Script_10() const { return ___ball1Script_10; }
	inline BallScript_t652658930 ** get_address_of_ball1Script_10() { return &___ball1Script_10; }
	inline void set_ball1Script_10(BallScript_t652658930 * value)
	{
		___ball1Script_10 = value;
		Il2CppCodeGenWriteBarrier(&___ball1Script_10, value);
	}

	inline static int32_t get_offset_of_ball2Script_11() { return static_cast<int32_t>(offsetof(BallScript_t652658930, ___ball2Script_11)); }
	inline BallScript_t652658930 * get_ball2Script_11() const { return ___ball2Script_11; }
	inline BallScript_t652658930 ** get_address_of_ball2Script_11() { return &___ball2Script_11; }
	inline void set_ball2Script_11(BallScript_t652658930 * value)
	{
		___ball2Script_11 = value;
		Il2CppCodeGenWriteBarrier(&___ball2Script_11, value);
	}

	inline static int32_t get_offset_of_pointsToGive_12() { return static_cast<int32_t>(offsetof(BallScript_t652658930, ___pointsToGive_12)); }
	inline int32_t get_pointsToGive_12() const { return ___pointsToGive_12; }
	inline int32_t* get_address_of_pointsToGive_12() { return &___pointsToGive_12; }
	inline void set_pointsToGive_12(int32_t value)
	{
		___pointsToGive_12 = value;
	}

	inline static int32_t get_offset_of_thePlayer_13() { return static_cast<int32_t>(offsetof(BallScript_t652658930, ___thePlayer_13)); }
	inline PlayerController_t4148409433 * get_thePlayer_13() const { return ___thePlayer_13; }
	inline PlayerController_t4148409433 ** get_address_of_thePlayer_13() { return &___thePlayer_13; }
	inline void set_thePlayer_13(PlayerController_t4148409433 * value)
	{
		___thePlayer_13 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayer_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
