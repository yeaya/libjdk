#include <sun/java2d/opengl/GLXGraphicsConfig$GLXImageCaps.h>
#include <java/awt/ImageCapabilities.h>
#include <sun/java2d/opengl/GLXGraphicsConfig.h>
#include <jcpp.h>

using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace opengl {

void GLXGraphicsConfig$GLXImageCaps::init$() {
	$ImageCapabilities::init$(true);
}

bool GLXGraphicsConfig$GLXImageCaps::isTrueVolatile() {
	return true;
}

GLXGraphicsConfig$GLXImageCaps::GLXGraphicsConfig$GLXImageCaps() {
}

$Class* GLXGraphicsConfig$GLXImageCaps::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(GLXGraphicsConfig$GLXImageCaps, init$, void)},
		{"isTrueVolatile", "()Z", nullptr, $PUBLIC, $virtualMethod(GLXGraphicsConfig$GLXImageCaps, isTrueVolatile, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.GLXGraphicsConfig$GLXImageCaps", "sun.java2d.opengl.GLXGraphicsConfig", "GLXImageCaps", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.opengl.GLXGraphicsConfig$GLXImageCaps",
		"java.awt.ImageCapabilities",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.opengl.GLXGraphicsConfig"
	};
	$loadClass(GLXGraphicsConfig$GLXImageCaps, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GLXGraphicsConfig$GLXImageCaps);
	});
	return class$;
}

$Class* GLXGraphicsConfig$GLXImageCaps::class$ = nullptr;

		} // opengl
	} // java2d
} // sun