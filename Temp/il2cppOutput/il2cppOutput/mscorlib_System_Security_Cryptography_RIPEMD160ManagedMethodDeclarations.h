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

// System.Security.Cryptography.RIPEMD160Managed
struct RIPEMD160Managed_t1462;
// System.Byte[]
struct ByteU5BU5D_t610;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RIPEMD160Managed::.ctor()
extern "C" void RIPEMD160Managed__ctor_m8792 (RIPEMD160Managed_t1462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::Initialize()
extern "C" void RIPEMD160Managed_Initialize_m8793 (RIPEMD160Managed_t1462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void RIPEMD160Managed_HashCore_m8794 (RIPEMD160Managed_t1462 * __this, ByteU5BU5D_t610* ___rgb, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::HashFinal()
extern "C" ByteU5BU5D_t610* RIPEMD160Managed_HashFinal_m8795 (RIPEMD160Managed_t1462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::Finalize()
extern "C" void RIPEMD160Managed_Finalize_m8796 (RIPEMD160Managed_t1462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::ProcessBlock(System.Byte[],System.Int32)
extern "C" void RIPEMD160Managed_ProcessBlock_m8797 (RIPEMD160Managed_t1462 * __this, ByteU5BU5D_t610* ___buffer, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::Compress()
extern "C" void RIPEMD160Managed_Compress_m8798 (RIPEMD160Managed_t1462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::CompressFinal(System.UInt64)
extern "C" void RIPEMD160Managed_CompressFinal_m8799 (RIPEMD160Managed_t1462 * __this, uint64_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::ROL(System.UInt32,System.Int32)
extern "C" uint32_t RIPEMD160Managed_ROL_m8800 (RIPEMD160Managed_t1462 * __this, uint32_t ___x, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::F(System.UInt32,System.UInt32,System.UInt32)
extern "C" uint32_t RIPEMD160Managed_F_m8801 (RIPEMD160Managed_t1462 * __this, uint32_t ___x, uint32_t ___y, uint32_t ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::G(System.UInt32,System.UInt32,System.UInt32)
extern "C" uint32_t RIPEMD160Managed_G_m8802 (RIPEMD160Managed_t1462 * __this, uint32_t ___x, uint32_t ___y, uint32_t ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::H(System.UInt32,System.UInt32,System.UInt32)
extern "C" uint32_t RIPEMD160Managed_H_m8803 (RIPEMD160Managed_t1462 * __this, uint32_t ___x, uint32_t ___y, uint32_t ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::I(System.UInt32,System.UInt32,System.UInt32)
extern "C" uint32_t RIPEMD160Managed_I_m8804 (RIPEMD160Managed_t1462 * __this, uint32_t ___x, uint32_t ___y, uint32_t ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::J(System.UInt32,System.UInt32,System.UInt32)
extern "C" uint32_t RIPEMD160Managed_J_m8805 (RIPEMD160Managed_t1462 * __this, uint32_t ___x, uint32_t ___y, uint32_t ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::FF(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C" void RIPEMD160Managed_FF_m8806 (RIPEMD160Managed_t1462 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::GG(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C" void RIPEMD160Managed_GG_m8807 (RIPEMD160Managed_t1462 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::HH(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C" void RIPEMD160Managed_HH_m8808 (RIPEMD160Managed_t1462 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::II(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C" void RIPEMD160Managed_II_m8809 (RIPEMD160Managed_t1462 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::JJ(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C" void RIPEMD160Managed_JJ_m8810 (RIPEMD160Managed_t1462 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::FFF(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C" void RIPEMD160Managed_FFF_m8811 (RIPEMD160Managed_t1462 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::GGG(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C" void RIPEMD160Managed_GGG_m8812 (RIPEMD160Managed_t1462 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::HHH(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C" void RIPEMD160Managed_HHH_m8813 (RIPEMD160Managed_t1462 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::III(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C" void RIPEMD160Managed_III_m8814 (RIPEMD160Managed_t1462 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::JJJ(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C" void RIPEMD160Managed_JJJ_m8815 (RIPEMD160Managed_t1462 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
