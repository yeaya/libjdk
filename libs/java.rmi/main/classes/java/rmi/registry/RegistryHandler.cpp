#include <java/rmi/registry/RegistryHandler.h>
#include <java/rmi/registry/Registry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $Registry = ::java::rmi::registry::Registry;

namespace java {
	namespace rmi {
		namespace registry {

$Class* RegistryHandler::load$($String* name, bool initialize) {
	$CompoundAttribute registryImplmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute registryStubmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"registryImpl", "(I)Ljava/rmi/registry/Registry;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(RegistryHandler, registryImpl, $Registry*, int32_t), "java.rmi.RemoteException", nullptr, registryImplmethodAnnotations$$},
		{"registryStub", "(Ljava/lang/String;I)Ljava/rmi/registry/Registry;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(RegistryHandler, registryStub, $Registry*, $String*, int32_t), "java.rmi.RemoteException,java.rmi.UnknownHostException", nullptr, registryStubmethodAnnotations$$},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.rmi.registry.RegistryHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(RegistryHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RegistryHandler);
	});
	return class$;
}

$Class* RegistryHandler::class$ = nullptr;

		} // registry
	} // rmi
} // java