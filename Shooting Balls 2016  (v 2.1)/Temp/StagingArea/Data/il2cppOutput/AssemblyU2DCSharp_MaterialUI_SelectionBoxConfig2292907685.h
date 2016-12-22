#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MaterialUI.ShadowConfig
struct ShadowConfig_t3579754142;
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// MaterialUI.RippleConfig
struct RippleConfig_t3939821922;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3296560743;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// MaterialUI.SelectionBoxConfig/PickItem
struct PickItem_t4096300763;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_MaterialUI_SelectionBoxConfig_Hi2592591171.h"
#include "AssemblyU2DCSharp_MaterialUI_SelectionBoxConfig_Po2848556513.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.SelectionBoxConfig
struct  SelectionBoxConfig_t2292907685  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean MaterialUI.SelectionBoxConfig::rippleEnabled
	bool ___rippleEnabled_2;
	// System.Int32 MaterialUI.SelectionBoxConfig::rippleSize
	int32_t ___rippleSize_3;
	// System.Single MaterialUI.SelectionBoxConfig::rippleSpeed
	float ___rippleSpeed_4;
	// UnityEngine.Color MaterialUI.SelectionBoxConfig::rippleColor
	Color_t2020392075  ___rippleColor_5;
	// System.Single MaterialUI.SelectionBoxConfig::rippleStartAlpha
	float ___rippleStartAlpha_6;
	// System.Single MaterialUI.SelectionBoxConfig::rippleEndAlpha
	float ___rippleEndAlpha_7;
	// MaterialUI.SelectionBoxConfig/HighlightActive MaterialUI.SelectionBoxConfig::highlightWhen
	int32_t ___highlightWhen_8;
	// System.Boolean MaterialUI.SelectionBoxConfig::moveTowardCenter
	bool ___moveTowardCenter_9;
	// System.Boolean MaterialUI.SelectionBoxConfig::toggleMask
	bool ___toggleMask_10;
	// System.Boolean MaterialUI.SelectionBoxConfig::highlightLastSelected
	bool ___highlightLastSelected_11;
	// System.Single MaterialUI.SelectionBoxConfig::animationDuration
	float ___animationDuration_12;
	// UnityEngine.Color MaterialUI.SelectionBoxConfig::expandedListColor
	Color_t2020392075  ___expandedListColor_13;
	// UnityEngine.Color MaterialUI.SelectionBoxConfig::contractedListColor
	Color_t2020392075  ___contractedListColor_14;
	// UnityEngine.Color MaterialUI.SelectionBoxConfig::currentColor
	Color_t2020392075  ___currentColor_15;
	// System.Int32 MaterialUI.SelectionBoxConfig::expandedListShadowLevel
	int32_t ___expandedListShadowLevel_16;
	// MaterialUI.ShadowConfig MaterialUI.SelectionBoxConfig::shadowConfig
	ShadowConfig_t3579754142 * ___shadowConfig_17;
	// System.Int32 MaterialUI.SelectionBoxConfig::contractedNormalShadow
	int32_t ___contractedNormalShadow_18;
	// System.Int32 MaterialUI.SelectionBoxConfig::contractedHoverShadow
	int32_t ___contractedHoverShadow_19;
	// System.String[] MaterialUI.SelectionBoxConfig::listItems
	StringU5BU5D_t1642385972* ___listItems_20;
	// System.Boolean MaterialUI.SelectionBoxConfig::autoMaxItemHeight
	bool ___autoMaxItemHeight_21;
	// System.Single MaterialUI.SelectionBoxConfig::percentageOfScreenHeight
	float ___percentageOfScreenHeight_22;
	// System.Int32 MaterialUI.SelectionBoxConfig::manualMaxItemHeight
	int32_t ___manualMaxItemHeight_23;
	// System.Int32 MaterialUI.SelectionBoxConfig::currentSelection
	int32_t ___currentSelection_24;
	// MaterialUI.SelectionBoxConfig/PopDirection MaterialUI.SelectionBoxConfig::expandDirection
	int32_t ___expandDirection_25;
	// UnityEngine.GameObject MaterialUI.SelectionBoxConfig::listLayer
	GameObject_t1756533147 * ___listLayer_26;
	// UnityEngine.UI.Text MaterialUI.SelectionBoxConfig::selectedText
	Text_t356221433 * ___selectedText_27;
	// UnityEngine.UI.Image MaterialUI.SelectionBoxConfig::cancelLayer
	Image_t2042527209 * ___cancelLayer_28;
	// UnityEngine.UI.Image MaterialUI.SelectionBoxConfig::scrollbar
	Image_t2042527209 * ___scrollbar_29;
	// UnityEngine.UI.Image MaterialUI.SelectionBoxConfig::icon
	Image_t2042527209 * ___icon_30;
	// UnityEngine.UI.Image MaterialUI.SelectionBoxConfig::textLine
	Image_t2042527209 * ___textLine_31;
	// System.Single MaterialUI.SelectionBoxConfig::textLineAlpha
	float ___textLineAlpha_32;
	// UnityEngine.GameObject[] MaterialUI.SelectionBoxConfig::listItemObjects
	GameObjectU5BU5D_t3057952154* ___listItemObjects_33;
	// System.Single MaterialUI.SelectionBoxConfig::listheight
	float ___listheight_34;
	// System.Single MaterialUI.SelectionBoxConfig::listLayerHeight
	float ___listLayerHeight_35;
	// System.Single MaterialUI.SelectionBoxConfig::listPos
	float ___listPos_36;
	// System.Boolean MaterialUI.SelectionBoxConfig::hasShadows
	bool ___hasShadows_37;
	// System.Int32 MaterialUI.SelectionBoxConfig::contractedShadowLevel
	int32_t ___contractedShadowLevel_38;
	// MaterialUI.RippleConfig MaterialUI.SelectionBoxConfig::rippleConfig
	RippleConfig_t3939821922 * ___rippleConfig_39;
	// UnityEngine.UI.Button MaterialUI.SelectionBoxConfig::thisButton
	Button_t2872111280 * ___thisButton_40;
	// UnityEngine.GameObject MaterialUI.SelectionBoxConfig::listItemPrefab
	GameObject_t1756533147 * ___listItemPrefab_41;
	// UnityEngine.GameObject MaterialUI.SelectionBoxConfig::listItem
	GameObject_t1756533147 * ___listItem_42;
	// UnityEngine.CanvasGroup MaterialUI.SelectionBoxConfig::listCanvasGroup
	CanvasGroup_t3296560743 * ___listCanvasGroup_43;
	// UnityEngine.RectTransform MaterialUI.SelectionBoxConfig::thisRect
	RectTransform_t3349966182 * ___thisRect_44;
	// UnityEngine.UI.Image MaterialUI.SelectionBoxConfig::thisImage
	Image_t2042527209 * ___thisImage_45;
	// UnityEngine.CanvasGroup MaterialUI.SelectionBoxConfig::scrollbarCanvasGroup
	CanvasGroup_t3296560743 * ___scrollbarCanvasGroup_46;
	// System.Single MaterialUI.SelectionBoxConfig::originalHeight
	float ___originalHeight_47;
	// System.Single MaterialUI.SelectionBoxConfig::expandedPos
	float ___expandedPos_48;
	// System.Single MaterialUI.SelectionBoxConfig::originalPos
	float ___originalPos_49;
	// UnityEngine.Vector3 MaterialUI.SelectionBoxConfig::textPos
	Vector3_t2243707580  ___textPos_50;
	// UnityEngine.Vector3 MaterialUI.SelectionBoxConfig::iconPos
	Vector3_t2243707580  ___iconPos_51;
	// System.Single MaterialUI.SelectionBoxConfig::listCanvasAlpha
	float ___listCanvasAlpha_52;
	// UnityEngine.Color MaterialUI.SelectionBoxConfig::normalColor
	Color_t2020392075  ___normalColor_53;
	// UnityEngine.Color MaterialUI.SelectionBoxConfig::highlightColor
	Color_t2020392075  ___highlightColor_54;
	// System.Single MaterialUI.SelectionBoxConfig::animStartTime
	float ___animStartTime_55;
	// System.Single MaterialUI.SelectionBoxConfig::animDeltaTime
	float ___animDeltaTime_56;
	// System.Int32 MaterialUI.SelectionBoxConfig::state
	int32_t ___state_57;
	// System.Boolean MaterialUI.SelectionBoxConfig::scrollbarEnabled
	bool ___scrollbarEnabled_58;
	// MaterialUI.SelectionBoxConfig/PickItem MaterialUI.SelectionBoxConfig::ItemPicked
	PickItem_t4096300763 * ___ItemPicked_59;
	// UnityEngine.Transform MaterialUI.SelectionBoxConfig::parentTransform
	Transform_t3275118058 * ___parentTransform_60;

public:
	inline static int32_t get_offset_of_rippleEnabled_2() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___rippleEnabled_2)); }
	inline bool get_rippleEnabled_2() const { return ___rippleEnabled_2; }
	inline bool* get_address_of_rippleEnabled_2() { return &___rippleEnabled_2; }
	inline void set_rippleEnabled_2(bool value)
	{
		___rippleEnabled_2 = value;
	}

	inline static int32_t get_offset_of_rippleSize_3() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___rippleSize_3)); }
	inline int32_t get_rippleSize_3() const { return ___rippleSize_3; }
	inline int32_t* get_address_of_rippleSize_3() { return &___rippleSize_3; }
	inline void set_rippleSize_3(int32_t value)
	{
		___rippleSize_3 = value;
	}

	inline static int32_t get_offset_of_rippleSpeed_4() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___rippleSpeed_4)); }
	inline float get_rippleSpeed_4() const { return ___rippleSpeed_4; }
	inline float* get_address_of_rippleSpeed_4() { return &___rippleSpeed_4; }
	inline void set_rippleSpeed_4(float value)
	{
		___rippleSpeed_4 = value;
	}

	inline static int32_t get_offset_of_rippleColor_5() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___rippleColor_5)); }
	inline Color_t2020392075  get_rippleColor_5() const { return ___rippleColor_5; }
	inline Color_t2020392075 * get_address_of_rippleColor_5() { return &___rippleColor_5; }
	inline void set_rippleColor_5(Color_t2020392075  value)
	{
		___rippleColor_5 = value;
	}

	inline static int32_t get_offset_of_rippleStartAlpha_6() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___rippleStartAlpha_6)); }
	inline float get_rippleStartAlpha_6() const { return ___rippleStartAlpha_6; }
	inline float* get_address_of_rippleStartAlpha_6() { return &___rippleStartAlpha_6; }
	inline void set_rippleStartAlpha_6(float value)
	{
		___rippleStartAlpha_6 = value;
	}

	inline static int32_t get_offset_of_rippleEndAlpha_7() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___rippleEndAlpha_7)); }
	inline float get_rippleEndAlpha_7() const { return ___rippleEndAlpha_7; }
	inline float* get_address_of_rippleEndAlpha_7() { return &___rippleEndAlpha_7; }
	inline void set_rippleEndAlpha_7(float value)
	{
		___rippleEndAlpha_7 = value;
	}

	inline static int32_t get_offset_of_highlightWhen_8() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___highlightWhen_8)); }
	inline int32_t get_highlightWhen_8() const { return ___highlightWhen_8; }
	inline int32_t* get_address_of_highlightWhen_8() { return &___highlightWhen_8; }
	inline void set_highlightWhen_8(int32_t value)
	{
		___highlightWhen_8 = value;
	}

	inline static int32_t get_offset_of_moveTowardCenter_9() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___moveTowardCenter_9)); }
	inline bool get_moveTowardCenter_9() const { return ___moveTowardCenter_9; }
	inline bool* get_address_of_moveTowardCenter_9() { return &___moveTowardCenter_9; }
	inline void set_moveTowardCenter_9(bool value)
	{
		___moveTowardCenter_9 = value;
	}

	inline static int32_t get_offset_of_toggleMask_10() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___toggleMask_10)); }
	inline bool get_toggleMask_10() const { return ___toggleMask_10; }
	inline bool* get_address_of_toggleMask_10() { return &___toggleMask_10; }
	inline void set_toggleMask_10(bool value)
	{
		___toggleMask_10 = value;
	}

	inline static int32_t get_offset_of_highlightLastSelected_11() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___highlightLastSelected_11)); }
	inline bool get_highlightLastSelected_11() const { return ___highlightLastSelected_11; }
	inline bool* get_address_of_highlightLastSelected_11() { return &___highlightLastSelected_11; }
	inline void set_highlightLastSelected_11(bool value)
	{
		___highlightLastSelected_11 = value;
	}

	inline static int32_t get_offset_of_animationDuration_12() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___animationDuration_12)); }
	inline float get_animationDuration_12() const { return ___animationDuration_12; }
	inline float* get_address_of_animationDuration_12() { return &___animationDuration_12; }
	inline void set_animationDuration_12(float value)
	{
		___animationDuration_12 = value;
	}

	inline static int32_t get_offset_of_expandedListColor_13() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___expandedListColor_13)); }
	inline Color_t2020392075  get_expandedListColor_13() const { return ___expandedListColor_13; }
	inline Color_t2020392075 * get_address_of_expandedListColor_13() { return &___expandedListColor_13; }
	inline void set_expandedListColor_13(Color_t2020392075  value)
	{
		___expandedListColor_13 = value;
	}

	inline static int32_t get_offset_of_contractedListColor_14() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___contractedListColor_14)); }
	inline Color_t2020392075  get_contractedListColor_14() const { return ___contractedListColor_14; }
	inline Color_t2020392075 * get_address_of_contractedListColor_14() { return &___contractedListColor_14; }
	inline void set_contractedListColor_14(Color_t2020392075  value)
	{
		___contractedListColor_14 = value;
	}

	inline static int32_t get_offset_of_currentColor_15() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___currentColor_15)); }
	inline Color_t2020392075  get_currentColor_15() const { return ___currentColor_15; }
	inline Color_t2020392075 * get_address_of_currentColor_15() { return &___currentColor_15; }
	inline void set_currentColor_15(Color_t2020392075  value)
	{
		___currentColor_15 = value;
	}

	inline static int32_t get_offset_of_expandedListShadowLevel_16() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___expandedListShadowLevel_16)); }
	inline int32_t get_expandedListShadowLevel_16() const { return ___expandedListShadowLevel_16; }
	inline int32_t* get_address_of_expandedListShadowLevel_16() { return &___expandedListShadowLevel_16; }
	inline void set_expandedListShadowLevel_16(int32_t value)
	{
		___expandedListShadowLevel_16 = value;
	}

	inline static int32_t get_offset_of_shadowConfig_17() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___shadowConfig_17)); }
	inline ShadowConfig_t3579754142 * get_shadowConfig_17() const { return ___shadowConfig_17; }
	inline ShadowConfig_t3579754142 ** get_address_of_shadowConfig_17() { return &___shadowConfig_17; }
	inline void set_shadowConfig_17(ShadowConfig_t3579754142 * value)
	{
		___shadowConfig_17 = value;
		Il2CppCodeGenWriteBarrier(&___shadowConfig_17, value);
	}

	inline static int32_t get_offset_of_contractedNormalShadow_18() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___contractedNormalShadow_18)); }
	inline int32_t get_contractedNormalShadow_18() const { return ___contractedNormalShadow_18; }
	inline int32_t* get_address_of_contractedNormalShadow_18() { return &___contractedNormalShadow_18; }
	inline void set_contractedNormalShadow_18(int32_t value)
	{
		___contractedNormalShadow_18 = value;
	}

	inline static int32_t get_offset_of_contractedHoverShadow_19() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___contractedHoverShadow_19)); }
	inline int32_t get_contractedHoverShadow_19() const { return ___contractedHoverShadow_19; }
	inline int32_t* get_address_of_contractedHoverShadow_19() { return &___contractedHoverShadow_19; }
	inline void set_contractedHoverShadow_19(int32_t value)
	{
		___contractedHoverShadow_19 = value;
	}

	inline static int32_t get_offset_of_listItems_20() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___listItems_20)); }
	inline StringU5BU5D_t1642385972* get_listItems_20() const { return ___listItems_20; }
	inline StringU5BU5D_t1642385972** get_address_of_listItems_20() { return &___listItems_20; }
	inline void set_listItems_20(StringU5BU5D_t1642385972* value)
	{
		___listItems_20 = value;
		Il2CppCodeGenWriteBarrier(&___listItems_20, value);
	}

	inline static int32_t get_offset_of_autoMaxItemHeight_21() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___autoMaxItemHeight_21)); }
	inline bool get_autoMaxItemHeight_21() const { return ___autoMaxItemHeight_21; }
	inline bool* get_address_of_autoMaxItemHeight_21() { return &___autoMaxItemHeight_21; }
	inline void set_autoMaxItemHeight_21(bool value)
	{
		___autoMaxItemHeight_21 = value;
	}

	inline static int32_t get_offset_of_percentageOfScreenHeight_22() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___percentageOfScreenHeight_22)); }
	inline float get_percentageOfScreenHeight_22() const { return ___percentageOfScreenHeight_22; }
	inline float* get_address_of_percentageOfScreenHeight_22() { return &___percentageOfScreenHeight_22; }
	inline void set_percentageOfScreenHeight_22(float value)
	{
		___percentageOfScreenHeight_22 = value;
	}

	inline static int32_t get_offset_of_manualMaxItemHeight_23() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___manualMaxItemHeight_23)); }
	inline int32_t get_manualMaxItemHeight_23() const { return ___manualMaxItemHeight_23; }
	inline int32_t* get_address_of_manualMaxItemHeight_23() { return &___manualMaxItemHeight_23; }
	inline void set_manualMaxItemHeight_23(int32_t value)
	{
		___manualMaxItemHeight_23 = value;
	}

	inline static int32_t get_offset_of_currentSelection_24() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___currentSelection_24)); }
	inline int32_t get_currentSelection_24() const { return ___currentSelection_24; }
	inline int32_t* get_address_of_currentSelection_24() { return &___currentSelection_24; }
	inline void set_currentSelection_24(int32_t value)
	{
		___currentSelection_24 = value;
	}

	inline static int32_t get_offset_of_expandDirection_25() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___expandDirection_25)); }
	inline int32_t get_expandDirection_25() const { return ___expandDirection_25; }
	inline int32_t* get_address_of_expandDirection_25() { return &___expandDirection_25; }
	inline void set_expandDirection_25(int32_t value)
	{
		___expandDirection_25 = value;
	}

	inline static int32_t get_offset_of_listLayer_26() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___listLayer_26)); }
	inline GameObject_t1756533147 * get_listLayer_26() const { return ___listLayer_26; }
	inline GameObject_t1756533147 ** get_address_of_listLayer_26() { return &___listLayer_26; }
	inline void set_listLayer_26(GameObject_t1756533147 * value)
	{
		___listLayer_26 = value;
		Il2CppCodeGenWriteBarrier(&___listLayer_26, value);
	}

	inline static int32_t get_offset_of_selectedText_27() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___selectedText_27)); }
	inline Text_t356221433 * get_selectedText_27() const { return ___selectedText_27; }
	inline Text_t356221433 ** get_address_of_selectedText_27() { return &___selectedText_27; }
	inline void set_selectedText_27(Text_t356221433 * value)
	{
		___selectedText_27 = value;
		Il2CppCodeGenWriteBarrier(&___selectedText_27, value);
	}

	inline static int32_t get_offset_of_cancelLayer_28() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___cancelLayer_28)); }
	inline Image_t2042527209 * get_cancelLayer_28() const { return ___cancelLayer_28; }
	inline Image_t2042527209 ** get_address_of_cancelLayer_28() { return &___cancelLayer_28; }
	inline void set_cancelLayer_28(Image_t2042527209 * value)
	{
		___cancelLayer_28 = value;
		Il2CppCodeGenWriteBarrier(&___cancelLayer_28, value);
	}

	inline static int32_t get_offset_of_scrollbar_29() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___scrollbar_29)); }
	inline Image_t2042527209 * get_scrollbar_29() const { return ___scrollbar_29; }
	inline Image_t2042527209 ** get_address_of_scrollbar_29() { return &___scrollbar_29; }
	inline void set_scrollbar_29(Image_t2042527209 * value)
	{
		___scrollbar_29 = value;
		Il2CppCodeGenWriteBarrier(&___scrollbar_29, value);
	}

	inline static int32_t get_offset_of_icon_30() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___icon_30)); }
	inline Image_t2042527209 * get_icon_30() const { return ___icon_30; }
	inline Image_t2042527209 ** get_address_of_icon_30() { return &___icon_30; }
	inline void set_icon_30(Image_t2042527209 * value)
	{
		___icon_30 = value;
		Il2CppCodeGenWriteBarrier(&___icon_30, value);
	}

	inline static int32_t get_offset_of_textLine_31() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___textLine_31)); }
	inline Image_t2042527209 * get_textLine_31() const { return ___textLine_31; }
	inline Image_t2042527209 ** get_address_of_textLine_31() { return &___textLine_31; }
	inline void set_textLine_31(Image_t2042527209 * value)
	{
		___textLine_31 = value;
		Il2CppCodeGenWriteBarrier(&___textLine_31, value);
	}

	inline static int32_t get_offset_of_textLineAlpha_32() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___textLineAlpha_32)); }
	inline float get_textLineAlpha_32() const { return ___textLineAlpha_32; }
	inline float* get_address_of_textLineAlpha_32() { return &___textLineAlpha_32; }
	inline void set_textLineAlpha_32(float value)
	{
		___textLineAlpha_32 = value;
	}

	inline static int32_t get_offset_of_listItemObjects_33() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___listItemObjects_33)); }
	inline GameObjectU5BU5D_t3057952154* get_listItemObjects_33() const { return ___listItemObjects_33; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_listItemObjects_33() { return &___listItemObjects_33; }
	inline void set_listItemObjects_33(GameObjectU5BU5D_t3057952154* value)
	{
		___listItemObjects_33 = value;
		Il2CppCodeGenWriteBarrier(&___listItemObjects_33, value);
	}

	inline static int32_t get_offset_of_listheight_34() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___listheight_34)); }
	inline float get_listheight_34() const { return ___listheight_34; }
	inline float* get_address_of_listheight_34() { return &___listheight_34; }
	inline void set_listheight_34(float value)
	{
		___listheight_34 = value;
	}

	inline static int32_t get_offset_of_listLayerHeight_35() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___listLayerHeight_35)); }
	inline float get_listLayerHeight_35() const { return ___listLayerHeight_35; }
	inline float* get_address_of_listLayerHeight_35() { return &___listLayerHeight_35; }
	inline void set_listLayerHeight_35(float value)
	{
		___listLayerHeight_35 = value;
	}

	inline static int32_t get_offset_of_listPos_36() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___listPos_36)); }
	inline float get_listPos_36() const { return ___listPos_36; }
	inline float* get_address_of_listPos_36() { return &___listPos_36; }
	inline void set_listPos_36(float value)
	{
		___listPos_36 = value;
	}

	inline static int32_t get_offset_of_hasShadows_37() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___hasShadows_37)); }
	inline bool get_hasShadows_37() const { return ___hasShadows_37; }
	inline bool* get_address_of_hasShadows_37() { return &___hasShadows_37; }
	inline void set_hasShadows_37(bool value)
	{
		___hasShadows_37 = value;
	}

	inline static int32_t get_offset_of_contractedShadowLevel_38() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___contractedShadowLevel_38)); }
	inline int32_t get_contractedShadowLevel_38() const { return ___contractedShadowLevel_38; }
	inline int32_t* get_address_of_contractedShadowLevel_38() { return &___contractedShadowLevel_38; }
	inline void set_contractedShadowLevel_38(int32_t value)
	{
		___contractedShadowLevel_38 = value;
	}

	inline static int32_t get_offset_of_rippleConfig_39() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___rippleConfig_39)); }
	inline RippleConfig_t3939821922 * get_rippleConfig_39() const { return ___rippleConfig_39; }
	inline RippleConfig_t3939821922 ** get_address_of_rippleConfig_39() { return &___rippleConfig_39; }
	inline void set_rippleConfig_39(RippleConfig_t3939821922 * value)
	{
		___rippleConfig_39 = value;
		Il2CppCodeGenWriteBarrier(&___rippleConfig_39, value);
	}

	inline static int32_t get_offset_of_thisButton_40() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___thisButton_40)); }
	inline Button_t2872111280 * get_thisButton_40() const { return ___thisButton_40; }
	inline Button_t2872111280 ** get_address_of_thisButton_40() { return &___thisButton_40; }
	inline void set_thisButton_40(Button_t2872111280 * value)
	{
		___thisButton_40 = value;
		Il2CppCodeGenWriteBarrier(&___thisButton_40, value);
	}

	inline static int32_t get_offset_of_listItemPrefab_41() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___listItemPrefab_41)); }
	inline GameObject_t1756533147 * get_listItemPrefab_41() const { return ___listItemPrefab_41; }
	inline GameObject_t1756533147 ** get_address_of_listItemPrefab_41() { return &___listItemPrefab_41; }
	inline void set_listItemPrefab_41(GameObject_t1756533147 * value)
	{
		___listItemPrefab_41 = value;
		Il2CppCodeGenWriteBarrier(&___listItemPrefab_41, value);
	}

	inline static int32_t get_offset_of_listItem_42() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___listItem_42)); }
	inline GameObject_t1756533147 * get_listItem_42() const { return ___listItem_42; }
	inline GameObject_t1756533147 ** get_address_of_listItem_42() { return &___listItem_42; }
	inline void set_listItem_42(GameObject_t1756533147 * value)
	{
		___listItem_42 = value;
		Il2CppCodeGenWriteBarrier(&___listItem_42, value);
	}

	inline static int32_t get_offset_of_listCanvasGroup_43() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___listCanvasGroup_43)); }
	inline CanvasGroup_t3296560743 * get_listCanvasGroup_43() const { return ___listCanvasGroup_43; }
	inline CanvasGroup_t3296560743 ** get_address_of_listCanvasGroup_43() { return &___listCanvasGroup_43; }
	inline void set_listCanvasGroup_43(CanvasGroup_t3296560743 * value)
	{
		___listCanvasGroup_43 = value;
		Il2CppCodeGenWriteBarrier(&___listCanvasGroup_43, value);
	}

	inline static int32_t get_offset_of_thisRect_44() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___thisRect_44)); }
	inline RectTransform_t3349966182 * get_thisRect_44() const { return ___thisRect_44; }
	inline RectTransform_t3349966182 ** get_address_of_thisRect_44() { return &___thisRect_44; }
	inline void set_thisRect_44(RectTransform_t3349966182 * value)
	{
		___thisRect_44 = value;
		Il2CppCodeGenWriteBarrier(&___thisRect_44, value);
	}

	inline static int32_t get_offset_of_thisImage_45() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___thisImage_45)); }
	inline Image_t2042527209 * get_thisImage_45() const { return ___thisImage_45; }
	inline Image_t2042527209 ** get_address_of_thisImage_45() { return &___thisImage_45; }
	inline void set_thisImage_45(Image_t2042527209 * value)
	{
		___thisImage_45 = value;
		Il2CppCodeGenWriteBarrier(&___thisImage_45, value);
	}

	inline static int32_t get_offset_of_scrollbarCanvasGroup_46() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___scrollbarCanvasGroup_46)); }
	inline CanvasGroup_t3296560743 * get_scrollbarCanvasGroup_46() const { return ___scrollbarCanvasGroup_46; }
	inline CanvasGroup_t3296560743 ** get_address_of_scrollbarCanvasGroup_46() { return &___scrollbarCanvasGroup_46; }
	inline void set_scrollbarCanvasGroup_46(CanvasGroup_t3296560743 * value)
	{
		___scrollbarCanvasGroup_46 = value;
		Il2CppCodeGenWriteBarrier(&___scrollbarCanvasGroup_46, value);
	}

	inline static int32_t get_offset_of_originalHeight_47() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___originalHeight_47)); }
	inline float get_originalHeight_47() const { return ___originalHeight_47; }
	inline float* get_address_of_originalHeight_47() { return &___originalHeight_47; }
	inline void set_originalHeight_47(float value)
	{
		___originalHeight_47 = value;
	}

	inline static int32_t get_offset_of_expandedPos_48() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___expandedPos_48)); }
	inline float get_expandedPos_48() const { return ___expandedPos_48; }
	inline float* get_address_of_expandedPos_48() { return &___expandedPos_48; }
	inline void set_expandedPos_48(float value)
	{
		___expandedPos_48 = value;
	}

	inline static int32_t get_offset_of_originalPos_49() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___originalPos_49)); }
	inline float get_originalPos_49() const { return ___originalPos_49; }
	inline float* get_address_of_originalPos_49() { return &___originalPos_49; }
	inline void set_originalPos_49(float value)
	{
		___originalPos_49 = value;
	}

	inline static int32_t get_offset_of_textPos_50() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___textPos_50)); }
	inline Vector3_t2243707580  get_textPos_50() const { return ___textPos_50; }
	inline Vector3_t2243707580 * get_address_of_textPos_50() { return &___textPos_50; }
	inline void set_textPos_50(Vector3_t2243707580  value)
	{
		___textPos_50 = value;
	}

	inline static int32_t get_offset_of_iconPos_51() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___iconPos_51)); }
	inline Vector3_t2243707580  get_iconPos_51() const { return ___iconPos_51; }
	inline Vector3_t2243707580 * get_address_of_iconPos_51() { return &___iconPos_51; }
	inline void set_iconPos_51(Vector3_t2243707580  value)
	{
		___iconPos_51 = value;
	}

	inline static int32_t get_offset_of_listCanvasAlpha_52() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___listCanvasAlpha_52)); }
	inline float get_listCanvasAlpha_52() const { return ___listCanvasAlpha_52; }
	inline float* get_address_of_listCanvasAlpha_52() { return &___listCanvasAlpha_52; }
	inline void set_listCanvasAlpha_52(float value)
	{
		___listCanvasAlpha_52 = value;
	}

	inline static int32_t get_offset_of_normalColor_53() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___normalColor_53)); }
	inline Color_t2020392075  get_normalColor_53() const { return ___normalColor_53; }
	inline Color_t2020392075 * get_address_of_normalColor_53() { return &___normalColor_53; }
	inline void set_normalColor_53(Color_t2020392075  value)
	{
		___normalColor_53 = value;
	}

	inline static int32_t get_offset_of_highlightColor_54() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___highlightColor_54)); }
	inline Color_t2020392075  get_highlightColor_54() const { return ___highlightColor_54; }
	inline Color_t2020392075 * get_address_of_highlightColor_54() { return &___highlightColor_54; }
	inline void set_highlightColor_54(Color_t2020392075  value)
	{
		___highlightColor_54 = value;
	}

	inline static int32_t get_offset_of_animStartTime_55() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___animStartTime_55)); }
	inline float get_animStartTime_55() const { return ___animStartTime_55; }
	inline float* get_address_of_animStartTime_55() { return &___animStartTime_55; }
	inline void set_animStartTime_55(float value)
	{
		___animStartTime_55 = value;
	}

	inline static int32_t get_offset_of_animDeltaTime_56() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___animDeltaTime_56)); }
	inline float get_animDeltaTime_56() const { return ___animDeltaTime_56; }
	inline float* get_address_of_animDeltaTime_56() { return &___animDeltaTime_56; }
	inline void set_animDeltaTime_56(float value)
	{
		___animDeltaTime_56 = value;
	}

	inline static int32_t get_offset_of_state_57() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___state_57)); }
	inline int32_t get_state_57() const { return ___state_57; }
	inline int32_t* get_address_of_state_57() { return &___state_57; }
	inline void set_state_57(int32_t value)
	{
		___state_57 = value;
	}

	inline static int32_t get_offset_of_scrollbarEnabled_58() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___scrollbarEnabled_58)); }
	inline bool get_scrollbarEnabled_58() const { return ___scrollbarEnabled_58; }
	inline bool* get_address_of_scrollbarEnabled_58() { return &___scrollbarEnabled_58; }
	inline void set_scrollbarEnabled_58(bool value)
	{
		___scrollbarEnabled_58 = value;
	}

	inline static int32_t get_offset_of_ItemPicked_59() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___ItemPicked_59)); }
	inline PickItem_t4096300763 * get_ItemPicked_59() const { return ___ItemPicked_59; }
	inline PickItem_t4096300763 ** get_address_of_ItemPicked_59() { return &___ItemPicked_59; }
	inline void set_ItemPicked_59(PickItem_t4096300763 * value)
	{
		___ItemPicked_59 = value;
		Il2CppCodeGenWriteBarrier(&___ItemPicked_59, value);
	}

	inline static int32_t get_offset_of_parentTransform_60() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t2292907685, ___parentTransform_60)); }
	inline Transform_t3275118058 * get_parentTransform_60() const { return ___parentTransform_60; }
	inline Transform_t3275118058 ** get_address_of_parentTransform_60() { return &___parentTransform_60; }
	inline void set_parentTransform_60(Transform_t3275118058 * value)
	{
		___parentTransform_60 = value;
		Il2CppCodeGenWriteBarrier(&___parentTransform_60, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
