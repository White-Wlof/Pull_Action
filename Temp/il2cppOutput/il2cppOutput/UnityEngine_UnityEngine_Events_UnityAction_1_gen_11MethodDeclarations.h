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

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t1961;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t169;
// System.AsyncCallback
struct AsyncCallback_t170;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m13544_gshared (UnityAction_1_t1961 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m13544(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t1961 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m13544_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m13545_gshared (UnityAction_1_t1961 * __this, Vector2_t3  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m13545(__this, ___arg0, method) (( void (*) (UnityAction_1_t1961 *, Vector2_t3 , const MethodInfo*))UnityAction_1_Invoke_m13545_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m13546_gshared (UnityAction_1_t1961 * __this, Vector2_t3  ___arg0, AsyncCallback_t170 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m13546(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t1961 *, Vector2_t3 , AsyncCallback_t170 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m13546_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m13547_gshared (UnityAction_1_t1961 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m13547(__this, ___result, method) (( void (*) (UnityAction_1_t1961 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m13547_gshared)(__this, ___result, method)
