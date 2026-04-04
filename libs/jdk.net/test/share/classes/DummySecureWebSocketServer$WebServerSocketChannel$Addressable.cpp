#include <DummySecureWebSocketServer$WebServerSocketChannel$Addressable.h>
#include <DummySecureWebSocketServer$WebServerSocketChannel.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketAddress = ::java::net::SocketAddress;

$Class* DummySecureWebSocketServer$WebServerSocketChannel$Addressable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getLocalAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DummySecureWebSocketServer$WebServerSocketChannel$Addressable, getLocalAddress, $SocketAddress*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DummySecureWebSocketServer$WebServerSocketChannel", "DummySecureWebSocketServer", "WebServerSocketChannel", $PUBLIC | $STATIC},
		{"DummySecureWebSocketServer$WebServerSocketChannel$Addressable", "DummySecureWebSocketServer$WebServerSocketChannel", "Addressable", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"DummySecureWebSocketServer$WebServerSocketChannel$Addressable",
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
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel$Addressable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$WebServerSocketChannel$Addressable);
	});
	return class$;
}

$Class* DummySecureWebSocketServer$WebServerSocketChannel$Addressable::class$ = nullptr;