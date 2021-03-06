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

// UnityEngine.Purchasing.OSXStoreBindings
struct OSXStoreBindings_t116576999;
// UnityEngine.Purchasing.UnityPurchasingCallback
struct UnityPurchasingCallback_t2635187846;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Apple_UnityEngine_Purchasing_UnityPurchasingCallba2635187846.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Purchasing.OSXStoreBindings::.ctor()
extern "C"  void OSXStoreBindings__ctor_m3914056605 (OSXStoreBindings_t116576999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.OSXStoreBindings::SetUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void OSXStoreBindings_SetUnityPurchasingCallback_m2800386886 (OSXStoreBindings_t116576999 * __this, UnityPurchasingCallback_t2635187846 * ___AsyncCallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.OSXStoreBindings::RestoreTransactions()
extern "C"  void OSXStoreBindings_RestoreTransactions_m3460039746 (OSXStoreBindings_t116576999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.OSXStoreBindings::AddTransactionObserver()
extern "C"  void OSXStoreBindings_AddTransactionObserver_m2934661066 (OSXStoreBindings_t116576999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.OSXStoreBindings::RetrieveProducts(System.String)
extern "C"  void OSXStoreBindings_RetrieveProducts_m2083493257 (OSXStoreBindings_t116576999 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.OSXStoreBindings::Purchase(System.String,System.String)
extern "C"  void OSXStoreBindings_Purchase_m3563412408 (OSXStoreBindings_t116576999 * __this, String_t* ___productJSON0, String_t* ___developerPayload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.OSXStoreBindings::FinishTransaction(System.String,System.String)
extern "C"  void OSXStoreBindings_FinishTransaction_m3636026038 (OSXStoreBindings_t116576999 * __this, String_t* ___productJSON0, String_t* ___transactionID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
