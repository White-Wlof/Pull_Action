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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_100.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17006_gshared (InternalEnumerator_1_t2264 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17006(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2264 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17006_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17007_gshared (InternalEnumerator_1_t2264 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17007(__this, method) (( void (*) (InternalEnumerator_1_t2264 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17007_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17008_gshared (InternalEnumerator_1_t2264 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17008(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2264 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17008_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17009_gshared (InternalEnumerator_1_t2264 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17009(__this, method) (( void (*) (InternalEnumerator_1_t2264 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17009_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17010_gshared (InternalEnumerator_1_t2264 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17010(__this, method) (( bool (*) (InternalEnumerator_1_t2264 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17010_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t882  InternalEnumerator_1_get_Current_m17011_gshared (InternalEnumerator_1_t2264 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17011(__this, method) (( TimeSpan_t882  (*) (InternalEnumerator_1_t2264 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17011_gshared)(__this, method)
