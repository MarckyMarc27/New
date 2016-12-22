#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUITexture
struct GUITexture_t1909122990;
// UnityEngine.GUIText
struct GUIText_t2411476300;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebCommunication
struct  WebCommunication_t2821201330  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GUITexture WebCommunication::m_guiTexture
	GUITexture_t1909122990 * ___m_guiTexture_2;
	// UnityEngine.GUIText WebCommunication::m_guiText
	GUIText_t2411476300 * ___m_guiText_3;

public:
	inline static int32_t get_offset_of_m_guiTexture_2() { return static_cast<int32_t>(offsetof(WebCommunication_t2821201330, ___m_guiTexture_2)); }
	inline GUITexture_t1909122990 * get_m_guiTexture_2() const { return ___m_guiTexture_2; }
	inline GUITexture_t1909122990 ** get_address_of_m_guiTexture_2() { return &___m_guiTexture_2; }
	inline void set_m_guiTexture_2(GUITexture_t1909122990 * value)
	{
		___m_guiTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_guiTexture_2, value);
	}

	inline static int32_t get_offset_of_m_guiText_3() { return static_cast<int32_t>(offsetof(WebCommunication_t2821201330, ___m_guiText_3)); }
	inline GUIText_t2411476300 * get_m_guiText_3() const { return ___m_guiText_3; }
	inline GUIText_t2411476300 ** get_address_of_m_guiText_3() { return &___m_guiText_3; }
	inline void set_m_guiText_3(GUIText_t2411476300 * value)
	{
		___m_guiText_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_guiText_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
