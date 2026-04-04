#include <sun/management/HotspotMemoryMBean.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace sun {
	namespace management {

$Class* HotspotMemoryMBean::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getInternalMemoryCounters", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC | $ABSTRACT, $virtualMethod(HotspotMemoryMBean, getInternalMemoryCounters, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.management.HotspotMemoryMBean",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HotspotMemoryMBean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HotspotMemoryMBean);
	});
	return class$;
}

$Class* HotspotMemoryMBean::class$ = nullptr;

	} // management
} // sun