#include <com/sun/net/httpserver/HttpsServer.h>

#include <com/sun/net/httpserver/HttpServer.h>
#include <com/sun/net/httpserver/HttpsConfigurator.h>
#include <com/sun/net/httpserver/spi/HttpServerProvider.h>
#include <java/net/InetSocketAddress.h>
#include <jcpp.h>

using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $HttpsConfigurator = ::com::sun::net::httpserver::HttpsConfigurator;
using $HttpServerProvider = ::com::sun::net::httpserver::spi::HttpServerProvider;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

$MethodInfo _HttpsServer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(HttpsServer::*)()>(&HttpsServer::init$))},
	{"create", "()Lcom/sun/net/httpserver/HttpsServer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<HttpsServer*(*)()>(&HttpsServer::create)), "java.io.IOException"},
	{"create", "(Ljava/net/InetSocketAddress;I)Lcom/sun/net/httpserver/HttpsServer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<HttpsServer*(*)($InetSocketAddress*,int32_t)>(&HttpsServer::create)), "java.io.IOException"},
	{"getHttpsConfigurator", "()Lcom/sun/net/httpserver/HttpsConfigurator;", nullptr, $PUBLIC | $ABSTRACT},
	{"setHttpsConfigurator", "(Lcom/sun/net/httpserver/HttpsConfigurator;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _HttpsServer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.net.httpserver.HttpsServer",
	"com.sun.net.httpserver.HttpServer",
	nullptr,
	nullptr,
	_HttpsServer_MethodInfo_
};

$Object* allocate$HttpsServer($Class* clazz) {
	return $of($alloc(HttpsServer));
}

void HttpsServer::init$() {
	$HttpServer::init$();
}

HttpsServer* HttpsServer::create() {
	$init(HttpsServer);
	return create(nullptr, 0);
}

HttpsServer* HttpsServer::create($InetSocketAddress* addr, int32_t backlog) {
	$init(HttpsServer);
	$var($HttpServerProvider, provider, $HttpServerProvider::provider());
	return $nc(provider)->createHttpsServer(addr, backlog);
}

HttpsServer::HttpsServer() {
}

$Class* HttpsServer::load$($String* name, bool initialize) {
	$loadClass(HttpsServer, name, initialize, &_HttpsServer_ClassInfo_, allocate$HttpsServer);
	return class$;
}

$Class* HttpsServer::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com