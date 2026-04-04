#include <DummySecureWebSocketServer$WebSocketChannel$Closer.h>
#include <DummySecureWebSocketServer$WebSocketChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* DummySecureWebSocketServer$WebSocketChannel$Closer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DummySecureWebSocketServer$WebSocketChannel$Closer, close, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DummySecureWebSocketServer$WebSocketChannel", "DummySecureWebSocketServer", "WebSocketChannel", $PUBLIC | $STATIC},
		{"DummySecureWebSocketServer$WebSocketChannel$Closer", "DummySecureWebSocketServer$WebSocketChannel", "Closer", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"DummySecureWebSocketServer$WebSocketChannel$Closer",
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
	$loadClass(DummySecureWebSocketServer$WebSocketChannel$Closer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$WebSocketChannel$Closer);
	});
	return class$;
}

$Class* DummySecureWebSocketServer$WebSocketChannel$Closer::class$ = nullptr;