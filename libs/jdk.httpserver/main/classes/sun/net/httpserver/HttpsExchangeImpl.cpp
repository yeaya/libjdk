#include <sun/net/httpserver/HttpsExchangeImpl.h>

#include <com/sun/net/httpserver/Headers.h>
#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpPrincipal.h>
#include <com/sun/net/httpserver/HttpsExchange.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/URI.h>
#include <javax/net/ssl/SSLSession.h>
#include <sun/net/httpserver/ExchangeImpl.h>
#include <sun/net/httpserver/HttpContextImpl.h>
#include <jcpp.h>

using $Headers = ::com::sun::net::httpserver::Headers;
using $HttpContext = ::com::sun::net::httpserver::HttpContext;
using $HttpPrincipal = ::com::sun::net::httpserver::HttpPrincipal;
using $HttpsExchange = ::com::sun::net::httpserver::HttpsExchange;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $URI = ::java::net::URI;
using $SSLSession = ::javax::net::ssl::SSLSession;
using $ExchangeImpl = ::sun::net::httpserver::ExchangeImpl;
using $HttpContextImpl = ::sun::net::httpserver::HttpContextImpl;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _HttpsExchangeImpl_FieldInfo_[] = {
	{"impl", "Lsun/net/httpserver/ExchangeImpl;", nullptr, 0, $field(HttpsExchangeImpl, impl)},
	{}
};

$MethodInfo _HttpsExchangeImpl_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/ExchangeImpl;)V", nullptr, 0, $method(static_cast<void(HttpsExchangeImpl::*)($ExchangeImpl*)>(&HttpsExchangeImpl::init$)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getExchangeImpl", "()Lsun/net/httpserver/ExchangeImpl;", nullptr, 0},
	{"getHttpContext", "()Lsun/net/httpserver/HttpContextImpl;", nullptr, $PUBLIC},
	{"getLocalAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC},
	{"getPrincipal", "()Lcom/sun/net/httpserver/HttpPrincipal;", nullptr, $PUBLIC},
	{"getProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRemoteAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC},
	{"getRequestBody", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"getRequestHeaders", "()Lcom/sun/net/httpserver/Headers;", nullptr, $PUBLIC},
	{"getRequestMethod", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRequestURI", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"getResponseBody", "()Ljava/io/OutputStream;", nullptr, $PUBLIC},
	{"getResponseCode", "()I", nullptr, $PUBLIC},
	{"getResponseHeaders", "()Lcom/sun/net/httpserver/Headers;", nullptr, $PUBLIC},
	{"getSSLSession", "()Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC},
	{"sendResponseHeaders", "(IJ)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setStreams", "(Ljava/io/InputStream;Ljava/io/OutputStream;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HttpsExchangeImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.HttpsExchangeImpl",
	"com.sun.net.httpserver.HttpsExchange",
	nullptr,
	_HttpsExchangeImpl_FieldInfo_,
	_HttpsExchangeImpl_MethodInfo_
};

$Object* allocate$HttpsExchangeImpl($Class* clazz) {
	return $of($alloc(HttpsExchangeImpl));
}

void HttpsExchangeImpl::init$($ExchangeImpl* impl) {
	$HttpsExchange::init$();
	$set(this, impl, impl);
}

$Headers* HttpsExchangeImpl::getRequestHeaders() {
	return $nc(this->impl)->getRequestHeaders();
}

$Headers* HttpsExchangeImpl::getResponseHeaders() {
	return $nc(this->impl)->getResponseHeaders();
}

$URI* HttpsExchangeImpl::getRequestURI() {
	return $nc(this->impl)->getRequestURI();
}

$String* HttpsExchangeImpl::getRequestMethod() {
	return $nc(this->impl)->getRequestMethod();
}

$HttpContext* HttpsExchangeImpl::getHttpContext() {
	return $nc(this->impl)->getHttpContext();
}

void HttpsExchangeImpl::close() {
	$nc(this->impl)->close();
}

$InputStream* HttpsExchangeImpl::getRequestBody() {
	return $nc(this->impl)->getRequestBody();
}

int32_t HttpsExchangeImpl::getResponseCode() {
	return $nc(this->impl)->getResponseCode();
}

$OutputStream* HttpsExchangeImpl::getResponseBody() {
	return $nc(this->impl)->getResponseBody();
}

void HttpsExchangeImpl::sendResponseHeaders(int32_t rCode, int64_t contentLen) {
	$nc(this->impl)->sendResponseHeaders(rCode, contentLen);
}

$InetSocketAddress* HttpsExchangeImpl::getRemoteAddress() {
	return $nc(this->impl)->getRemoteAddress();
}

$InetSocketAddress* HttpsExchangeImpl::getLocalAddress() {
	return $nc(this->impl)->getLocalAddress();
}

$String* HttpsExchangeImpl::getProtocol() {
	return $nc(this->impl)->getProtocol();
}

$SSLSession* HttpsExchangeImpl::getSSLSession() {
	return $nc(this->impl)->getSSLSession();
}

$Object* HttpsExchangeImpl::getAttribute($String* name) {
	return $of($nc(this->impl)->getAttribute(name));
}

void HttpsExchangeImpl::setAttribute($String* name, Object$* value) {
	$nc(this->impl)->setAttribute(name, value);
}

void HttpsExchangeImpl::setStreams($InputStream* i, $OutputStream* o) {
	$nc(this->impl)->setStreams(i, o);
}

$HttpPrincipal* HttpsExchangeImpl::getPrincipal() {
	return $nc(this->impl)->getPrincipal();
}

$ExchangeImpl* HttpsExchangeImpl::getExchangeImpl() {
	return this->impl;
}

HttpsExchangeImpl::HttpsExchangeImpl() {
}

$Class* HttpsExchangeImpl::load$($String* name, bool initialize) {
	$loadClass(HttpsExchangeImpl, name, initialize, &_HttpsExchangeImpl_ClassInfo_, allocate$HttpsExchangeImpl);
	return class$;
}

$Class* HttpsExchangeImpl::class$ = nullptr;

		} // httpserver
	} // net
} // sun