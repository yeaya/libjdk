#include <sun/net/httpserver/SSLStreams$Parameters.h>
#include <com/sun/net/httpserver/HttpsConfigurator.h>
#include <com/sun/net/httpserver/HttpsParameters.h>
#include <java/net/InetSocketAddress.h>
#include <javax/net/ssl/SSLParameters.h>
#include <sun/net/httpserver/SSLStreams.h>
#include <jcpp.h>

using $HttpsConfigurator = ::com::sun::net::httpserver::HttpsConfigurator;
using $HttpsParameters = ::com::sun::net::httpserver::HttpsParameters;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SSLParameters = ::javax::net::ssl::SSLParameters;
using $SSLStreams = ::sun::net::httpserver::SSLStreams;

namespace sun {
	namespace net {
		namespace httpserver {

void SSLStreams$Parameters::init$($SSLStreams* this$0, $HttpsConfigurator* cfg, $InetSocketAddress* addr) {
	$set(this, this$0, this$0);
	$HttpsParameters::init$();
	$set(this, addr, addr);
	$set(this, cfg, cfg);
}

$InetSocketAddress* SSLStreams$Parameters::getClientAddress() {
	return this->addr;
}

$HttpsConfigurator* SSLStreams$Parameters::getHttpsConfigurator() {
	return this->cfg;
}

void SSLStreams$Parameters::setSSLParameters($SSLParameters* p) {
	$set(this, params, p);
}

$SSLParameters* SSLStreams$Parameters::getSSLParameters() {
	return this->params;
}

SSLStreams$Parameters::SSLStreams$Parameters() {
}

$Class* SSLStreams$Parameters::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/httpserver/SSLStreams;", nullptr, $FINAL | $SYNTHETIC, $field(SSLStreams$Parameters, this$0)},
		{"addr", "Ljava/net/InetSocketAddress;", nullptr, 0, $field(SSLStreams$Parameters, addr)},
		{"cfg", "Lcom/sun/net/httpserver/HttpsConfigurator;", nullptr, 0, $field(SSLStreams$Parameters, cfg)},
		{"params", "Ljavax/net/ssl/SSLParameters;", nullptr, 0, $field(SSLStreams$Parameters, params)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/httpserver/SSLStreams;Lcom/sun/net/httpserver/HttpsConfigurator;Ljava/net/InetSocketAddress;)V", nullptr, 0, $method(SSLStreams$Parameters, init$, void, $SSLStreams*, $HttpsConfigurator*, $InetSocketAddress*)},
		{"getClientAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC, $virtualMethod(SSLStreams$Parameters, getClientAddress, $InetSocketAddress*)},
		{"getHttpsConfigurator", "()Lcom/sun/net/httpserver/HttpsConfigurator;", nullptr, $PUBLIC, $virtualMethod(SSLStreams$Parameters, getHttpsConfigurator, $HttpsConfigurator*)},
		{"getSSLParameters", "()Ljavax/net/ssl/SSLParameters;", nullptr, 0, $virtualMethod(SSLStreams$Parameters, getSSLParameters, $SSLParameters*)},
		{"setSSLParameters", "(Ljavax/net/ssl/SSLParameters;)V", nullptr, $PUBLIC, $virtualMethod(SSLStreams$Parameters, setSSLParameters, void, $SSLParameters*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.httpserver.SSLStreams$Parameters", "sun.net.httpserver.SSLStreams", "Parameters", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.httpserver.SSLStreams$Parameters",
		"com.sun.net.httpserver.HttpsParameters",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.httpserver.SSLStreams"
	};
	$loadClass(SSLStreams$Parameters, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLStreams$Parameters);
	});
	return class$;
}

$Class* SSLStreams$Parameters::class$ = nullptr;

		} // httpserver
	} // net
} // sun