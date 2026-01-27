#include <sun/java2d/pipe/PixelDrawPipe.h>

#include <sun/java2d/SunGraphics2D.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _PixelDrawPipe_MethodInfo_[] = {
	{"drawArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PixelDrawPipe, drawArc, void, $SunGraphics2D*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"drawLine", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PixelDrawPipe, drawLine, void, $SunGraphics2D*, int32_t, int32_t, int32_t, int32_t)},
	{"drawOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PixelDrawPipe, drawOval, void, $SunGraphics2D*, int32_t, int32_t, int32_t, int32_t)},
	{"drawPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PixelDrawPipe, drawPolygon, void, $SunGraphics2D*, $ints*, $ints*, int32_t)},
	{"drawPolyline", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PixelDrawPipe, drawPolyline, void, $SunGraphics2D*, $ints*, $ints*, int32_t)},
	{"drawRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PixelDrawPipe, drawRect, void, $SunGraphics2D*, int32_t, int32_t, int32_t, int32_t)},
	{"drawRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PixelDrawPipe, drawRoundRect, void, $SunGraphics2D*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$ClassInfo _PixelDrawPipe_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.pipe.PixelDrawPipe",
	nullptr,
	nullptr,
	nullptr,
	_PixelDrawPipe_MethodInfo_
};

$Object* allocate$PixelDrawPipe($Class* clazz) {
	return $of($alloc(PixelDrawPipe));
}

$Class* PixelDrawPipe::load$($String* name, bool initialize) {
	$loadClass(PixelDrawPipe, name, initialize, &_PixelDrawPipe_ClassInfo_, allocate$PixelDrawPipe);
	return class$;
}

$Class* PixelDrawPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun