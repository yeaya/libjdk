#include <DummySecureWebSocketServer$WebServerSocketChannel$Binder.h>
#include <DummySecureWebSocketServer$WebServerSocketChannel.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketAddress = ::java::net::SocketAddress;

$Class* DummySecureWebSocketServer$WebServerSocketChannel$Binder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"bind", "(Ljava/net/SocketAddress;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DummySecureWebSocketServer$WebServerSocketChannel$Binder, bind, void, $SocketAddress*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DummySecureWebSocketServer$WebServerSocketChannel", "DummySecureWebSocketServer", "WebServerSocketChannel", $PUBLIC | $STATIC},
		{"DummySecureWebSocketServer$WebServerSocketChannel$Binder", "DummySecureWebSocketServer$WebServerSocketChannel", "Binder", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"DummySecureWebSocketServer$WebServerSocketChannel$Binder",
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
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel$Binder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$WebServerSocketChannel$Binder);
	});
	return class$;
}

$Class* DummySecureWebSocketServer$WebServerSocketChannel$Binder::class$ = nullptr;