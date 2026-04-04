#include <sun/rmi/transport/ObjectTable$1.h>
#include <sun/rmi/transport/ObjectTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectTable = ::sun::rmi::transport::ObjectTable;

namespace sun {
	namespace rmi {
		namespace transport {

void ObjectTable$1::init$() {
}

$Object* ObjectTable$1::run() {
	$init($ObjectTable);
	$nc($ObjectTable::reaper)->interrupt();
	return nullptr;
}

ObjectTable$1::ObjectTable$1() {
}

$Class* ObjectTable$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ObjectTable$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(ObjectTable$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.transport.ObjectTable",
		"decrementKeepAliveCount",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.transport.ObjectTable$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.transport.ObjectTable$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.transport.ObjectTable"
	};
	$loadClass(ObjectTable$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectTable$1);
	});
	return class$;
}

$Class* ObjectTable$1::class$ = nullptr;

		} // transport
	} // rmi
} // sun