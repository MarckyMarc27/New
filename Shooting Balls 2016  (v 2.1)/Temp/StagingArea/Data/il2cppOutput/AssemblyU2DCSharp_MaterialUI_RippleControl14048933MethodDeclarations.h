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

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void MaterialUI.RippleControl::Initialize()
extern "C"  void RippleControl_Initialize_m668131407 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject MaterialUI.RippleControl::MakeRipple(UnityEngine.Vector3,UnityEngine.Transform,System.Int32,UnityEngine.Color)
extern "C"  GameObject_t1756533147 * RippleControl_MakeRipple_m3968156033 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___position0, Transform_t3275118058 * ___parent1, int32_t ___size2, Color_t2020392075  ___color3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject MaterialUI.RippleControl::MakeRipple(UnityEngine.Vector3,UnityEngine.Transform,System.Int32,System.Single,System.Single,System.Single,UnityEngine.Color)
extern "C"  GameObject_t1756533147 * RippleControl_MakeRipple_m4024064684 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___position0, Transform_t3275118058 * ___parent1, int32_t ___size2, float ___animSpeed3, float ___startAlpha4, float ___endAlpha5, Color_t2020392075  ___color6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject MaterialUI.RippleControl::MakeRipple(UnityEngine.Vector3,UnityEngine.Transform,System.Int32,System.Single,System.Single,System.Single,UnityEngine.Color,UnityEngine.Vector3)
extern "C"  GameObject_t1756533147 * RippleControl_MakeRipple_m669306737 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___position0, Transform_t3275118058 * ___parent1, int32_t ___size2, float ___animSpeed3, float ___startAlpha4, float ___endAlpha5, Color_t2020392075  ___color6, Vector3_t2243707580  ___endPosition7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
