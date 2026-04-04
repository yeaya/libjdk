#include <javax/imageio/ImageIO$CanDecodeInputFilter.h>
#include <java/io/IOException.h>
#include <javax/imageio/ImageIO.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace javax {
	namespace imageio {

void ImageIO$CanDecodeInputFilter::init$(Object$* input) {
	$set(this, input, input);
}

bool ImageIO$CanDecodeInputFilter::filter(Object$* elt) {
	$useLocalObjectStack();
	try {
		$var($ImageReaderSpi, spi, $cast($ImageReaderSpi, elt));
		$var($ImageInputStream, stream, nullptr);
		if ($instanceOf($ImageInputStream, this->input)) {
			$assign(stream, $cast($ImageInputStream, this->input));
		}
		bool canDecode = false;
		if (stream != nullptr) {
			stream->mark();
		}
		$var($Throwable, var$0, nullptr);
		try {
			canDecode = $nc(spi)->canDecodeInput(this->input);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (stream != nullptr) {
				stream->reset();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		return canDecode;
	} catch ($IOException& e) {
		return false;
	}
	$shouldNotReachHere();
}

ImageIO$CanDecodeInputFilter::ImageIO$CanDecodeInputFilter() {
}

$Class* ImageIO$CanDecodeInputFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"input", "Ljava/lang/Object;", nullptr, 0, $field(ImageIO$CanDecodeInputFilter, input)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(ImageIO$CanDecodeInputFilter, init$, void, Object$*)},
		{"filter", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ImageIO$CanDecodeInputFilter, filter, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.ImageIO$CanDecodeInputFilter", "javax.imageio.ImageIO", "CanDecodeInputFilter", $STATIC},
		{"javax.imageio.spi.ServiceRegistry$Filter", "javax.imageio.spi.ServiceRegistry", "Filter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.ImageIO$CanDecodeInputFilter",
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
	$loadClass(ImageIO$CanDecodeInputFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageIO$CanDecodeInputFilter);
	});
	return class$;
}

$Class* ImageIO$CanDecodeInputFilter::class$ = nullptr;

	} // imageio
} // javax