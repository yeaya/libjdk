#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$Saturation.h>
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

void ExifTIFFTagSet$Saturation::init$() {
	$TIFFTag::init$("Saturation"_s, 0x0000a409, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "Normal"_s);
	addValueName(1, "Low saturation"_s);
	addValueName(2, "High saturation"_s);
}

ExifTIFFTagSet$Saturation::ExifTIFFTagSet$Saturation() {
}

$Class* ExifTIFFTagSet$Saturation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$Saturation, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$Saturation", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "Saturation", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$Saturation",
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
	$loadClass(ExifTIFFTagSet$Saturation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$Saturation);
	});
	return class$;
}

$Class* ExifTIFFTagSet$Saturation::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax