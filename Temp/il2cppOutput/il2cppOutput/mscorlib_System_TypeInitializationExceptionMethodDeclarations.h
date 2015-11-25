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

// System.TypeInitializationException
struct TypeInitializationException_t1624;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t571;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.TypeInitializationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TypeInitializationException__ctor_m10222 (TypeInitializationException_t1624 * __this, SerializationInfo_t571 * ___info, StreamingContext_t572  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeInitializationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TypeInitializationException_GetObjectData_m10223 (TypeInitializationException_t1624 * __this, SerializationInfo_t571 * ___info, StreamingContext_t572  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
