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

// WallObject
struct WallObject_t21;
// UnityEngine.Collision2D
struct Collision2D_t26;

#include "codegen/il2cpp-codegen.h"

// System.Void WallObject::.ctor()
extern "C" void WallObject__ctor_m52 (WallObject_t21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WallObject::Awake()
extern "C" void WallObject_Awake_m53 (WallObject_t21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WallObject::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" void WallObject_OnCollisionEnter2D_m54 (WallObject_t21 * __this, Collision2D_t26 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
