#include <sun/net/httpserver/HttpServerImpl.h>

#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <java/net/InetSocketAddress.h>
#include <java/util/concurrent/Executor.h>
#include <sun/net/httpserver/HttpContextImpl.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <jcpp.h>

using $HttpContext = ::com::sun::net::httpserver::HttpContext;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $HttpServer = ::com::sun::net::httpserver::HttpServer;
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

$FieldInfo _HttpServerImpl_FieldInfo_[] = {
	{"server", "Lsun/net/httpserver/ServerImpl;", nullptr, 0, $field(HttpServerImpl, server)},
	{}
};

$MethodInfo _HttpServerImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HttpServerImpl::*)()>(&HttpServerImpl::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/net/InetSocketAddress;I)V", nullptr, 0, $method(static_cast<void(HttpServerImpl::*)($InetSocketAddress*,int32_t)>(&HttpServerImpl::init$)), "java.io.IOException"},
	{"bind", "(Ljava/net/InetSocketAddress;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createContext", "(Ljava/lang/String;Lcom/sun/net/httpserver/HttpHandler;)Lsun/net/httpserver/HttpContextImpl;", nullptr, $PUBLIC},
	{"createContext", "(Ljava/lang/String;)Lsun/net/httpserver/HttpContextImpl;", nullptr, $PUBLIC},
	{"getAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC},
	{"getExecutor", "()Ljava/util/concurrent/Executor;", nullptr, $PUBLIC},
	{"removeContext", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"removeContext", "(Lcom/sun/net/httpserver/HttpContext;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"setExecutor", "(Ljava/util/concurrent/Executor;)V", nullptr, $PUBLIC},
	{"start", "()V", nullptr, $PUBLIC},
	{"stop", "(I)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HttpServerImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.httpserver.HttpServerImpl",
	"com.sun.net.httpserver.HttpServer",
	nullptr,
	_HttpServerImpl_FieldInfo_,
	_HttpServerImpl_MethodInfo_
};

$Object* allocate$HttpServerImpl($Class* clazz) {
	return $of($alloc(HttpServerImpl));
}

void HttpServerImpl::init$() {
	HttpServerImpl::init$($$new($InetSocketAddress, 80), 0);
}

void HttpServerImpl::init$($InetSocketAddress* addr, int32_t backlog) {
	$HttpServer::init$();
	$set(this, server, $new($ServerImpl, this, "http"_s, addr, backlog));
}

void HttpServerImpl::bind($InetSocketAddress* addr, int32_t backlog) {
	$nc(this->server)->bind(addr, backlog);
}

void HttpServerImpl::start() {
	$nc(this->server)->start();
}

void HttpServerImpl::setExecutor($Executor* executor) {
	$nc(this->server)->setExecutor(executor);
}

$Executor* HttpServerImpl::getExecutor() {
	return $nc(this->server)->getExecutor();
}

void HttpServerImpl::stop(int32_t delay) {
	$nc(this->server)->stop(delay);
}

$HttpContext* HttpServerImpl::createContext($String* path, $HttpHandler* handler) {
	return $nc(this->server)->createContext(path, handler);
}

$HttpContext* HttpServerImpl::createContext($String* path) {
	return $nc(this->server)->createContext(path);
}

void HttpServerImpl::removeContext($String* path) {
	$nc(this->server)->removeContext(path);
}

void HttpServerImpl::removeContext($HttpContext* context) {
	$nc(this->server)->removeContext(context);
}

$InetSocketAddress* HttpServerImpl::getAddress() {
	return $nc(this->server)->getAddress();
}

HttpServerImpl::HttpServerImpl() {
}

$Class* HttpServerImpl::load$($String* name, bool initialize) {
	$loadClass(HttpServerImpl, name, initialize, &_HttpServerImpl_ClassInfo_, allocate$HttpServerImpl);
	return class$;
}

$Class* HttpServerImpl::class$ = nullptr;

		} // httpserver
	} // net
} // sun