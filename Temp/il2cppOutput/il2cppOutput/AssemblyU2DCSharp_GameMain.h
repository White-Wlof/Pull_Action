#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t7;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// GameMain
struct  GameMain_t4  : public MonoBehaviour_t2
{
	// System.Boolean GameMain::isPlayFlag
	bool ___isPlayFlag_2;
	// System.Boolean GameMain::isGameOverFlag
	bool ___isGameOverFlag_3;
	// System.Boolean GameMain::isStopFlag
	bool ___isStopFlag_4;
	// System.Int32 GameMain::count
	int32_t ___count_5;
	// System.Int32 GameMain::desCount
	int32_t ___desCount_6;
	// System.Int32 GameMain::score
	int32_t ___score_7;
	// UnityEngine.GameObject GameMain::generatorObject
	GameObject_t7 * ___generatorObject_8;
};
