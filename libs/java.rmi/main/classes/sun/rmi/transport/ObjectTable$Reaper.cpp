#include <sun/rmi/transport/ObjectTable$Reaper.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/util/Map.h>
#include <sun/rmi/transport/ObjectTable.h>
#include <sun/rmi/transport/Target.h>
#include <sun/rmi/transport/WeakRef.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectTable = ::sun::rmi::transport::ObjectTable;
using $Target = ::sun::rmi::transport::Target;
using $WeakRef = ::sun::rmi::transport::WeakRef;

namespace sun {
	namespace rmi {
		namespace transport {

void ObjectTable$Reaper::init$() {
}

void ObjectTable$Reaper::run() {
	$useLocalObjectStack();
	try {
		do {
			$init($ObjectTable);
			$var($WeakRef, weakImpl, $cast($WeakRef, $nc($ObjectTable::reapQueue)->remove()));
			$synchronized($ObjectTable::tableLock) {
				$var($Target, target, $cast($Target, $nc($ObjectTable::implTable)->get(weakImpl)));
				if (target != nullptr) {
					if (!target->isEmpty()) {
						$throwNew($Error, "object with known references collected"_s);
					} else if (target->isPermanent()) {
						$throwNew($Error, "permanent object collected"_s);
					}
					$ObjectTable::removeTarget(target);
				}
			}
		} while (!$Thread::interrupted());
	} catch ($InterruptedException& e) {
	}
}

ObjectTable$Reaper::ObjectTable$Reaper() {
}

$Class* ObjectTable$Reaper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ObjectTable$Reaper, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ObjectTable$Reaper, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.transport.ObjectTable$Reaper", "sun.rmi.transport.ObjectTable", "Reaper", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.transport.ObjectTable$Reaper",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.transport.ObjectTable"
	};
	$loadClass(ObjectTable$Reaper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectTable$Reaper);
	});
	return class$;
}

$Class* ObjectTable$Reaper::class$ = nullptr;

		} // transport
	} // rmi
} // sun