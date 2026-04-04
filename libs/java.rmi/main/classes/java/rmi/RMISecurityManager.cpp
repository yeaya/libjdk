#include <java/rmi/RMISecurityManager.h>
#include <java/lang/SecurityManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SecurityManager = ::java::lang::SecurityManager;

namespace java {
	namespace rmi {

void RMISecurityManager::init$() {
	$SecurityManager::init$();
}

RMISecurityManager::RMISecurityManager() {
}

$Class* RMISecurityManager::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RMISecurityManager, init$, void)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "1.8"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.RMISecurityManager",
		"java.lang.SecurityManager",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(RMISecurityManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RMISecurityManager);
	});
	return class$;
}

$Class* RMISecurityManager::class$ = nullptr;

	} // rmi
} // java