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

// System.EventHandler
struct EventHandler_t1181;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t659;
// System.IAsyncResult
struct IAsyncResult_t169;
// System.AsyncCallback
struct AsyncCallback_t170;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void EventHandler__ctor_m10290 (EventHandler_t1181 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
extern "C" void EventHandler_Invoke_m10291 (EventHandler_t1181 * __this, Object_t * ___sender, EventArgs_t659 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_EventHandler_t1181(Il2CppObject* delegate, Object_t * ___sender, EventArgs_t659 * ___e);
// System.IAsyncResult System.EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * EventHandler_BeginInvoke_m10292 (EventHandler_t1181 * __this, Object_t * ___sender, EventArgs_t659 * ___e, AsyncCallback_t170 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler::EndInvoke(System.IAsyncResult)
extern "C" void EventHandler_EndInvoke_m10293 (EventHandler_t1181 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;