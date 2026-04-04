#include <DummySecureWebSocketServer$WebSocketChannel$Reader.h>
#include <DummySecureWebSocketServer$WebSocketChannel.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

$Class* DummySecureWebSocketServer$WebSocketChannel$Reader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DummySecureWebSocketServer$WebSocketChannel$Reader, read, int32_t, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DummySecureWebSocketServer$WebSocketChannel", "DummySecureWebSocketServer", "WebSocketChannel", $PUBLIC | $STATIC},
		{"DummySecureWebSocketServer$WebSocketChannel$Reader", "DummySecureWebSocketServer$WebSocketChannel", "Reader", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"DummySecureWebSocketServer$WebSocketChannel$Reader",
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
		"DummySecureWebSocketServer"
	};
	$loadClass(DummySecureWebSocketServer$WebSocketChannel$Reader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$WebSocketChannel$Reader);
	});
	return class$;
}

$Class* DummySecureWebSocketServer$WebSocketChannel$Reader::class$ = nullptr;