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

// System.Threading.TimerCallback
struct TimerCallback_t1548;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t169;
// System.AsyncCallback
struct AsyncCallback_t170;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.TimerCallback::.ctor(System.Object,System.IntPtr)
extern "C" void TimerCallback__ctor_m10274 (TimerCallback_t1548 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.TimerCallback::Invoke(System.Object)
extern "C" void TimerCallback_Invoke_m10275 (TimerCallback_t1548 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_TimerCallback_t1548(Il2CppObject* delegate, Object_t * ___state);
// System.IAsyncResult System.Threading.TimerCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * TimerCallback_BeginInvoke_m10276 (TimerCallback_t1548 * __this, Object_t * ___state, AsyncCallback_t170 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.TimerCallback::EndInvoke(System.IAsyncResult)
extern "C" void TimerCallback_EndInvoke_m10277 (TimerCallback_t1548 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;