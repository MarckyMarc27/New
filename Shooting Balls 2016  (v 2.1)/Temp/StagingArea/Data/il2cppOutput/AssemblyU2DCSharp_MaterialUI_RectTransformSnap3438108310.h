#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.RectTransformSnap
struct  RectTransformSnap_t3438108310  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform MaterialUI.RectTransformSnap::targetRect
	RectTransform_t3349966182 * ___targetRect_2;
	// UnityEngine.RectTransform MaterialUI.RectTransformSnap::thisRect
	RectTransform_t3349966182 * ___thisRect_3;
	// System.Single MaterialUI.RectTransformSnap::xPadding
	float ___xPadding_4;
	// System.Single MaterialUI.RectTransformSnap::yPadding
	float ___yPadding_5;
	// System.Boolean MaterialUI.RectTransformSnap::percentage
	bool ___percentage_6;
	// System.Single MaterialUI.RectTransformSnap::xPercent
	float ___xPercent_7;
	// System.Single MaterialUI.RectTransformSnap::yPercent
	float ___yPercent_8;
	// System.Boolean MaterialUI.RectTransformSnap::snapEveryFrame
	bool ___snapEveryFrame_9;
	// System.Boolean MaterialUI.RectTransformSnap::sizeOnly
	bool ___sizeOnly_10;
	// UnityEngine.Rect MaterialUI.RectTransformSnap::lastRect
	Rect_t3681755626  ___lastRect_11;

public:
	inline static int32_t get_offset_of_targetRect_2() { return static_cast<int32_t>(offsetof(RectTransformSnap_t3438108310, ___targetRect_2)); }
	inline RectTransform_t3349966182 * get_targetRect_2() const { return ___targetRect_2; }
	inline RectTransform_t3349966182 ** get_address_of_targetRect_2() { return &___targetRect_2; }
	inline void set_targetRect_2(RectTransform_t3349966182 * value)
	{
		___targetRect_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetRect_2, value);
	}

	inline static int32_t get_offset_of_thisRect_3() { return static_cast<int32_t>(offsetof(RectTransformSnap_t3438108310, ___thisRect_3)); }
	inline RectTransform_t3349966182 * get_thisRect_3() const { return ___thisRect_3; }
	inline RectTransform_t3349966182 ** get_address_of_thisRect_3() { return &___thisRect_3; }
	inline void set_thisRect_3(RectTransform_t3349966182 * value)
	{
		___thisRect_3 = value;
		Il2CppCodeGenWriteBarrier(&___thisRect_3, value);
	}

	inline static int32_t get_offset_of_xPadding_4() { return static_cast<int32_t>(offsetof(RectTransformSnap_t3438108310, ___xPadding_4)); }
	inline float get_xPadding_4() const { return ___xPadding_4; }
	inline float* get_address_of_xPadding_4() { return &___xPadding_4; }
	inline void set_xPadding_4(float value)
	{
		___xPadding_4 = value;
	}

	inline static int32_t get_offset_of_yPadding_5() { return static_cast<int32_t>(offsetof(RectTransformSnap_t3438108310, ___yPadding_5)); }
	inline float get_yPadding_5() const { return ___yPadding_5; }
	inline float* get_address_of_yPadding_5() { return &___yPadding_5; }
	inline void set_yPadding_5(float value)
	{
		___yPadding_5 = value;
	}

	inline static int32_t get_offset_of_percentage_6() { return static_cast<int32_t>(offsetof(RectTransformSnap_t3438108310, ___percentage_6)); }
	inline bool get_percentage_6() const { return ___percentage_6; }
	inline bool* get_address_of_percentage_6() { return &___percentage_6; }
	inline void set_percentage_6(bool value)
	{
		___percentage_6 = value;
	}

	inline static int32_t get_offset_of_xPercent_7() { return static_cast<int32_t>(offsetof(RectTransformSnap_t3438108310, ___xPercent_7)); }
	inline float get_xPercent_7() const { return ___xPercent_7; }
	inline float* get_address_of_xPercent_7() { return &___xPercent_7; }
	inline void set_xPercent_7(float value)
	{
		___xPercent_7 = value;
	}

	inline static int32_t get_offset_of_yPercent_8() { return static_cast<int32_t>(offsetof(RectTransformSnap_t3438108310, ___yPercent_8)); }
	inline float get_yPercent_8() const { return ___yPercent_8; }
	inline float* get_address_of_yPercent_8() { return &___yPercent_8; }
	inline void set_yPercent_8(float value)
	{
		___yPercent_8 = value;
	}

	inline static int32_t get_offset_of_snapEveryFrame_9() { return static_cast<int32_t>(offsetof(RectTransformSnap_t3438108310, ___snapEveryFrame_9)); }
	inline bool get_snapEveryFrame_9() const { return ___snapEveryFrame_9; }
	inline bool* get_address_of_snapEveryFrame_9() { return &___snapEveryFrame_9; }
	inline void set_snapEveryFrame_9(bool value)
	{
		___snapEveryFrame_9 = value;
	}

	inline static int32_t get_offset_of_sizeOnly_10() { return static_cast<int32_t>(offsetof(RectTransformSnap_t3438108310, ___sizeOnly_10)); }
	inline bool get_sizeOnly_10() const { return ___sizeOnly_10; }
	inline bool* get_address_of_sizeOnly_10() { return &___sizeOnly_10; }
	inline void set_sizeOnly_10(bool value)
	{
		___sizeOnly_10 = value;
	}

	inline static int32_t get_offset_of_lastRect_11() { return static_cast<int32_t>(offsetof(RectTransformSnap_t3438108310, ___lastRect_11)); }
	inline Rect_t3681755626  get_lastRect_11() const { return ___lastRect_11; }
	inline Rect_t3681755626 * get_address_of_lastRect_11() { return &___lastRect_11; }
	inline void set_lastRect_11(Rect_t3681755626  value)
	{
		___lastRect_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
