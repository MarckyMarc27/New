﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Facebook.Unity.InitDelegate
struct InitDelegate_t3410465555;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Facebook.Unity.InitDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void InitDelegate__ctor_m4132488361 (InitDelegate_t3410465555 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.InitDelegate::Invoke()
extern "C"  void InitDelegate_Invoke_m746744193 (InitDelegate_t3410465555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Facebook.Unity.InitDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * InitDelegate_BeginInvoke_m2348639584 (InitDelegate_t3410465555 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.InitDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void InitDelegate_EndInvoke_m706385571 (InitDelegate_t3410465555 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
