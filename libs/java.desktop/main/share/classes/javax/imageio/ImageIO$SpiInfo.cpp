#include <javax/imageio/ImageIO$SpiInfo.h>
#include <java/lang/Enum.h>
#include <javax/imageio/ImageIO$SpiInfo$1.h>
#include <javax/imageio/ImageIO$SpiInfo$2.h>
#include <javax/imageio/ImageIO$SpiInfo$3.h>
#include <javax/imageio/ImageIO.h>
#include <javax/imageio/spi/ImageReaderWriterSpi.h>
#include <jcpp.h>

#undef FILE_SUFFIXES
#undef FORMAT_NAMES
#undef MIME_TYPES

using $ImageIO$SpiInfoArray = $Array<::javax::imageio::ImageIO$SpiInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIO$SpiInfo$1 = ::javax::imageio::ImageIO$SpiInfo$1;
using $ImageIO$SpiInfo$2 = ::javax::imageio::ImageIO$SpiInfo$2;
using $ImageIO$SpiInfo$3 = ::javax::imageio::ImageIO$SpiInfo$3;
using $ImageReaderWriterSpi = ::javax::imageio::spi::ImageReaderWriterSpi;

namespace javax {
	namespace imageio {

ImageIO$SpiInfo* ImageIO$SpiInfo::FORMAT_NAMES = nullptr;
ImageIO$SpiInfo* ImageIO$SpiInfo::MIME_TYPES = nullptr;
ImageIO$SpiInfo* ImageIO$SpiInfo::FILE_SUFFIXES = nullptr;
$ImageIO$SpiInfoArray* ImageIO$SpiInfo::$VALUES = nullptr;

$ImageIO$SpiInfoArray* ImageIO$SpiInfo::$values() {
	$init(ImageIO$SpiInfo);
	return $new($ImageIO$SpiInfoArray, {
		ImageIO$SpiInfo::FORMAT_NAMES,
		ImageIO$SpiInfo::MIME_TYPES,
		ImageIO$SpiInfo::FILE_SUFFIXES
	});
}

$ImageIO$SpiInfoArray* ImageIO$SpiInfo::values() {
	$init(ImageIO$SpiInfo);
	return $cast($ImageIO$SpiInfoArray, ImageIO$SpiInfo::$VALUES->clone());
}

ImageIO$SpiInfo* ImageIO$SpiInfo::valueOf($String* name) {
	$init(ImageIO$SpiInfo);
	return $cast(ImageIO$SpiInfo, $Enum::valueOf(ImageIO$SpiInfo::class$, name));
}

void ImageIO$SpiInfo::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void ImageIO$SpiInfo::clinit$($Class* clazz) {
	$assignStatic(ImageIO$SpiInfo::FORMAT_NAMES, $new($ImageIO$SpiInfo$1, "FORMAT_NAMES"_s, 0));
	$assignStatic(ImageIO$SpiInfo::MIME_TYPES, $new($ImageIO$SpiInfo$2, "MIME_TYPES"_s, 1));
	$assignStatic(ImageIO$SpiInfo::FILE_SUFFIXES, $new($ImageIO$SpiInfo$3, "FILE_SUFFIXES"_s, 2));
	$assignStatic(ImageIO$SpiInfo::$VALUES, ImageIO$SpiInfo::$values());
}

ImageIO$SpiInfo::ImageIO$SpiInfo() {
}

$Class* ImageIO$SpiInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORMAT_NAMES", "Ljavax/imageio/ImageIO$SpiInfo;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ImageIO$SpiInfo, FORMAT_NAMES)},
		{"MIME_TYPES", "Ljavax/imageio/ImageIO$SpiInfo;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ImageIO$SpiInfo, MIME_TYPES)},
		{"FILE_SUFFIXES", "Ljavax/imageio/ImageIO$SpiInfo;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ImageIO$SpiInfo, FILE_SUFFIXES)},
		{"$VALUES", "[Ljavax/imageio/ImageIO$SpiInfo;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ImageIO$SpiInfo, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljavax/imageio/ImageIO$SpiInfo;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ImageIO$SpiInfo, $values, $ImageIO$SpiInfoArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(ImageIO$SpiInfo, init$, void, $String*, int32_t)},
		{"info", "(Ljavax/imageio/spi/ImageReaderWriterSpi;)[Ljava/lang/String;", nullptr, $ABSTRACT, $virtualMethod(ImageIO$SpiInfo, info, $StringArray*, $ImageReaderWriterSpi*)},
		{"valueOf", "(Ljava/lang/String;)Ljavax/imageio/ImageIO$SpiInfo;", nullptr, $PUBLIC | $STATIC, $staticMethod(ImageIO$SpiInfo, valueOf, ImageIO$SpiInfo*, $String*)},
		{"values", "()[Ljavax/imageio/ImageIO$SpiInfo;", nullptr, $PUBLIC | $STATIC, $staticMethod(ImageIO$SpiInfo, values, $ImageIO$SpiInfoArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.ImageIO$SpiInfo", "javax.imageio.ImageIO", "SpiInfo", $PRIVATE | $STATIC | $ABSTRACT | $ENUM},
		{"javax.imageio.ImageIO$SpiInfo$3", nullptr, nullptr, $FINAL | $ENUM},
		{"javax.imageio.ImageIO$SpiInfo$2", nullptr, nullptr, $FINAL | $ENUM},
		{"javax.imageio.ImageIO$SpiInfo$1", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT | $ENUM,
		"javax.imageio.ImageIO$SpiInfo",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljavax/imageio/ImageIO$SpiInfo;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.imageio.ImageIO"
	};
	$loadClass(ImageIO$SpiInfo, name, initialize, &classInfo$$, ImageIO$SpiInfo::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(ImageIO$SpiInfo));
	});
	return class$;
}

$Class* ImageIO$SpiInfo::class$ = nullptr;

	} // imageio
} // javax