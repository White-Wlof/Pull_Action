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

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t481;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2339;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2340;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2341;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2106;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t564;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2110;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_31.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m15360_gshared (List_1_t481 * __this, const MethodInfo* method);
#define List_1__ctor_m15360(__this, method) (( void (*) (List_1_t481 *, const MethodInfo*))List_1__ctor_m15360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15361_gshared (List_1_t481 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15361(__this, ___collection, method) (( void (*) (List_1_t481 *, Object_t*, const MethodInfo*))List_1__ctor_m15361_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3043_gshared (List_1_t481 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3043(__this, ___capacity, method) (( void (*) (List_1_t481 *, int32_t, const MethodInfo*))List_1__ctor_m3043_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m15362_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15362(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15362_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15363_gshared (List_1_t481 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15363(__this, method) (( Object_t* (*) (List_1_t481 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15363_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15364_gshared (List_1_t481 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15364(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t481 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15364_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15365_gshared (List_1_t481 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15365(__this, method) (( Object_t * (*) (List_1_t481 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15365_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15366_gshared (List_1_t481 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15366(__this, ___item, method) (( int32_t (*) (List_1_t481 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15366_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15367_gshared (List_1_t481 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15367(__this, ___item, method) (( bool (*) (List_1_t481 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15367_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15368_gshared (List_1_t481 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15368(__this, ___item, method) (( int32_t (*) (List_1_t481 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15368_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15369_gshared (List_1_t481 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15369(__this, ___index, ___item, method) (( void (*) (List_1_t481 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15369_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15370_gshared (List_1_t481 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15370(__this, ___item, method) (( void (*) (List_1_t481 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15370_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15371_gshared (List_1_t481 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15371(__this, method) (( bool (*) (List_1_t481 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15371_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15372_gshared (List_1_t481 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15372(__this, method) (( bool (*) (List_1_t481 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15372_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15373_gshared (List_1_t481 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15373(__this, method) (( Object_t * (*) (List_1_t481 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15374_gshared (List_1_t481 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15374(__this, method) (( bool (*) (List_1_t481 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15374_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15375_gshared (List_1_t481 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15375(__this, method) (( bool (*) (List_1_t481 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15375_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15376_gshared (List_1_t481 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15376(__this, ___index, method) (( Object_t * (*) (List_1_t481 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15376_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15377_gshared (List_1_t481 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15377(__this, ___index, ___value, method) (( void (*) (List_1_t481 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15377_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m15378_gshared (List_1_t481 * __this, UICharInfo_t342  ___item, const MethodInfo* method);
#define List_1_Add_m15378(__this, ___item, method) (( void (*) (List_1_t481 *, UICharInfo_t342 , const MethodInfo*))List_1_Add_m15378_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15379_gshared (List_1_t481 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15379(__this, ___newCount, method) (( void (*) (List_1_t481 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15379_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15380_gshared (List_1_t481 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15380(__this, ___collection, method) (( void (*) (List_1_t481 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15380_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15381_gshared (List_1_t481 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15381(__this, ___enumerable, method) (( void (*) (List_1_t481 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15381_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15382_gshared (List_1_t481 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15382(__this, ___collection, method) (( void (*) (List_1_t481 *, Object_t*, const MethodInfo*))List_1_AddRange_m15382_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2106 * List_1_AsReadOnly_m15383_gshared (List_1_t481 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15383(__this, method) (( ReadOnlyCollection_1_t2106 * (*) (List_1_t481 *, const MethodInfo*))List_1_AsReadOnly_m15383_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m15384_gshared (List_1_t481 * __this, const MethodInfo* method);
#define List_1_Clear_m15384(__this, method) (( void (*) (List_1_t481 *, const MethodInfo*))List_1_Clear_m15384_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m15385_gshared (List_1_t481 * __this, UICharInfo_t342  ___item, const MethodInfo* method);
#define List_1_Contains_m15385(__this, ___item, method) (( bool (*) (List_1_t481 *, UICharInfo_t342 , const MethodInfo*))List_1_Contains_m15385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15386_gshared (List_1_t481 * __this, UICharInfoU5BU5D_t564* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15386(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t481 *, UICharInfoU5BU5D_t564*, int32_t, const MethodInfo*))List_1_CopyTo_m15386_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t342  List_1_Find_m15387_gshared (List_1_t481 * __this, Predicate_1_t2110 * ___match, const MethodInfo* method);
#define List_1_Find_m15387(__this, ___match, method) (( UICharInfo_t342  (*) (List_1_t481 *, Predicate_1_t2110 *, const MethodInfo*))List_1_Find_m15387_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15388_gshared (Object_t * __this /* static, unused */, Predicate_1_t2110 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15388(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2110 *, const MethodInfo*))List_1_CheckMatch_m15388_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15389_gshared (List_1_t481 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2110 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15389(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t481 *, int32_t, int32_t, Predicate_1_t2110 *, const MethodInfo*))List_1_GetIndex_m15389_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2105  List_1_GetEnumerator_m15390_gshared (List_1_t481 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15390(__this, method) (( Enumerator_t2105  (*) (List_1_t481 *, const MethodInfo*))List_1_GetEnumerator_m15390_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15391_gshared (List_1_t481 * __this, UICharInfo_t342  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15391(__this, ___item, method) (( int32_t (*) (List_1_t481 *, UICharInfo_t342 , const MethodInfo*))List_1_IndexOf_m15391_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15392_gshared (List_1_t481 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15392(__this, ___start, ___delta, method) (( void (*) (List_1_t481 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15392_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15393_gshared (List_1_t481 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15393(__this, ___index, method) (( void (*) (List_1_t481 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15393_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15394_gshared (List_1_t481 * __this, int32_t ___index, UICharInfo_t342  ___item, const MethodInfo* method);
#define List_1_Insert_m15394(__this, ___index, ___item, method) (( void (*) (List_1_t481 *, int32_t, UICharInfo_t342 , const MethodInfo*))List_1_Insert_m15394_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15395_gshared (List_1_t481 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15395(__this, ___collection, method) (( void (*) (List_1_t481 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15395_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m15396_gshared (List_1_t481 * __this, UICharInfo_t342  ___item, const MethodInfo* method);
#define List_1_Remove_m15396(__this, ___item, method) (( bool (*) (List_1_t481 *, UICharInfo_t342 , const MethodInfo*))List_1_Remove_m15396_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15397_gshared (List_1_t481 * __this, Predicate_1_t2110 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15397(__this, ___match, method) (( int32_t (*) (List_1_t481 *, Predicate_1_t2110 *, const MethodInfo*))List_1_RemoveAll_m15397_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15398_gshared (List_1_t481 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15398(__this, ___index, method) (( void (*) (List_1_t481 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15398_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m15399_gshared (List_1_t481 * __this, const MethodInfo* method);
#define List_1_Reverse_m15399(__this, method) (( void (*) (List_1_t481 *, const MethodInfo*))List_1_Reverse_m15399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m15400_gshared (List_1_t481 * __this, const MethodInfo* method);
#define List_1_Sort_m15400(__this, method) (( void (*) (List_1_t481 *, const MethodInfo*))List_1_Sort_m15400_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15401_gshared (List_1_t481 * __this, Comparison_1_t2113 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15401(__this, ___comparison, method) (( void (*) (List_1_t481 *, Comparison_1_t2113 *, const MethodInfo*))List_1_Sort_m15401_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t564* List_1_ToArray_m15402_gshared (List_1_t481 * __this, const MethodInfo* method);
#define List_1_ToArray_m15402(__this, method) (( UICharInfoU5BU5D_t564* (*) (List_1_t481 *, const MethodInfo*))List_1_ToArray_m15402_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m15403_gshared (List_1_t481 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15403(__this, method) (( void (*) (List_1_t481 *, const MethodInfo*))List_1_TrimExcess_m15403_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15404_gshared (List_1_t481 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15404(__this, method) (( int32_t (*) (List_1_t481 *, const MethodInfo*))List_1_get_Capacity_m15404_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15405_gshared (List_1_t481 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15405(__this, ___value, method) (( void (*) (List_1_t481 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15405_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m15406_gshared (List_1_t481 * __this, const MethodInfo* method);
#define List_1_get_Count_m15406(__this, method) (( int32_t (*) (List_1_t481 *, const MethodInfo*))List_1_get_Count_m15406_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t342  List_1_get_Item_m15407_gshared (List_1_t481 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15407(__this, ___index, method) (( UICharInfo_t342  (*) (List_1_t481 *, int32_t, const MethodInfo*))List_1_get_Item_m15407_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15408_gshared (List_1_t481 * __this, int32_t ___index, UICharInfo_t342  ___value, const MethodInfo* method);
#define List_1_set_Item_m15408(__this, ___index, ___value, method) (( void (*) (List_1_t481 *, int32_t, UICharInfo_t342 , const MethodInfo*))List_1_set_Item_m15408_gshared)(__this, ___index, ___value, method)
