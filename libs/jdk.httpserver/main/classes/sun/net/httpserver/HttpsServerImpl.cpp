#include <sun/net/httpserver/HttpsServerImpl.h>

#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <com/sun/net/httpserver/HttpsConfigurator.h>
#include <com/sun/net/httpserver/HttpsServer.h>
#include <java/net/InetSocketAddress.h>
#include <java/util/concurrent/Executor.h>
#include <sun/net/httpserver/HttpContextImpl.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <jcpp.h>

using $HttpContext = ::com::sun::net::httpserver::HttpContext;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $HttpsConfigurator = ::com::sun::net::httpserver::HttpsConfigurator;
using $HttpsServer = ::com::sun::net::httpserver::HttpsServer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Executor = ::java::util::concurrent::Executor;
using $HttpContextImpl = ::sun::net::httpserver::HttpContextImpl;
using $ServerImpl = ::sun::net::httpserver::ServerImpl;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _HttpsServerImpl_FieldInfo_[] = {
	{"server", "Lsun/net/httpserver/ServerImpl;", nullptr, 0, $field(HttpsServerImpl, server)},
	{}
};

$MethodInfo _HttpsServerImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HttpsServerImpl::*)()>(&HttpsServerImpl::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/net/InetSocketAddress;I)V", nullptr, 0, $method(static_cast<void(HttpsServerImpl::*)($InetSocketAddress*,int32_t)>(&HttpsServerImpl::init$)), "java.io.IOException"},
	{"bind", "(Ljava/net/InetSocketAddress;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createContext", "(Ljava/lang/String;Lcom/sun/net/httpserver/HttpHandler;)Lsun/net/httpserver/HttpContextImpl;", nullptr, $PUBLIC},
	{"createContext", "(Ljava/lang/String;)Lsun/net/httpserver/HttpContextImpl;", nullptr, $PUBLIC},
	{"getAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC},
	{"getExecutor", "()Ljava/util/concurrent/Executor;", nullptr, $PUBLIC},
	{"getHttpsConfigurator", "()Lcom/sun/net/httpserver/HttpsConfigurator;", nullptr, $PUBLIC},
	{"removeContext", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"removeContext", "(Lcom/sun/net/httpserver/HttpContext;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"setExecutor", "(Ljava/util/concurrent/Executor;)V", nullptr, $PUBLIC},
	{"setHttpsConfigurator", "(Lcom/sun/net/httpserver/HttpsConfigurator;)V", nullptr, $PUBLIC},
	{"start", "()V", nullptr, $PUBLIC},
	{"stop", "(I)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HttpsServerImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.httpserver.HttpsServerImpl",
	"com.sun.net.httpserver.HttpsServer",
	nullptr,
	_HttpsServerImpl_FieldInfo_,
	_HttpsServerImpl_MethodInfo_
};

$Object* allocate$HttpsServerImpl($Class* clazz) {
	return $of($alloc(HttpsServerImpl));
}

void HttpsServerImpl::init$() {
	HttpsServerImpl::init$($$new($InetSocketAddress, 443), 0);
}

void HttpsServerImpl::init$($InetSocketAddress* addr, int32_t backlog) {
	$HttpsServer::init$();
	$set(this, server, $new($ServerImpl, this, "https"_s, addr, backlog));
}

void HttpsServerImpl::setHttpsConfigurator($HttpsConfigurator* config) {
	$nc(this->server)->setHttpsConfigurator(config);
}

$HttpsConfigurator* HttpsServerImpl::getHttpsConfigurator() {
	return $nc(this->server)->getHttpsConfigurator();
}

void HttpsServerImpl::bind($InetSocketAddress* addr, int32_t backlog) {
	$nc(this->server)->bind(addr, backlog);
}

void HttpsServerImpl::start() {
	$nc(this->server)->start();
}

void HttpsServerImpl::setExecutor($Executor* executor) {
	$nc(this->server)->setExecutor(executor);
}

$Executor* HttpsServerImpl::getExecutor() {
	return $nc(this->server)->getExecutor();
}

void HttpsServerImpl::stop(int32_t delay) {
	$nc(this->server)->stop(delay);
}

$HttpContext* HttpsServerImpl::createContext($String* path, $HttpHandler* handler) {
	return $nc(this->server)->createContext(path, handler);
}

$HttpContext* HttpsServerImpl::createContext($String* path) {
	return $nc(this->server)->createContext(path);
}

void HttpsServerImpl::removeContext($String* path) {
	$nc(this->server)->removeContext(path);
}

void HttpsServerImpl::removeContext($HttpContext* context) {
	$nc(this->server)->removeContext(context);
}

$InetSocketAddress* HttpsServerImpl::getAddress() {
	return $nc(this->server)->getAddress();
}

HttpsServerImpl::HttpsServerImpl() {
}

$Class* HttpsServerImpl::load$($String* name, bool initialize) {
	$loadClass(HttpsServerImpl, name, initialize, &_HttpsServerImpl_ClassInfo_, allocate$HttpsServerImpl);
	return class$;
}

$Class* HttpsServerImpl::class$ = nullptr;

		} // httpserver
	} // net
} // sun