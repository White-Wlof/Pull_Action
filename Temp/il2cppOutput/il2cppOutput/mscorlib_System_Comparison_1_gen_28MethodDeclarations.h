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

// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t2037;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t173;
// System.AsyncCallback
struct AsyncCallback_t174;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Comparison`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14651_gshared (Comparison_1_t2037 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14651(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2037 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14651_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14652_gshared (Comparison_1_t2037 * __this, Vector2_t3  ___x, Vector2_t3  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14652(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2037 *, Vector2_t3 , Vector2_t3 , const MethodInfo*))Comparison_1_Invoke_m14652_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector2>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14653_gshared (Comparison_1_t2037 * __this, Vector2_t3  ___x, Vector2_t3  ___y, AsyncCallback_t174 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14653(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2037 *, Vector2_t3 , Vector2_t3 , AsyncCallback_t174 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14653_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14654_gshared (Comparison_1_t2037 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14654(__this, ___result, method) (( int32_t (*) (Comparison_1_t2037 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14654_gshared)(__this, ___result, method)
