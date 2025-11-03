#include <sun/net/httpserver/ServerImpl$Exchange$LinkHandler.h>

#include <com/sun/net/httpserver/Filter$Chain.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <sun/net/httpserver/ServerImpl$Exchange.h>
#include <jcpp.h>

using $Filter$Chain = ::com::sun::net::httpserver::Filter$Chain;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServerImpl$Exchange = ::sun::net::httpserver::ServerImpl$Exchange;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _ServerImpl$Exchange$LinkHandler_FieldInfo_[] = {
	{"this$1", "Lsun/net/httpserver/ServerImpl$Exchange;", nullptr, $FINAL | $SYNTHETIC, $field(ServerImpl$Exchange$LinkHandler, this$1)},
	{"nextChain", "Lcom/sun/net/httpserver/Filter$Chain;", nullptr, 0, $field(ServerImpl$Exchange$LinkHandler, nextChain)},
	{}
};

$MethodInfo _ServerImpl$Exchange$LinkHandler_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/ServerImpl$Exchange;Lcom/sun/net/httpserver/Filter$Chain;)V", nullptr, 0, $method(static_cast<void(ServerImpl$Exchange$LinkHandler::*)($ServerImpl$Exchange*,$Filter$Chain*)>(&ServerImpl$Exchange$LinkHandler::init$))},
	{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ServerImpl$Exchange$LinkHandler_InnerClassesInfo_[] = {
	{"sun.net.httpserver.ServerImpl$Exchange", "sun.net.httpserver.ServerImpl", "Exchange", 0},
	{"sun.net.httpserver.ServerImpl$Exchange$LinkHandler", "sun.net.httpserver.ServerImpl$Exchange", "LinkHandler", 0},
	{}
};

$ClassInfo _ServerImpl$Exchange$LinkHandler_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.ServerImpl$Exchange$LinkHandler",
	"java.lang.Object",
	"com.sun.net.httpserver.HttpHandler",
	_ServerImpl$Exchange$LinkHandler_FieldInfo_,
	_ServerImpl$Exchange$LinkHandler_MethodInfo_,
	nullptr,
	nullptr,
	_ServerImpl$Exchange$LinkHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.httpserver.ServerImpl"
};

$Object* allocate$ServerImpl$Exchange$LinkHandler($Class* clazz) {
	return $of($alloc(ServerImpl$Exchange$LinkHandler));
}

void ServerImpl$Exchange$LinkHandler::init$($ServerImpl$Exchange* this$1, $Filter$Chain* nextChain) {
	$set(this, this$1, this$1);
	$set(this, nextChain, nextChain);
}

void ServerImpl$Exchange$LinkHandler::handle($HttpExchange* exchange) {
	$nc(this->nextChain)->doFilter(exchange);
}

ServerImpl$Exchange$LinkHandler::ServerImpl$Exchange$LinkHandler() {
}

$Class* ServerImpl$Exchange$LinkHandler::load$($String* name, bool initialize) {
	$loadClass(ServerImpl$Exchange$LinkHandler, name, initialize, &_ServerImpl$Exchange$LinkHandler_ClassInfo_, allocate$ServerImpl$Exchange$LinkHandler);
	return class$;
}

$Class* ServerImpl$Exchange$LinkHandler::class$ = nullptr;

		} // httpserver
	} // net
} // sun