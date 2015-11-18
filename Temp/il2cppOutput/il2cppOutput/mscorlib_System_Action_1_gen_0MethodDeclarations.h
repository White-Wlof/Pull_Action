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

// System.Action`1<System.Boolean>
struct Action_1_t389;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t169;
// System.AsyncCallback
struct AsyncCallback_t170;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m15045_gshared (Action_1_t389 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m15045(__this, ___object, ___method, method) (( void (*) (Action_1_t389 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m15045_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
extern "C" void Action_1_Invoke_m3019_gshared (Action_1_t389 * __this, bool ___obj, const MethodInfo* method);
#define Action_1_Invoke_m3019(__this, ___obj, method) (( void (*) (Action_1_t389 *, bool, const MethodInfo*))Action_1_Invoke_m3019_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m15046_gshared (Action_1_t389 * __this, bool ___obj, AsyncCallback_t170 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m15046(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t389 *, bool, AsyncCallback_t170 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m15046_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m15047_gshared (Action_1_t389 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m15047(__this, ___result, method) (( void (*) (Action_1_t389 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m15047_gshared)(__this, ___result, method)
