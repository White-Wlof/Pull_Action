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

// UnityEngine.AnimationCurve
struct AnimationCurve_t471;
struct AnimationCurve_t471_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t562;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m2662 (AnimationCurve_t471 * __this, KeyframeU5BU5D_t562* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2663 (AnimationCurve_t471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m2664 (AnimationCurve_t471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m2665 (AnimationCurve_t471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m2666 (AnimationCurve_t471 * __this, KeyframeU5BU5D_t562* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t471_marshal(const AnimationCurve_t471& unmarshaled, AnimationCurve_t471_marshaled& marshaled);
extern "C" void AnimationCurve_t471_marshal_back(const AnimationCurve_t471_marshaled& marshaled, AnimationCurve_t471& unmarshaled);
extern "C" void AnimationCurve_t471_marshal_cleanup(AnimationCurve_t471_marshaled& marshaled);
