#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ExposureMode.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void ExifTIFFTagSet$ExposureMode::init$() {
	$TIFFTag::init$("ExposureMode"_s, 0x0000a402, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "Auto exposure"_s);
	addValueName(1, "Manual exposure"_s);
	addValueName(2, "Auto bracket"_s);
}

ExifTIFFTagSet$ExposureMode::ExifTIFFTagSet$ExposureMode() {
}

$Class* ExifTIFFTagSet$ExposureMode::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$ExposureMode, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureMode", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ExposureMode", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureMode",
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
	$loadClass(ExifTIFFTagSet$ExposureMode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$ExposureMode);
	});
	return class$;
}

$Class* ExifTIFFTagSet$ExposureMode::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax