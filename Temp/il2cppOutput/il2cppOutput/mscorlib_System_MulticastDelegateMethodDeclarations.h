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

// System.MulticastDelegate
struct MulticastDelegate_t172;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t571;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1658;
// System.Delegate
struct Delegate_t334;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m5752 (MulticastDelegate_t172 * __this, SerializationInfo_t571 * ___info, StreamingContext_t572  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m5753 (MulticastDelegate_t172 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m5754 (MulticastDelegate_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1658* MulticastDelegate_GetInvocationList_m5755 (MulticastDelegate_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t334 * MulticastDelegate_CombineImpl_m5756 (MulticastDelegate_t172 * __this, Delegate_t334 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m5757 (MulticastDelegate_t172 * __this, MulticastDelegate_t172 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t172 * MulticastDelegate_KPM_m5758 (Object_t * __this /* static, unused */, MulticastDelegate_t172 * ___needle, MulticastDelegate_t172 * ___haystack, MulticastDelegate_t172 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t334 * MulticastDelegate_RemoveImpl_m5759 (MulticastDelegate_t172 * __this, Delegate_t334 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
