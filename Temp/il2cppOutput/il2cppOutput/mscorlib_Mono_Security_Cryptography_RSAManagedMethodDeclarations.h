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

// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t1074;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t1073;
// System.Byte[]
struct ByteU5BU5D_t613;
// System.String
struct String_t;
// Mono.Math.BigInteger
struct BigInteger_t1060;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void Mono.Security.Cryptography.RSAManaged::.ctor(System.Int32)
extern "C" void RSAManaged__ctor_m6347 (RSAManaged_t1074 * __this, int32_t ___keySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::add_KeyGenerated(Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler)
extern "C" void RSAManaged_add_KeyGenerated_m6348 (RSAManaged_t1074 * __this, KeyGeneratedEventHandler_t1073 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::remove_KeyGenerated(Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler)
extern "C" void RSAManaged_remove_KeyGenerated_m6349 (RSAManaged_t1074 * __this, KeyGeneratedEventHandler_t1073 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Finalize()
extern "C" void RSAManaged_Finalize_m6350 (RSAManaged_t1074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::GenerateKeyPair()
extern "C" void RSAManaged_GenerateKeyPair_m6351 (RSAManaged_t1074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.RSAManaged::get_KeySize()
extern "C" int32_t RSAManaged_get_KeySize_m6352 (RSAManaged_t1074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_PublicOnly()
extern "C" bool RSAManaged_get_PublicOnly_m6353 (RSAManaged_t1074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::DecryptValue(System.Byte[])
extern "C" ByteU5BU5D_t613* RSAManaged_DecryptValue_m6354 (RSAManaged_t1074 * __this, ByteU5BU5D_t613* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::EncryptValue(System.Byte[])
extern "C" ByteU5BU5D_t613* RSAManaged_EncryptValue_m6355 (RSAManaged_t1074 * __this, ByteU5BU5D_t613* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Cryptography.RSAManaged::ExportParameters(System.Boolean)
extern "C" RSAParameters_t746  RSAManaged_ExportParameters_m6356 (RSAManaged_t1074 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters)
extern "C" void RSAManaged_ImportParameters_m6357 (RSAManaged_t1074 * __this, RSAParameters_t746  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Dispose(System.Boolean)
extern "C" void RSAManaged_Dispose_m6358 (RSAManaged_t1074 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.RSAManaged::ToXmlString(System.Boolean)
extern "C" String_t* RSAManaged_ToXmlString_m6359 (RSAManaged_t1074 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_IsCrtPossible()
extern "C" bool RSAManaged_get_IsCrtPossible_m6360 (RSAManaged_t1074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::GetPaddedValue(Mono.Math.BigInteger,System.Int32)
extern "C" ByteU5BU5D_t613* RSAManaged_GetPaddedValue_m6361 (RSAManaged_t1074 * __this, BigInteger_t1060 * ___value, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
