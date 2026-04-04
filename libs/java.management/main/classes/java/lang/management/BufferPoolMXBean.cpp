#include <java/lang/management/BufferPoolMXBean.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace management {

$Class* BufferPoolMXBean::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BufferPoolMXBean, getCount, int64_t)},
		{"getMemoryUsed", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BufferPoolMXBean, getMemoryUsed, int64_t)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BufferPoolMXBean, getName, $String*)},
		{"getTotalCapacity", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BufferPoolMXBean, getTotalCapacity, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.management.BufferPoolMXBean",
		nullptr,
		"java.lang.management.PlatformManagedObject",
		nullptr,
		methodInfos$$
	};
	$loadClass(BufferPoolMXBean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BufferPoolMXBean);
	});
	return class$;
}

$Class* BufferPoolMXBean::class$ = nullptr;

		} // management
	} // lang
} // java