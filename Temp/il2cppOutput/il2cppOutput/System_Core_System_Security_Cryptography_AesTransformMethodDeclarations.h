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

// System.Security.Cryptography.AesTransform
struct AesTransform_t615;
// System.Security.Cryptography.Aes
struct Aes_t613;
// System.Byte[]
struct ByteU5BU5D_t610;
// System.UInt32[]
struct UInt32U5BU5D_t616;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.AesTransform::.ctor(System.Security.Cryptography.Aes,System.Boolean,System.Byte[],System.Byte[])
extern "C" void AesTransform__ctor_m3139 (AesTransform_t615 * __this, Aes_t613 * ___algo, bool ___encryption, ByteU5BU5D_t610* ___key, ByteU5BU5D_t610* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::.cctor()
extern "C" void AesTransform__cctor_m3140 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::ECB(System.Byte[],System.Byte[])
extern "C" void AesTransform_ECB_m3141 (AesTransform_t615 * __this, ByteU5BU5D_t610* ___input, ByteU5BU5D_t610* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.AesTransform::SubByte(System.UInt32)
extern "C" uint32_t AesTransform_SubByte_m3142 (AesTransform_t615 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void AesTransform_Encrypt128_m3143 (AesTransform_t615 * __this, ByteU5BU5D_t610* ___indata, ByteU5BU5D_t610* ___outdata, UInt32U5BU5D_t616* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void AesTransform_Decrypt128_m3144 (AesTransform_t615 * __this, ByteU5BU5D_t610* ___indata, ByteU5BU5D_t610* ___outdata, UInt32U5BU5D_t616* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
