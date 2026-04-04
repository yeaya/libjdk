#include <java/rmi/registry/Registry.h>
#include <java/rmi/Remote.h>
#include <jcpp.h>

#undef REGISTRY_PORT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Remote = ::java::rmi::Remote;

namespace java {
	namespace rmi {
		namespace registry {

$Class* Registry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"REGISTRY_PORT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Registry, REGISTRY_PORT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"bind", "(Ljava/lang/String;Ljava/rmi/Remote;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Registry, bind, void, $String*, $Remote*), "java.rmi.RemoteException,java.rmi.AlreadyBoundException,java.rmi.AccessException"},
		{"list", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Registry, list, $StringArray*), "java.rmi.RemoteException,java.rmi.AccessException"},
		{"lookup", "(Ljava/lang/String;)Ljava/rmi/Remote;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Registry, lookup, $Remote*, $String*), "java.rmi.RemoteException,java.rmi.NotBoundException,java.rmi.AccessException"},
		{"rebind", "(Ljava/lang/String;Ljava/rmi/Remote;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Registry, rebind, void, $String*, $Remote*), "java.rmi.RemoteException,java.rmi.AccessException"},
		{"unbind", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Registry, unbind, void, $String*), "java.rmi.RemoteException,java.rmi.NotBoundException,java.rmi.AccessException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.rmi.registry.Registry",
		nullptr,
		"java.rmi.Remote",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Registry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Registry);
	});
	return class$;
}

$Class* Registry::class$ = nullptr;

		} // registry
	} // rmi
} // java