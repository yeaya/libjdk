#include <javax/swing/plaf/metal/MetalUtils$OceanDisabledButtonImageFilter.h>
#include <java/awt/image/RGBImageFilter.h>
#include <java/lang/Math.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

using $RGBImageFilter = ::java::awt::image::RGBImageFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalUtils$OceanDisabledButtonImageFilter::init$(int32_t min, int32_t max) {
	$RGBImageFilter::init$();
	this->canFilterIndexColorModel = true;
	this->min = (float)min;
	this->factor = (max - min) / 255.0f;
}

int32_t MetalUtils$OceanDisabledButtonImageFilter::filterRGB(int32_t x, int32_t y, int32_t rgb) {
	int32_t gray = $Math::min(255, $cast(int32_t, (((0.2125f * ((rgb >> 16) & 0xff)) + (0.7154f * ((rgb >> 8) & 0xff)) + (0.0721f * (rgb & 0xff)) + 0.5f) * this->factor + this->min)));
	return (((rgb & (int32_t)0xff000000) | (gray << 16)) | (gray << 8)) | (gray << 0);
}

MetalUtils$OceanDisabledButtonImageFilter::MetalUtils$OceanDisabledButtonImageFilter() {
}

$Class* MetalUtils$OceanDisabledButtonImageFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"min", "F", nullptr, $PRIVATE, $field(MetalUtils$OceanDisabledButtonImageFilter, min)},
		{"factor", "F", nullptr, $PRIVATE, $field(MetalUtils$OceanDisabledButtonImageFilter, factor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, 0, $method(MetalUtils$OceanDisabledButtonImageFilter, init$, void, int32_t, int32_t)},
		{"filterRGB", "(III)I", nullptr, $PUBLIC, $virtualMethod(MetalUtils$OceanDisabledButtonImageFilter, filterRGB, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalUtils$OceanDisabledButtonImageFilter", "javax.swing.plaf.metal.MetalUtils", "OceanDisabledButtonImageFilter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalUtils$OceanDisabledButtonImageFilter",
		"java.awt.image.RGBImageFilter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalUtils"
	};
	$loadClass(MetalUtils$OceanDisabledButtonImageFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalUtils$OceanDisabledButtonImageFilter));
	});
	return class$;
}

$Class* MetalUtils$OceanDisabledButtonImageFilter::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax