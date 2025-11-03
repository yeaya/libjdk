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

$FieldInfo _SSLStreams$Parameters_FieldInfo_[] = {
	{"this$0", "Lsun/net/httpserver/SSLStreams;", nullptr, $FINAL | $SYNTHETIC, $field(SSLStreams$Parameters, this$0)},
	{"addr", "Ljava/net/InetSocketAddress;", nullptr, 0, $field(SSLStreams$Parameters, addr)},
	{"cfg", "Lcom/sun/net/httpserver/HttpsConfigurator;", nullptr, 0, $field(SSLStreams$Parameters, cfg)},
	{"params", "Ljavax/net/ssl/SSLParameters;", nullptr, 0, $field(SSLStreams$Parameters, params)},
	{}
};

$MethodInfo _SSLStreams$Parameters_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/SSLStreams;Lcom/sun/net/httpserver/HttpsConfigurator;Ljava/net/InetSocketAddress;)V", nullptr, 0, $method(static_cast<void(SSLStreams$Parameters::*)($SSLStreams*,$HttpsConfigurator*,$InetSocketAddress*)>(&SSLStreams$Parameters::init$))},
	{"getClientAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC},
	{"getHttpsConfigurator", "()Lcom/sun/net/httpserver/HttpsConfigurator;", nullptr, $PUBLIC},
	{"getSSLParameters", "()Ljavax/net/ssl/SSLParameters;", nullptr, 0},
	{"setSSLParameters", "(Ljavax/net/ssl/SSLParameters;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SSLStreams$Parameters_InnerClassesInfo_[] = {
	{"sun.net.httpserver.SSLStreams$Parameters", "sun.net.httpserver.SSLStreams", "Parameters", 0},
	{}
};

$ClassInfo _SSLStreams$Parameters_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.SSLStreams$Parameters",
	"com.sun.net.httpserver.HttpsParameters",
	nullptr,
	_SSLStreams$Parameters_FieldInfo_,
	_SSLStreams$Parameters_MethodInfo_,
	nullptr,
	nullptr,
	_SSLStreams$Parameters_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.httpserver.SSLStreams"
};

$Object* allocate$SSLStreams$Parameters($Class* clazz) {
	return $of($alloc(SSLStreams$Parameters));
}

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
	$loadClass(SSLStreams$Parameters, name, initialize, &_SSLStreams$Parameters_ClassInfo_, allocate$SSLStreams$Parameters);
	return class$;
}

$Class* SSLStreams$Parameters::class$ = nullptr;

		} // httpserver
	} // net
} // sun