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

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t1845;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t292;
// System.Object[]
struct ObjectU5BU5D_t39;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m11925_gshared (InvokableCall_1_t1845 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m11925(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t1845 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m11925_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m11926_gshared (InvokableCall_1_t1845 * __this, UnityAction_1_t292 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m11926(__this, ___action, method) (( void (*) (InvokableCall_1_t1845 *, UnityAction_1_t292 *, const MethodInfo*))InvokableCall_1__ctor_m11926_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m11927_gshared (InvokableCall_1_t1845 * __this, ObjectU5BU5D_t39* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m11927(__this, ___args, method) (( void (*) (InvokableCall_1_t1845 *, ObjectU5BU5D_t39*, const MethodInfo*))InvokableCall_1_Invoke_m11927_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m11928_gshared (InvokableCall_1_t1845 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m11928(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t1845 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m11928_gshared)(__this, ___targetObj, ___method, method)
