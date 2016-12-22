#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Facebook.Unity.InitDelegate
struct InitDelegate_t3410465555;
// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t712804158;
// Facebook.Unity.FacebookGameObject
struct FacebookGameObject_t2922570967;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.FB
struct  FB_t1612658294  : public ScriptableObject_t1975622470
{
public:

public:
};

struct FB_t1612658294_StaticFields
{
public:
	// Facebook.Unity.InitDelegate Facebook.Unity.FB::onInitComplete
	InitDelegate_t3410465555 * ___onInitComplete_2;
	// Facebook.Unity.HideUnityDelegate Facebook.Unity.FB::onHideUnity
	HideUnityDelegate_t712804158 * ___onHideUnity_3;
	// Facebook.Unity.FacebookGameObject Facebook.Unity.FB::facebook
	FacebookGameObject_t2922570967 * ___facebook_4;
	// System.String Facebook.Unity.FB::authResponse
	String_t* ___authResponse_5;
	// System.Boolean Facebook.Unity.FB::isInitCalled
	bool ___isInitCalled_6;
	// System.String Facebook.Unity.FB::appId
	String_t* ___appId_7;
	// System.Boolean Facebook.Unity.FB::cookie
	bool ___cookie_8;
	// System.Boolean Facebook.Unity.FB::logging
	bool ___logging_9;
	// System.Boolean Facebook.Unity.FB::status
	bool ___status_10;
	// System.Boolean Facebook.Unity.FB::xfbml
	bool ___xfbml_11;
	// System.Boolean Facebook.Unity.FB::frictionlessRequests
	bool ___frictionlessRequests_12;
	// System.String Facebook.Unity.FB::facebookDomain
	String_t* ___facebookDomain_13;

public:
	inline static int32_t get_offset_of_onInitComplete_2() { return static_cast<int32_t>(offsetof(FB_t1612658294_StaticFields, ___onInitComplete_2)); }
	inline InitDelegate_t3410465555 * get_onInitComplete_2() const { return ___onInitComplete_2; }
	inline InitDelegate_t3410465555 ** get_address_of_onInitComplete_2() { return &___onInitComplete_2; }
	inline void set_onInitComplete_2(InitDelegate_t3410465555 * value)
	{
		___onInitComplete_2 = value;
		Il2CppCodeGenWriteBarrier(&___onInitComplete_2, value);
	}

	inline static int32_t get_offset_of_onHideUnity_3() { return static_cast<int32_t>(offsetof(FB_t1612658294_StaticFields, ___onHideUnity_3)); }
	inline HideUnityDelegate_t712804158 * get_onHideUnity_3() const { return ___onHideUnity_3; }
	inline HideUnityDelegate_t712804158 ** get_address_of_onHideUnity_3() { return &___onHideUnity_3; }
	inline void set_onHideUnity_3(HideUnityDelegate_t712804158 * value)
	{
		___onHideUnity_3 = value;
		Il2CppCodeGenWriteBarrier(&___onHideUnity_3, value);
	}

	inline static int32_t get_offset_of_facebook_4() { return static_cast<int32_t>(offsetof(FB_t1612658294_StaticFields, ___facebook_4)); }
	inline FacebookGameObject_t2922570967 * get_facebook_4() const { return ___facebook_4; }
	inline FacebookGameObject_t2922570967 ** get_address_of_facebook_4() { return &___facebook_4; }
	inline void set_facebook_4(FacebookGameObject_t2922570967 * value)
	{
		___facebook_4 = value;
		Il2CppCodeGenWriteBarrier(&___facebook_4, value);
	}

	inline static int32_t get_offset_of_authResponse_5() { return static_cast<int32_t>(offsetof(FB_t1612658294_StaticFields, ___authResponse_5)); }
	inline String_t* get_authResponse_5() const { return ___authResponse_5; }
	inline String_t** get_address_of_authResponse_5() { return &___authResponse_5; }
	inline void set_authResponse_5(String_t* value)
	{
		___authResponse_5 = value;
		Il2CppCodeGenWriteBarrier(&___authResponse_5, value);
	}

	inline static int32_t get_offset_of_isInitCalled_6() { return static_cast<int32_t>(offsetof(FB_t1612658294_StaticFields, ___isInitCalled_6)); }
	inline bool get_isInitCalled_6() const { return ___isInitCalled_6; }
	inline bool* get_address_of_isInitCalled_6() { return &___isInitCalled_6; }
	inline void set_isInitCalled_6(bool value)
	{
		___isInitCalled_6 = value;
	}

	inline static int32_t get_offset_of_appId_7() { return static_cast<int32_t>(offsetof(FB_t1612658294_StaticFields, ___appId_7)); }
	inline String_t* get_appId_7() const { return ___appId_7; }
	inline String_t** get_address_of_appId_7() { return &___appId_7; }
	inline void set_appId_7(String_t* value)
	{
		___appId_7 = value;
		Il2CppCodeGenWriteBarrier(&___appId_7, value);
	}

	inline static int32_t get_offset_of_cookie_8() { return static_cast<int32_t>(offsetof(FB_t1612658294_StaticFields, ___cookie_8)); }
	inline bool get_cookie_8() const { return ___cookie_8; }
	inline bool* get_address_of_cookie_8() { return &___cookie_8; }
	inline void set_cookie_8(bool value)
	{
		___cookie_8 = value;
	}

	inline static int32_t get_offset_of_logging_9() { return static_cast<int32_t>(offsetof(FB_t1612658294_StaticFields, ___logging_9)); }
	inline bool get_logging_9() const { return ___logging_9; }
	inline bool* get_address_of_logging_9() { return &___logging_9; }
	inline void set_logging_9(bool value)
	{
		___logging_9 = value;
	}

	inline static int32_t get_offset_of_status_10() { return static_cast<int32_t>(offsetof(FB_t1612658294_StaticFields, ___status_10)); }
	inline bool get_status_10() const { return ___status_10; }
	inline bool* get_address_of_status_10() { return &___status_10; }
	inline void set_status_10(bool value)
	{
		___status_10 = value;
	}

	inline static int32_t get_offset_of_xfbml_11() { return static_cast<int32_t>(offsetof(FB_t1612658294_StaticFields, ___xfbml_11)); }
	inline bool get_xfbml_11() const { return ___xfbml_11; }
	inline bool* get_address_of_xfbml_11() { return &___xfbml_11; }
	inline void set_xfbml_11(bool value)
	{
		___xfbml_11 = value;
	}

	inline static int32_t get_offset_of_frictionlessRequests_12() { return static_cast<int32_t>(offsetof(FB_t1612658294_StaticFields, ___frictionlessRequests_12)); }
	inline bool get_frictionlessRequests_12() const { return ___frictionlessRequests_12; }
	inline bool* get_address_of_frictionlessRequests_12() { return &___frictionlessRequests_12; }
	inline void set_frictionlessRequests_12(bool value)
	{
		___frictionlessRequests_12 = value;
	}

	inline static int32_t get_offset_of_facebookDomain_13() { return static_cast<int32_t>(offsetof(FB_t1612658294_StaticFields, ___facebookDomain_13)); }
	inline String_t* get_facebookDomain_13() const { return ___facebookDomain_13; }
	inline String_t** get_address_of_facebookDomain_13() { return &___facebookDomain_13; }
	inline void set_facebookDomain_13(String_t* value)
	{
		___facebookDomain_13 = value;
		Il2CppCodeGenWriteBarrier(&___facebookDomain_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
