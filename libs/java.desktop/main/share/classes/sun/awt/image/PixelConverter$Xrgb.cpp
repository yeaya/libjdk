#include <sun/awt/image/PixelConverter$Xrgb.h>
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

$PixelConverter* PixelConverter$Xrgb::instance = nullptr;

void PixelConverter$Xrgb::init$() {
	$PixelConverter::init$();
}

int32_t PixelConverter$Xrgb::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	return rgb;
}

int32_t PixelConverter$Xrgb::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	return ((int32_t)0xff000000 | pixel);
}

void PixelConverter$Xrgb::clinit$($Class* clazz) {
	$assignStatic(PixelConverter$Xrgb::instance, $new(PixelConverter$Xrgb));
}

PixelConverter$Xrgb::PixelConverter$Xrgb() {
}

$Class* PixelConverter$Xrgb::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$Xrgb, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PixelConverter$Xrgb, init$, void)},
		{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$Xrgb, pixelToRgb, int32_t, int32_t, $ColorModel*)},
		{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$Xrgb, rgbToPixel, int32_t, int32_t, $ColorModel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.PixelConverter$Xrgb", "sun.awt.image.PixelConverter", "Xrgb", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.PixelConverter$Xrgb",
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
	$loadClass(PixelConverter$Xrgb, name, initialize, &classInfo$$, PixelConverter$Xrgb::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PixelConverter$Xrgb);
	});
	return class$;
}

$Class* PixelConverter$Xrgb::class$ = nullptr;

		} // image
	} // awt
} // sun