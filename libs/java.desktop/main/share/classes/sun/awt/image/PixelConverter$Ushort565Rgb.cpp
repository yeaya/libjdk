#include <sun/awt/image/PixelConverter$Ushort565Rgb.h>
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

$PixelConverter* PixelConverter$Ushort565Rgb::instance = nullptr;

void PixelConverter$Ushort565Rgb::init$() {
	$PixelConverter::init$();
}

int32_t PixelConverter$Ushort565Rgb::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	return (((($sr(rgb, 16 + 3 - 11)) & 0xf800) | (($sr(rgb, 8 + 2 - 5)) & 0x07e0)) | (($sr(rgb, 0 + 3 - 0)) & 0x1f));
}

int32_t PixelConverter$Ushort565Rgb::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	int32_t r = 0;
	int32_t g = 0;
	int32_t b = 0;
	r = (pixel >> 11) & 0x1f;
	r = (r << 3) | (r >> 2);
	g = (pixel >> 5) & 0x3f;
	g = (g << 2) | (g >> 4);
	b = (pixel) & 0x1f;
	b = (b << 3) | (b >> 2);
	return ((((int32_t)0xff000000 | (r << 16)) | (g << 8)) | (b));
}

void PixelConverter$Ushort565Rgb::clinit$($Class* clazz) {
	$assignStatic(PixelConverter$Ushort565Rgb::instance, $new(PixelConverter$Ushort565Rgb));
}

PixelConverter$Ushort565Rgb::PixelConverter$Ushort565Rgb() {
}

$Class* PixelConverter$Ushort565Rgb::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$Ushort565Rgb, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PixelConverter$Ushort565Rgb, init$, void)},
		{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$Ushort565Rgb, pixelToRgb, int32_t, int32_t, $ColorModel*)},
		{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$Ushort565Rgb, rgbToPixel, int32_t, int32_t, $ColorModel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.PixelConverter$Ushort565Rgb", "sun.awt.image.PixelConverter", "Ushort565Rgb", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.PixelConverter$Ushort565Rgb",
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
	$loadClass(PixelConverter$Ushort565Rgb, name, initialize, &classInfo$$, PixelConverter$Ushort565Rgb::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PixelConverter$Ushort565Rgb);
	});
	return class$;
}

$Class* PixelConverter$Ushort565Rgb::class$ = nullptr;

		} // image
	} // awt
} // sun