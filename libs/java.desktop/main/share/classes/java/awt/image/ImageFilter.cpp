#include <java/awt/image/ImageFilter.h>

#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/ImageProducer.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/InternalError.h>
#include <java/util/Hashtable.h>
#include <jcpp.h>

using $ColorModel = ::java::awt::image::ColorModel;
using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _ImageFilter_FieldInfo_[] = {
	{"consumer", "Ljava/awt/image/ImageConsumer;", nullptr, $PROTECTED, $field(ImageFilter, consumer)},
	{}
};

$MethodInfo _ImageFilter_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(ImageFilter, init$, void)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ImageFilter, clone, $Object*)},
	{"getFilterInstance", "(Ljava/awt/image/ImageConsumer;)Ljava/awt/image/ImageFilter;", nullptr, $PUBLIC, $virtualMethod(ImageFilter, getFilterInstance, ImageFilter*, $ImageConsumer*)},
	{"imageComplete", "(I)V", nullptr, $PUBLIC, $virtualMethod(ImageFilter, imageComplete, void, int32_t)},
	{"resendTopDownLeftRight", "(Ljava/awt/image/ImageProducer;)V", nullptr, $PUBLIC, $virtualMethod(ImageFilter, resendTopDownLeftRight, void, $ImageProducer*)},
	{"setColorModel", "(Ljava/awt/image/ColorModel;)V", nullptr, $PUBLIC, $virtualMethod(ImageFilter, setColorModel, void, $ColorModel*)},
	{"setDimensions", "(II)V", nullptr, $PUBLIC, $virtualMethod(ImageFilter, setDimensions, void, int32_t, int32_t)},
	{"setHints", "(I)V", nullptr, $PUBLIC, $virtualMethod(ImageFilter, setHints, void, int32_t)},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[BII)V", nullptr, $PUBLIC, $virtualMethod(ImageFilter, setPixels, void, int32_t, int32_t, int32_t, int32_t, $ColorModel*, $bytes*, int32_t, int32_t)},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[III)V", nullptr, $PUBLIC, $virtualMethod(ImageFilter, setPixels, void, int32_t, int32_t, int32_t, int32_t, $ColorModel*, $ints*, int32_t, int32_t)},
	{"setProperties", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<**>;)V", $PUBLIC, $virtualMethod(ImageFilter, setProperties, void, $Hashtable*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ImageFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.ImageFilter",
	"java.lang.Object",
	"java.awt.image.ImageConsumer,java.lang.Cloneable",
	_ImageFilter_FieldInfo_,
	_ImageFilter_MethodInfo_
};

$Object* allocate$ImageFilter($Class* clazz) {
	return $of($alloc(ImageFilter));
}

int32_t ImageFilter::hashCode() {
	 return this->$ImageConsumer::hashCode();
}

bool ImageFilter::equals(Object$* arg0) {
	 return this->$ImageConsumer::equals(arg0);
}

$String* ImageFilter::toString() {
	 return this->$ImageConsumer::toString();
}

void ImageFilter::finalize() {
	this->$ImageConsumer::finalize();
}

void ImageFilter::init$() {
}

ImageFilter* ImageFilter::getFilterInstance($ImageConsumer* ic) {
	$var(ImageFilter, instance, $cast(ImageFilter, clone()));
	$set($nc(instance), consumer, ic);
	return instance;
}

void ImageFilter::setDimensions(int32_t width, int32_t height) {
	$nc(this->consumer)->setDimensions(width, height);
}

void ImageFilter::setProperties($Hashtable* props) {
	$useLocalCurrentObjectStackCache();
	$var($Hashtable, p, $cast($Hashtable, $nc(props)->clone()));
	$var($Object, o, $nc(p)->get("filters"_s));
	if (o == nullptr) {
		p->put("filters"_s, $(toString()));
	} else if ($instanceOf($String, o)) {
		p->put("filters"_s, $$str({($cast($String, o)), $(toString())}));
	}
	$nc(this->consumer)->setProperties(p);
}

void ImageFilter::setColorModel($ColorModel* model) {
	$nc(this->consumer)->setColorModel(model);
}

void ImageFilter::setHints(int32_t hints) {
	$nc(this->consumer)->setHints(hints);
}

void ImageFilter::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ColorModel* model, $bytes* pixels, int32_t off, int32_t scansize) {
	$nc(this->consumer)->setPixels(x, y, w, h, model, pixels, off, scansize);
}

void ImageFilter::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ColorModel* model, $ints* pixels, int32_t off, int32_t scansize) {
	$nc(this->consumer)->setPixels(x, y, w, h, model, pixels, off, scansize);
}

void ImageFilter::imageComplete(int32_t status) {
	$nc(this->consumer)->imageComplete(status);
}

void ImageFilter::resendTopDownLeftRight($ImageProducer* ip) {
	$nc(ip)->requestTopDownLeftRightResend(this);
}

$Object* ImageFilter::clone() {
	try {
		return $of($ImageConsumer::clone());
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

ImageFilter::ImageFilter() {
}

$Class* ImageFilter::load$($String* name, bool initialize) {
	$loadClass(ImageFilter, name, initialize, &_ImageFilter_ClassInfo_, allocate$ImageFilter);
	return class$;
}

$Class* ImageFilter::class$ = nullptr;

		} // image
	} // awt
} // java