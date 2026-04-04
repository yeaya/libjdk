#include <jdk/internal/net/http/HeaderFilter.h>
#include <jdk/internal/net/http/HttpRequestImpl.h>
#include <jdk/internal/net/http/MultiExchange.h>
#include <jdk/internal/net/http/Response.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpRequestImpl = ::jdk::internal::net::http::HttpRequestImpl;
using $MultiExchange = ::jdk::internal::net::http::MultiExchange;
using $Response = ::jdk::internal::net::http::Response;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

$Class* HeaderFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"request", "(Ljdk/internal/net/http/HttpRequestImpl;Ljdk/internal/net/http/MultiExchange;)V", "(Ljdk/internal/net/http/HttpRequestImpl;Ljdk/internal/net/http/MultiExchange<*>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(HeaderFilter, request, void, $HttpRequestImpl*, $MultiExchange*), "java.io.IOException"},
		{"response", "(Ljdk/internal/net/http/Response;)Ljdk/internal/net/http/HttpRequestImpl;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HeaderFilter, response, $HttpRequestImpl*, $Response*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.HeaderFilter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HeaderFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeaderFilter);
	});
	return class$;
}

$Class* HeaderFilter::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk