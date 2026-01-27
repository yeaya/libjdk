#include <javax/imageio/event/IIOReadProgressListener.h>

#include <javax/imageio/ImageReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageReader = ::javax::imageio::ImageReader;

namespace javax {
	namespace imageio {
		namespace event {

$MethodInfo _IIOReadProgressListener_MethodInfo_[] = {
	{"imageComplete", "(Ljavax/imageio/ImageReader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOReadProgressListener, imageComplete, void, $ImageReader*)},
	{"imageProgress", "(Ljavax/imageio/ImageReader;F)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOReadProgressListener, imageProgress, void, $ImageReader*, float)},
	{"imageStarted", "(Ljavax/imageio/ImageReader;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOReadProgressListener, imageStarted, void, $ImageReader*, int32_t)},
	{"readAborted", "(Ljavax/imageio/ImageReader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOReadProgressListener, readAborted, void, $ImageReader*)},
	{"sequenceComplete", "(Ljavax/imageio/ImageReader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOReadProgressListener, sequenceComplete, void, $ImageReader*)},
	{"sequenceStarted", "(Ljavax/imageio/ImageReader;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOReadProgressListener, sequenceStarted, void, $ImageReader*, int32_t)},
	{"thumbnailComplete", "(Ljavax/imageio/ImageReader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOReadProgressListener, thumbnailComplete, void, $ImageReader*)},
	{"thumbnailProgress", "(Ljavax/imageio/ImageReader;F)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOReadProgressListener, thumbnailProgress, void, $ImageReader*, float)},
	{"thumbnailStarted", "(Ljavax/imageio/ImageReader;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOReadProgressListener, thumbnailStarted, void, $ImageReader*, int32_t, int32_t)},
	{}
};

$ClassInfo _IIOReadProgressListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.imageio.event.IIOReadProgressListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_IIOReadProgressListener_MethodInfo_
};

$Object* allocate$IIOReadProgressListener($Class* clazz) {
	return $of($alloc(IIOReadProgressListener));
}

$Class* IIOReadProgressListener::load$($String* name, bool initialize) {
	$loadClass(IIOReadProgressListener, name, initialize, &_IIOReadProgressListener_ClassInfo_, allocate$IIOReadProgressListener);
	return class$;
}

$Class* IIOReadProgressListener::class$ = nullptr;

		} // event
	} // imageio
} // javax