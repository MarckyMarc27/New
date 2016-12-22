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

// MaterialUI.SelectionBoxConfig/PickItem
struct PickItem_t4096300763;
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

// System.Void MaterialUI.SelectionBoxConfig/PickItem::.ctor(System.Object,System.IntPtr)
extern "C"  void PickItem__ctor_m3410270964 (PickItem_t4096300763 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MaterialUI.SelectionBoxConfig/PickItem::Invoke(System.Int32)
extern "C"  void PickItem_Invoke_m586834703 (PickItem_t4096300763 * __this, int32_t ___itemId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult MaterialUI.SelectionBoxConfig/PickItem::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PickItem_BeginInvoke_m690657650 (PickItem_t4096300763 * __this, int32_t ___itemId0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MaterialUI.SelectionBoxConfig/PickItem::EndInvoke(System.IAsyncResult)
extern "C"  void PickItem_EndInvoke_m2942356670 (PickItem_t4096300763 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
