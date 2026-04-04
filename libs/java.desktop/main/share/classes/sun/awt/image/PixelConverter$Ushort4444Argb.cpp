#include <sun/awt/image/PixelConverter$Ushort4444Argb.h>
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

$PixelConverter* PixelConverter$Ushort4444Argb::instance = nullptr;

void PixelConverter$Ushort4444Argb::init$() {
	$PixelConverter::init$();
	this->alphaMask = 0x0000f000;
}

int32_t PixelConverter$Ushort4444Argb::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	int32_t a = (rgb >> 16) & 0xf000;
	int32_t r = (rgb >> 12) & 0x0f00;
	int32_t g = (rgb >> 8) & 0xf0;
	int32_t b = (rgb >> 4) & 0x0f;
	return (((a | r) | g) | b);
}

int32_t PixelConverter$Ushort4444Argb::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	int32_t a = 0;
	int32_t r = 0;
	int32_t g = 0;
	int32_t b = 0;
	a = pixel & 0xf000;
	a = ((pixel << 16) | (pixel << 12)) & (int32_t)0xff000000;
	r = pixel & 0x0f00;
	r = ((pixel << 12) | (pixel << 8)) & 0x00ff0000;
	g = pixel & 0xf0;
	g = ((pixel << 8) | (pixel << 4)) & 0xff00;
	b = pixel & 0x0f;
	b = ((pixel << 4) | (pixel << 0)) & 0xff;
	return (((a | r) | g) | b);
}

void PixelConverter$Ushort4444Argb::clinit$($Class* clazz) {
	$assignStatic(PixelConverter$Ushort4444Argb::instance, $new(PixelConverter$Ushort4444Argb));
}

PixelConverter$Ushort4444Argb::PixelConverter$Ushort4444Argb() {
}

$Class* PixelConverter$Ushort4444Argb::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$Ushort4444Argb, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PixelConverter$Ushort4444Argb, init$, void)},
		{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$Ushort4444Argb, pixelToRgb, int32_t, int32_t, $ColorModel*)},
		{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$Ushort4444Argb, rgbToPixel, int32_t, int32_t, $ColorModel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.PixelConverter$Ushort4444Argb", "sun.awt.image.PixelConverter", "Ushort4444Argb", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.PixelConverter$Ushort4444Argb",
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
	$loadClass(PixelConverter$Ushort4444Argb, name, initialize, &classInfo$$, PixelConverter$Ushort4444Argb::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PixelConverter$Ushort4444Argb);
	});
	return class$;
}

$Class* PixelConverter$Ushort4444Argb::class$ = nullptr;

		} // image
	} // awt
} // sun