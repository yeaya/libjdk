#include <javax/imageio/spi/ImageOutputStreamSpi.h>

#include <java/io/File.h>
#include <javax/imageio/spi/IIOServiceProvider.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOServiceProvider = ::javax::imageio::spi::IIOServiceProvider;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace javax {
	namespace imageio {
		namespace spi {

$FieldInfo _ImageOutputStreamSpi_FieldInfo_[] = {
	{"outputClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PROTECTED, $field(ImageOutputStreamSpi, outputClass)},
	{}
};

$MethodInfo _ImageOutputStreamSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(ImageOutputStreamSpi, init$, void)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class<*>;)V", $PUBLIC, $method(ImageOutputStreamSpi, init$, void, $String*, $String*, $Class*)},
	{"canUseCacheFile", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageOutputStreamSpi, canUseCacheFile, bool)},
	{"createOutputStreamInstance", "(Ljava/lang/Object;ZLjava/io/File;)Ljavax/imageio/stream/ImageOutputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageOutputStreamSpi, createOutputStreamInstance, $ImageOutputStream*, Object$*, bool, $File*), "java.io.IOException"},
	{"createOutputStreamInstance", "(Ljava/lang/Object;)Ljavax/imageio/stream/ImageOutputStream;", nullptr, $PUBLIC, $virtualMethod(ImageOutputStreamSpi, createOutputStreamInstance, $ImageOutputStream*, Object$*), "java.io.IOException"},
	{"getOutputClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(ImageOutputStreamSpi, getOutputClass, $Class*)},
	{"needsCacheFile", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageOutputStreamSpi, needsCacheFile, bool)},
	{}
};

$ClassInfo _ImageOutputStreamSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.imageio.spi.ImageOutputStreamSpi",
	"javax.imageio.spi.IIOServiceProvider",
	nullptr,
	_ImageOutputStreamSpi_FieldInfo_,
	_ImageOutputStreamSpi_MethodInfo_
};

$Object* allocate$ImageOutputStreamSpi($Class* clazz) {
	return $of($alloc(ImageOutputStreamSpi));
}

void ImageOutputStreamSpi::init$() {
	$IIOServiceProvider::init$();
}

void ImageOutputStreamSpi::init$($String* vendorName, $String* version, $Class* outputClass) {
	$IIOServiceProvider::init$(vendorName, version);
	$set(this, outputClass, outputClass);
}

$Class* ImageOutputStreamSpi::getOutputClass() {
	return this->outputClass;
}

bool ImageOutputStreamSpi::canUseCacheFile() {
	return false;
}

bool ImageOutputStreamSpi::needsCacheFile() {
	return false;
}

$ImageOutputStream* ImageOutputStreamSpi::createOutputStreamInstance(Object$* output) {
	return createOutputStreamInstance(output, true, nullptr);
}

ImageOutputStreamSpi::ImageOutputStreamSpi() {
}

$Class* ImageOutputStreamSpi::load$($String* name, bool initialize) {
	$loadClass(ImageOutputStreamSpi, name, initialize, &_ImageOutputStreamSpi_ClassInfo_, allocate$ImageOutputStreamSpi);
	return class$;
}

$Class* ImageOutputStreamSpi::class$ = nullptr;

		} // spi
	} // imageio
} // javax