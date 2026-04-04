#include <DummySecureWebSocketServer$WebServerSocketChannel$Accepter.h>
#include <DummySecureWebSocketServer$WebServerSocketChannel.h>
#include <DummySecureWebSocketServer$WebSocketChannel.h>
#include <jcpp.h>

using $DummySecureWebSocketServer$WebSocketChannel = ::DummySecureWebSocketServer$WebSocketChannel;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* DummySecureWebSocketServer$WebServerSocketChannel$Accepter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "()LDummySecureWebSocketServer$WebSocketChannel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DummySecureWebSocketServer$WebServerSocketChannel$Accepter, accept, $DummySecureWebSocketServer$WebSocketChannel*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DummySecureWebSocketServer$WebServerSocketChannel", "DummySecureWebSocketServer", "WebServerSocketChannel", $PUBLIC | $STATIC},
		{"DummySecureWebSocketServer$WebServerSocketChannel$Accepter", "DummySecureWebSocketServer$WebServerSocketChannel", "Accepter", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"DummySecureWebSocketServer$WebServerSocketChannel$Accepter",
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
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel$Accepter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$WebServerSocketChannel$Accepter);
	});
	return class$;
}

$Class* DummySecureWebSocketServer$WebServerSocketChannel$Accepter::class$ = nullptr;