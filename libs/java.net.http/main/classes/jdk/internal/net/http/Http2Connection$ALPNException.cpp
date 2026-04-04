#include <jdk/internal/net/http/Http2Connection$ALPNException.h>
#include <java/io/IOException.h>
#include <jdk/internal/net/http/AbstractAsyncSSLConnection.h>
#include <jdk/internal/net/http/Http2Connection.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAsyncSSLConnection = ::jdk::internal::net::http::AbstractAsyncSSLConnection;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void Http2Connection$ALPNException::init$($String* msg, $AbstractAsyncSSLConnection* connection) {
	$IOException::init$(msg);
	$set(this, connection, connection);
}

$AbstractAsyncSSLConnection* Http2Connection$ALPNException::getConnection() {
	return this->connection;
}

Http2Connection$ALPNException::Http2Connection$ALPNException() {
}

Http2Connection$ALPNException::Http2Connection$ALPNException(const Http2Connection$ALPNException& e) : $IOException(e) {
}

void Http2Connection$ALPNException::throw$() {
	throw *this;
}

$Class* Http2Connection$ALPNException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Http2Connection$ALPNException, serialVersionUID)},
		{"connection", "Ljdk/internal/net/http/AbstractAsyncSSLConnection;", nullptr, $FINAL | $TRANSIENT, $field(Http2Connection$ALPNException, connection)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljdk/internal/net/http/AbstractAsyncSSLConnection;)V", nullptr, 0, $method(Http2Connection$ALPNException, init$, void, $String*, $AbstractAsyncSSLConnection*)},
		{"getConnection", "()Ljdk/internal/net/http/AbstractAsyncSSLConnection;", nullptr, 0, $method(Http2Connection$ALPNException, getConnection, $AbstractAsyncSSLConnection*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Http2Connection$ALPNException", "jdk.internal.net.http.Http2Connection", "ALPNException", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.Http2Connection$ALPNException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.Http2Connection"
	};
	$loadClass(Http2Connection$ALPNException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Http2Connection$ALPNException);
	});
	return class$;
}

$Class* Http2Connection$ALPNException::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk