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

// MainMenu
struct  MainMenu_t4009084430  : public MonoBehaviour_t1158329972
{
public:
	// System.String MainMenu::startLevel
	String_t* ___startLevel_2;
	// System.String MainMenu::levelSelect
	String_t* ___levelSelect_3;
	// System.Int32 MainMenu::playerLives
	int32_t ___playerLives_4;
	// System.Int32 MainMenu::playerHealth
	int32_t ___playerHealth_5;

public:
	inline static int32_t get_offset_of_startLevel_2() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___startLevel_2)); }
	inline String_t* get_startLevel_2() const { return ___startLevel_2; }
	inline String_t** get_address_of_startLevel_2() { return &___startLevel_2; }
	inline void set_startLevel_2(String_t* value)
	{
		___startLevel_2 = value;
		Il2CppCodeGenWriteBarrier(&___startLevel_2, value);
	}

	inline static int32_t get_offset_of_levelSelect_3() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___levelSelect_3)); }
	inline String_t* get_levelSelect_3() const { return ___levelSelect_3; }
	inline String_t** get_address_of_levelSelect_3() { return &___levelSelect_3; }
	inline void set_levelSelect_3(String_t* value)
	{
		___levelSelect_3 = value;
		Il2CppCodeGenWriteBarrier(&___levelSelect_3, value);
	}

	inline static int32_t get_offset_of_playerLives_4() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___playerLives_4)); }
	inline int32_t get_playerLives_4() const { return ___playerLives_4; }
	inline int32_t* get_address_of_playerLives_4() { return &___playerLives_4; }
	inline void set_playerLives_4(int32_t value)
	{
		___playerLives_4 = value;
	}

	inline static int32_t get_offset_of_playerHealth_5() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___playerHealth_5)); }
	inline int32_t get_playerHealth_5() const { return ___playerHealth_5; }
	inline int32_t* get_address_of_playerHealth_5() { return &___playerHealth_5; }
	inline void set_playerHealth_5(int32_t value)
	{
		___playerHealth_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
