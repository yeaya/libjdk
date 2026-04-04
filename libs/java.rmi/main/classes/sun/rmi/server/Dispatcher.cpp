#include <sun/rmi/server/Dispatcher.h>
#include <java/rmi/Remote.h>
#include <java/rmi/server/RemoteCall.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Remote = ::java::rmi::Remote;
using $RemoteCall = ::java::rmi::server::RemoteCall;

namespace sun {
	namespace rmi {
		namespace server {

$Class* Dispatcher::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"dispatch", "(Ljava/rmi/Remote;Ljava/rmi/server/RemoteCall;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Dispatcher, dispatch, void, $Remote*, $RemoteCall*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.rmi.server.Dispatcher",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Dispatcher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Dispatcher);
	});
	return class$;
}

$Class* Dispatcher::class$ = nullptr;

		} // server
	} // rmi
} // sun