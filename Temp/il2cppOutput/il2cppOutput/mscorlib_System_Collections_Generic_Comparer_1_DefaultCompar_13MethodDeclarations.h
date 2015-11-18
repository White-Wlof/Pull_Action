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

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2281;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m17161_gshared (DefaultComparer_t2281 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17161(__this, method) (( void (*) (DefaultComparer_t2281 *, const MethodInfo*))DefaultComparer__ctor_m17161_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m17162_gshared (DefaultComparer_t2281 * __this, Guid_t1589  ___x, Guid_t1589  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m17162(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2281 *, Guid_t1589 , Guid_t1589 , const MethodInfo*))DefaultComparer_Compare_m17162_gshared)(__this, ___x, ___y, method)
