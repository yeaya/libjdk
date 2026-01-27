#include <javax/imageio/event/IIOWriteProgressListener.h>

#include <javax/imageio/ImageWriter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageWriter = ::javax::imageio::ImageWriter;

namespace javax {
	namespace imageio {
		namespace event {

$MethodInfo _IIOWriteProgressListener_MethodInfo_[] = {
	{"imageComplete", "(Ljavax/imageio/ImageWriter;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOWriteProgressListener, imageComplete, void, $ImageWriter*)},
	{"imageProgress", "(Ljavax/imageio/ImageWriter;F)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOWriteProgressListener, imageProgress, void, $ImageWriter*, float)},
	{"imageStarted", "(Ljavax/imageio/ImageWriter;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOWriteProgressListener, imageStarted, void, $ImageWriter*, int32_t)},
	{"thumbnailComplete", "(Ljavax/imageio/ImageWriter;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOWriteProgressListener, thumbnailComplete, void, $ImageWriter*)},
	{"thumbnailProgress", "(Ljavax/imageio/ImageWriter;F)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOWriteProgressListener, thumbnailProgress, void, $ImageWriter*, float)},
	{"thumbnailStarted", "(Ljavax/imageio/ImageWriter;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOWriteProgressListener, thumbnailStarted, void, $ImageWriter*, int32_t, int32_t)},
	{"writeAborted", "(Ljavax/imageio/ImageWriter;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOWriteProgressListener, writeAborted, void, $ImageWriter*)},
	{}
};

$ClassInfo _IIOWriteProgressListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.imageio.event.IIOWriteProgressListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_IIOWriteProgressListener_MethodInfo_
};

$Object* allocate$IIOWriteProgressListener($Class* clazz) {
	return $of($alloc(IIOWriteProgressListener));
}

$Class* IIOWriteProgressListener::load$($String* name, bool initialize) {
	$loadClass(IIOWriteProgressListener, name, initialize, &_IIOWriteProgressListener_ClassInfo_, allocate$IIOWriteProgressListener);
	return class$;
}

$Class* IIOWriteProgressListener::class$ = nullptr;

		} // event
	} // imageio
} // javax