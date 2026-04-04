#include <HeadersTest$6.h>
#include <HeadersTest.h>
#include <java/net/URI.h>
#include <java/net/http/HttpHeaders.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/function/BiPredicate.h>
#include <jcpp.h>

#undef ACCEPT_ALL
#undef TEST_URI

using $HeadersTest = ::HeadersTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $HttpHeaders = ::java::net::http::HttpHeaders;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;

void HeadersTest$6::init$() {
	$HttpRequest::init$();
}

$Optional* HeadersTest$6::bodyPublisher() {
	return $Optional::of($($HttpRequest$BodyPublishers::noBody()));
}

$String* HeadersTest$6::method() {
	return "GET"_s;
}

$Optional* HeadersTest$6::timeout() {
	return $Optional::empty();
}

bool HeadersTest$6::expectContinue() {
	return false;
}

$URI* HeadersTest$6::uri() {
	$init($HeadersTest);
	return $HeadersTest::TEST_URI;
}

$Optional* HeadersTest$6::version() {
	return $Optional::empty();
}

$HttpHeaders* HeadersTest$6::headers() {
	$init($HeadersTest);
	return $HttpHeaders::of(nullptr, $HeadersTest::ACCEPT_ALL);
}

HeadersTest$6::HeadersTest$6() {
}

$Class* HeadersTest$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadersTest$6, init$, void)},
		{"bodyPublisher", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpRequest$BodyPublisher;>;", $PUBLIC, $virtualMethod(HeadersTest$6, bodyPublisher, $Optional*)},
		{"expectContinue", "()Z", nullptr, $PUBLIC, $virtualMethod(HeadersTest$6, expectContinue, bool)},
		{"headers", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC, $virtualMethod(HeadersTest$6, headers, $HttpHeaders*)},
		{"method", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HeadersTest$6, method, $String*)},
		{"timeout", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Duration;>;", $PUBLIC, $virtualMethod(HeadersTest$6, timeout, $Optional*)},
		{"uri", "()Ljava/net/URI;", nullptr, $PUBLIC, $virtualMethod(HeadersTest$6, uri, $URI*)},
		{"version", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpClient$Version;>;", $PUBLIC, $virtualMethod(HeadersTest$6, version, $Optional*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadersTest",
		"nullHeaders",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadersTest$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadersTest$6",
		"java.net.http.HttpRequest",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HeadersTest"
	};
	$loadClass(HeadersTest$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadersTest$6);
	});
	return class$;
}

$Class* HeadersTest$6::class$ = nullptr;