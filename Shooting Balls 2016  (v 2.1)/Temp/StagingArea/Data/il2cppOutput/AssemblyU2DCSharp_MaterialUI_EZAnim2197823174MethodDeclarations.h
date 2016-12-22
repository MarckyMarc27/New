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

// MaterialUI.EZAnim
struct EZAnim_t2197823174;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_MaterialUI_AnimType1787094729.h"

// System.Void MaterialUI.EZAnim::.ctor()
extern "C"  void EZAnim__ctor_m996386184 (EZAnim_t2197823174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MaterialUI.EZAnim::Start()
extern "C"  void EZAnim_Start_m3914226876 (EZAnim_t2197823174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MaterialUI.EZAnim::AnimStruct(System.Int32)
extern "C"  void EZAnim_AnimStruct_m1740606095 (EZAnim_t2197823174 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MaterialUI.EZAnim::Animate()
extern "C"  void EZAnim_Animate_m2119740137 (EZAnim_t2197823174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MaterialUI.EZAnim::AnimateAll()
extern "C"  void EZAnim_AnimateAll_m533683044 (EZAnim_t2197823174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MaterialUI.EZAnim::AnimateByIndex(System.Int32)
extern "C"  void EZAnim_AnimateByIndex_m457918309 (EZAnim_t2197823174 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MaterialUI.EZAnim::AnimateByName(System.String)
extern "C"  void EZAnim_AnimateByName_m2366233175 (EZAnim_t2197823174 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MaterialUI.EZAnim::AnimateByTag(System.String)
extern "C"  void EZAnim_AnimateByTag_m3382844578 (EZAnim_t2197823174 * __this, String_t* ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MaterialUI.EZAnim::Update()
extern "C"  void EZAnim_Update_m212656483 (EZAnim_t2197823174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MaterialUI.EZAnim::delayedCall()
extern "C"  Il2CppObject * EZAnim_delayedCall_m1620645946 (EZAnim_t2197823174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MaterialUI.EZAnim::UpdateAnimation(System.Single,System.Single,System.Single,System.Single,MaterialUI.AnimType)
extern "C"  float EZAnim_UpdateAnimation_m2883954509 (EZAnim_t2197823174 * __this, float ___initialValue0, float ___targetValue1, float ___time2, float ___duration3, int32_t ___animationType4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
