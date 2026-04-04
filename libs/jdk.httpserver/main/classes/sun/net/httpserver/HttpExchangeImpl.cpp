#include <sun/net/httpserver/HttpExchangeImpl.h>
#include <com/sun/net/httpserver/Headers.h>
#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <com/sun/net/httpserver/HttpPrincipal.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/URI.h>
#include <sun/net/httpserver/ExchangeImpl.h>
#include <sun/net/httpserver/HttpContextImpl.h>
#include <jcpp.h>

using $Headers = ::com::sun::net::httpserver::Headers;
using $HttpContext = ::com::sun::net::httpserver::HttpContext;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpPrincipal = ::com::sun::net::httpserver::HttpPrincipal;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $URI = ::java::net::URI;
using $ExchangeImpl = ::sun::net::httpserver::ExchangeImpl;

namespace sun {
	namespace net {
		namespace httpserver {

void HttpExchangeImpl::init$($ExchangeImpl* impl) {
	$HttpExchange::init$();
	$set(this, impl, impl);
}

$Headers* HttpExchangeImpl::getRequestHeaders() {
	return $nc(this->impl)->getRequestHeaders();
}

$Headers* HttpExchangeImpl::getResponseHeaders() {
	return $nc(this->impl)->getResponseHeaders();
}

$URI* HttpExchangeImpl::getRequestURI() {
	return $nc(this->impl)->getRequestURI();
}

$String* HttpExchangeImpl::getRequestMethod() {
	return $nc(this->impl)->getRequestMethod();
}

$HttpContext* HttpExchangeImpl::getHttpContext() {
	return $nc(this->impl)->getHttpContext();
}

void HttpExchangeImpl::close() {
	$nc(this->impl)->close();
}

$InputStream* HttpExchangeImpl::getRequestBody() {
	return $nc(this->impl)->getRequestBody();
}

int32_t HttpExchangeImpl::getResponseCode() {
	return $nc(this->impl)->getResponseCode();
}

$OutputStream* HttpExchangeImpl::getResponseBody() {
	return $nc(this->impl)->getResponseBody();
}

void HttpExchangeImpl::sendResponseHeaders(int32_t rCode, int64_t contentLen) {
	$nc(this->impl)->sendResponseHeaders(rCode, contentLen);
}

$InetSocketAddress* HttpExchangeImpl::getRemoteAddress() {
	return $nc(this->impl)->getRemoteAddress();
}

$InetSocketAddress* HttpExchangeImpl::getLocalAddress() {
	return $nc(this->impl)->getLocalAddress();
}

$String* HttpExchangeImpl::getProtocol() {
	return $nc(this->impl)->getProtocol();
}

$Object* HttpExchangeImpl::getAttribute($String* name) {
	return $nc(this->impl)->getAttribute(name);
}

void HttpExchangeImpl::setAttribute($String* name, Object$* value) {
	$nc(this->impl)->setAttribute(name, value);
}

void HttpExchangeImpl::setStreams($InputStream* i, $OutputStream* o) {
	$nc(this->impl)->setStreams(i, o);
}

$HttpPrincipal* HttpExchangeImpl::getPrincipal() {
	return $nc(this->impl)->getPrincipal();
}

$ExchangeImpl* HttpExchangeImpl::getExchangeImpl() {
	return this->impl;
}

HttpExchangeImpl::HttpExchangeImpl() {
}

$Class* HttpExchangeImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"impl", "Lsun/net/httpserver/ExchangeImpl;", nullptr, 0, $field(HttpExchangeImpl, impl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/httpserver/ExchangeImpl;)V", nullptr, 0, $method(HttpExchangeImpl, init$, void, $ExchangeImpl*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(HttpExchangeImpl, close, void)},
		{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpExchangeImpl, getAttribute, $Object*, $String*)},
		{"getExchangeImpl", "()Lsun/net/httpserver/ExchangeImpl;", nullptr, 0, $virtualMethod(HttpExchangeImpl, getExchangeImpl, $ExchangeImpl*)},
		{"getHttpContext", "()Lsun/net/httpserver/HttpContextImpl;", nullptr, $PUBLIC, $virtualMethod(HttpExchangeImpl, getHttpContext, $HttpContext*)},
		{"getLocalAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC, $virtualMethod(HttpExchangeImpl, getLocalAddress, $InetSocketAddress*)},
		{"getPrincipal", "()Lcom/sun/net/httpserver/HttpPrincipal;", nullptr, $PUBLIC, $virtualMethod(HttpExchangeImpl, getPrincipal, $HttpPrincipal*)},
		{"getProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HttpExchangeImpl, getProtocol, $String*)},
		{"getRemoteAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC, $virtualMethod(HttpExchangeImpl, getRemoteAddress, $InetSocketAddress*)},
		{"getRequestBody", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(HttpExchangeImpl, getRequestBody, $InputStream*)},
		{"getRequestHeaders", "()Lcom/sun/net/httpserver/Headers;", nullptr, $PUBLIC, $virtualMethod(HttpExchangeImpl, getRequestHeaders, $Headers*)},
		{"getRequestMethod", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HttpExchangeImpl, getRequestMethod, $String*)},
		{"getRequestURI", "()Ljava/net/URI;", nullptr, $PUBLIC, $virtualMethod(HttpExchangeImpl, getRequestURI, $URI*)},
		{"getResponseBody", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(HttpExchangeImpl, getResponseBody, $OutputStream*)},
		{"getResponseCode", "()I", nullptr, $PUBLIC, $virtualMethod(HttpExchangeImpl, getResponseCode, int32_t)},
		{"getResponseHeaders", "()Lcom/sun/net/httpserver/Headers;", nullptr, $PUBLIC, $virtualMethod(HttpExchangeImpl, getResponseHeaders, $Headers*)},
		{"sendResponseHeaders", "(IJ)V", nullptr, $PUBLIC, $virtualMethod(HttpExchangeImpl, sendResponseHeaders, void, int32_t, int64_t), "java.io.IOException"},
		{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(HttpExchangeImpl, setAttribute, void, $String*, Object$*)},
		{"setStreams", "(Ljava/io/InputStream;Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(HttpExchangeImpl, setStreams, void, $InputStream*, $OutputStream*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.httpserver.HttpExchangeImpl",
		"com.sun.net.httpserver.HttpExchange",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpExchangeImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpExchangeImpl);
	});
	return class$;
}

$Class* HttpExchangeImpl::class$ = nullptr;

		} // httpserver
	} // net
} // sun