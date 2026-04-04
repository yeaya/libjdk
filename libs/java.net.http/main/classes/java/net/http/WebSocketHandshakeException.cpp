#include <java/net/http/WebSocketHandshakeException.h>
#include <java/io/IOException.h>
#include <java/net/http/HttpResponse.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpResponse = ::java::net::http::HttpResponse;

namespace java {
	namespace net {
		namespace http {

void WebSocketHandshakeException::init$($HttpResponse* response) {
	$IOException::init$();
	$set(this, response, response);
}

$HttpResponse* WebSocketHandshakeException::getResponse() {
	return this->response;
}

WebSocketHandshakeException* WebSocketHandshakeException::initCause($Throwable* cause) {
	return $cast(WebSocketHandshakeException, $IOException::initCause(cause));
}

WebSocketHandshakeException::WebSocketHandshakeException() {
}

WebSocketHandshakeException::WebSocketHandshakeException(const WebSocketHandshakeException& e) : $IOException(e) {
}

void WebSocketHandshakeException::throw$() {
	throw *this;
}

$Class* WebSocketHandshakeException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WebSocketHandshakeException, serialVersionUID)},
		{"response", "Ljava/net/http/HttpResponse;", "Ljava/net/http/HttpResponse<*>;", $PRIVATE | $FINAL | $TRANSIENT, $field(WebSocketHandshakeException, response)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/HttpResponse;)V", "(Ljava/net/http/HttpResponse<*>;)V", $PUBLIC, $method(WebSocketHandshakeException, init$, void, $HttpResponse*)},
		{"getResponse", "()Ljava/net/http/HttpResponse;", "()Ljava/net/http/HttpResponse<*>;", $PUBLIC, $method(WebSocketHandshakeException, getResponse, $HttpResponse*)},
		{"initCause", "(Ljava/lang/Throwable;)Ljava/net/http/WebSocketHandshakeException;", nullptr, $PUBLIC, $virtualMethod(WebSocketHandshakeException, initCause, WebSocketHandshakeException*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.net.http.WebSocketHandshakeException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WebSocketHandshakeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WebSocketHandshakeException);
	});
	return class$;
}

$Class* WebSocketHandshakeException::class$ = nullptr;

		} // http
	} // net
} // java