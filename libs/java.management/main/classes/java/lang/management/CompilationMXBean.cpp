#include <java/lang/management/CompilationMXBean.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace management {

$Class* CompilationMXBean::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompilationMXBean, getName, $String*)},
		{"getTotalCompilationTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompilationMXBean, getTotalCompilationTime, int64_t)},
		{"isCompilationTimeMonitoringSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompilationMXBean, isCompilationTimeMonitoringSupported, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.management.CompilationMXBean",
		nullptr,
		"java.lang.management.PlatformManagedObject",
		nullptr,
		methodInfos$$
	};
	$loadClass(CompilationMXBean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompilationMXBean);
	});
	return class$;
}

$Class* CompilationMXBean::class$ = nullptr;

		} // management
	} // lang
} // java