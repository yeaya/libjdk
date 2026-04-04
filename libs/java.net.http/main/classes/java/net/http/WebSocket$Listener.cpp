#include <java/net/http/WebSocket$Listener.h>
#include <java/lang/CharSequence.h>
#include <java/net/http/WebSocket.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/concurrent/CompletionStage.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WebSocket = ::java::net::http::WebSocket;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CompletionStage = ::java::util::concurrent::CompletionStage;

namespace java {
	namespace net {
		namespace http {

void WebSocket$Listener::onOpen($WebSocket* webSocket) {
	$nc(webSocket)->request(1);
}

$CompletionStage* WebSocket$Listener::onText($WebSocket* webSocket, $CharSequence* data, bool last) {
	$nc(webSocket)->request(1);
	return nullptr;
}

$CompletionStage* WebSocket$Listener::onBinary($WebSocket* webSocket, $ByteBuffer* data, bool last) {
	$nc(webSocket)->request(1);
	return nullptr;
}

$CompletionStage* WebSocket$Listener::onPing($WebSocket* webSocket, $ByteBuffer* message) {
	$nc(webSocket)->request(1);
	return nullptr;
}

$CompletionStage* WebSocket$Listener::onPong($WebSocket* webSocket, $ByteBuffer* message) {
	$nc(webSocket)->request(1);
	return nullptr;
}

$CompletionStage* WebSocket$Listener::onClose($WebSocket* webSocket, int32_t statusCode, $String* reason) {
	return nullptr;
}

void WebSocket$Listener::onError($WebSocket* webSocket, $Throwable* error) {
}

$Class* WebSocket$Listener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"onBinary", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;Z)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;Z)Ljava/util/concurrent/CompletionStage<*>;", $PUBLIC, $virtualMethod(WebSocket$Listener, onBinary, $CompletionStage*, $WebSocket*, $ByteBuffer*, bool)},
		{"onClose", "(Ljava/net/http/WebSocket;ILjava/lang/String;)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;ILjava/lang/String;)Ljava/util/concurrent/CompletionStage<*>;", $PUBLIC, $virtualMethod(WebSocket$Listener, onClose, $CompletionStage*, $WebSocket*, int32_t, $String*)},
		{"onError", "(Ljava/net/http/WebSocket;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(WebSocket$Listener, onError, void, $WebSocket*, $Throwable*)},
		{"onOpen", "(Ljava/net/http/WebSocket;)V", nullptr, $PUBLIC, $virtualMethod(WebSocket$Listener, onOpen, void, $WebSocket*)},
		{"onPing", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletionStage<*>;", $PUBLIC, $virtualMethod(WebSocket$Listener, onPing, $CompletionStage*, $WebSocket*, $ByteBuffer*)},
		{"onPong", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletionStage<*>;", $PUBLIC, $virtualMethod(WebSocket$Listener, onPong, $CompletionStage*, $WebSocket*, $ByteBuffer*)},
		{"onText", "(Ljava/net/http/WebSocket;Ljava/lang/CharSequence;Z)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/lang/CharSequence;Z)Ljava/util/concurrent/CompletionStage<*>;", $PUBLIC, $virtualMethod(WebSocket$Listener, onText, $CompletionStage*, $WebSocket*, $CharSequence*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.http.WebSocket$Listener", "java.net.http.WebSocket", "Listener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.net.http.WebSocket$Listener",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.http.WebSocket"
	};
	$loadClass(WebSocket$Listener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WebSocket$Listener);
	});
	return class$;
}

$Class* WebSocket$Listener::class$ = nullptr;

		} // http
	} // net
} // java