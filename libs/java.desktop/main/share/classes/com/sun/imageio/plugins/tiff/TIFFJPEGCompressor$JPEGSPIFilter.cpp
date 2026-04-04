#include <com/sun/imageio/plugins/tiff/TIFFJPEGCompressor$JPEGSPIFilter.h>
#include <com/sun/imageio/plugins/tiff/TIFFJPEGCompressor.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

void TIFFJPEGCompressor$JPEGSPIFilter::init$() {
}

bool TIFFJPEGCompressor$JPEGSPIFilter::filter(Object$* provider) {
	$useLocalObjectStack();
	$var($ImageReaderSpi, readerSPI, $cast($ImageReaderSpi, provider));
	if (readerSPI != nullptr) {
		$var($String, streamMetadataName, readerSPI->getNativeStreamMetadataFormatName());
		if (streamMetadataName != nullptr) {
			return streamMetadataName->equals("javax_imageio_jpeg_stream_1.0"_s);
		} else {
			return false;
		}
	}
	return false;
}

TIFFJPEGCompressor$JPEGSPIFilter::TIFFJPEGCompressor$JPEGSPIFilter() {
}

$Class* TIFFJPEGCompressor$JPEGSPIFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TIFFJPEGCompressor$JPEGSPIFilter, init$, void)},
		{"filter", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(TIFFJPEGCompressor$JPEGSPIFilter, filter, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.tiff.TIFFJPEGCompressor$JPEGSPIFilter", "com.sun.imageio.plugins.tiff.TIFFJPEGCompressor", "JPEGSPIFilter", $PRIVATE | $STATIC},
		{"javax.imageio.spi.ServiceRegistry$Filter", "javax.imageio.spi.ServiceRegistry", "Filter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.tiff.TIFFJPEGCompressor$JPEGSPIFilter",
		"java.lang.Object",
		"javax.imageio.spi.ServiceRegistry$Filter",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.imageio.plugins.tiff.TIFFJPEGCompressor"
	};
	$loadClass(TIFFJPEGCompressor$JPEGSPIFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TIFFJPEGCompressor$JPEGSPIFilter);
	});
	return class$;
}

$Class* TIFFJPEGCompressor$JPEGSPIFilter::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com