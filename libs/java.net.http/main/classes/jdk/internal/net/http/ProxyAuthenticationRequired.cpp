#include <jdk/internal/net/http/ProxyAuthenticationRequired.h>
#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <jdk/internal/net/http/Response.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Response = ::jdk::internal::net::http::Response;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

bool ProxyAuthenticationRequired::$assertionsDisabled = false;

void ProxyAuthenticationRequired::init$($Response* proxyResponse) {
	$IOException::init$("Proxy Authentication Required"_s);
	if (!ProxyAuthenticationRequired::$assertionsDisabled && !($nc(proxyResponse)->statusCode() == 407)) {
		$throwNew($AssertionError);
	}
	$set(this, proxyResponse, proxyResponse);
}

void ProxyAuthenticationRequired::clinit$($Class* clazz) {
	ProxyAuthenticationRequired::$assertionsDisabled = !ProxyAuthenticationRequired::class$->desiredAssertionStatus();
}

ProxyAuthenticationRequired::ProxyAuthenticationRequired() {
}

ProxyAuthenticationRequired::ProxyAuthenticationRequired(const ProxyAuthenticationRequired& e) : $IOException(e) {
}

void ProxyAuthenticationRequired::throw$() {
	throw *this;
}

$Class* ProxyAuthenticationRequired::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ProxyAuthenticationRequired, $assertionsDisabled)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProxyAuthenticationRequired, serialVersionUID)},
		{"proxyResponse", "Ljdk/internal/net/http/Response;", nullptr, $FINAL | $TRANSIENT, $field(ProxyAuthenticationRequired, proxyResponse)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Response;)V", nullptr, $PUBLIC, $method(ProxyAuthenticationRequired, init$, void, $Response*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.ProxyAuthenticationRequired",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProxyAuthenticationRequired, name, initialize, &classInfo$$, ProxyAuthenticationRequired::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ProxyAuthenticationRequired);
	});
	return class$;
}

$Class* ProxyAuthenticationRequired::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk