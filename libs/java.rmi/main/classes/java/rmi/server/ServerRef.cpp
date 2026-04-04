#include <java/rmi/server/ServerRef.h>
#include <java/rmi/Remote.h>
#include <java/rmi/server/RemoteStub.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Remote = ::java::rmi::Remote;
using $RemoteStub = ::java::rmi::server::RemoteStub;

namespace java {
	namespace rmi {
		namespace server {

$Class* ServerRef::load$($String* name, bool initialize) {
	$CompoundAttribute serialVersionUIDfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(ServerRef, serialVersionUID), serialVersionUIDfieldAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"exportObject", "(Ljava/rmi/Remote;Ljava/lang/Object;)Ljava/rmi/server/RemoteStub;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ServerRef, exportObject, $RemoteStub*, $Remote*, Object$*), "java.rmi.RemoteException"},
		{"getClientHost", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ServerRef, getClientHost, $String*), "java.rmi.server.ServerNotActiveException"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.rmi.server.ServerRef",
		nullptr,
		"java.rmi.server.RemoteRef",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ServerRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerRef);
	});
	return class$;
}

$Class* ServerRef::class$ = nullptr;

		} // server
	} // rmi
} // java