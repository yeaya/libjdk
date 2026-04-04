#include <RestrictedHeadersTest.h>
#include <java/net/URI.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URI = ::java::net::URI;
using $HttpRequest = ::java::net::http::HttpRequest;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

$Set* RestrictedHeadersTest::defaultRestrictedHeaders = nullptr;

void RestrictedHeadersTest::init$() {
}

void RestrictedHeadersTest::main($StringArray* args) {
	$init(RestrictedHeadersTest);
	if ($nc(args)->length == 0) {
		runDefaultTest();
	} else {
		runTest($($Set::of(args)));
	}
}

void RestrictedHeadersTest::runDefaultTest() {
	$init(RestrictedHeadersTest);
	$useLocalObjectStack();
	$nc($System::out)->println("DEFAULT TEST: no property set"_s);
	{
		$var($Iterator, i$, $nc(RestrictedHeadersTest::defaultRestrictedHeaders)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, header, $cast($String, i$->next()));
			{
				checkHeader(header, "foo"_s, false);
			}
		}
	}
	checkHeader("foobar"_s, "barfoo"_s, true);
	checkHeader("date"_s, "today"_s, true);
}

void RestrictedHeadersTest::checkHeader($String* name, $String* value, bool succeed) {
	$init(RestrictedHeadersTest);
	$useLocalObjectStack();
	try {
		$var($HttpRequest, request, $$nc($$nc($$nc($HttpRequest::newBuilder($($URI::create("https://foo.com/"_s))))->header(name, value))->GET())->build());
		if (!succeed) {
			$var($String, s, $str({name, "/"_s, value, " should have failed"_s}));
			$throwNew($RuntimeException, s);
		}
		$nc($System::out)->printf("%s = %s succeeded as expected\n"_s, $$new($ObjectArray, {
			name,
			value
		}));
	} catch ($IllegalArgumentException& iae) {
		if (succeed) {
			$var($String, s, $str({name, "/"_s, value, " should have succeeded"_s}));
			$throwNew($RuntimeException, s);
		}
		$nc($System::out)->printf("%s = %s failed as expected\n"_s, $$new($ObjectArray, {
			name,
			value
		}));
	}
}

void RestrictedHeadersTest::runTest($Set* args) {
	$init(RestrictedHeadersTest);
	$useLocalObjectStack();
	$nc($System::out)->print("RUNTEST: allowed headers set in property: "_s);
	{
		$var($Iterator, i$, $nc(args)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, arg, $cast($String, i$->next()));
			$System::out->printf("%s "_s, $$new($ObjectArray, {arg}));
		}
	}
	$System::out->println(""_s);
	{
		$var($Iterator, i$, args->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, header, $cast($String, i$->next()));
			{
				checkHeader(header, "val"_s, true);
			}
		}
	}
	{
		$var($Iterator, i$, $nc(RestrictedHeadersTest::defaultRestrictedHeaders)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, header, $cast($String, i$->next()));
			if (!args->contains(header)) {
				checkHeader(header, "foo"_s, false);
			}
		}
	}
}

void RestrictedHeadersTest::clinit$($Class* clazz) {
	$assignStatic(RestrictedHeadersTest::defaultRestrictedHeaders, $Set::of("connection"_s, "content-length"_s, "expect"_s, "host"_s, "upgrade"_s));
}

RestrictedHeadersTest::RestrictedHeadersTest() {
}

$Class* RestrictedHeadersTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultRestrictedHeaders", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $STATIC, $staticField(RestrictedHeadersTest, defaultRestrictedHeaders)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RestrictedHeadersTest, init$, void)},
		{"checkHeader", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(RestrictedHeadersTest, checkHeader, void, $String*, $String*, bool)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RestrictedHeadersTest, main, void, $StringArray*)},
		{"runDefaultTest", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(RestrictedHeadersTest, runDefaultTest, void)},
		{"runTest", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/lang/String;>;)V", $PRIVATE | $STATIC, $staticMethod(RestrictedHeadersTest, runTest, void, $Set*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"RestrictedHeadersTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RestrictedHeadersTest, name, initialize, &classInfo$$, RestrictedHeadersTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RestrictedHeadersTest);
	});
	return class$;
}

$Class* RestrictedHeadersTest::class$ = nullptr;