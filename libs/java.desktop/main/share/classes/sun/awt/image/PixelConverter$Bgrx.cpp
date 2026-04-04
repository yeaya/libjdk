#include <sun/awt/image/PixelConverter$Bgrx.h>
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

$PixelConverter* PixelConverter$Bgrx::instance = nullptr;

void PixelConverter$Bgrx::init$() {
	$PixelConverter::init$();
}

int32_t PixelConverter$Bgrx::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	return (((rgb << 24) | ((rgb & 0xff00) << 8)) | ((rgb >> 8) & 0xff00));
}

int32_t PixelConverter$Bgrx::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	return ((((int32_t)0xff000000 | ((pixel & 0xff00) << 8)) | ((pixel >> 8) & 0xff00)) | ((int32_t)((uint32_t)pixel >> 24)));
}

void PixelConverter$Bgrx::clinit$($Class* clazz) {
	$assignStatic(PixelConverter$Bgrx::instance, $new(PixelConverter$Bgrx));
}

PixelConverter$Bgrx::PixelConverter$Bgrx() {
}

$Class* PixelConverter$Bgrx::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$Bgrx, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PixelConverter$Bgrx, init$, void)},
		{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$Bgrx, pixelToRgb, int32_t, int32_t, $ColorModel*)},
		{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$Bgrx, rgbToPixel, int32_t, int32_t, $ColorModel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.PixelConverter$Bgrx", "sun.awt.image.PixelConverter", "Bgrx", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.PixelConverter$Bgrx",
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
	$loadClass(PixelConverter$Bgrx, name, initialize, &classInfo$$, PixelConverter$Bgrx::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PixelConverter$Bgrx);
	});
	return class$;
}

$Class* PixelConverter$Bgrx::class$ = nullptr;

		} // image
	} // awt
} // sun