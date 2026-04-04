#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FocalPlaneResolutionUnit.h>
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

void ExifTIFFTagSet$FocalPlaneResolutionUnit::init$() {
	$TIFFTag::init$("FocalPlaneResolutionUnit"_s, 0x0000a210, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "None"_s);
	addValueName(2, "Inch"_s);
	addValueName(3, "Centimeter"_s);
}

ExifTIFFTagSet$FocalPlaneResolutionUnit::ExifTIFFTagSet$FocalPlaneResolutionUnit() {
}

$Class* ExifTIFFTagSet$FocalPlaneResolutionUnit::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$FocalPlaneResolutionUnit, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalPlaneResolutionUnit", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FocalPlaneResolutionUnit", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalPlaneResolutionUnit",
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
	$loadClass(ExifTIFFTagSet$FocalPlaneResolutionUnit, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$FocalPlaneResolutionUnit);
	});
	return class$;
}

$Class* ExifTIFFTagSet$FocalPlaneResolutionUnit::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax