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
struct DefaultComparer_t1790;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m11212_gshared (DefaultComparer_t1790 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m11212(__this, method) (( void (*) (DefaultComparer_t1790 *, const MethodInfo*))DefaultComparer__ctor_m11212_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m11213_gshared (DefaultComparer_t1790 * __this, RaycastResult_t76  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m11213(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1790 *, RaycastResult_t76 , const MethodInfo*))DefaultComparer_GetHashCode_m11213_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m11214_gshared (DefaultComparer_t1790 * __this, RaycastResult_t76  ___x, RaycastResult_t76  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m11214(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1790 *, RaycastResult_t76 , RaycastResult_t76 , const MethodInfo*))DefaultComparer_Equals_m11214_gshared)(__this, ___x, ___y, method)
