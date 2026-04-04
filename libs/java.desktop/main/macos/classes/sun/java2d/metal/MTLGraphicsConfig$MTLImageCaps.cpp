#include <sun/java2d/metal/MTLGraphicsConfig$MTLImageCaps.h>
#include <java/awt/ImageCapabilities.h>
#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <jcpp.h>

using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace metal {

void MTLGraphicsConfig$MTLImageCaps::init$() {
	$ImageCapabilities::init$(true);
}

bool MTLGraphicsConfig$MTLImageCaps::isTrueVolatile() {
	return true;
}

MTLGraphicsConfig$MTLImageCaps::MTLGraphicsConfig$MTLImageCaps() {
}

$Class* MTLGraphicsConfig$MTLImageCaps::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MTLGraphicsConfig$MTLImageCaps, init$, void)},
		{"isTrueVolatile", "()Z", nullptr, $PUBLIC, $virtualMethod(MTLGraphicsConfig$MTLImageCaps, isTrueVolatile, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.metal.MTLGraphicsConfig$MTLImageCaps", "sun.java2d.metal.MTLGraphicsConfig", "MTLImageCaps", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.metal.MTLGraphicsConfig$MTLImageCaps",
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
		"sun.java2d.metal.MTLGraphicsConfig"
	};
	$loadClass(MTLGraphicsConfig$MTLImageCaps, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MTLGraphicsConfig$MTLImageCaps);
	});
	return class$;
}

$Class* MTLGraphicsConfig$MTLImageCaps::class$ = nullptr;

		} // metal
	} // java2d
} // sun