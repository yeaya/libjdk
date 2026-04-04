#include <sun/awt/image/PixelConverter$RgbaPre.h>
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

$PixelConverter* PixelConverter$RgbaPre::instance = nullptr;

void PixelConverter$RgbaPre::init$() {
	$PixelConverter::init$();
	this->alphaMask = 255;
}

int32_t PixelConverter$RgbaPre::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	if ((rgb >> 24) == -1) {
		return ((rgb << 8) | ((int32_t)((uint32_t)rgb >> 24)));
	}
	int32_t a = (int32_t)((uint32_t)rgb >> 24);
	int32_t r = (rgb >> 16) & 0xff;
	int32_t g = (rgb >> 8) & 0xff;
	int32_t b = (rgb) & 0xff;
	int32_t a2 = a + (a >> 7);
	r = (r * a2) >> 8;
	g = (g * a2) >> 8;
	b = (b * a2) >> 8;
	return ((((r << 24) | (g << 16)) | (b << 8)) | (a));
}

int32_t PixelConverter$RgbaPre::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	int32_t a = pixel & 0xff;
	if ((a == 255) || (a == 0)) {
		return (((int32_t)((uint32_t)pixel >> 8)) | (pixel << 24));
	}
	int32_t r = (int32_t)((uint32_t)pixel >> 24);
	int32_t g = (pixel >> 16) & 0xff;
	int32_t b = (pixel >> 8) & 0xff;
	r = $div(((r << 8) - r), a);
	g = $div(((g << 8) - g), a);
	b = $div(((b << 8) - b), a);
	return ((((r << 24) | (g << 16)) | (b << 8)) | (a));
}

void PixelConverter$RgbaPre::clinit$($Class* clazz) {
	$assignStatic(PixelConverter$RgbaPre::instance, $new(PixelConverter$RgbaPre));
}

PixelConverter$RgbaPre::PixelConverter$RgbaPre() {
}

$Class* PixelConverter$RgbaPre::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$RgbaPre, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PixelConverter$RgbaPre, init$, void)},
		{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$RgbaPre, pixelToRgb, int32_t, int32_t, $ColorModel*)},
		{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$RgbaPre, rgbToPixel, int32_t, int32_t, $ColorModel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.PixelConverter$RgbaPre", "sun.awt.image.PixelConverter", "RgbaPre", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.PixelConverter$RgbaPre",
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
	$loadClass(PixelConverter$RgbaPre, name, initialize, &classInfo$$, PixelConverter$RgbaPre::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PixelConverter$RgbaPre);
	});
	return class$;
}

$Class* PixelConverter$RgbaPre::class$ = nullptr;

		} // image
	} // awt
} // sun