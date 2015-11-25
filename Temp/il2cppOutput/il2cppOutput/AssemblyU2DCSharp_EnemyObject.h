#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameMain
struct GameMain_t4;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t5;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// EnemyObject
struct  EnemyObject_t1  : public MonoBehaviour_t2
{
	// UnityEngine.Vector2 EnemyObject::force
	Vector2_t3  ___force_2;
	// UnityEngine.Vector2 EnemyObject::forceStorage
	Vector2_t3  ___forceStorage_3;
	// System.Single EnemyObject::yPosition
	float ___yPosition_4;
	// GameMain EnemyObject::gm
	GameMain_t4 * ___gm_5;
	// UnityEngine.Rigidbody2D EnemyObject::Rig
	Rigidbody2D_t5 * ___Rig_6;
};
