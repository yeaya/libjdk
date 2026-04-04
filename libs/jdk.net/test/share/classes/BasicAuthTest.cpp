#include <BasicAuthTest.h>
#include <BasicAuthTest$ClientAuth.h>
#include <BasicAuthTest$Handler.h>
#include <BasicAuthTest$ServerAuth.h>
#include <com/sun/net/httpserver/Authenticator.h>
#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
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
#include <java/util/List.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <jcpp.h>

#undef POST_BODY
#undef RESPONSE

using $BasicAuthTest$ClientAuth = ::BasicAuthTest$ClientAuth;
using $BasicAuthTest$Handler = ::BasicAuthTest$Handler;
using $BasicAuthTest$ServerAuth = ::BasicAuthTest$ServerAuth;
using $HttpContext = ::com::sun::net::httpserver::HttpContext;
using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandlers = ::java::net::http::HttpResponse$BodyHandlers;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;

$volatile(bool) BasicAuthTest::ok = false;
$String* BasicAuthTest::RESPONSE = nullptr;
$String* BasicAuthTest::POST_BODY = nullptr;

void BasicAuthTest::init$() {
}

void BasicAuthTest::main($StringArray* args) {
	$init(BasicAuthTest);
	$useLocalObjectStack();
	$var($InetSocketAddress, addr, $new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), 0));
	$var($HttpServer, server, $HttpServer::create(addr, 10));
	$var($ExecutorService, e, $Executors::newCachedThreadPool());
	$var($BasicAuthTest$Handler, h, $new($BasicAuthTest$Handler));
	$var($HttpContext, serverContext, $nc(server)->createContext("/test"_s, h));
	int32_t port = $$nc(server->getAddress())->getPort();
	$nc($System::out)->println($$str({"Server port = "_s, $$str(port)}));
	$var($BasicAuthTest$ClientAuth, ca, $new($BasicAuthTest$ClientAuth));
	$var($BasicAuthTest$ServerAuth, sa, $new($BasicAuthTest$ServerAuth, "foo realm"_s));
	$nc(serverContext)->setAuthenticator(sa);
	server->setExecutor(e);
	server->start();
	$var($HttpClient, client, $$nc($$nc($HttpClient::newBuilder())->authenticator(ca))->build());
	$var($Throwable, var$0, nullptr);
	try {
		$var($URI, uri, $new($URI, $$str({"http://localhost:"_s, $($Integer::toString(port)), "/test/foo"_s})));
		$var($HttpRequest, req, $$nc($$nc($HttpRequest::newBuilder(uri))->GET())->build());
		$var($HttpResponse, resp, $nc(client)->send(req, $($HttpResponse$BodyHandlers::ofString())));
		bool var$1 = $nc(resp)->statusCode() == 200;
		BasicAuthTest::ok = var$1 && $$nc(resp->body())->equals(BasicAuthTest::RESPONSE);
		if (!BasicAuthTest::ok || ca->count != 1) {
			$throwNew($RuntimeException, "Test failed"_s);
		}
		$assign(resp, client->send(req, $($HttpResponse$BodyHandlers::ofString())));
		bool var$2 = $nc(resp)->statusCode() == 200;
		BasicAuthTest::ok = var$2 && $$nc(resp->body())->equals(BasicAuthTest::RESPONSE);
		if (!BasicAuthTest::ok || ca->count != 1) {
			$throwNew($RuntimeException, "Test failed"_s);
		}
		$assign(req, $$nc($$nc($HttpRequest::newBuilder(uri))->POST($($HttpRequest$BodyPublishers::ofString(BasicAuthTest::POST_BODY))))->build());
		$assign(resp, client->send(req, $($HttpResponse$BodyHandlers::ofString())));
		BasicAuthTest::ok = $nc(resp)->statusCode() == 200;
		if (!BasicAuthTest::ok || ca->count != 1) {
			$throwNew($RuntimeException, "Test failed"_s);
		}
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} /*finally*/ {
		server->stop(0);
		$nc(e)->shutdownNow();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	$System::out->println("OK"_s);
}

BasicAuthTest::BasicAuthTest() {
}

void BasicAuthTest::clinit$($Class* clazz) {
	$assignStatic(BasicAuthTest::RESPONSE, "Hello world"_s);
	$assignStatic(BasicAuthTest::POST_BODY, "This is the POST body 123909090909090"_s);
}

$Class* BasicAuthTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ok", "Z", nullptr, $STATIC | $VOLATILE, $staticField(BasicAuthTest, ok)},
		{"RESPONSE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BasicAuthTest, RESPONSE)},
		{"POST_BODY", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BasicAuthTest, POST_BODY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicAuthTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicAuthTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"BasicAuthTest$Handler", "BasicAuthTest", "Handler", $STATIC},
		{"BasicAuthTest$ClientAuth", "BasicAuthTest", "ClientAuth", $STATIC},
		{"BasicAuthTest$ServerAuth", "BasicAuthTest", "ServerAuth", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"BasicAuthTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"BasicAuthTest$Handler,BasicAuthTest$ClientAuth,BasicAuthTest$ServerAuth"
	};
	$loadClass(BasicAuthTest, name, initialize, &classInfo$$, BasicAuthTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BasicAuthTest);
	});
	return class$;
}

$Class* BasicAuthTest::class$ = nullptr;