#include <MethodsTest.h>
#include <MethodsTest$1.h>
#include <java/net/ProxySelector.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient$Builder.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$BodyHandlers.h>
#include <java/net/http/HttpResponse.h>
#include <jcpp.h>

#undef FORBIDDEN
#undef NO_PROXY
#undef TEST_URI

using $MethodsTest$1 = ::MethodsTest$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpClient$Builder = ::java::net::http::HttpClient$Builder;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;
using $HttpResponse$BodyHandlers = ::java::net::http::HttpResponse$BodyHandlers;

$URI* MethodsTest::TEST_URI = nullptr;
$String* MethodsTest::FORBIDDEN = nullptr;
$HttpClient* MethodsTest::client = nullptr;

void MethodsTest::init$() {
}

void MethodsTest::bad($String* name) {
	$init(MethodsTest);
	$useLocalObjectStack();
	$var($HttpRequest$Builder, builder, $HttpRequest::newBuilder(MethodsTest::TEST_URI));
	try {
		$nc(builder)->method(name, $($HttpRequest$BodyPublishers::noBody()));
		$throwNew($RuntimeException, $$str({"Expected IAE for method:"_s, name}));
	} catch ($IllegalArgumentException& expected) {
		$nc($System::out)->println($$str({"Got expected IAE: "_s, expected}));
	}
	try {
		$var($HttpRequest, req, $new($MethodsTest$1, name));
		$nc(MethodsTest::client)->send(req, $($HttpResponse$BodyHandlers::ofString()));
		$throwNew($RuntimeException, $$str({"Expected IAE for method:"_s, name}));
	} catch ($IllegalArgumentException& expected) {
		$nc($System::out)->println($$str({"Got expected IAE: "_s, expected}));
	}
}

void MethodsTest::good($String* name) {
	$init(MethodsTest);
	$useLocalObjectStack();
	$var($HttpRequest$Builder, builder, $HttpRequest::newBuilder(MethodsTest::TEST_URI));
	try {
		$nc(builder)->method(name, $($HttpRequest$BodyPublishers::noBody()));
	} catch ($IllegalArgumentException& e) {
		$throwNew($RuntimeException, $$str({"Unexpected IAE for header:"_s, name}));
	}
}

void MethodsTest::main($StringArray* args) {
	$init(MethodsTest);
	$useLocalObjectStack();
	bad("bad:method"_s);
	bad("Foo\n"_s);
	good("X-Foo!"_s);
	good("Bar~"_s);
	good("x"_s);
	bad(" "_s);
	bad("x y"_s);
	bad("x\t"_s);
	bad("Bar\r\n"_s);
	good("Hello#world"_s);
	good("Qwer#ert"_s);
	bad(u"méthode"_s);
	for (char16_t c = 0; c < 256; ++c) {
		if (c < 32 || MethodsTest::FORBIDDEN->indexOf(c) > -1 || c >= 127) {
			bad($$str({"me"_s, $$str(c), "thod"_s}));
			bad($$str({$$str(c), "thod"_s}));
			bad($$str({"me"_s, $$str(c)}));
		} else {
			good($$str({"me"_s, $$str(c), "thod"_s}));
			good($$str({$$str(c), "thod"_s}));
			good($$str({"me"_s, $$str(c)}));
		}
	}
}

void MethodsTest::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(MethodsTest::FORBIDDEN, "()<>@,;:\\\"/[]?={} \t\r\n"_s);
	$assignStatic(MethodsTest::TEST_URI, $URI::create("http://www.foo.com/"_s));
	$init($HttpClient$Builder);
	$assignStatic(MethodsTest::client, $$nc($$nc($HttpClient::newBuilder())->proxy($HttpClient$Builder::NO_PROXY))->build());
}

MethodsTest::MethodsTest() {
}

$Class* MethodsTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TEST_URI", "Ljava/net/URI;", nullptr, $STATIC | $FINAL, $staticField(MethodsTest, TEST_URI)},
		{"FORBIDDEN", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(MethodsTest, FORBIDDEN)},
		{"client", "Ljava/net/http/HttpClient;", nullptr, $STATIC | $FINAL, $staticField(MethodsTest, client)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MethodsTest, init$, void)},
		{"bad", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(MethodsTest, bad, void, $String*), "java.io.IOException,java.lang.InterruptedException"},
		{"good", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(MethodsTest, good, void, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MethodsTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MethodsTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MethodsTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"MethodsTest$1"
	};
	$loadClass(MethodsTest, name, initialize, &classInfo$$, MethodsTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MethodsTest);
	});
	return class$;
}

$Class* MethodsTest::class$ = nullptr;