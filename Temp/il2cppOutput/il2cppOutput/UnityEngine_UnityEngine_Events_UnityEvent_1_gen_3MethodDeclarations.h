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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_6MethodDeclarations.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
#define UnityEvent_1__ctor_m1835(__this, method) (( void (*) (UnityEvent_1_t164 *, const MethodInfo*))UnityEvent_1__ctor_m11413_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m13342(__this, ___call, method) (( void (*) (UnityEvent_1_t164 *, UnityAction_1_t1948 *, const MethodInfo*))UnityEvent_1_AddListener_m11415_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m13343(__this, ___call, method) (( void (*) (UnityEvent_1_t164 *, UnityAction_1_t1948 *, const MethodInfo*))UnityEvent_1_RemoveListener_m11417_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.String>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m13344(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t164 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m11419_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m13345(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t539 * (*) (UnityEvent_1_t164 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m11421_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m13346(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t539 * (*) (Object_t * /* static, unused */, UnityAction_1_t1948 *, const MethodInfo*))UnityEvent_1_GetDelegate_m11423_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
#define UnityEvent_1_Invoke_m1891(__this, ___arg0, method) (( void (*) (UnityEvent_1_t164 *, String_t*, const MethodInfo*))UnityEvent_1_Invoke_m11424_gshared)(__this, ___arg0, method)