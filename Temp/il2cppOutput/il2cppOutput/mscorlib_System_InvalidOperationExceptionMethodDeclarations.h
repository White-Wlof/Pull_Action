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

// System.InvalidOperationException
struct InvalidOperationException_t804;
// System.String
struct String_t;
// System.Exception
struct Exception_t309;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t571;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.InvalidOperationException::.ctor()
extern "C" void InvalidOperationException__ctor_m5094 (InvalidOperationException_t804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" void InvalidOperationException__ctor_m4151 (InvalidOperationException_t804 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
extern "C" void InvalidOperationException__ctor_m9908 (InvalidOperationException_t804 * __this, String_t* ___message, Exception_t309 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void InvalidOperationException__ctor_m9909 (InvalidOperationException_t804 * __this, SerializationInfo_t571 * ___info, StreamingContext_t572  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
