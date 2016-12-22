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
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseMenu
struct  PauseMenu_t2596728003  : public MonoBehaviour_t1158329972
{
public:
	// System.String PauseMenu::levelSelect
	String_t* ___levelSelect_2;
	// System.String PauseMenu::mainMenu
	String_t* ___mainMenu_3;
	// System.Boolean PauseMenu::isPaused
	bool ___isPaused_4;
	// UnityEngine.GameObject PauseMenu::pauseMenuScreen
	GameObject_t1756533147 * ___pauseMenuScreen_5;

public:
	inline static int32_t get_offset_of_levelSelect_2() { return static_cast<int32_t>(offsetof(PauseMenu_t2596728003, ___levelSelect_2)); }
	inline String_t* get_levelSelect_2() const { return ___levelSelect_2; }
	inline String_t** get_address_of_levelSelect_2() { return &___levelSelect_2; }
	inline void set_levelSelect_2(String_t* value)
	{
		___levelSelect_2 = value;
		Il2CppCodeGenWriteBarrier(&___levelSelect_2, value);
	}

	inline static int32_t get_offset_of_mainMenu_3() { return static_cast<int32_t>(offsetof(PauseMenu_t2596728003, ___mainMenu_3)); }
	inline String_t* get_mainMenu_3() const { return ___mainMenu_3; }
	inline String_t** get_address_of_mainMenu_3() { return &___mainMenu_3; }
	inline void set_mainMenu_3(String_t* value)
	{
		___mainMenu_3 = value;
		Il2CppCodeGenWriteBarrier(&___mainMenu_3, value);
	}

	inline static int32_t get_offset_of_isPaused_4() { return static_cast<int32_t>(offsetof(PauseMenu_t2596728003, ___isPaused_4)); }
	inline bool get_isPaused_4() const { return ___isPaused_4; }
	inline bool* get_address_of_isPaused_4() { return &___isPaused_4; }
	inline void set_isPaused_4(bool value)
	{
		___isPaused_4 = value;
	}

	inline static int32_t get_offset_of_pauseMenuScreen_5() { return static_cast<int32_t>(offsetof(PauseMenu_t2596728003, ___pauseMenuScreen_5)); }
	inline GameObject_t1756533147 * get_pauseMenuScreen_5() const { return ___pauseMenuScreen_5; }
	inline GameObject_t1756533147 ** get_address_of_pauseMenuScreen_5() { return &___pauseMenuScreen_5; }
	inline void set_pauseMenuScreen_5(GameObject_t1756533147 * value)
	{
		___pauseMenuScreen_5 = value;
		Il2CppCodeGenWriteBarrier(&___pauseMenuScreen_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
