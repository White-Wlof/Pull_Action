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

// System.Func`2<System.Object,System.Boolean>
struct Func_2_t374;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t169;
// System.AsyncCallback
struct AsyncCallback_t170;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m13926_gshared (Func_2_t374 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m13926(__this, ___object, ___method, method) (( void (*) (Func_2_t374 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m13926_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
extern "C" bool Func_2_Invoke_m13928_gshared (Func_2_t374 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m13928(__this, ___arg1, method) (( bool (*) (Func_2_t374 *, Object_t *, const MethodInfo*))Func_2_Invoke_m13928_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m13930_gshared (Func_2_t374 * __this, Object_t * ___arg1, AsyncCallback_t170 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m13930(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t374 *, Object_t *, AsyncCallback_t170 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m13930_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" bool Func_2_EndInvoke_m13932_gshared (Func_2_t374 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m13932(__this, ___result, method) (( bool (*) (Func_2_t374 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m13932_gshared)(__this, ___result, method)
