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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIScript
struct  UIScript_t817066213  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text UIScript::Nom
	Text_t356221433 * ___Nom_2;
	// UnityEngine.UI.Text UIScript::Score
	Text_t356221433 * ___Score_3;

public:
	inline static int32_t get_offset_of_Nom_2() { return static_cast<int32_t>(offsetof(UIScript_t817066213, ___Nom_2)); }
	inline Text_t356221433 * get_Nom_2() const { return ___Nom_2; }
	inline Text_t356221433 ** get_address_of_Nom_2() { return &___Nom_2; }
	inline void set_Nom_2(Text_t356221433 * value)
	{
		___Nom_2 = value;
		Il2CppCodeGenWriteBarrier(&___Nom_2, value);
	}

	inline static int32_t get_offset_of_Score_3() { return static_cast<int32_t>(offsetof(UIScript_t817066213, ___Score_3)); }
	inline Text_t356221433 * get_Score_3() const { return ___Score_3; }
	inline Text_t356221433 ** get_address_of_Score_3() { return &___Score_3; }
	inline void set_Score_3(Text_t356221433 * value)
	{
		___Score_3 = value;
		Il2CppCodeGenWriteBarrier(&___Score_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
