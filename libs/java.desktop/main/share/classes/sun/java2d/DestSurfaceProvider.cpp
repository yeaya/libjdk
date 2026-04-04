#include <sun/java2d/DestSurfaceProvider.h>
#include <sun/java2d/Surface.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Surface = ::sun::java2d::Surface;

namespace sun {
	namespace java2d {

$Class* DestSurfaceProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDestSurface", "()Lsun/java2d/Surface;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DestSurfaceProvider, getDestSurface, $Surface*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.DestSurfaceProvider",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DestSurfaceProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DestSurfaceProvider);
	});
	return class$;
}

$Class* DestSurfaceProvider::class$ = nullptr;

	} // java2d
} // sun