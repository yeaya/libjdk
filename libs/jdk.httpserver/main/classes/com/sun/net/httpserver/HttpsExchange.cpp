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

$MethodInfo _HttpsExchange_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(HttpsExchange::*)()>(&HttpsExchange::init$))},
	{"getSSLSession", "()Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _HttpsExchange_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.net.httpserver.HttpsExchange",
	"com.sun.net.httpserver.HttpExchange",
	nullptr,
	nullptr,
	_HttpsExchange_MethodInfo_
};

$Object* allocate$HttpsExchange($Class* clazz) {
	return $of($alloc(HttpsExchange));
}

void HttpsExchange::init$() {
	$HttpExchange::init$();
}

HttpsExchange::HttpsExchange() {
}

$Class* HttpsExchange::load$($String* name, bool initialize) {
	$loadClass(HttpsExchange, name, initialize, &_HttpsExchange_ClassInfo_, allocate$HttpsExchange);
	return class$;
}

$Class* HttpsExchange::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com