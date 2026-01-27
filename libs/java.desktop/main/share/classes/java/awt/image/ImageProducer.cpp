#include <java/awt/image/ImageProducer.h>

#include <java/awt/image/ImageConsumer.h>
#include <jcpp.h>

using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$MethodInfo _ImageProducer_MethodInfo_[] = {
	{"addConsumer", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageProducer, addConsumer, void, $ImageConsumer*)},
	{"isConsumer", "(Ljava/awt/image/ImageConsumer;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageProducer, isConsumer, bool, $ImageConsumer*)},
	{"removeConsumer", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageProducer, removeConsumer, void, $ImageConsumer*)},
	{"requestTopDownLeftRightResend", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageProducer, requestTopDownLeftRightResend, void, $ImageConsumer*)},
	{"startProduction", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageProducer, startProduction, void, $ImageConsumer*)},
	{}
};

$ClassInfo _ImageProducer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.image.ImageProducer",
	nullptr,
	nullptr,
	nullptr,
	_ImageProducer_MethodInfo_
};

$Object* allocate$ImageProducer($Class* clazz) {
	return $of($alloc(ImageProducer));
}

$Class* ImageProducer::load$($String* name, bool initialize) {
	$loadClass(ImageProducer, name, initialize, &_ImageProducer_ClassInfo_, allocate$ImageProducer);
	return class$;
}

$Class* ImageProducer::class$ = nullptr;

		} // image
	} // awt
} // java