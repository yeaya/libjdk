#include <jdk/internal/net/http/common/ImmutableSSLSession.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/security/Principal.h>
#include <java/security/cert/Certificate.h>
#include <javax/net/ssl/SSLSession.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <jcpp.h>

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Principal = ::java::security::Principal;
using $SSLSession = ::javax::net::ssl::SSLSession;
using $SSLSessionContext = ::javax::net::ssl::SSLSessionContext;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

$FieldInfo _ImmutableSSLSession_FieldInfo_[] = {
	{"delegate", "Ljavax/net/ssl/SSLSession;", nullptr, $PRIVATE | $FINAL, $field(ImmutableSSLSession, delegate)},
	{}
};

$MethodInfo _ImmutableSSLSession_MethodInfo_[] = {
	{"<init>", "(Ljavax/net/ssl/SSLSession;)V", nullptr, 0, $method(ImmutableSSLSession, init$, void, $SSLSession*)},
	{"getApplicationBufferSize", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableSSLSession, getApplicationBufferSize, int32_t)},
	{"getCipherSuite", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImmutableSSLSession, getCipherSuite, $String*)},
	{"getCreationTime", "()J", nullptr, $PUBLIC, $virtualMethod(ImmutableSSLSession, getCreationTime, int64_t)},
	{"getId", "()[B", nullptr, $PUBLIC, $virtualMethod(ImmutableSSLSession, getId, $bytes*)},
	{"getLastAccessedTime", "()J", nullptr, $PUBLIC, $virtualMethod(ImmutableSSLSession, getLastAccessedTime, int64_t)},
	{"getLocalCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC, $virtualMethod(ImmutableSSLSession, getLocalCertificates, $CertificateArray*)},
	{"getLocalPrincipal", "()Ljava/security/Principal;", nullptr, $PUBLIC, $virtualMethod(ImmutableSSLSession, getLocalPrincipal, $Principal*)},
	{"getPacketBufferSize", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableSSLSession, getPacketBufferSize, int32_t)},
	{"getPeerCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC, $virtualMethod(ImmutableSSLSession, getPeerCertificates, $CertificateArray*), "javax.net.ssl.SSLPeerUnverifiedException"},
	{"getPeerHost", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImmutableSSLSession, getPeerHost, $String*)},
	{"getPeerPort", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableSSLSession, getPeerPort, int32_t)},
	{"getPeerPrincipal", "()Ljava/security/Principal;", nullptr, $PUBLIC, $virtualMethod(ImmutableSSLSession, getPeerPrincipal, $Principal*), "javax.net.ssl.SSLPeerUnverifiedException"},
	{"getProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImmutableSSLSession, getProtocol, $String*)},
	{"getSessionContext", "()Ljavax/net/ssl/SSLSessionContext;", nullptr, $PUBLIC, $virtualMethod(ImmutableSSLSession, getSessionContext, $SSLSessionContext*)},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ImmutableSSLSession, getValue, $Object*, $String*)},
	{"getValueNames", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImmutableSSLSession, getValueNames, $StringArray*)},
	{"invalidate", "()V", nullptr, $PUBLIC, $virtualMethod(ImmutableSSLSession, invalidate, void)},
	{"isValid", "()Z", nullptr, $PUBLIC, $virtualMethod(ImmutableSSLSession, isValid, bool)},
	{"putValue", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ImmutableSSLSession, putValue, void, $String*, Object$*)},
	{"removeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ImmutableSSLSession, removeValue, void, $String*)},
	{}
};

$ClassInfo _ImmutableSSLSession_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.net.http.common.ImmutableSSLSession",
	"java.lang.Object",
	"javax.net.ssl.SSLSession",
	_ImmutableSSLSession_FieldInfo_,
	_ImmutableSSLSession_MethodInfo_
};

$Object* allocate$ImmutableSSLSession($Class* clazz) {
	return $of($alloc(ImmutableSSLSession));
}

void ImmutableSSLSession::init$($SSLSession* session) {
	$set(this, delegate, session);
}

$bytes* ImmutableSSLSession::getId() {
	return $nc(this->delegate)->getId();
}

$SSLSessionContext* ImmutableSSLSession::getSessionContext() {
	return $nc(this->delegate)->getSessionContext();
}

int64_t ImmutableSSLSession::getCreationTime() {
	return $nc(this->delegate)->getCreationTime();
}

int64_t ImmutableSSLSession::getLastAccessedTime() {
	return $nc(this->delegate)->getLastAccessedTime();
}

void ImmutableSSLSession::invalidate() {
	$throwNew($UnsupportedOperationException, "session is not mutable"_s);
}

bool ImmutableSSLSession::isValid() {
	return $nc(this->delegate)->isValid();
}

void ImmutableSSLSession::putValue($String* name, Object$* value) {
	$throwNew($UnsupportedOperationException, "session is not mutable"_s);
}

$Object* ImmutableSSLSession::getValue($String* name) {
	return $of($nc(this->delegate)->getValue(name));
}

void ImmutableSSLSession::removeValue($String* name) {
	$throwNew($UnsupportedOperationException, "session is not mutable"_s);
}

$StringArray* ImmutableSSLSession::getValueNames() {
	return $nc(this->delegate)->getValueNames();
}

$CertificateArray* ImmutableSSLSession::getPeerCertificates() {
	return $nc(this->delegate)->getPeerCertificates();
}

$CertificateArray* ImmutableSSLSession::getLocalCertificates() {
	return $nc(this->delegate)->getLocalCertificates();
}

$Principal* ImmutableSSLSession::getPeerPrincipal() {
	return $nc(this->delegate)->getPeerPrincipal();
}

$Principal* ImmutableSSLSession::getLocalPrincipal() {
	return $nc(this->delegate)->getLocalPrincipal();
}

$String* ImmutableSSLSession::getCipherSuite() {
	return $nc(this->delegate)->getCipherSuite();
}

$String* ImmutableSSLSession::getProtocol() {
	return $nc(this->delegate)->getProtocol();
}

$String* ImmutableSSLSession::getPeerHost() {
	return $nc(this->delegate)->getPeerHost();
}

int32_t ImmutableSSLSession::getPeerPort() {
	return $nc(this->delegate)->getPeerPort();
}

int32_t ImmutableSSLSession::getPacketBufferSize() {
	return $nc(this->delegate)->getPacketBufferSize();
}

int32_t ImmutableSSLSession::getApplicationBufferSize() {
	return $nc(this->delegate)->getApplicationBufferSize();
}

ImmutableSSLSession::ImmutableSSLSession() {
}

$Class* ImmutableSSLSession::load$($String* name, bool initialize) {
	$loadClass(ImmutableSSLSession, name, initialize, &_ImmutableSSLSession_ClassInfo_, allocate$ImmutableSSLSession);
	return class$;
}

$Class* ImmutableSSLSession::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk