#include <java/lang/management/MemoryMXBean.h>
#include <java/lang/management/MemoryUsage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MemoryUsage = ::java::lang::management::MemoryUsage;

namespace java {
	namespace lang {
		namespace management {

$Class* MemoryMXBean::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"gc", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryMXBean, gc, void)},
		{"getHeapMemoryUsage", "()Ljava/lang/management/MemoryUsage;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryMXBean, getHeapMemoryUsage, $MemoryUsage*)},
		{"getNonHeapMemoryUsage", "()Ljava/lang/management/MemoryUsage;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryMXBean, getNonHeapMemoryUsage, $MemoryUsage*)},
		{"getObjectPendingFinalizationCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryMXBean, getObjectPendingFinalizationCount, int32_t)},
		{"isVerbose", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryMXBean, isVerbose, bool)},
		{"setVerbose", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryMXBean, setVerbose, void, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.management.MemoryMXBean",
		nullptr,
		"java.lang.management.PlatformManagedObject",
		nullptr,
		methodInfos$$
	};
	$loadClass(MemoryMXBean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MemoryMXBean);
	});
	return class$;
}

$Class* MemoryMXBean::class$ = nullptr;

		} // management
	} // lang
} // java