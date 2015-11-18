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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1845;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1847;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t568;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2298;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2299;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t781;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1850;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m11942_gshared (Dictionary_2_t1845 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11942(__this, method) (( void (*) (Dictionary_2_t1845 *, const MethodInfo*))Dictionary_2__ctor_m11942_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11943_gshared (Dictionary_2_t1845 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11943(__this, ___comparer, method) (( void (*) (Dictionary_2_t1845 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11943_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11944_gshared (Dictionary_2_t1845 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11944(__this, ___capacity, method) (( void (*) (Dictionary_2_t1845 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11944_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11945_gshared (Dictionary_2_t1845 * __this, SerializationInfo_t568 * ___info, StreamingContext_t569  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11945(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1845 *, SerializationInfo_t568 *, StreamingContext_t569 , const MethodInfo*))Dictionary_2__ctor_m11945_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11946_gshared (Dictionary_2_t1845 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11946(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1845 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11946_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11947_gshared (Dictionary_2_t1845 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11947(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1845 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11947_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11948_gshared (Dictionary_2_t1845 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11948(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1845 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11948_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11949_gshared (Dictionary_2_t1845 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11949(__this, ___key, method) (( bool (*) (Dictionary_2_t1845 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11949_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11950_gshared (Dictionary_2_t1845 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11950(__this, ___key, method) (( void (*) (Dictionary_2_t1845 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11950_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11951_gshared (Dictionary_2_t1845 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11951(__this, method) (( bool (*) (Dictionary_2_t1845 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11951_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11952_gshared (Dictionary_2_t1845 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11952(__this, method) (( Object_t * (*) (Dictionary_2_t1845 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11952_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11953_gshared (Dictionary_2_t1845 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11953(__this, method) (( bool (*) (Dictionary_2_t1845 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11953_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11954_gshared (Dictionary_2_t1845 * __this, KeyValuePair_2_t1848  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11954(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1845 *, KeyValuePair_2_t1848 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11954_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11955_gshared (Dictionary_2_t1845 * __this, KeyValuePair_2_t1848  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11955(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1845 *, KeyValuePair_2_t1848 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11955_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11956_gshared (Dictionary_2_t1845 * __this, KeyValuePair_2U5BU5D_t2298* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11956(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1845 *, KeyValuePair_2U5BU5D_t2298*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11956_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11957_gshared (Dictionary_2_t1845 * __this, KeyValuePair_2_t1848  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11957(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1845 *, KeyValuePair_2_t1848 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11957_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11958_gshared (Dictionary_2_t1845 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11958(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1845 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11958_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11959_gshared (Dictionary_2_t1845 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11959(__this, method) (( Object_t * (*) (Dictionary_2_t1845 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11959_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11960_gshared (Dictionary_2_t1845 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11960(__this, method) (( Object_t* (*) (Dictionary_2_t1845 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11960_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11961_gshared (Dictionary_2_t1845 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11961(__this, method) (( Object_t * (*) (Dictionary_2_t1845 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11961_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11962_gshared (Dictionary_2_t1845 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11962(__this, method) (( int32_t (*) (Dictionary_2_t1845 *, const MethodInfo*))Dictionary_2_get_Count_m11962_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m11963_gshared (Dictionary_2_t1845 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11963(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1845 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11963_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11964_gshared (Dictionary_2_t1845 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11964(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1845 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m11964_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11965_gshared (Dictionary_2_t1845 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11965(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1845 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11965_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11966_gshared (Dictionary_2_t1845 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11966(__this, ___size, method) (( void (*) (Dictionary_2_t1845 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11966_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11967_gshared (Dictionary_2_t1845 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11967(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1845 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11967_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1848  Dictionary_2_make_pair_m11968_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11968(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1848  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m11968_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m11969_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11969(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m11969_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11970_gshared (Dictionary_2_t1845 * __this, KeyValuePair_2U5BU5D_t2298* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11970(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1845 *, KeyValuePair_2U5BU5D_t2298*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11970_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m11971_gshared (Dictionary_2_t1845 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11971(__this, method) (( void (*) (Dictionary_2_t1845 *, const MethodInfo*))Dictionary_2_Resize_m11971_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11972_gshared (Dictionary_2_t1845 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11972(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1845 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m11972_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m11973_gshared (Dictionary_2_t1845 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11973(__this, method) (( void (*) (Dictionary_2_t1845 *, const MethodInfo*))Dictionary_2_Clear_m11973_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11974_gshared (Dictionary_2_t1845 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11974(__this, ___key, method) (( bool (*) (Dictionary_2_t1845 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11974_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11975_gshared (Dictionary_2_t1845 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11975(__this, ___value, method) (( bool (*) (Dictionary_2_t1845 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m11975_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11976_gshared (Dictionary_2_t1845 * __this, SerializationInfo_t568 * ___info, StreamingContext_t569  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11976(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1845 *, SerializationInfo_t568 *, StreamingContext_t569 , const MethodInfo*))Dictionary_2_GetObjectData_m11976_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11977_gshared (Dictionary_2_t1845 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11977(__this, ___sender, method) (( void (*) (Dictionary_2_t1845 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11977_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11978_gshared (Dictionary_2_t1845 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11978(__this, ___key, method) (( bool (*) (Dictionary_2_t1845 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11978_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11979_gshared (Dictionary_2_t1845 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11979(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1845 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m11979_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1850 * Dictionary_2_get_Values_m11980_gshared (Dictionary_2_t1845 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11980(__this, method) (( ValueCollection_t1850 * (*) (Dictionary_2_t1845 *, const MethodInfo*))Dictionary_2_get_Values_m11980_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11981_gshared (Dictionary_2_t1845 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11981(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1845 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11981_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m11982_gshared (Dictionary_2_t1845 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11982(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1845 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11982_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11983_gshared (Dictionary_2_t1845 * __this, KeyValuePair_2_t1848  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11983(__this, ___pair, method) (( bool (*) (Dictionary_2_t1845 *, KeyValuePair_2_t1848 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11983_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1852  Dictionary_2_GetEnumerator_m11984_gshared (Dictionary_2_t1845 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11984(__this, method) (( Enumerator_t1852  (*) (Dictionary_2_t1845 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11984_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t971  Dictionary_2_U3CCopyToU3Em__0_m11985_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11985(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t971  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11985_gshared)(__this /* static, unused */, ___key, ___value, method)
