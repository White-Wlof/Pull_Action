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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t862;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t667;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t863;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t759;
// System.Security.Cryptography.Oid
struct Oid_t864;
// System.Byte[]
struct ByteU5BU5D_t610;
// System.Security.Cryptography.DSA
struct DSA_t668;
// System.Security.Cryptography.RSA
struct RSA_t661;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m4393 (PublicKey_t862 * __this, X509Certificate_t667 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t863 * PublicKey_get_EncodedKeyValue_m4394 (PublicKey_t862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t863 * PublicKey_get_EncodedParameters_m4395 (PublicKey_t862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t759 * PublicKey_get_Key_m4396 (PublicKey_t862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t864 * PublicKey_get_Oid_m4397 (PublicKey_t862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t610* PublicKey_GetUnsignedBigInteger_m4398 (Object_t * __this /* static, unused */, ByteU5BU5D_t610* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t668 * PublicKey_DecodeDSA_m4399 (Object_t * __this /* static, unused */, ByteU5BU5D_t610* ___rawPublicKey, ByteU5BU5D_t610* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t661 * PublicKey_DecodeRSA_m4400 (Object_t * __this /* static, unused */, ByteU5BU5D_t610* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
