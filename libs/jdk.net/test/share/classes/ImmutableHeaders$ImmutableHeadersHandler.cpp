#include <ImmutableHeaders$ImmutableHeadersHandler.h>
#include <ImmutableHeaders.h>
#include <com/sun/net/httpserver/Headers.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <jcpp.h>

#undef US_ASCII

using $Headers = ::com::sun::net::httpserver::Headers;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;

void ImmutableHeaders$ImmutableHeadersHandler::init$() {
}

void ImmutableHeaders$ImmutableHeadersHandler::handle($HttpExchange* he) {
	$useLocalObjectStack();
	$var($String, method, $nc(he)->getRequestMethod());
	$var($InputStream, is, he->getRequestBody());
	$var($Headers, h, he->getResponseHeaders());
	$nc(h)->add("X-Foo-Response"_s, "resp"_s);
	he->sendResponseHeaders(200, "Hello world"_s->length());
	$var($OutputStream, os, he->getResponseBody());
	$init($StandardCharsets);
	$nc(os)->write($("Hello world"_s->getBytes($StandardCharsets::US_ASCII)));
	os->close();
}

ImmutableHeaders$ImmutableHeadersHandler::ImmutableHeaders$ImmutableHeadersHandler() {
}

$Class* ImmutableHeaders$ImmutableHeadersHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ImmutableHeaders$ImmutableHeadersHandler, init$, void)},
		{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, $virtualMethod(ImmutableHeaders$ImmutableHeadersHandler, handle, void, $HttpExchange*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ImmutableHeaders$ImmutableHeadersHandler", "ImmutableHeaders", "ImmutableHeadersHandler", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ImmutableHeaders$ImmutableHeadersHandler",
		"java.lang.Object",
		"com.sun.net.httpserver.HttpHandler",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ImmutableHeaders"
	};
	$loadClass(ImmutableHeaders$ImmutableHeadersHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImmutableHeaders$ImmutableHeadersHandler);
	});
	return class$;
}

$Class* ImmutableHeaders$ImmutableHeadersHandler::class$ = nullptr;