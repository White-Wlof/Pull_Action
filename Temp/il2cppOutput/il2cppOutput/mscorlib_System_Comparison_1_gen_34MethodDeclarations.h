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

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2125;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t173;
// System.AsyncCallback
struct AsyncCallback_t174;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15662_gshared (Comparison_1_t2125 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m15662(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2125 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m15662_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15663_gshared (Comparison_1_t2125 * __this, UILineInfo_t344  ___x, UILineInfo_t344  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15663(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2125 *, UILineInfo_t344 , UILineInfo_t344 , const MethodInfo*))Comparison_1_Invoke_m15663_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15664_gshared (Comparison_1_t2125 * __this, UILineInfo_t344  ___x, UILineInfo_t344  ___y, AsyncCallback_t174 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15664(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2125 *, UILineInfo_t344 , UILineInfo_t344 , AsyncCallback_t174 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15664_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15665_gshared (Comparison_1_t2125 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15665(__this, ___result, method) (( int32_t (*) (Comparison_1_t2125 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15665_gshared)(__this, ___result, method)
