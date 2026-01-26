#include <com/sun/net/httpserver/HttpServer.h>

#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <com/sun/net/httpserver/spi/HttpServerProvider.h>
#include <java/net/InetSocketAddress.h>
#include <java/util/concurrent/Executor.h>
#include <jcpp.h>

using $HttpContext = ::com::sun::net::httpserver::HttpContext;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $HttpServerProvider = ::com::sun::net::httpserver::spi::HttpServerProvider;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Executor = ::java::util::concurrent::Executor;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

$MethodInfo _HttpServer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(HttpServer, init$, void)},
	{"bind", "(Ljava/net/InetSocketAddress;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpServer, bind, void, $InetSocketAddress*, int32_t), "java.io.IOException"},
	{"create", "()Lcom/sun/net/httpserver/HttpServer;", nullptr, $PUBLIC | $STATIC, $staticMethod(HttpServer, create, HttpServer*), "java.io.IOException"},
	{"create", "(Ljava/net/InetSocketAddress;I)Lcom/sun/net/httpserver/HttpServer;", nullptr, $PUBLIC | $STATIC, $staticMethod(HttpServer, create, HttpServer*, $InetSocketAddress*, int32_t), "java.io.IOException"},
	{"createContext", "(Ljava/lang/String;Lcom/sun/net/httpserver/HttpHandler;)Lcom/sun/net/httpserver/HttpContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpServer, createContext, $HttpContext*, $String*, $HttpHandler*)},
	{"createContext", "(Ljava/lang/String;)Lcom/sun/net/httpserver/HttpContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpServer, createContext, $HttpContext*, $String*)},
	{"getAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpServer, getAddress, $InetSocketAddress*)},
	{"getExecutor", "()Ljava/util/concurrent/Executor;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpServer, getExecutor, $Executor*)},
	{"removeContext", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpServer, removeContext, void, $String*), "java.lang.IllegalArgumentException"},
	{"removeContext", "(Lcom/sun/net/httpserver/HttpContext;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpServer, removeContext, void, $HttpContext*)},
	{"setExecutor", "(Ljava/util/concurrent/Executor;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpServer, setExecutor, void, $Executor*)},
	{"start", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpServer, start, void)},
	{"stop", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpServer, stop, void, int32_t)},
	{}
};

$ClassInfo _HttpServer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.net.httpserver.HttpServer",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HttpServer_MethodInfo_
};

$Object* allocate$HttpServer($Class* clazz) {
	return $of($alloc(HttpServer));
}

void HttpServer::init$() {
}

HttpServer* HttpServer::create() {
	return create(nullptr, 0);
}

HttpServer* HttpServer::create($InetSocketAddress* addr, int32_t backlog) {
	$var($HttpServerProvider, provider, $HttpServerProvider::provider());
	return $nc(provider)->createHttpServer(addr, backlog);
}

HttpServer::HttpServer() {
}

$Class* HttpServer::load$($String* name, bool initialize) {
	$loadClass(HttpServer, name, initialize, &_HttpServer_ClassInfo_, allocate$HttpServer);
	return class$;
}

$Class* HttpServer::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com