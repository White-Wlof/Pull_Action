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

// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct CachedInvokableCall_1_t601;
// UnityEngine.Object
struct Object_t29;
struct Object_t29_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t39;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3100_gshared (CachedInvokableCall_1_t601 * __this, Object_t29 * ___target, MethodInfo_t * ___theFunction, bool ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3100(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t601 *, Object_t29 *, MethodInfo_t *, bool, const MethodInfo*))CachedInvokableCall_1__ctor_m3100_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m15839_gshared (CachedInvokableCall_1_t601 * __this, ObjectU5BU5D_t39* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m15839(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t601 *, ObjectU5BU5D_t39*, const MethodInfo*))CachedInvokableCall_1_Invoke_m15839_gshared)(__this, ___args, method)
