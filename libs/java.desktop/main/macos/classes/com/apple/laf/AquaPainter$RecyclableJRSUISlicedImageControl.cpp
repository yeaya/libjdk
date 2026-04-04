#include <com/apple/laf/AquaPainter$RecyclableJRSUISlicedImageControl.h>
#include <apple/laf/JRSUIControl.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaImageFactory$NineSliceMetrics.h>
#include <com/apple/laf/AquaImageFactory$RecyclableSlicedImageControl.h>
#include <com/apple/laf/AquaPainter.h>
#include <java/awt/Image.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/WritableRaster.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB_PRE

using $JRSUIControl = ::apple::laf::JRSUIControl;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaImageFactory$NineSliceMetrics = ::com::apple::laf::AquaImageFactory$NineSliceMetrics;
using $AquaImageFactory$RecyclableSlicedImageControl = ::com::apple::laf::AquaImageFactory$RecyclableSlicedImageControl;
using $Image = ::java::awt::Image;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;

namespace com {
	namespace apple {
		namespace laf {

void AquaPainter$RecyclableJRSUISlicedImageControl::init$($JRSUIControl* control, $JRSUIState* state, $AquaImageFactory$NineSliceMetrics* metrics) {
	$AquaImageFactory$RecyclableSlicedImageControl::init$(metrics);
	$set(this, control, control);
	$set(this, state, state);
}

$Image* AquaPainter$RecyclableJRSUISlicedImageControl::createTemplateImage(int32_t width, int32_t height) {
	$useLocalObjectStack();
	$var($BufferedImage, image, $new($BufferedImage, $nc(this->metrics)->minW, $nc(this->metrics)->minH, $BufferedImage::TYPE_INT_ARGB_PRE));
	$var($WritableRaster, raster, image->getRaster());
	$var($DataBufferInt, buffer, $cast($DataBufferInt, $nc(raster)->getDataBuffer()));
	$nc(this->control)->set(this->state);
	this->control->paint($($SunWritableRaster::stealData(buffer, 0)), this->metrics->minW, this->metrics->minH, 0, 0, (double)this->metrics->minW, (double)this->metrics->minH);
	$SunWritableRaster::markDirty(buffer);
	return image;
}

AquaPainter$RecyclableJRSUISlicedImageControl::AquaPainter$RecyclableJRSUISlicedImageControl() {
}

$Class* AquaPainter$RecyclableJRSUISlicedImageControl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"control", "Lapple/laf/JRSUIControl;", nullptr, $PRIVATE | $FINAL, $field(AquaPainter$RecyclableJRSUISlicedImageControl, control)},
		{"state", "Lapple/laf/JRSUIState;", nullptr, $PRIVATE | $FINAL, $field(AquaPainter$RecyclableJRSUISlicedImageControl, state)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lapple/laf/JRSUIControl;Lapple/laf/JRSUIState;Lcom/apple/laf/AquaImageFactory$NineSliceMetrics;)V", nullptr, 0, $method(AquaPainter$RecyclableJRSUISlicedImageControl, init$, void, $JRSUIControl*, $JRSUIState*, $AquaImageFactory$NineSliceMetrics*)},
		{"createTemplateImage", "(II)Ljava/awt/Image;", nullptr, $PROTECTED, $virtualMethod(AquaPainter$RecyclableJRSUISlicedImageControl, createTemplateImage, $Image*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaPainter$RecyclableJRSUISlicedImageControl", "com.apple.laf.AquaPainter", "RecyclableJRSUISlicedImageControl", $PRIVATE | $STATIC},
		{"com.apple.laf.AquaImageFactory$RecyclableSlicedImageControl", "com.apple.laf.AquaImageFactory", "RecyclableSlicedImageControl", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaPainter$RecyclableJRSUISlicedImageControl",
		"com.apple.laf.AquaImageFactory$RecyclableSlicedImageControl",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaPainter"
	};
	$loadClass(AquaPainter$RecyclableJRSUISlicedImageControl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaPainter$RecyclableJRSUISlicedImageControl);
	});
	return class$;
}

$Class* AquaPainter$RecyclableJRSUISlicedImageControl::class$ = nullptr;

		} // laf
	} // apple
} // com