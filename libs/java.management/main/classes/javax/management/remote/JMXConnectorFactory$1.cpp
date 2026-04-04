#include <javax/management/remote/JMXConnectorFactory$1.h>
#include <javax/management/remote/JMXConnectorFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace remote {

void JMXConnectorFactory$1::init$() {
}

$Object* JMXConnectorFactory$1::run() {
	return $of($System::getProperty("jmx.remote.protocol.provider.pkgs"_s));
}

JMXConnectorFactory$1::JMXConnectorFactory$1() {
}

$Class* JMXConnectorFactory$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JMXConnectorFactory$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JMXConnectorFactory$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.management.remote.JMXConnectorFactory",
		"resolvePkgs",
		"(Ljava/util/Map;)Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.remote.JMXConnectorFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.remote.JMXConnectorFactory$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.remote.JMXConnectorFactory"
	};
	$loadClass(JMXConnectorFactory$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMXConnectorFactory$1);
	});
	return class$;
}

$Class* JMXConnectorFactory$1::class$ = nullptr;

		} // remote
	} // management
} // javax