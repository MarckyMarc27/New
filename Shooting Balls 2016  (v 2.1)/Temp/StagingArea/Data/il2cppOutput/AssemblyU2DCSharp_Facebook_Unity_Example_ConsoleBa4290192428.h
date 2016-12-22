#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t3116948387;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Example.ConsoleBase
struct  ConsoleBase_t4290192428  : public MonoBehaviour_t1158329972
{
public:
	// System.String Facebook.Unity.Example.ConsoleBase::status
	String_t* ___status_7;
	// System.String Facebook.Unity.Example.ConsoleBase::lastResponse
	String_t* ___lastResponse_8;
	// UnityEngine.Vector2 Facebook.Unity.Example.ConsoleBase::scrollPosition
	Vector2_t2243707579  ___scrollPosition_9;
	// System.Nullable`1<System.Single> Facebook.Unity.Example.ConsoleBase::scaleFactor
	Nullable_1_t339576247  ___scaleFactor_10;
	// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::textStyle
	GUIStyle_t1799908754 * ___textStyle_11;
	// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::buttonStyle
	GUIStyle_t1799908754 * ___buttonStyle_12;
	// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::textInputStyle
	GUIStyle_t1799908754 * ___textInputStyle_13;
	// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::labelStyle
	GUIStyle_t1799908754 * ___labelStyle_14;
	// UnityEngine.Texture2D Facebook.Unity.Example.ConsoleBase::<LastResponseTexture>k__BackingField
	Texture2D_t3542995729 * ___U3CLastResponseTextureU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_status_7() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428, ___status_7)); }
	inline String_t* get_status_7() const { return ___status_7; }
	inline String_t** get_address_of_status_7() { return &___status_7; }
	inline void set_status_7(String_t* value)
	{
		___status_7 = value;
		Il2CppCodeGenWriteBarrier(&___status_7, value);
	}

	inline static int32_t get_offset_of_lastResponse_8() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428, ___lastResponse_8)); }
	inline String_t* get_lastResponse_8() const { return ___lastResponse_8; }
	inline String_t** get_address_of_lastResponse_8() { return &___lastResponse_8; }
	inline void set_lastResponse_8(String_t* value)
	{
		___lastResponse_8 = value;
		Il2CppCodeGenWriteBarrier(&___lastResponse_8, value);
	}

	inline static int32_t get_offset_of_scrollPosition_9() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428, ___scrollPosition_9)); }
	inline Vector2_t2243707579  get_scrollPosition_9() const { return ___scrollPosition_9; }
	inline Vector2_t2243707579 * get_address_of_scrollPosition_9() { return &___scrollPosition_9; }
	inline void set_scrollPosition_9(Vector2_t2243707579  value)
	{
		___scrollPosition_9 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_10() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428, ___scaleFactor_10)); }
	inline Nullable_1_t339576247  get_scaleFactor_10() const { return ___scaleFactor_10; }
	inline Nullable_1_t339576247 * get_address_of_scaleFactor_10() { return &___scaleFactor_10; }
	inline void set_scaleFactor_10(Nullable_1_t339576247  value)
	{
		___scaleFactor_10 = value;
	}

	inline static int32_t get_offset_of_textStyle_11() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428, ___textStyle_11)); }
	inline GUIStyle_t1799908754 * get_textStyle_11() const { return ___textStyle_11; }
	inline GUIStyle_t1799908754 ** get_address_of_textStyle_11() { return &___textStyle_11; }
	inline void set_textStyle_11(GUIStyle_t1799908754 * value)
	{
		___textStyle_11 = value;
		Il2CppCodeGenWriteBarrier(&___textStyle_11, value);
	}

	inline static int32_t get_offset_of_buttonStyle_12() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428, ___buttonStyle_12)); }
	inline GUIStyle_t1799908754 * get_buttonStyle_12() const { return ___buttonStyle_12; }
	inline GUIStyle_t1799908754 ** get_address_of_buttonStyle_12() { return &___buttonStyle_12; }
	inline void set_buttonStyle_12(GUIStyle_t1799908754 * value)
	{
		___buttonStyle_12 = value;
		Il2CppCodeGenWriteBarrier(&___buttonStyle_12, value);
	}

	inline static int32_t get_offset_of_textInputStyle_13() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428, ___textInputStyle_13)); }
	inline GUIStyle_t1799908754 * get_textInputStyle_13() const { return ___textInputStyle_13; }
	inline GUIStyle_t1799908754 ** get_address_of_textInputStyle_13() { return &___textInputStyle_13; }
	inline void set_textInputStyle_13(GUIStyle_t1799908754 * value)
	{
		___textInputStyle_13 = value;
		Il2CppCodeGenWriteBarrier(&___textInputStyle_13, value);
	}

	inline static int32_t get_offset_of_labelStyle_14() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428, ___labelStyle_14)); }
	inline GUIStyle_t1799908754 * get_labelStyle_14() const { return ___labelStyle_14; }
	inline GUIStyle_t1799908754 ** get_address_of_labelStyle_14() { return &___labelStyle_14; }
	inline void set_labelStyle_14(GUIStyle_t1799908754 * value)
	{
		___labelStyle_14 = value;
		Il2CppCodeGenWriteBarrier(&___labelStyle_14, value);
	}

	inline static int32_t get_offset_of_U3CLastResponseTextureU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428, ___U3CLastResponseTextureU3Ek__BackingField_15)); }
	inline Texture2D_t3542995729 * get_U3CLastResponseTextureU3Ek__BackingField_15() const { return ___U3CLastResponseTextureU3Ek__BackingField_15; }
	inline Texture2D_t3542995729 ** get_address_of_U3CLastResponseTextureU3Ek__BackingField_15() { return &___U3CLastResponseTextureU3Ek__BackingField_15; }
	inline void set_U3CLastResponseTextureU3Ek__BackingField_15(Texture2D_t3542995729 * value)
	{
		___U3CLastResponseTextureU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLastResponseTextureU3Ek__BackingField_15, value);
	}
};

struct ConsoleBase_t4290192428_StaticFields
{
public:
	// System.Collections.Generic.Stack`1<System.String> Facebook.Unity.Example.ConsoleBase::menuStack
	Stack_1_t3116948387 * ___menuStack_6;

public:
	inline static int32_t get_offset_of_menuStack_6() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428_StaticFields, ___menuStack_6)); }
	inline Stack_1_t3116948387 * get_menuStack_6() const { return ___menuStack_6; }
	inline Stack_1_t3116948387 ** get_address_of_menuStack_6() { return &___menuStack_6; }
	inline void set_menuStack_6(Stack_1_t3116948387 * value)
	{
		___menuStack_6 = value;
		Il2CppCodeGenWriteBarrier(&___menuStack_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
