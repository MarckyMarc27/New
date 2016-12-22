﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.TextInputLine
struct  TextInputLine_t3363231573  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Color MaterialUI.TextInputLine::lineColor
	Color_t2020392075  ___lineColor_2;
	// UnityEngine.RectTransform MaterialUI.TextInputLine::thisRect
	RectTransform_t3349966182 * ___thisRect_3;
	// UnityEngine.UI.Image MaterialUI.TextInputLine::thisIm
	Image_t2042527209 * ___thisIm_4;
	// UnityEngine.UI.Text MaterialUI.TextInputLine::placeholderText
	Text_t356221433 * ___placeholderText_5;
	// UnityEngine.RectTransform MaterialUI.TextInputLine::textInputRect
	RectTransform_t3349966182 * ___textInputRect_6;
	// System.Single MaterialUI.TextInputLine::animStartTime
	float ___animStartTime_7;
	// System.Single MaterialUI.TextInputLine::animDeltaTime
	float ___animDeltaTime_8;
	// System.Single MaterialUI.TextInputLine::animPosX
	float ___animPosX_9;
	// System.Int32 MaterialUI.TextInputLine::mode
	int32_t ___mode_10;

public:
	inline static int32_t get_offset_of_lineColor_2() { return static_cast<int32_t>(offsetof(TextInputLine_t3363231573, ___lineColor_2)); }
	inline Color_t2020392075  get_lineColor_2() const { return ___lineColor_2; }
	inline Color_t2020392075 * get_address_of_lineColor_2() { return &___lineColor_2; }
	inline void set_lineColor_2(Color_t2020392075  value)
	{
		___lineColor_2 = value;
	}

	inline static int32_t get_offset_of_thisRect_3() { return static_cast<int32_t>(offsetof(TextInputLine_t3363231573, ___thisRect_3)); }
	inline RectTransform_t3349966182 * get_thisRect_3() const { return ___thisRect_3; }
	inline RectTransform_t3349966182 ** get_address_of_thisRect_3() { return &___thisRect_3; }
	inline void set_thisRect_3(RectTransform_t3349966182 * value)
	{
		___thisRect_3 = value;
		Il2CppCodeGenWriteBarrier(&___thisRect_3, value);
	}

	inline static int32_t get_offset_of_thisIm_4() { return static_cast<int32_t>(offsetof(TextInputLine_t3363231573, ___thisIm_4)); }
	inline Image_t2042527209 * get_thisIm_4() const { return ___thisIm_4; }
	inline Image_t2042527209 ** get_address_of_thisIm_4() { return &___thisIm_4; }
	inline void set_thisIm_4(Image_t2042527209 * value)
	{
		___thisIm_4 = value;
		Il2CppCodeGenWriteBarrier(&___thisIm_4, value);
	}

	inline static int32_t get_offset_of_placeholderText_5() { return static_cast<int32_t>(offsetof(TextInputLine_t3363231573, ___placeholderText_5)); }
	inline Text_t356221433 * get_placeholderText_5() const { return ___placeholderText_5; }
	inline Text_t356221433 ** get_address_of_placeholderText_5() { return &___placeholderText_5; }
	inline void set_placeholderText_5(Text_t356221433 * value)
	{
		___placeholderText_5 = value;
		Il2CppCodeGenWriteBarrier(&___placeholderText_5, value);
	}

	inline static int32_t get_offset_of_textInputRect_6() { return static_cast<int32_t>(offsetof(TextInputLine_t3363231573, ___textInputRect_6)); }
	inline RectTransform_t3349966182 * get_textInputRect_6() const { return ___textInputRect_6; }
	inline RectTransform_t3349966182 ** get_address_of_textInputRect_6() { return &___textInputRect_6; }
	inline void set_textInputRect_6(RectTransform_t3349966182 * value)
	{
		___textInputRect_6 = value;
		Il2CppCodeGenWriteBarrier(&___textInputRect_6, value);
	}

	inline static int32_t get_offset_of_animStartTime_7() { return static_cast<int32_t>(offsetof(TextInputLine_t3363231573, ___animStartTime_7)); }
	inline float get_animStartTime_7() const { return ___animStartTime_7; }
	inline float* get_address_of_animStartTime_7() { return &___animStartTime_7; }
	inline void set_animStartTime_7(float value)
	{
		___animStartTime_7 = value;
	}

	inline static int32_t get_offset_of_animDeltaTime_8() { return static_cast<int32_t>(offsetof(TextInputLine_t3363231573, ___animDeltaTime_8)); }
	inline float get_animDeltaTime_8() const { return ___animDeltaTime_8; }
	inline float* get_address_of_animDeltaTime_8() { return &___animDeltaTime_8; }
	inline void set_animDeltaTime_8(float value)
	{
		___animDeltaTime_8 = value;
	}

	inline static int32_t get_offset_of_animPosX_9() { return static_cast<int32_t>(offsetof(TextInputLine_t3363231573, ___animPosX_9)); }
	inline float get_animPosX_9() const { return ___animPosX_9; }
	inline float* get_address_of_animPosX_9() { return &___animPosX_9; }
	inline void set_animPosX_9(float value)
	{
		___animPosX_9 = value;
	}

	inline static int32_t get_offset_of_mode_10() { return static_cast<int32_t>(offsetof(TextInputLine_t3363231573, ___mode_10)); }
	inline int32_t get_mode_10() const { return ___mode_10; }
	inline int32_t* get_address_of_mode_10() { return &___mode_10; }
	inline void set_mode_10(int32_t value)
	{
		___mode_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
