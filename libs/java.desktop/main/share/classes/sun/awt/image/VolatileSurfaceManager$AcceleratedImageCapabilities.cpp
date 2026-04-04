#include <sun/awt/image/VolatileSurfaceManager$AcceleratedImageCapabilities.h>
#include <java/awt/ImageCapabilities.h>
#include <sun/awt/image/VolatileSurfaceManager.h>
#include <sun/java2d/SurfaceData.h>
#include <jcpp.h>

using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VolatileSurfaceManager = ::sun::awt::image::VolatileSurfaceManager;

namespace sun {
	namespace awt {
		namespace image {

void VolatileSurfaceManager$AcceleratedImageCapabilities::init$($VolatileSurfaceManager* this$0) {
	$set(this, this$0, this$0);
	$ImageCapabilities::init$(false);
}

bool VolatileSurfaceManager$AcceleratedImageCapabilities::isAccelerated() {
	return (this->this$0->sdCurrent == this->this$0->sdAccel);
}

bool VolatileSurfaceManager$AcceleratedImageCapabilities::isTrueVolatile() {
	return isAccelerated();
}

VolatileSurfaceManager$AcceleratedImageCapabilities::VolatileSurfaceManager$AcceleratedImageCapabilities() {
}

$Class* VolatileSurfaceManager$AcceleratedImageCapabilities::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/image/VolatileSurfaceManager;", nullptr, $FINAL | $SYNTHETIC, $field(VolatileSurfaceManager$AcceleratedImageCapabilities, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/image/VolatileSurfaceManager;)V", nullptr, 0, $method(VolatileSurfaceManager$AcceleratedImageCapabilities, init$, void, $VolatileSurfaceManager*)},
		{"isAccelerated", "()Z", nullptr, $PUBLIC, $virtualMethod(VolatileSurfaceManager$AcceleratedImageCapabilities, isAccelerated, bool)},
		{"isTrueVolatile", "()Z", nullptr, $PUBLIC, $virtualMethod(VolatileSurfaceManager$AcceleratedImageCapabilities, isTrueVolatile, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.VolatileSurfaceManager$AcceleratedImageCapabilities", "sun.awt.image.VolatileSurfaceManager", "AcceleratedImageCapabilities", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.image.VolatileSurfaceManager$AcceleratedImageCapabilities",
		"java.awt.ImageCapabilities",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.image.VolatileSurfaceManager"
	};
	$loadClass(VolatileSurfaceManager$AcceleratedImageCapabilities, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VolatileSurfaceManager$AcceleratedImageCapabilities);
	});
	return class$;
}

$Class* VolatileSurfaceManager$AcceleratedImageCapabilities::class$ = nullptr;

		} // image
	} // awt
} // sun