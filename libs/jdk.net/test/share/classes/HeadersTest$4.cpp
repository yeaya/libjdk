#include <HeadersTest$4.h>
#include <HeadersTest.h>
#include <java/net/URI.h>
#include <java/net/http/HttpHeaders.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest.h>
#include <java/util/HashMap.h>
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
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;

void HeadersTest$4::init$() {
	$HttpRequest::init$();
}

$Optional* HeadersTest$4::bodyPublisher() {
	return $Optional::of($($HttpRequest$BodyPublishers::noBody()));
}

$String* HeadersTest$4::method() {
	return "GET"_s;
}

$Optional* HeadersTest$4::timeout() {
	return $Optional::empty();
}

bool HeadersTest$4::expectContinue() {
	return false;
}

$URI* HeadersTest$4::uri() {
	$init($HeadersTest);
	return $HeadersTest::TEST_URI;
}

$Optional* HeadersTest$4::version() {
	return $Optional::empty();
}

$HttpHeaders* HeadersTest$4::headers() {
	$var($Map, map, $new($HashMap));
	map->put("x-bar"_s, nullptr);
	$init($HeadersTest);
	return $HttpHeaders::of(map, $HeadersTest::ACCEPT_ALL);
}

HeadersTest$4::HeadersTest$4() {
}

$Class* HeadersTest$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadersTest$4, init$, void)},
		{"bodyPublisher", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpRequest$BodyPublisher;>;", $PUBLIC, $virtualMethod(HeadersTest$4, bodyPublisher, $Optional*)},
		{"expectContinue", "()Z", nullptr, $PUBLIC, $virtualMethod(HeadersTest$4, expectContinue, bool)},
		{"headers", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC, $virtualMethod(HeadersTest$4, headers, $HttpHeaders*)},
		{"method", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HeadersTest$4, method, $String*)},
		{"timeout", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Duration;>;", $PUBLIC, $virtualMethod(HeadersTest$4, timeout, $Optional*)},
		{"uri", "()Ljava/net/URI;", nullptr, $PUBLIC, $virtualMethod(HeadersTest$4, uri, $URI*)},
		{"version", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpClient$Version;>;", $PUBLIC, $virtualMethod(HeadersTest$4, version, $Optional*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadersTest",
		"nullValue",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadersTest$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadersTest$4",
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
	$loadClass(HeadersTest$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadersTest$4);
	});
	return class$;
}

$Class* HeadersTest$4::class$ = nullptr;