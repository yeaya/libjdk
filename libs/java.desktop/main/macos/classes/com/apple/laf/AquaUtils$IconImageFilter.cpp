#include <com/apple/laf/AquaUtils$IconImageFilter.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/image/RGBImageFilter.h>
#include <jcpp.h>

using $RGBImageFilter = ::java::awt::image::RGBImageFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaUtils$IconImageFilter::init$() {
	$RGBImageFilter::init$();
	this->canFilterIndexColorModel = true;
}

int32_t AquaUtils$IconImageFilter::filterRGB(int32_t x, int32_t y, int32_t rgb) {
	int32_t red = (rgb >> 16) & 0xff;
	int32_t green = (rgb >> 8) & 0xff;
	int32_t blue = rgb & 0xff;
	int32_t gray = getGreyFor($cast(int32_t, ((0.3 * red + 0.59 * green + 0.11 * blue) / 3)));
	int32_t var$1 = (rgb & (int32_t)0xff000000) | (grayTransform(red, gray) << 16);
	int32_t var$0 = var$1 | (grayTransform(green, gray) << 8);
	return var$0 | (grayTransform(blue, gray) << 0);
}

int32_t AquaUtils$IconImageFilter::grayTransform(int32_t color, int32_t gray) {
	$init(AquaUtils$IconImageFilter);
	int32_t result = color - gray;
	if (result < 0) {
		result = 0;
	}
	if (result > 255) {
		result = 255;
	}
	return result;
}

AquaUtils$IconImageFilter::AquaUtils$IconImageFilter() {
}

$Class* AquaUtils$IconImageFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaUtils$IconImageFilter, init$, void)},
		{"filterRGB", "(III)I", nullptr, $PUBLIC | $FINAL, $virtualMethod(AquaUtils$IconImageFilter, filterRGB, int32_t, int32_t, int32_t, int32_t)},
		{"getGreyFor", "(I)I", nullptr, $ABSTRACT, $virtualMethod(AquaUtils$IconImageFilter, getGreyFor, int32_t, int32_t)},
		{"grayTransform", "(II)I", nullptr, $PRIVATE | $STATIC, $staticMethod(AquaUtils$IconImageFilter, grayTransform, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaUtils$IconImageFilter", "com.apple.laf.AquaUtils", "IconImageFilter", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.apple.laf.AquaUtils$IconImageFilter",
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
		"com.apple.laf.AquaUtils"
	};
	$loadClass(AquaUtils$IconImageFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaUtils$IconImageFilter));
	});
	return class$;
}

$Class* AquaUtils$IconImageFilter::class$ = nullptr;

		} // laf
	} // apple
} // com