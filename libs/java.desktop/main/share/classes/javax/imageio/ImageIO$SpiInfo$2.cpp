#include <javax/imageio/ImageIO$SpiInfo$2.h>
#include <javax/imageio/ImageIO$SpiInfo.h>
#include <javax/imageio/spi/ImageReaderWriterSpi.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIO$SpiInfo = ::javax::imageio::ImageIO$SpiInfo;
using $ImageReaderWriterSpi = ::javax::imageio::spi::ImageReaderWriterSpi;

namespace javax {
	namespace imageio {

void ImageIO$SpiInfo$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$ImageIO$SpiInfo::init$($enum$name, $enum$ordinal);
}

$StringArray* ImageIO$SpiInfo$2::info($ImageReaderWriterSpi* spi) {
	return $nc(spi)->getMIMETypes();
}

ImageIO$SpiInfo$2::ImageIO$SpiInfo$2() {
}

$Class* ImageIO$SpiInfo$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(ImageIO$SpiInfo$2, init$, void, $String*, int32_t)},
		{"info", "(Ljavax/imageio/spi/ImageReaderWriterSpi;)[Ljava/lang/String;", nullptr, 0, $virtualMethod(ImageIO$SpiInfo$2, info, $StringArray*, $ImageReaderWriterSpi*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.imageio.ImageIO$SpiInfo",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.ImageIO$SpiInfo", "javax.imageio.ImageIO", "SpiInfo", $PRIVATE | $STATIC | $ABSTRACT | $ENUM},
		{"javax.imageio.ImageIO$SpiInfo$2", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"javax.imageio.ImageIO$SpiInfo$2",
		"javax.imageio.ImageIO$SpiInfo",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.imageio.ImageIO"
	};
	$loadClass(ImageIO$SpiInfo$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ImageIO$SpiInfo$2));
	});
	return class$;
}

$Class* ImageIO$SpiInfo$2::class$ = nullptr;

	} // imageio
} // javax