#include <LocalHostCookie$MyCookieHandler.h>
#include <LocalHostCookie.h>
#include <com/sun/net/httpserver/Headers.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $LocalHostCookie = ::LocalHostCookie;
using $Headers = ::com::sun::net::httpserver::Headers;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LocalHostCookie$MyCookieHandler::init$($LocalHostCookie* this$0) {
	$set(this, this$0, this$0);
}

void LocalHostCookie$MyCookieHandler::handle($HttpExchange* exchange) {
	$useLocalObjectStack();
	$var($String, requestMethod, $nc(exchange)->getRequestMethod());
	if ($nc(requestMethod)->equalsIgnoreCase("GET"_s)) {
		$var($Headers, responseHeaders, exchange->getResponseHeaders());
		$nc(responseHeaders)->set("Content-Type"_s, "text/plain"_s);
		responseHeaders->set("Date"_s, "June 13th 2012"_s);
		responseHeaders->set("Set-Cookie2"_s, "name=value"_s);
		exchange->sendResponseHeaders(200, 0);
		$var($OutputStream, os, exchange->getResponseBody());
		$var($String, str, "This is what the server sent!"_s);
		$nc(os)->write($(str->getBytes()));
		os->flush();
		os->close();
	}
}

LocalHostCookie$MyCookieHandler::LocalHostCookie$MyCookieHandler() {
}

$Class* LocalHostCookie$MyCookieHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LLocalHostCookie;", nullptr, $FINAL | $SYNTHETIC, $field(LocalHostCookie$MyCookieHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LLocalHostCookie;)V", nullptr, 0, $method(LocalHostCookie$MyCookieHandler, init$, void, $LocalHostCookie*)},
		{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, $virtualMethod(LocalHostCookie$MyCookieHandler, handle, void, $HttpExchange*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LocalHostCookie$MyCookieHandler", "LocalHostCookie", "MyCookieHandler", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LocalHostCookie$MyCookieHandler",
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
		"LocalHostCookie"
	};
	$loadClass(LocalHostCookie$MyCookieHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocalHostCookie$MyCookieHandler);
	});
	return class$;
}

$Class* LocalHostCookie$MyCookieHandler::class$ = nullptr;