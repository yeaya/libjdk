#include <javax/naming/ldap/StartTlsResponse.h>

#include <javax/net/ssl/HostnameVerifier.h>
#include <javax/net/ssl/SSLSession.h>
#include <javax/net/ssl/SSLSocketFactory.h>
#include <jcpp.h>

#undef OID

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HostnameVerifier = ::javax::net::ssl::HostnameVerifier;
using $SSLSession = ::javax::net::ssl::SSLSession;
using $SSLSocketFactory = ::javax::net::ssl::SSLSocketFactory;

namespace javax {
	namespace naming {
		namespace ldap {

$FieldInfo _StartTlsResponse_FieldInfo_[] = {
	{"OID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StartTlsResponse, OID)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StartTlsResponse, serialVersionUID)},
	{}
};

$MethodInfo _StartTlsResponse_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(StartTlsResponse, init$, void)},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartTlsResponse, close, void), "java.io.IOException"},
	{"getEncodedValue", "()[B", nullptr, $PUBLIC, $virtualMethod(StartTlsResponse, getEncodedValue, $bytes*)},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StartTlsResponse, getID, $String*)},
	{"negotiate", "()Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartTlsResponse, negotiate, $SSLSession*), "java.io.IOException"},
	{"negotiate", "(Ljavax/net/ssl/SSLSocketFactory;)Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartTlsResponse, negotiate, $SSLSession*, $SSLSocketFactory*), "java.io.IOException"},
	{"setEnabledCipherSuites", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartTlsResponse, setEnabledCipherSuites, void, $StringArray*)},
	{"setHostnameVerifier", "(Ljavax/net/ssl/HostnameVerifier;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartTlsResponse, setHostnameVerifier, void, $HostnameVerifier*)},
	{}
};

$ClassInfo _StartTlsResponse_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.naming.ldap.StartTlsResponse",
	"java.lang.Object",
	"javax.naming.ldap.ExtendedResponse",
	_StartTlsResponse_FieldInfo_,
	_StartTlsResponse_MethodInfo_
};

$Object* allocate$StartTlsResponse($Class* clazz) {
	return $of($alloc(StartTlsResponse));
}

$String* StartTlsResponse::OID = nullptr;

void StartTlsResponse::init$() {
}

$String* StartTlsResponse::getID() {
	return StartTlsResponse::OID;
}

$bytes* StartTlsResponse::getEncodedValue() {
	return nullptr;
}

StartTlsResponse::StartTlsResponse() {
}

void clinit$StartTlsResponse($Class* class$) {
	$assignStatic(StartTlsResponse::OID, "1.3.6.1.4.1.1466.20037"_s);
}

$Class* StartTlsResponse::load$($String* name, bool initialize) {
	$loadClass(StartTlsResponse, name, initialize, &_StartTlsResponse_ClassInfo_, clinit$StartTlsResponse, allocate$StartTlsResponse);
	return class$;
}

$Class* StartTlsResponse::class$ = nullptr;

		} // ldap
	} // naming
} // javax