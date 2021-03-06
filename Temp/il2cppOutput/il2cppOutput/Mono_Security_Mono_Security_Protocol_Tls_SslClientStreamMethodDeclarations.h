﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t704;
// System.IO.Stream
struct Stream_t724;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t744;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t743;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t736;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t720;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t721;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t737;
// System.IAsyncResult
struct IAsyncResult_t173;
// System.AsyncCallback
struct AsyncCallback_t174;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t734;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t668;
// System.Int32[]
struct Int32U5BU5D_t376;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t762;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean)
extern "C" void SslClientStream__ctor_m3810 (SslClientStream_t704 * __this, Stream_t724 * ___stream, String_t* ___targetHost, bool ___ownsStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void SslClientStream__ctor_m3811 (SslClientStream_t704 * __this, Stream_t724 * ___stream, String_t* ___targetHost, X509Certificate_t744 * ___clientCertificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void SslClientStream__ctor_m3812 (SslClientStream_t704 * __this, Stream_t724 * ___stream, String_t* ___targetHost, X509CertificateCollection_t743 * ___clientCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C" void SslClientStream__ctor_m3813 (SslClientStream_t704 * __this, Stream_t724 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void SslClientStream__ctor_m3814 (SslClientStream_t704 * __this, Stream_t724 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, X509CertificateCollection_t743 * ___clientCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C" void SslClientStream_add_ServerCertValidation_m3815 (SslClientStream_t704 * __this, CertificateValidationCallback_t736 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C" void SslClientStream_remove_ServerCertValidation_m3816 (SslClientStream_t704 * __this, CertificateValidationCallback_t736 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C" void SslClientStream_add_ClientCertSelection_m3817 (SslClientStream_t704 * __this, CertificateSelectionCallback_t720 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C" void SslClientStream_remove_ClientCertSelection_m3818 (SslClientStream_t704 * __this, CertificateSelectionCallback_t720 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C" void SslClientStream_add_PrivateKeySelection_m3819 (SslClientStream_t704 * __this, PrivateKeySelectionCallback_t721 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C" void SslClientStream_remove_PrivateKeySelection_m3820 (SslClientStream_t704 * __this, PrivateKeySelectionCallback_t721 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
extern "C" void SslClientStream_add_ServerCertValidation2_m3821 (SslClientStream_t704 * __this, CertificateValidationCallback2_t737 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
extern "C" void SslClientStream_remove_ServerCertValidation2_m3822 (SslClientStream_t704 * __this, CertificateValidationCallback2_t737 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.SslClientStream::get_InputBuffer()
extern "C" Stream_t724 * SslClientStream_get_InputBuffer_m3823 (SslClientStream_t704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertificates()
extern "C" X509CertificateCollection_t743 * SslClientStream_get_ClientCertificates_m3824 (SslClientStream_t704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::get_SelectedClientCertificate()
extern "C" X509Certificate_t744 * SslClientStream_get_SelectedClientCertificate_m3825 (SslClientStream_t704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslClientStream::get_ServerCertValidationDelegate()
extern "C" CertificateValidationCallback_t736 * SslClientStream_get_ServerCertValidationDelegate_m3826 (SslClientStream_t704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ServerCertValidationDelegate(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C" void SslClientStream_set_ServerCertValidationDelegate_m3827 (SslClientStream_t704 * __this, CertificateValidationCallback_t736 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertSelectionDelegate()
extern "C" CertificateSelectionCallback_t720 * SslClientStream_get_ClientCertSelectionDelegate_m3828 (SslClientStream_t704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ClientCertSelectionDelegate(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C" void SslClientStream_set_ClientCertSelectionDelegate_m3829 (SslClientStream_t704 * __this, CertificateSelectionCallback_t720 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_PrivateKeyCertSelectionDelegate()
extern "C" PrivateKeySelectionCallback_t721 * SslClientStream_get_PrivateKeyCertSelectionDelegate_m3830 (SslClientStream_t704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_PrivateKeyCertSelectionDelegate(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C" void SslClientStream_set_PrivateKeyCertSelectionDelegate_m3831 (SslClientStream_t704 * __this, PrivateKeySelectionCallback_t721 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Finalize()
extern "C" void SslClientStream_Finalize_m3832 (SslClientStream_t704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Dispose(System.Boolean)
extern "C" void SslClientStream_Dispose_m3833 (SslClientStream_t704 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslClientStream::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
extern "C" Object_t * SslClientStream_OnBeginNegotiateHandshake_m3834 (SslClientStream_t704 * __this, AsyncCallback_t174 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::SafeReceiveRecord(System.IO.Stream)
extern "C" void SslClientStream_SafeReceiveRecord_m3835 (SslClientStream_t704 * __this, Stream_t724 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::OnNegotiateHandshakeCallback(System.IAsyncResult)
extern "C" void SslClientStream_OnNegotiateHandshakeCallback_m3836 (SslClientStream_t704 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t744 * SslClientStream_OnLocalCertificateSelection_m3837 (SslClientStream_t704 * __this, X509CertificateCollection_t743 * ___clientCertificates, X509Certificate_t744 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t743 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::get_HaveRemoteValidation2Callback()
extern "C" bool SslClientStream_get_HaveRemoteValidation2Callback_m3838 (SslClientStream_t704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t734 * SslClientStream_OnRemoteCertificateValidation2_m3839 (SslClientStream_t704 * __this, X509CertificateCollection_t668 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool SslClientStream_OnRemoteCertificateValidation_m3840 (SslClientStream_t704 * __this, X509Certificate_t744 * ___certificate, Int32U5BU5D_t376* ___errors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool SslClientStream_RaiseServerCertificateValidation_m3841 (SslClientStream_t704 * __this, X509Certificate_t744 * ___certificate, Int32U5BU5D_t376* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t734 * SslClientStream_RaiseServerCertificateValidation2_m3842 (SslClientStream_t704 * __this, X509CertificateCollection_t668 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::RaiseClientCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t744 * SslClientStream_RaiseClientCertificateSelection_m3843 (SslClientStream_t704 * __this, X509CertificateCollection_t743 * ___clientCertificates, X509Certificate_t744 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t743 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t762 * SslClientStream_OnLocalPrivateKeySelection_m3844 (SslClientStream_t704 * __this, X509Certificate_t744 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::RaisePrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t762 * SslClientStream_RaisePrivateKeySelection_m3845 (SslClientStream_t704 * __this, X509Certificate_t744 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
