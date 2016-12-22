#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ToggleTextChanger
struct  ToggleTextChanger_t2733835853  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text ToggleTextChanger::thisText
	Text_t356221433 * ___thisText_2;
	// System.String ToggleTextChanger::onText
	String_t* ___onText_3;
	// System.String ToggleTextChanger::offText
	String_t* ___offText_4;

public:
	inline static int32_t get_offset_of_thisText_2() { return static_cast<int32_t>(offsetof(ToggleTextChanger_t2733835853, ___thisText_2)); }
	inline Text_t356221433 * get_thisText_2() const { return ___thisText_2; }
	inline Text_t356221433 ** get_address_of_thisText_2() { return &___thisText_2; }
	inline void set_thisText_2(Text_t356221433 * value)
	{
		___thisText_2 = value;
		Il2CppCodeGenWriteBarrier(&___thisText_2, value);
	}

	inline static int32_t get_offset_of_onText_3() { return static_cast<int32_t>(offsetof(ToggleTextChanger_t2733835853, ___onText_3)); }
	inline String_t* get_onText_3() const { return ___onText_3; }
	inline String_t** get_address_of_onText_3() { return &___onText_3; }
	inline void set_onText_3(String_t* value)
	{
		___onText_3 = value;
		Il2CppCodeGenWriteBarrier(&___onText_3, value);
	}

	inline static int32_t get_offset_of_offText_4() { return static_cast<int32_t>(offsetof(ToggleTextChanger_t2733835853, ___offText_4)); }
	inline String_t* get_offText_4() const { return ___offText_4; }
	inline String_t** get_address_of_offText_4() { return &___offText_4; }
	inline void set_offText_4(String_t* value)
	{
		___offText_4 = value;
		Il2CppCodeGenWriteBarrier(&___offText_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
