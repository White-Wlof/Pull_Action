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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t1847;
// System.Collections.IEnumerator
struct IEnumerator_t24;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1990;
// System.Object[]
struct ObjectU5BU5D_t39;
// System.Predicate`1<System.Object>
struct Predicate_1_t40;
// System.Comparison`1<System.Object>
struct Comparison_1_t1741;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m11929_gshared (IndexedSet_1_t1847 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m11929(__this, method) (( void (*) (IndexedSet_1_t1847 *, const MethodInfo*))IndexedSet_1__ctor_m11929_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11931_gshared (IndexedSet_1_t1847 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11931(__this, method) (( Object_t * (*) (IndexedSet_1_t1847 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11931_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m11933_gshared (IndexedSet_1_t1847 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m11933(__this, ___item, method) (( void (*) (IndexedSet_1_t1847 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m11933_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m11935_gshared (IndexedSet_1_t1847 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m11935(__this, ___item, method) (( bool (*) (IndexedSet_1_t1847 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m11935_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m11937_gshared (IndexedSet_1_t1847 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m11937(__this, method) (( Object_t* (*) (IndexedSet_1_t1847 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m11937_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m11939_gshared (IndexedSet_1_t1847 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m11939(__this, method) (( void (*) (IndexedSet_1_t1847 *, const MethodInfo*))IndexedSet_1_Clear_m11939_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m11941_gshared (IndexedSet_1_t1847 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m11941(__this, ___item, method) (( bool (*) (IndexedSet_1_t1847 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m11941_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m11943_gshared (IndexedSet_1_t1847 * __this, ObjectU5BU5D_t39* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m11943(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1847 *, ObjectU5BU5D_t39*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m11943_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m11945_gshared (IndexedSet_1_t1847 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m11945(__this, method) (( int32_t (*) (IndexedSet_1_t1847 *, const MethodInfo*))IndexedSet_1_get_Count_m11945_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m11947_gshared (IndexedSet_1_t1847 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m11947(__this, method) (( bool (*) (IndexedSet_1_t1847 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m11947_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m11949_gshared (IndexedSet_1_t1847 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m11949(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1847 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m11949_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m11951_gshared (IndexedSet_1_t1847 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m11951(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1847 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m11951_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m11953_gshared (IndexedSet_1_t1847 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m11953(__this, ___index, method) (( void (*) (IndexedSet_1_t1847 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m11953_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m11955_gshared (IndexedSet_1_t1847 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m11955(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1847 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m11955_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m11957_gshared (IndexedSet_1_t1847 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m11957(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1847 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m11957_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m11958_gshared (IndexedSet_1_t1847 * __this, Predicate_1_t40 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m11958(__this, ___match, method) (( void (*) (IndexedSet_1_t1847 *, Predicate_1_t40 *, const MethodInfo*))IndexedSet_1_RemoveAll_m11958_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m11959_gshared (IndexedSet_1_t1847 * __this, Comparison_1_t1741 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m11959(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1847 *, Comparison_1_t1741 *, const MethodInfo*))IndexedSet_1_Sort_m11959_gshared)(__this, ___sortLayoutFunction, method)
