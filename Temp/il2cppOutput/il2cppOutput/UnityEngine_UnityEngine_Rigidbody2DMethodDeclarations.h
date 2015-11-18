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

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t5;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_ForceMode2D.h"

// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C" Vector2_t3  Rigidbody2D_get_velocity_m73 (Rigidbody2D_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C" void Rigidbody2D_set_velocity_m70 (Rigidbody2D_t5 * __this, Vector2_t3  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_get_velocity_m2618 (Rigidbody2D_t5 * __this, Vector2_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_set_velocity_m2619 (Rigidbody2D_t5 * __this, Vector2_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C" void Rigidbody2D_AddForce_m64 (Rigidbody2D_t5 * __this, Vector2_t3  ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
extern "C" void Rigidbody2D_INTERNAL_CALL_AddForce_m2620 (Object_t * __this /* static, unused */, Rigidbody2D_t5 * ___self, Vector2_t3 * ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
