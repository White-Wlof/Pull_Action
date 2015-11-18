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

// System.Globalization.GregorianCalendar
struct GregorianCalendar_t1139;
// System.Int32[]
struct Int32U5BU5D_t372;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_GregorianCalendarTypes.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_DayOfWeek.h"

// System.Void System.Globalization.GregorianCalendar::.ctor(System.Globalization.GregorianCalendarTypes)
extern "C" void GregorianCalendar__ctor_m7014 (GregorianCalendar_t1139 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.GregorianCalendar::.ctor()
extern "C" void GregorianCalendar__ctor_m7015 (GregorianCalendar_t1139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.GregorianCalendar::get_Eras()
extern "C" Int32U5BU5D_t372* GregorianCalendar_get_Eras_m7016 (GregorianCalendar_t1139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.GregorianCalendar::set_CalendarType(System.Globalization.GregorianCalendarTypes)
extern "C" void GregorianCalendar_set_CalendarType_m7017 (GregorianCalendar_t1139 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetDayOfMonth(System.DateTime)
extern "C" int32_t GregorianCalendar_GetDayOfMonth_m7018 (GregorianCalendar_t1139 * __this, DateTime_t515  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.Globalization.GregorianCalendar::GetDayOfWeek(System.DateTime)
extern "C" int32_t GregorianCalendar_GetDayOfWeek_m7019 (GregorianCalendar_t1139 * __this, DateTime_t515  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetEra(System.DateTime)
extern "C" int32_t GregorianCalendar_GetEra_m7020 (GregorianCalendar_t1139 * __this, DateTime_t515  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetMonth(System.DateTime)
extern "C" int32_t GregorianCalendar_GetMonth_m7021 (GregorianCalendar_t1139 * __this, DateTime_t515  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetYear(System.DateTime)
extern "C" int32_t GregorianCalendar_GetYear_m7022 (GregorianCalendar_t1139 * __this, DateTime_t515  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
