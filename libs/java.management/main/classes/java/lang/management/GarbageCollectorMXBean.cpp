#include <java/lang/management/GarbageCollectorMXBean.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace management {

$Class* GarbageCollectorMXBean::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCollectionCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GarbageCollectorMXBean, getCollectionCount, int64_t)},
		{"getCollectionTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GarbageCollectorMXBean, getCollectionTime, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.management.GarbageCollectorMXBean",
		nullptr,
		"java.lang.management.MemoryManagerMXBean",
		nullptr,
		methodInfos$$
	};
	$loadClass(GarbageCollectorMXBean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GarbageCollectorMXBean);
	});
	return class$;
}

$Class* GarbageCollectorMXBean::class$ = nullptr;

		} // management
	} // lang
} // java