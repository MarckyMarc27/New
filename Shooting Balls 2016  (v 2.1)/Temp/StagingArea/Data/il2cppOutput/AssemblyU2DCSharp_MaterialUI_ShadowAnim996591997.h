#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CanvasGroup
struct CanvasGroup_t3296560743;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t590162004;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.ShadowAnim
struct  ShadowAnim_t996591997  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean MaterialUI.ShadowAnim::isOn
	bool ___isOn_2;
	// System.Boolean MaterialUI.ShadowAnim::anim
	bool ___anim_3;
	// UnityEngine.CanvasGroup MaterialUI.ShadowAnim::thisGroup
	CanvasGroup_t3296560743 * ___thisGroup_4;
	// UnityEngine.UI.Image[] MaterialUI.ShadowAnim::shadows
	ImageU5BU5D_t590162004* ___shadows_5;

public:
	inline static int32_t get_offset_of_isOn_2() { return static_cast<int32_t>(offsetof(ShadowAnim_t996591997, ___isOn_2)); }
	inline bool get_isOn_2() const { return ___isOn_2; }
	inline bool* get_address_of_isOn_2() { return &___isOn_2; }
	inline void set_isOn_2(bool value)
	{
		___isOn_2 = value;
	}

	inline static int32_t get_offset_of_anim_3() { return static_cast<int32_t>(offsetof(ShadowAnim_t996591997, ___anim_3)); }
	inline bool get_anim_3() const { return ___anim_3; }
	inline bool* get_address_of_anim_3() { return &___anim_3; }
	inline void set_anim_3(bool value)
	{
		___anim_3 = value;
	}

	inline static int32_t get_offset_of_thisGroup_4() { return static_cast<int32_t>(offsetof(ShadowAnim_t996591997, ___thisGroup_4)); }
	inline CanvasGroup_t3296560743 * get_thisGroup_4() const { return ___thisGroup_4; }
	inline CanvasGroup_t3296560743 ** get_address_of_thisGroup_4() { return &___thisGroup_4; }
	inline void set_thisGroup_4(CanvasGroup_t3296560743 * value)
	{
		___thisGroup_4 = value;
		Il2CppCodeGenWriteBarrier(&___thisGroup_4, value);
	}

	inline static int32_t get_offset_of_shadows_5() { return static_cast<int32_t>(offsetof(ShadowAnim_t996591997, ___shadows_5)); }
	inline ImageU5BU5D_t590162004* get_shadows_5() const { return ___shadows_5; }
	inline ImageU5BU5D_t590162004** get_address_of_shadows_5() { return &___shadows_5; }
	inline void set_shadows_5(ImageU5BU5D_t590162004* value)
	{
		___shadows_5 = value;
		Il2CppCodeGenWriteBarrier(&___shadows_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
