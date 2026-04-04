#include <com/sun/net/httpserver/HttpsExchange.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <javax/net/ssl/SSLSession.h>
#include <jcpp.h>

using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLSession = ::javax::net::ssl::SSLSession;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

void HttpsExchange::init$() {
	$HttpExchange::init$();
}

HttpsExchange::HttpsExchange() {
}

$Class* HttpsExchange::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(HttpsExchange, init$, void)},
		{"getSSLSession", "()Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpsExchange, getSSLSession, $SSLSession*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.net.httpserver.HttpsExchange",
		"com.sun.net.httpserver.HttpExchange",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpsExchange, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpsExchange);
	});
	return class$;
}

$Class* HttpsExchange::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com