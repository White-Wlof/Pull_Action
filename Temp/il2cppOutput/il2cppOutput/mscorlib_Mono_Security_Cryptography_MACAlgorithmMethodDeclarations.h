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

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t1068;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t612;
// System.Byte[]
struct ByteU5BU5D_t613;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
extern "C" void MACAlgorithm__ctor_m6312 (MACAlgorithm_t1068 * __this, SymmetricAlgorithm_t612 * ___algorithm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
extern "C" void MACAlgorithm_Initialize_m6313 (MACAlgorithm_t1068 * __this, ByteU5BU5D_t613* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
extern "C" void MACAlgorithm_Core_m6314 (MACAlgorithm_t1068 * __this, ByteU5BU5D_t613* ___rgb, int32_t ___ib, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
extern "C" ByteU5BU5D_t613* MACAlgorithm_Final_m6315 (MACAlgorithm_t1068 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
