#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubSecTimeDigitized.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_ASCII

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void ExifTIFFTagSet$SubSecTimeDigitized::init$() {
	$TIFFTag::init$("SubSecTimeDigitized"_s, 0x00009292, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifTIFFTagSet$SubSecTimeDigitized::ExifTIFFTagSet$SubSecTimeDigitized() {
}

$Class* ExifTIFFTagSet$SubSecTimeDigitized::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$SubSecTimeDigitized, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubSecTimeDigitized", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubSecTimeDigitized", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubSecTimeDigitized",
		"javax.imageio.plugins.tiff.TIFFTag",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet"
	};
	$loadClass(ExifTIFFTagSet$SubSecTimeDigitized, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$SubSecTimeDigitized);
	});
	return class$;
}

$Class* ExifTIFFTagSet$SubSecTimeDigitized::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax