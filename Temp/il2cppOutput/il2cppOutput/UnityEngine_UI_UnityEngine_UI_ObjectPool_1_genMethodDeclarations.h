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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_0MethodDeclarations.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m1527(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t70 *, UnityAction_1_t72 *, UnityAction_1_t72 *, const MethodInfo*))ObjectPool_1__ctor_m10897_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m10898(__this, method) (( int32_t (*) (ObjectPool_1_t70 *, const MethodInfo*))ObjectPool_1_get_countAll_m10899_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m10900(__this, ___value, method) (( void (*) (ObjectPool_1_t70 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m10901_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m10902(__this, method) (( int32_t (*) (ObjectPool_1_t70 *, const MethodInfo*))ObjectPool_1_get_countActive_m10903_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m10904(__this, method) (( int32_t (*) (ObjectPool_1_t70 *, const MethodInfo*))ObjectPool_1_get_countInactive_m10905_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m10906(__this, method) (( List_1_t266 * (*) (ObjectPool_1_t70 *, const MethodInfo*))ObjectPool_1_Get_m10907_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m10908(__this, ___element, method) (( void (*) (ObjectPool_1_t70 *, List_1_t266 *, const MethodInfo*))ObjectPool_1_Release_m10909_gshared)(__this, ___element, method)