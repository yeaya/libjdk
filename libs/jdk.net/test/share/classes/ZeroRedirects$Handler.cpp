#include <ZeroRedirects$Handler.h>
#include <ZeroRedirects.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ZeroRedirects$Handler::init$() {
}

void ZeroRedirects$Handler::handle($HttpExchange* t) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($String, reply, "Hello world"_s);
		int32_t len = reply->length();
		$nc($System::out)->printf("Sending response 200\n"_s, $$new($ObjectArray, 0));
		$nc(t)->sendResponseHeaders(200, len);
		$var($OutputStream, o, t->getResponseBody());
		$nc(o)->write($(reply->getBytes()));
		t->close();
	}
}

ZeroRedirects$Handler::ZeroRedirects$Handler() {
}

$Class* ZeroRedirects$Handler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ZeroRedirects$Handler, init$, void)},
		{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ZeroRedirects$Handler, handle, void, $HttpExchange*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ZeroRedirects$Handler", "ZeroRedirects", "Handler", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ZeroRedirects$Handler",
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
		"ZeroRedirects"
	};
	$loadClass(ZeroRedirects$Handler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ZeroRedirects$Handler);
	});
	return class$;
}

$Class* ZeroRedirects$Handler::class$ = nullptr;