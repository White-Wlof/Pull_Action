#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t5;
// UnityEngine.GameObject
struct GameObject_t7;
// GameMain
struct GameMain_t4;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// PlayerObject
struct  PlayerObject_t13  : public MonoBehaviour_t2
{
	// System.Single PlayerObject::yPosition
	float ___yPosition_2;
	// UnityEngine.Vector3 PlayerObject::startPos
	Vector3_t12  ___startPos_3;
	// UnityEngine.Vector3 PlayerObject::movePos
	Vector3_t12  ___movePos_4;
	// UnityEngine.Vector3 PlayerObject::endPos
	Vector3_t12  ___endPos_5;
	// UnityEngine.Vector2 PlayerObject::force
	Vector2_t3  ___force_6;
	// UnityEngine.Vector2 PlayerObject::gravity
	Vector2_t3  ___gravity_7;
	// UnityEngine.Vector2 PlayerObject::moveForce
	Vector2_t3  ___moveForce_8;
	// UnityEngine.Vector2 PlayerObject::forceStorage
	Vector2_t3  ___forceStorage_9;
	// UnityEngine.Rigidbody2D PlayerObject::Rig
	Rigidbody2D_t5 * ___Rig_10;
	// UnityEngine.GameObject PlayerObject::arrayObject
	GameObject_t7 * ___arrayObject_11;
	// GameMain PlayerObject::gm
	GameMain_t4 * ___gm_12;
};
