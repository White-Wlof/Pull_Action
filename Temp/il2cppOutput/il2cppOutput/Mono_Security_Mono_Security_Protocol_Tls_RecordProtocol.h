﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.ManualResetEvent
struct ManualResetEvent_t720;
// System.IO.Stream
struct Stream_t721;
// Mono.Security.Protocol.Tls.Context
struct Context_t697;

#include "mscorlib_System_Object.h"

// Mono.Security.Protocol.Tls.RecordProtocol
struct  RecordProtocol_t703  : public Object_t
{
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol::innerStream
	Stream_t721 * ___innerStream_1;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::context
	Context_t697 * ___context_2;
};
struct RecordProtocol_t703_StaticFields{
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol::record_processing
	ManualResetEvent_t720 * ___record_processing_0;
};
