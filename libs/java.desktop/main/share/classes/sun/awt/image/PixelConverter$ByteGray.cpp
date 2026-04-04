#include <sun/awt/image/PixelConverter$ByteGray.h>
#include <java/awt/image/ColorModel.h>
#include <sun/awt/image/PixelConverter.h>
#include <jcpp.h>

#undef BLU_MULT
#undef GRN_MULT
#undef RED_MULT

using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PixelConverter = ::sun::awt::image::PixelConverter;

namespace sun {
	namespace awt {
		namespace image {

double PixelConverter$ByteGray::RED_MULT = 0.0;
double PixelConverter$ByteGray::GRN_MULT = 0.0;
double PixelConverter$ByteGray::BLU_MULT = 0.0;
$PixelConverter* PixelConverter$ByteGray::instance = nullptr;

void PixelConverter$ByteGray::init$() {
	$PixelConverter::init$();
}

int32_t PixelConverter$ByteGray::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	int32_t red = (rgb >> 16) & 0xff;
	int32_t grn = (rgb >> 8) & 0xff;
	int32_t blu = (rgb) & 0xff;
	return $cast(int32_t, (red * PixelConverter$ByteGray::RED_MULT + grn * PixelConverter$ByteGray::GRN_MULT + blu * PixelConverter$ByteGray::BLU_MULT + 0.5));
}

int32_t PixelConverter$ByteGray::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	return ((((((255 << 8) | pixel) << 8) | pixel) << 8) | pixel);
}

void PixelConverter$ByteGray::clinit$($Class* clazz) {
	PixelConverter$ByteGray::RED_MULT = 0.299;
	PixelConverter$ByteGray::GRN_MULT = 0.587;
	PixelConverter$ByteGray::BLU_MULT = 0.114;
	$assignStatic(PixelConverter$ByteGray::instance, $new(PixelConverter$ByteGray));
}

PixelConverter$ByteGray::PixelConverter$ByteGray() {
}

$Class* PixelConverter$ByteGray::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"RED_MULT", "D", nullptr, $STATIC | $FINAL, $staticField(PixelConverter$ByteGray, RED_MULT)},
		{"GRN_MULT", "D", nullptr, $STATIC | $FINAL, $staticField(PixelConverter$ByteGray, GRN_MULT)},
		{"BLU_MULT", "D", nullptr, $STATIC | $FINAL, $staticField(PixelConverter$ByteGray, BLU_MULT)},
		{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$ByteGray, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PixelConverter$ByteGray, init$, void)},
		{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$ByteGray, pixelToRgb, int32_t, int32_t, $ColorModel*)},
		{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$ByteGray, rgbToPixel, int32_t, int32_t, $ColorModel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.PixelConverter$ByteGray", "sun.awt.image.PixelConverter", "ByteGray", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.PixelConverter$ByteGray",
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
	$loadClass(PixelConverter$ByteGray, name, initialize, &classInfo$$, PixelConverter$ByteGray::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PixelConverter$ByteGray);
	});
	return class$;
}

$Class* PixelConverter$ByteGray::class$ = nullptr;

		} // image
	} // awt
} // sun