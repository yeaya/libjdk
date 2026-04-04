#include <sun/java2d/opengl/OGLPaints$RadialGradient.h>
#include <sun/java2d/opengl/OGLPaints$MultiGradient.h>
#include <sun/java2d/opengl/OGLPaints.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OGLPaints$MultiGradient = ::sun::java2d::opengl::OGLPaints$MultiGradient;

namespace sun {
	namespace java2d {
		namespace opengl {

void OGLPaints$RadialGradient::init$() {
	$OGLPaints$MultiGradient::init$();
}

OGLPaints$RadialGradient::OGLPaints$RadialGradient() {
}

$Class* OGLPaints$RadialGradient::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(OGLPaints$RadialGradient, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.OGLPaints$RadialGradient", "sun.java2d.opengl.OGLPaints", "RadialGradient", $PRIVATE | $STATIC},
		{"sun.java2d.opengl.OGLPaints$MultiGradient", "sun.java2d.opengl.OGLPaints", "MultiGradient", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.opengl.OGLPaints$RadialGradient",
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
	$loadClass(OGLPaints$RadialGradient, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OGLPaints$RadialGradient);
	});
	return class$;
}

$Class* OGLPaints$RadialGradient::class$ = nullptr;

		} // opengl
	} // java2d
} // sun