#include <sun/java2d/opengl/OGLPaints$Gradient.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/opengl/OGLPaints.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $OGLPaints = ::sun::java2d::opengl::OGLPaints;

namespace sun {
	namespace java2d {
		namespace opengl {

void OGLPaints$Gradient::init$() {
	$OGLPaints::init$();
}

bool OGLPaints$Gradient::isPaintValid($SunGraphics2D* sg2d) {
	return true;
}

OGLPaints$Gradient::OGLPaints$Gradient() {
}

$Class* OGLPaints$Gradient::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(OGLPaints$Gradient, init$, void)},
		{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0, $virtualMethod(OGLPaints$Gradient, isPaintValid, bool, $SunGraphics2D*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.OGLPaints$Gradient", "sun.java2d.opengl.OGLPaints", "Gradient", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.opengl.OGLPaints$Gradient",
		"sun.java2d.opengl.OGLPaints",
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
	$loadClass(OGLPaints$Gradient, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OGLPaints$Gradient);
	});
	return class$;
}

$Class* OGLPaints$Gradient::class$ = nullptr;

		} // opengl
	} // java2d
} // sun