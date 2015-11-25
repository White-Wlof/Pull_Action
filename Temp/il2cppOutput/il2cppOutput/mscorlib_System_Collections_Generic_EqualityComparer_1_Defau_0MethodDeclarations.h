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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t1793;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m11230_gshared (DefaultComparer_t1793 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m11230(__this, method) (( void (*) (DefaultComparer_t1793 *, const MethodInfo*))DefaultComparer__ctor_m11230_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m11231_gshared (DefaultComparer_t1793 * __this, RaycastResult_t80  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m11231(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1793 *, RaycastResult_t80 , const MethodInfo*))DefaultComparer_GetHashCode_m11231_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m11232_gshared (DefaultComparer_t1793 * __this, RaycastResult_t80  ___x, RaycastResult_t80  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m11232(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1793 *, RaycastResult_t80 , RaycastResult_t80 , const MethodInfo*))DefaultComparer_Equals_m11232_gshared)(__this, ___x, ___y, method)
