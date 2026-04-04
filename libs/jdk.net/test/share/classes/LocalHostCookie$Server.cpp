#include <LocalHostCookie$Server.h>
#include <LocalHostCookie$MyCookieHandler.h>
#include <LocalHostCookie.h>
#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <java/io/IOException.h>
#include <java/net/InetSocketAddress.h>
#include <jcpp.h>

using $LocalHostCookie = ::LocalHostCookie;
using $LocalHostCookie$MyCookieHandler = ::LocalHostCookie$MyCookieHandler;
using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetSocketAddress = ::java::net::InetSocketAddress;

void LocalHostCookie$Server::init$($LocalHostCookie* this$0) {
	$set(this, this$0, this$0);
}

void LocalHostCookie$Server::startServer() {
	$useLocalObjectStack();
	$var($InetSocketAddress, addr, $new($InetSocketAddress, 0));
	try {
		$set(this, server, $HttpServer::create(addr, 0));
	} catch ($IOException& ioe) {
		$throwNew($RuntimeException, "Server could not be created"_s);
	}
	$nc(this->server)->createContext("/"_s, $$new($LocalHostCookie$MyCookieHandler, this->this$0));
	$nc(this->server)->start();
}

int32_t LocalHostCookie$Server::getPort() {
	return $$nc($nc(this->server)->getAddress())->getPort();
}

void LocalHostCookie$Server::stopServer() {
	if (this->server != nullptr) {
		this->server->stop(0);
	}
}

LocalHostCookie$Server::LocalHostCookie$Server() {
}

$Class* LocalHostCookie$Server::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LLocalHostCookie;", nullptr, $FINAL | $SYNTHETIC, $field(LocalHostCookie$Server, this$0)},
		{"server", "Lcom/sun/net/httpserver/HttpServer;", nullptr, 0, $field(LocalHostCookie$Server, server)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LLocalHostCookie;)V", nullptr, 0, $method(LocalHostCookie$Server, init$, void, $LocalHostCookie*)},
		{"getPort", "()I", nullptr, $PUBLIC, $virtualMethod(LocalHostCookie$Server, getPort, int32_t)},
		{"startServer", "()V", nullptr, $PUBLIC, $virtualMethod(LocalHostCookie$Server, startServer, void)},
		{"stopServer", "()V", nullptr, $PUBLIC, $virtualMethod(LocalHostCookie$Server, stopServer, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LocalHostCookie$Server", "LocalHostCookie", "Server", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LocalHostCookie$Server",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"LocalHostCookie"
	};
	$loadClass(LocalHostCookie$Server, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocalHostCookie$Server);
	});
	return class$;
}

$Class* LocalHostCookie$Server::class$ = nullptr;