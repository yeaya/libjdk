#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$Contrast.h>
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

void ExifTIFFTagSet$Contrast::init$() {
	$TIFFTag::init$("Contrast"_s, 0x0000a408, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "Normal"_s);
	addValueName(1, "Soft"_s);
	addValueName(2, "Hard"_s);
}

ExifTIFFTagSet$Contrast::ExifTIFFTagSet$Contrast() {
}

$Class* ExifTIFFTagSet$Contrast::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$Contrast, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$Contrast", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "Contrast", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$Contrast",
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
	$loadClass(ExifTIFFTagSet$Contrast, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$Contrast);
	});
	return class$;
}

$Class* ExifTIFFTagSet$Contrast::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax