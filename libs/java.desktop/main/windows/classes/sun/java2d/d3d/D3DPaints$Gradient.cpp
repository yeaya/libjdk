#include <sun/java2d/d3d/D3DPaints$Gradient.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <sun/java2d/d3d/D3DPaints.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DPaints = ::sun::java2d::d3d::D3DPaints;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;

namespace sun {
	namespace java2d {
		namespace d3d {

void D3DPaints$Gradient::init$() {
	$D3DPaints::init$();
}

bool D3DPaints$Gradient::isPaintValid($SunGraphics2D* sg2d) {
	$useLocalObjectStack();
	$var($D3DSurfaceData, dstData, $cast($D3DSurfaceData, $nc(sg2d)->surfaceData));
	$var($D3DGraphicsDevice, gd, $cast($D3DGraphicsDevice, $$nc($nc(dstData)->getDeviceConfiguration())->getDevice()));
	return $nc(gd)->isCapPresent(0x00010000);
}

D3DPaints$Gradient::D3DPaints$Gradient() {
}

$Class* D3DPaints$Gradient::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(D3DPaints$Gradient, init$, void)},
		{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0, $virtualMethod(D3DPaints$Gradient, isPaintValid, bool, $SunGraphics2D*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.d3d.D3DPaints$Gradient", "sun.java2d.d3d.D3DPaints", "Gradient", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.d3d.D3DPaints$Gradient",
		"sun.java2d.d3d.D3DPaints",
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
	$loadClass(D3DPaints$Gradient, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D3DPaints$Gradient);
	});
	return class$;
}

$Class* D3DPaints$Gradient::class$ = nullptr;

		} // d3d
	} // java2d
} // sun