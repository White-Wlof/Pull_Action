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

// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_t91;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t85;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t89;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t7;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t48;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Touch.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Fra.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.EventSystems.PointerInputModule::.ctor()
extern "C" void PointerInputModule__ctor_m329 (PointerInputModule_t91 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule::GetPointerData(System.Int32,UnityEngine.EventSystems.PointerEventData&,System.Boolean)
extern "C" bool PointerInputModule_GetPointerData_m330 (PointerInputModule_t91 * __this, int32_t ___id, PointerEventData_t85 ** ___data, bool ___create, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::RemovePointerData(UnityEngine.EventSystems.PointerEventData)
extern "C" void PointerInputModule_RemovePointerData_m331 (PointerInputModule_t91 * __this, PointerEventData_t85 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.PointerInputModule::GetTouchPointerEventData(UnityEngine.Touch,System.Boolean&,System.Boolean&)
extern "C" PointerEventData_t85 * PointerInputModule_GetTouchPointerEventData_m332 (PointerInputModule_t91 * __this, Touch_t289  ___input, bool* ___pressed, bool* ___released, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::CopyFromTo(UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData)
extern "C" void PointerInputModule_CopyFromTo_m333 (PointerInputModule_t91 * __this, PointerEventData_t85 * ___from, PointerEventData_t85 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/FramePressState UnityEngine.EventSystems.PointerInputModule::StateForMouseButton(System.Int32)
extern "C" int32_t PointerInputModule_StateForMouseButton_m334 (Object_t * __this /* static, unused */, int32_t ___buttonId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::GetMousePointerEventData()
extern "C" MouseState_t89 * PointerInputModule_GetMousePointerEventData_m335 (PointerInputModule_t91 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::GetMousePointerEventData(System.Int32)
extern "C" MouseState_t89 * PointerInputModule_GetMousePointerEventData_m336 (PointerInputModule_t91 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.PointerInputModule::GetLastPointerEventData(System.Int32)
extern "C" PointerEventData_t85 * PointerInputModule_GetLastPointerEventData_m337 (PointerInputModule_t91 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule::ShouldStartDrag(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Boolean)
extern "C" bool PointerInputModule_ShouldStartDrag_m338 (Object_t * __this /* static, unused */, Vector2_t3  ___pressPos, Vector2_t3  ___currentPos, float ___threshold, bool ___useDragThreshold, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::ProcessMove(UnityEngine.EventSystems.PointerEventData)
extern "C" void PointerInputModule_ProcessMove_m339 (PointerInputModule_t91 * __this, PointerEventData_t85 * ___pointerEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void PointerInputModule_ProcessDrag_m340 (PointerInputModule_t91 * __this, PointerEventData_t85 * ___pointerEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule::IsPointerOverGameObject(System.Int32)
extern "C" bool PointerInputModule_IsPointerOverGameObject_m341 (PointerInputModule_t91 * __this, int32_t ___pointerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::ClearSelection()
extern "C" void PointerInputModule_ClearSelection_m342 (PointerInputModule_t91 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.PointerInputModule::ToString()
extern "C" String_t* PointerInputModule_ToString_m343 (PointerInputModule_t91 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::DeselectIfSelectionChanged(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
extern "C" void PointerInputModule_DeselectIfSelectionChanged_m344 (PointerInputModule_t91 * __this, GameObject_t7 * ___currentOverGo, BaseEventData_t48 * ___pointerEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
