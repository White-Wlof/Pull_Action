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

// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t875;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t808;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
struct X509Certificate2Enumerator_t876;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Fin.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor()
extern "C" void X509Certificate2Collection__ctor_m4457 (X509Certificate2Collection_t875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C" void X509Certificate2Collection__ctor_m4458 (X509Certificate2Collection_t875 * __this, X509Certificate2Collection_t875 * ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Certificate2Collection::get_Item(System.Int32)
extern "C" X509Certificate2_t808 * X509Certificate2Collection_get_Item_m4459 (X509Certificate2Collection_t875 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" int32_t X509Certificate2Collection_Add_m4460 (X509Certificate2Collection_t875 * __this, X509Certificate2_t808 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::AddRange(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C" void X509Certificate2Collection_AddRange_m4461 (X509Certificate2Collection_t875 * __this, X509Certificate2Collection_t875 * ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Contains(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509Certificate2Collection_Contains_m4462 (X509Certificate2Collection_t875 * __this, X509Certificate2_t808 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Find(System.Security.Cryptography.X509Certificates.X509FindType,System.Object,System.Boolean)
extern "C" X509Certificate2Collection_t875 * X509Certificate2Collection_Find_m4463 (X509Certificate2Collection_t875 * __this, int32_t ___findType, Object_t * ___findValue, bool ___validOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator System.Security.Cryptography.X509Certificates.X509Certificate2Collection::GetEnumerator()
extern "C" X509Certificate2Enumerator_t876 * X509Certificate2Collection_GetEnumerator_m4464 (X509Certificate2Collection_t875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
