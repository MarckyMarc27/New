﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3226471752;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.AsyncUtil/<DoInvoke>c__Iterator0
struct  U3CDoInvokeU3Ec__Iterator0_t2099263868  : public Il2CppObject
{
public:
	// System.Int32 UnityEngine.Purchasing.AsyncUtil/<DoInvoke>c__Iterator0::delayInSeconds
	int32_t ___delayInSeconds_0;
	// System.Action UnityEngine.Purchasing.AsyncUtil/<DoInvoke>c__Iterator0::a
	Action_t3226471752 * ___a_1;
	// System.Object UnityEngine.Purchasing.AsyncUtil/<DoInvoke>c__Iterator0::$current
	Il2CppObject * ___U24current_2;
	// System.Boolean UnityEngine.Purchasing.AsyncUtil/<DoInvoke>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 UnityEngine.Purchasing.AsyncUtil/<DoInvoke>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_delayInSeconds_0() { return static_cast<int32_t>(offsetof(U3CDoInvokeU3Ec__Iterator0_t2099263868, ___delayInSeconds_0)); }
	inline int32_t get_delayInSeconds_0() const { return ___delayInSeconds_0; }
	inline int32_t* get_address_of_delayInSeconds_0() { return &___delayInSeconds_0; }
	inline void set_delayInSeconds_0(int32_t value)
	{
		___delayInSeconds_0 = value;
	}

	inline static int32_t get_offset_of_a_1() { return static_cast<int32_t>(offsetof(U3CDoInvokeU3Ec__Iterator0_t2099263868, ___a_1)); }
	inline Action_t3226471752 * get_a_1() const { return ___a_1; }
	inline Action_t3226471752 ** get_address_of_a_1() { return &___a_1; }
	inline void set_a_1(Action_t3226471752 * value)
	{
		___a_1 = value;
		Il2CppCodeGenWriteBarrier(&___a_1, value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CDoInvokeU3Ec__Iterator0_t2099263868, ___U24current_2)); }
	inline Il2CppObject * get_U24current_2() const { return ___U24current_2; }
	inline Il2CppObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Il2CppObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CDoInvokeU3Ec__Iterator0_t2099263868, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CDoInvokeU3Ec__Iterator0_t2099263868, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
