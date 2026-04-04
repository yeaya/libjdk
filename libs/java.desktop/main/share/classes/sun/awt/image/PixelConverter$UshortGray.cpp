#include <sun/awt/image/PixelConverter$UshortGray.h>
#include <java/awt/image/ColorModel.h>
#include <sun/awt/image/PixelConverter$ByteGray.h>
#include <sun/awt/image/PixelConverter.h>
#include <jcpp.h>

#undef BLU_MULT
#undef GRN_MULT
#undef RED_MULT
#undef SHORT_MULT
#undef USHORT_BLU_MULT
#undef USHORT_GRN_MULT
#undef USHORT_RED_MULT

using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PixelConverter = ::sun::awt::image::PixelConverter;
using $PixelConverter$ByteGray = ::sun::awt::image::PixelConverter$ByteGray;

namespace sun {
	namespace awt {
		namespace image {

double PixelConverter$UshortGray::SHORT_MULT = 0.0;
double PixelConverter$UshortGray::USHORT_RED_MULT = 0.0;
double PixelConverter$UshortGray::USHORT_GRN_MULT = 0.0;
double PixelConverter$UshortGray::USHORT_BLU_MULT = 0.0;
$PixelConverter* PixelConverter$UshortGray::instance = nullptr;

void PixelConverter$UshortGray::init$() {
	$PixelConverter$ByteGray::init$();
}

int32_t PixelConverter$UshortGray::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	int32_t red = (rgb >> 16) & 0xff;
	int32_t grn = (rgb >> 8) & 0xff;
	int32_t blu = (rgb) & 0xff;
	return $cast(int32_t, (red * PixelConverter$UshortGray::USHORT_RED_MULT + grn * PixelConverter$UshortGray::USHORT_GRN_MULT + blu * PixelConverter$UshortGray::USHORT_BLU_MULT + 0.5));
}

int32_t PixelConverter$UshortGray::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	pixel = pixel >> 8;
	return ((((((255 << 8) | pixel) << 8) | pixel) << 8) | pixel);
}

void PixelConverter$UshortGray::clinit$($Class* clazz) {
	PixelConverter$UshortGray::SHORT_MULT = 257.0;
	$init($PixelConverter$ByteGray);
	PixelConverter$UshortGray::USHORT_RED_MULT = $PixelConverter$ByteGray::RED_MULT * PixelConverter$UshortGray::SHORT_MULT;
	PixelConverter$UshortGray::USHORT_GRN_MULT = $PixelConverter$ByteGray::GRN_MULT * PixelConverter$UshortGray::SHORT_MULT;
	PixelConverter$UshortGray::USHORT_BLU_MULT = $PixelConverter$ByteGray::BLU_MULT * PixelConverter$UshortGray::SHORT_MULT;
	$assignStatic(PixelConverter$UshortGray::instance, $new(PixelConverter$UshortGray));
}

PixelConverter$UshortGray::PixelConverter$UshortGray() {
}

$Class* PixelConverter$UshortGray::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SHORT_MULT", "D", nullptr, $STATIC | $FINAL, $staticField(PixelConverter$UshortGray, SHORT_MULT)},
		{"USHORT_RED_MULT", "D", nullptr, $STATIC | $FINAL, $staticField(PixelConverter$UshortGray, USHORT_RED_MULT)},
		{"USHORT_GRN_MULT", "D", nullptr, $STATIC | $FINAL, $staticField(PixelConverter$UshortGray, USHORT_GRN_MULT)},
		{"USHORT_BLU_MULT", "D", nullptr, $STATIC | $FINAL, $staticField(PixelConverter$UshortGray, USHORT_BLU_MULT)},
		{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$UshortGray, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PixelConverter$UshortGray, init$, void)},
		{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$UshortGray, pixelToRgb, int32_t, int32_t, $ColorModel*)},
		{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$UshortGray, rgbToPixel, int32_t, int32_t, $ColorModel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.PixelConverter$UshortGray", "sun.awt.image.PixelConverter", "UshortGray", $PUBLIC | $STATIC},
		{"sun.awt.image.PixelConverter$ByteGray", "sun.awt.image.PixelConverter", "ByteGray", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.PixelConverter$UshortGray",
		"sun.awt.image.PixelConverter$ByteGray",
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
	$loadClass(PixelConverter$UshortGray, name, initialize, &classInfo$$, PixelConverter$UshortGray::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PixelConverter$UshortGray);
	});
	return class$;
}

$Class* PixelConverter$UshortGray::class$ = nullptr;

		} // image
	} // awt
} // sun