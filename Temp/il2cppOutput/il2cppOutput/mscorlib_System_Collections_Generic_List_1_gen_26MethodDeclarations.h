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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t259;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t2332;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2300;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2333;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2047;
// System.Int32[]
struct Int32U5BU5D_t372;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2050;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2054;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_29.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m14787_gshared (List_1_t259 * __this, const MethodInfo* method);
#define List_1__ctor_m14787(__this, method) (( void (*) (List_1_t259 *, const MethodInfo*))List_1__ctor_m14787_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m14788_gshared (List_1_t259 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m14788(__this, ___collection, method) (( void (*) (List_1_t259 *, Object_t*, const MethodInfo*))List_1__ctor_m14788_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m14789_gshared (List_1_t259 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m14789(__this, ___capacity, method) (( void (*) (List_1_t259 *, int32_t, const MethodInfo*))List_1__ctor_m14789_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m14790_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14790(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14790_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14791_gshared (List_1_t259 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14791(__this, method) (( Object_t* (*) (List_1_t259 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14791_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14792_gshared (List_1_t259 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14792(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t259 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14792_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14793_gshared (List_1_t259 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14793(__this, method) (( Object_t * (*) (List_1_t259 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14794_gshared (List_1_t259 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14794(__this, ___item, method) (( int32_t (*) (List_1_t259 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m14794_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14795_gshared (List_1_t259 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14795(__this, ___item, method) (( bool (*) (List_1_t259 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m14795_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14796_gshared (List_1_t259 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14796(__this, ___item, method) (( int32_t (*) (List_1_t259 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m14796_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14797_gshared (List_1_t259 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14797(__this, ___index, ___item, method) (( void (*) (List_1_t259 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m14797_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14798_gshared (List_1_t259 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14798(__this, ___item, method) (( void (*) (List_1_t259 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m14798_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14799_gshared (List_1_t259 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14799(__this, method) (( bool (*) (List_1_t259 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14799_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14800_gshared (List_1_t259 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14800(__this, method) (( bool (*) (List_1_t259 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14800_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14801_gshared (List_1_t259 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14801(__this, method) (( Object_t * (*) (List_1_t259 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14801_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14802_gshared (List_1_t259 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14802(__this, method) (( bool (*) (List_1_t259 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14802_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14803_gshared (List_1_t259 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14803(__this, method) (( bool (*) (List_1_t259 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14803_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14804_gshared (List_1_t259 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14804(__this, ___index, method) (( Object_t * (*) (List_1_t259 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m14804_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14805_gshared (List_1_t259 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14805(__this, ___index, ___value, method) (( void (*) (List_1_t259 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m14805_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m14806_gshared (List_1_t259 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m14806(__this, ___item, method) (( void (*) (List_1_t259 *, int32_t, const MethodInfo*))List_1_Add_m14806_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14807_gshared (List_1_t259 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14807(__this, ___newCount, method) (( void (*) (List_1_t259 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14807_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14808_gshared (List_1_t259 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14808(__this, ___collection, method) (( void (*) (List_1_t259 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14808_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14809_gshared (List_1_t259 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14809(__this, ___enumerable, method) (( void (*) (List_1_t259 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14809_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2090_gshared (List_1_t259 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2090(__this, ___collection, method) (( void (*) (List_1_t259 *, Object_t*, const MethodInfo*))List_1_AddRange_m2090_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2047 * List_1_AsReadOnly_m14810_gshared (List_1_t259 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m14810(__this, method) (( ReadOnlyCollection_1_t2047 * (*) (List_1_t259 *, const MethodInfo*))List_1_AsReadOnly_m14810_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m14811_gshared (List_1_t259 * __this, const MethodInfo* method);
#define List_1_Clear_m14811(__this, method) (( void (*) (List_1_t259 *, const MethodInfo*))List_1_Clear_m14811_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m14812_gshared (List_1_t259 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m14812(__this, ___item, method) (( bool (*) (List_1_t259 *, int32_t, const MethodInfo*))List_1_Contains_m14812_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14813_gshared (List_1_t259 * __this, Int32U5BU5D_t372* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14813(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t259 *, Int32U5BU5D_t372*, int32_t, const MethodInfo*))List_1_CopyTo_m14813_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m14814_gshared (List_1_t259 * __this, Predicate_1_t2050 * ___match, const MethodInfo* method);
#define List_1_Find_m14814(__this, ___match, method) (( int32_t (*) (List_1_t259 *, Predicate_1_t2050 *, const MethodInfo*))List_1_Find_m14814_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14815_gshared (Object_t * __this /* static, unused */, Predicate_1_t2050 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14815(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2050 *, const MethodInfo*))List_1_CheckMatch_m14815_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14816_gshared (List_1_t259 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2050 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14816(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t259 *, int32_t, int32_t, Predicate_1_t2050 *, const MethodInfo*))List_1_GetIndex_m14816_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2046  List_1_GetEnumerator_m14817_gshared (List_1_t259 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m14817(__this, method) (( Enumerator_t2046  (*) (List_1_t259 *, const MethodInfo*))List_1_GetEnumerator_m14817_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14818_gshared (List_1_t259 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m14818(__this, ___item, method) (( int32_t (*) (List_1_t259 *, int32_t, const MethodInfo*))List_1_IndexOf_m14818_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14819_gshared (List_1_t259 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14819(__this, ___start, ___delta, method) (( void (*) (List_1_t259 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14819_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14820_gshared (List_1_t259 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14820(__this, ___index, method) (( void (*) (List_1_t259 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14820_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14821_gshared (List_1_t259 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m14821(__this, ___index, ___item, method) (( void (*) (List_1_t259 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m14821_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14822_gshared (List_1_t259 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14822(__this, ___collection, method) (( void (*) (List_1_t259 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14822_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m14823_gshared (List_1_t259 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m14823(__this, ___item, method) (( bool (*) (List_1_t259 *, int32_t, const MethodInfo*))List_1_Remove_m14823_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14824_gshared (List_1_t259 * __this, Predicate_1_t2050 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14824(__this, ___match, method) (( int32_t (*) (List_1_t259 *, Predicate_1_t2050 *, const MethodInfo*))List_1_RemoveAll_m14824_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14825_gshared (List_1_t259 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14825(__this, ___index, method) (( void (*) (List_1_t259 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14825_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m14826_gshared (List_1_t259 * __this, const MethodInfo* method);
#define List_1_Reverse_m14826(__this, method) (( void (*) (List_1_t259 *, const MethodInfo*))List_1_Reverse_m14826_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m14827_gshared (List_1_t259 * __this, const MethodInfo* method);
#define List_1_Sort_m14827(__this, method) (( void (*) (List_1_t259 *, const MethodInfo*))List_1_Sort_m14827_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14828_gshared (List_1_t259 * __this, Comparison_1_t2054 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m14828(__this, ___comparison, method) (( void (*) (List_1_t259 *, Comparison_1_t2054 *, const MethodInfo*))List_1_Sort_m14828_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t372* List_1_ToArray_m14829_gshared (List_1_t259 * __this, const MethodInfo* method);
#define List_1_ToArray_m14829(__this, method) (( Int32U5BU5D_t372* (*) (List_1_t259 *, const MethodInfo*))List_1_ToArray_m14829_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m14830_gshared (List_1_t259 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14830(__this, method) (( void (*) (List_1_t259 *, const MethodInfo*))List_1_TrimExcess_m14830_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14831_gshared (List_1_t259 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14831(__this, method) (( int32_t (*) (List_1_t259 *, const MethodInfo*))List_1_get_Capacity_m14831_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14832_gshared (List_1_t259 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14832(__this, ___value, method) (( void (*) (List_1_t259 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14832_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m14833_gshared (List_1_t259 * __this, const MethodInfo* method);
#define List_1_get_Count_m14833(__this, method) (( int32_t (*) (List_1_t259 *, const MethodInfo*))List_1_get_Count_m14833_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m14834_gshared (List_1_t259 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14834(__this, ___index, method) (( int32_t (*) (List_1_t259 *, int32_t, const MethodInfo*))List_1_get_Item_m14834_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14835_gshared (List_1_t259 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m14835(__this, ___index, ___value, method) (( void (*) (List_1_t259 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m14835_gshared)(__this, ___index, ___value, method)
