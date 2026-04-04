#include <sun/java2d/pipe/PixelFillPipe.h>
#include <sun/java2d/SunGraphics2D.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;

namespace sun {
	namespace java2d {
		namespace pipe {

$Class* PixelFillPipe::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"fillArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PixelFillPipe, fillArc, void, $SunGraphics2D*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"fillOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PixelFillPipe, fillOval, void, $SunGraphics2D*, int32_t, int32_t, int32_t, int32_t)},
		{"fillPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PixelFillPipe, fillPolygon, void, $SunGraphics2D*, $ints*, $ints*, int32_t)},
		{"fillRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PixelFillPipe, fillRect, void, $SunGraphics2D*, int32_t, int32_t, int32_t, int32_t)},
		{"fillRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PixelFillPipe, fillRoundRect, void, $SunGraphics2D*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.pipe.PixelFillPipe",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PixelFillPipe, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PixelFillPipe);
	});
	return class$;
}

$Class* PixelFillPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun