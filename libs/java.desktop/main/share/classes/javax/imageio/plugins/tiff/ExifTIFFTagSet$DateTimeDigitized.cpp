#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$DateTimeDigitized.h>
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

void ExifTIFFTagSet$DateTimeDigitized::init$() {
	$TIFFTag::init$("DateTimeDigitized"_s, 0x00009004, $sl(1, $TIFFTag::TIFF_ASCII), 20);
}

ExifTIFFTagSet$DateTimeDigitized::ExifTIFFTagSet$DateTimeDigitized() {
}

$Class* ExifTIFFTagSet$DateTimeDigitized::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$DateTimeDigitized, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$DateTimeDigitized", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "DateTimeDigitized", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$DateTimeDigitized",
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
	$loadClass(ExifTIFFTagSet$DateTimeDigitized, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$DateTimeDigitized);
	});
	return class$;
}

$Class* ExifTIFFTagSet$DateTimeDigitized::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax