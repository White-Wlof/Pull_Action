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

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t1794;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t173;
// System.AsyncCallback
struct AsyncCallback_t174;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m11233_gshared (Predicate_1_t1794 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m11233(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1794 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11233_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m11234_gshared (Predicate_1_t1794 * __this, RaycastResult_t80  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m11234(__this, ___obj, method) (( bool (*) (Predicate_1_t1794 *, RaycastResult_t80 , const MethodInfo*))Predicate_1_Invoke_m11234_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m11235_gshared (Predicate_1_t1794 * __this, RaycastResult_t80  ___obj, AsyncCallback_t174 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m11235(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1794 *, RaycastResult_t80 , AsyncCallback_t174 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11235_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m11236_gshared (Predicate_1_t1794 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m11236(__this, ___result, method) (( bool (*) (Predicate_1_t1794 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11236_gshared)(__this, ___result, method)
