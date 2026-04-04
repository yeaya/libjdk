#include <java/rmi/server/RMIClientSocketFactory.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;

namespace java {
	namespace rmi {
		namespace server {

$Class* RMIClientSocketFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createSocket", "(Ljava/lang/String;I)Ljava/net/Socket;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RMIClientSocketFactory, createSocket, $Socket*, $String*, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.rmi.server.RMIClientSocketFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RMIClientSocketFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RMIClientSocketFactory);
	});
	return class$;
}

$Class* RMIClientSocketFactory::class$ = nullptr;

		} // server
	} // rmi
} // java