#include <java/lang/management/OperatingSystemMXBean.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace management {

$Class* OperatingSystemMXBean::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getArch", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OperatingSystemMXBean, getArch, $String*)},
		{"getAvailableProcessors", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OperatingSystemMXBean, getAvailableProcessors, int32_t)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OperatingSystemMXBean, getName, $String*)},
		{"getSystemLoadAverage", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OperatingSystemMXBean, getSystemLoadAverage, double)},
		{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OperatingSystemMXBean, getVersion, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.management.OperatingSystemMXBean",
		nullptr,
		"java.lang.management.PlatformManagedObject",
		nullptr,
		methodInfos$$
	};
	$loadClass(OperatingSystemMXBean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OperatingSystemMXBean);
	});
	return class$;
}

$Class* OperatingSystemMXBean::class$ = nullptr;

		} // management
	} // lang
} // java