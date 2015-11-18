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

// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t2031;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t169;
// System.AsyncCallback
struct AsyncCallback_t170;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Predicate`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m14623_gshared (Predicate_1_t2031 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m14623(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2031 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m14623_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m14624_gshared (Predicate_1_t2031 * __this, Vector2_t3  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m14624(__this, ___obj, method) (( bool (*) (Predicate_1_t2031 *, Vector2_t3 , const MethodInfo*))Predicate_1_Invoke_m14624_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m14625_gshared (Predicate_1_t2031 * __this, Vector2_t3  ___obj, AsyncCallback_t170 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m14625(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2031 *, Vector2_t3 , AsyncCallback_t170 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m14625_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14626_gshared (Predicate_1_t2031 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m14626(__this, ___result, method) (( bool (*) (Predicate_1_t2031 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m14626_gshared)(__this, ___result, method)
