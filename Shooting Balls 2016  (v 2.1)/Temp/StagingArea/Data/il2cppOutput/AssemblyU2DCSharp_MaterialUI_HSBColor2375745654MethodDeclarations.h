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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MaterialUI_HSBColor2375745654.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void MaterialUI.HSBColor::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void HSBColor__ctor_m3369605220 (HSBColor_t2375745654 * __this, float ___h0, float ___s1, float ___b2, float ___a3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MaterialUI.HSBColor::.ctor(System.Single,System.Single,System.Single)
extern "C"  void HSBColor__ctor_m2328532983 (HSBColor_t2375745654 * __this, float ___h0, float ___s1, float ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MaterialUI.HSBColor::.ctor(UnityEngine.Color)
extern "C"  void HSBColor__ctor_m1771665790 (HSBColor_t2375745654 * __this, Color_t2020392075  ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MaterialUI.HSBColor MaterialUI.HSBColor::FromColor(UnityEngine.Color)
extern "C"  HSBColor_t2375745654  HSBColor_FromColor_m1934774629 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color MaterialUI.HSBColor::ToColor(MaterialUI.HSBColor)
extern "C"  Color_t2020392075  HSBColor_ToColor_m2132826020 (Il2CppObject * __this /* static, unused */, HSBColor_t2375745654  ___hsbColor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color MaterialUI.HSBColor::ToColor()
extern "C"  Color_t2020392075  HSBColor_ToColor_m1132997349 (HSBColor_t2375745654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MaterialUI.HSBColor::ToString()
extern "C"  String_t* HSBColor_ToString_m3642184897 (HSBColor_t2375745654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MaterialUI.HSBColor MaterialUI.HSBColor::Lerp(MaterialUI.HSBColor,MaterialUI.HSBColor,System.Single)
extern "C"  HSBColor_t2375745654  HSBColor_Lerp_m3919162134 (Il2CppObject * __this /* static, unused */, HSBColor_t2375745654  ___a0, HSBColor_t2375745654  ___b1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MaterialUI.HSBColor::Test()
extern "C"  void HSBColor_Test_m1520127968 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
