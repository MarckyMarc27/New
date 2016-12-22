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

// RealTimeCountdown
struct RealTimeCountdown_t642119280;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime693205669.h"

// System.Void RealTimeCountdown::.ctor()
extern "C"  void RealTimeCountdown__ctor_m265533697 (RealTimeCountdown_t642119280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealTimeCountdown::Start()
extern "C"  void RealTimeCountdown_Start_m1329291233 (RealTimeCountdown_t642119280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealTimeCountdown::Update()
extern "C"  void RealTimeCountdown_Update_m2878902974 (RealTimeCountdown_t642119280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealTimeCountdown::SetCountdown()
extern "C"  void RealTimeCountdown_SetCountdown_m3952343036 (RealTimeCountdown_t642119280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealTimeCountdown::ActiveCountdown()
extern "C"  void RealTimeCountdown_ActiveCountdown_m770375306 (RealTimeCountdown_t642119280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RealTimeCountdown::GetTimeLeft(System.DateTime)
extern "C"  String_t* RealTimeCountdown_GetTimeLeft_m2032674876 (RealTimeCountdown_t642119280 * __this, DateTime_t693205669  ___targetDate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator RealTimeCountdown::GetDateTimeLeft(System.DateTime)
extern "C"  Il2CppObject * RealTimeCountdown_GetDateTimeLeft_m3780849517 (RealTimeCountdown_t642119280 * __this, DateTime_t693205669  ___targetDateTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
