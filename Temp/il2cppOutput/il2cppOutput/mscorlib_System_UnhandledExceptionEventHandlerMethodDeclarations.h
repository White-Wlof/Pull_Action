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

// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t572;
// System.Object
struct Object_t;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t555;
// System.IAsyncResult
struct IAsyncResult_t169;
// System.AsyncCallback
struct AsyncCallback_t170;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void UnhandledExceptionEventHandler__ctor_m3014 (UnhandledExceptionEventHandler_t572 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C" void UnhandledExceptionEventHandler_Invoke_m10298 (UnhandledExceptionEventHandler_t572 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t555 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_UnhandledExceptionEventHandler_t572(Il2CppObject* delegate, Object_t * ___sender, UnhandledExceptionEventArgs_t555 * ___e);
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * UnhandledExceptionEventHandler_BeginInvoke_m10299 (UnhandledExceptionEventHandler_t572 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t555 * ___e, AsyncCallback_t170 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void UnhandledExceptionEventHandler_EndInvoke_m10300 (UnhandledExceptionEventHandler_t572 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;