﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t610;
// System.Type[]
struct TypeU5BU5D_t566;

#include "mscorlib_System_Object.h"

// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
struct  BinaryCommon_t1409  : public Object_t
{
};
struct BinaryCommon_t1409_StaticFields{
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::BinaryHeader
	ByteU5BU5D_t610* ___BinaryHeader_0;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodesToType
	TypeU5BU5D_t566* ____typeCodesToType_1;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodeMap
	ByteU5BU5D_t610* ____typeCodeMap_2;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::UseReflectionSerialization
	bool ___UseReflectionSerialization_3;
};
