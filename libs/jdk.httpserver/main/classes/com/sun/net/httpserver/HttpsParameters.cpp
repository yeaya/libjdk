#include <com/sun/net/httpserver/HttpsParameters.h>

#include <com/sun/net/httpserver/HttpsConfigurator.h>
#include <java/net/InetSocketAddress.h>
#include <javax/net/ssl/SSLParameters.h>
#include <jcpp.h>

using $HttpsConfigurator = ::com::sun::net::httpserver::HttpsConfigurator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SSLParameters = ::javax::net::ssl::SSLParameters;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

$FieldInfo _HttpsParameters_FieldInfo_[] = {
	{"cipherSuites", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(HttpsParameters, cipherSuites)},
	{"protocols", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(HttpsParameters, protocols)},
	{"wantClientAuth", "Z", nullptr, $PRIVATE, $field(HttpsParameters, wantClientAuth)},
	{"needClientAuth", "Z", nullptr, $PRIVATE, $field(HttpsParameters, needClientAuth)},
	{}
};

$MethodInfo _HttpsParameters_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(HttpsParameters::*)()>(&HttpsParameters::init$))},
	{"getCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getClientAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC | $ABSTRACT},
	{"getHttpsConfigurator", "()Lcom/sun/net/httpserver/HttpsConfigurator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNeedClientAuth", "()Z", nullptr, $PUBLIC},
	{"getProtocols", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getWantClientAuth", "()Z", nullptr, $PUBLIC},
	{"setCipherSuites", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setNeedClientAuth", "(Z)V", nullptr, $PUBLIC},
	{"setProtocols", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setSSLParameters", "(Ljavax/net/ssl/SSLParameters;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setWantClientAuth", "(Z)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HttpsParameters_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.net.httpserver.HttpsParameters",
	"java.lang.Object",
	nullptr,
	_HttpsParameters_FieldInfo_,
	_HttpsParameters_MethodInfo_
};

$Object* allocate$HttpsParameters($Class* clazz) {
	return $of($alloc(HttpsParameters));
}

void HttpsParameters::init$() {
}

$StringArray* HttpsParameters::getCipherSuites() {
	return this->cipherSuites != nullptr ? $cast($StringArray, $nc(this->cipherSuites)->clone()) : ($StringArray*)nullptr;
}

void HttpsParameters::setCipherSuites($StringArray* cipherSuites) {
	$set(this, cipherSuites, cipherSuites != nullptr ? $cast($StringArray, $nc(cipherSuites)->clone()) : ($StringArray*)nullptr);
}

$StringArray* HttpsParameters::getProtocols() {
	return this->protocols != nullptr ? $cast($StringArray, $nc(this->protocols)->clone()) : ($StringArray*)nullptr;
}

void HttpsParameters::setProtocols($StringArray* protocols) {
	$set(this, protocols, protocols != nullptr ? $cast($StringArray, $nc(protocols)->clone()) : ($StringArray*)nullptr);
}

bool HttpsParameters::getWantClientAuth() {
	return this->wantClientAuth;
}

void HttpsParameters::setWantClientAuth(bool wantClientAuth) {
	this->wantClientAuth = wantClientAuth;
}

bool HttpsParameters::getNeedClientAuth() {
	return this->needClientAuth;
}

void HttpsParameters::setNeedClientAuth(bool needClientAuth) {
	this->needClientAuth = needClientAuth;
}

HttpsParameters::HttpsParameters() {
}

$Class* HttpsParameters::load$($String* name, bool initialize) {
	$loadClass(HttpsParameters, name, initialize, &_HttpsParameters_ClassInfo_, allocate$HttpsParameters);
	return class$;
}

$Class* HttpsParameters::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com