#include <javax/swing/plaf/metal/MetalUtils$OceanToolBarImageFilter.h>
#include <java/awt/image/RGBImageFilter.h>
#include <java/lang/Math.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

using $RGBImageFilter = ::java::awt::image::RGBImageFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalUtils$OceanToolBarImageFilter::init$() {
	$RGBImageFilter::init$();
	this->canFilterIndexColorModel = true;
}

int32_t MetalUtils$OceanToolBarImageFilter::filterRGB(int32_t x, int32_t y, int32_t rgb) {
	int32_t r = ((rgb >> 16) & 0xff);
	int32_t g = ((rgb >> 8) & 0xff);
	int32_t b = (rgb & 0xff);
	int32_t gray = $Math::max($Math::max(r, g), b);
	return (((rgb & (int32_t)0xff000000) | (gray << 16)) | (gray << 8)) | (gray << 0);
}

MetalUtils$OceanToolBarImageFilter::MetalUtils$OceanToolBarImageFilter() {
}

$Class* MetalUtils$OceanToolBarImageFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetalUtils$OceanToolBarImageFilter, init$, void)},
		{"filterRGB", "(III)I", nullptr, $PUBLIC, $virtualMethod(MetalUtils$OceanToolBarImageFilter, filterRGB, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalUtils$OceanToolBarImageFilter", "javax.swing.plaf.metal.MetalUtils", "OceanToolBarImageFilter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalUtils$OceanToolBarImageFilter",
		"java.awt.image.RGBImageFilter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalUtils"
	};
	$loadClass(MetalUtils$OceanToolBarImageFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalUtils$OceanToolBarImageFilter));
	});
	return class$;
}

$Class* MetalUtils$OceanToolBarImageFilter::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax