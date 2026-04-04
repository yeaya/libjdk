#include <DummySecureWebSocketServer$WebServerSocketChannel$Config.h>
#include <DummySecureWebSocketServer$WebServerSocketChannel.h>
#include <java/net/SocketOption.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketOption = ::java::net::SocketOption;

$Class* DummySecureWebSocketServer$WebServerSocketChannel$Config::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)V", $PUBLIC | $ABSTRACT, $virtualMethod(DummySecureWebSocketServer$WebServerSocketChannel$Config, setOption, void, $SocketOption*, Object$*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DummySecureWebSocketServer$WebServerSocketChannel", "DummySecureWebSocketServer", "WebServerSocketChannel", $PUBLIC | $STATIC},
		{"DummySecureWebSocketServer$WebServerSocketChannel$Config", "DummySecureWebSocketServer$WebServerSocketChannel", "Config", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"DummySecureWebSocketServer$WebServerSocketChannel$Config",
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
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel$Config, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$WebServerSocketChannel$Config);
	});
	return class$;
}

$Class* DummySecureWebSocketServer$WebServerSocketChannel$Config::class$ = nullptr;