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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t2168;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t169;
// System.AsyncCallback
struct AsyncCallback_t170;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m16212_gshared (Transform_1_t2168 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m16212(__this, ___object, ___method, method) (( void (*) (Transform_1_t2168 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m16212_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t971  Transform_1_Invoke_m16213_gshared (Transform_1_t2168 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m16213(__this, ___key, ___value, method) (( DictionaryEntry_t971  (*) (Transform_1_t2168 *, Object_t *, bool, const MethodInfo*))Transform_1_Invoke_m16213_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m16214_gshared (Transform_1_t2168 * __this, Object_t * ___key, bool ___value, AsyncCallback_t170 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m16214(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2168 *, Object_t *, bool, AsyncCallback_t170 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m16214_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t971  Transform_1_EndInvoke_m16215_gshared (Transform_1_t2168 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m16215(__this, ___result, method) (( DictionaryEntry_t971  (*) (Transform_1_t2168 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m16215_gshared)(__this, ___result, method)
