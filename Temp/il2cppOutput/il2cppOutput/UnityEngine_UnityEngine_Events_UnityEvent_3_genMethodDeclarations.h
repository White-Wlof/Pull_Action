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

// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t2157;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t542;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern "C" void UnityEvent_3__ctor_m16025_gshared (UnityEvent_3_t2157 * __this, const MethodInfo* method);
#define UnityEvent_3__ctor_m16025(__this, method) (( void (*) (UnityEvent_3_t2157 *, const MethodInfo*))UnityEvent_3__ctor_m16025_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_3_FindMethod_Impl_m16026_gshared (UnityEvent_3_t2157 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_3_FindMethod_Impl_m16026(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_3_t2157 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_3_FindMethod_Impl_m16026_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t542 * UnityEvent_3_GetDelegate_m16027_gshared (UnityEvent_3_t2157 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_3_GetDelegate_m16027(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t542 * (*) (UnityEvent_3_t2157 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_3_GetDelegate_m16027_gshared)(__this, ___target, ___theFunction, method)
