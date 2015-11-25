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

// GameMain
struct GameMain_t4;
// System.Collections.IEnumerator
struct IEnumerator_t24;

#include "codegen/il2cpp-codegen.h"

// System.Void GameMain::.ctor()
extern "C" void GameMain__ctor_m10 (GameMain_t4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameMain::Awake()
extern "C" void GameMain_Awake_m11 (GameMain_t4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameMain::Start()
extern "C" void GameMain_Start_m12 (GameMain_t4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameMain::startTime()
extern "C" void GameMain_startTime_m13 (GameMain_t4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameMain::startTimer()
extern "C" Object_t * GameMain_startTimer_m14 (GameMain_t4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameMain::setIsPlayFlag(System.Boolean)
extern "C" void GameMain_setIsPlayFlag_m15 (GameMain_t4 * __this, bool ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameMain::getIsPlayFlag()
extern "C" bool GameMain_getIsPlayFlag_m16 (GameMain_t4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameMain::setIsGameOverFlag(System.Boolean)
extern "C" void GameMain_setIsGameOverFlag_m17 (GameMain_t4 * __this, bool ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameMain::getIsGameOverFlag()
extern "C" bool GameMain_getIsGameOverFlag_m18 (GameMain_t4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameMain::setIsStopFlag(System.Boolean)
extern "C" void GameMain_setIsStopFlag_m19 (GameMain_t4 * __this, bool ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameMain::getIsStopFlag()
extern "C" bool GameMain_getIsStopFlag_m20 (GameMain_t4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameMain::addScore(System.Int32)
extern "C" void GameMain_addScore_m21 (GameMain_t4 * __this, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameMain::getScore()
extern "C" int32_t GameMain_getScore_m22 (GameMain_t4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
