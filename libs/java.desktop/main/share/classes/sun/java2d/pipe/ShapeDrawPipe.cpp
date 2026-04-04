#include <sun/java2d/pipe/ShapeDrawPipe.h>
#include <java/awt/Shape.h>
#include <sun/java2d/SunGraphics2D.h>
#include <jcpp.h>

using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;

namespace sun {
	namespace java2d {
		namespace pipe {

$Class* ShapeDrawPipe::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"draw", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ShapeDrawPipe, draw, void, $SunGraphics2D*, $Shape*)},
		{"fill", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ShapeDrawPipe, fill, void, $SunGraphics2D*, $Shape*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.pipe.ShapeDrawPipe",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ShapeDrawPipe, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShapeDrawPipe);
	});
	return class$;
}

$Class* ShapeDrawPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun