#include <javax/imageio/spi/ImageTranscoderSpi.h>
#include <javax/imageio/ImageTranscoder.h>
#include <javax/imageio/spi/IIOServiceProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageTranscoder = ::javax::imageio::ImageTranscoder;
using $IIOServiceProvider = ::javax::imageio::spi::IIOServiceProvider;

namespace javax {
	namespace imageio {
		namespace spi {

void ImageTranscoderSpi::init$() {
	$IIOServiceProvider::init$();
}

void ImageTranscoderSpi::init$($String* vendorName, $String* version) {
	$IIOServiceProvider::init$(vendorName, version);
}

ImageTranscoderSpi::ImageTranscoderSpi() {
}

$Class* ImageTranscoderSpi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ImageTranscoderSpi, init$, void)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ImageTranscoderSpi, init$, void, $String*, $String*)},
		{"createTranscoderInstance", "()Ljavax/imageio/ImageTranscoder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageTranscoderSpi, createTranscoderInstance, $ImageTranscoder*)},
		{"getReaderServiceProviderName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageTranscoderSpi, getReaderServiceProviderName, $String*)},
		{"getWriterServiceProviderName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageTranscoderSpi, getWriterServiceProviderName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.imageio.spi.ImageTranscoderSpi",
		"javax.imageio.spi.IIOServiceProvider",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ImageTranscoderSpi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageTranscoderSpi);
	});
	return class$;
}

$Class* ImageTranscoderSpi::class$ = nullptr;

		} // spi
	} // imageio
} // javax