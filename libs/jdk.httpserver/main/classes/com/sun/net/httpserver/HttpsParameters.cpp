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

void HttpsParameters::init$() {
}

$StringArray* HttpsParameters::getCipherSuites() {
	return this->cipherSuites != nullptr ? $cast($StringArray, this->cipherSuites->clone()) : ($StringArray*)nullptr;
}

void HttpsParameters::setCipherSuites($StringArray* cipherSuites) {
	$set(this, cipherSuites, cipherSuites != nullptr ? $cast($StringArray, cipherSuites->clone()) : ($StringArray*)nullptr);
}

$StringArray* HttpsParameters::getProtocols() {
	return this->protocols != nullptr ? $cast($StringArray, this->protocols->clone()) : ($StringArray*)nullptr;
}

void HttpsParameters::setProtocols($StringArray* protocols) {
	$set(this, protocols, protocols != nullptr ? $cast($StringArray, protocols->clone()) : ($StringArray*)nullptr);
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
	$FieldInfo fieldInfos$$[] = {
		{"cipherSuites", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(HttpsParameters, cipherSuites)},
		{"protocols", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(HttpsParameters, protocols)},
		{"wantClientAuth", "Z", nullptr, $PRIVATE, $field(HttpsParameters, wantClientAuth)},
		{"needClientAuth", "Z", nullptr, $PRIVATE, $field(HttpsParameters, needClientAuth)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(HttpsParameters, init$, void)},
		{"getCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HttpsParameters, getCipherSuites, $StringArray*)},
		{"getClientAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpsParameters, getClientAddress, $InetSocketAddress*)},
		{"getHttpsConfigurator", "()Lcom/sun/net/httpserver/HttpsConfigurator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpsParameters, getHttpsConfigurator, $HttpsConfigurator*)},
		{"getNeedClientAuth", "()Z", nullptr, $PUBLIC, $virtualMethod(HttpsParameters, getNeedClientAuth, bool)},
		{"getProtocols", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HttpsParameters, getProtocols, $StringArray*)},
		{"getWantClientAuth", "()Z", nullptr, $PUBLIC, $virtualMethod(HttpsParameters, getWantClientAuth, bool)},
		{"setCipherSuites", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(HttpsParameters, setCipherSuites, void, $StringArray*)},
		{"setNeedClientAuth", "(Z)V", nullptr, $PUBLIC, $virtualMethod(HttpsParameters, setNeedClientAuth, void, bool)},
		{"setProtocols", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(HttpsParameters, setProtocols, void, $StringArray*)},
		{"setSSLParameters", "(Ljavax/net/ssl/SSLParameters;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpsParameters, setSSLParameters, void, $SSLParameters*)},
		{"setWantClientAuth", "(Z)V", nullptr, $PUBLIC, $virtualMethod(HttpsParameters, setWantClientAuth, void, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.net.httpserver.HttpsParameters",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpsParameters, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpsParameters);
	});
	return class$;
}

$Class* HttpsParameters::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com