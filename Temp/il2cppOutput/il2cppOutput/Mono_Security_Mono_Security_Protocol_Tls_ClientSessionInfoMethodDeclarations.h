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

// Mono.Security.Protocol.Tls.ClientSessionInfo
struct ClientSessionInfo_t707;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t613;
// Mono.Security.Protocol.Tls.Context
struct Context_t700;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.ctor(System.String,System.Byte[])
extern "C" void ClientSessionInfo__ctor_m3656 (ClientSessionInfo_t707 * __this, String_t* ___hostname, ByteU5BU5D_t613* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.cctor()
extern "C" void ClientSessionInfo__cctor_m3657 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Finalize()
extern "C" void ClientSessionInfo_Finalize_m3658 (ClientSessionInfo_t707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.ClientSessionInfo::get_HostName()
extern "C" String_t* ClientSessionInfo_get_HostName_m3659 (ClientSessionInfo_t707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::get_Id()
extern "C" ByteU5BU5D_t613* ClientSessionInfo_get_Id_m3660 (ClientSessionInfo_t707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionInfo::get_Valid()
extern "C" bool ClientSessionInfo_get_Valid_m3661 (ClientSessionInfo_t707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::GetContext(Mono.Security.Protocol.Tls.Context)
extern "C" void ClientSessionInfo_GetContext_m3662 (ClientSessionInfo_t707 * __this, Context_t700 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::SetContext(Mono.Security.Protocol.Tls.Context)
extern "C" void ClientSessionInfo_SetContext_m3663 (ClientSessionInfo_t707 * __this, Context_t700 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::KeepAlive()
extern "C" void ClientSessionInfo_KeepAlive_m3664 (ClientSessionInfo_t707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose()
extern "C" void ClientSessionInfo_Dispose_m3665 (ClientSessionInfo_t707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose(System.Boolean)
extern "C" void ClientSessionInfo_Dispose_m3666 (ClientSessionInfo_t707 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::CheckDisposed()
extern "C" void ClientSessionInfo_CheckDisposed_m3667 (ClientSessionInfo_t707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
