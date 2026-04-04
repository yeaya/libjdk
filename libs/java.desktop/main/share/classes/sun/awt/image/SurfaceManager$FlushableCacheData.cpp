#include <sun/awt/image/SurfaceManager$FlushableCacheData.h>
#include <sun/awt/image/SurfaceManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace image {

$Class* SurfaceManager$FlushableCacheData::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"flush", "(Z)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SurfaceManager$FlushableCacheData, flush, bool, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.SurfaceManager$FlushableCacheData", "sun.awt.image.SurfaceManager", "FlushableCacheData", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.image.SurfaceManager$FlushableCacheData",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.image.SurfaceManager"
	};
	$loadClass(SurfaceManager$FlushableCacheData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SurfaceManager$FlushableCacheData);
	});
	return class$;
}

$Class* SurfaceManager$FlushableCacheData::class$ = nullptr;

		} // image
	} // awt
} // sun