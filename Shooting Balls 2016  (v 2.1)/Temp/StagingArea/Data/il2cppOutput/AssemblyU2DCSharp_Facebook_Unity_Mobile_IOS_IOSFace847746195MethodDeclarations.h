﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Facebook.Unity.Mobile.IOS.IOSFacebook
struct IOSFacebook_t847746195;
// Facebook.Unity.CallbackManager
struct CallbackManager_t4242095184;
// System.String
struct String_t;
// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t712804158;
// Facebook.Unity.InitDelegate
struct InitDelegate_t3410465555;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>
struct FacebookDelegate_1_t3733898188;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2981576340;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>
struct FacebookDelegate_1_t909463455;
// System.Uri
struct Uri_t19570940;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>
struct FacebookDelegate_1_t2564900615;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>
struct FacebookDelegate_1_t4160439974;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>
struct FacebookDelegate_1_t1547895262;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>
struct FacebookDelegate_1_t607253590;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t2578089594;
// System.String[]
struct StringU5BU5D_t1642385972;
// Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict
struct NativeDict_t4261124525;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Facebook_Unity_CallbackManager4242095184.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HideUnityDelegate712804158.h"
#include "AssemblyU2DCSharp_Facebook_Unity_InitDelegate3410465555.h"
#include "mscorlib_System_Nullable_1_gen241159723.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"
#include "AssemblyU2DCSharp_Facebook_Unity_ShareDialogMode1445392044.h"

// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::.ctor()
extern "C"  void IOSFacebook__ctor_m3456859964 (IOSFacebook_t847746195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::.ctor(Facebook.Unity.CallbackManager)
extern "C"  void IOSFacebook__ctor_m31135121 (IOSFacebook_t847746195 * __this, CallbackManager_t4242095184 * ___callbackManager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Mobile.IOS.IOSFacebook::get_LimitEventUsage()
extern "C"  bool IOSFacebook_get_LimitEventUsage_m847231721 (IOSFacebook_t847746195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void IOSFacebook_set_LimitEventUsage_m4229092378 (IOSFacebook_t847746195 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.IOS.IOSFacebook::get_SDKName()
extern "C"  String_t* IOSFacebook_get_SDKName_m2452179443 (IOSFacebook_t847746195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.IOS.IOSFacebook::get_SDKVersion()
extern "C"  String_t* IOSFacebook_get_SDKVersion_m3582278336 (IOSFacebook_t847746195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::Init(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void IOSFacebook_Init_m3088366070 (IOSFacebook_t847746195 * __this, String_t* ___appId0, bool ___cookie1, bool ___logging2, bool ___status3, bool ___xfbml4, String_t* ___channelUrl5, String_t* ___authResponse6, bool ___frictionlessRequests7, HideUnityDelegate_t712804158 * ___hideUnityDelegate8, InitDelegate_t3410465555 * ___onInitComplete9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void IOSFacebook_LogInWithReadPermissions_m798763489 (IOSFacebook_t847746195 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t3733898188 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void IOSFacebook_LogInWithPublishPermissions_m2700690914 (IOSFacebook_t847746195 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t3733898188 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::LogOut()
extern "C"  void IOSFacebook_LogOut_m3382860092 (IOSFacebook_t847746195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::AppRequest(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void IOSFacebook_AppRequest_m3562684841 (IOSFacebook_t847746195 * __this, String_t* ___message0, Nullable_1_t241159723  ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, Il2CppObject* ___filters4, Il2CppObject* ___excludeIds5, Nullable_1_t334943763  ___maxRecipients6, String_t* ___data7, String_t* ___title8, FacebookDelegate_1_t909463455 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::AppInvite(System.Uri,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>)
extern "C"  void IOSFacebook_AppInvite_m2860423388 (IOSFacebook_t847746195 * __this, Uri_t19570940 * ___appLinkUrl0, Uri_t19570940 * ___previewImageUrl1, FacebookDelegate_1_t2564900615 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void IOSFacebook_ShareLink_m727751344 (IOSFacebook_t847746195 * __this, Uri_t19570940 * ___contentURL0, String_t* ___contentTitle1, String_t* ___contentDescription2, Uri_t19570940 * ___photoURL3, FacebookDelegate_1_t4160439974 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void IOSFacebook_FeedShare_m2802065132 (IOSFacebook_t847746195 * __this, String_t* ___toId0, Uri_t19570940 * ___link1, String_t* ___linkName2, String_t* ___linkCaption3, String_t* ___linkDescription4, Uri_t19570940 * ___picture5, String_t* ___mediaSource6, FacebookDelegate_1_t4160439974 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void IOSFacebook_GameGroupCreate_m1870656308 (IOSFacebook_t847746195 * __this, String_t* ___name0, String_t* ___description1, String_t* ___privacy2, FacebookDelegate_1_t1547895262 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void IOSFacebook_GameGroupJoin_m1063275508 (IOSFacebook_t847746195 * __this, String_t* ___id0, FacebookDelegate_1_t607253590 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void IOSFacebook_AppEventsLogEvent_m1066487447 (IOSFacebook_t847746195 * __this, String_t* ___logEvent0, Nullable_1_t339576247  ___valueToSum1, Dictionary_2_t309261261 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void IOSFacebook_AppEventsLogPurchase_m2032049189 (IOSFacebook_t847746195 * __this, float ___logPurchase0, String_t* ___currency1, Dictionary_2_t309261261 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::ActivateApp(System.String)
extern "C"  void IOSFacebook_ActivateApp_m3008934234 (IOSFacebook_t847746195 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::FetchDeferredAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void IOSFacebook_FetchDeferredAppLink_m202960127 (IOSFacebook_t847746195 * __this, FacebookDelegate_1_t2578089594 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void IOSFacebook_GetAppLink_m2576948340 (IOSFacebook_t847746195 * __this, FacebookDelegate_1_t2578089594 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::SetShareDialogMode(Facebook.Unity.ShareDialogMode)
extern "C"  void IOSFacebook_SetShareDialogMode_m739833433 (IOSFacebook_t847746195 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::IOSInit(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String)
extern "C"  void IOSFacebook_IOSInit_m1150941705 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, bool ___cookie1, bool ___logging2, bool ___status3, bool ___frictionlessRequests4, String_t* ___urlSuffix5, String_t* ___unityUserAgentSuffix6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::IOSLogInWithReadPermissions(System.Int32,System.String)
extern "C"  void IOSFacebook_IOSLogInWithReadPermissions_m452604761 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___scope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::IOSLogInWithPublishPermissions(System.Int32,System.String)
extern "C"  void IOSFacebook_IOSLogInWithPublishPermissions_m1110825352 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___scope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::IOSLogOut()
extern "C"  void IOSFacebook_IOSLogOut_m2624234531 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::IOSSetShareDialogMode(System.Int32)
extern "C"  void IOSFacebook_IOSSetShareDialogMode_m3346478404 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::IOSShareLink(System.Int32,System.String,System.String,System.String,System.String)
extern "C"  void IOSFacebook_IOSShareLink_m598938921 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___contentURL1, String_t* ___contentTitle2, String_t* ___contentDescription3, String_t* ___photoURL4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::IOSFeedShare(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C"  void IOSFacebook_IOSFeedShare_m4273152493 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___toId1, String_t* ___link2, String_t* ___linkName3, String_t* ___linkCaption4, String_t* ___linkDescription5, String_t* ___picture6, String_t* ___mediaSource7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::IOSAppRequest(System.Int32,System.String,System.String,System.String,System.String[],System.Int32,System.String,System.String[],System.Int32,System.Boolean,System.Int32,System.String,System.String)
extern "C"  void IOSFacebook_IOSAppRequest_m1933773380 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___message1, String_t* ___actionType2, String_t* ___objectId3, StringU5BU5D_t1642385972* ___to4, int32_t ___toLength5, String_t* ___filters6, StringU5BU5D_t1642385972* ___excludeIds7, int32_t ___excludeIdsLength8, bool ___hasMaxRecipients9, int32_t ___maxRecipients10, String_t* ___data11, String_t* ___title12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::IOSAppInvite(System.Int32,System.String,System.String)
extern "C"  void IOSFacebook_IOSAppInvite_m3005942526 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___appLinkUrl1, String_t* ___previewImageUrl2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::IOSCreateGameGroup(System.Int32,System.String,System.String,System.String)
extern "C"  void IOSFacebook_IOSCreateGameGroup_m430237119 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___name1, String_t* ___description2, String_t* ___privacy3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::IOSJoinGameGroup(System.Int32,System.String)
extern "C"  void IOSFacebook_IOSJoinGameGroup_m2487554117 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___groupId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::IOSFBSettingsPublishInstall(System.Int32,System.String)
extern "C"  void IOSFacebook_IOSFBSettingsPublishInstall_m1189032227 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___appId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::IOSFBSettingsActivateApp(System.String)
extern "C"  void IOSFacebook_IOSFBSettingsActivateApp_m825404956 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::IOSFBAppEventsLogEvent(System.String,System.Double,System.Int32,System.String[],System.String[])
extern "C"  void IOSFacebook_IOSFBAppEventsLogEvent_m2884441104 (Il2CppObject * __this /* static, unused */, String_t* ___logEvent0, double ___valueToSum1, int32_t ___numParams2, StringU5BU5D_t1642385972* ___paramKeys3, StringU5BU5D_t1642385972* ___paramVals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::IOSFBAppEventsLogPurchase(System.Double,System.String,System.Int32,System.String[],System.String[])
extern "C"  void IOSFacebook_IOSFBAppEventsLogPurchase_m3642163541 (Il2CppObject * __this /* static, unused */, double ___logPurchase0, String_t* ___currency1, int32_t ___numParams2, StringU5BU5D_t1642385972* ___paramKeys3, StringU5BU5D_t1642385972* ___paramVals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::IOSFBAppEventsSetLimitEventUsage(System.Boolean)
extern "C"  void IOSFacebook_IOSFBAppEventsSetLimitEventUsage_m840019850 (Il2CppObject * __this /* static, unused */, bool ___limitEventUsage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::IOSGetAppLink(System.Int32)
extern "C"  void IOSFacebook_IOSGetAppLink_m3043140567 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.IOS.IOSFacebook::IOSFBSdkVersion()
extern "C"  String_t* IOSFacebook_IOSFBSdkVersion_m386186992 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::IOSFetchDeferredAppLink(System.Int32)
extern "C"  void IOSFacebook_IOSFetchDeferredAppLink_m2304545782 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict Facebook.Unity.Mobile.IOS.IOSFacebook::MarshallDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  NativeDict_t4261124525 * IOSFacebook_MarshallDict_m326005361 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___dict0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict Facebook.Unity.Mobile.IOS.IOSFacebook::MarshallDict(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  NativeDict_t4261124525 * IOSFacebook_MarshallDict_m3991011629 (Il2CppObject * __this /* static, unused */, Dictionary_2_t3943999495 * ___dict0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
