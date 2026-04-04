#include <sun/java2d/x11/X11SurfaceData$LazyPipe.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/pipe/ValidatePipe.h>
#include <sun/java2d/x11/X11SurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $ValidatePipe = ::sun::java2d::pipe::ValidatePipe;
using $X11SurfaceData = ::sun::java2d::x11::X11SurfaceData;

namespace sun {
	namespace java2d {
		namespace x11 {

void X11SurfaceData$LazyPipe::init$() {
	$ValidatePipe::init$();
}

bool X11SurfaceData$LazyPipe::validate($SunGraphics2D* sg2d) {
	$var($X11SurfaceData, xsd, $cast($X11SurfaceData, $nc(sg2d)->surfaceData));
	if (!$nc(xsd)->isDrawableValid()) {
		return false;
	}
	xsd->makePipes();
	return $ValidatePipe::validate(sg2d);
}

X11SurfaceData$LazyPipe::X11SurfaceData$LazyPipe() {
}

$Class* X11SurfaceData$LazyPipe::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(X11SurfaceData$LazyPipe, init$, void)},
		{"validate", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $PUBLIC, $virtualMethod(X11SurfaceData$LazyPipe, validate, bool, $SunGraphics2D*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.x11.X11SurfaceData$LazyPipe", "sun.java2d.x11.X11SurfaceData", "LazyPipe", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.x11.X11SurfaceData$LazyPipe",
		"sun.java2d.pipe.ValidatePipe",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.x11.X11SurfaceData"
	};
	$loadClass(X11SurfaceData$LazyPipe, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(X11SurfaceData$LazyPipe));
	});
	return class$;
}

$Class* X11SurfaceData$LazyPipe::class$ = nullptr;

		} // x11
	} // java2d
} // sun