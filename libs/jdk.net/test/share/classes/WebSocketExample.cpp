#include <WebSocketExample.h>
#include <WebSocketExample$1.h>
#include <WebSocketExample$2.h>
#include <java/lang/CharSequence.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ProxySelector.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient$Builder.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/WebSocket$Builder.h>
#include <java/net/http/WebSocket$Listener.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <jcpp.h>

using $WebSocketExample$1 = ::WebSocketExample$1;
using $WebSocketExample$2 = ::WebSocketExample$2;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ProxySelector = ::java::net::ProxySelector;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $WebSocket$Listener = ::java::net::http::WebSocket$Listener;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;

void WebSocketExample::init$() {
	$set(this, listener, $new($WebSocketExample$1, this));
}

void WebSocketExample::newBuilderExample0() {
	$useLocalObjectStack();
	$var($HttpClient, client, $HttpClient::newHttpClient());
	$var($CompletableFuture, ws, $$nc($nc(client)->newWebSocketBuilder())->buildAsync($($URI::create("ws://websocket.example.com"_s)), this->listener));
}

void WebSocketExample::newBuilderExample1() {
	$useLocalObjectStack();
	$var($InetSocketAddress, addr, $new($InetSocketAddress, "proxy.example.com"_s, 80));
	$var($HttpClient, client, $$nc($$nc($HttpClient::newBuilder())->proxy($($ProxySelector::of(addr))))->build());
	$var($CompletableFuture, ws, $$nc($nc(client)->newWebSocketBuilder())->buildAsync($($URI::create("ws://websocket.example.com"_s)), this->listener));
}

void WebSocketExample::requestExample() {
	$var($WebSocket$Listener, listener, $new($WebSocketExample$2, this));
}

void WebSocketExample::processCompleteTextMessage($CharSequence* result) {
}

WebSocketExample::WebSocketExample() {
}

$Class* WebSocketExample::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"listener", "Ljava/net/http/WebSocket$Listener;", nullptr, 0, $field(WebSocketExample, listener)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WebSocketExample, init$, void)},
		{"newBuilderExample0", "()V", nullptr, $PUBLIC, $virtualMethod(WebSocketExample, newBuilderExample0, void)},
		{"newBuilderExample1", "()V", nullptr, $PUBLIC, $virtualMethod(WebSocketExample, newBuilderExample1, void)},
		{"processCompleteTextMessage", "(Ljava/lang/CharSequence;)V", nullptr, $STATIC, $staticMethod(WebSocketExample, processCompleteTextMessage, void, $CharSequence*)},
		{"requestExample", "()V", nullptr, $PUBLIC, $virtualMethod(WebSocketExample, requestExample, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WebSocketExample$2", nullptr, nullptr, 0},
		{"WebSocketExample$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"WebSocketExample",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"WebSocketExample$2,WebSocketExample$1"
	};
	$loadClass(WebSocketExample, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WebSocketExample);
	});
	return class$;
}

$Class* WebSocketExample::class$ = nullptr;