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

// System.Text.Encoding/ForwardingDecoder
struct ForwardingDecoder_t1526;
// System.Text.Encoding
struct Encoding_t780;
// System.Byte[]
struct ByteU5BU5D_t613;
// System.Char[]
struct CharU5BU5D_t184;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.Encoding/ForwardingDecoder::.ctor(System.Text.Encoding)
extern "C" void ForwardingDecoder__ctor_m9180 (ForwardingDecoder_t1526 * __this, Encoding_t780 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding/ForwardingDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t ForwardingDecoder_GetChars_m9181 (ForwardingDecoder_t1526 * __this, ByteU5BU5D_t613* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t184* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
