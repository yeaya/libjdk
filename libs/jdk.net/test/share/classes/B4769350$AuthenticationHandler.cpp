#include <B4769350$AuthenticationHandler.h>
#include <B4769350.h>
#include <com/sun/net/httpserver/Headers.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void B4769350$AuthenticationHandler::init$() {
}

void B4769350$AuthenticationHandler::errorReply($HttpExchange* exchange, $String* reply) {
	$useLocalObjectStack();
	$$nc($nc(exchange)->getResponseHeaders())->add("Connection"_s, "close"_s);
	$$nc(exchange->getResponseHeaders())->add("WWW-Authenticate"_s, reply);
	exchange->sendResponseHeaders(401, 0);
	exchange->close();
}

void B4769350$AuthenticationHandler::proxyReply($HttpExchange* exchange, $String* reply) {
	$$nc($nc(exchange)->getResponseHeaders())->add("Proxy-Authenticate"_s, reply);
	exchange->sendResponseHeaders(407, 0);
}

void B4769350$AuthenticationHandler::okReply($HttpExchange* exchange) {
	$useLocalObjectStack();
	$$nc($nc(exchange)->getResponseHeaders())->add("Connection"_s, "close"_s);
	$var($String, response, "Hello ."_s);
	exchange->sendResponseHeaders(200, $(response->getBytes())->length);
	{
		$var($OutputStream, os, exchange->getResponseBody());
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(os)->write($(response->getBytes()));
			} catch ($Throwable& t$) {
				if (os != nullptr) {
					try {
						os->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (os != nullptr) {
				os->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	exchange->close();
}

B4769350$AuthenticationHandler::B4769350$AuthenticationHandler() {
}

$Class* B4769350$AuthenticationHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(B4769350$AuthenticationHandler, init$, void)},
		{"errorReply", "(Lcom/sun/net/httpserver/HttpExchange;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(B4769350$AuthenticationHandler, errorReply, void, $HttpExchange*, $String*), "java.io.IOException"},
		{"okReply", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $STATIC, $staticMethod(B4769350$AuthenticationHandler, okReply, void, $HttpExchange*), "java.io.IOException"},
		{"proxyReply", "(Lcom/sun/net/httpserver/HttpExchange;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(B4769350$AuthenticationHandler, proxyReply, void, $HttpExchange*, $String*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"B4769350$AuthenticationHandler", "B4769350", "AuthenticationHandler", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"B4769350$AuthenticationHandler",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"B4769350"
	};
	$loadClass(B4769350$AuthenticationHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B4769350$AuthenticationHandler);
	});
	return class$;
}

$Class* B4769350$AuthenticationHandler::class$ = nullptr;