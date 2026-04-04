#include <java/net/http/WebSocket.h>
#include <java/lang/CharSequence.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <jcpp.h>

#undef NORMAL_CLOSURE

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;

namespace java {
	namespace net {
		namespace http {

$Class* WebSocket::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NORMAL_CLOSURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WebSocket, NORMAL_CLOSURE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"abort", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WebSocket, abort, void)},
		{"getSubprotocol", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WebSocket, getSubprotocol, $String*)},
		{"isInputClosed", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WebSocket, isInputClosed, bool)},
		{"isOutputClosed", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WebSocket, isOutputClosed, bool)},
		{"request", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WebSocket, request, void, int64_t)},
		{"sendBinary", "(Ljava/nio/ByteBuffer;Z)Ljava/util/concurrent/CompletableFuture;", "(Ljava/nio/ByteBuffer;Z)Ljava/util/concurrent/CompletableFuture<Ljava/net/http/WebSocket;>;", $PUBLIC | $ABSTRACT, $virtualMethod(WebSocket, sendBinary, $CompletableFuture*, $ByteBuffer*, bool)},
		{"sendClose", "(ILjava/lang/String;)Ljava/util/concurrent/CompletableFuture;", "(ILjava/lang/String;)Ljava/util/concurrent/CompletableFuture<Ljava/net/http/WebSocket;>;", $PUBLIC | $ABSTRACT, $virtualMethod(WebSocket, sendClose, $CompletableFuture*, int32_t, $String*)},
		{"sendPing", "(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletableFuture;", "(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletableFuture<Ljava/net/http/WebSocket;>;", $PUBLIC | $ABSTRACT, $virtualMethod(WebSocket, sendPing, $CompletableFuture*, $ByteBuffer*)},
		{"sendPong", "(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletableFuture;", "(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletableFuture<Ljava/net/http/WebSocket;>;", $PUBLIC | $ABSTRACT, $virtualMethod(WebSocket, sendPong, $CompletableFuture*, $ByteBuffer*)},
		{"sendText", "(Ljava/lang/CharSequence;Z)Ljava/util/concurrent/CompletableFuture;", "(Ljava/lang/CharSequence;Z)Ljava/util/concurrent/CompletableFuture<Ljava/net/http/WebSocket;>;", $PUBLIC | $ABSTRACT, $virtualMethod(WebSocket, sendText, $CompletableFuture*, $CharSequence*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.http.WebSocket$Listener", "java.net.http.WebSocket", "Listener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.net.http.WebSocket$Builder", "java.net.http.WebSocket", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.net.http.WebSocket",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.net.http.WebSocket$Listener,java.net.http.WebSocket$Builder"
	};
	$loadClass(WebSocket, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WebSocket);
	});
	return class$;
}

$Class* WebSocket::class$ = nullptr;

		} // http
	} // net
} // java