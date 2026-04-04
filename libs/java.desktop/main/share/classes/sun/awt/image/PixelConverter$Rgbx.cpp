#include <sun/awt/image/PixelConverter$Rgbx.h>
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

$PixelConverter* PixelConverter$Rgbx::instance = nullptr;

void PixelConverter$Rgbx::init$() {
	$PixelConverter::init$();
}

int32_t PixelConverter$Rgbx::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	return (rgb << 8);
}

int32_t PixelConverter$Rgbx::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	return ((int32_t)0xff000000 | (pixel >> 8));
}

void PixelConverter$Rgbx::clinit$($Class* clazz) {
	$assignStatic(PixelConverter$Rgbx::instance, $new(PixelConverter$Rgbx));
}

PixelConverter$Rgbx::PixelConverter$Rgbx() {
}

$Class* PixelConverter$Rgbx::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$Rgbx, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PixelConverter$Rgbx, init$, void)},
		{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$Rgbx, pixelToRgb, int32_t, int32_t, $ColorModel*)},
		{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$Rgbx, rgbToPixel, int32_t, int32_t, $ColorModel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.PixelConverter$Rgbx", "sun.awt.image.PixelConverter", "Rgbx", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.PixelConverter$Rgbx",
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
	$loadClass(PixelConverter$Rgbx, name, initialize, &classInfo$$, PixelConverter$Rgbx::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PixelConverter$Rgbx);
	});
	return class$;
}

$Class* PixelConverter$Rgbx::class$ = nullptr;

		} // image
	} // awt
} // sun