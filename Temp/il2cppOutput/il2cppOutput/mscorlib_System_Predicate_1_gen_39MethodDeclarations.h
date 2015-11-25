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

// System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>
struct Predicate_1_t2251;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t173;
// System.AsyncCallback
struct AsyncCallback_t174;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgument.h"

// System.Void System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16932_gshared (Predicate_1_t2251 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m16932(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2251 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16932_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16933_gshared (Predicate_1_t2251 * __this, CustomAttributeNamedArgument_t1244  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m16933(__this, ___obj, method) (( bool (*) (Predicate_1_t2251 *, CustomAttributeNamedArgument_t1244 , const MethodInfo*))Predicate_1_Invoke_m16933_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16934_gshared (Predicate_1_t2251 * __this, CustomAttributeNamedArgument_t1244  ___obj, AsyncCallback_t174 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m16934(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2251 *, CustomAttributeNamedArgument_t1244 , AsyncCallback_t174 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16934_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16935_gshared (Predicate_1_t2251 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m16935(__this, ___result, method) (( bool (*) (Predicate_1_t2251 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16935_gshared)(__this, ___result, method)
