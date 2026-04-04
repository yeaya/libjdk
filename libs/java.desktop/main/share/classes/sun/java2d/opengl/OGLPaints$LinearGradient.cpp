#include <sun/java2d/opengl/OGLPaints$LinearGradient.h>
#include <java/awt/LinearGradientPaint.h>
#include <java/awt/MultipleGradientPaint$ColorSpaceType.h>
#include <java/awt/MultipleGradientPaint$CycleMethod.h>
#include <java/awt/Paint.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/opengl/OGLPaints$MultiGradient.h>
#include <sun/java2d/opengl/OGLPaints.h>
#include <jcpp.h>

#undef LINEAR_RGB
#undef REPEAT

using $LinearGradientPaint = ::java::awt::LinearGradientPaint;
using $MultipleGradientPaint$ColorSpaceType = ::java::awt::MultipleGradientPaint$ColorSpaceType;
using $MultipleGradientPaint$CycleMethod = ::java::awt::MultipleGradientPaint$CycleMethod;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $OGLPaints$MultiGradient = ::sun::java2d::opengl::OGLPaints$MultiGradient;

namespace sun {
	namespace java2d {
		namespace opengl {

void OGLPaints$LinearGradient::init$() {
	$OGLPaints$MultiGradient::init$();
}

bool OGLPaints$LinearGradient::isPaintValid($SunGraphics2D* sg2d) {
	$useLocalObjectStack();
	$var($LinearGradientPaint, paint, $cast($LinearGradientPaint, $nc(sg2d)->paint));
	bool var$1 = $nc($($nc(paint)->getFractions()))->length == 2;
	$init($MultipleGradientPaint$CycleMethod);
	bool var$0 = var$1 && paint->getCycleMethod() != $MultipleGradientPaint$CycleMethod::REPEAT;
	$init($MultipleGradientPaint$ColorSpaceType);
	if (var$0 && paint->getColorSpace() != $MultipleGradientPaint$ColorSpaceType::LINEAR_RGB) {
		return true;
	}
	return $OGLPaints$MultiGradient::isPaintValid(sg2d);
}

OGLPaints$LinearGradient::OGLPaints$LinearGradient() {
}

$Class* OGLPaints$LinearGradient::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(OGLPaints$LinearGradient, init$, void)},
		{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0, $virtualMethod(OGLPaints$LinearGradient, isPaintValid, bool, $SunGraphics2D*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.OGLPaints$LinearGradient", "sun.java2d.opengl.OGLPaints", "LinearGradient", $PRIVATE | $STATIC},
		{"sun.java2d.opengl.OGLPaints$MultiGradient", "sun.java2d.opengl.OGLPaints", "MultiGradient", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.opengl.OGLPaints$LinearGradient",
		"sun.java2d.opengl.OGLPaints$MultiGradient",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.opengl.OGLPaints"
	};
	$loadClass(OGLPaints$LinearGradient, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OGLPaints$LinearGradient);
	});
	return class$;
}

$Class* OGLPaints$LinearGradient::class$ = nullptr;

		} // opengl
	} // java2d
} // sun