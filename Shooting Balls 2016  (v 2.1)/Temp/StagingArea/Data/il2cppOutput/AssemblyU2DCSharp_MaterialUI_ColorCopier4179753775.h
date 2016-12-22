#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.ColorCopier
struct  ColorCopier_t4179753775  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image MaterialUI.ColorCopier::sourceImage
	Image_t2042527209 * ___sourceImage_2;
	// UnityEngine.UI.Text MaterialUI.ColorCopier::sourceText
	Text_t356221433 * ___sourceText_3;
	// UnityEngine.UI.Image MaterialUI.ColorCopier::thisImage
	Image_t2042527209 * ___thisImage_4;
	// UnityEngine.UI.Text MaterialUI.ColorCopier::thisText
	Text_t356221433 * ___thisText_5;
	// UnityEngine.Color MaterialUI.ColorCopier::lastColor
	Color_t2020392075  ___lastColor_6;

public:
	inline static int32_t get_offset_of_sourceImage_2() { return static_cast<int32_t>(offsetof(ColorCopier_t4179753775, ___sourceImage_2)); }
	inline Image_t2042527209 * get_sourceImage_2() const { return ___sourceImage_2; }
	inline Image_t2042527209 ** get_address_of_sourceImage_2() { return &___sourceImage_2; }
	inline void set_sourceImage_2(Image_t2042527209 * value)
	{
		___sourceImage_2 = value;
		Il2CppCodeGenWriteBarrier(&___sourceImage_2, value);
	}

	inline static int32_t get_offset_of_sourceText_3() { return static_cast<int32_t>(offsetof(ColorCopier_t4179753775, ___sourceText_3)); }
	inline Text_t356221433 * get_sourceText_3() const { return ___sourceText_3; }
	inline Text_t356221433 ** get_address_of_sourceText_3() { return &___sourceText_3; }
	inline void set_sourceText_3(Text_t356221433 * value)
	{
		___sourceText_3 = value;
		Il2CppCodeGenWriteBarrier(&___sourceText_3, value);
	}

	inline static int32_t get_offset_of_thisImage_4() { return static_cast<int32_t>(offsetof(ColorCopier_t4179753775, ___thisImage_4)); }
	inline Image_t2042527209 * get_thisImage_4() const { return ___thisImage_4; }
	inline Image_t2042527209 ** get_address_of_thisImage_4() { return &___thisImage_4; }
	inline void set_thisImage_4(Image_t2042527209 * value)
	{
		___thisImage_4 = value;
		Il2CppCodeGenWriteBarrier(&___thisImage_4, value);
	}

	inline static int32_t get_offset_of_thisText_5() { return static_cast<int32_t>(offsetof(ColorCopier_t4179753775, ___thisText_5)); }
	inline Text_t356221433 * get_thisText_5() const { return ___thisText_5; }
	inline Text_t356221433 ** get_address_of_thisText_5() { return &___thisText_5; }
	inline void set_thisText_5(Text_t356221433 * value)
	{
		___thisText_5 = value;
		Il2CppCodeGenWriteBarrier(&___thisText_5, value);
	}

	inline static int32_t get_offset_of_lastColor_6() { return static_cast<int32_t>(offsetof(ColorCopier_t4179753775, ___lastColor_6)); }
	inline Color_t2020392075  get_lastColor_6() const { return ___lastColor_6; }
	inline Color_t2020392075 * get_address_of_lastColor_6() { return &___lastColor_6; }
	inline void set_lastColor_6(Color_t2020392075  value)
	{
		___lastColor_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
