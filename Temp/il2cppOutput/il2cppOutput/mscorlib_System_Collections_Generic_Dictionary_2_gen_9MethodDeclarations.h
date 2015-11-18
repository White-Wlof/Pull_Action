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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1896;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1847;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t568;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2305;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2306;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t781;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1900;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m12484_gshared (Dictionary_2_t1896 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12484(__this, method) (( void (*) (Dictionary_2_t1896 *, const MethodInfo*))Dictionary_2__ctor_m12484_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12486_gshared (Dictionary_2_t1896 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12486(__this, ___comparer, method) (( void (*) (Dictionary_2_t1896 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12486_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12488_gshared (Dictionary_2_t1896 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12488(__this, ___capacity, method) (( void (*) (Dictionary_2_t1896 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12488_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12490_gshared (Dictionary_2_t1896 * __this, SerializationInfo_t568 * ___info, StreamingContext_t569  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12490(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1896 *, SerializationInfo_t568 *, StreamingContext_t569 , const MethodInfo*))Dictionary_2__ctor_m12490_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12492_gshared (Dictionary_2_t1896 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12492(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1896 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12492_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12494_gshared (Dictionary_2_t1896 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12494(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1896 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12494_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12496_gshared (Dictionary_2_t1896 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12496(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1896 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12496_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12498_gshared (Dictionary_2_t1896 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12498(__this, ___key, method) (( bool (*) (Dictionary_2_t1896 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12498_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12500_gshared (Dictionary_2_t1896 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12500(__this, ___key, method) (( void (*) (Dictionary_2_t1896 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12500_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12502_gshared (Dictionary_2_t1896 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12502(__this, method) (( bool (*) (Dictionary_2_t1896 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12502_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12504_gshared (Dictionary_2_t1896 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12504(__this, method) (( Object_t * (*) (Dictionary_2_t1896 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12504_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12506_gshared (Dictionary_2_t1896 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12506(__this, method) (( bool (*) (Dictionary_2_t1896 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12506_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12508_gshared (Dictionary_2_t1896 * __this, KeyValuePair_2_t1898  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12508(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1896 *, KeyValuePair_2_t1898 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12508_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12510_gshared (Dictionary_2_t1896 * __this, KeyValuePair_2_t1898  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12510(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1896 *, KeyValuePair_2_t1898 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12510_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12512_gshared (Dictionary_2_t1896 * __this, KeyValuePair_2U5BU5D_t2305* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12512(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1896 *, KeyValuePair_2U5BU5D_t2305*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12512_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12514_gshared (Dictionary_2_t1896 * __this, KeyValuePair_2_t1898  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12514(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1896 *, KeyValuePair_2_t1898 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12514_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12516_gshared (Dictionary_2_t1896 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12516(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1896 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12516_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12518_gshared (Dictionary_2_t1896 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12518(__this, method) (( Object_t * (*) (Dictionary_2_t1896 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12518_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12520_gshared (Dictionary_2_t1896 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12520(__this, method) (( Object_t* (*) (Dictionary_2_t1896 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12520_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12522_gshared (Dictionary_2_t1896 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12522(__this, method) (( Object_t * (*) (Dictionary_2_t1896 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12522_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12524_gshared (Dictionary_2_t1896 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12524(__this, method) (( int32_t (*) (Dictionary_2_t1896 *, const MethodInfo*))Dictionary_2_get_Count_m12524_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12526_gshared (Dictionary_2_t1896 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12526(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1896 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m12526_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12528_gshared (Dictionary_2_t1896 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12528(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1896 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m12528_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12530_gshared (Dictionary_2_t1896 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12530(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1896 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12530_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12532_gshared (Dictionary_2_t1896 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12532(__this, ___size, method) (( void (*) (Dictionary_2_t1896 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12532_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12534_gshared (Dictionary_2_t1896 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12534(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1896 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12534_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1898  Dictionary_2_make_pair_m12536_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12536(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1898  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m12536_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12538_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12538(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m12538_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12540_gshared (Dictionary_2_t1896 * __this, KeyValuePair_2U5BU5D_t2305* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12540(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1896 *, KeyValuePair_2U5BU5D_t2305*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12540_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m12542_gshared (Dictionary_2_t1896 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12542(__this, method) (( void (*) (Dictionary_2_t1896 *, const MethodInfo*))Dictionary_2_Resize_m12542_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12544_gshared (Dictionary_2_t1896 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12544(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1896 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m12544_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12546_gshared (Dictionary_2_t1896 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12546(__this, method) (( void (*) (Dictionary_2_t1896 *, const MethodInfo*))Dictionary_2_Clear_m12546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12548_gshared (Dictionary_2_t1896 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12548(__this, ___key, method) (( bool (*) (Dictionary_2_t1896 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12548_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12550_gshared (Dictionary_2_t1896 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12550(__this, ___value, method) (( bool (*) (Dictionary_2_t1896 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m12550_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12552_gshared (Dictionary_2_t1896 * __this, SerializationInfo_t568 * ___info, StreamingContext_t569  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12552(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1896 *, SerializationInfo_t568 *, StreamingContext_t569 , const MethodInfo*))Dictionary_2_GetObjectData_m12552_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12554_gshared (Dictionary_2_t1896 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12554(__this, ___sender, method) (( void (*) (Dictionary_2_t1896 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12554_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12556_gshared (Dictionary_2_t1896 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12556(__this, ___key, method) (( bool (*) (Dictionary_2_t1896 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12556_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12558_gshared (Dictionary_2_t1896 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12558(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1896 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m12558_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1900 * Dictionary_2_get_Values_m12560_gshared (Dictionary_2_t1896 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12560(__this, method) (( ValueCollection_t1900 * (*) (Dictionary_2_t1896 *, const MethodInfo*))Dictionary_2_get_Values_m12560_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12562_gshared (Dictionary_2_t1896 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12562(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1896 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12562_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12564_gshared (Dictionary_2_t1896 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12564(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1896 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12564_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12566_gshared (Dictionary_2_t1896 * __this, KeyValuePair_2_t1898  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12566(__this, ___pair, method) (( bool (*) (Dictionary_2_t1896 *, KeyValuePair_2_t1898 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12566_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1902  Dictionary_2_GetEnumerator_m12568_gshared (Dictionary_2_t1896 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12568(__this, method) (( Enumerator_t1902  (*) (Dictionary_2_t1896 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12568_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t971  Dictionary_2_U3CCopyToU3Em__0_m12570_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12570(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t971  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12570_gshared)(__this /* static, unused */, ___key, ___value, method)
