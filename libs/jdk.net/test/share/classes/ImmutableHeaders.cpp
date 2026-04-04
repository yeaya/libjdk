#include <ImmutableHeaders.h>
#include <ImmutableHeaders$ImmutableHeadersHandler.h>
#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient$Builder.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/HttpHeaders.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$BodyHandlers.h>
#include <java/net/http/HttpResponse.h>
#include <java/util/List.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <jcpp.h>

#undef RESPONSE

using $ImmutableHeaders$ImmutableHeadersHandler = ::ImmutableHeaders$ImmutableHeadersHandler;
using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpHeaders = ::java::net::http::HttpHeaders;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandlers = ::java::net::http::HttpResponse$BodyHandlers;
using $List = ::java::util::List;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;

$String* ImmutableHeaders::RESPONSE = nullptr;

void ImmutableHeaders::init$() {
}

void ImmutableHeaders::main($StringArray* args) {
	$init(ImmutableHeaders);
	$useLocalObjectStack();
	$var($InetSocketAddress, addr, $new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), 0));
	$var($HttpServer, server, $HttpServer::create(addr, 10));
	$var($ExecutorService, serverExecutor, $Executors::newCachedThreadPool());
	$var($ExecutorService, clientExecutor, $Executors::newCachedThreadPool());
	$nc(server)->createContext("/test"_s, $$new($ImmutableHeaders$ImmutableHeadersHandler));
	int32_t port = $$nc(server->getAddress())->getPort();
	$nc($System::out)->println($$str({"Server port = "_s, $$str(port)}));
	server->setExecutor(serverExecutor);
	server->start();
	$var($HttpClient, client, $$nc($$nc($HttpClient::newBuilder())->executor(clientExecutor))->build());
	$var($Throwable, var$0, nullptr);
	try {
		$var($URI, uri, $new($URI, $$str({"http://localhost:"_s, $$str(port), "/test/foo"_s})));
		$var($HttpRequest, req, $$nc($$nc($$nc($$nc($HttpRequest::newBuilder(uri))->headers($$new($StringArray, {
			"X-Foo"_s,
			"bar"_s
		})))->headers($$new($StringArray, {
			"X-Bar"_s,
			"foo"_s
		})))->GET())->build());
		try {
			$var($HttpHeaders, hd, $nc(req)->headers());
			$var($List, v, $nc(hd)->allValues("X-Foo"_s));
			if (!$$sure($String, $nc(v)->get(0))->equals("bar"_s)) {
				$throwNew($RuntimeException, "Test failed"_s);
			}
			v->add("XX"_s);
			$throwNew($RuntimeException, "Test failed"_s);
		} catch ($UnsupportedOperationException& ex) {
		}
		$var($HttpResponse, resp, $nc(client)->send(req, $($HttpResponse$BodyHandlers::discarding())));
		try {
			$var($HttpHeaders, hd, $nc(resp)->headers());
			$var($List, v, $nc(hd)->allValues("X-Foo-Response"_s));
			if (!$$sure($String, $nc(v)->get(0))->equals("resp"_s)) {
				$throwNew($RuntimeException, "Test failed"_s);
			}
			v->add("XX"_s);
			$throwNew($RuntimeException, "Test failed"_s);
		} catch ($UnsupportedOperationException& ex) {
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(clientExecutor)->shutdownNow();
		$nc(serverExecutor)->shutdownNow();
		server->stop(0);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	$System::out->println("OK"_s);
}

ImmutableHeaders::ImmutableHeaders() {
}

void ImmutableHeaders::clinit$($Class* clazz) {
	$assignStatic(ImmutableHeaders::RESPONSE, "Hello world"_s);
}

$Class* ImmutableHeaders::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"RESPONSE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ImmutableHeaders, RESPONSE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ImmutableHeaders, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ImmutableHeaders, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ImmutableHeaders$ImmutableHeadersHandler", "ImmutableHeaders", "ImmutableHeadersHandler", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ImmutableHeaders",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ImmutableHeaders$ImmutableHeadersHandler"
	};
	$loadClass(ImmutableHeaders, name, initialize, &classInfo$$, ImmutableHeaders::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ImmutableHeaders);
	});
	return class$;
}

$Class* ImmutableHeaders::class$ = nullptr;