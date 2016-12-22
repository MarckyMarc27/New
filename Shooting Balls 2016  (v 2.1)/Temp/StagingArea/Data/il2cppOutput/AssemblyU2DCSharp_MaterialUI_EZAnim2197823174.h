﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<MaterialUI.EZStruct>
struct List_1_t1169225010;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_MaterialUI_EZStruct1800103878.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.EZAnim
struct  EZAnim_t2197823174  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<MaterialUI.EZStruct> MaterialUI.EZAnim::theStructs
	List_1_t1169225010 * ___theStructs_2;
	// System.Boolean[] MaterialUI.EZAnim::activeList
	BooleanU5BU5D_t3568034315* ___activeList_3;
	// MaterialUI.EZStruct MaterialUI.EZAnim::tempStruct
	EZStruct_t1800103878  ___tempStruct_4;
	// MaterialUI.EZStruct MaterialUI.EZAnim::oldStruct
	EZStruct_t1800103878  ___oldStruct_5;
	// System.Single MaterialUI.EZAnim::tempFloat
	float ___tempFloat_6;
	// UnityEngine.Vector2 MaterialUI.EZAnim::tempVector2
	Vector2_t2243707579  ___tempVector2_7;
	// UnityEngine.Vector3 MaterialUI.EZAnim::tempVector3
	Vector3_t2243707580  ___tempVector3_8;
	// UnityEngine.Rect MaterialUI.EZAnim::tempRect
	Rect_t3681755626  ___tempRect_9;
	// UnityEngine.Color MaterialUI.EZAnim::tempColor
	Color_t2020392075  ___tempColor_10;
	// UnityEngine.Material MaterialUI.EZAnim::tempMaterial
	Material_t193706927 * ___tempMaterial_11;

public:
	inline static int32_t get_offset_of_theStructs_2() { return static_cast<int32_t>(offsetof(EZAnim_t2197823174, ___theStructs_2)); }
	inline List_1_t1169225010 * get_theStructs_2() const { return ___theStructs_2; }
	inline List_1_t1169225010 ** get_address_of_theStructs_2() { return &___theStructs_2; }
	inline void set_theStructs_2(List_1_t1169225010 * value)
	{
		___theStructs_2 = value;
		Il2CppCodeGenWriteBarrier(&___theStructs_2, value);
	}

	inline static int32_t get_offset_of_activeList_3() { return static_cast<int32_t>(offsetof(EZAnim_t2197823174, ___activeList_3)); }
	inline BooleanU5BU5D_t3568034315* get_activeList_3() const { return ___activeList_3; }
	inline BooleanU5BU5D_t3568034315** get_address_of_activeList_3() { return &___activeList_3; }
	inline void set_activeList_3(BooleanU5BU5D_t3568034315* value)
	{
		___activeList_3 = value;
		Il2CppCodeGenWriteBarrier(&___activeList_3, value);
	}

	inline static int32_t get_offset_of_tempStruct_4() { return static_cast<int32_t>(offsetof(EZAnim_t2197823174, ___tempStruct_4)); }
	inline EZStruct_t1800103878  get_tempStruct_4() const { return ___tempStruct_4; }
	inline EZStruct_t1800103878 * get_address_of_tempStruct_4() { return &___tempStruct_4; }
	inline void set_tempStruct_4(EZStruct_t1800103878  value)
	{
		___tempStruct_4 = value;
	}

	inline static int32_t get_offset_of_oldStruct_5() { return static_cast<int32_t>(offsetof(EZAnim_t2197823174, ___oldStruct_5)); }
	inline EZStruct_t1800103878  get_oldStruct_5() const { return ___oldStruct_5; }
	inline EZStruct_t1800103878 * get_address_of_oldStruct_5() { return &___oldStruct_5; }
	inline void set_oldStruct_5(EZStruct_t1800103878  value)
	{
		___oldStruct_5 = value;
	}

	inline static int32_t get_offset_of_tempFloat_6() { return static_cast<int32_t>(offsetof(EZAnim_t2197823174, ___tempFloat_6)); }
	inline float get_tempFloat_6() const { return ___tempFloat_6; }
	inline float* get_address_of_tempFloat_6() { return &___tempFloat_6; }
	inline void set_tempFloat_6(float value)
	{
		___tempFloat_6 = value;
	}

	inline static int32_t get_offset_of_tempVector2_7() { return static_cast<int32_t>(offsetof(EZAnim_t2197823174, ___tempVector2_7)); }
	inline Vector2_t2243707579  get_tempVector2_7() const { return ___tempVector2_7; }
	inline Vector2_t2243707579 * get_address_of_tempVector2_7() { return &___tempVector2_7; }
	inline void set_tempVector2_7(Vector2_t2243707579  value)
	{
		___tempVector2_7 = value;
	}

	inline static int32_t get_offset_of_tempVector3_8() { return static_cast<int32_t>(offsetof(EZAnim_t2197823174, ___tempVector3_8)); }
	inline Vector3_t2243707580  get_tempVector3_8() const { return ___tempVector3_8; }
	inline Vector3_t2243707580 * get_address_of_tempVector3_8() { return &___tempVector3_8; }
	inline void set_tempVector3_8(Vector3_t2243707580  value)
	{
		___tempVector3_8 = value;
	}

	inline static int32_t get_offset_of_tempRect_9() { return static_cast<int32_t>(offsetof(EZAnim_t2197823174, ___tempRect_9)); }
	inline Rect_t3681755626  get_tempRect_9() const { return ___tempRect_9; }
	inline Rect_t3681755626 * get_address_of_tempRect_9() { return &___tempRect_9; }
	inline void set_tempRect_9(Rect_t3681755626  value)
	{
		___tempRect_9 = value;
	}

	inline static int32_t get_offset_of_tempColor_10() { return static_cast<int32_t>(offsetof(EZAnim_t2197823174, ___tempColor_10)); }
	inline Color_t2020392075  get_tempColor_10() const { return ___tempColor_10; }
	inline Color_t2020392075 * get_address_of_tempColor_10() { return &___tempColor_10; }
	inline void set_tempColor_10(Color_t2020392075  value)
	{
		___tempColor_10 = value;
	}

	inline static int32_t get_offset_of_tempMaterial_11() { return static_cast<int32_t>(offsetof(EZAnim_t2197823174, ___tempMaterial_11)); }
	inline Material_t193706927 * get_tempMaterial_11() const { return ___tempMaterial_11; }
	inline Material_t193706927 ** get_address_of_tempMaterial_11() { return &___tempMaterial_11; }
	inline void set_tempMaterial_11(Material_t193706927 * value)
	{
		___tempMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___tempMaterial_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
