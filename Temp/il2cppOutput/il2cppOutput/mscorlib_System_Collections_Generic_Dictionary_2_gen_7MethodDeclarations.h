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
struct Dictionary_2_t1821;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1820;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t571;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2299;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t24;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2300;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1826;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m11590_gshared (Dictionary_2_t1821 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11590(__this, method) (( void (*) (Dictionary_2_t1821 *, const MethodInfo*))Dictionary_2__ctor_m11590_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11592_gshared (Dictionary_2_t1821 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11592(__this, ___comparer, method) (( void (*) (Dictionary_2_t1821 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11592_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11594_gshared (Dictionary_2_t1821 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11594(__this, ___capacity, method) (( void (*) (Dictionary_2_t1821 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11594_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11596_gshared (Dictionary_2_t1821 * __this, SerializationInfo_t571 * ___info, StreamingContext_t572  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11596(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1821 *, SerializationInfo_t571 *, StreamingContext_t572 , const MethodInfo*))Dictionary_2__ctor_m11596_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11598_gshared (Dictionary_2_t1821 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11598(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1821 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11598_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11600_gshared (Dictionary_2_t1821 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11600(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1821 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11600_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11602_gshared (Dictionary_2_t1821 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11602(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1821 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11602_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11604_gshared (Dictionary_2_t1821 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11604(__this, ___key, method) (( bool (*) (Dictionary_2_t1821 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11604_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11606_gshared (Dictionary_2_t1821 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11606(__this, ___key, method) (( void (*) (Dictionary_2_t1821 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11606_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11608_gshared (Dictionary_2_t1821 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11608(__this, method) (( bool (*) (Dictionary_2_t1821 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11608_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11610_gshared (Dictionary_2_t1821 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11610(__this, method) (( Object_t * (*) (Dictionary_2_t1821 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11610_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11612_gshared (Dictionary_2_t1821 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11612(__this, method) (( bool (*) (Dictionary_2_t1821 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11612_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11614_gshared (Dictionary_2_t1821 * __this, KeyValuePair_2_t1823  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11614(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1821 *, KeyValuePair_2_t1823 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11614_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11616_gshared (Dictionary_2_t1821 * __this, KeyValuePair_2_t1823  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11616(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1821 *, KeyValuePair_2_t1823 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11616_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11618_gshared (Dictionary_2_t1821 * __this, KeyValuePair_2U5BU5D_t2299* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11618(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1821 *, KeyValuePair_2U5BU5D_t2299*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11618_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11620_gshared (Dictionary_2_t1821 * __this, KeyValuePair_2_t1823  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11620(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1821 *, KeyValuePair_2_t1823 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11620_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11622_gshared (Dictionary_2_t1821 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11622(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1821 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11622_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11624_gshared (Dictionary_2_t1821 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11624(__this, method) (( Object_t * (*) (Dictionary_2_t1821 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11624_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11626_gshared (Dictionary_2_t1821 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11626(__this, method) (( Object_t* (*) (Dictionary_2_t1821 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11626_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11628_gshared (Dictionary_2_t1821 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11628(__this, method) (( Object_t * (*) (Dictionary_2_t1821 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11628_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11630_gshared (Dictionary_2_t1821 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11630(__this, method) (( int32_t (*) (Dictionary_2_t1821 *, const MethodInfo*))Dictionary_2_get_Count_m11630_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m11632_gshared (Dictionary_2_t1821 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11632(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1821 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m11632_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11634_gshared (Dictionary_2_t1821 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11634(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1821 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m11634_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11636_gshared (Dictionary_2_t1821 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11636(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1821 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11636_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11638_gshared (Dictionary_2_t1821 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11638(__this, ___size, method) (( void (*) (Dictionary_2_t1821 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11638_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11640_gshared (Dictionary_2_t1821 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11640(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1821 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11640_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1823  Dictionary_2_make_pair_m11642_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11642(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1823  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m11642_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m11644_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11644(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m11644_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11646_gshared (Dictionary_2_t1821 * __this, KeyValuePair_2U5BU5D_t2299* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11646(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1821 *, KeyValuePair_2U5BU5D_t2299*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11646_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m11648_gshared (Dictionary_2_t1821 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11648(__this, method) (( void (*) (Dictionary_2_t1821 *, const MethodInfo*))Dictionary_2_Resize_m11648_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11650_gshared (Dictionary_2_t1821 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11650(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1821 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m11650_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m11652_gshared (Dictionary_2_t1821 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11652(__this, method) (( void (*) (Dictionary_2_t1821 *, const MethodInfo*))Dictionary_2_Clear_m11652_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11654_gshared (Dictionary_2_t1821 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11654(__this, ___key, method) (( bool (*) (Dictionary_2_t1821 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m11654_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11656_gshared (Dictionary_2_t1821 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11656(__this, ___value, method) (( bool (*) (Dictionary_2_t1821 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m11656_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11658_gshared (Dictionary_2_t1821 * __this, SerializationInfo_t571 * ___info, StreamingContext_t572  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11658(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1821 *, SerializationInfo_t571 *, StreamingContext_t572 , const MethodInfo*))Dictionary_2_GetObjectData_m11658_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11660_gshared (Dictionary_2_t1821 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11660(__this, ___sender, method) (( void (*) (Dictionary_2_t1821 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11660_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11662_gshared (Dictionary_2_t1821 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11662(__this, ___key, method) (( bool (*) (Dictionary_2_t1821 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m11662_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11664_gshared (Dictionary_2_t1821 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11664(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1821 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m11664_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1826 * Dictionary_2_get_Values_m11665_gshared (Dictionary_2_t1821 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11665(__this, method) (( ValueCollection_t1826 * (*) (Dictionary_2_t1821 *, const MethodInfo*))Dictionary_2_get_Values_m11665_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m11667_gshared (Dictionary_2_t1821 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11667(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1821 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11667_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m11669_gshared (Dictionary_2_t1821 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11669(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1821 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11669_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11671_gshared (Dictionary_2_t1821 * __this, KeyValuePair_2_t1823  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11671(__this, ___pair, method) (( bool (*) (Dictionary_2_t1821 *, KeyValuePair_2_t1823 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11671_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1828  Dictionary_2_GetEnumerator_m11672_gshared (Dictionary_2_t1821 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11672(__this, method) (( Enumerator_t1828  (*) (Dictionary_2_t1821 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11672_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t974  Dictionary_2_U3CCopyToU3Em__0_m11674_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11674(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t974  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11674_gshared)(__this /* static, unused */, ___key, ___value, method)
