#include <DummySecureWebSocketServer$WebSocketChannel$Config.h>
#include <DummySecureWebSocketServer$WebSocketChannel.h>
#include <java/net/SocketOption.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketOption = ::java::net::SocketOption;

$Class* DummySecureWebSocketServer$WebSocketChannel$Config::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)V", $PUBLIC | $ABSTRACT, $virtualMethod(DummySecureWebSocketServer$WebSocketChannel$Config, setOption, void, $SocketOption*, Object$*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DummySecureWebSocketServer$WebSocketChannel", "DummySecureWebSocketServer", "WebSocketChannel", $PUBLIC | $STATIC},
		{"DummySecureWebSocketServer$WebSocketChannel$Config", "DummySecureWebSocketServer$WebSocketChannel", "Config", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"DummySecureWebSocketServer$WebSocketChannel$Config",
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
	$loadClass(DummySecureWebSocketServer$WebSocketChannel$Config, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$WebSocketChannel$Config);
	});
	return class$;
}

$Class* DummySecureWebSocketServer$WebSocketChannel$Config::class$ = nullptr;