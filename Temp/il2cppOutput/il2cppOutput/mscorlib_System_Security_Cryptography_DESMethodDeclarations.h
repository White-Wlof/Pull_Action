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

// System.Security.Cryptography.DES
struct DES_t796;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t610;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.DES::.ctor()
extern "C" void DES__ctor_m8667 (DES_t796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DES::.cctor()
extern "C" void DES__cctor_m8668 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DES System.Security.Cryptography.DES::Create()
extern "C" DES_t796 * DES_Create_m4128 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DES System.Security.Cryptography.DES::Create(System.String)
extern "C" DES_t796 * DES_Create_m8669 (Object_t * __this /* static, unused */, String_t* ___algName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DES::IsWeakKey(System.Byte[])
extern "C" bool DES_IsWeakKey_m8670 (Object_t * __this /* static, unused */, ByteU5BU5D_t610* ___rgbKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DES::IsSemiWeakKey(System.Byte[])
extern "C" bool DES_IsSemiWeakKey_m8671 (Object_t * __this /* static, unused */, ByteU5BU5D_t610* ___rgbKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DES::get_Key()
extern "C" ByteU5BU5D_t610* DES_get_Key_m8672 (DES_t796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DES::set_Key(System.Byte[])
extern "C" void DES_set_Key_m8673 (DES_t796 * __this, ByteU5BU5D_t610* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
