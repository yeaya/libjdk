#include <DummySecureWebSocketServer$WebServerSocketChannel$Closer.h>
#include <DummySecureWebSocketServer$WebServerSocketChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* DummySecureWebSocketServer$WebServerSocketChannel$Closer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DummySecureWebSocketServer$WebServerSocketChannel$Closer, close, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DummySecureWebSocketServer$WebServerSocketChannel", "DummySecureWebSocketServer", "WebServerSocketChannel", $PUBLIC | $STATIC},
		{"DummySecureWebSocketServer$WebServerSocketChannel$Closer", "DummySecureWebSocketServer$WebServerSocketChannel", "Closer", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"DummySecureWebSocketServer$WebServerSocketChannel$Closer",
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
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel$Closer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$WebServerSocketChannel$Closer);
	});
	return class$;
}

$Class* DummySecureWebSocketServer$WebServerSocketChannel$Closer::class$ = nullptr;