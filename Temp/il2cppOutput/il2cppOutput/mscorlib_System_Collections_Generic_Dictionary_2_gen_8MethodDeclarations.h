﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1848;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1850;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t571;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2301;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t24;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2302;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1853;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m11960_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11960(__this, method) (( void (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2__ctor_m11960_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11961_gshared (Dictionary_2_t1848 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11961(__this, ___comparer, method) (( void (*) (Dictionary_2_t1848 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11961_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11962_gshared (Dictionary_2_t1848 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11962(__this, ___capacity, method) (( void (*) (Dictionary_2_t1848 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11962_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11963_gshared (Dictionary_2_t1848 * __this, SerializationInfo_t571 * ___info, StreamingContext_t572  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11963(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1848 *, SerializationInfo_t571 *, StreamingContext_t572 , const MethodInfo*))Dictionary_2__ctor_m11963_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11964_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11964(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1848 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11964_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11965_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11965(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1848 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11965_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11966_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11966(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1848 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11966_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11967_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11967(__this, ___key, method) (( bool (*) (Dictionary_2_t1848 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11967_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11968_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11968(__this, ___key, method) (( void (*) (Dictionary_2_t1848 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11968_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11969_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11969(__this, method) (( bool (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11969_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11970_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11970(__this, method) (( Object_t * (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11970_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11971_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11971(__this, method) (( bool (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11971_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11972_gshared (Dictionary_2_t1848 * __this, KeyValuePair_2_t1851  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11972(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1848 *, KeyValuePair_2_t1851 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11972_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11973_gshared (Dictionary_2_t1848 * __this, KeyValuePair_2_t1851  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11973(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1848 *, KeyValuePair_2_t1851 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11973_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11974_gshared (Dictionary_2_t1848 * __this, KeyValuePair_2U5BU5D_t2301* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11974(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1848 *, KeyValuePair_2U5BU5D_t2301*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11974_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11975_gshared (Dictionary_2_t1848 * __this, KeyValuePair_2_t1851  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11975(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1848 *, KeyValuePair_2_t1851 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11975_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11976_gshared (Dictionary_2_t1848 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11976(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1848 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11976_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11977_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11977(__this, method) (( Object_t * (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11977_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11978_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11978(__this, method) (( Object_t* (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11978_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11979_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11979(__this, method) (( Object_t * (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11979_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11980_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11980(__this, method) (( int32_t (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_get_Count_m11980_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m11981_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11981(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1848 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11981_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11982_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11982(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1848 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m11982_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11983_gshared (Dictionary_2_t1848 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11983(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1848 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11983_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11984_gshared (Dictionary_2_t1848 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11984(__this, ___size, method) (( void (*) (Dictionary_2_t1848 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11984_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11985_gshared (Dictionary_2_t1848 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11985(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1848 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11985_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1851  Dictionary_2_make_pair_m11986_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11986(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1851  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m11986_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m11987_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11987(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m11987_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11988_gshared (Dictionary_2_t1848 * __this, KeyValuePair_2U5BU5D_t2301* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11988(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1848 *, KeyValuePair_2U5BU5D_t2301*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11988_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m11989_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11989(__this, method) (( void (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_Resize_m11989_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11990_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11990(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1848 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m11990_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m11991_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11991(__this, method) (( void (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_Clear_m11991_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11992_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11992(__this, ___key, method) (( bool (*) (Dictionary_2_t1848 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11992_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11993_gshared (Dictionary_2_t1848 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11993(__this, ___value, method) (( bool (*) (Dictionary_2_t1848 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m11993_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11994_gshared (Dictionary_2_t1848 * __this, SerializationInfo_t571 * ___info, StreamingContext_t572  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11994(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1848 *, SerializationInfo_t571 *, StreamingContext_t572 , const MethodInfo*))Dictionary_2_GetObjectData_m11994_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11995_gshared (Dictionary_2_t1848 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11995(__this, ___sender, method) (( void (*) (Dictionary_2_t1848 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11995_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11996_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11996(__this, ___key, method) (( bool (*) (Dictionary_2_t1848 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11996_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11997_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11997(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1848 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m11997_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1853 * Dictionary_2_get_Values_m11998_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11998(__this, method) (( ValueCollection_t1853 * (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_get_Values_m11998_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11999_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11999(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1848 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11999_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m12000_gshared (Dictionary_2_t1848 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12000(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1848 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12000_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12001_gshared (Dictionary_2_t1848 * __this, KeyValuePair_2_t1851  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12001(__this, ___pair, method) (( bool (*) (Dictionary_2_t1848 *, KeyValuePair_2_t1851 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12001_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1855  Dictionary_2_GetEnumerator_m12002_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12002(__this, method) (( Enumerator_t1855  (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12002_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t974  Dictionary_2_U3CCopyToU3Em__0_m12003_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12003(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t974  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12003_gshared)(__this /* static, unused */, ___key, ___value, method)
