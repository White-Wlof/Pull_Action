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

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t571;
// System.Type
struct Type_t;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t1444;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t1445;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Runtime.Serialization.SerializationInfo::.ctor(System.Type,System.Runtime.Serialization.IFormatterConverter)
extern "C" void SerializationInfo__ctor_m8633 (SerializationInfo_t571 * __this, Type_t * ___type, Object_t * ___converter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
extern "C" void SerializationInfo_AddValue_m5097 (SerializationInfo_t571 * __this, String_t* ___name, Object_t * ___value, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
extern "C" Object_t * SerializationInfo_GetValue_m5100 (SerializationInfo_t571 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::SetType(System.Type)
extern "C" void SerializationInfo_SetType_m8634 (SerializationInfo_t571 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationInfoEnumerator System.Runtime.Serialization.SerializationInfo::GetEnumerator()
extern "C" SerializationInfoEnumerator_t1445 * SerializationInfo_GetEnumerator_m8635 (SerializationInfo_t571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int16)
extern "C" void SerializationInfo_AddValue_m8636 (SerializationInfo_t571 * __this, String_t* ___name, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
extern "C" void SerializationInfo_AddValue_m5099 (SerializationInfo_t571 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
extern "C" void SerializationInfo_AddValue_m5098 (SerializationInfo_t571 * __this, String_t* ___name, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.DateTime)
extern "C" void SerializationInfo_AddValue_m8637 (SerializationInfo_t571 * __this, String_t* ___name, DateTime_t518  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Single)
extern "C" void SerializationInfo_AddValue_m8638 (SerializationInfo_t571 * __this, String_t* ___name, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int64)
extern "C" void SerializationInfo_AddValue_m5108 (SerializationInfo_t571 * __this, String_t* ___name, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt64)
extern "C" void SerializationInfo_AddValue_m8639 (SerializationInfo_t571 * __this, String_t* ___name, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
extern "C" void SerializationInfo_AddValue_m4126 (SerializationInfo_t571 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
extern "C" bool SerializationInfo_GetBoolean_m5102 (SerializationInfo_t571 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Runtime.Serialization.SerializationInfo::GetInt16(System.String)
extern "C" int16_t SerializationInfo_GetInt16_m8640 (SerializationInfo_t571 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
extern "C" int32_t SerializationInfo_GetInt32_m5107 (SerializationInfo_t571 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Runtime.Serialization.SerializationInfo::GetInt64(System.String)
extern "C" int64_t SerializationInfo_GetInt64_m5106 (SerializationInfo_t571 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
extern "C" String_t* SerializationInfo_GetString_m5105 (SerializationInfo_t571 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
