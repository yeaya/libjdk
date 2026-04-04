#include <HeadersTest$2.h>
#include <HeadersTest.h>
#include <java/net/URI.h>
#include <java/net/http/HttpHeaders.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/function/BiPredicate.h>
#include <jcpp.h>

#undef ACCEPT_ALL
#undef TEST_URI

using $HeadersTest = ::HeadersTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $HttpHeaders = ::java::net::http::HttpHeaders;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;

void HeadersTest$2::init$($String* val$value) {
	$set(this, val$value, val$value);
	$HttpRequest::init$();
}

$Optional* HeadersTest$2::bodyPublisher() {
	return $Optional::of($($HttpRequest$BodyPublishers::noBody()));
}

$String* HeadersTest$2::method() {
	return "GET"_s;
}

$Optional* HeadersTest$2::timeout() {
	return $Optional::empty();
}

bool HeadersTest$2::expectContinue() {
	return false;
}

$URI* HeadersTest$2::uri() {
	$init($HeadersTest);
	return $HeadersTest::TEST_URI;
}

$Optional* HeadersTest$2::version() {
	return $Optional::empty();
}

$HttpHeaders* HeadersTest$2::headers() {
	$useLocalObjectStack();
	$var($Map, map, $Map::of("x-bad"_s, $($List::of(this->val$value))));
	$init($HeadersTest);
	return $HttpHeaders::of(map, $HeadersTest::ACCEPT_ALL);
}

HeadersTest$2::HeadersTest$2() {
}

$Class* HeadersTest$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$value", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(HeadersTest$2, val$value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(HeadersTest$2, init$, void, $String*)},
		{"bodyPublisher", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpRequest$BodyPublisher;>;", $PUBLIC, $virtualMethod(HeadersTest$2, bodyPublisher, $Optional*)},
		{"expectContinue", "()Z", nullptr, $PUBLIC, $virtualMethod(HeadersTest$2, expectContinue, bool)},
		{"headers", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC, $virtualMethod(HeadersTest$2, headers, $HttpHeaders*)},
		{"method", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HeadersTest$2, method, $String*)},
		{"timeout", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Duration;>;", $PUBLIC, $virtualMethod(HeadersTest$2, timeout, $Optional*)},
		{"uri", "()Ljava/net/URI;", nullptr, $PUBLIC, $virtualMethod(HeadersTest$2, uri, $URI*)},
		{"version", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpClient$Version;>;", $PUBLIC, $virtualMethod(HeadersTest$2, version, $Optional*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadersTest",
		"badValue",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadersTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadersTest$2",
		"java.net.http.HttpRequest",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HeadersTest"
	};
	$loadClass(HeadersTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadersTest$2);
	});
	return class$;
}

$Class* HeadersTest$2::class$ = nullptr;