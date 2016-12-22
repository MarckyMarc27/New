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

// LockLevel
struct  LockLevel_t4086162027  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 LockLevel::worldIndex
	int32_t ___worldIndex_4;
	// System.Int32 LockLevel::levelIndex
	int32_t ___levelIndex_5;

public:
	inline static int32_t get_offset_of_worldIndex_4() { return static_cast<int32_t>(offsetof(LockLevel_t4086162027, ___worldIndex_4)); }
	inline int32_t get_worldIndex_4() const { return ___worldIndex_4; }
	inline int32_t* get_address_of_worldIndex_4() { return &___worldIndex_4; }
	inline void set_worldIndex_4(int32_t value)
	{
		___worldIndex_4 = value;
	}

	inline static int32_t get_offset_of_levelIndex_5() { return static_cast<int32_t>(offsetof(LockLevel_t4086162027, ___levelIndex_5)); }
	inline int32_t get_levelIndex_5() const { return ___levelIndex_5; }
	inline int32_t* get_address_of_levelIndex_5() { return &___levelIndex_5; }
	inline void set_levelIndex_5(int32_t value)
	{
		___levelIndex_5 = value;
	}
};

struct LockLevel_t4086162027_StaticFields
{
public:
	// System.Int32 LockLevel::worlds
	int32_t ___worlds_2;
	// System.Int32 LockLevel::levels
	int32_t ___levels_3;

public:
	inline static int32_t get_offset_of_worlds_2() { return static_cast<int32_t>(offsetof(LockLevel_t4086162027_StaticFields, ___worlds_2)); }
	inline int32_t get_worlds_2() const { return ___worlds_2; }
	inline int32_t* get_address_of_worlds_2() { return &___worlds_2; }
	inline void set_worlds_2(int32_t value)
	{
		___worlds_2 = value;
	}

	inline static int32_t get_offset_of_levels_3() { return static_cast<int32_t>(offsetof(LockLevel_t4086162027_StaticFields, ___levels_3)); }
	inline int32_t get_levels_3() const { return ___levels_3; }
	inline int32_t* get_address_of_levels_3() { return &___levels_3; }
	inline void set_levels_3(int32_t value)
	{
		___levels_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
