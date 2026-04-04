#include <sun/management/HotspotRuntimeMBean.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace sun {
	namespace management {

$Class* HotspotRuntimeMBean::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getInternalRuntimeCounters", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC | $ABSTRACT, $virtualMethod(HotspotRuntimeMBean, getInternalRuntimeCounters, $List*)},
		{"getSafepointCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HotspotRuntimeMBean, getSafepointCount, int64_t)},
		{"getSafepointSyncTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HotspotRuntimeMBean, getSafepointSyncTime, int64_t)},
		{"getTotalSafepointTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HotspotRuntimeMBean, getTotalSafepointTime, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.management.HotspotRuntimeMBean",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HotspotRuntimeMBean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HotspotRuntimeMBean);
	});
	return class$;
}

$Class* HotspotRuntimeMBean::class$ = nullptr;

	} // management
} // sun