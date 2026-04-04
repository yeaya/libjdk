#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ExposureProgram.h>
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

void ExifTIFFTagSet$ExposureProgram::init$() {
	$TIFFTag::init$("ExposureProgram"_s, 0x00008822, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "Not Defined"_s);
	addValueName(1, "Manual"_s);
	addValueName(2, "Normal Program"_s);
	addValueName(3, "Aperture Priority"_s);
	addValueName(4, "Shutter Priority"_s);
	addValueName(5, "Creative Program"_s);
	addValueName(6, "Action Program"_s);
	addValueName(7, "Portrait Mode"_s);
	addValueName(8, "Landscape Mode"_s);
}

ExifTIFFTagSet$ExposureProgram::ExifTIFFTagSet$ExposureProgram() {
}

$Class* ExifTIFFTagSet$ExposureProgram::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$ExposureProgram, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureProgram", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ExposureProgram", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureProgram",
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
	$loadClass(ExifTIFFTagSet$ExposureProgram, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$ExposureProgram);
	});
	return class$;
}

$Class* ExifTIFFTagSet$ExposureProgram::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax