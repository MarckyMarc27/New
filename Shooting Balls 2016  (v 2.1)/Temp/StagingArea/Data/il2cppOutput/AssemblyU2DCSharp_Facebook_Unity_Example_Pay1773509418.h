﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "AssemblyU2DCSharp_Facebook_Unity_Example_MenuBase1506935956.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Example.Pay
struct  Pay_t1773509418  : public MenuBase_t1506935956
{
public:
	// System.String Facebook.Unity.Example.Pay::payProduct
	String_t* ___payProduct_17;

public:
	inline static int32_t get_offset_of_payProduct_17() { return static_cast<int32_t>(offsetof(Pay_t1773509418, ___payProduct_17)); }
	inline String_t* get_payProduct_17() const { return ___payProduct_17; }
	inline String_t** get_address_of_payProduct_17() { return &___payProduct_17; }
	inline void set_payProduct_17(String_t* value)
	{
		___payProduct_17 = value;
		Il2CppCodeGenWriteBarrier(&___payProduct_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
