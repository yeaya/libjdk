#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$Sharpness.h>
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

void ExifTIFFTagSet$Sharpness::init$() {
	$TIFFTag::init$("Sharpness"_s, 0x0000a40a, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "Normal"_s);
	addValueName(1, "Soft"_s);
	addValueName(2, "Hard"_s);
}

ExifTIFFTagSet$Sharpness::ExifTIFFTagSet$Sharpness() {
}

$Class* ExifTIFFTagSet$Sharpness::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$Sharpness, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$Sharpness", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "Sharpness", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$Sharpness",
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
	$loadClass(ExifTIFFTagSet$Sharpness, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$Sharpness);
	});
	return class$;
}

$Class* ExifTIFFTagSet$Sharpness::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax