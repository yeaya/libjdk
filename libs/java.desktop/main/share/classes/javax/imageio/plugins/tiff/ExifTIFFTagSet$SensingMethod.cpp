#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SensingMethod.h>
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

void ExifTIFFTagSet$SensingMethod::init$() {
	$TIFFTag::init$("SensingMethod"_s, 0x0000a217, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "Not Defined"_s);
	addValueName(2, "One-chip color area sensor"_s);
	addValueName(3, "Two-chip color area sensor"_s);
	addValueName(4, "Three-chip color area sensor"_s);
	addValueName(5, "Color sequential area sensor"_s);
	addValueName(7, "Trilinear sensor"_s);
	addValueName(8, "Color sequential linear sensor"_s);
}

ExifTIFFTagSet$SensingMethod::ExifTIFFTagSet$SensingMethod() {
}

$Class* ExifTIFFTagSet$SensingMethod::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$SensingMethod, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SensingMethod", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SensingMethod", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$SensingMethod",
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
	$loadClass(ExifTIFFTagSet$SensingMethod, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$SensingMethod);
	});
	return class$;
}

$Class* ExifTIFFTagSet$SensingMethod::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax