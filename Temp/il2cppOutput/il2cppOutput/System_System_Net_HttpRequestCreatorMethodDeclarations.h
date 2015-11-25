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

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t851;
// System.Net.WebRequest
struct WebRequest_t810;
// System.Uri
struct Uri_t805;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m4308 (HttpRequestCreator_t851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t810 * HttpRequestCreator_Create_m4309 (HttpRequestCreator_t851 * __this, Uri_t805 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
