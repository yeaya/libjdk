#include <java/lang/management/ClassLoadingMXBean.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace management {

$Class* ClassLoadingMXBean::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getLoadedClassCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassLoadingMXBean, getLoadedClassCount, int32_t)},
		{"getTotalLoadedClassCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassLoadingMXBean, getTotalLoadedClassCount, int64_t)},
		{"getUnloadedClassCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassLoadingMXBean, getUnloadedClassCount, int64_t)},
		{"isVerbose", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassLoadingMXBean, isVerbose, bool)},
		{"setVerbose", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassLoadingMXBean, setVerbose, void, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.management.ClassLoadingMXBean",
		nullptr,
		"java.lang.management.PlatformManagedObject",
		nullptr,
		methodInfos$$
	};
	$loadClass(ClassLoadingMXBean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassLoadingMXBean);
	});
	return class$;
}

$Class* ClassLoadingMXBean::class$ = nullptr;

		} // management
	} // lang
} // java