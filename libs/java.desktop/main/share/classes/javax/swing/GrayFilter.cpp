#include <javax/swing/GrayFilter.h>
#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/FilteredImageSource.h>
#include <java/awt/image/ImageFilter.h>
#include <java/awt/image/ImageProducer.h>
#include <java/awt/image/MultiResolutionImage.h>
#include <java/awt/image/RGBImageFilter.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Function.h>
#include <sun/awt/image/MultiResolutionCachedImage.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $Toolkit = ::java::awt::Toolkit;
using $FilteredImageSource = ::java::awt::image::FilteredImageSource;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $MultiResolutionImage = ::java::awt::image::MultiResolutionImage;
using $RGBImageFilter = ::java::awt::image::RGBImageFilter;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Function = ::java::util::function::Function;
using $MultiResolutionCachedImage = ::sun::awt::image::MultiResolutionCachedImage;

namespace javax {
	namespace swing {

class GrayFilter$$Lambda$lambda$createDisabledImage$0 : public $Function {
	$class(GrayFilter$$Lambda$lambda$createDisabledImage$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* img) override {
		return GrayFilter::lambda$createDisabledImage$0($cast($Image, img));
	}
};
$Class* GrayFilter$$Lambda$lambda$createDisabledImage$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GrayFilter$$Lambda$lambda$createDisabledImage$0, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(GrayFilter$$Lambda$lambda$createDisabledImage$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.GrayFilter$$Lambda$lambda$createDisabledImage$0",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(GrayFilter$$Lambda$lambda$createDisabledImage$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GrayFilter$$Lambda$lambda$createDisabledImage$0);
	});
	return class$;
}
$Class* GrayFilter$$Lambda$lambda$createDisabledImage$0::class$ = nullptr;

$Image* GrayFilter::createDisabledImage($Image* i) {
	$init(GrayFilter);
	if ($instanceOf($MultiResolutionImage, i)) {
		return $MultiResolutionCachedImage::map($cast($MultiResolutionImage, i), $$new(GrayFilter$$Lambda$lambda$createDisabledImage$0));
	}
	return createDisabledImageImpl(i);
}

$Image* GrayFilter::createDisabledImageImpl($Image* i) {
	$init(GrayFilter);
	$useLocalObjectStack();
	$var(GrayFilter, filter, $new(GrayFilter, true, 50));
	$var($ImageProducer, prod, $new($FilteredImageSource, $($nc(i)->getSource()), filter));
	$var($Image, grayImage, $$nc($Toolkit::getDefaultToolkit())->createImage(prod));
	return grayImage;
}

void GrayFilter::init$(bool b, int32_t p) {
	$RGBImageFilter::init$();
	this->brighter = b;
	this->percent = p;
	this->canFilterIndexColorModel = true;
}

int32_t GrayFilter::filterRGB(int32_t x, int32_t y, int32_t rgb) {
	int32_t gray = $cast(int32_t, ((0.3 * ((rgb >> 16) & 0xff) + 0.59 * ((rgb >> 8) & 0xff) + 0.11 * (rgb & 0xff)) / 3));
	if (this->brighter) {
		gray = (255 - ((255 - gray) * (100 - this->percent) / 100));
	} else {
		gray = (gray * (100 - this->percent) / 100);
	}
	if (gray < 0) {
		gray = 0;
	}
	if (gray > 255) {
		gray = 255;
	}
	return (((rgb & (int32_t)0xff000000) | (gray << 16)) | (gray << 8)) | (gray << 0);
}

$Image* GrayFilter::lambda$createDisabledImage$0($Image* img) {
	$init(GrayFilter);
	return createDisabledImageImpl(img);
}

GrayFilter::GrayFilter() {
}

$Class* GrayFilter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.swing.GrayFilter$$Lambda$lambda$createDisabledImage$0")) {
			return GrayFilter$$Lambda$lambda$createDisabledImage$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"brighter", "Z", nullptr, $PRIVATE, $field(GrayFilter, brighter)},
		{"percent", "I", nullptr, $PRIVATE, $field(GrayFilter, percent)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZI)V", nullptr, $PUBLIC, $method(GrayFilter, init$, void, bool, int32_t)},
		{"createDisabledImage", "(Ljava/awt/Image;)Ljava/awt/Image;", nullptr, $PUBLIC | $STATIC, $staticMethod(GrayFilter, createDisabledImage, $Image*, $Image*)},
		{"createDisabledImageImpl", "(Ljava/awt/Image;)Ljava/awt/Image;", nullptr, $PRIVATE | $STATIC, $staticMethod(GrayFilter, createDisabledImageImpl, $Image*, $Image*)},
		{"filterRGB", "(III)I", nullptr, $PUBLIC, $virtualMethod(GrayFilter, filterRGB, int32_t, int32_t, int32_t, int32_t)},
		{"lambda$createDisabledImage$0", "(Ljava/awt/Image;)Ljava/awt/Image;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(GrayFilter, lambda$createDisabledImage$0, $Image*, $Image*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.GrayFilter",
		"java.awt.image.RGBImageFilter",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GrayFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GrayFilter));
	});
	return class$;
}

$Class* GrayFilter::class$ = nullptr;

	} // swing
} // javax