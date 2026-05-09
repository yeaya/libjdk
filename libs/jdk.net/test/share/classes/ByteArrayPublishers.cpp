#include <ByteArrayPublishers.h>
#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient$Builder.h>
#include <java/net/http/HttpClient$Version.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$BodyHandlers.h>
#include <java/net/http/HttpResponse.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/ArrayList.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/LinkedBlockingQueue.h>
#include <java/util/function/BiFunction.h>
#include <jcpp.h>

#undef BODY_PUBLISHER
#undef HTTP_1_1
#undef LOOPS

using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpClient$Version = ::java::net::http::HttpClient$Version;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandlers = ::java::net::http::HttpResponse$BodyHandlers;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $ArrayList = ::java::util::ArrayList;
using $LinkedBlockingQueue = ::java::util::concurrent::LinkedBlockingQueue;
using $BiFunction = ::java::util::function::BiFunction;

class ByteArrayPublishers$$Lambda$lambda$main$0 : public $HttpHandler {
	$class(ByteArrayPublishers$$Lambda$lambda$main$0, $NO_CLASS_INIT, $HttpHandler)
public:
	void init$() {
	}
	virtual void handle($HttpExchange* e) override {
		ByteArrayPublishers::lambda$main$0(e);
	}
};
$Class* ByteArrayPublishers$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ByteArrayPublishers$$Lambda$lambda$main$0, init$, void)},
		{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, $virtualMethod(ByteArrayPublishers$$Lambda$lambda$main$0, handle, void, $HttpExchange*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ByteArrayPublishers$$Lambda$lambda$main$0",
		"java.lang.Object",
		"com.sun.net.httpserver.HttpHandler",
		nullptr,
		methodInfos$$
	};
	$loadClass(ByteArrayPublishers$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ByteArrayPublishers$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* ByteArrayPublishers$$Lambda$lambda$main$0::class$ = nullptr;

class ByteArrayPublishers$$Lambda$lambda$main$1$1 : public $BiFunction {
	$class(ByteArrayPublishers$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $BiFunction)
public:
	void init$($LinkedBlockingQueue* results) {
		$set(this, results, results);
	}
	virtual $Object* apply(Object$* v, Object$* t) override {
		return ByteArrayPublishers::lambda$main$1(results, $cast($HttpResponse, v), $cast($Throwable, t));
	}
	$LinkedBlockingQueue* results = nullptr;
};
$Class* ByteArrayPublishers$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"results", "Ljava/util/concurrent/LinkedBlockingQueue;", nullptr, $PUBLIC, $field(ByteArrayPublishers$$Lambda$lambda$main$1$1, results)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/LinkedBlockingQueue;)V", nullptr, $PUBLIC, $method(ByteArrayPublishers$$Lambda$lambda$main$1$1, init$, void, $LinkedBlockingQueue*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ByteArrayPublishers$$Lambda$lambda$main$1$1, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ByteArrayPublishers$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.util.function.BiFunction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ByteArrayPublishers$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ByteArrayPublishers$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* ByteArrayPublishers$$Lambda$lambda$main$1$1::class$ = nullptr;

$HttpRequest$BodyPublisher* ByteArrayPublishers::BODY_PUBLISHER = nullptr;
int32_t ByteArrayPublishers::LOOPS = 0;

void ByteArrayPublishers::init$() {
}

void ByteArrayPublishers::main($StringArray* args) {
	$init(ByteArrayPublishers);
	$useLocalObjectStack();
	$var($HttpServer, server, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		$var($InetAddress, loopBack, $InetAddress::getLoopbackAddress());
		$var($String, lpBackStr, $nc(loopBack)->getHostAddress());
		$var($InetSocketAddress, serverAddr, $new($InetSocketAddress, loopBack, 0));
		$assign(server, $HttpServer::create(serverAddr, 500));
		$nc(server)->createContext("/"_s, $$new(ByteArrayPublishers$$Lambda$lambda$main$0));
		server->start();
		$var($InetSocketAddress, address, server->getAddress());
		$var($URI, dest, $new($URI, $$str({"http://"_s, lpBackStr, ":"_s, $($Integer::toString($nc(address)->getPort())), "/"_s})));
		$var($HttpClient, client, createClient());
		$var($ArrayList, futures, $new($ArrayList, ByteArrayPublishers::LOOPS));
		$var($LinkedBlockingQueue, results, $new($LinkedBlockingQueue));
		for (int32_t i = 0; i < ByteArrayPublishers::LOOPS; ++i) {
			$var($HttpRequest, var$1, createRequest(dest));
			futures->add($($$nc($nc(client)->sendAsync(var$1, $($HttpResponse$BodyHandlers::discarding())))->handle($$new(ByteArrayPublishers$$Lambda$lambda$main$1$1, results))));
		}
		for (int32_t i = 0; i < ByteArrayPublishers::LOOPS; ++i) {
			$var($Object, o, results->take());
			if ($instanceOf($Exception, o)) {
				$throwNew($RuntimeException, $cast($Exception, o));
			}
		}
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} /*finally*/ {
		$nc(server)->stop(1);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

$HttpRequest* ByteArrayPublishers::createRequest($URI* uri) {
	$init(ByteArrayPublishers);
	$useLocalObjectStack();
	$init($HttpClient$Version);
	$var($HttpRequest$Builder, builder, $$nc($$nc($HttpRequest::newBuilder(uri))->method("POST"_s, ByteArrayPublishers::BODY_PUBLISHER))->version($HttpClient$Version::HTTP_1_1));
	$nc(builder)->header("content-type"_s, "text/plain"_s);
	return builder->build();
}

$HttpClient* ByteArrayPublishers::createClient() {
	$init(ByteArrayPublishers);
	$useLocalObjectStack();
	$init($HttpClient$Version);
	return $$nc($$nc($HttpClient::newBuilder())->version($HttpClient$Version::HTTP_1_1))->build();
}

$HttpResponse* ByteArrayPublishers::lambda$main$1($LinkedBlockingQueue* results, $HttpResponse* v, $Throwable* t) {
	$init(ByteArrayPublishers);
	if (t != nullptr) {
		$nc(results)->add(t);
	} else {
		$nc(results)->add(v);
	}
	return nullptr;
}

void ByteArrayPublishers::lambda$main$0($HttpExchange* e) {
	$init(ByteArrayPublishers);
	$useLocalObjectStack();
	$$nc($nc(e)->getRequestBody())->readAllBytes();
	$var($String, response, "Hello world"_s);
	e->sendResponseHeaders(200, response->length());
	$init($StandardCharsets);
	$$nc(e->getResponseBody())->write($(response->getBytes($StandardCharsets::ISO_8859_1)));
	e->close();
}

void ByteArrayPublishers::clinit$($Class* clazz) {
	$assignStatic(ByteArrayPublishers::BODY_PUBLISHER, $HttpRequest$BodyPublishers::ofByteArray($("abcdefghijklmnopqrstuvwxyz"_s->getBytes())));
	ByteArrayPublishers::LOOPS = 100;
}

ByteArrayPublishers::ByteArrayPublishers() {
}

$Class* ByteArrayPublishers::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("ByteArrayPublishers$$Lambda$lambda$main$0")) {
			return ByteArrayPublishers$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("ByteArrayPublishers$$Lambda$lambda$main$1$1")) {
			return ByteArrayPublishers$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"BODY_PUBLISHER", "Ljava/net/http/HttpRequest$BodyPublisher;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ByteArrayPublishers, BODY_PUBLISHER)},
		{"LOOPS", "I", nullptr, $STATIC, $staticField(ByteArrayPublishers, LOOPS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ByteArrayPublishers, init$, void)},
		{"createClient", "()Ljava/net/http/HttpClient;", nullptr, $PRIVATE | $STATIC, $staticMethod(ByteArrayPublishers, createClient, $HttpClient*)},
		{"createRequest", "(Ljava/net/URI;)Ljava/net/http/HttpRequest;", nullptr, $PRIVATE | $STATIC, $staticMethod(ByteArrayPublishers, createRequest, $HttpRequest*, $URI*), "java.net.URISyntaxException"},
		{"lambda$main$0", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ByteArrayPublishers, lambda$main$0, void, $HttpExchange*), "java.io.IOException"},
		{"lambda$main$1", "(Ljava/util/concurrent/LinkedBlockingQueue;Ljava/net/http/HttpResponse;Ljava/lang/Throwable;)Ljava/net/http/HttpResponse;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ByteArrayPublishers, lambda$main$1, $HttpResponse*, $LinkedBlockingQueue*, $HttpResponse*, $Throwable*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ByteArrayPublishers, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ByteArrayPublishers",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ByteArrayPublishers, name, initialize, &classInfo$$, ByteArrayPublishers::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ByteArrayPublishers);
	});
	return class$;
}

$Class* ByteArrayPublishers::class$ = nullptr;