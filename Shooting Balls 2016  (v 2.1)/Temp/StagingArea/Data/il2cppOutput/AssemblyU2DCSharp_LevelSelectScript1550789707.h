#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelSelectScript
struct  LevelSelectScript_t1550789707  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 LevelSelectScript::worldIndex
	int32_t ___worldIndex_2;
	// System.Int32 LevelSelectScript::levelIndex
	int32_t ___levelIndex_3;

public:
	inline static int32_t get_offset_of_worldIndex_2() { return static_cast<int32_t>(offsetof(LevelSelectScript_t1550789707, ___worldIndex_2)); }
	inline int32_t get_worldIndex_2() const { return ___worldIndex_2; }
	inline int32_t* get_address_of_worldIndex_2() { return &___worldIndex_2; }
	inline void set_worldIndex_2(int32_t value)
	{
		___worldIndex_2 = value;
	}

	inline static int32_t get_offset_of_levelIndex_3() { return static_cast<int32_t>(offsetof(LevelSelectScript_t1550789707, ___levelIndex_3)); }
	inline int32_t get_levelIndex_3() const { return ___levelIndex_3; }
	inline int32_t* get_address_of_levelIndex_3() { return &___levelIndex_3; }
	inline void set_levelIndex_3(int32_t value)
	{
		___levelIndex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
