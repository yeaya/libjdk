#include <javax/imageio/spi/ImageInputStreamSpi.h>

#include <java/io/File.h>
#include <javax/imageio/spi/IIOServiceProvider.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOServiceProvider = ::javax::imageio::spi::IIOServiceProvider;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace javax {
	namespace imageio {
		namespace spi {

$FieldInfo _ImageInputStreamSpi_FieldInfo_[] = {
	{"inputClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PROTECTED, $field(ImageInputStreamSpi, inputClass)},
	{}
};

$MethodInfo _ImageInputStreamSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(ImageInputStreamSpi, init$, void)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class<*>;)V", $PUBLIC, $method(ImageInputStreamSpi, init$, void, $String*, $String*, $Class*)},
	{"canUseCacheFile", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageInputStreamSpi, canUseCacheFile, bool)},
	{"createInputStreamInstance", "(Ljava/lang/Object;ZLjava/io/File;)Ljavax/imageio/stream/ImageInputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStreamSpi, createInputStreamInstance, $ImageInputStream*, Object$*, bool, $File*), "java.io.IOException"},
	{"createInputStreamInstance", "(Ljava/lang/Object;)Ljavax/imageio/stream/ImageInputStream;", nullptr, $PUBLIC, $virtualMethod(ImageInputStreamSpi, createInputStreamInstance, $ImageInputStream*, Object$*), "java.io.IOException"},
	{"getInputClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(ImageInputStreamSpi, getInputClass, $Class*)},
	{"needsCacheFile", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageInputStreamSpi, needsCacheFile, bool)},
	{}
};

$ClassInfo _ImageInputStreamSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.imageio.spi.ImageInputStreamSpi",
	"javax.imageio.spi.IIOServiceProvider",
	nullptr,
	_ImageInputStreamSpi_FieldInfo_,
	_ImageInputStreamSpi_MethodInfo_
};

$Object* allocate$ImageInputStreamSpi($Class* clazz) {
	return $of($alloc(ImageInputStreamSpi));
}

void ImageInputStreamSpi::init$() {
	$IIOServiceProvider::init$();
}

void ImageInputStreamSpi::init$($String* vendorName, $String* version, $Class* inputClass) {
	$IIOServiceProvider::init$(vendorName, version);
	$set(this, inputClass, inputClass);
}

$Class* ImageInputStreamSpi::getInputClass() {
	return this->inputClass;
}

bool ImageInputStreamSpi::canUseCacheFile() {
	return false;
}

bool ImageInputStreamSpi::needsCacheFile() {
	return false;
}

$ImageInputStream* ImageInputStreamSpi::createInputStreamInstance(Object$* input) {
	return createInputStreamInstance(input, true, nullptr);
}

ImageInputStreamSpi::ImageInputStreamSpi() {
}

$Class* ImageInputStreamSpi::load$($String* name, bool initialize) {
	$loadClass(ImageInputStreamSpi, name, initialize, &_ImageInputStreamSpi_ClassInfo_, allocate$ImageInputStreamSpi);
	return class$;
}

$Class* ImageInputStreamSpi::class$ = nullptr;

		} // spi
	} // imageio
} // javax