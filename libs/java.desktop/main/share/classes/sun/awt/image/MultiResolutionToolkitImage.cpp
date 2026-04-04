#include <sun/awt/image/MultiResolutionToolkitImage.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/ImageProducer.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/function/Function.h>
#include <sun/awt/image/MultiResolutionToolkitImage$ObserverCache.h>
#include <sun/awt/image/ToolkitImage.h>
#include <jcpp.h>

#undef BITS_INFO
#undef INSTANCE

using $ImageArray = $Array<::java::awt::Image>;
using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Function = ::java::util::function::Function;
using $MultiResolutionToolkitImage$ObserverCache = ::sun::awt::image::MultiResolutionToolkitImage$ObserverCache;
using $ToolkitImage = ::sun::awt::image::ToolkitImage;

namespace sun {
	namespace awt {
		namespace image {

class MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0 : public $Function {
	$class(MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0, $NO_CLASS_INIT, $Function)
public:
	void init$(bool concatenateInfo, $Image* image) {
		this->concatenateInfo = concatenateInfo;
		$set(this, image, image);
	}
	virtual $Object* apply(Object$* key) override {
		 return MultiResolutionToolkitImage::lambda$getResolutionVariantObserver$0(concatenateInfo, image, $cast($ImageObserver, key));
	}
	bool concatenateInfo = false;
	$Image* image = nullptr;
};
$Class* MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"concatenateInfo", "Z", nullptr, $PUBLIC, $field(MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0, concatenateInfo)},
		{"image", "Ljava/awt/Image;", nullptr, $PUBLIC, $field(MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0, image)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZLjava/awt/Image;)V", nullptr, $PUBLIC, $method(MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0, init$, void, bool, $Image*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.image.MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0);
	});
	return class$;
}
$Class* MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0::class$ = nullptr;

int32_t MultiResolutionToolkitImage::hashCode() {
	 return this->$ToolkitImage::hashCode();
}

bool MultiResolutionToolkitImage::equals(Object$* arg0) {
	 return this->$ToolkitImage::equals(arg0);
}

$Object* MultiResolutionToolkitImage::clone() {
	 return this->$ToolkitImage::clone();
}

$String* MultiResolutionToolkitImage::toString() {
	 return this->$ToolkitImage::toString();
}

void MultiResolutionToolkitImage::finalize() {
	this->$ToolkitImage::finalize();
}

void MultiResolutionToolkitImage::init$($Image* lowResolutionImage, $Image* resolutionVariant) {
	$ToolkitImage::init$($($nc(lowResolutionImage)->getSource()));
	$set(this, resolutionVariant, resolutionVariant);
}

$Image* MultiResolutionToolkitImage::getResolutionVariant(double destWidth, double destHeight) {
	checkSize(destWidth, destHeight);
	bool var$0 = destWidth <= getWidth();
	return (var$0 && destHeight <= getHeight()) ? $cast($Image, this) : this->resolutionVariant;
}

$Image* MultiResolutionToolkitImage::map(MultiResolutionToolkitImage* mrImage, $Function* mapper) {
	$init(MultiResolutionToolkitImage);
	$useLocalObjectStack();
	$var($Image, baseImage, $cast($Image, $nc(mapper)->apply(mrImage)));
	$var($Image, rvImage, $cast($Image, mapper->apply($nc(mrImage)->resolutionVariant)));
	return $new(MultiResolutionToolkitImage, baseImage, rvImage);
}

void MultiResolutionToolkitImage::checkSize(double width, double height) {
	$init(MultiResolutionToolkitImage);
	$useLocalObjectStack();
	if (width <= 0 || height <= 0) {
		$throwNew($IllegalArgumentException, $($String::format("Width (%s) or height (%s) cannot be <= 0"_s, $$new($ObjectArray, {
			$($Double::valueOf(width)),
			$($Double::valueOf(height))
		}))));
	}
	bool var$0 = !$Double::isFinite(width);
	if (var$0 || !$Double::isFinite(height)) {
		$throwNew($IllegalArgumentException, $($String::format("Width (%s) or height (%s) is not finite"_s, $$new($ObjectArray, {
			$($Double::valueOf(width)),
			$($Double::valueOf(height))
		}))));
	}
}

$Image* MultiResolutionToolkitImage::getResolutionVariant() {
	return this->resolutionVariant;
}

$List* MultiResolutionToolkitImage::getResolutionVariants() {
	return $Arrays::asList($$new($ImageArray, {
		this,
		this->resolutionVariant
	}));
}

$ImageObserver* MultiResolutionToolkitImage::getResolutionVariantObserver($Image* image, $ImageObserver* observer, int32_t imgWidth, int32_t imgHeight, int32_t rvWidth, int32_t rvHeight) {
	$init(MultiResolutionToolkitImage);
	return getResolutionVariantObserver(image, observer, imgWidth, imgHeight, rvWidth, rvHeight, false);
}

$ImageObserver* MultiResolutionToolkitImage::getResolutionVariantObserver($Image* image, $ImageObserver* observer, int32_t imgWidth, int32_t imgHeight, int32_t rvWidth, int32_t rvHeight, bool concatenateInfo) {
	$init(MultiResolutionToolkitImage);
	if (observer == nullptr) {
		return nullptr;
	}
	$init($MultiResolutionToolkitImage$ObserverCache);
	$synchronized($MultiResolutionToolkitImage$ObserverCache::INSTANCE) {
		return $cast($ImageObserver, $MultiResolutionToolkitImage$ObserverCache::INSTANCE->computeIfAbsent(observer, $$new(MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0, concatenateInfo, image)));
	}
}

$ImageObserver* MultiResolutionToolkitImage::lambda$getResolutionVariantObserver$0(bool concatenateInfo, $Image* image, $ImageObserver* key) {
	$init(MultiResolutionToolkitImage);
	return $new($MultiResolutionToolkitImage$ObserverCache, key, concatenateInfo, image);
}

MultiResolutionToolkitImage::MultiResolutionToolkitImage() {
}

$Class* MultiResolutionToolkitImage::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.awt.image.MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0")) {
			return MultiResolutionToolkitImage$$Lambda$lambda$getResolutionVariantObserver$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"resolutionVariant", "Ljava/awt/Image;", nullptr, 0, $field(MultiResolutionToolkitImage, resolutionVariant)},
		{"BITS_INFO", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MultiResolutionToolkitImage, BITS_INFO)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/awt/Image;Ljava/awt/Image;)V", nullptr, $PUBLIC, $method(MultiResolutionToolkitImage, init$, void, $Image*, $Image*)},
		{"checkSize", "(DD)V", nullptr, $PRIVATE | $STATIC, $staticMethod(MultiResolutionToolkitImage, checkSize, void, double, double)},
		{"getResolutionVariant", "(DD)Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(MultiResolutionToolkitImage, getResolutionVariant, $Image*, double, double)},
		{"getResolutionVariant", "()Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(MultiResolutionToolkitImage, getResolutionVariant, $Image*)},
		{"getResolutionVariantObserver", "(Ljava/awt/Image;Ljava/awt/image/ImageObserver;IIII)Ljava/awt/image/ImageObserver;", nullptr, $PUBLIC | $STATIC, $staticMethod(MultiResolutionToolkitImage, getResolutionVariantObserver, $ImageObserver*, $Image*, $ImageObserver*, int32_t, int32_t, int32_t, int32_t)},
		{"getResolutionVariantObserver", "(Ljava/awt/Image;Ljava/awt/image/ImageObserver;IIIIZ)Ljava/awt/image/ImageObserver;", nullptr, $PUBLIC | $STATIC, $staticMethod(MultiResolutionToolkitImage, getResolutionVariantObserver, $ImageObserver*, $Image*, $ImageObserver*, int32_t, int32_t, int32_t, int32_t, bool)},
		{"getResolutionVariants", "()Ljava/util/List;", "()Ljava/util/List<Ljava/awt/Image;>;", $PUBLIC, $virtualMethod(MultiResolutionToolkitImage, getResolutionVariants, $List*)},
		{"lambda$getResolutionVariantObserver$0", "(ZLjava/awt/Image;Ljava/awt/image/ImageObserver;)Ljava/awt/image/ImageObserver;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MultiResolutionToolkitImage, lambda$getResolutionVariantObserver$0, $ImageObserver*, bool, $Image*, $ImageObserver*)},
		{"map", "(Lsun/awt/image/MultiResolutionToolkitImage;Ljava/util/function/Function;)Ljava/awt/Image;", "(Lsun/awt/image/MultiResolutionToolkitImage;Ljava/util/function/Function<Ljava/awt/Image;Ljava/awt/Image;>;)Ljava/awt/Image;", $PUBLIC | $STATIC, $staticMethod(MultiResolutionToolkitImage, map, $Image*, MultiResolutionToolkitImage*, $Function*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.MultiResolutionToolkitImage$ObserverCache", "sun.awt.image.MultiResolutionToolkitImage", "ObserverCache", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.MultiResolutionToolkitImage",
		"sun.awt.image.ToolkitImage",
		"java.awt.image.MultiResolutionImage",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.image.MultiResolutionToolkitImage$ObserverCache"
	};
	$loadClass(MultiResolutionToolkitImage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MultiResolutionToolkitImage));
	});
	return class$;
}

$Class* MultiResolutionToolkitImage::class$ = nullptr;

		} // image
	} // awt
} // sun