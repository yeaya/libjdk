#include <sun/rmi/transport/GC$LatencyLock.h>
#include <sun/rmi/transport/GC.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace rmi {
		namespace transport {

void GC$LatencyLock::init$() {
}

GC$LatencyLock::GC$LatencyLock() {
}

$Class* GC$LatencyLock::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(GC$LatencyLock, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.transport.GC$LatencyLock", "sun.rmi.transport.GC", "LatencyLock", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.transport.GC$LatencyLock",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.transport.GC"
	};
	$loadClass(GC$LatencyLock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GC$LatencyLock);
	});
	return class$;
}

$Class* GC$LatencyLock::class$ = nullptr;

		} // transport
	} // rmi
} // sun