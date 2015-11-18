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

// System.DelegateSerializationHolder
struct DelegateSerializationHolder_t1571;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t568;
// System.Delegate
struct Delegate_t330;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.DelegateSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DelegateSerializationHolder__ctor_m9817 (DelegateSerializationHolder_t1571 * __this, SerializationInfo_t568 * ___info, StreamingContext_t569  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetDelegateData(System.Delegate,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DelegateSerializationHolder_GetDelegateData_m9818 (Object_t * __this /* static, unused */, Delegate_t330 * ___instance, SerializationInfo_t568 * ___info, StreamingContext_t569  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DelegateSerializationHolder_GetObjectData_m9819 (DelegateSerializationHolder_t1571 * __this, SerializationInfo_t568 * ___info, StreamingContext_t569  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DelegateSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * DelegateSerializationHolder_GetRealObject_m9820 (DelegateSerializationHolder_t1571 * __this, StreamingContext_t569  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
