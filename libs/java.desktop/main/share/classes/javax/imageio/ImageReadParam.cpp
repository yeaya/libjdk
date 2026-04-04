#include <javax/imageio/ImageReadParam.h>
#include <java/awt/Dimension.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/UnsupportedOperationException.h>
#include <javax/imageio/IIOParam.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <jcpp.h>

#undef MAX_VALUE

using $Dimension = ::java::awt::Dimension;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $IIOParam = ::javax::imageio::IIOParam;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;

namespace javax {
	namespace imageio {

void ImageReadParam::init$() {
	$IIOParam::init$();
	this->canSetSourceRenderSize$ = false;
	$set(this, sourceRenderSize, nullptr);
	$set(this, destination, nullptr);
	$set(this, destinationBands, nullptr);
	this->minProgressivePass = 0;
	this->numProgressivePasses = $Integer::MAX_VALUE;
}

void ImageReadParam::setDestinationType($ImageTypeSpecifier* destinationType) {
	$IIOParam::setDestinationType(destinationType);
	setDestination(nullptr);
}

void ImageReadParam::setDestination($BufferedImage* destination) {
	$set(this, destination, destination);
}

$BufferedImage* ImageReadParam::getDestination() {
	return this->destination;
}

void ImageReadParam::setDestinationBands($ints* destinationBands) {
	if (destinationBands == nullptr) {
		$set(this, destinationBands, nullptr);
	} else {
		int32_t numBands = destinationBands->length;
		for (int32_t i = 0; i < numBands; ++i) {
			int32_t band = destinationBands->get(i);
			if (band < 0) {
				$throwNew($IllegalArgumentException, "Band value < 0!"_s);
			}
			for (int32_t j = i + 1; j < numBands; ++j) {
				if (band == destinationBands->get(j)) {
					$throwNew($IllegalArgumentException, "Duplicate band value!"_s);
				}
			}
		}
		$set(this, destinationBands, $cast($ints, destinationBands->clone()));
	}
}

$ints* ImageReadParam::getDestinationBands() {
	if (this->destinationBands == nullptr) {
		return nullptr;
	} else {
		return $cast($ints, this->destinationBands->clone());
	}
}

bool ImageReadParam::canSetSourceRenderSize() {
	return this->canSetSourceRenderSize$;
}

void ImageReadParam::setSourceRenderSize($Dimension* size) {
	if (!canSetSourceRenderSize()) {
		$throwNew($UnsupportedOperationException, "Can\'t set source render size!"_s);
	}
	if (size == nullptr) {
		$set(this, sourceRenderSize, nullptr);
	} else {
		if (size->width <= 0 || size->height <= 0) {
			$throwNew($IllegalArgumentException, "width or height <= 0!"_s);
		}
		$set(this, sourceRenderSize, $cast($Dimension, size->clone()));
	}
}

$Dimension* ImageReadParam::getSourceRenderSize() {
	return (this->sourceRenderSize == nullptr) ? ($Dimension*)nullptr : $cast($Dimension, this->sourceRenderSize->clone());
}

void ImageReadParam::setSourceProgressivePasses(int32_t minPass, int32_t numPasses) {
	if (minPass < 0) {
		$throwNew($IllegalArgumentException, "minPass < 0!"_s);
	}
	if (numPasses <= 0) {
		$throwNew($IllegalArgumentException, "numPasses <= 0!"_s);
	}
	if ((numPasses != $Integer::MAX_VALUE) && (((minPass + numPasses - 1) & (int32_t)0x80000000) != 0)) {
		$throwNew($IllegalArgumentException, "minPass + numPasses - 1 > INTEGER.MAX_VALUE!"_s);
	}
	this->minProgressivePass = minPass;
	this->numProgressivePasses = numPasses;
}

int32_t ImageReadParam::getSourceMinProgressivePass() {
	return this->minProgressivePass;
}

int32_t ImageReadParam::getSourceMaxProgressivePass() {
	if (this->numProgressivePasses == $Integer::MAX_VALUE) {
		return $Integer::MAX_VALUE;
	} else {
		return this->minProgressivePass + this->numProgressivePasses - 1;
	}
}

int32_t ImageReadParam::getSourceNumProgressivePasses() {
	return this->numProgressivePasses;
}

ImageReadParam::ImageReadParam() {
}

$Class* ImageReadParam::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"canSetSourceRenderSize", "Z", nullptr, $PROTECTED, $field(ImageReadParam, canSetSourceRenderSize$)},
		{"sourceRenderSize", "Ljava/awt/Dimension;", nullptr, $PROTECTED, $field(ImageReadParam, sourceRenderSize)},
		{"destination", "Ljava/awt/image/BufferedImage;", nullptr, $PROTECTED, $field(ImageReadParam, destination)},
		{"destinationBands", "[I", nullptr, $PROTECTED, $field(ImageReadParam, destinationBands)},
		{"minProgressivePass", "I", nullptr, $PROTECTED, $field(ImageReadParam, minProgressivePass)},
		{"numProgressivePasses", "I", nullptr, $PROTECTED, $field(ImageReadParam, numProgressivePasses)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ImageReadParam, init$, void)},
		{"canSetSourceRenderSize", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageReadParam, canSetSourceRenderSize, bool)},
		{"getDestination", "()Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC, $virtualMethod(ImageReadParam, getDestination, $BufferedImage*)},
		{"getDestinationBands", "()[I", nullptr, $PUBLIC, $virtualMethod(ImageReadParam, getDestinationBands, $ints*)},
		{"getSourceMaxProgressivePass", "()I", nullptr, $PUBLIC, $virtualMethod(ImageReadParam, getSourceMaxProgressivePass, int32_t)},
		{"getSourceMinProgressivePass", "()I", nullptr, $PUBLIC, $virtualMethod(ImageReadParam, getSourceMinProgressivePass, int32_t)},
		{"getSourceNumProgressivePasses", "()I", nullptr, $PUBLIC, $virtualMethod(ImageReadParam, getSourceNumProgressivePasses, int32_t)},
		{"getSourceRenderSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(ImageReadParam, getSourceRenderSize, $Dimension*)},
		{"setDestination", "(Ljava/awt/image/BufferedImage;)V", nullptr, $PUBLIC, $virtualMethod(ImageReadParam, setDestination, void, $BufferedImage*)},
		{"setDestinationBands", "([I)V", nullptr, $PUBLIC, $virtualMethod(ImageReadParam, setDestinationBands, void, $ints*)},
		{"setDestinationType", "(Ljavax/imageio/ImageTypeSpecifier;)V", nullptr, $PUBLIC, $virtualMethod(ImageReadParam, setDestinationType, void, $ImageTypeSpecifier*)},
		{"setSourceProgressivePasses", "(II)V", nullptr, $PUBLIC, $virtualMethod(ImageReadParam, setSourceProgressivePasses, void, int32_t, int32_t)},
		{"setSourceRenderSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC, $virtualMethod(ImageReadParam, setSourceRenderSize, void, $Dimension*), "java.lang.UnsupportedOperationException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.imageio.ImageReadParam",
		"javax.imageio.IIOParam",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ImageReadParam, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageReadParam);
	});
	return class$;
}

$Class* ImageReadParam::class$ = nullptr;

	} // imageio
} // javax