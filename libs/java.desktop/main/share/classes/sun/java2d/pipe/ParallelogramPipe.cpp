#include <sun/java2d/pipe/ParallelogramPipe.h>
#include <sun/java2d/SunGraphics2D.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;

namespace sun {
	namespace java2d {
		namespace pipe {

$Class* ParallelogramPipe::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"drawParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDDDD)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParallelogramPipe, drawParallelogram, void, $SunGraphics2D*, double, double, double, double, double, double, double, double, double, double, double, double)},
		{"fillParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDD)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParallelogramPipe, fillParallelogram, void, $SunGraphics2D*, double, double, double, double, double, double, double, double, double, double)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.pipe.ParallelogramPipe",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ParallelogramPipe, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParallelogramPipe);
	});
	return class$;
}

$Class* ParallelogramPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun