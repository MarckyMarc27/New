#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Facebook.Unity.Editor.EditorFacebookMockDialog/OnComplete
struct OnComplete_t1736320062;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Editor.EditorFacebookMockDialog
struct  EditorFacebookMockDialog_t2244501619  : public MonoBehaviour_t1158329972
{
public:
	// Facebook.Unity.Editor.EditorFacebookMockDialog/OnComplete Facebook.Unity.Editor.EditorFacebookMockDialog::<Callback>k__BackingField
	OnComplete_t1736320062 * ___U3CCallbackU3Ek__BackingField_2;
	// System.String Facebook.Unity.Editor.EditorFacebookMockDialog::<CallbackID>k__BackingField
	String_t* ___U3CCallbackIDU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CCallbackU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(EditorFacebookMockDialog_t2244501619, ___U3CCallbackU3Ek__BackingField_2)); }
	inline OnComplete_t1736320062 * get_U3CCallbackU3Ek__BackingField_2() const { return ___U3CCallbackU3Ek__BackingField_2; }
	inline OnComplete_t1736320062 ** get_address_of_U3CCallbackU3Ek__BackingField_2() { return &___U3CCallbackU3Ek__BackingField_2; }
	inline void set_U3CCallbackU3Ek__BackingField_2(OnComplete_t1736320062 * value)
	{
		___U3CCallbackU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCallbackU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CCallbackIDU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(EditorFacebookMockDialog_t2244501619, ___U3CCallbackIDU3Ek__BackingField_3)); }
	inline String_t* get_U3CCallbackIDU3Ek__BackingField_3() const { return ___U3CCallbackIDU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CCallbackIDU3Ek__BackingField_3() { return &___U3CCallbackIDU3Ek__BackingField_3; }
	inline void set_U3CCallbackIDU3Ek__BackingField_3(String_t* value)
	{
		___U3CCallbackIDU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCallbackIDU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
