#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenu2
struct  MainMenu2_t2130298492  : public MonoBehaviour_t1158329972
{
public:
	// System.String MainMenu2::levelSelect
	String_t* ___levelSelect_2;
	// System.Int32 MainMenu2::playerLives
	int32_t ___playerLives_3;
	// System.Int32 MainMenu2::playerHealth
	int32_t ___playerHealth_4;

public:
	inline static int32_t get_offset_of_levelSelect_2() { return static_cast<int32_t>(offsetof(MainMenu2_t2130298492, ___levelSelect_2)); }
	inline String_t* get_levelSelect_2() const { return ___levelSelect_2; }
	inline String_t** get_address_of_levelSelect_2() { return &___levelSelect_2; }
	inline void set_levelSelect_2(String_t* value)
	{
		___levelSelect_2 = value;
		Il2CppCodeGenWriteBarrier(&___levelSelect_2, value);
	}

	inline static int32_t get_offset_of_playerLives_3() { return static_cast<int32_t>(offsetof(MainMenu2_t2130298492, ___playerLives_3)); }
	inline int32_t get_playerLives_3() const { return ___playerLives_3; }
	inline int32_t* get_address_of_playerLives_3() { return &___playerLives_3; }
	inline void set_playerLives_3(int32_t value)
	{
		___playerLives_3 = value;
	}

	inline static int32_t get_offset_of_playerHealth_4() { return static_cast<int32_t>(offsetof(MainMenu2_t2130298492, ___playerHealth_4)); }
	inline int32_t get_playerHealth_4() const { return ___playerHealth_4; }
	inline int32_t* get_address_of_playerHealth_4() { return &___playerHealth_4; }
	inline void set_playerHealth_4(int32_t value)
	{
		___playerHealth_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
