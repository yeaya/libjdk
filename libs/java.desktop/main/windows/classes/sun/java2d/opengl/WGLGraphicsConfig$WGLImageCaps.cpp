#include <sun/java2d/opengl/WGLGraphicsConfig$WGLImageCaps.h>
#include <java/awt/ImageCapabilities.h>
#include <sun/java2d/opengl/WGLGraphicsConfig.h>
#include <jcpp.h>

using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace opengl {

void WGLGraphicsConfig$WGLImageCaps::init$() {
	$ImageCapabilities::init$(true);
}

bool WGLGraphicsConfig$WGLImageCaps::isTrueVolatile() {
	return true;
}

WGLGraphicsConfig$WGLImageCaps::WGLGraphicsConfig$WGLImageCaps() {
}

$Class* WGLGraphicsConfig$WGLImageCaps::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WGLGraphicsConfig$WGLImageCaps, init$, void)},
		{"isTrueVolatile", "()Z", nullptr, $PUBLIC, $virtualMethod(WGLGraphicsConfig$WGLImageCaps, isTrueVolatile, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.WGLGraphicsConfig$WGLImageCaps", "sun.java2d.opengl.WGLGraphicsConfig", "WGLImageCaps", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.opengl.WGLGraphicsConfig$WGLImageCaps",
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
		"sun.java2d.opengl.WGLGraphicsConfig"
	};
	$loadClass(WGLGraphicsConfig$WGLImageCaps, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WGLGraphicsConfig$WGLImageCaps);
	});
	return class$;
}

$Class* WGLGraphicsConfig$WGLImageCaps::class$ = nullptr;

		} // opengl
	} // java2d
} // sun