#include <com/sun/net/httpserver/HttpExchange.h>

#include <com/sun/net/httpserver/Headers.h>
#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpPrincipal.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/URI.h>
#include <jcpp.h>

using $Headers = ::com::sun::net::httpserver::Headers;
using $HttpContext = ::com::sun::net::httpserver::HttpContext;
using $HttpPrincipal = ::com::sun::net::httpserver::HttpPrincipal;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $AutoCloseable = ::java::lang::AutoCloseable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $URI = ::java::net::URI;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

$MethodInfo _HttpExchange_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(HttpExchange::*)()>(&HttpExchange::init$))},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getHttpContext", "()Lcom/sun/net/httpserver/HttpContext;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocalAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrincipal", "()Lcom/sun/net/httpserver/HttpPrincipal;", nullptr, $PUBLIC | $ABSTRACT},
	{"getProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRemoteAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRequestBody", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRequestHeaders", "()Lcom/sun/net/httpserver/Headers;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRequestMethod", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRequestURI", "()Ljava/net/URI;", nullptr, $PUBLIC | $ABSTRACT},
	{"getResponseBody", "()Ljava/io/OutputStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"getResponseCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getResponseHeaders", "()Lcom/sun/net/httpserver/Headers;", nullptr, $PUBLIC | $ABSTRACT},
	{"sendResponseHeaders", "(IJ)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setStreams", "(Ljava/io/InputStream;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _HttpExchange_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.net.httpserver.HttpExchange",
	"java.lang.Object",
	"java.lang.AutoCloseable",
	nullptr,
	_HttpExchange_MethodInfo_
};

$Object* allocate$HttpExchange($Class* clazz) {
	return $of($alloc(HttpExchange));
}

void HttpExchange::init$() {
}

HttpExchange::HttpExchange() {
}

$Class* HttpExchange::load$($String* name, bool initialize) {
	$loadClass(HttpExchange, name, initialize, &_HttpExchange_ClassInfo_, allocate$HttpExchange);
	return class$;
}

$Class* HttpExchange::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com