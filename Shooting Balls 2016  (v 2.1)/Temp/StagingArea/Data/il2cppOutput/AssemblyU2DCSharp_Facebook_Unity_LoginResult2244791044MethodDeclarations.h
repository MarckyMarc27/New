#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Facebook.Unity.LoginResult
struct LoginResult_t2244791044;
// System.String
struct String_t;
// Facebook.Unity.AccessToken
struct AccessToken_t2518141643;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t2981295538;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Facebook_Unity_AccessToken2518141643.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Facebook.Unity.LoginResult::.ctor(System.String)
extern "C"  void LoginResult__ctor_m1866496726 (LoginResult_t2244791044 * __this, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AccessToken Facebook.Unity.LoginResult::get_AccessToken()
extern "C"  AccessToken_t2518141643 * LoginResult_get_AccessToken_m2402523167 (LoginResult_t2244791044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.LoginResult::set_AccessToken(Facebook.Unity.AccessToken)
extern "C"  void LoginResult_set_AccessToken_m3649188618 (LoginResult_t2244791044 * __this, AccessToken_t2518141643 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AccessToken Facebook.Unity.LoginResult::ParseAccessTokenFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  AccessToken_t2518141643 * LoginResult_ParseAccessTokenFromResult_m1920328484 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___resultDictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.Unity.LoginResult::ParseExpirationDateFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  DateTime_t693205669  LoginResult_ParseExpirationDateFromResult_m4262410360 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___resultDictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Facebook.Unity.LoginResult::ParsePermissionFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject* LoginResult_ParsePermissionFromResult_m3114188623 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___resultDictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.Unity.LoginResult::FromTimestamp(System.Int32)
extern "C"  DateTime_t693205669  LoginResult_FromTimestamp_m1566819498 (Il2CppObject * __this /* static, unused */, int32_t ___timestamp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AccessToken Facebook.Unity.LoginResult::ParseAccessTokeFromResponse()
extern "C"  AccessToken_t2518141643 * LoginResult_ParseAccessTokeFromResponse_m3877190500 (LoginResult_t2244791044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.LoginResult::.cctor()
extern "C"  void LoginResult__cctor_m947046941 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.LoginResult::<ParsePermissionFromResult>m__0(System.Object)
extern "C"  String_t* LoginResult_U3CParsePermissionFromResultU3Em__0_m1740343391 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___permission0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.LoginResult::<ParseAccessTokeFromResponse>m__1(System.Object)
extern "C"  String_t* LoginResult_U3CParseAccessTokeFromResponseU3Em__1_m3721013684 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___permission0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
