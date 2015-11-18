﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Graphic
struct Graphic_t135;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t223;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t222;

#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"
#include "UnityEngine_UI_UnityEngine_UI_Toggle_ToggleTransition.h"

// UnityEngine.UI.Toggle
struct  Toggle_t120  : public Selectable_t109
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_16;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_t135 * ___graphic_17;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t223 * ___m_Group_18;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t222 * ___onValueChanged_19;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_20;
};
