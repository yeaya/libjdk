#include <sun/rmi/log/ReliableLog$1.h>
#include <java/lang/ClassLoader.h>
#include <sun/rmi/log/ReliableLog.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace rmi {
		namespace log {

void ReliableLog$1::init$() {
}

$Object* ReliableLog$1::run() {
	$beforeCallerSensitive();
	return $ClassLoader::getSystemClassLoader();
}

ReliableLog$1::ReliableLog$1() {
}

$Class* ReliableLog$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ReliableLog$1, init$, void)},
		{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(ReliableLog$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.log.ReliableLog",
		"getLogClassConstructor",
		"()Ljava/lang/reflect/Constructor;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.log.ReliableLog$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.log.ReliableLog$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.log.ReliableLog"
	};
	$loadClass(ReliableLog$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReliableLog$1);
	});
	return class$;
}

$Class* ReliableLog$1::class$ = nullptr;

		} // log
	} // rmi
} // sun