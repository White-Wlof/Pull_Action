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

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1136;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t376;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1656;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Int32,System.Boolean)
extern "C" void NumberFormatInfo__ctor_m7041 (NumberFormatInfo_t1136 * __this, int32_t ___lcid, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Boolean)
extern "C" void NumberFormatInfo__ctor_m7042 (NumberFormatInfo_t1136 * __this, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor()
extern "C" void NumberFormatInfo__ctor_m7043 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.cctor()
extern "C" void NumberFormatInfo__cctor_m7044 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyDecimalDigits()
extern "C" int32_t NumberFormatInfo_get_CurrencyDecimalDigits_m7045 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyDecimalSeparator()
extern "C" String_t* NumberFormatInfo_get_CurrencyDecimalSeparator_m7046 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyGroupSeparator()
extern "C" String_t* NumberFormatInfo_get_CurrencyGroupSeparator_m7047 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawCurrencyGroupSizes()
extern "C" Int32U5BU5D_t376* NumberFormatInfo_get_RawCurrencyGroupSizes_m7048 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyNegativePattern()
extern "C" int32_t NumberFormatInfo_get_CurrencyNegativePattern_m7049 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyPositivePattern()
extern "C" int32_t NumberFormatInfo_get_CurrencyPositivePattern_m7050 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencySymbol()
extern "C" String_t* NumberFormatInfo_get_CurrencySymbol_m7051 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_CurrentInfo()
extern "C" NumberFormatInfo_t1136 * NumberFormatInfo_get_CurrentInfo_m7052 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
extern "C" NumberFormatInfo_t1136 * NumberFormatInfo_get_InvariantInfo_m7053 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NaNSymbol()
extern "C" String_t* NumberFormatInfo_get_NaNSymbol_m7054 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeInfinitySymbol()
extern "C" String_t* NumberFormatInfo_get_NegativeInfinitySymbol_m7055 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeSign()
extern "C" String_t* NumberFormatInfo_get_NegativeSign_m7056 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberDecimalDigits()
extern "C" int32_t NumberFormatInfo_get_NumberDecimalDigits_m7057 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
extern "C" String_t* NumberFormatInfo_get_NumberDecimalSeparator_m7058 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberGroupSeparator()
extern "C" String_t* NumberFormatInfo_get_NumberGroupSeparator_m7059 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawNumberGroupSizes()
extern "C" Int32U5BU5D_t376* NumberFormatInfo_get_RawNumberGroupSizes_m7060 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberNegativePattern()
extern "C" int32_t NumberFormatInfo_get_NumberNegativePattern_m7061 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::set_NumberNegativePattern(System.Int32)
extern "C" void NumberFormatInfo_set_NumberNegativePattern_m7062 (NumberFormatInfo_t1136 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentDecimalDigits()
extern "C" int32_t NumberFormatInfo_get_PercentDecimalDigits_m7063 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentDecimalSeparator()
extern "C" String_t* NumberFormatInfo_get_PercentDecimalSeparator_m7064 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentGroupSeparator()
extern "C" String_t* NumberFormatInfo_get_PercentGroupSeparator_m7065 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawPercentGroupSizes()
extern "C" Int32U5BU5D_t376* NumberFormatInfo_get_RawPercentGroupSizes_m7066 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentNegativePattern()
extern "C" int32_t NumberFormatInfo_get_PercentNegativePattern_m7067 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentPositivePattern()
extern "C" int32_t NumberFormatInfo_get_PercentPositivePattern_m7068 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentSymbol()
extern "C" String_t* NumberFormatInfo_get_PercentSymbol_m7069 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PerMilleSymbol()
extern "C" String_t* NumberFormatInfo_get_PerMilleSymbol_m7070 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveInfinitySymbol()
extern "C" String_t* NumberFormatInfo_get_PositiveInfinitySymbol_m7071 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveSign()
extern "C" String_t* NumberFormatInfo_get_PositiveSign_m7072 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::GetFormat(System.Type)
extern "C" Object_t * NumberFormatInfo_GetFormat_m7073 (NumberFormatInfo_t1136 * __this, Type_t * ___formatType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::Clone()
extern "C" Object_t * NumberFormatInfo_Clone_m7074 (NumberFormatInfo_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
extern "C" NumberFormatInfo_t1136 * NumberFormatInfo_GetInstance_m7075 (Object_t * __this /* static, unused */, Object_t * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
