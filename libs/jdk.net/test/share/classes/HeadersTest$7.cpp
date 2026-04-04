#include <HeadersTest$7.h>
#include <HeadersTest.h>
#include <java/net/URI.h>
#include <java/net/http/HttpHeaders.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest.h>
#include <java/util/Optional.h>
#include <jcpp.h>

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
using $Optional = ::java::util::Optional;

void HeadersTest$7::init$() {
	$HttpRequest::init$();
}

$Optional* HeadersTest$7::bodyPublisher() {
	return $Optional::of($($HttpRequest$BodyPublishers::noBody()));
}

$String* HeadersTest$7::method() {
	return "GET"_s;
}

$Optional* HeadersTest$7::timeout() {
	return $Optional::empty();
}

bool HeadersTest$7::expectContinue() {
	return false;
}

$URI* HeadersTest$7::uri() {
	$init($HeadersTest);
	return $HeadersTest::TEST_URI;
}

$Optional* HeadersTest$7::version() {
	return $Optional::empty();
}

$HttpHeaders* HeadersTest$7::headers() {
	return nullptr;
}

HeadersTest$7::HeadersTest$7() {
}

$Class* HeadersTest$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadersTest$7, init$, void)},
		{"bodyPublisher", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpRequest$BodyPublisher;>;", $PUBLIC, $virtualMethod(HeadersTest$7, bodyPublisher, $Optional*)},
		{"expectContinue", "()Z", nullptr, $PUBLIC, $virtualMethod(HeadersTest$7, expectContinue, bool)},
		{"headers", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC, $virtualMethod(HeadersTest$7, headers, $HttpHeaders*)},
		{"method", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HeadersTest$7, method, $String*)},
		{"timeout", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Duration;>;", $PUBLIC, $virtualMethod(HeadersTest$7, timeout, $Optional*)},
		{"uri", "()Ljava/net/URI;", nullptr, $PUBLIC, $virtualMethod(HeadersTest$7, uri, $URI*)},
		{"version", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpClient$Version;>;", $PUBLIC, $virtualMethod(HeadersTest$7, version, $Optional*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadersTest",
		"nullHeaders",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadersTest$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadersTest$7",
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
	$loadClass(HeadersTest$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadersTest$7);
	});
	return class$;
}

$Class* HeadersTest$7::class$ = nullptr;