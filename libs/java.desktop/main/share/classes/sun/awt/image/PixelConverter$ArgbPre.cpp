#include <sun/awt/image/PixelConverter$ArgbPre.h>
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

$PixelConverter* PixelConverter$ArgbPre::instance = nullptr;

void PixelConverter$ArgbPre::init$() {
	$PixelConverter::init$();
	this->alphaMask = (int32_t)0xff000000;
}

int32_t PixelConverter$ArgbPre::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	if ((rgb >> 24) == -1) {
		return rgb;
	}
	int32_t a = (int32_t)((uint32_t)rgb >> 24);
	int32_t r = (rgb >> 16) & 0xff;
	int32_t g = (rgb >> 8) & 0xff;
	int32_t b = (rgb) & 0xff;
	int32_t a2 = a + (a >> 7);
	r = (r * a2) >> 8;
	g = (g * a2) >> 8;
	b = (b * a2) >> 8;
	return ((((a << 24) | (r << 16)) | (g << 8)) | (b));
}

int32_t PixelConverter$ArgbPre::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	int32_t a = (int32_t)((uint32_t)pixel >> 24);
	if ((a == 255) || (a == 0)) {
		return pixel;
	}
	int32_t r = (pixel >> 16) & 0xff;
	int32_t g = (pixel >> 8) & 0xff;
	int32_t b = (pixel) & 0xff;
	r = $div(((r << 8) - r), a);
	g = $div(((g << 8) - g), a);
	b = $div(((b << 8) - b), a);
	return ((((a << 24) | (r << 16)) | (g << 8)) | (b));
}

void PixelConverter$ArgbPre::clinit$($Class* clazz) {
	$assignStatic(PixelConverter$ArgbPre::instance, $new(PixelConverter$ArgbPre));
}

PixelConverter$ArgbPre::PixelConverter$ArgbPre() {
}

$Class* PixelConverter$ArgbPre::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$ArgbPre, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PixelConverter$ArgbPre, init$, void)},
		{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$ArgbPre, pixelToRgb, int32_t, int32_t, $ColorModel*)},
		{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$ArgbPre, rgbToPixel, int32_t, int32_t, $ColorModel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.PixelConverter$ArgbPre", "sun.awt.image.PixelConverter", "ArgbPre", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.PixelConverter$ArgbPre",
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
	$loadClass(PixelConverter$ArgbPre, name, initialize, &classInfo$$, PixelConverter$ArgbPre::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PixelConverter$ArgbPre);
	});
	return class$;
}

$Class* PixelConverter$ArgbPre::class$ = nullptr;

		} // image
	} // awt
} // sun