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

// UnityEngine.AsyncOperation
struct AsyncOperation_t378;
struct AsyncOperation_t378_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m2437 (AsyncOperation_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m2438 (AsyncOperation_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m2439 (AsyncOperation_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AsyncOperation_t378_marshal(const AsyncOperation_t378& unmarshaled, AsyncOperation_t378_marshaled& marshaled);
extern "C" void AsyncOperation_t378_marshal_back(const AsyncOperation_t378_marshaled& marshaled, AsyncOperation_t378& unmarshaled);
extern "C" void AsyncOperation_t378_marshal_cleanup(AsyncOperation_t378_marshaled& marshaled);
