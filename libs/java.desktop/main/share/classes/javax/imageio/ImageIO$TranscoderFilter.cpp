#include <javax/imageio/ImageIO$TranscoderFilter.h>
#include <javax/imageio/ImageIO.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/spi/ImageTranscoderSpi.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ImageTranscoderSpi = ::javax::imageio::spi::ImageTranscoderSpi;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;

namespace javax {
	namespace imageio {

void ImageIO$TranscoderFilter::init$($ImageReaderSpi* readerSpi, $ImageWriterSpi* writerSpi) {
	$set(this, readerSpiName, $nc($of(readerSpi))->getClass()->getName());
	$set(this, writerSpiName, $nc($of(writerSpi))->getClass()->getName());
}

bool ImageIO$TranscoderFilter::filter(Object$* elt) {
	$useLocalObjectStack();
	$var($ImageTranscoderSpi, spi, $cast($ImageTranscoderSpi, elt));
	$var($String, readerName, $nc(spi)->getReaderServiceProviderName());
	$var($String, writerName, spi->getWriterServiceProviderName());
	bool var$0 = $nc(readerName)->equals(this->readerSpiName);
	return (var$0 && $nc(writerName)->equals(this->writerSpiName));
}

ImageIO$TranscoderFilter::ImageIO$TranscoderFilter() {
}

$Class* ImageIO$TranscoderFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"readerSpiName", "Ljava/lang/String;", nullptr, 0, $field(ImageIO$TranscoderFilter, readerSpiName)},
		{"writerSpiName", "Ljava/lang/String;", nullptr, 0, $field(ImageIO$TranscoderFilter, writerSpiName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/imageio/spi/ImageReaderSpi;Ljavax/imageio/spi/ImageWriterSpi;)V", nullptr, $PUBLIC, $method(ImageIO$TranscoderFilter, init$, void, $ImageReaderSpi*, $ImageWriterSpi*)},
		{"filter", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ImageIO$TranscoderFilter, filter, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.ImageIO$TranscoderFilter", "javax.imageio.ImageIO", "TranscoderFilter", $STATIC},
		{"javax.imageio.spi.ServiceRegistry$Filter", "javax.imageio.spi.ServiceRegistry", "Filter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.ImageIO$TranscoderFilter",
		"java.lang.Object",
		"javax.imageio.spi.ServiceRegistry$Filter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.imageio.ImageIO"
	};
	$loadClass(ImageIO$TranscoderFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageIO$TranscoderFilter);
	});
	return class$;
}

$Class* ImageIO$TranscoderFilter::class$ = nullptr;

	} // imageio
} // javax