#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// MaterialUI.CheckBoxToggler
struct CheckBoxToggler_t1562645611;
// MaterialUI.RippleConfig
struct RippleConfig_t3939821922;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t1030026315;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.RadioConfig
struct  RadioConfig_t1830344595  : public MonoBehaviour_t1158329972
{
public:
	// System.Single MaterialUI.RadioConfig::animationDuration
	float ___animationDuration_2;
	// UnityEngine.Color MaterialUI.RadioConfig::onColor
	Color_t2020392075  ___onColor_3;
	// UnityEngine.Color MaterialUI.RadioConfig::offColor
	Color_t2020392075  ___offColor_4;
	// UnityEngine.Color MaterialUI.RadioConfig::disabledColor
	Color_t2020392075  ___disabledColor_5;
	// System.Boolean MaterialUI.RadioConfig::changeTextColor
	bool ___changeTextColor_6;
	// UnityEngine.Color MaterialUI.RadioConfig::textNormalColor
	Color_t2020392075  ___textNormalColor_7;
	// UnityEngine.Color MaterialUI.RadioConfig::textDisabledColor
	Color_t2020392075  ___textDisabledColor_8;
	// System.Boolean MaterialUI.RadioConfig::changeRippleColor
	bool ___changeRippleColor_9;
	// UnityEngine.UI.Image MaterialUI.RadioConfig::dotImage
	Image_t2042527209 * ___dotImage_10;
	// UnityEngine.UI.Image MaterialUI.RadioConfig::ringImage
	Image_t2042527209 * ___ringImage_11;
	// UnityEngine.UI.Text MaterialUI.RadioConfig::text
	Text_t356221433 * ___text_12;
	// UnityEngine.RectTransform MaterialUI.RadioConfig::dotRectTransform
	RectTransform_t3349966182 * ___dotRectTransform_13;
	// MaterialUI.CheckBoxToggler MaterialUI.RadioConfig::checkBoxToggler
	CheckBoxToggler_t1562645611 * ___checkBoxToggler_14;
	// MaterialUI.RippleConfig MaterialUI.RadioConfig::rippleConfig
	RippleConfig_t3939821922 * ___rippleConfig_15;
	// UnityEngine.UI.Toggle MaterialUI.RadioConfig::toggle
	Toggle_t3976754468 * ___toggle_16;
	// UnityEngine.UI.ToggleGroup MaterialUI.RadioConfig::toggleGroup
	ToggleGroup_t1030026315 * ___toggleGroup_17;
	// System.Boolean MaterialUI.RadioConfig::lastToggleInteractableState
	bool ___lastToggleInteractableState_18;
	// System.Boolean MaterialUI.RadioConfig::lastToggleState
	bool ___lastToggleState_19;
	// System.Single MaterialUI.RadioConfig::currentDotSize
	float ___currentDotSize_20;
	// UnityEngine.Color MaterialUI.RadioConfig::currentColor
	Color_t2020392075  ___currentColor_21;
	// UnityEngine.Color MaterialUI.RadioConfig::currentTextColor
	Color_t2020392075  ___currentTextColor_22;
	// UnityEngine.Vector3 MaterialUI.RadioConfig::tempVector3
	Vector3_t2243707580  ___tempVector3_23;
	// UnityEngine.Color MaterialUI.RadioConfig::tempColor
	Color_t2020392075  ___tempColor_24;
	// System.Int32 MaterialUI.RadioConfig::state
	int32_t ___state_25;
	// System.Single MaterialUI.RadioConfig::animStartTime
	float ___animStartTime_26;
	// System.Single MaterialUI.RadioConfig::animDeltaTime
	float ___animDeltaTime_27;

public:
	inline static int32_t get_offset_of_animationDuration_2() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___animationDuration_2)); }
	inline float get_animationDuration_2() const { return ___animationDuration_2; }
	inline float* get_address_of_animationDuration_2() { return &___animationDuration_2; }
	inline void set_animationDuration_2(float value)
	{
		___animationDuration_2 = value;
	}

	inline static int32_t get_offset_of_onColor_3() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___onColor_3)); }
	inline Color_t2020392075  get_onColor_3() const { return ___onColor_3; }
	inline Color_t2020392075 * get_address_of_onColor_3() { return &___onColor_3; }
	inline void set_onColor_3(Color_t2020392075  value)
	{
		___onColor_3 = value;
	}

	inline static int32_t get_offset_of_offColor_4() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___offColor_4)); }
	inline Color_t2020392075  get_offColor_4() const { return ___offColor_4; }
	inline Color_t2020392075 * get_address_of_offColor_4() { return &___offColor_4; }
	inline void set_offColor_4(Color_t2020392075  value)
	{
		___offColor_4 = value;
	}

	inline static int32_t get_offset_of_disabledColor_5() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___disabledColor_5)); }
	inline Color_t2020392075  get_disabledColor_5() const { return ___disabledColor_5; }
	inline Color_t2020392075 * get_address_of_disabledColor_5() { return &___disabledColor_5; }
	inline void set_disabledColor_5(Color_t2020392075  value)
	{
		___disabledColor_5 = value;
	}

	inline static int32_t get_offset_of_changeTextColor_6() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___changeTextColor_6)); }
	inline bool get_changeTextColor_6() const { return ___changeTextColor_6; }
	inline bool* get_address_of_changeTextColor_6() { return &___changeTextColor_6; }
	inline void set_changeTextColor_6(bool value)
	{
		___changeTextColor_6 = value;
	}

	inline static int32_t get_offset_of_textNormalColor_7() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___textNormalColor_7)); }
	inline Color_t2020392075  get_textNormalColor_7() const { return ___textNormalColor_7; }
	inline Color_t2020392075 * get_address_of_textNormalColor_7() { return &___textNormalColor_7; }
	inline void set_textNormalColor_7(Color_t2020392075  value)
	{
		___textNormalColor_7 = value;
	}

	inline static int32_t get_offset_of_textDisabledColor_8() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___textDisabledColor_8)); }
	inline Color_t2020392075  get_textDisabledColor_8() const { return ___textDisabledColor_8; }
	inline Color_t2020392075 * get_address_of_textDisabledColor_8() { return &___textDisabledColor_8; }
	inline void set_textDisabledColor_8(Color_t2020392075  value)
	{
		___textDisabledColor_8 = value;
	}

	inline static int32_t get_offset_of_changeRippleColor_9() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___changeRippleColor_9)); }
	inline bool get_changeRippleColor_9() const { return ___changeRippleColor_9; }
	inline bool* get_address_of_changeRippleColor_9() { return &___changeRippleColor_9; }
	inline void set_changeRippleColor_9(bool value)
	{
		___changeRippleColor_9 = value;
	}

	inline static int32_t get_offset_of_dotImage_10() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___dotImage_10)); }
	inline Image_t2042527209 * get_dotImage_10() const { return ___dotImage_10; }
	inline Image_t2042527209 ** get_address_of_dotImage_10() { return &___dotImage_10; }
	inline void set_dotImage_10(Image_t2042527209 * value)
	{
		___dotImage_10 = value;
		Il2CppCodeGenWriteBarrier(&___dotImage_10, value);
	}

	inline static int32_t get_offset_of_ringImage_11() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___ringImage_11)); }
	inline Image_t2042527209 * get_ringImage_11() const { return ___ringImage_11; }
	inline Image_t2042527209 ** get_address_of_ringImage_11() { return &___ringImage_11; }
	inline void set_ringImage_11(Image_t2042527209 * value)
	{
		___ringImage_11 = value;
		Il2CppCodeGenWriteBarrier(&___ringImage_11, value);
	}

	inline static int32_t get_offset_of_text_12() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___text_12)); }
	inline Text_t356221433 * get_text_12() const { return ___text_12; }
	inline Text_t356221433 ** get_address_of_text_12() { return &___text_12; }
	inline void set_text_12(Text_t356221433 * value)
	{
		___text_12 = value;
		Il2CppCodeGenWriteBarrier(&___text_12, value);
	}

	inline static int32_t get_offset_of_dotRectTransform_13() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___dotRectTransform_13)); }
	inline RectTransform_t3349966182 * get_dotRectTransform_13() const { return ___dotRectTransform_13; }
	inline RectTransform_t3349966182 ** get_address_of_dotRectTransform_13() { return &___dotRectTransform_13; }
	inline void set_dotRectTransform_13(RectTransform_t3349966182 * value)
	{
		___dotRectTransform_13 = value;
		Il2CppCodeGenWriteBarrier(&___dotRectTransform_13, value);
	}

	inline static int32_t get_offset_of_checkBoxToggler_14() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___checkBoxToggler_14)); }
	inline CheckBoxToggler_t1562645611 * get_checkBoxToggler_14() const { return ___checkBoxToggler_14; }
	inline CheckBoxToggler_t1562645611 ** get_address_of_checkBoxToggler_14() { return &___checkBoxToggler_14; }
	inline void set_checkBoxToggler_14(CheckBoxToggler_t1562645611 * value)
	{
		___checkBoxToggler_14 = value;
		Il2CppCodeGenWriteBarrier(&___checkBoxToggler_14, value);
	}

	inline static int32_t get_offset_of_rippleConfig_15() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___rippleConfig_15)); }
	inline RippleConfig_t3939821922 * get_rippleConfig_15() const { return ___rippleConfig_15; }
	inline RippleConfig_t3939821922 ** get_address_of_rippleConfig_15() { return &___rippleConfig_15; }
	inline void set_rippleConfig_15(RippleConfig_t3939821922 * value)
	{
		___rippleConfig_15 = value;
		Il2CppCodeGenWriteBarrier(&___rippleConfig_15, value);
	}

	inline static int32_t get_offset_of_toggle_16() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___toggle_16)); }
	inline Toggle_t3976754468 * get_toggle_16() const { return ___toggle_16; }
	inline Toggle_t3976754468 ** get_address_of_toggle_16() { return &___toggle_16; }
	inline void set_toggle_16(Toggle_t3976754468 * value)
	{
		___toggle_16 = value;
		Il2CppCodeGenWriteBarrier(&___toggle_16, value);
	}

	inline static int32_t get_offset_of_toggleGroup_17() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___toggleGroup_17)); }
	inline ToggleGroup_t1030026315 * get_toggleGroup_17() const { return ___toggleGroup_17; }
	inline ToggleGroup_t1030026315 ** get_address_of_toggleGroup_17() { return &___toggleGroup_17; }
	inline void set_toggleGroup_17(ToggleGroup_t1030026315 * value)
	{
		___toggleGroup_17 = value;
		Il2CppCodeGenWriteBarrier(&___toggleGroup_17, value);
	}

	inline static int32_t get_offset_of_lastToggleInteractableState_18() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___lastToggleInteractableState_18)); }
	inline bool get_lastToggleInteractableState_18() const { return ___lastToggleInteractableState_18; }
	inline bool* get_address_of_lastToggleInteractableState_18() { return &___lastToggleInteractableState_18; }
	inline void set_lastToggleInteractableState_18(bool value)
	{
		___lastToggleInteractableState_18 = value;
	}

	inline static int32_t get_offset_of_lastToggleState_19() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___lastToggleState_19)); }
	inline bool get_lastToggleState_19() const { return ___lastToggleState_19; }
	inline bool* get_address_of_lastToggleState_19() { return &___lastToggleState_19; }
	inline void set_lastToggleState_19(bool value)
	{
		___lastToggleState_19 = value;
	}

	inline static int32_t get_offset_of_currentDotSize_20() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___currentDotSize_20)); }
	inline float get_currentDotSize_20() const { return ___currentDotSize_20; }
	inline float* get_address_of_currentDotSize_20() { return &___currentDotSize_20; }
	inline void set_currentDotSize_20(float value)
	{
		___currentDotSize_20 = value;
	}

	inline static int32_t get_offset_of_currentColor_21() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___currentColor_21)); }
	inline Color_t2020392075  get_currentColor_21() const { return ___currentColor_21; }
	inline Color_t2020392075 * get_address_of_currentColor_21() { return &___currentColor_21; }
	inline void set_currentColor_21(Color_t2020392075  value)
	{
		___currentColor_21 = value;
	}

	inline static int32_t get_offset_of_currentTextColor_22() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___currentTextColor_22)); }
	inline Color_t2020392075  get_currentTextColor_22() const { return ___currentTextColor_22; }
	inline Color_t2020392075 * get_address_of_currentTextColor_22() { return &___currentTextColor_22; }
	inline void set_currentTextColor_22(Color_t2020392075  value)
	{
		___currentTextColor_22 = value;
	}

	inline static int32_t get_offset_of_tempVector3_23() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___tempVector3_23)); }
	inline Vector3_t2243707580  get_tempVector3_23() const { return ___tempVector3_23; }
	inline Vector3_t2243707580 * get_address_of_tempVector3_23() { return &___tempVector3_23; }
	inline void set_tempVector3_23(Vector3_t2243707580  value)
	{
		___tempVector3_23 = value;
	}

	inline static int32_t get_offset_of_tempColor_24() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___tempColor_24)); }
	inline Color_t2020392075  get_tempColor_24() const { return ___tempColor_24; }
	inline Color_t2020392075 * get_address_of_tempColor_24() { return &___tempColor_24; }
	inline void set_tempColor_24(Color_t2020392075  value)
	{
		___tempColor_24 = value;
	}

	inline static int32_t get_offset_of_state_25() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___state_25)); }
	inline int32_t get_state_25() const { return ___state_25; }
	inline int32_t* get_address_of_state_25() { return &___state_25; }
	inline void set_state_25(int32_t value)
	{
		___state_25 = value;
	}

	inline static int32_t get_offset_of_animStartTime_26() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___animStartTime_26)); }
	inline float get_animStartTime_26() const { return ___animStartTime_26; }
	inline float* get_address_of_animStartTime_26() { return &___animStartTime_26; }
	inline void set_animStartTime_26(float value)
	{
		___animStartTime_26 = value;
	}

	inline static int32_t get_offset_of_animDeltaTime_27() { return static_cast<int32_t>(offsetof(RadioConfig_t1830344595, ___animDeltaTime_27)); }
	inline float get_animDeltaTime_27() const { return ___animDeltaTime_27; }
	inline float* get_address_of_animDeltaTime_27() { return &___animDeltaTime_27; }
	inline void set_animDeltaTime_27(float value)
	{
		___animDeltaTime_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
