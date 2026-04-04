#include <java/rmi/server/RMIServerSocketFactory.h>
#include <java/net/ServerSocket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServerSocket = ::java::net::ServerSocket;

namespace java {
	namespace rmi {
		namespace server {

$Class* RMIServerSocketFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createServerSocket", "(I)Ljava/net/ServerSocket;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RMIServerSocketFactory, createServerSocket, $ServerSocket*, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.rmi.server.RMIServerSocketFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RMIServerSocketFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RMIServerSocketFactory);
	});
	return class$;
}

$Class* RMIServerSocketFactory::class$ = nullptr;

		} // server
	} // rmi
} // java