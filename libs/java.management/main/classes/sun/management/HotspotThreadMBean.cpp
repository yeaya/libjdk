#include <sun/management/HotspotThreadMBean.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

namespace sun {
	namespace management {

$Class* HotspotThreadMBean::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getInternalThreadCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HotspotThreadMBean, getInternalThreadCount, int32_t)},
		{"getInternalThreadCpuTimes", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Long;>;", $PUBLIC | $ABSTRACT, $virtualMethod(HotspotThreadMBean, getInternalThreadCpuTimes, $Map*)},
		{"getInternalThreadingCounters", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC | $ABSTRACT, $virtualMethod(HotspotThreadMBean, getInternalThreadingCounters, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.management.HotspotThreadMBean",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HotspotThreadMBean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HotspotThreadMBean);
	});
	return class$;
}

$Class* HotspotThreadMBean::class$ = nullptr;

	} // management
} // sun