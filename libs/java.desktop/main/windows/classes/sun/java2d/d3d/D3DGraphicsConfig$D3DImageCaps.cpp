#include <sun/java2d/d3d/D3DGraphicsConfig$D3DImageCaps.h>
#include <java/awt/ImageCapabilities.h>
#include <sun/java2d/d3d/D3DGraphicsConfig.h>
#include <jcpp.h>

using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace d3d {

void D3DGraphicsConfig$D3DImageCaps::init$() {
	$ImageCapabilities::init$(true);
}

bool D3DGraphicsConfig$D3DImageCaps::isTrueVolatile() {
	return true;
}

D3DGraphicsConfig$D3DImageCaps::D3DGraphicsConfig$D3DImageCaps() {
}

$Class* D3DGraphicsConfig$D3DImageCaps::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(D3DGraphicsConfig$D3DImageCaps, init$, void)},
		{"isTrueVolatile", "()Z", nullptr, $PUBLIC, $virtualMethod(D3DGraphicsConfig$D3DImageCaps, isTrueVolatile, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.d3d.D3DGraphicsConfig$D3DImageCaps", "sun.java2d.d3d.D3DGraphicsConfig", "D3DImageCaps", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.d3d.D3DGraphicsConfig$D3DImageCaps",
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
		"sun.java2d.d3d.D3DGraphicsConfig"
	};
	$loadClass(D3DGraphicsConfig$D3DImageCaps, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D3DGraphicsConfig$D3DImageCaps);
	});
	return class$;
}

$Class* D3DGraphicsConfig$D3DImageCaps::class$ = nullptr;

		} // d3d
	} // java2d
} // sun