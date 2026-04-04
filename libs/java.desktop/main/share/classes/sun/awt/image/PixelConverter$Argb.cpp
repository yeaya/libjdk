#include <sun/awt/image/PixelConverter$Argb.h>
#include <java/awt/image/ColorModel.h>
#include <sun/awt/image/PixelConverter.h>
#include <jcpp.h>

using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PixelConverter = ::sun::awt::image::PixelConverter;

namespace sun {
	namespace awt {
		namespace image {

$PixelConverter* PixelConverter$Argb::instance = nullptr;

void PixelConverter$Argb::init$() {
	$PixelConverter::init$();
	this->alphaMask = (int32_t)0xff000000;
}

int32_t PixelConverter$Argb::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	return rgb;
}

int32_t PixelConverter$Argb::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	return pixel;
}

void PixelConverter$Argb::clinit$($Class* clazz) {
	$assignStatic(PixelConverter$Argb::instance, $new(PixelConverter$Argb));
}

PixelConverter$Argb::PixelConverter$Argb() {
}

$Class* PixelConverter$Argb::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$Argb, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PixelConverter$Argb, init$, void)},
		{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$Argb, pixelToRgb, int32_t, int32_t, $ColorModel*)},
		{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$Argb, rgbToPixel, int32_t, int32_t, $ColorModel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.PixelConverter$Argb", "sun.awt.image.PixelConverter", "Argb", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.PixelConverter$Argb",
		"sun.awt.image.PixelConverter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.image.PixelConverter"
	};
	$loadClass(PixelConverter$Argb, name, initialize, &classInfo$$, PixelConverter$Argb::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PixelConverter$Argb);
	});
	return class$;
}

$Class* PixelConverter$Argb::class$ = nullptr;

		} // image
	} // awt
} // sun