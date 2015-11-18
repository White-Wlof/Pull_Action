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

// System.ValueType
struct ValueType_t987;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t35;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ValueType::.ctor()
extern "C" void ValueType__ctor_m5164 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ValueType::InternalEquals(System.Object,System.Object,System.Object[]&)
extern "C" bool ValueType_InternalEquals_m5165 (Object_t * __this /* static, unused */, Object_t * ___o1, Object_t * ___o2, ObjectU5BU5D_t35** ___fields, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ValueType::DefaultEquals(System.Object,System.Object)
extern "C" bool ValueType_DefaultEquals_m5166 (Object_t * __this /* static, unused */, Object_t * ___o1, Object_t * ___o2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ValueType::Equals(System.Object)
extern "C" bool ValueType_Equals_m5167 (Object_t * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ValueType::InternalGetHashCode(System.Object,System.Object[]&)
extern "C" int32_t ValueType_InternalGetHashCode_m5168 (Object_t * __this /* static, unused */, Object_t * ___o, ObjectU5BU5D_t35** ___fields, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ValueType::GetHashCode()
extern "C" int32_t ValueType_GetHashCode_m5169 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ValueType::ToString()
extern "C" String_t* ValueType_ToString_m5170 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;