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

// System.Runtime.Remoting.ChannelData
struct ChannelData_t1397;
// System.Collections.ArrayList
struct ArrayList_t644;
// System.Collections.Hashtable
struct Hashtable_t709;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.ChannelData::.ctor()
extern "C" void ChannelData__ctor_m8447 (ChannelData_t1397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ServerProviders()
extern "C" ArrayList_t644 * ChannelData_get_ServerProviders_m8448 (ChannelData_t1397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ClientProviders()
extern "C" ArrayList_t644 * ChannelData_get_ClientProviders_m8449 (ChannelData_t1397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::get_CustomProperties()
extern "C" Hashtable_t709 * ChannelData_get_CustomProperties_m8450 (ChannelData_t1397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ChannelData::CopyFrom(System.Runtime.Remoting.ChannelData)
extern "C" void ChannelData_CopyFrom_m8451 (ChannelData_t1397 * __this, ChannelData_t1397 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
