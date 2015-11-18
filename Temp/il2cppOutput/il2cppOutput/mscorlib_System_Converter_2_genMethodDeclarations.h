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

// System.Converter`2<System.Object,System.Object>
struct Converter_2_t2199;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t169;
// System.AsyncCallback
struct AsyncCallback_t170;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Converter_2__ctor_m16429_gshared (Converter_2_t2199 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Converter_2__ctor_m16429(__this, ___object, ___method, method) (( void (*) (Converter_2_t2199 *, Object_t *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m16429_gshared)(__this, ___object, ___method, method)
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C" Object_t * Converter_2_Invoke_m16430_gshared (Converter_2_t2199 * __this, Object_t * ___input, const MethodInfo* method);
#define Converter_2_Invoke_m16430(__this, ___input, method) (( Object_t * (*) (Converter_2_t2199 *, Object_t *, const MethodInfo*))Converter_2_Invoke_m16430_gshared)(__this, ___input, method)
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C" Object_t * Converter_2_BeginInvoke_m16431_gshared (Converter_2_t2199 * __this, Object_t * ___input, AsyncCallback_t170 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Converter_2_BeginInvoke_m16431(__this, ___input, ___callback, ___object, method) (( Object_t * (*) (Converter_2_t2199 *, Object_t *, AsyncCallback_t170 *, Object_t *, const MethodInfo*))Converter_2_BeginInvoke_m16431_gshared)(__this, ___input, ___callback, ___object, method)
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Converter_2_EndInvoke_m16432_gshared (Converter_2_t2199 * __this, Object_t * ___result, const MethodInfo* method);
#define Converter_2_EndInvoke_m16432(__this, ___result, method) (( Object_t * (*) (Converter_2_t2199 *, Object_t *, const MethodInfo*))Converter_2_EndInvoke_m16432_gshared)(__this, ___result, method)
