#include <sun/rmi/transport/Channel.h>
#include <sun/rmi/transport/Connection.h>
#include <sun/rmi/transport/Endpoint.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Connection = ::sun::rmi::transport::Connection;
using $Endpoint = ::sun::rmi::transport::Endpoint;

namespace sun {
	namespace rmi {
		namespace transport {

$Class* Channel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"free", "(Lsun/rmi/transport/Connection;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Channel, free, void, $Connection*, bool), "java.rmi.RemoteException"},
		{"getEndpoint", "()Lsun/rmi/transport/Endpoint;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Channel, getEndpoint, $Endpoint*)},
		{"newConnection", "()Lsun/rmi/transport/Connection;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Channel, newConnection, $Connection*), "java.rmi.RemoteException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.rmi.transport.Channel",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Channel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Channel);
	});
	return class$;
}

$Class* Channel::class$ = nullptr;

		} // transport
	} // rmi
} // sun