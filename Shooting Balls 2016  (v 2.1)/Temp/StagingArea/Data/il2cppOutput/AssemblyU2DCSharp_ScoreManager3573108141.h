﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// BallScript
struct BallScript_t652658930;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreManager
struct  ScoreManager_t3573108141  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text ScoreManager::theText
	Text_t356221433 * ___theText_3;
	// BallScript ScoreManager::theBall
	BallScript_t652658930 * ___theBall_4;

public:
	inline static int32_t get_offset_of_theText_3() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___theText_3)); }
	inline Text_t356221433 * get_theText_3() const { return ___theText_3; }
	inline Text_t356221433 ** get_address_of_theText_3() { return &___theText_3; }
	inline void set_theText_3(Text_t356221433 * value)
	{
		___theText_3 = value;
		Il2CppCodeGenWriteBarrier(&___theText_3, value);
	}

	inline static int32_t get_offset_of_theBall_4() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___theBall_4)); }
	inline BallScript_t652658930 * get_theBall_4() const { return ___theBall_4; }
	inline BallScript_t652658930 ** get_address_of_theBall_4() { return &___theBall_4; }
	inline void set_theBall_4(BallScript_t652658930 * value)
	{
		___theBall_4 = value;
		Il2CppCodeGenWriteBarrier(&___theBall_4, value);
	}
};

struct ScoreManager_t3573108141_StaticFields
{
public:
	// System.Int32 ScoreManager::score
	int32_t ___score_2;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141_StaticFields, ___score_2)); }
	inline int32_t get_score_2() const { return ___score_2; }
	inline int32_t* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(int32_t value)
	{
		___score_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
