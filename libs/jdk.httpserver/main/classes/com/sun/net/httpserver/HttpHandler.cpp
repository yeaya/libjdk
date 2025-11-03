#include <com/sun/net/httpserver/HttpHandler.h>

#include <com/sun/net/httpserver/HttpExchange.h>
#include <jcpp.h>

using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

$MethodInfo _HttpHandler_MethodInfo_[] = {
	{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _HttpHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.net.httpserver.HttpHandler",
	nullptr,
	nullptr,
	nullptr,
	_HttpHandler_MethodInfo_
};

$Object* allocate$HttpHandler($Class* clazz) {
	return $of($alloc(HttpHandler));
}

$Class* HttpHandler::load$($String* name, bool initialize) {
	$loadClass(HttpHandler, name, initialize, &_HttpHandler_ClassInfo_, allocate$HttpHandler);
	return class$;
}

$Class* HttpHandler::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com