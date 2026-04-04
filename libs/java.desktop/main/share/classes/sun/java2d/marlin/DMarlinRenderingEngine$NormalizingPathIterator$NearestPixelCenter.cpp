#include <sun/java2d/marlin/DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter.h>
#include <java/lang/Math.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine$NormalizingPathIterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $DMarlinRenderingEngine$NormalizingPathIterator = ::sun::java2d::marlin::DMarlinRenderingEngine$NormalizingPathIterator;

namespace sun {
	namespace java2d {
		namespace marlin {

void DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter::init$($doubles* tmp) {
	$DMarlinRenderingEngine$NormalizingPathIterator::init$(tmp);
}

double DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter::normCoord(double coord) {
	return $Math::floor(coord) + 0.5;
}

DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter::DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter() {
}

$Class* DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([D)V", nullptr, 0, $method(DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter, init$, void, $doubles*)},
		{"normCoord", "(D)D", nullptr, 0, $virtualMethod(DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter, normCoord, double, double)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator", "sun.java2d.marlin.DMarlinRenderingEngine", "NormalizingPathIterator", $STATIC | $ABSTRACT},
		{"sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter", "sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator", "NearestPixelCenter", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter",
		"sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.marlin.DMarlinRenderingEngine"
	};
	$loadClass(DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter);
	});
	return class$;
}

$Class* DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter::class$ = nullptr;

		} // marlin
	} // java2d
} // sun