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
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_DateTime693205669.h"
#include "AssemblyU2DCSharp_RealTimeCountdown__unite3554025255.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RealTimeCountdown
struct  RealTimeCountdown_t642119280  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 RealTimeCountdown::countDownValue
	int32_t ___countDownValue_2;
	// UnityEngine.UI.Text RealTimeCountdown::txtTimeLeft
	Text_t356221433 * ___txtTimeLeft_3;
	// UnityEngine.GameObject RealTimeCountdown::button1
	GameObject_t1756533147 * ___button1_4;
	// System.DateTime RealTimeCountdown::target
	DateTime_t693205669  ___target_5;
	// RealTimeCountdown/_unite RealTimeCountdown::unite
	int32_t ___unite_6;

public:
	inline static int32_t get_offset_of_countDownValue_2() { return static_cast<int32_t>(offsetof(RealTimeCountdown_t642119280, ___countDownValue_2)); }
	inline int32_t get_countDownValue_2() const { return ___countDownValue_2; }
	inline int32_t* get_address_of_countDownValue_2() { return &___countDownValue_2; }
	inline void set_countDownValue_2(int32_t value)
	{
		___countDownValue_2 = value;
	}

	inline static int32_t get_offset_of_txtTimeLeft_3() { return static_cast<int32_t>(offsetof(RealTimeCountdown_t642119280, ___txtTimeLeft_3)); }
	inline Text_t356221433 * get_txtTimeLeft_3() const { return ___txtTimeLeft_3; }
	inline Text_t356221433 ** get_address_of_txtTimeLeft_3() { return &___txtTimeLeft_3; }
	inline void set_txtTimeLeft_3(Text_t356221433 * value)
	{
		___txtTimeLeft_3 = value;
		Il2CppCodeGenWriteBarrier(&___txtTimeLeft_3, value);
	}

	inline static int32_t get_offset_of_button1_4() { return static_cast<int32_t>(offsetof(RealTimeCountdown_t642119280, ___button1_4)); }
	inline GameObject_t1756533147 * get_button1_4() const { return ___button1_4; }
	inline GameObject_t1756533147 ** get_address_of_button1_4() { return &___button1_4; }
	inline void set_button1_4(GameObject_t1756533147 * value)
	{
		___button1_4 = value;
		Il2CppCodeGenWriteBarrier(&___button1_4, value);
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(RealTimeCountdown_t642119280, ___target_5)); }
	inline DateTime_t693205669  get_target_5() const { return ___target_5; }
	inline DateTime_t693205669 * get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(DateTime_t693205669  value)
	{
		___target_5 = value;
	}

	inline static int32_t get_offset_of_unite_6() { return static_cast<int32_t>(offsetof(RealTimeCountdown_t642119280, ___unite_6)); }
	inline int32_t get_unite_6() const { return ___unite_6; }
	inline int32_t* get_address_of_unite_6() { return &___unite_6; }
	inline void set_unite_6(int32_t value)
	{
		___unite_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
