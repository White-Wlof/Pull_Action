#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<UnityEngine.Font>
struct Action_1_t329;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t483;

#include "UnityEngine_UnityEngine_Object.h"

// UnityEngine.Font
struct  Font_t136  : public Object_t29
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t483 * ___m_FontTextureRebuildCallback_3;
};
struct Font_t136_StaticFields{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t329 * ___textureRebuilt_2;
};
