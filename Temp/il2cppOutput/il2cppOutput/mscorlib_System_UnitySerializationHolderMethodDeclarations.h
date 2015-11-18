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

// System.UnitySerializationHolder
struct UnitySerializationHolder_t1624;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t568;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t1564;
// System.Reflection.Module
struct Module_t1201;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m10216 (UnitySerializationHolder_t1624 * __this, SerializationInfo_t568 * ___info, StreamingContext_t569  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m10217 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t568 * ___info, StreamingContext_t569  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m10218 (Object_t * __this /* static, unused */, DBNull_t1564 * ___instance, SerializationInfo_t568 * ___info, StreamingContext_t569  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m10219 (Object_t * __this /* static, unused */, Module_t1201 * ___instance, SerializationInfo_t568 * ___info, StreamingContext_t569  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m10220 (UnitySerializationHolder_t1624 * __this, SerializationInfo_t568 * ___info, StreamingContext_t569  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m10221 (UnitySerializationHolder_t1624 * __this, StreamingContext_t569  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
