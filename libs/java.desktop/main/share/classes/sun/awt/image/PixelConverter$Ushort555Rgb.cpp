#include <sun/awt/image/PixelConverter$Ushort555Rgb.h>
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

$PixelConverter* PixelConverter$Ushort555Rgb::instance = nullptr;

void PixelConverter$Ushort555Rgb::init$() {
	$PixelConverter::init$();
}

int32_t PixelConverter$Ushort555Rgb::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	return (((($sr(rgb, 16 + 3 - 10)) & 0x7c00) | (($sr(rgb, 8 + 3 - 5)) & 0x03e0)) | (($sr(rgb, 0 + 3 - 0)) & 0x1f));
}

int32_t PixelConverter$Ushort555Rgb::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	int32_t r = 0;
	int32_t g = 0;
	int32_t b = 0;
	r = (pixel >> 10) & 0x1f;
	r = (r << 3) | (r >> 2);
	g = (pixel >> 5) & 0x1f;
	g = (g << 3) | (g >> 2);
	b = (pixel) & 0x1f;
	b = (b << 3) | (b >> 2);
	return ((((int32_t)0xff000000 | (r << 16)) | (g << 8)) | (b));
}

void PixelConverter$Ushort555Rgb::clinit$($Class* clazz) {
	$assignStatic(PixelConverter$Ushort555Rgb::instance, $new(PixelConverter$Ushort555Rgb));
}

PixelConverter$Ushort555Rgb::PixelConverter$Ushort555Rgb() {
}

$Class* PixelConverter$Ushort555Rgb::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$Ushort555Rgb, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PixelConverter$Ushort555Rgb, init$, void)},
		{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$Ushort555Rgb, pixelToRgb, int32_t, int32_t, $ColorModel*)},
		{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$Ushort555Rgb, rgbToPixel, int32_t, int32_t, $ColorModel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.PixelConverter$Ushort555Rgb", "sun.awt.image.PixelConverter", "Ushort555Rgb", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.PixelConverter$Ushort555Rgb",
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
	$loadClass(PixelConverter$Ushort555Rgb, name, initialize, &classInfo$$, PixelConverter$Ushort555Rgb::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PixelConverter$Ushort555Rgb);
	});
	return class$;
}

$Class* PixelConverter$Ushort555Rgb::class$ = nullptr;

		} // image
	} // awt
} // sun