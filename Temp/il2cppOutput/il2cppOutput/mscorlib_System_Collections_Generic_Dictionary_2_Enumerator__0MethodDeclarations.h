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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1818;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11695_gshared (Enumerator_t1825 * __this, Dictionary_2_t1818 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11695(__this, ___dictionary, method) (( void (*) (Enumerator_t1825 *, Dictionary_2_t1818 *, const MethodInfo*))Enumerator__ctor_m11695_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11696_gshared (Enumerator_t1825 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11696(__this, method) (( Object_t * (*) (Enumerator_t1825 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11696_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m11697_gshared (Enumerator_t1825 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m11697(__this, method) (( void (*) (Enumerator_t1825 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m11697_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t971  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11698_gshared (Enumerator_t1825 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11698(__this, method) (( DictionaryEntry_t971  (*) (Enumerator_t1825 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11698_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11699_gshared (Enumerator_t1825 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11699(__this, method) (( Object_t * (*) (Enumerator_t1825 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11699_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11700_gshared (Enumerator_t1825 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11700(__this, method) (( Object_t * (*) (Enumerator_t1825 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11700_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11701_gshared (Enumerator_t1825 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11701(__this, method) (( bool (*) (Enumerator_t1825 *, const MethodInfo*))Enumerator_MoveNext_m11701_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1820  Enumerator_get_Current_m11702_gshared (Enumerator_t1825 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11702(__this, method) (( KeyValuePair_2_t1820  (*) (Enumerator_t1825 *, const MethodInfo*))Enumerator_get_Current_m11702_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m11703_gshared (Enumerator_t1825 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11703(__this, method) (( int32_t (*) (Enumerator_t1825 *, const MethodInfo*))Enumerator_get_CurrentKey_m11703_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m11704_gshared (Enumerator_t1825 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11704(__this, method) (( Object_t * (*) (Enumerator_t1825 *, const MethodInfo*))Enumerator_get_CurrentValue_m11704_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m11705_gshared (Enumerator_t1825 * __this, const MethodInfo* method);
#define Enumerator_Reset_m11705(__this, method) (( void (*) (Enumerator_t1825 *, const MethodInfo*))Enumerator_Reset_m11705_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m11706_gshared (Enumerator_t1825 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11706(__this, method) (( void (*) (Enumerator_t1825 *, const MethodInfo*))Enumerator_VerifyState_m11706_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11707_gshared (Enumerator_t1825 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11707(__this, method) (( void (*) (Enumerator_t1825 *, const MethodInfo*))Enumerator_VerifyCurrent_m11707_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m11708_gshared (Enumerator_t1825 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11708(__this, method) (( void (*) (Enumerator_t1825 *, const MethodInfo*))Enumerator_Dispose_m11708_gshared)(__this, method)
