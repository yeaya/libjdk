#include <PlainProxyConnectionTest$1.h>
#include <PlainProxyConnectionTest.h>
#include <com/sun/net/httpserver/Headers.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <java/io/OutputStream.h>
#include <java/net/InetSocketAddress.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/concurrent/ConcurrentLinkedQueue.h>
#include <jcpp.h>

#undef UTF_8

using $PlainProxyConnectionTest = ::PlainProxyConnectionTest;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;

void PlainProxyConnectionTest$1::init$() {
}

void PlainProxyConnectionTest$1::handle($HttpExchange* he) {
	$useLocalObjectStack();
	$init($PlainProxyConnectionTest);
	$nc($PlainProxyConnectionTest::connections)->add($($nc(he)->getRemoteAddress()));
	$$nc(he->getResponseHeaders())->add("encoding"_s, "UTF-8"_s);
	$init($StandardCharsets);
	$var($bytes, bytes, "<html><body><p>Hello World!</body></html>"_s->getBytes($StandardCharsets::UTF_8));
	he->sendResponseHeaders(200, bytes->length > 0 ? bytes->length : -1);
	$$nc(he->getResponseBody())->write(bytes);
	he->close();
}

PlainProxyConnectionTest$1::PlainProxyConnectionTest$1() {
}

$Class* PlainProxyConnectionTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PlainProxyConnectionTest$1, init$, void)},
		{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, $virtualMethod(PlainProxyConnectionTest$1, handle, void, $HttpExchange*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"PlainProxyConnectionTest",
		"createHttpsServer",
		"()Lcom/sun/net/httpserver/HttpServer;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PlainProxyConnectionTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PlainProxyConnectionTest$1",
		"java.lang.Object",
		"com.sun.net.httpserver.HttpHandler",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"PlainProxyConnectionTest"
	};
	$loadClass(PlainProxyConnectionTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlainProxyConnectionTest$1);
	});
	return class$;
}

$Class* PlainProxyConnectionTest$1::class$ = nullptr;