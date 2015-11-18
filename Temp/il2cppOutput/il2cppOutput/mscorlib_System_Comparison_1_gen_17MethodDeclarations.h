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

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t1920;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t169;
// System.AsyncCallback
struct AsyncCallback_t170;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m12924_gshared (Comparison_1_t1920 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m12924(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1920 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m12924_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m12925_gshared (Comparison_1_t1920 * __this, UIVertex_t182  ___x, UIVertex_t182  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m12925(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1920 *, UIVertex_t182 , UIVertex_t182 , const MethodInfo*))Comparison_1_Invoke_m12925_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m12926_gshared (Comparison_1_t1920 * __this, UIVertex_t182  ___x, UIVertex_t182  ___y, AsyncCallback_t170 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m12926(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1920 *, UIVertex_t182 , UIVertex_t182 , AsyncCallback_t170 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m12926_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m12927_gshared (Comparison_1_t1920 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m12927(__this, ___result, method) (( int32_t (*) (Comparison_1_t1920 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m12927_gshared)(__this, ___result, method)
