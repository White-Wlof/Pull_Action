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

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t372;
// System.Type
struct Type_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Int64[]
struct Int64U5BU5D_t1656;
// System.Collections.IComparer
struct IComparer_t825;
// System.Array/Swapper
struct Swapper_t998;
// System.Double[]
struct DoubleU5BU5D_t1657;
// System.Char[]
struct CharU5BU5D_t180;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Array::.ctor()
extern "C" void Array__ctor_m5818 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Array_System_Collections_IList_get_Item_m5819 (Array_t * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Array_System_Collections_IList_set_Item_m5820 (Array_t * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.IList.Add(System.Object)
extern "C" int32_t Array_System_Collections_IList_Add_m5821 (Array_t * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Clear()
extern "C" void Array_System_Collections_IList_Clear_m5822 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::System.Collections.IList.Contains(System.Object)
extern "C" bool Array_System_Collections_IList_Contains_m5823 (Array_t * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Array_System_Collections_IList_IndexOf_m5824 (Array_t * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Array_System_Collections_IList_Insert_m5825 (Array_t * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Remove(System.Object)
extern "C" void Array_System_Collections_IList_Remove_m5826 (Array_t * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void Array_System_Collections_IList_RemoveAt_m5827 (Array_t * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.ICollection.get_Count()
extern "C" int32_t Array_System_Collections_ICollection_get_Count_m5828 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::InternalArray__ICollection_get_Count()
extern "C" int32_t Array_InternalArray__ICollection_get_Count_m5829 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::InternalArray__ICollection_get_IsReadOnly()
extern "C" bool Array_InternalArray__ICollection_get_IsReadOnly_m5830 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::InternalArray__ICollection_Clear()
extern "C" void Array_InternalArray__ICollection_Clear_m5831 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::InternalArray__RemoveAt(System.Int32)
extern "C" void Array_InternalArray__RemoveAt_m5832 (Array_t * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Length()
extern "C" int32_t Array_get_Length_m5074 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::get_LongLength()
extern "C" int64_t Array_get_LongLength_m5833 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Rank()
extern "C" int32_t Array_get_Rank_m5077 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetRank()
extern "C" int32_t Array_GetRank_m5834 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLength(System.Int32)
extern "C" int32_t Array_GetLength_m5835 (Array_t * __this, int32_t ___dimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::GetLongLength(System.Int32)
extern "C" int64_t Array_GetLongLength_m5836 (Array_t * __this, int32_t ___dimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLowerBound(System.Int32)
extern "C" int32_t Array_GetLowerBound_m5837 (Array_t * __this, int32_t ___dimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32[])
extern "C" Object_t * Array_GetValue_m5838 (Array_t * __this, Int32U5BU5D_t372* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32[])
extern "C" void Array_SetValue_m5839 (Array_t * __this, Object_t * ___value, Int32U5BU5D_t372* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValueImpl(System.Int32)
extern "C" Object_t * Array_GetValueImpl_m5840 (Array_t * __this, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValueImpl(System.Object,System.Int32)
extern "C" void Array_SetValueImpl_m5841 (Array_t * __this, Object_t * ___value, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::FastCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" bool Array_FastCopy_m5842 (Object_t * __this /* static, unused */, Array_t * ___source, int32_t ___source_idx, Array_t * ___dest, int32_t ___dest_idx, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstanceImpl(System.Type,System.Int32[],System.Int32[])
extern "C" Array_t * Array_CreateInstanceImpl_m5843 (Object_t * __this /* static, unused */, Type_t * ___elementType, Int32U5BU5D_t372* ___lengths, Int32U5BU5D_t372* ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsSynchronized()
extern "C" bool Array_get_IsSynchronized_m5844 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::get_SyncRoot()
extern "C" Object_t * Array_get_SyncRoot_m5845 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsFixedSize()
extern "C" bool Array_get_IsFixedSize_m5846 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsReadOnly()
extern "C" bool Array_get_IsReadOnly_m5847 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Array::GetEnumerator()
extern "C" Object_t * Array_GetEnumerator_m5848 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetUpperBound(System.Int32)
extern "C" int32_t Array_GetUpperBound_m5849 (Array_t * __this, int32_t ___dimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32)
extern "C" Object_t * Array_GetValue_m5850 (Array_t * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32,System.Int32)
extern "C" Object_t * Array_GetValue_m5851 (Array_t * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32,System.Int32,System.Int32)
extern "C" Object_t * Array_GetValue_m5852 (Array_t * __this, int32_t ___index1, int32_t ___index2, int32_t ___index3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64)
extern "C" Object_t * Array_GetValue_m5853 (Array_t * __this, int64_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64,System.Int64)
extern "C" Object_t * Array_GetValue_m5854 (Array_t * __this, int64_t ___index1, int64_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64,System.Int64,System.Int64)
extern "C" Object_t * Array_GetValue_m5855 (Array_t * __this, int64_t ___index1, int64_t ___index2, int64_t ___index3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64)
extern "C" void Array_SetValue_m5856 (Array_t * __this, Object_t * ___value, int64_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64)
extern "C" void Array_SetValue_m5857 (Array_t * __this, Object_t * ___value, int64_t ___index1, int64_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64,System.Int64)
extern "C" void Array_SetValue_m5858 (Array_t * __this, Object_t * ___value, int64_t ___index1, int64_t ___index2, int64_t ___index3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32)
extern "C" void Array_SetValue_m5075 (Array_t * __this, Object_t * ___value, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32)
extern "C" void Array_SetValue_m5859 (Array_t * __this, Object_t * ___value, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32,System.Int32)
extern "C" void Array_SetValue_m5860 (Array_t * __this, Object_t * ___value, int32_t ___index1, int32_t ___index2, int32_t ___index3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
extern "C" Array_t * Array_CreateInstance_m5861 (Object_t * __this /* static, unused */, Type_t * ___elementType, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32,System.Int32)
extern "C" Array_t * Array_CreateInstance_m5862 (Object_t * __this /* static, unused */, Type_t * ___elementType, int32_t ___length1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32,System.Int32,System.Int32)
extern "C" Array_t * Array_CreateInstance_m5863 (Object_t * __this /* static, unused */, Type_t * ___elementType, int32_t ___length1, int32_t ___length2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32[])
extern "C" Array_t * Array_CreateInstance_m5864 (Object_t * __this /* static, unused */, Type_t * ___elementType, Int32U5BU5D_t372* ___lengths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32[],System.Int32[])
extern "C" Array_t * Array_CreateInstance_m5865 (Object_t * __this /* static, unused */, Type_t * ___elementType, Int32U5BU5D_t372* ___lengths, Int32U5BU5D_t372* ___lowerBounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Array::GetIntArray(System.Int64[])
extern "C" Int32U5BU5D_t372* Array_GetIntArray_m5866 (Object_t * __this /* static, unused */, Int64U5BU5D_t1656* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int64[])
extern "C" Array_t * Array_CreateInstance_m5867 (Object_t * __this /* static, unused */, Type_t * ___elementType, Int64U5BU5D_t1656* ___lengths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64[])
extern "C" Object_t * Array_GetValue_m5868 (Array_t * __this, Int64U5BU5D_t1656* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64[])
extern "C" void Array_SetValue_m5869 (Array_t * __this, Object_t * ___value, Int64U5BU5D_t1656* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Object)
extern "C" int32_t Array_BinarySearch_m5870 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Object,System.Collections.IComparer)
extern "C" int32_t Array_BinarySearch_m5871 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object)
extern "C" int32_t Array_BinarySearch_m5872 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
extern "C" int32_t Array_BinarySearch_m5873 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::DoBinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
extern "C" int32_t Array_DoBinarySearch_m5874 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
extern "C" void Array_Clear_m3150 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::ClearInternal(System.Array,System.Int32,System.Int32)
extern "C" void Array_ClearInternal_m5875 (Object_t * __this /* static, unused */, Array_t * ___a, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::Clone()
extern "C" Object_t * Array_Clone_m5876 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C" void Array_Copy_m5146 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, Array_t * ___destinationArray, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void Array_Copy_m5877 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, int32_t ___sourceIndex, Array_t * ___destinationArray, int32_t ___destinationIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int64,System.Array,System.Int64,System.Int64)
extern "C" void Array_Copy_m5878 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, int64_t ___sourceIndex, Array_t * ___destinationArray, int64_t ___destinationIndex, int64_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int64)
extern "C" void Array_Copy_m5879 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, Array_t * ___destinationArray, int64_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object)
extern "C" int32_t Array_IndexOf_m5880 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32)
extern "C" int32_t Array_IndexOf_m5881 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_m5882 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Initialize()
extern "C" void Array_Initialize_m5883 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object)
extern "C" int32_t Array_LastIndexOf_m5884 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object,System.Int32)
extern "C" int32_t Array_LastIndexOf_m5885 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object,System.Int32,System.Int32)
extern "C" int32_t Array_LastIndexOf_m5886 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array/Swapper System.Array::get_swapper(System.Array)
extern "C" Swapper_t998 * Array_get_swapper_m5887 (Object_t * __this /* static, unused */, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array)
extern "C" void Array_Reverse_m4062 (Object_t * __this /* static, unused */, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array,System.Int32,System.Int32)
extern "C" void Array_Reverse_m4097 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array)
extern "C" void Array_Sort_m5888 (Object_t * __this /* static, unused */, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array)
extern "C" void Array_Sort_m5889 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Collections.IComparer)
extern "C" void Array_Sort_m5890 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32)
extern "C" void Array_Sort_m5891 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Collections.IComparer)
extern "C" void Array_Sort_m5892 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32)
extern "C" void Array_Sort_m5893 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___index, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C" void Array_Sort_m5894 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C" void Array_Sort_m5895 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___index, int32_t ___length, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::int_swapper(System.Int32,System.Int32)
extern "C" void Array_int_swapper_m5896 (Array_t * __this, int32_t ___i, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::obj_swapper(System.Int32,System.Int32)
extern "C" void Array_obj_swapper_m5897 (Array_t * __this, int32_t ___i, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::slow_swapper(System.Int32,System.Int32)
extern "C" void Array_slow_swapper_m5898 (Array_t * __this, int32_t ___i, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::double_swapper(System.Int32,System.Int32)
extern "C" void Array_double_swapper_m5899 (Array_t * __this, int32_t ___i, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::new_gap(System.Int32)
extern "C" int32_t Array_new_gap_m5900 (Object_t * __this /* static, unused */, int32_t ___gap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Double[],System.Int32,System.Int32,System.Array/Swapper)
extern "C" void Array_combsort_m5901 (Object_t * __this /* static, unused */, DoubleU5BU5D_t1657* ___array, int32_t ___start, int32_t ___size, Swapper_t998 * ___swap_items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Int32[],System.Int32,System.Int32,System.Array/Swapper)
extern "C" void Array_combsort_m5902 (Object_t * __this /* static, unused */, Int32U5BU5D_t372* ___array, int32_t ___start, int32_t ___size, Swapper_t998 * ___swap_items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Char[],System.Int32,System.Int32,System.Array/Swapper)
extern "C" void Array_combsort_m5903 (Object_t * __this /* static, unused */, CharU5BU5D_t180* ___array, int32_t ___start, int32_t ___size, Swapper_t998 * ___swap_items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::qsort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C" void Array_qsort_m5904 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___low0, int32_t ___high0, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::swap(System.Array,System.Array,System.Int32,System.Int32)
extern "C" void Array_swap_m5905 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___i, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::compare(System.Object,System.Object,System.Collections.IComparer)
extern "C" int32_t Array_compare_m5906 (Object_t * __this /* static, unused */, Object_t * ___value1, Object_t * ___value2, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
extern "C" void Array_CopyTo_m5907 (Array_t * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::CopyTo(System.Array,System.Int64)
extern "C" void Array_CopyTo_m5908 (Array_t * __this, Array_t * ___array, int64_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::ConstrainedCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void Array_ConstrainedCopy_m5909 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, int32_t ___sourceIndex, Array_t * ___destinationArray, int32_t ___destinationIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;