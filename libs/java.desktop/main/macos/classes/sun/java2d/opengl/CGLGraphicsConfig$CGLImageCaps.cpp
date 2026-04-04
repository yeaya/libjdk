#include <sun/java2d/opengl/CGLGraphicsConfig$CGLImageCaps.h>
#include <java/awt/ImageCapabilities.h>
#include <sun/java2d/opengl/CGLGraphicsConfig.h>
#include <jcpp.h>

using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace opengl {

void CGLGraphicsConfig$CGLImageCaps::init$() {
	$ImageCapabilities::init$(true);
}

bool CGLGraphicsConfig$CGLImageCaps::isTrueVolatile() {
	return true;
}

CGLGraphicsConfig$CGLImageCaps::CGLGraphicsConfig$CGLImageCaps() {
}

$Class* CGLGraphicsConfig$CGLImageCaps::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CGLGraphicsConfig$CGLImageCaps, init$, void)},
		{"isTrueVolatile", "()Z", nullptr, $PUBLIC, $virtualMethod(CGLGraphicsConfig$CGLImageCaps, isTrueVolatile, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.CGLGraphicsConfig$CGLImageCaps", "sun.java2d.opengl.CGLGraphicsConfig", "CGLImageCaps", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.opengl.CGLGraphicsConfig$CGLImageCaps",
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
		"sun.java2d.opengl.CGLGraphicsConfig"
	};
	$loadClass(CGLGraphicsConfig$CGLImageCaps, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CGLGraphicsConfig$CGLImageCaps);
	});
	return class$;
}

$Class* CGLGraphicsConfig$CGLImageCaps::class$ = nullptr;

		} // opengl
	} // java2d
} // sun