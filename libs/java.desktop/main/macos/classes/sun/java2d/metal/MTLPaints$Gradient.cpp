#include <sun/java2d/metal/MTLPaints$Gradient.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/metal/MTLPaints.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $MTLPaints = ::sun::java2d::metal::MTLPaints;

namespace sun {
	namespace java2d {
		namespace metal {

void MTLPaints$Gradient::init$() {
	$MTLPaints::init$();
}

bool MTLPaints$Gradient::isPaintValid($SunGraphics2D* sg2d) {
	return true;
}

MTLPaints$Gradient::MTLPaints$Gradient() {
}

$Class* MTLPaints$Gradient::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MTLPaints$Gradient, init$, void)},
		{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0, $virtualMethod(MTLPaints$Gradient, isPaintValid, bool, $SunGraphics2D*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.metal.MTLPaints$Gradient", "sun.java2d.metal.MTLPaints", "Gradient", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.metal.MTLPaints$Gradient",
		"sun.java2d.metal.MTLPaints",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.metal.MTLPaints"
	};
	$loadClass(MTLPaints$Gradient, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MTLPaints$Gradient);
	});
	return class$;
}

$Class* MTLPaints$Gradient::class$ = nullptr;

		} // metal
	} // java2d
} // sun