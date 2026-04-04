#include <jdk/internal/net/http/HttpClientImpl$SingleFacadeFactory.h>
#include <java/lang/AssertionError.h>
#include <jdk/internal/net/http/HttpClientFacade.h>
#include <jdk/internal/net/http/HttpClientImpl.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpClientFacade = ::jdk::internal::net::http::HttpClientFacade;
using $HttpClientImpl = ::jdk::internal::net::http::HttpClientImpl;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

bool HttpClientImpl$SingleFacadeFactory::$assertionsDisabled = false;

void HttpClientImpl$SingleFacadeFactory::init$() {
}

$HttpClientFacade* HttpClientImpl$SingleFacadeFactory::createFacade($HttpClientImpl* impl) {
	if (!HttpClientImpl$SingleFacadeFactory::$assertionsDisabled && !(this->facade == nullptr)) {
		$throwNew($AssertionError);
	}
	return ($set(this, facade, $new($HttpClientFacade, impl)));
}

void HttpClientImpl$SingleFacadeFactory::clinit$($Class* clazz) {
	$load($HttpClientImpl);
	HttpClientImpl$SingleFacadeFactory::$assertionsDisabled = !$HttpClientImpl::class$->desiredAssertionStatus();
}

HttpClientImpl$SingleFacadeFactory::HttpClientImpl$SingleFacadeFactory() {
}

$Class* HttpClientImpl$SingleFacadeFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HttpClientImpl$SingleFacadeFactory, $assertionsDisabled)},
		{"facade", "Ljdk/internal/net/http/HttpClientFacade;", nullptr, 0, $field(HttpClientImpl$SingleFacadeFactory, facade)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(HttpClientImpl$SingleFacadeFactory, init$, void)},
		{"createFacade", "(Ljdk/internal/net/http/HttpClientImpl;)Ljdk/internal/net/http/HttpClientFacade;", nullptr, 0, $method(HttpClientImpl$SingleFacadeFactory, createFacade, $HttpClientFacade*, $HttpClientImpl*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.HttpClientImpl$SingleFacadeFactory", "jdk.internal.net.http.HttpClientImpl", "SingleFacadeFactory", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.HttpClientImpl$SingleFacadeFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.HttpClientImpl"
	};
	$loadClass(HttpClientImpl$SingleFacadeFactory, name, initialize, &classInfo$$, HttpClientImpl$SingleFacadeFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HttpClientImpl$SingleFacadeFactory);
	});
	return class$;
}

$Class* HttpClientImpl$SingleFacadeFactory::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk