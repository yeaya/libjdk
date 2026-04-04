#include <java/rmi/server/RMIClassLoader$1.h>
#include <java/rmi/server/RMIClassLoader.h>
#include <java/rmi/server/RMIClassLoaderSpi.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RMIClassLoader = ::java::rmi::server::RMIClassLoader;

namespace java {
	namespace rmi {
		namespace server {

void RMIClassLoader$1::init$() {
}

$Object* RMIClassLoader$1::run() {
	return $RMIClassLoader::initializeProvider();
}

RMIClassLoader$1::RMIClassLoader$1() {
}

$Class* RMIClassLoader$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(RMIClassLoader$1, init$, void)},
		{"run", "()Ljava/rmi/server/RMIClassLoaderSpi;", nullptr, $PUBLIC, $virtualMethod(RMIClassLoader$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.rmi.server.RMIClassLoader",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.rmi.server.RMIClassLoader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.rmi.server.RMIClassLoader$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/rmi/server/RMIClassLoaderSpi;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.rmi.server.RMIClassLoader"
	};
	$loadClass(RMIClassLoader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RMIClassLoader$1);
	});
	return class$;
}

$Class* RMIClassLoader$1::class$ = nullptr;

		} // server
	} // rmi
} // java