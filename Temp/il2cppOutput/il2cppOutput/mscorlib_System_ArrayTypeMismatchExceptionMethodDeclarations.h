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

// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_t1559;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t568;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArrayTypeMismatchException::.ctor()
extern "C" void ArrayTypeMismatchException__ctor_m9472 (ArrayTypeMismatchException_t1559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArrayTypeMismatchException::.ctor(System.String)
extern "C" void ArrayTypeMismatchException__ctor_m9473 (ArrayTypeMismatchException_t1559 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArrayTypeMismatchException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArrayTypeMismatchException__ctor_m9474 (ArrayTypeMismatchException_t1559 * __this, SerializationInfo_t568 * ___info, StreamingContext_t569  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
