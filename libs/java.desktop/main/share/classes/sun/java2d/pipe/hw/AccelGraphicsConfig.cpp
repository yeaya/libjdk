#include <sun/java2d/pipe/hw/AccelGraphicsConfig.h>
#include <java/awt/image/VolatileImage.h>
#include <sun/java2d/pipe/hw/ContextCapabilities.h>
#include <jcpp.h>

using $VolatileImage = ::java::awt::image::VolatileImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContextCapabilities = ::sun::java2d::pipe::hw::ContextCapabilities;

namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {

$Class* AccelGraphicsConfig::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createCompatibleVolatileImage", "(IIII)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccelGraphicsConfig, createCompatibleVolatileImage, $VolatileImage*, int32_t, int32_t, int32_t, int32_t)},
		{"getContextCapabilities", "()Lsun/java2d/pipe/hw/ContextCapabilities;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccelGraphicsConfig, getContextCapabilities, $ContextCapabilities*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.pipe.hw.AccelGraphicsConfig",
		nullptr,
		"sun.java2d.pipe.hw.BufferedContextProvider",
		nullptr,
		methodInfos$$
	};
	$loadClass(AccelGraphicsConfig, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccelGraphicsConfig);
	});
	return class$;
}

$Class* AccelGraphicsConfig::class$ = nullptr;

			} // hw
		} // pipe
	} // java2d
} // sun