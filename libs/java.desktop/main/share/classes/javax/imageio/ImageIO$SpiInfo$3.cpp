#include <javax/imageio/ImageIO$SpiInfo$3.h>
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

void ImageIO$SpiInfo$3::init$($String* $enum$name, int32_t $enum$ordinal) {
	$ImageIO$SpiInfo::init$($enum$name, $enum$ordinal);
}

$StringArray* ImageIO$SpiInfo$3::info($ImageReaderWriterSpi* spi) {
	return $nc(spi)->getFileSuffixes();
}

ImageIO$SpiInfo$3::ImageIO$SpiInfo$3() {
}

$Class* ImageIO$SpiInfo$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(ImageIO$SpiInfo$3, init$, void, $String*, int32_t)},
		{"info", "(Ljavax/imageio/spi/ImageReaderWriterSpi;)[Ljava/lang/String;", nullptr, 0, $virtualMethod(ImageIO$SpiInfo$3, info, $StringArray*, $ImageReaderWriterSpi*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.imageio.ImageIO$SpiInfo",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.ImageIO$SpiInfo", "javax.imageio.ImageIO", "SpiInfo", $PRIVATE | $STATIC | $ABSTRACT | $ENUM},
		{"javax.imageio.ImageIO$SpiInfo$3", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"javax.imageio.ImageIO$SpiInfo$3",
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
	$loadClass(ImageIO$SpiInfo$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ImageIO$SpiInfo$3));
	});
	return class$;
}

$Class* ImageIO$SpiInfo$3::class$ = nullptr;

	} // imageio
} // javax