#include <java/awt/image/BaseMultiResolutionImage.h>
#include <java/awt/Image.h>
#include <java/awt/image/AbstractMultiResolutionImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ImageArray = $Array<::java::awt::Image>;
using $Image = ::java::awt::Image;
using $AbstractMultiResolutionImage = ::java::awt::image::AbstractMultiResolutionImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;

namespace java {
	namespace awt {
		namespace image {

void BaseMultiResolutionImage::init$($ImageArray* resolutionVariants) {
	BaseMultiResolutionImage::init$(0, resolutionVariants);
}

void BaseMultiResolutionImage::init$(int32_t baseImageIndex, $ImageArray* resolutionVariants) {
	$useLocalObjectStack();
	$AbstractMultiResolutionImage::init$();
	if (resolutionVariants == nullptr || resolutionVariants->length == 0) {
		$throwNew($IllegalArgumentException, "Null or zero-length array is passed"_s);
	}
	if (baseImageIndex < 0 || baseImageIndex >= $nc(resolutionVariants)->length) {
		$throwNew($IndexOutOfBoundsException, $$str({"Invalid base image index: "_s, $$str(baseImageIndex)}));
	}
	this->baseImageIndex = baseImageIndex;
	$set(this, resolutionVariants, $cast($ImageArray, $Arrays::copyOf(resolutionVariants, $nc(resolutionVariants)->length)));
	{
		$var($ImageArray, arr$, this->resolutionVariants);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Image, resolutionVariant, arr$->get(i$));
			{
				$Objects::requireNonNull(resolutionVariant, "Resolution variant can\'t be null"_s);
			}
		}
	}
}

$Image* BaseMultiResolutionImage::getResolutionVariant(double destImageWidth, double destImageHeight) {
	$useLocalObjectStack();
	checkSize(destImageWidth, destImageHeight);
	{
		$var($ImageArray, arr$, this->resolutionVariants);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Image, rvImage, arr$->get(i$));
			{
				bool var$0 = destImageWidth <= $nc(rvImage)->getWidth(nullptr);
				if (var$0 && destImageHeight <= rvImage->getHeight(nullptr)) {
					return rvImage;
				}
			}
		}
	}
	return $nc(this->resolutionVariants)->get($nc(this->resolutionVariants)->length - 1);
}

void BaseMultiResolutionImage::checkSize(double width, double height) {
	$init(BaseMultiResolutionImage);
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

$List* BaseMultiResolutionImage::getResolutionVariants() {
	return $Collections::unmodifiableList($($Arrays::asList(this->resolutionVariants)));
}

$Image* BaseMultiResolutionImage::getBaseImage() {
	return $nc(this->resolutionVariants)->get(this->baseImageIndex);
}

BaseMultiResolutionImage::BaseMultiResolutionImage() {
}

$Class* BaseMultiResolutionImage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"baseImageIndex", "I", nullptr, $PRIVATE | $FINAL, $field(BaseMultiResolutionImage, baseImageIndex)},
		{"resolutionVariants", "[Ljava/awt/Image;", nullptr, $PRIVATE | $FINAL, $field(BaseMultiResolutionImage, resolutionVariants)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/awt/Image;)V", nullptr, $PUBLIC | $TRANSIENT, $method(BaseMultiResolutionImage, init$, void, $ImageArray*)},
		{"<init>", "(I[Ljava/awt/Image;)V", nullptr, $PUBLIC | $TRANSIENT, $method(BaseMultiResolutionImage, init$, void, int32_t, $ImageArray*)},
		{"checkSize", "(DD)V", nullptr, $PRIVATE | $STATIC, $staticMethod(BaseMultiResolutionImage, checkSize, void, double, double)},
		{"getBaseImage", "()Ljava/awt/Image;", nullptr, $PROTECTED, $virtualMethod(BaseMultiResolutionImage, getBaseImage, $Image*)},
		{"getResolutionVariant", "(DD)Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(BaseMultiResolutionImage, getResolutionVariant, $Image*, double, double)},
		{"getResolutionVariants", "()Ljava/util/List;", "()Ljava/util/List<Ljava/awt/Image;>;", $PUBLIC, $virtualMethod(BaseMultiResolutionImage, getResolutionVariants, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.image.BaseMultiResolutionImage",
		"java.awt.image.AbstractMultiResolutionImage",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BaseMultiResolutionImage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BaseMultiResolutionImage));
	});
	return class$;
}

$Class* BaseMultiResolutionImage::class$ = nullptr;

		} // image
	} // awt
} // java