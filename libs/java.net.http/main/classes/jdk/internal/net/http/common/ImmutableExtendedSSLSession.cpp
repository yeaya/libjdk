#include <jdk/internal/net/http/common/ImmutableExtendedSSLSession.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/security/Principal.h>
#include <java/security/cert/Certificate.h>
#include <java/util/List.h>
#include <javax/net/ssl/ExtendedSSLSession.h>
#include <javax/net/ssl/SSLSession.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <jcpp.h>

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Principal = ::java::security::Principal;
using $List = ::java::util::List;
using $ExtendedSSLSession = ::javax::net::ssl::ExtendedSSLSession;
using $SSLSessionContext = ::javax::net::ssl::SSLSessionContext;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

$FieldInfo _ImmutableExtendedSSLSession_FieldInfo_[] = {
	{"delegate", "Ljavax/net/ssl/ExtendedSSLSession;", nullptr, $PRIVATE | $FINAL, $field(ImmutableExtendedSSLSession, delegate)},
	{}
};

$MethodInfo _ImmutableExtendedSSLSession_MethodInfo_[] = {
	{"<init>", "(Ljavax/net/ssl/ExtendedSSLSession;)V", nullptr, 0, $method(ImmutableExtendedSSLSession, init$, void, $ExtendedSSLSession*)},
	{"getApplicationBufferSize", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, getApplicationBufferSize, int32_t)},
	{"getCipherSuite", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, getCipherSuite, $String*)},
	{"getCreationTime", "()J", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, getCreationTime, int64_t)},
	{"getId", "()[B", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, getId, $bytes*)},
	{"getLastAccessedTime", "()J", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, getLastAccessedTime, int64_t)},
	{"getLocalCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, getLocalCertificates, $CertificateArray*)},
	{"getLocalPrincipal", "()Ljava/security/Principal;", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, getLocalPrincipal, $Principal*)},
	{"getLocalSupportedSignatureAlgorithms", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, getLocalSupportedSignatureAlgorithms, $StringArray*)},
	{"getPacketBufferSize", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, getPacketBufferSize, int32_t)},
	{"getPeerCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, getPeerCertificates, $CertificateArray*), "javax.net.ssl.SSLPeerUnverifiedException"},
	{"getPeerHost", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, getPeerHost, $String*)},
	{"getPeerPort", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, getPeerPort, int32_t)},
	{"getPeerPrincipal", "()Ljava/security/Principal;", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, getPeerPrincipal, $Principal*), "javax.net.ssl.SSLPeerUnverifiedException"},
	{"getPeerSupportedSignatureAlgorithms", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, getPeerSupportedSignatureAlgorithms, $StringArray*)},
	{"getProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, getProtocol, $String*)},
	{"getRequestedServerNames", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/net/ssl/SNIServerName;>;", $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, getRequestedServerNames, $List*)},
	{"getSessionContext", "()Ljavax/net/ssl/SSLSessionContext;", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, getSessionContext, $SSLSessionContext*)},
	{"getStatusResponses", "()Ljava/util/List;", "()Ljava/util/List<[B>;", $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, getStatusResponses, $List*)},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, getValue, $Object*, $String*)},
	{"getValueNames", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, getValueNames, $StringArray*)},
	{"invalidate", "()V", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, invalidate, void)},
	{"isValid", "()Z", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, isValid, bool)},
	{"putValue", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, putValue, void, $String*, Object$*)},
	{"removeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ImmutableExtendedSSLSession, removeValue, void, $String*)},
	{}
};

$ClassInfo _ImmutableExtendedSSLSession_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.net.http.common.ImmutableExtendedSSLSession",
	"javax.net.ssl.ExtendedSSLSession",
	nullptr,
	_ImmutableExtendedSSLSession_FieldInfo_,
	_ImmutableExtendedSSLSession_MethodInfo_
};

$Object* allocate$ImmutableExtendedSSLSession($Class* clazz) {
	return $of($alloc(ImmutableExtendedSSLSession));
}

void ImmutableExtendedSSLSession::init$($ExtendedSSLSession* session) {
	$ExtendedSSLSession::init$();
	$set(this, delegate, session);
}

$bytes* ImmutableExtendedSSLSession::getId() {
	return $nc(this->delegate)->getId();
}

$SSLSessionContext* ImmutableExtendedSSLSession::getSessionContext() {
	return $nc(this->delegate)->getSessionContext();
}

int64_t ImmutableExtendedSSLSession::getCreationTime() {
	return $nc(this->delegate)->getCreationTime();
}

int64_t ImmutableExtendedSSLSession::getLastAccessedTime() {
	return $nc(this->delegate)->getLastAccessedTime();
}

void ImmutableExtendedSSLSession::invalidate() {
	$throwNew($UnsupportedOperationException, "session is not mutable"_s);
}

bool ImmutableExtendedSSLSession::isValid() {
	return $nc(this->delegate)->isValid();
}

void ImmutableExtendedSSLSession::putValue($String* name, Object$* value) {
	$throwNew($UnsupportedOperationException, "session is not mutable"_s);
}

$Object* ImmutableExtendedSSLSession::getValue($String* name) {
	return $of($nc(this->delegate)->getValue(name));
}

void ImmutableExtendedSSLSession::removeValue($String* name) {
	$throwNew($UnsupportedOperationException, "session is not mutable"_s);
}

$StringArray* ImmutableExtendedSSLSession::getValueNames() {
	return $nc(this->delegate)->getValueNames();
}

$CertificateArray* ImmutableExtendedSSLSession::getPeerCertificates() {
	return $nc(this->delegate)->getPeerCertificates();
}

$CertificateArray* ImmutableExtendedSSLSession::getLocalCertificates() {
	return $nc(this->delegate)->getLocalCertificates();
}

$Principal* ImmutableExtendedSSLSession::getPeerPrincipal() {
	return $nc(this->delegate)->getPeerPrincipal();
}

$Principal* ImmutableExtendedSSLSession::getLocalPrincipal() {
	return $nc(this->delegate)->getLocalPrincipal();
}

$String* ImmutableExtendedSSLSession::getCipherSuite() {
	return $nc(this->delegate)->getCipherSuite();
}

$String* ImmutableExtendedSSLSession::getProtocol() {
	return $nc(this->delegate)->getProtocol();
}

$String* ImmutableExtendedSSLSession::getPeerHost() {
	return $nc(this->delegate)->getPeerHost();
}

int32_t ImmutableExtendedSSLSession::getPeerPort() {
	return $nc(this->delegate)->getPeerPort();
}

int32_t ImmutableExtendedSSLSession::getPacketBufferSize() {
	return $nc(this->delegate)->getPacketBufferSize();
}

int32_t ImmutableExtendedSSLSession::getApplicationBufferSize() {
	return $nc(this->delegate)->getApplicationBufferSize();
}

$StringArray* ImmutableExtendedSSLSession::getLocalSupportedSignatureAlgorithms() {
	return $nc(this->delegate)->getLocalSupportedSignatureAlgorithms();
}

$StringArray* ImmutableExtendedSSLSession::getPeerSupportedSignatureAlgorithms() {
	return $nc(this->delegate)->getPeerSupportedSignatureAlgorithms();
}

$List* ImmutableExtendedSSLSession::getRequestedServerNames() {
	return $nc(this->delegate)->getRequestedServerNames();
}

$List* ImmutableExtendedSSLSession::getStatusResponses() {
	return $nc(this->delegate)->getStatusResponses();
}

ImmutableExtendedSSLSession::ImmutableExtendedSSLSession() {
}

$Class* ImmutableExtendedSSLSession::load$($String* name, bool initialize) {
	$loadClass(ImmutableExtendedSSLSession, name, initialize, &_ImmutableExtendedSSLSession_ClassInfo_, allocate$ImmutableExtendedSSLSession);
	return class$;
}

$Class* ImmutableExtendedSSLSession::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk