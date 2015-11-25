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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t353;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t377;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1990;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t24;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2292;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1726;
// System.Object[]
struct ObjectU5BU5D_t39;
// System.Predicate`1<System.Object>
struct Predicate_1_t40;
// System.Comparison`1<System.Object>
struct Comparison_1_t1741;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m10342_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1__ctor_m10342(__this, method) (( void (*) (List_1_t353 *, const MethodInfo*))List_1__ctor_m10342_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m10344_gshared (List_1_t353 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m10344(__this, ___collection, method) (( void (*) (List_1_t353 *, Object_t*, const MethodInfo*))List_1__ctor_m10344_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10346_gshared (List_1_t353 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10346(__this, ___capacity, method) (( void (*) (List_1_t353 *, int32_t, const MethodInfo*))List_1__ctor_m10346_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m10348_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10348(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10348_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10350_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10350(__this, method) (( Object_t* (*) (List_1_t353 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10350_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10352_gshared (List_1_t353 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10352(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t353 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10352_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10354_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10354(__this, method) (( Object_t * (*) (List_1_t353 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10354_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10356_gshared (List_1_t353 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10356(__this, ___item, method) (( int32_t (*) (List_1_t353 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10356_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10358_gshared (List_1_t353 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10358(__this, ___item, method) (( bool (*) (List_1_t353 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10358_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10360_gshared (List_1_t353 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10360(__this, ___item, method) (( int32_t (*) (List_1_t353 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10360_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10362_gshared (List_1_t353 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10362(__this, ___index, ___item, method) (( void (*) (List_1_t353 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10362_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10364_gshared (List_1_t353 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10364(__this, ___item, method) (( void (*) (List_1_t353 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10364_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10366_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10366(__this, method) (( bool (*) (List_1_t353 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10368_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10368(__this, method) (( bool (*) (List_1_t353 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10368_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10370_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10370(__this, method) (( Object_t * (*) (List_1_t353 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10370_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10372_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10372(__this, method) (( bool (*) (List_1_t353 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10372_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10374_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10374(__this, method) (( bool (*) (List_1_t353 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10374_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10376_gshared (List_1_t353 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10376(__this, ___index, method) (( Object_t * (*) (List_1_t353 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10376_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10378_gshared (List_1_t353 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10378(__this, ___index, ___value, method) (( void (*) (List_1_t353 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10378_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10380_gshared (List_1_t353 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10380(__this, ___item, method) (( void (*) (List_1_t353 *, Object_t *, const MethodInfo*))List_1_Add_m10380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10382_gshared (List_1_t353 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10382(__this, ___newCount, method) (( void (*) (List_1_t353 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10382_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m10384_gshared (List_1_t353 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m10384(__this, ___collection, method) (( void (*) (List_1_t353 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10384_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m10386_gshared (List_1_t353 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m10386(__this, ___enumerable, method) (( void (*) (List_1_t353 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10386_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m10388_gshared (List_1_t353 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m10388(__this, ___collection, method) (( void (*) (List_1_t353 *, Object_t*, const MethodInfo*))List_1_AddRange_m10388_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1726 * List_1_AsReadOnly_m10390_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m10390(__this, method) (( ReadOnlyCollection_1_t1726 * (*) (List_1_t353 *, const MethodInfo*))List_1_AsReadOnly_m10390_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10392_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_Clear_m10392(__this, method) (( void (*) (List_1_t353 *, const MethodInfo*))List_1_Clear_m10392_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10394_gshared (List_1_t353 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10394(__this, ___item, method) (( bool (*) (List_1_t353 *, Object_t *, const MethodInfo*))List_1_Contains_m10394_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10396_gshared (List_1_t353 * __this, ObjectU5BU5D_t39* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10396(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t353 *, ObjectU5BU5D_t39*, int32_t, const MethodInfo*))List_1_CopyTo_m10396_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m10398_gshared (List_1_t353 * __this, Predicate_1_t40 * ___match, const MethodInfo* method);
#define List_1_Find_m10398(__this, ___match, method) (( Object_t * (*) (List_1_t353 *, Predicate_1_t40 *, const MethodInfo*))List_1_Find_m10398_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m10400_gshared (Object_t * __this /* static, unused */, Predicate_1_t40 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m10400(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t40 *, const MethodInfo*))List_1_CheckMatch_m10400_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m10402_gshared (List_1_t353 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t40 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m10402(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t353 *, int32_t, int32_t, Predicate_1_t40 *, const MethodInfo*))List_1_GetIndex_m10402_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1730  List_1_GetEnumerator_m10404_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10404(__this, method) (( Enumerator_t1730  (*) (List_1_t353 *, const MethodInfo*))List_1_GetEnumerator_m10404_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10406_gshared (List_1_t353 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10406(__this, ___item, method) (( int32_t (*) (List_1_t353 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10406_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10408_gshared (List_1_t353 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10408(__this, ___start, ___delta, method) (( void (*) (List_1_t353 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10408_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10410_gshared (List_1_t353 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10410(__this, ___index, method) (( void (*) (List_1_t353 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10410_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10412_gshared (List_1_t353 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10412(__this, ___index, ___item, method) (( void (*) (List_1_t353 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10412_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m10414_gshared (List_1_t353 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m10414(__this, ___collection, method) (( void (*) (List_1_t353 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10414_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10416_gshared (List_1_t353 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10416(__this, ___item, method) (( bool (*) (List_1_t353 *, Object_t *, const MethodInfo*))List_1_Remove_m10416_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m10418_gshared (List_1_t353 * __this, Predicate_1_t40 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m10418(__this, ___match, method) (( int32_t (*) (List_1_t353 *, Predicate_1_t40 *, const MethodInfo*))List_1_RemoveAll_m10418_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10420_gshared (List_1_t353 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10420(__this, ___index, method) (( void (*) (List_1_t353 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10420_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m10422_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_Reverse_m10422(__this, method) (( void (*) (List_1_t353 *, const MethodInfo*))List_1_Reverse_m10422_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m10424_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_Sort_m10424(__this, method) (( void (*) (List_1_t353 *, const MethodInfo*))List_1_Sort_m10424_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m10426_gshared (List_1_t353 * __this, Comparison_1_t1741 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m10426(__this, ___comparison, method) (( void (*) (List_1_t353 *, Comparison_1_t1741 *, const MethodInfo*))List_1_Sort_m10426_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t39* List_1_ToArray_m10428_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_ToArray_m10428(__this, method) (( ObjectU5BU5D_t39* (*) (List_1_t353 *, const MethodInfo*))List_1_ToArray_m10428_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m10430_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m10430(__this, method) (( void (*) (List_1_t353 *, const MethodInfo*))List_1_TrimExcess_m10430_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10432_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10432(__this, method) (( int32_t (*) (List_1_t353 *, const MethodInfo*))List_1_get_Capacity_m10432_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10434_gshared (List_1_t353 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10434(__this, ___value, method) (( void (*) (List_1_t353 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10434_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10436_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_get_Count_m10436(__this, method) (( int32_t (*) (List_1_t353 *, const MethodInfo*))List_1_get_Count_m10436_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10438_gshared (List_1_t353 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10438(__this, ___index, method) (( Object_t * (*) (List_1_t353 *, int32_t, const MethodInfo*))List_1_get_Item_m10438_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10440_gshared (List_1_t353 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10440(__this, ___index, ___value, method) (( void (*) (List_1_t353 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10440_gshared)(__this, ___index, ___value, method)
