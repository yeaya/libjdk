#include <javax/imageio/ImageTypeSpecifier$Packed.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/SampleModel.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <jcpp.h>

#undef TYPE_BYTE
#undef TYPE_INT
#undef TYPE_RGB
#undef TYPE_USHORT

using $ColorSpace = ::java::awt::color::ColorSpace;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;

namespace javax {
	namespace imageio {

void ImageTypeSpecifier$Packed::init$($ColorSpace* colorSpace, int32_t redMask, int32_t greenMask, int32_t blueMask, int32_t alphaMask, int32_t transferType, bool isAlphaPremultiplied) {
	$ImageTypeSpecifier::init$();
	if (colorSpace == nullptr) {
		$throwNew($IllegalArgumentException, "colorSpace == null!"_s);
	}
	if ($nc(colorSpace)->getType() != $ColorSpace::TYPE_RGB) {
		$throwNew($IllegalArgumentException, "colorSpace is not of type TYPE_RGB!"_s);
	}
	if (transferType != $DataBuffer::TYPE_BYTE && transferType != $DataBuffer::TYPE_USHORT && transferType != $DataBuffer::TYPE_INT) {
		$throwNew($IllegalArgumentException, "Bad value for transferType!"_s);
	}
	if (redMask == 0 && greenMask == 0 && blueMask == 0 && alphaMask == 0) {
		$throwNew($IllegalArgumentException, "No mask has at least 1 bit set!"_s);
	}
	$set(this, colorSpace, colorSpace);
	this->redMask = redMask;
	this->greenMask = greenMask;
	this->blueMask = blueMask;
	this->alphaMask = alphaMask;
	this->transferType = transferType;
	this->isAlphaPremultiplied = isAlphaPremultiplied;
	int32_t bits = 32;
	$set(this, colorModel, $new($DirectColorModel, colorSpace, bits, redMask, greenMask, blueMask, alphaMask, isAlphaPremultiplied, transferType));
	$set(this, sampleModel, $nc(this->colorModel)->createCompatibleSampleModel(1, 1));
}

ImageTypeSpecifier$Packed::ImageTypeSpecifier$Packed() {
}

$Class* ImageTypeSpecifier$Packed::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"colorSpace", "Ljava/awt/color/ColorSpace;", nullptr, 0, $field(ImageTypeSpecifier$Packed, colorSpace)},
		{"redMask", "I", nullptr, 0, $field(ImageTypeSpecifier$Packed, redMask)},
		{"greenMask", "I", nullptr, 0, $field(ImageTypeSpecifier$Packed, greenMask)},
		{"blueMask", "I", nullptr, 0, $field(ImageTypeSpecifier$Packed, blueMask)},
		{"alphaMask", "I", nullptr, 0, $field(ImageTypeSpecifier$Packed, alphaMask)},
		{"transferType", "I", nullptr, 0, $field(ImageTypeSpecifier$Packed, transferType)},
		{"isAlphaPremultiplied", "Z", nullptr, 0, $field(ImageTypeSpecifier$Packed, isAlphaPremultiplied)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/color/ColorSpace;IIIIIZ)V", nullptr, $PUBLIC, $method(ImageTypeSpecifier$Packed, init$, void, $ColorSpace*, int32_t, int32_t, int32_t, int32_t, int32_t, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.ImageTypeSpecifier$Packed", "javax.imageio.ImageTypeSpecifier", "Packed", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.ImageTypeSpecifier$Packed",
		"javax.imageio.ImageTypeSpecifier",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.imageio.ImageTypeSpecifier"
	};
	$loadClass(ImageTypeSpecifier$Packed, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageTypeSpecifier$Packed);
	});
	return class$;
}

$Class* ImageTypeSpecifier$Packed::class$ = nullptr;

	} // imageio
} // javax