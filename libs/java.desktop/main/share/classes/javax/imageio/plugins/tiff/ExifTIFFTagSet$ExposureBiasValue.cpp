#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ExposureBiasValue.h>
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

void ExifTIFFTagSet$ExposureBiasValue::init$() {
	$TIFFTag::init$("ExposureBiasValue"_s, 0x00009204, $sl(1, $TIFFTag::TIFF_SRATIONAL), 1);
}

ExifTIFFTagSet$ExposureBiasValue::ExifTIFFTagSet$ExposureBiasValue() {
}

$Class* ExifTIFFTagSet$ExposureBiasValue::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$ExposureBiasValue, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureBiasValue", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ExposureBiasValue", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureBiasValue",
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
	$loadClass(ExifTIFFTagSet$ExposureBiasValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$ExposureBiasValue);
	});
	return class$;
}

$Class* ExifTIFFTagSet$ExposureBiasValue::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax