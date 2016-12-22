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
// WebCommunication
struct WebCommunication_t2821201330;

#include "Boo_Lang_Boo_Lang_GenericGenerator_1_gen3339482989.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebCommunication/$SetFacebookProfilePhoto$1
struct  U24SetFacebookProfilePhotoU241_t1911985357  : public GenericGenerator_1_t3339482989
{
public:
	// System.String WebCommunication/$SetFacebookProfilePhoto$1::$a_photoUrl$6
	String_t* ___U24a_photoUrlU246_0;
	// WebCommunication WebCommunication/$SetFacebookProfilePhoto$1::$self_$7
	WebCommunication_t2821201330 * ___U24self_U247_1;

public:
	inline static int32_t get_offset_of_U24a_photoUrlU246_0() { return static_cast<int32_t>(offsetof(U24SetFacebookProfilePhotoU241_t1911985357, ___U24a_photoUrlU246_0)); }
	inline String_t* get_U24a_photoUrlU246_0() const { return ___U24a_photoUrlU246_0; }
	inline String_t** get_address_of_U24a_photoUrlU246_0() { return &___U24a_photoUrlU246_0; }
	inline void set_U24a_photoUrlU246_0(String_t* value)
	{
		___U24a_photoUrlU246_0 = value;
		Il2CppCodeGenWriteBarrier(&___U24a_photoUrlU246_0, value);
	}

	inline static int32_t get_offset_of_U24self_U247_1() { return static_cast<int32_t>(offsetof(U24SetFacebookProfilePhotoU241_t1911985357, ___U24self_U247_1)); }
	inline WebCommunication_t2821201330 * get_U24self_U247_1() const { return ___U24self_U247_1; }
	inline WebCommunication_t2821201330 ** get_address_of_U24self_U247_1() { return &___U24self_U247_1; }
	inline void set_U24self_U247_1(WebCommunication_t2821201330 * value)
	{
		___U24self_U247_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24self_U247_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
