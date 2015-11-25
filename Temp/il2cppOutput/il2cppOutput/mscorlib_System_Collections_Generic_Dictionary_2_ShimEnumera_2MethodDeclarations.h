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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2180;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2170;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16238_gshared (ShimEnumerator_t2180 * __this, Dictionary_2_t2170 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16238(__this, ___host, method) (( void (*) (ShimEnumerator_t2180 *, Dictionary_2_t2170 *, const MethodInfo*))ShimEnumerator__ctor_m16238_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16239_gshared (ShimEnumerator_t2180 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16239(__this, method) (( bool (*) (ShimEnumerator_t2180 *, const MethodInfo*))ShimEnumerator_MoveNext_m16239_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t974  ShimEnumerator_get_Entry_m16240_gshared (ShimEnumerator_t2180 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16240(__this, method) (( DictionaryEntry_t974  (*) (ShimEnumerator_t2180 *, const MethodInfo*))ShimEnumerator_get_Entry_m16240_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16241_gshared (ShimEnumerator_t2180 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16241(__this, method) (( Object_t * (*) (ShimEnumerator_t2180 *, const MethodInfo*))ShimEnumerator_get_Key_m16241_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16242_gshared (ShimEnumerator_t2180 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16242(__this, method) (( Object_t * (*) (ShimEnumerator_t2180 *, const MethodInfo*))ShimEnumerator_get_Value_m16242_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16243_gshared (ShimEnumerator_t2180 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16243(__this, method) (( Object_t * (*) (ShimEnumerator_t2180 *, const MethodInfo*))ShimEnumerator_get_Current_m16243_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::Reset()
extern "C" void ShimEnumerator_Reset_m16244_gshared (ShimEnumerator_t2180 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m16244(__this, method) (( void (*) (ShimEnumerator_t2180 *, const MethodInfo*))ShimEnumerator_Reset_m16244_gshared)(__this, method)
