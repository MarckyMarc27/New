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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Rocket
struct  Rocket_t2293219652  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody2D Rocket::myRB
	Rigidbody2D_t502193897 * ___myRB_2;
	// System.Single Rocket::speed
	float ___speed_3;

public:
	inline static int32_t get_offset_of_myRB_2() { return static_cast<int32_t>(offsetof(Rocket_t2293219652, ___myRB_2)); }
	inline Rigidbody2D_t502193897 * get_myRB_2() const { return ___myRB_2; }
	inline Rigidbody2D_t502193897 ** get_address_of_myRB_2() { return &___myRB_2; }
	inline void set_myRB_2(Rigidbody2D_t502193897 * value)
	{
		___myRB_2 = value;
		Il2CppCodeGenWriteBarrier(&___myRB_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(Rocket_t2293219652, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
