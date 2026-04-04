#include <javax/management/remote/rmi/RMIServer.h>
#include <javax/management/remote/rmi/RMIConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RMIConnection = ::javax::management::remote::rmi::RMIConnection;

namespace javax {
	namespace management {
		namespace remote {
			namespace rmi {

$Class* RMIServer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RMIServer, getVersion, $String*), "java.rmi.RemoteException"},
		{"newClient", "(Ljava/lang/Object;)Ljavax/management/remote/rmi/RMIConnection;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RMIServer, newClient, $RMIConnection*, Object$*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.remote.rmi.RMIServer",
		nullptr,
		"java.rmi.Remote",
		nullptr,
		methodInfos$$
	};
	$loadClass(RMIServer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RMIServer);
	});
	return class$;
}

$Class* RMIServer::class$ = nullptr;

			} // rmi
		} // remote
	} // management
} // javax