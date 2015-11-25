#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t724;
// System.Text.Encoding
struct Encoding_t780;
// System.Byte[]
struct ByteU5BU5D_t613;
// System.Text.Decoder
struct Decoder_t1149;
// System.Char[]
struct CharU5BU5D_t184;

#include "mscorlib_System_Object.h"

// System.IO.BinaryReader
struct  BinaryReader_t1148  : public Object_t
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t724 * ___m_stream_0;
	// System.Text.Encoding System.IO.BinaryReader::m_encoding
	Encoding_t780 * ___m_encoding_1;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_t613* ___m_buffer_2;
	// System.Text.Decoder System.IO.BinaryReader::decoder
	Decoder_t1149 * ___decoder_3;
	// System.Char[] System.IO.BinaryReader::charBuffer
	CharU5BU5D_t184* ___charBuffer_4;
	// System.Boolean System.IO.BinaryReader::m_disposed
	bool ___m_disposed_5;
};
