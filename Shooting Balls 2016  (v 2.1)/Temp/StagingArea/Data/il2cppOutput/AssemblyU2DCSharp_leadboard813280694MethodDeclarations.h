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

// leadboard
struct leadboard_t813280694;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void leadboard::.ctor()
extern "C"  void leadboard__ctor_m484432841 (leadboard_t813280694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void leadboard::Start()
extern "C"  void leadboard_Start_m4131807953 (leadboard_t813280694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void leadboard::Awake()
extern "C"  void leadboard_Awake_m1669203634 (leadboard_t813280694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void leadboard::AddNewHighscore(System.String,System.Int32)
extern "C"  void leadboard_AddNewHighscore_m886159945 (Il2CppObject * __this /* static, unused */, String_t* ___username0, int32_t ___score1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator leadboard::UploadNewHighscore(System.String,System.Int32)
extern "C"  Il2CppObject * leadboard_UploadNewHighscore_m4182571801 (leadboard_t813280694 * __this, String_t* ___username0, int32_t ___score1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void leadboard::DownloadHighscores()
extern "C"  void leadboard_DownloadHighscores_m4269297450 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator leadboard::DownloadHighscoresFromDatabase()
extern "C"  Il2CppObject * leadboard_DownloadHighscoresFromDatabase_m1462464685 (leadboard_t813280694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void leadboard::FormatHighscores(System.String)
extern "C"  void leadboard_FormatHighscores_m1362577277 (leadboard_t813280694 * __this, String_t* ___textStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String leadboard::GetPosition(System.Int32)
extern "C"  String_t* leadboard_GetPosition_m4214192946 (Il2CppObject * __this /* static, unused */, int32_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
