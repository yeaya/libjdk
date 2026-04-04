#include <sun/java2d/d3d/D3DPaints$RadialGradient.h>
#include <sun/java2d/d3d/D3DPaints$MultiGradient.h>
#include <sun/java2d/d3d/D3DPaints.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $D3DPaints$MultiGradient = ::sun::java2d::d3d::D3DPaints$MultiGradient;

namespace sun {
	namespace java2d {
		namespace d3d {

void D3DPaints$RadialGradient::init$() {
	$D3DPaints$MultiGradient::init$();
}

D3DPaints$RadialGradient::D3DPaints$RadialGradient() {
}

$Class* D3DPaints$RadialGradient::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(D3DPaints$RadialGradient, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.d3d.D3DPaints$RadialGradient", "sun.java2d.d3d.D3DPaints", "RadialGradient", $PRIVATE | $STATIC},
		{"sun.java2d.d3d.D3DPaints$MultiGradient", "sun.java2d.d3d.D3DPaints", "MultiGradient", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.d3d.D3DPaints$RadialGradient",
		"sun.java2d.d3d.D3DPaints$MultiGradient",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.d3d.D3DPaints"
	};
	$loadClass(D3DPaints$RadialGradient, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D3DPaints$RadialGradient);
	});
	return class$;
}

$Class* D3DPaints$RadialGradient::class$ = nullptr;

		} // d3d
	} // java2d
} // sun