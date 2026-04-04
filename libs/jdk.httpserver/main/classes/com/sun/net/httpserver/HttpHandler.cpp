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

$Class* HttpHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpHandler, handle, void, $HttpExchange*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.net.httpserver.HttpHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpHandler);
	});
	return class$;
}

$Class* HttpHandler::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com