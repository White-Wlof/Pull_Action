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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t1916;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m12911_gshared (DefaultComparer_t1916 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12911(__this, method) (( void (*) (DefaultComparer_t1916 *, const MethodInfo*))DefaultComparer__ctor_m12911_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12912_gshared (DefaultComparer_t1916 * __this, UIVertex_t182  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12912(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1916 *, UIVertex_t182 , const MethodInfo*))DefaultComparer_GetHashCode_m12912_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12913_gshared (DefaultComparer_t1916 * __this, UIVertex_t182  ___x, UIVertex_t182  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12913(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1916 *, UIVertex_t182 , UIVertex_t182 , const MethodInfo*))DefaultComparer_Equals_m12913_gshared)(__this, ___x, ___y, method)