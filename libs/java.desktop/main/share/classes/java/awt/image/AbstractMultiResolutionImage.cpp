#include <java/awt/image/AbstractMultiResolutionImage.h>

#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/ImageProducer.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace java {
	namespace awt {
		namespace image {

$MethodInfo _AbstractMultiResolutionImage_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractMultiResolutionImage, init$, void)},
	{"getBaseImage", "()Ljava/awt/Image;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(AbstractMultiResolutionImage, getBaseImage, $Image*)},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC, $virtualMethod(AbstractMultiResolutionImage, getGraphics, $Graphics*)},
	{"getHeight", "(Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC, $virtualMethod(AbstractMultiResolutionImage, getHeight, int32_t, $ImageObserver*)},
	{"getProperty", "(Ljava/lang/String;Ljava/awt/image/ImageObserver;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AbstractMultiResolutionImage, getProperty, $Object*, $String*, $ImageObserver*)},
	{"getSource", "()Ljava/awt/image/ImageProducer;", nullptr, $PUBLIC, $virtualMethod(AbstractMultiResolutionImage, getSource, $ImageProducer*)},
	{"getWidth", "(Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC, $virtualMethod(AbstractMultiResolutionImage, getWidth, int32_t, $ImageObserver*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AbstractMultiResolutionImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.image.AbstractMultiResolutionImage",
	"java.awt.Image",
	"java.awt.image.MultiResolutionImage",
	nullptr,
	_AbstractMultiResolutionImage_MethodInfo_
};

$Object* allocate$AbstractMultiResolutionImage($Class* clazz) {
	return $of($alloc(AbstractMultiResolutionImage));
}

int32_t AbstractMultiResolutionImage::hashCode() {
	 return this->$Image::hashCode();
}

bool AbstractMultiResolutionImage::equals(Object$* arg0) {
	 return this->$Image::equals(arg0);
}

$Object* AbstractMultiResolutionImage::clone() {
	 return this->$Image::clone();
}

$String* AbstractMultiResolutionImage::toString() {
	 return this->$Image::toString();
}

void AbstractMultiResolutionImage::finalize() {
	this->$Image::finalize();
}

void AbstractMultiResolutionImage::init$() {
	$Image::init$();
}

int32_t AbstractMultiResolutionImage::getWidth($ImageObserver* observer) {
	return $nc($(getBaseImage()))->getWidth(observer);
}

int32_t AbstractMultiResolutionImage::getHeight($ImageObserver* observer) {
	return $nc($(getBaseImage()))->getHeight(observer);
}

$ImageProducer* AbstractMultiResolutionImage::getSource() {
	return $nc($(getBaseImage()))->getSource();
}

$Graphics* AbstractMultiResolutionImage::getGraphics() {
	$throwNew($UnsupportedOperationException, "getGraphics() not supported on Multi-Resolution Images"_s);
	$shouldNotReachHere();
}

$Object* AbstractMultiResolutionImage::getProperty($String* name, $ImageObserver* observer) {
	return $of($nc($(getBaseImage()))->getProperty(name, observer));
}

AbstractMultiResolutionImage::AbstractMultiResolutionImage() {
}

$Class* AbstractMultiResolutionImage::load$($String* name, bool initialize) {
	$loadClass(AbstractMultiResolutionImage, name, initialize, &_AbstractMultiResolutionImage_ClassInfo_, allocate$AbstractMultiResolutionImage);
	return class$;
}

$Class* AbstractMultiResolutionImage::class$ = nullptr;

		} // image
	} // awt
} // java