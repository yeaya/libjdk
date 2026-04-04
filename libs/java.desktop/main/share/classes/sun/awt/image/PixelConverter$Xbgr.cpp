#include <sun/awt/image/PixelConverter$Xbgr.h>
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

$PixelConverter* PixelConverter$Xbgr::instance = nullptr;

void PixelConverter$Xbgr::init$() {
	$PixelConverter::init$();
}

int32_t PixelConverter$Xbgr::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	return ((((rgb & 0xff) << 16) | (rgb & 0xff00)) | ((rgb >> 16) & 0xff));
}

int32_t PixelConverter$Xbgr::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	return ((((int32_t)0xff000000 | ((pixel & 0xff) << 16)) | (pixel & 0xff00)) | ((pixel >> 16) & 0xff));
}

void PixelConverter$Xbgr::clinit$($Class* clazz) {
	$assignStatic(PixelConverter$Xbgr::instance, $new(PixelConverter$Xbgr));
}

PixelConverter$Xbgr::PixelConverter$Xbgr() {
}

$Class* PixelConverter$Xbgr::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$Xbgr, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PixelConverter$Xbgr, init$, void)},
		{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$Xbgr, pixelToRgb, int32_t, int32_t, $ColorModel*)},
		{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$Xbgr, rgbToPixel, int32_t, int32_t, $ColorModel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.PixelConverter$Xbgr", "sun.awt.image.PixelConverter", "Xbgr", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.PixelConverter$Xbgr",
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
	$loadClass(PixelConverter$Xbgr, name, initialize, &classInfo$$, PixelConverter$Xbgr::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PixelConverter$Xbgr);
	});
	return class$;
}

$Class* PixelConverter$Xbgr::class$ = nullptr;

		} // image
	} // awt
} // sun