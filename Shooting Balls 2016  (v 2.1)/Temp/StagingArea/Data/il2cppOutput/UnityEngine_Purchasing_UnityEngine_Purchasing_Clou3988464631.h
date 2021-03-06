﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.IAsyncUtil
struct IAsyncUtil_t4290779655;
// System.String
struct String_t;
// UnityEngine.ILogger
struct ILogger_t1425954571;
// System.Func`3<System.Char,System.Int32,System.String>
struct Func_3_t2237848711;
// System.Func`3<System.String,System.String,System.String>
struct Func_3_t1214888473;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.CloudCatalogManager
struct  CloudCatalogManager_t3988464631  : public Il2CppObject
{
public:
	// UnityEngine.Purchasing.IAsyncUtil UnityEngine.Purchasing.CloudCatalogManager::m_AsyncUtil
	Il2CppObject * ___m_AsyncUtil_0;
	// System.String UnityEngine.Purchasing.CloudCatalogManager::m_CacheFileName
	String_t* ___m_CacheFileName_1;
	// UnityEngine.ILogger UnityEngine.Purchasing.CloudCatalogManager::m_Logger
	Il2CppObject * ___m_Logger_2;
	// System.String UnityEngine.Purchasing.CloudCatalogManager::m_CatalogURL
	String_t* ___m_CatalogURL_3;
	// System.String UnityEngine.Purchasing.CloudCatalogManager::m_StoreName
	String_t* ___m_StoreName_4;

public:
	inline static int32_t get_offset_of_m_AsyncUtil_0() { return static_cast<int32_t>(offsetof(CloudCatalogManager_t3988464631, ___m_AsyncUtil_0)); }
	inline Il2CppObject * get_m_AsyncUtil_0() const { return ___m_AsyncUtil_0; }
	inline Il2CppObject ** get_address_of_m_AsyncUtil_0() { return &___m_AsyncUtil_0; }
	inline void set_m_AsyncUtil_0(Il2CppObject * value)
	{
		___m_AsyncUtil_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_AsyncUtil_0, value);
	}

	inline static int32_t get_offset_of_m_CacheFileName_1() { return static_cast<int32_t>(offsetof(CloudCatalogManager_t3988464631, ___m_CacheFileName_1)); }
	inline String_t* get_m_CacheFileName_1() const { return ___m_CacheFileName_1; }
	inline String_t** get_address_of_m_CacheFileName_1() { return &___m_CacheFileName_1; }
	inline void set_m_CacheFileName_1(String_t* value)
	{
		___m_CacheFileName_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_CacheFileName_1, value);
	}

	inline static int32_t get_offset_of_m_Logger_2() { return static_cast<int32_t>(offsetof(CloudCatalogManager_t3988464631, ___m_Logger_2)); }
	inline Il2CppObject * get_m_Logger_2() const { return ___m_Logger_2; }
	inline Il2CppObject ** get_address_of_m_Logger_2() { return &___m_Logger_2; }
	inline void set_m_Logger_2(Il2CppObject * value)
	{
		___m_Logger_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Logger_2, value);
	}

	inline static int32_t get_offset_of_m_CatalogURL_3() { return static_cast<int32_t>(offsetof(CloudCatalogManager_t3988464631, ___m_CatalogURL_3)); }
	inline String_t* get_m_CatalogURL_3() const { return ___m_CatalogURL_3; }
	inline String_t** get_address_of_m_CatalogURL_3() { return &___m_CatalogURL_3; }
	inline void set_m_CatalogURL_3(String_t* value)
	{
		___m_CatalogURL_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_CatalogURL_3, value);
	}

	inline static int32_t get_offset_of_m_StoreName_4() { return static_cast<int32_t>(offsetof(CloudCatalogManager_t3988464631, ___m_StoreName_4)); }
	inline String_t* get_m_StoreName_4() const { return ___m_StoreName_4; }
	inline String_t** get_address_of_m_StoreName_4() { return &___m_StoreName_4; }
	inline void set_m_StoreName_4(String_t* value)
	{
		___m_StoreName_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_StoreName_4, value);
	}
};

struct CloudCatalogManager_t3988464631_StaticFields
{
public:
	// System.Func`3<System.Char,System.Int32,System.String> UnityEngine.Purchasing.CloudCatalogManager::<>f__am$cache0
	Func_3_t2237848711 * ___U3CU3Ef__amU24cache0_5;
	// System.Func`3<System.String,System.String,System.String> UnityEngine.Purchasing.CloudCatalogManager::<>f__am$cache1
	Func_3_t1214888473 * ___U3CU3Ef__amU24cache1_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(CloudCatalogManager_t3988464631_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Func_3_t2237848711 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Func_3_t2237848711 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Func_3_t2237848711 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_6() { return static_cast<int32_t>(offsetof(CloudCatalogManager_t3988464631_StaticFields, ___U3CU3Ef__amU24cache1_6)); }
	inline Func_3_t1214888473 * get_U3CU3Ef__amU24cache1_6() const { return ___U3CU3Ef__amU24cache1_6; }
	inline Func_3_t1214888473 ** get_address_of_U3CU3Ef__amU24cache1_6() { return &___U3CU3Ef__amU24cache1_6; }
	inline void set_U3CU3Ef__amU24cache1_6(Func_3_t1214888473 * value)
	{
		___U3CU3Ef__amU24cache1_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
