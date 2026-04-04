#include <MultiAuthTest$Handler.h>
#include <MultiAuthTest.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <jcpp.h>

#undef POST_BODY
#undef US_ASCII

using $MultiAuthTest = ::MultiAuthTest;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;

$volatile(bool) MultiAuthTest$Handler::ok = false;

void MultiAuthTest$Handler::init$() {
}

void MultiAuthTest$Handler::handle($HttpExchange* he) {
	$useLocalObjectStack();
	$var($String, method, $nc(he)->getRequestMethod());
	$var($InputStream, is, he->getRequestBody());
	if ($nc(method)->equalsIgnoreCase("POST"_s)) {
		$init($StandardCharsets);
		$var($String, requestBody, $new($String, $($nc(is)->readAllBytes()), $StandardCharsets::US_ASCII));
		$init($MultiAuthTest);
		if (!requestBody->equals($MultiAuthTest::POST_BODY)) {
			he->sendResponseHeaders(500, -1);
			MultiAuthTest$Handler::ok = false;
		} else {
			he->sendResponseHeaders(200, -1);
			MultiAuthTest$Handler::ok = true;
		}
	} else {
		he->sendResponseHeaders(200, "Hello world"_s->length());
		$var($OutputStream, os, he->getResponseBody());
		$init($StandardCharsets);
		$nc(os)->write($("Hello world"_s->getBytes($StandardCharsets::US_ASCII)));
		os->close();
		MultiAuthTest$Handler::ok = true;
	}
}

MultiAuthTest$Handler::MultiAuthTest$Handler() {
}

$Class* MultiAuthTest$Handler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ok", "Z", nullptr, $STATIC | $VOLATILE, $staticField(MultiAuthTest$Handler, ok)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MultiAuthTest$Handler, init$, void)},
		{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, $virtualMethod(MultiAuthTest$Handler, handle, void, $HttpExchange*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MultiAuthTest$Handler", "MultiAuthTest", "Handler", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MultiAuthTest$Handler",
		"java.lang.Object",
		"com.sun.net.httpserver.HttpHandler",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"MultiAuthTest"
	};
	$loadClass(MultiAuthTest$Handler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiAuthTest$Handler);
	});
	return class$;
}

$Class* MultiAuthTest$Handler::class$ = nullptr;