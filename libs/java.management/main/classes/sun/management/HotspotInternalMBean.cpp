#include <sun/management/HotspotInternalMBean.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace management {

$Class* HotspotInternalMBean::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.management.HotspotInternalMBean"
	};
	$loadClass(HotspotInternalMBean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HotspotInternalMBean);
	});
	return class$;
}

$Class* HotspotInternalMBean::class$ = nullptr;

	} // management
} // sun