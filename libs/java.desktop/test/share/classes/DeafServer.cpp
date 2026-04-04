#include <DeafServer.h>
#include <DeafServer$DeafHandler.h>
#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <java/net/InetSocketAddress.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <jcpp.h>

using $DeafServer$DeafHandler = ::DeafServer$DeafHandler;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Executors = ::java::util::concurrent::Executors;

void DeafServer::init$() {
	$useLocalObjectStack();
	this->wakeup = false;
	$var($InetSocketAddress, addr, $new($InetSocketAddress, 0));
	$set(this, server, $HttpServer::create(addr, 0));
	$var($HttpHandler, handler, $new($DeafServer$DeafHandler, this));
	$nc(this->server)->createContext("/"_s, handler);
	$nc(this->server)->setExecutor($($Executors::newCachedThreadPool()));
	$nc(this->server)->start();
}

void DeafServer::destroy() {
	$nc(this->server)->stop(0);
}

int32_t DeafServer::getPort() {
	return $$nc($nc(this->server)->getAddress())->getPort();
}

DeafServer::DeafServer() {
}

$Class* DeafServer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"server", "Lcom/sun/net/httpserver/HttpServer;", nullptr, 0, $field(DeafServer, server)},
		{"wakeup", "Z", nullptr, 0, $field(DeafServer, wakeup)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DeafServer, init$, void), "java.io.IOException"},
		{"destroy", "()V", nullptr, $PUBLIC, $virtualMethod(DeafServer, destroy, void)},
		{"getPort", "()I", nullptr, $PUBLIC, $virtualMethod(DeafServer, getPort, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DeafServer$DeafHandler", "DeafServer", "DeafHandler", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DeafServer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"DeafServer$DeafHandler"
	};
	$loadClass(DeafServer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeafServer);
	});
	return class$;
}

$Class* DeafServer::class$ = nullptr;