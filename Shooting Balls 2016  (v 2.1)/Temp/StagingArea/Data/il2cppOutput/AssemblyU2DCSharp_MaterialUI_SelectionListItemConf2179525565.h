#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MaterialUI.SelectionBoxConfig
struct SelectionBoxConfig_t2292907685;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.SelectionListItemConfig
struct  SelectionListItemConfig_t2179525565  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 MaterialUI.SelectionListItemConfig::listId
	int32_t ___listId_2;
	// MaterialUI.SelectionBoxConfig MaterialUI.SelectionListItemConfig::selectionBoxConfig
	SelectionBoxConfig_t2292907685 * ___selectionBoxConfig_3;

public:
	inline static int32_t get_offset_of_listId_2() { return static_cast<int32_t>(offsetof(SelectionListItemConfig_t2179525565, ___listId_2)); }
	inline int32_t get_listId_2() const { return ___listId_2; }
	inline int32_t* get_address_of_listId_2() { return &___listId_2; }
	inline void set_listId_2(int32_t value)
	{
		___listId_2 = value;
	}

	inline static int32_t get_offset_of_selectionBoxConfig_3() { return static_cast<int32_t>(offsetof(SelectionListItemConfig_t2179525565, ___selectionBoxConfig_3)); }
	inline SelectionBoxConfig_t2292907685 * get_selectionBoxConfig_3() const { return ___selectionBoxConfig_3; }
	inline SelectionBoxConfig_t2292907685 ** get_address_of_selectionBoxConfig_3() { return &___selectionBoxConfig_3; }
	inline void set_selectionBoxConfig_3(SelectionBoxConfig_t2292907685 * value)
	{
		___selectionBoxConfig_3 = value;
		Il2CppCodeGenWriteBarrier(&___selectionBoxConfig_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
