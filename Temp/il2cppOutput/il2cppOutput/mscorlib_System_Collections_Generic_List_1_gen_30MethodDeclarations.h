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

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t482;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2342;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2343;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t344;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2115;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t565;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2119;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2122;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_32.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m15504_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1__ctor_m15504(__this, method) (( void (*) (List_1_t482 *, const MethodInfo*))List_1__ctor_m15504_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15505_gshared (List_1_t482 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15505(__this, ___collection, method) (( void (*) (List_1_t482 *, Object_t*, const MethodInfo*))List_1__ctor_m15505_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3044_gshared (List_1_t482 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3044(__this, ___capacity, method) (( void (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1__ctor_m3044_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m15506_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15506(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15506_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15507_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15507(__this, method) (( Object_t* (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15507_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15508_gshared (List_1_t482 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15508(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t482 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15508_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15509_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15509(__this, method) (( Object_t * (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15509_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15510_gshared (List_1_t482 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15510(__this, ___item, method) (( int32_t (*) (List_1_t482 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15510_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15511_gshared (List_1_t482 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15511(__this, ___item, method) (( bool (*) (List_1_t482 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15511_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15512_gshared (List_1_t482 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15512(__this, ___item, method) (( int32_t (*) (List_1_t482 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15513_gshared (List_1_t482 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15513(__this, ___index, ___item, method) (( void (*) (List_1_t482 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15513_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15514_gshared (List_1_t482 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15514(__this, ___item, method) (( void (*) (List_1_t482 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15514_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15515_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15515(__this, method) (( bool (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15515_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15516_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15516(__this, method) (( bool (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15516_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15517_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15517(__this, method) (( Object_t * (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15517_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15518_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15518(__this, method) (( bool (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15518_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15519_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15519(__this, method) (( bool (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15519_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15520_gshared (List_1_t482 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15520(__this, ___index, method) (( Object_t * (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15520_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15521_gshared (List_1_t482 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15521(__this, ___index, ___value, method) (( void (*) (List_1_t482 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15521_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m15522_gshared (List_1_t482 * __this, UILineInfo_t340  ___item, const MethodInfo* method);
#define List_1_Add_m15522(__this, ___item, method) (( void (*) (List_1_t482 *, UILineInfo_t340 , const MethodInfo*))List_1_Add_m15522_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15523_gshared (List_1_t482 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15523(__this, ___newCount, method) (( void (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15523_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15524_gshared (List_1_t482 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15524(__this, ___collection, method) (( void (*) (List_1_t482 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15524_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15525_gshared (List_1_t482 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15525(__this, ___enumerable, method) (( void (*) (List_1_t482 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15525_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15526_gshared (List_1_t482 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15526(__this, ___collection, method) (( void (*) (List_1_t482 *, Object_t*, const MethodInfo*))List_1_AddRange_m15526_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2115 * List_1_AsReadOnly_m15527_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15527(__this, method) (( ReadOnlyCollection_1_t2115 * (*) (List_1_t482 *, const MethodInfo*))List_1_AsReadOnly_m15527_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m15528_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_Clear_m15528(__this, method) (( void (*) (List_1_t482 *, const MethodInfo*))List_1_Clear_m15528_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m15529_gshared (List_1_t482 * __this, UILineInfo_t340  ___item, const MethodInfo* method);
#define List_1_Contains_m15529(__this, ___item, method) (( bool (*) (List_1_t482 *, UILineInfo_t340 , const MethodInfo*))List_1_Contains_m15529_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15530_gshared (List_1_t482 * __this, UILineInfoU5BU5D_t565* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15530(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t482 *, UILineInfoU5BU5D_t565*, int32_t, const MethodInfo*))List_1_CopyTo_m15530_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t340  List_1_Find_m15531_gshared (List_1_t482 * __this, Predicate_1_t2119 * ___match, const MethodInfo* method);
#define List_1_Find_m15531(__this, ___match, method) (( UILineInfo_t340  (*) (List_1_t482 *, Predicate_1_t2119 *, const MethodInfo*))List_1_Find_m15531_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15532_gshared (Object_t * __this /* static, unused */, Predicate_1_t2119 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15532(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2119 *, const MethodInfo*))List_1_CheckMatch_m15532_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15533_gshared (List_1_t482 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2119 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15533(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t482 *, int32_t, int32_t, Predicate_1_t2119 *, const MethodInfo*))List_1_GetIndex_m15533_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2114  List_1_GetEnumerator_m15534_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15534(__this, method) (( Enumerator_t2114  (*) (List_1_t482 *, const MethodInfo*))List_1_GetEnumerator_m15534_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15535_gshared (List_1_t482 * __this, UILineInfo_t340  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15535(__this, ___item, method) (( int32_t (*) (List_1_t482 *, UILineInfo_t340 , const MethodInfo*))List_1_IndexOf_m15535_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15536_gshared (List_1_t482 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15536(__this, ___start, ___delta, method) (( void (*) (List_1_t482 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15536_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15537_gshared (List_1_t482 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15537(__this, ___index, method) (( void (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15537_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15538_gshared (List_1_t482 * __this, int32_t ___index, UILineInfo_t340  ___item, const MethodInfo* method);
#define List_1_Insert_m15538(__this, ___index, ___item, method) (( void (*) (List_1_t482 *, int32_t, UILineInfo_t340 , const MethodInfo*))List_1_Insert_m15538_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15539_gshared (List_1_t482 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15539(__this, ___collection, method) (( void (*) (List_1_t482 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15539_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m15540_gshared (List_1_t482 * __this, UILineInfo_t340  ___item, const MethodInfo* method);
#define List_1_Remove_m15540(__this, ___item, method) (( bool (*) (List_1_t482 *, UILineInfo_t340 , const MethodInfo*))List_1_Remove_m15540_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15541_gshared (List_1_t482 * __this, Predicate_1_t2119 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15541(__this, ___match, method) (( int32_t (*) (List_1_t482 *, Predicate_1_t2119 *, const MethodInfo*))List_1_RemoveAll_m15541_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15542_gshared (List_1_t482 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15542(__this, ___index, method) (( void (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15542_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m15543_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_Reverse_m15543(__this, method) (( void (*) (List_1_t482 *, const MethodInfo*))List_1_Reverse_m15543_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m15544_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_Sort_m15544(__this, method) (( void (*) (List_1_t482 *, const MethodInfo*))List_1_Sort_m15544_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15545_gshared (List_1_t482 * __this, Comparison_1_t2122 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15545(__this, ___comparison, method) (( void (*) (List_1_t482 *, Comparison_1_t2122 *, const MethodInfo*))List_1_Sort_m15545_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t565* List_1_ToArray_m15546_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_ToArray_m15546(__this, method) (( UILineInfoU5BU5D_t565* (*) (List_1_t482 *, const MethodInfo*))List_1_ToArray_m15546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m15547_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15547(__this, method) (( void (*) (List_1_t482 *, const MethodInfo*))List_1_TrimExcess_m15547_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15548_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15548(__this, method) (( int32_t (*) (List_1_t482 *, const MethodInfo*))List_1_get_Capacity_m15548_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15549_gshared (List_1_t482 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15549(__this, ___value, method) (( void (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15549_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m15550_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_get_Count_m15550(__this, method) (( int32_t (*) (List_1_t482 *, const MethodInfo*))List_1_get_Count_m15550_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t340  List_1_get_Item_m15551_gshared (List_1_t482 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15551(__this, ___index, method) (( UILineInfo_t340  (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1_get_Item_m15551_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15552_gshared (List_1_t482 * __this, int32_t ___index, UILineInfo_t340  ___value, const MethodInfo* method);
#define List_1_set_Item_m15552(__this, ___index, ___value, method) (( void (*) (List_1_t482 *, int32_t, UILineInfo_t340 , const MethodInfo*))List_1_set_Item_m15552_gshared)(__this, ___index, ___value, method)
