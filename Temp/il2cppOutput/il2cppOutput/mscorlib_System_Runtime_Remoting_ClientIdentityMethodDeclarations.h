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

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t1389;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1388;
// System.MarshalByRefObject
struct MarshalByRefObject_t863;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern "C" void ClientIdentity__ctor_m8385 (ClientIdentity_t1389 * __this, String_t* ___objectUri, ObjRef_t1388 * ___objRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern "C" MarshalByRefObject_t863 * ClientIdentity_get_ClientProxy_m8386 (ClientIdentity_t1389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern "C" void ClientIdentity_set_ClientProxy_m8387 (ClientIdentity_t1389 * __this, MarshalByRefObject_t863 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t1388 * ClientIdentity_CreateObjRef_m8388 (ClientIdentity_t1389 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C" String_t* ClientIdentity_get_TargetUri_m8389 (ClientIdentity_t1389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
