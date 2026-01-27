#include <javax/imageio/event/IIOReadUpdateListener.h>

#include <java/awt/image/BufferedImage.h>
#include <javax/imageio/ImageReader.h>
#include <jcpp.h>

using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageReader = ::javax::imageio::ImageReader;

namespace javax {
	namespace imageio {
		namespace event {

$MethodInfo _IIOReadUpdateListener_MethodInfo_[] = {
	{"imageUpdate", "(Ljavax/imageio/ImageReader;Ljava/awt/image/BufferedImage;IIIIII[I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOReadUpdateListener, imageUpdate, void, $ImageReader*, $BufferedImage*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $ints*)},
	{"passComplete", "(Ljavax/imageio/ImageReader;Ljava/awt/image/BufferedImage;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOReadUpdateListener, passComplete, void, $ImageReader*, $BufferedImage*)},
	{"passStarted", "(Ljavax/imageio/ImageReader;Ljava/awt/image/BufferedImage;IIIIIII[I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOReadUpdateListener, passStarted, void, $ImageReader*, $BufferedImage*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $ints*)},
	{"thumbnailPassComplete", "(Ljavax/imageio/ImageReader;Ljava/awt/image/BufferedImage;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOReadUpdateListener, thumbnailPassComplete, void, $ImageReader*, $BufferedImage*)},
	{"thumbnailPassStarted", "(Ljavax/imageio/ImageReader;Ljava/awt/image/BufferedImage;IIIIIII[I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOReadUpdateListener, thumbnailPassStarted, void, $ImageReader*, $BufferedImage*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $ints*)},
	{"thumbnailUpdate", "(Ljavax/imageio/ImageReader;Ljava/awt/image/BufferedImage;IIIIII[I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOReadUpdateListener, thumbnailUpdate, void, $ImageReader*, $BufferedImage*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $ints*)},
	{}
};

$ClassInfo _IIOReadUpdateListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.imageio.event.IIOReadUpdateListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_IIOReadUpdateListener_MethodInfo_
};

$Object* allocate$IIOReadUpdateListener($Class* clazz) {
	return $of($alloc(IIOReadUpdateListener));
}

$Class* IIOReadUpdateListener::load$($String* name, bool initialize) {
	$loadClass(IIOReadUpdateListener, name, initialize, &_IIOReadUpdateListener_ClassInfo_, allocate$IIOReadUpdateListener);
	return class$;
}

$Class* IIOReadUpdateListener::class$ = nullptr;

		} // event
	} // imageio
} // javax