#include <sun/management/HotspotClassLoadingMBean.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace sun {
	namespace management {

$Class* HotspotClassLoadingMBean::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getClassInitializationTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HotspotClassLoadingMBean, getClassInitializationTime, int64_t)},
		{"getClassLoadingTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HotspotClassLoadingMBean, getClassLoadingTime, int64_t)},
		{"getClassVerificationTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HotspotClassLoadingMBean, getClassVerificationTime, int64_t)},
		{"getInitializedClassCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HotspotClassLoadingMBean, getInitializedClassCount, int64_t)},
		{"getInternalClassLoadingCounters", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC | $ABSTRACT, $virtualMethod(HotspotClassLoadingMBean, getInternalClassLoadingCounters, $List*)},
		{"getLoadedClassSize", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HotspotClassLoadingMBean, getLoadedClassSize, int64_t)},
		{"getMethodDataSize", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HotspotClassLoadingMBean, getMethodDataSize, int64_t)},
		{"getUnloadedClassSize", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HotspotClassLoadingMBean, getUnloadedClassSize, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.management.HotspotClassLoadingMBean",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HotspotClassLoadingMBean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HotspotClassLoadingMBean);
	});
	return class$;
}

$Class* HotspotClassLoadingMBean::class$ = nullptr;

	} // management
} // sun