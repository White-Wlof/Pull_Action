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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2170;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1850;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t571;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2348;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t24;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2349;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2175;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m16088_gshared (Dictionary_2_t2170 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16088(__this, method) (( void (*) (Dictionary_2_t2170 *, const MethodInfo*))Dictionary_2__ctor_m16088_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16089_gshared (Dictionary_2_t2170 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16089(__this, ___comparer, method) (( void (*) (Dictionary_2_t2170 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16089_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16091_gshared (Dictionary_2_t2170 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16091(__this, ___capacity, method) (( void (*) (Dictionary_2_t2170 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16091_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16093_gshared (Dictionary_2_t2170 * __this, SerializationInfo_t571 * ___info, StreamingContext_t572  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16093(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2170 *, SerializationInfo_t571 *, StreamingContext_t572 , const MethodInfo*))Dictionary_2__ctor_m16093_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16095_gshared (Dictionary_2_t2170 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16095(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2170 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16095_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16097_gshared (Dictionary_2_t2170 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16097(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2170 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16097_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16099_gshared (Dictionary_2_t2170 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16099(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2170 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16099_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16101_gshared (Dictionary_2_t2170 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16101(__this, ___key, method) (( bool (*) (Dictionary_2_t2170 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16101_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16103_gshared (Dictionary_2_t2170 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16103(__this, ___key, method) (( void (*) (Dictionary_2_t2170 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16103_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16105_gshared (Dictionary_2_t2170 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16105(__this, method) (( bool (*) (Dictionary_2_t2170 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16105_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16107_gshared (Dictionary_2_t2170 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16107(__this, method) (( Object_t * (*) (Dictionary_2_t2170 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16107_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16109_gshared (Dictionary_2_t2170 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16109(__this, method) (( bool (*) (Dictionary_2_t2170 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16109_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16111_gshared (Dictionary_2_t2170 * __this, KeyValuePair_2_t2172  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16111(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2170 *, KeyValuePair_2_t2172 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16111_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16113_gshared (Dictionary_2_t2170 * __this, KeyValuePair_2_t2172  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16113(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2170 *, KeyValuePair_2_t2172 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16113_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16115_gshared (Dictionary_2_t2170 * __this, KeyValuePair_2U5BU5D_t2348* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16115(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2170 *, KeyValuePair_2U5BU5D_t2348*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16115_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16117_gshared (Dictionary_2_t2170 * __this, KeyValuePair_2_t2172  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16117(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2170 *, KeyValuePair_2_t2172 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16117_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16119_gshared (Dictionary_2_t2170 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16119(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2170 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16119_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16121_gshared (Dictionary_2_t2170 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16121(__this, method) (( Object_t * (*) (Dictionary_2_t2170 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16121_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16123_gshared (Dictionary_2_t2170 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16123(__this, method) (( Object_t* (*) (Dictionary_2_t2170 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16123_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16125_gshared (Dictionary_2_t2170 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16125(__this, method) (( Object_t * (*) (Dictionary_2_t2170 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16125_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16127_gshared (Dictionary_2_t2170 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16127(__this, method) (( int32_t (*) (Dictionary_2_t2170 *, const MethodInfo*))Dictionary_2_get_Count_m16127_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m16129_gshared (Dictionary_2_t2170 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16129(__this, ___key, method) (( bool (*) (Dictionary_2_t2170 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16129_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16131_gshared (Dictionary_2_t2170 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16131(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2170 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m16131_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16133_gshared (Dictionary_2_t2170 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16133(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2170 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16133_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16135_gshared (Dictionary_2_t2170 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16135(__this, ___size, method) (( void (*) (Dictionary_2_t2170 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16135_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16137_gshared (Dictionary_2_t2170 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16137(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2170 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16137_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2172  Dictionary_2_make_pair_m16139_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16139(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2172  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m16139_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m16141_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16141(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m16141_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16143_gshared (Dictionary_2_t2170 * __this, KeyValuePair_2U5BU5D_t2348* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16143(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2170 *, KeyValuePair_2U5BU5D_t2348*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16143_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m16145_gshared (Dictionary_2_t2170 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16145(__this, method) (( void (*) (Dictionary_2_t2170 *, const MethodInfo*))Dictionary_2_Resize_m16145_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16147_gshared (Dictionary_2_t2170 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16147(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2170 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m16147_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m16149_gshared (Dictionary_2_t2170 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16149(__this, method) (( void (*) (Dictionary_2_t2170 *, const MethodInfo*))Dictionary_2_Clear_m16149_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16151_gshared (Dictionary_2_t2170 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16151(__this, ___key, method) (( bool (*) (Dictionary_2_t2170 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16151_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16153_gshared (Dictionary_2_t2170 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16153(__this, ___value, method) (( bool (*) (Dictionary_2_t2170 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m16153_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16155_gshared (Dictionary_2_t2170 * __this, SerializationInfo_t571 * ___info, StreamingContext_t572  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16155(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2170 *, SerializationInfo_t571 *, StreamingContext_t572 , const MethodInfo*))Dictionary_2_GetObjectData_m16155_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16157_gshared (Dictionary_2_t2170 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16157(__this, ___sender, method) (( void (*) (Dictionary_2_t2170 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16157_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16159_gshared (Dictionary_2_t2170 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16159(__this, ___key, method) (( bool (*) (Dictionary_2_t2170 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16159_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16161_gshared (Dictionary_2_t2170 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16161(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2170 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m16161_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2175 * Dictionary_2_get_Values_m16163_gshared (Dictionary_2_t2170 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16163(__this, method) (( ValueCollection_t2175 * (*) (Dictionary_2_t2170 *, const MethodInfo*))Dictionary_2_get_Values_m16163_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16165_gshared (Dictionary_2_t2170 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16165(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2170 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16165_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m16167_gshared (Dictionary_2_t2170 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16167(__this, ___value, method) (( bool (*) (Dictionary_2_t2170 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16167_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16169_gshared (Dictionary_2_t2170 * __this, KeyValuePair_2_t2172  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16169(__this, ___pair, method) (( bool (*) (Dictionary_2_t2170 *, KeyValuePair_2_t2172 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16169_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2177  Dictionary_2_GetEnumerator_m16171_gshared (Dictionary_2_t2170 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16171(__this, method) (( Enumerator_t2177  (*) (Dictionary_2_t2170 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16171_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t974  Dictionary_2_U3CCopyToU3Em__0_m16173_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16173(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t974  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16173_gshared)(__this /* static, unused */, ___key, ___value, method)
