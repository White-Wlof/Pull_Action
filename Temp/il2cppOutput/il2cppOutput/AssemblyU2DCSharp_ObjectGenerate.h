#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t10;
// System.String[]
struct StringU5BU5D_t11;
// UnityEngine.GameObject
struct GameObject_t7;
// GameMain
struct GameMain_t4;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// ObjectGenerate
struct  ObjectGenerate_t9  : public MonoBehaviour_t2
{
	// System.Single ObjectGenerate::waitTime
	float ___waitTime_2;
	// System.Int32 ObjectGenerate::objectID
	int32_t ___objectID_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectGenerate::objectList
	List_1_t10 * ___objectList_4;
	// System.String[] ObjectGenerate::objectNameArray
	StringU5BU5D_t11* ___objectNameArray_5;
	// UnityEngine.Vector3 ObjectGenerate::startPosition
	Vector3_t12  ___startPosition_6;
	// UnityEngine.Vector3 ObjectGenerate::startObjectPosition
	Vector3_t12  ___startObjectPosition_7;
	// UnityEngine.GameObject ObjectGenerate::enemys
	GameObject_t7 * ___enemys_8;
	// GameMain ObjectGenerate::gm
	GameMain_t4 * ___gm_9;
};
