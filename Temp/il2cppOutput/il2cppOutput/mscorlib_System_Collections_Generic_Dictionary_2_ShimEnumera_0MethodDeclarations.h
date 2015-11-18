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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t1855;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1845;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12044_gshared (ShimEnumerator_t1855 * __this, Dictionary_2_t1845 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12044(__this, ___host, method) (( void (*) (ShimEnumerator_t1855 *, Dictionary_2_t1845 *, const MethodInfo*))ShimEnumerator__ctor_m12044_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12045_gshared (ShimEnumerator_t1855 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12045(__this, method) (( bool (*) (ShimEnumerator_t1855 *, const MethodInfo*))ShimEnumerator_MoveNext_m12045_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t971  ShimEnumerator_get_Entry_m12046_gshared (ShimEnumerator_t1855 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12046(__this, method) (( DictionaryEntry_t971  (*) (ShimEnumerator_t1855 *, const MethodInfo*))ShimEnumerator_get_Entry_m12046_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12047_gshared (ShimEnumerator_t1855 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12047(__this, method) (( Object_t * (*) (ShimEnumerator_t1855 *, const MethodInfo*))ShimEnumerator_get_Key_m12047_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12048_gshared (ShimEnumerator_t1855 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12048(__this, method) (( Object_t * (*) (ShimEnumerator_t1855 *, const MethodInfo*))ShimEnumerator_get_Value_m12048_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12049_gshared (ShimEnumerator_t1855 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12049(__this, method) (( Object_t * (*) (ShimEnumerator_t1855 *, const MethodInfo*))ShimEnumerator_get_Current_m12049_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m12050_gshared (ShimEnumerator_t1855 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m12050(__this, method) (( void (*) (ShimEnumerator_t1855 *, const MethodInfo*))ShimEnumerator_Reset_m12050_gshared)(__this, method)
