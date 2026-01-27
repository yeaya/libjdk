#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener.h>

#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbJPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
#include <javax/imageio/ImageReader.h>
#include <jcpp.h>

using $JFIFMarkerSegment$JFIFThumbJPEG = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumbJPEG;
using $JPEGImageReader = ::com::sun::imageio::plugins::jpeg::JPEGImageReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageReader = ::javax::imageio::ImageReader;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener_FieldInfo_[] = {
	{"this$1", "Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbJPEG;", nullptr, $FINAL | $SYNTHETIC, $field(JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener, this$1)},
	{"reader", "Lcom/sun/imageio/plugins/jpeg/JPEGImageReader;", nullptr, 0, $field(JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener, reader)},
	{}
};

$MethodInfo _JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbJPEG;Lcom/sun/imageio/plugins/jpeg/JPEGImageReader;)V", nullptr, 0, $method(JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener, init$, void, $JFIFMarkerSegment$JFIFThumbJPEG*, $JPEGImageReader*)},
	{"imageComplete", "(Ljavax/imageio/ImageReader;)V", nullptr, $PUBLIC, $virtualMethod(JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener, imageComplete, void, $ImageReader*)},
	{"imageProgress", "(Ljavax/imageio/ImageReader;F)V", nullptr, $PUBLIC, $virtualMethod(JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener, imageProgress, void, $ImageReader*, float)},
	{"imageStarted", "(Ljavax/imageio/ImageReader;I)V", nullptr, $PUBLIC, $virtualMethod(JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener, imageStarted, void, $ImageReader*, int32_t)},
	{"readAborted", "(Ljavax/imageio/ImageReader;)V", nullptr, $PUBLIC, $virtualMethod(JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener, readAborted, void, $ImageReader*)},
	{"sequenceComplete", "(Ljavax/imageio/ImageReader;)V", nullptr, $PUBLIC, $virtualMethod(JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener, sequenceComplete, void, $ImageReader*)},
	{"sequenceStarted", "(Ljavax/imageio/ImageReader;I)V", nullptr, $PUBLIC, $virtualMethod(JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener, sequenceStarted, void, $ImageReader*, int32_t)},
	{"thumbnailComplete", "(Ljavax/imageio/ImageReader;)V", nullptr, $PUBLIC, $virtualMethod(JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener, thumbnailComplete, void, $ImageReader*)},
	{"thumbnailProgress", "(Ljavax/imageio/ImageReader;F)V", nullptr, $PUBLIC, $virtualMethod(JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener, thumbnailProgress, void, $ImageReader*, float)},
	{"thumbnailStarted", "(Ljavax/imageio/ImageReader;II)V", nullptr, $PUBLIC, $virtualMethod(JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener, thumbnailStarted, void, $ImageReader*, int32_t, int32_t)},
	{}
};

$InnerClassInfo _JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbJPEG", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "JFIFThumbJPEG", 0},
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbJPEG", "ThumbnailReadListener", $PRIVATE},
	{}
};

$ClassInfo _JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener",
	"java.lang.Object",
	"javax.imageio.event.IIOReadProgressListener",
	_JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener_FieldInfo_,
	_JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener_MethodInfo_,
	nullptr,
	nullptr,
	_JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment"
};

$Object* allocate$JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener($Class* clazz) {
	return $of($alloc(JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener));
}

void JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener::init$($JFIFMarkerSegment$JFIFThumbJPEG* this$1, $JPEGImageReader* reader) {
	$set(this, this$1, this$1);
	$set(this, reader, nullptr);
	$set(this, reader, reader);
}

void JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener::sequenceStarted($ImageReader* source, int32_t minIndex) {
}

void JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener::sequenceComplete($ImageReader* source) {
}

void JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener::imageStarted($ImageReader* source, int32_t imageIndex) {
}

void JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener::imageProgress($ImageReader* source, float percentageDone) {
	$nc(this->reader)->thumbnailProgress(percentageDone);
}

void JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener::imageComplete($ImageReader* source) {
}

void JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener::thumbnailStarted($ImageReader* source, int32_t imageIndex, int32_t thumbnailIndex) {
}

void JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener::thumbnailProgress($ImageReader* source, float percentageDone) {
}

void JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener::thumbnailComplete($ImageReader* source) {
}

void JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener::readAborted($ImageReader* source) {
}

JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener::JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener() {
}

$Class* JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener::load$($String* name, bool initialize) {
	$loadClass(JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener, name, initialize, &_JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener_ClassInfo_, allocate$JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener);
	return class$;
}

$Class* JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com