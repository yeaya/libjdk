#include <sun/net/httpserver/DefaultHttpServerProvider.h>

#include <com/sun/net/httpserver/HttpServer.h>
#include <com/sun/net/httpserver/HttpsServer.h>
#include <com/sun/net/httpserver/spi/HttpServerProvider.h>
#include <java/net/InetSocketAddress.h>
#include <sun/net/httpserver/HttpServerImpl.h>
#include <sun/net/httpserver/HttpsServerImpl.h>
#include <jcpp.h>

using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $HttpsServer = ::com::sun::net::httpserver::HttpsServer;
using $HttpServerProvider = ::com::sun::net::httpserver::spi::HttpServerProvider;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $HttpServerImpl = ::sun::net::httpserver::HttpServerImpl;
using $HttpsServerImpl = ::sun::net::httpserver::HttpsServerImpl;

namespace sun {
	namespace net {
		namespace httpserver {

$MethodInfo _DefaultHttpServerProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultHttpServerProvider::*)()>(&DefaultHttpServerProvider::init$))},
	{"createHttpServer", "(Ljava/net/InetSocketAddress;I)Lcom/sun/net/httpserver/HttpServer;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createHttpsServer", "(Ljava/net/InetSocketAddress;I)Lcom/sun/net/httpserver/HttpsServer;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _DefaultHttpServerProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.httpserver.DefaultHttpServerProvider",
	"com.sun.net.httpserver.spi.HttpServerProvider",
	nullptr,
	nullptr,
	_DefaultHttpServerProvider_MethodInfo_
};

$Object* allocate$DefaultHttpServerProvider($Class* clazz) {
	return $of($alloc(DefaultHttpServerProvider));
}

void DefaultHttpServerProvider::init$() {
	$HttpServerProvider::init$();
}

$HttpServer* DefaultHttpServerProvider::createHttpServer($InetSocketAddress* addr, int32_t backlog) {
	return $new($HttpServerImpl, addr, backlog);
}

$HttpsServer* DefaultHttpServerProvider::createHttpsServer($InetSocketAddress* addr, int32_t backlog) {
	return $new($HttpsServerImpl, addr, backlog);
}

DefaultHttpServerProvider::DefaultHttpServerProvider() {
}

$Class* DefaultHttpServerProvider::load$($String* name, bool initialize) {
	$loadClass(DefaultHttpServerProvider, name, initialize, &_DefaultHttpServerProvider_ClassInfo_, allocate$DefaultHttpServerProvider);
	return class$;
}

$Class* DefaultHttpServerProvider::class$ = nullptr;

		} // httpserver
	} // net
} // sun