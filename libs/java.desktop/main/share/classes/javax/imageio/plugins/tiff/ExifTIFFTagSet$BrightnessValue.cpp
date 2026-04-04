#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$BrightnessValue.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SRATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void ExifTIFFTagSet$BrightnessValue::init$() {
	$TIFFTag::init$("BrightnessValue"_s, 0x00009203, $sl(1, $TIFFTag::TIFF_SRATIONAL), 1);
}

ExifTIFFTagSet$BrightnessValue::ExifTIFFTagSet$BrightnessValue() {
}

$Class* ExifTIFFTagSet$BrightnessValue::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$BrightnessValue, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$BrightnessValue", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "BrightnessValue", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$BrightnessValue",
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
	$loadClass(ExifTIFFTagSet$BrightnessValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$BrightnessValue);
	});
	return class$;
}

$Class* ExifTIFFTagSet$BrightnessValue::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax