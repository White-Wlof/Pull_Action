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

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1729;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t35;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1987;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1728;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m10466_gshared (Collection_1_t1729 * __this, const MethodInfo* method);
#define Collection_1__ctor_m10466(__this, method) (( void (*) (Collection_1_t1729 *, const MethodInfo*))Collection_1__ctor_m10466_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10467_gshared (Collection_1_t1729 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10467(__this, method) (( bool (*) (Collection_1_t1729 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10467_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m10468_gshared (Collection_1_t1729 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m10468(__this, ___array, ___index, method) (( void (*) (Collection_1_t1729 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m10468_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m10469_gshared (Collection_1_t1729 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m10469(__this, method) (( Object_t * (*) (Collection_1_t1729 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m10469_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m10470_gshared (Collection_1_t1729 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m10470(__this, ___value, method) (( int32_t (*) (Collection_1_t1729 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m10470_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m10471_gshared (Collection_1_t1729 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m10471(__this, ___value, method) (( bool (*) (Collection_1_t1729 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m10471_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m10472_gshared (Collection_1_t1729 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m10472(__this, ___value, method) (( int32_t (*) (Collection_1_t1729 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m10472_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m10473_gshared (Collection_1_t1729 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m10473(__this, ___index, ___value, method) (( void (*) (Collection_1_t1729 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m10473_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m10474_gshared (Collection_1_t1729 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m10474(__this, ___value, method) (( void (*) (Collection_1_t1729 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m10474_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m10475_gshared (Collection_1_t1729 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m10475(__this, method) (( bool (*) (Collection_1_t1729 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m10475_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m10476_gshared (Collection_1_t1729 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m10476(__this, method) (( Object_t * (*) (Collection_1_t1729 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m10476_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m10477_gshared (Collection_1_t1729 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m10477(__this, method) (( bool (*) (Collection_1_t1729 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m10477_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m10478_gshared (Collection_1_t1729 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m10478(__this, method) (( bool (*) (Collection_1_t1729 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m10478_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m10479_gshared (Collection_1_t1729 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m10479(__this, ___index, method) (( Object_t * (*) (Collection_1_t1729 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m10479_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m10480_gshared (Collection_1_t1729 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m10480(__this, ___index, ___value, method) (( void (*) (Collection_1_t1729 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m10480_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m10481_gshared (Collection_1_t1729 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m10481(__this, ___item, method) (( void (*) (Collection_1_t1729 *, Object_t *, const MethodInfo*))Collection_1_Add_m10481_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m10482_gshared (Collection_1_t1729 * __this, const MethodInfo* method);
#define Collection_1_Clear_m10482(__this, method) (( void (*) (Collection_1_t1729 *, const MethodInfo*))Collection_1_Clear_m10482_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m10483_gshared (Collection_1_t1729 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m10483(__this, method) (( void (*) (Collection_1_t1729 *, const MethodInfo*))Collection_1_ClearItems_m10483_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m10484_gshared (Collection_1_t1729 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m10484(__this, ___item, method) (( bool (*) (Collection_1_t1729 *, Object_t *, const MethodInfo*))Collection_1_Contains_m10484_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m10485_gshared (Collection_1_t1729 * __this, ObjectU5BU5D_t35* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m10485(__this, ___array, ___index, method) (( void (*) (Collection_1_t1729 *, ObjectU5BU5D_t35*, int32_t, const MethodInfo*))Collection_1_CopyTo_m10485_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m10486_gshared (Collection_1_t1729 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m10486(__this, method) (( Object_t* (*) (Collection_1_t1729 *, const MethodInfo*))Collection_1_GetEnumerator_m10486_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m10487_gshared (Collection_1_t1729 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m10487(__this, ___item, method) (( int32_t (*) (Collection_1_t1729 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m10487_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m10488_gshared (Collection_1_t1729 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m10488(__this, ___index, ___item, method) (( void (*) (Collection_1_t1729 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m10488_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m10489_gshared (Collection_1_t1729 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m10489(__this, ___index, ___item, method) (( void (*) (Collection_1_t1729 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m10489_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m10490_gshared (Collection_1_t1729 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m10490(__this, ___item, method) (( bool (*) (Collection_1_t1729 *, Object_t *, const MethodInfo*))Collection_1_Remove_m10490_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m10491_gshared (Collection_1_t1729 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m10491(__this, ___index, method) (( void (*) (Collection_1_t1729 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m10491_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m10492_gshared (Collection_1_t1729 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m10492(__this, ___index, method) (( void (*) (Collection_1_t1729 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m10492_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m10493_gshared (Collection_1_t1729 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m10493(__this, method) (( int32_t (*) (Collection_1_t1729 *, const MethodInfo*))Collection_1_get_Count_m10493_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m10494_gshared (Collection_1_t1729 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m10494(__this, ___index, method) (( Object_t * (*) (Collection_1_t1729 *, int32_t, const MethodInfo*))Collection_1_get_Item_m10494_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m10495_gshared (Collection_1_t1729 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m10495(__this, ___index, ___value, method) (( void (*) (Collection_1_t1729 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m10495_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m10496_gshared (Collection_1_t1729 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m10496(__this, ___index, ___item, method) (( void (*) (Collection_1_t1729 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m10496_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m10497_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m10497(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m10497_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m10498_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m10498(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m10498_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m10499_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m10499(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m10499_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m10500_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m10500(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m10500_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m10501_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m10501(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m10501_gshared)(__this /* static, unused */, ___list, method)
