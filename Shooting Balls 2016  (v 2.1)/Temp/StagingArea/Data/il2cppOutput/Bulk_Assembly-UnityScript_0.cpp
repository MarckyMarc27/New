#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// WebCommunication
struct WebCommunication_t2821201330;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// WebCommunication/$PublishToWall$8
struct U24PublishToWallU248_t2929647041;
// System.Collections.Generic.IEnumerator`1<UnityEngine.WWW>
struct IEnumerator_1_t395468866;
// WebCommunication/$PublishToWall$8/$
struct U24_t1472081222;
// WebCommunication/$SetFacebookProfilePhoto$1
struct U24SetFacebookProfilePhotoU241_t1911985357;
// WebCommunication/$SetFacebookProfilePhoto$1/$
struct U24_t2322889432;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E3783534214.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DUnityScript_WebCommunication2821201330.h"
#include "AssemblyU2DUnityScript_WebCommunication2821201330MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Application354826772MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_GUIText2411476300MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIText2411476300.h"
#include "AssemblyU2DUnityScript_WebCommunication_U24SetFace1911985357MethodDeclarations.h"
#include "AssemblyU2DUnityScript_WebCommunication_U24SetFace1911985357.h"
#include "UnityEngine_UnityEngine_Screen786852042MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUI4082743951MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Rect3681755626MethodDeclarations.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_Coroutine2299508840.h"
#include "AssemblyU2DUnityScript_WebCommunication_U24Publish2929647041MethodDeclarations.h"
#include "AssemblyU2DUnityScript_WebCommunication_U24Publish2929647041.h"
#include "Boo_Lang_Boo_Lang_GenericGenerator_1_gen3339482989MethodDeclarations.h"
#include "AssemblyU2DUnityScript_WebCommunication_U24Publish1472081222MethodDeclarations.h"
#include "AssemblyU2DUnityScript_WebCommunication_U24Publish1472081222.h"
#include "Boo_Lang_Boo_Lang_GenericGeneratorEnumerator_1_gen3675916201MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WWWForm3950226929MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WWW2919945039MethodDeclarations.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug1368543263MethodDeclarations.h"
#include "Boo_Lang_Boo_Lang_GenericGeneratorEnumerator_1_gen3675916201.h"
#include "UnityEngine_UnityEngine_WWWForm3950226929.h"
#include "UnityEngine_UnityEngine_WWW2919945039.h"
#include "AssemblyU2DUnityScript_WebCommunication_U24SetFace2322889432MethodDeclarations.h"
#include "AssemblyU2DUnityScript_WebCommunication_U24SetFace2322889432.h"
#include "UnityEngine_UnityEngine_GUITexture1909122990MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "UnityEngine_UnityEngine_GUITexture1909122990.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"
#include "UnityEngine_UnityEngine_Texture2243626319MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebCommunication::.ctor()
extern "C"  void WebCommunication__ctor_m1284375980 (WebCommunication_t2821201330 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebCommunication::Start()
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1106927232;
extern const uint32_t WebCommunication_Start_m3646148792_MetadataUsageId;
extern "C"  void WebCommunication_Start_m3646148792 (WebCommunication_t2821201330 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCommunication_Start_m3646148792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Application_ExternalCall_m3669435144(NULL /*static, unused*/, _stringLiteral1106927232, ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebCommunication::SetFacebookProfileName(System.String)
extern "C"  void WebCommunication_SetFacebookProfileName_m3140654450 (WebCommunication_t2821201330 * __this, String_t* ___a_username0, const MethodInfo* method)
{
	{
		GUIText_t2411476300 * L_0 = __this->get_m_guiText_3();
		String_t* L_1 = ___a_username0;
		GUIText_set_text_m3758377277(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator WebCommunication::SetFacebookProfilePhoto(System.String)
extern Il2CppClass* U24SetFacebookProfilePhotoU241_t1911985357_il2cpp_TypeInfo_var;
extern const uint32_t WebCommunication_SetFacebookProfilePhoto_m2853198295_MetadataUsageId;
extern "C"  Il2CppObject * WebCommunication_SetFacebookProfilePhoto_m2853198295 (WebCommunication_t2821201330 * __this, String_t* ___a_photoUrl0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCommunication_SetFacebookProfilePhoto_m2853198295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___a_photoUrl0;
		U24SetFacebookProfilePhotoU241_t1911985357 * L_1 = (U24SetFacebookProfilePhotoU241_t1911985357 *)il2cpp_codegen_object_new(U24SetFacebookProfilePhotoU241_t1911985357_il2cpp_TypeInfo_var);
		U24SetFacebookProfilePhotoU241__ctor_m728143635(L_1, L_0, __this, /*hidden argument*/NULL);
		Il2CppObject* L_2 = U24SetFacebookProfilePhotoU241_GetEnumerator_m821997093(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void WebCommunication::OnGUI()
extern Il2CppClass* GUI_t4082743951_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1052106999;
extern const uint32_t WebCommunication_OnGUI_m1119768072_MetadataUsageId;
extern "C"  void WebCommunication_OnGUI_m1119768072 (WebCommunication_t2821201330 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCommunication_OnGUI_m1119768072_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Screen_get_width_m41137238(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1051800773(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t3681755626  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Rect__ctor_m1220545469(&L_2, ((float)((float)((float)((float)(((float)((float)L_0)))*(float)(0.5f)))-(float)(((float)((float)((int32_t)64)))))), ((float)((float)(((float)((float)L_1)))*(float)(0.5f))), (((float)((float)((int32_t)128)))), (((float)((float)((int32_t)24)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t4082743951_il2cpp_TypeInfo_var);
		bool L_3 = GUI_Button_m3054448581(NULL /*static, unused*/, L_2, _stringLiteral1052106999, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		Il2CppObject * L_4 = VirtFuncInvoker0< Il2CppObject * >::Invoke(8 /* System.Collections.IEnumerator WebCommunication::PublishToWall() */, __this);
		MonoBehaviour_StartCoroutine_m2470621050(__this, L_4, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
// System.Collections.IEnumerator WebCommunication::PublishToWall()
extern Il2CppClass* U24PublishToWallU248_t2929647041_il2cpp_TypeInfo_var;
extern const uint32_t WebCommunication_PublishToWall_m1412059980_MetadataUsageId;
extern "C"  Il2CppObject * WebCommunication_PublishToWall_m1412059980 (WebCommunication_t2821201330 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCommunication_PublishToWall_m1412059980_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U24PublishToWallU248_t2929647041 * L_0 = (U24PublishToWallU248_t2929647041 *)il2cpp_codegen_object_new(U24PublishToWallU248_t2929647041_il2cpp_TypeInfo_var);
		U24PublishToWallU248__ctor_m3052920913(L_0, /*hidden argument*/NULL);
		Il2CppObject* L_1 = U24PublishToWallU248_GetEnumerator_m3832567157(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void WebCommunication::Main()
extern "C"  void WebCommunication_Main_m3971470193 (WebCommunication_t2821201330 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WebCommunication/$PublishToWall$8::.ctor()
extern const MethodInfo* GenericGenerator_1__ctor_m3374374185_MethodInfo_var;
extern const uint32_t U24PublishToWallU248__ctor_m3052920913_MetadataUsageId;
extern "C"  void U24PublishToWallU248__ctor_m3052920913 (U24PublishToWallU248_t2929647041 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24PublishToWallU248__ctor_m3052920913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GenericGenerator_1__ctor_m3374374185(__this, /*hidden argument*/GenericGenerator_1__ctor_m3374374185_MethodInfo_var);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.WWW> WebCommunication/$PublishToWall$8::GetEnumerator()
extern Il2CppClass* U24_t1472081222_il2cpp_TypeInfo_var;
extern const uint32_t U24PublishToWallU248_GetEnumerator_m3832567157_MetadataUsageId;
extern "C"  Il2CppObject* U24PublishToWallU248_GetEnumerator_m3832567157 (U24PublishToWallU248_t2929647041 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24PublishToWallU248_GetEnumerator_m3832567157_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U24_t1472081222 * L_0 = (U24_t1472081222 *)il2cpp_codegen_object_new(U24_t1472081222_il2cpp_TypeInfo_var);
		U24__ctor_m2306010870(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void WebCommunication/$PublishToWall$8/$::.ctor()
extern const MethodInfo* GenericGeneratorEnumerator_1__ctor_m1590993333_MethodInfo_var;
extern const uint32_t U24__ctor_m2306010870_MetadataUsageId;
extern "C"  void U24__ctor_m2306010870 (U24_t1472081222 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24__ctor_m2306010870_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GenericGeneratorEnumerator_1__ctor_m1590993333(__this, /*hidden argument*/GenericGeneratorEnumerator_1__ctor_m1590993333_MethodInfo_var);
		return;
	}
}
// System.Boolean WebCommunication/$PublishToWall$8/$::MoveNext()
extern Il2CppClass* WWWForm_t3950226929_il2cpp_TypeInfo_var;
extern Il2CppClass* WWW_t2919945039_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern const MethodInfo* GenericGeneratorEnumerator_1_Yield_m3888337206_MethodInfo_var;
extern const MethodInfo* GenericGeneratorEnumerator_1_YieldDefault_m2394375366_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral217597302;
extern Il2CppCodeGenString* _stringLiteral3686446540;
extern Il2CppCodeGenString* _stringLiteral94491151;
extern Il2CppCodeGenString* _stringLiteral3115736605;
extern Il2CppCodeGenString* _stringLiteral2430261144;
extern Il2CppCodeGenString* _stringLiteral1863689525;
extern const uint32_t U24_MoveNext_m3593815384_MetadataUsageId;
extern "C"  bool U24_MoveNext_m3593815384 (U24_t1472081222 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24_MoveNext_m3593815384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ((GenericGeneratorEnumerator_1_t3675916201 *)__this)->get__state_1();
		if (L_0 == 0)
		{
			goto IL_0017;
		}
		if (L_0 == 1)
		{
			goto IL_00b8;
		}
		if (L_0 == 2)
		{
			goto IL_0080;
		}
	}

IL_0017:
	{
		WWWForm_t3950226929 * L_1 = (WWWForm_t3950226929 *)il2cpp_codegen_object_new(WWWForm_t3950226929_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2129424870(L_1, /*hidden argument*/NULL);
		__this->set_U24formU249_2(L_1);
		__this->set_U24urlU2410_3(_stringLiteral217597302);
		WWWForm_t3950226929 * L_2 = __this->get_U24formU249_2();
		WWWForm_AddField_m1334606983(L_2, _stringLiteral3686446540, _stringLiteral94491151, /*hidden argument*/NULL);
		WWWForm_t3950226929 * L_3 = __this->get_U24formU249_2();
		WWWForm_AddField_m1334606983(L_3, _stringLiteral3115736605, _stringLiteral2430261144, /*hidden argument*/NULL);
		String_t* L_4 = __this->get_U24urlU2410_3();
		WWWForm_t3950226929 * L_5 = __this->get_U24formU249_2();
		WWW_t2919945039 * L_6 = (WWW_t2919945039 *)il2cpp_codegen_object_new(WWW_t2919945039_il2cpp_TypeInfo_var);
		WWW__ctor_m578693146(L_6, L_4, L_5, /*hidden argument*/NULL);
		__this->set_U24wwwU2411_4(L_6);
		WWW_t2919945039 * L_7 = __this->get_U24wwwU2411_4();
		bool L_8 = GenericGeneratorEnumerator_1_Yield_m3888337206(__this, 2, L_7, /*hidden argument*/GenericGeneratorEnumerator_1_Yield_m3888337206_MethodInfo_var);
		G_B6_0 = ((int32_t)(L_8));
		goto IL_00b9;
	}

IL_0080:
	{
		WWW_t2919945039 * L_9 = __this->get_U24wwwU2411_4();
		String_t* L_10 = WWW_get_error_m3092701216(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Inequality_m304203149(NULL /*static, unused*/, L_10, (String_t*)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00a6;
		}
	}
	{
		WWW_t2919945039 * L_12 = __this->get_U24wwwU2411_4();
		String_t* L_13 = WWW_get_error_m3092701216(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_00a6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral1863689525, /*hidden argument*/NULL);
		GenericGeneratorEnumerator_1_YieldDefault_m2394375366(__this, 1, /*hidden argument*/GenericGeneratorEnumerator_1_YieldDefault_m2394375366_MethodInfo_var);
	}

IL_00b8:
	{
		G_B6_0 = 0;
	}

IL_00b9:
	{
		return (bool)G_B6_0;
	}
}
// System.Void WebCommunication/$SetFacebookProfilePhoto$1::.ctor(System.String,WebCommunication)
extern const MethodInfo* GenericGenerator_1__ctor_m3374374185_MethodInfo_var;
extern const uint32_t U24SetFacebookProfilePhotoU241__ctor_m728143635_MetadataUsageId;
extern "C"  void U24SetFacebookProfilePhotoU241__ctor_m728143635 (U24SetFacebookProfilePhotoU241_t1911985357 * __this, String_t* ___a_photoUrl0, WebCommunication_t2821201330 * ___self_1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24SetFacebookProfilePhotoU241__ctor_m728143635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GenericGenerator_1__ctor_m3374374185(__this, /*hidden argument*/GenericGenerator_1__ctor_m3374374185_MethodInfo_var);
		String_t* L_0 = ___a_photoUrl0;
		__this->set_U24a_photoUrlU246_0(L_0);
		WebCommunication_t2821201330 * L_1 = ___self_1;
		__this->set_U24self_U247_1(L_1);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.WWW> WebCommunication/$SetFacebookProfilePhoto$1::GetEnumerator()
extern Il2CppClass* U24_t2322889432_il2cpp_TypeInfo_var;
extern const uint32_t U24SetFacebookProfilePhotoU241_GetEnumerator_m821997093_MetadataUsageId;
extern "C"  Il2CppObject* U24SetFacebookProfilePhotoU241_GetEnumerator_m821997093 (U24SetFacebookProfilePhotoU241_t1911985357 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24SetFacebookProfilePhotoU241_GetEnumerator_m821997093_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_U24a_photoUrlU246_0();
		WebCommunication_t2821201330 * L_1 = __this->get_U24self_U247_1();
		U24_t2322889432 * L_2 = (U24_t2322889432 *)il2cpp_codegen_object_new(U24_t2322889432_il2cpp_TypeInfo_var);
		U24__ctor_m2724928766(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void WebCommunication/$SetFacebookProfilePhoto$1/$::.ctor(System.String,WebCommunication)
extern const MethodInfo* GenericGeneratorEnumerator_1__ctor_m1590993333_MethodInfo_var;
extern const uint32_t U24__ctor_m2724928766_MetadataUsageId;
extern "C"  void U24__ctor_m2724928766 (U24_t2322889432 * __this, String_t* ___a_photoUrl0, WebCommunication_t2821201330 * ___self_1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24__ctor_m2724928766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GenericGeneratorEnumerator_1__ctor_m1590993333(__this, /*hidden argument*/GenericGeneratorEnumerator_1__ctor_m1590993333_MethodInfo_var);
		String_t* L_0 = ___a_photoUrl0;
		__this->set_U24a_photoUrlU244_4(L_0);
		WebCommunication_t2821201330 * L_1 = ___self_1;
		__this->set_U24self_U245_5(L_1);
		return;
	}
}
// System.Boolean WebCommunication/$SetFacebookProfilePhoto$1/$::MoveNext()
extern Il2CppClass* WWW_t2919945039_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern const MethodInfo* GenericGeneratorEnumerator_1_Yield_m3888337206_MethodInfo_var;
extern const MethodInfo* GenericGeneratorEnumerator_1_YieldDefault_m2394375366_MethodInfo_var;
extern const uint32_t U24_MoveNext_m952186450_MetadataUsageId;
extern "C"  bool U24_MoveNext_m952186450 (U24_t2322889432 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24_MoveNext_m952186450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = ((GenericGeneratorEnumerator_1_t3675916201 *)__this)->get__state_1();
		if (L_0 == 0)
		{
			goto IL_0017;
		}
		if (L_0 == 1)
		{
			goto IL_00c5;
		}
		if (L_0 == 2)
		{
			goto IL_003a;
		}
	}

IL_0017:
	{
		String_t* L_1 = __this->get_U24a_photoUrlU244_4();
		WWW_t2919945039 * L_2 = (WWW_t2919945039 *)il2cpp_codegen_object_new(WWW_t2919945039_il2cpp_TypeInfo_var);
		WWW__ctor_m2024029190(L_2, L_1, /*hidden argument*/NULL);
		__this->set_U24wwwU242_2(L_2);
		WWW_t2919945039 * L_3 = __this->get_U24wwwU242_2();
		bool L_4 = GenericGeneratorEnumerator_1_Yield_m3888337206(__this, 2, L_3, /*hidden argument*/GenericGeneratorEnumerator_1_Yield_m3888337206_MethodInfo_var);
		G_B7_0 = ((int32_t)(L_4));
		goto IL_00c6;
	}

IL_003a:
	{
		WWW_t2919945039 * L_5 = __this->get_U24wwwU242_2();
		String_t* L_6 = WWW_get_error_m3092701216(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Inequality_m304203149(NULL /*static, unused*/, L_6, (String_t*)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0065;
		}
	}
	{
		WWW_t2919945039 * L_8 = __this->get_U24wwwU242_2();
		String_t* L_9 = WWW_get_error_m3092701216(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		goto IL_00bd;
	}

IL_0065:
	{
		WWW_t2919945039 * L_10 = __this->get_U24wwwU242_2();
		Texture2D_t3542995729 * L_11 = WWW_get_texture_m1121178301(L_10, /*hidden argument*/NULL);
		__this->set_U24newTextureFromWebU243_3(L_11);
		WebCommunication_t2821201330 * L_12 = __this->get_U24self_U245_5();
		GUITexture_t1909122990 * L_13 = L_12->get_m_guiTexture_2();
		Texture2D_t3542995729 * L_14 = __this->get_U24newTextureFromWebU243_3();
		GUITexture_set_texture_m889384983(L_13, L_14, /*hidden argument*/NULL);
		WebCommunication_t2821201330 * L_15 = __this->get_U24self_U245_5();
		GUITexture_t1909122990 * L_16 = L_15->get_m_guiTexture_2();
		Texture2D_t3542995729 * L_17 = __this->get_U24newTextureFromWebU243_3();
		int32_t L_18 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_17);
		Texture2D_t3542995729 * L_19 = __this->get_U24newTextureFromWebU243_3();
		int32_t L_20 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_19);
		Rect_t3681755626  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Rect__ctor_m1220545469(&L_21, (((float)((float)0))), (((float)((float)0))), (((float)((float)L_18))), (((float)((float)L_20))), /*hidden argument*/NULL);
		GUITexture_set_pixelInset_m2054734980(L_16, L_21, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		GenericGeneratorEnumerator_1_YieldDefault_m2394375366(__this, 1, /*hidden argument*/GenericGeneratorEnumerator_1_YieldDefault_m2394375366_MethodInfo_var);
	}

IL_00c5:
	{
		G_B7_0 = 0;
	}

IL_00c6:
	{
		return (bool)G_B7_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
