#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;

#include "AssemblyU2DCSharp_Facebook_Unity_Example_ConsoleBa4290192428.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Example.LogView
struct  LogView_t3192394209  : public ConsoleBase_t4290192428
{
public:

public:
};

struct LogView_t3192394209_StaticFields
{
public:
	// System.String Facebook.Unity.Example.LogView::datePatt
	String_t* ___datePatt_16;
	// System.Collections.Generic.IList`1<System.String> Facebook.Unity.Example.LogView::events
	Il2CppObject* ___events_17;

public:
	inline static int32_t get_offset_of_datePatt_16() { return static_cast<int32_t>(offsetof(LogView_t3192394209_StaticFields, ___datePatt_16)); }
	inline String_t* get_datePatt_16() const { return ___datePatt_16; }
	inline String_t** get_address_of_datePatt_16() { return &___datePatt_16; }
	inline void set_datePatt_16(String_t* value)
	{
		___datePatt_16 = value;
		Il2CppCodeGenWriteBarrier(&___datePatt_16, value);
	}

	inline static int32_t get_offset_of_events_17() { return static_cast<int32_t>(offsetof(LogView_t3192394209_StaticFields, ___events_17)); }
	inline Il2CppObject* get_events_17() const { return ___events_17; }
	inline Il2CppObject** get_address_of_events_17() { return &___events_17; }
	inline void set_events_17(Il2CppObject* value)
	{
		___events_17 = value;
		Il2CppCodeGenWriteBarrier(&___events_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
