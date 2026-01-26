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
	{"<init>", "()V", nullptr, $PROTECTED, $method(HttpExchange, init$, void)},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpExchange, getAttribute, $Object*, $String*)},
	{"getHttpContext", "()Lcom/sun/net/httpserver/HttpContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpExchange, getHttpContext, $HttpContext*)},
	{"getLocalAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpExchange, getLocalAddress, $InetSocketAddress*)},
	{"getPrincipal", "()Lcom/sun/net/httpserver/HttpPrincipal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpExchange, getPrincipal, $HttpPrincipal*)},
	{"getProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpExchange, getProtocol, $String*)},
	{"getRemoteAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpExchange, getRemoteAddress, $InetSocketAddress*)},
	{"getRequestBody", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpExchange, getRequestBody, $InputStream*)},
	{"getRequestHeaders", "()Lcom/sun/net/httpserver/Headers;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpExchange, getRequestHeaders, $Headers*)},
	{"getRequestMethod", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpExchange, getRequestMethod, $String*)},
	{"getRequestURI", "()Ljava/net/URI;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpExchange, getRequestURI, $URI*)},
	{"getResponseBody", "()Ljava/io/OutputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpExchange, getResponseBody, $OutputStream*)},
	{"getResponseCode", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpExchange, getResponseCode, int32_t)},
	{"getResponseHeaders", "()Lcom/sun/net/httpserver/Headers;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpExchange, getResponseHeaders, $Headers*)},
	{"sendResponseHeaders", "(IJ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpExchange, sendResponseHeaders, void, int32_t, int64_t), "java.io.IOException"},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpExchange, setAttribute, void, $String*, Object$*)},
	{"setStreams", "(Ljava/io/InputStream;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpExchange, setStreams, void, $InputStream*, $OutputStream*)},
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