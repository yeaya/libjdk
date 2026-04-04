#include <sun/java2d/metal/MTLPaints$RadialGradient.h>
#include <sun/java2d/metal/MTLPaints$MultiGradient.h>
#include <sun/java2d/metal/MTLPaints.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MTLPaints$MultiGradient = ::sun::java2d::metal::MTLPaints$MultiGradient;

namespace sun {
	namespace java2d {
		namespace metal {

void MTLPaints$RadialGradient::init$() {
	$MTLPaints$MultiGradient::init$();
}

MTLPaints$RadialGradient::MTLPaints$RadialGradient() {
}

$Class* MTLPaints$RadialGradient::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MTLPaints$RadialGradient, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.metal.MTLPaints$RadialGradient", "sun.java2d.metal.MTLPaints", "RadialGradient", $PRIVATE | $STATIC},
		{"sun.java2d.metal.MTLPaints$MultiGradient", "sun.java2d.metal.MTLPaints", "MultiGradient", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.metal.MTLPaints$RadialGradient",
		"sun.java2d.metal.MTLPaints$MultiGradient",
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
	$loadClass(MTLPaints$RadialGradient, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MTLPaints$RadialGradient);
	});
	return class$;
}

$Class* MTLPaints$RadialGradient::class$ = nullptr;

		} // metal
	} // java2d
} // sun