#include <sun/rmi/transport/Endpoint.h>
#include <sun/rmi/transport/Channel.h>
#include <sun/rmi/transport/Target.h>
#include <sun/rmi/transport/Transport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Channel = ::sun::rmi::transport::Channel;
using $Target = ::sun::rmi::transport::Target;
using $Transport = ::sun::rmi::transport::Transport;

namespace sun {
	namespace rmi {
		namespace transport {

$Class* Endpoint::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"exportObject", "(Lsun/rmi/transport/Target;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Endpoint, exportObject, void, $Target*), "java.rmi.RemoteException"},
		{"getChannel", "()Lsun/rmi/transport/Channel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Endpoint, getChannel, $Channel*)},
		{"getInboundTransport", "()Lsun/rmi/transport/Transport;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Endpoint, getInboundTransport, $Transport*)},
		{"getOutboundTransport", "()Lsun/rmi/transport/Transport;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Endpoint, getOutboundTransport, $Transport*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.rmi.transport.Endpoint",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Endpoint, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Endpoint);
	});
	return class$;
}

$Class* Endpoint::class$ = nullptr;

		} // transport
	} // rmi
} // sun