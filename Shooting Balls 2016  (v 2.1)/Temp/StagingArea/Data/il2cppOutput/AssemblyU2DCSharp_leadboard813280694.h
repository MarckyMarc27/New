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
// System.String[]
struct StringU5BU5D_t1642385972;
// leadboard
struct leadboard_t813280694;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// leadboard
struct  leadboard_t813280694  : public MonoBehaviour_t1158329972
{
public:
	// System.String leadboard::privateCode
	String_t* ___privateCode_2;
	// System.String leadboard::publicCode
	String_t* ___publicCode_3;
	// System.Int32 leadboard::MaxRank
	int32_t ___MaxRank_4;
	// System.String[] leadboard::Ranking
	StringU5BU5D_t1642385972* ___Ranking_5;

public:
	inline static int32_t get_offset_of_privateCode_2() { return static_cast<int32_t>(offsetof(leadboard_t813280694, ___privateCode_2)); }
	inline String_t* get_privateCode_2() const { return ___privateCode_2; }
	inline String_t** get_address_of_privateCode_2() { return &___privateCode_2; }
	inline void set_privateCode_2(String_t* value)
	{
		___privateCode_2 = value;
		Il2CppCodeGenWriteBarrier(&___privateCode_2, value);
	}

	inline static int32_t get_offset_of_publicCode_3() { return static_cast<int32_t>(offsetof(leadboard_t813280694, ___publicCode_3)); }
	inline String_t* get_publicCode_3() const { return ___publicCode_3; }
	inline String_t** get_address_of_publicCode_3() { return &___publicCode_3; }
	inline void set_publicCode_3(String_t* value)
	{
		___publicCode_3 = value;
		Il2CppCodeGenWriteBarrier(&___publicCode_3, value);
	}

	inline static int32_t get_offset_of_MaxRank_4() { return static_cast<int32_t>(offsetof(leadboard_t813280694, ___MaxRank_4)); }
	inline int32_t get_MaxRank_4() const { return ___MaxRank_4; }
	inline int32_t* get_address_of_MaxRank_4() { return &___MaxRank_4; }
	inline void set_MaxRank_4(int32_t value)
	{
		___MaxRank_4 = value;
	}

	inline static int32_t get_offset_of_Ranking_5() { return static_cast<int32_t>(offsetof(leadboard_t813280694, ___Ranking_5)); }
	inline StringU5BU5D_t1642385972* get_Ranking_5() const { return ___Ranking_5; }
	inline StringU5BU5D_t1642385972** get_address_of_Ranking_5() { return &___Ranking_5; }
	inline void set_Ranking_5(StringU5BU5D_t1642385972* value)
	{
		___Ranking_5 = value;
		Il2CppCodeGenWriteBarrier(&___Ranking_5, value);
	}
};

struct leadboard_t813280694_StaticFields
{
public:
	// System.Int32 leadboard::lenght
	int32_t ___lenght_6;
	// leadboard leadboard::instance
	leadboard_t813280694 * ___instance_8;

public:
	inline static int32_t get_offset_of_lenght_6() { return static_cast<int32_t>(offsetof(leadboard_t813280694_StaticFields, ___lenght_6)); }
	inline int32_t get_lenght_6() const { return ___lenght_6; }
	inline int32_t* get_address_of_lenght_6() { return &___lenght_6; }
	inline void set_lenght_6(int32_t value)
	{
		___lenght_6 = value;
	}

	inline static int32_t get_offset_of_instance_8() { return static_cast<int32_t>(offsetof(leadboard_t813280694_StaticFields, ___instance_8)); }
	inline leadboard_t813280694 * get_instance_8() const { return ___instance_8; }
	inline leadboard_t813280694 ** get_address_of_instance_8() { return &___instance_8; }
	inline void set_instance_8(leadboard_t813280694 * value)
	{
		___instance_8 = value;
		Il2CppCodeGenWriteBarrier(&___instance_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
