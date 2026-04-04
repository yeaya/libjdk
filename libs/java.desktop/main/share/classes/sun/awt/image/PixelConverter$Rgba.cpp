#include <sun/awt/image/PixelConverter$Rgba.h>
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

$PixelConverter* PixelConverter$Rgba::instance = nullptr;

void PixelConverter$Rgba::init$() {
	$PixelConverter::init$();
	this->alphaMask = 255;
}

int32_t PixelConverter$Rgba::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	return ((rgb << 8) | ((int32_t)((uint32_t)rgb >> 24)));
}

int32_t PixelConverter$Rgba::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	return ((pixel << 24) | ((int32_t)((uint32_t)pixel >> 8)));
}

void PixelConverter$Rgba::clinit$($Class* clazz) {
	$assignStatic(PixelConverter$Rgba::instance, $new(PixelConverter$Rgba));
}

PixelConverter$Rgba::PixelConverter$Rgba() {
}

$Class* PixelConverter$Rgba::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter$Rgba, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PixelConverter$Rgba, init$, void)},
		{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$Rgba, pixelToRgb, int32_t, int32_t, $ColorModel*)},
		{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $virtualMethod(PixelConverter$Rgba, rgbToPixel, int32_t, int32_t, $ColorModel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.PixelConverter$Rgba", "sun.awt.image.PixelConverter", "Rgba", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.PixelConverter$Rgba",
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
	$loadClass(PixelConverter$Rgba, name, initialize, &classInfo$$, PixelConverter$Rgba::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PixelConverter$Rgba);
	});
	return class$;
}

$Class* PixelConverter$Rgba::class$ = nullptr;

		} // image
	} // awt
} // sun