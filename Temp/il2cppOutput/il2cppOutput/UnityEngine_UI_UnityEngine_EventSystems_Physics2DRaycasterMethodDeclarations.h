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

// UnityEngine.EventSystems.Physics2DRaycaster
struct Physics2DRaycaster_t92;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t81;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t82;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.EventSystems.Physics2DRaycaster::.ctor()
extern "C" void Physics2DRaycaster__ctor_m383 (Physics2DRaycaster_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.Physics2DRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" void Physics2DRaycaster_Raycast_m384 (Physics2DRaycaster_t92 * __this, PointerEventData_t81 * ___eventData, List_1_t82 * ___resultAppendList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
