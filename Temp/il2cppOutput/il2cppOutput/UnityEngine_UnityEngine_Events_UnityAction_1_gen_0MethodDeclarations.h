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

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t287;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t169;
// System.AsyncCallback
struct AsyncCallback_t170;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m1769_gshared (UnityAction_1_t287 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m1769(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t287 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m1769_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m11894_gshared (UnityAction_1_t287 * __this, Color_t100  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m11894(__this, ___arg0, method) (( void (*) (UnityAction_1_t287 *, Color_t100 , const MethodInfo*))UnityAction_1_Invoke_m11894_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m11895_gshared (UnityAction_1_t287 * __this, Color_t100  ___arg0, AsyncCallback_t170 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m11895(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t287 *, Color_t100 , AsyncCallback_t170 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m11895_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m11896_gshared (UnityAction_1_t287 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m11896(__this, ___result, method) (( void (*) (UnityAction_1_t287 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m11896_gshared)(__this, ___result, method)
