#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$Flash.h>
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

void ExifTIFFTagSet$Flash::init$() {
	$TIFFTag::init$("Flash"_s, 0x00009209, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "Flash Did Not Fire"_s);
	addValueName(1, "Flash Fired"_s);
	addValueName(5, "Strobe Return Light Not Detected"_s);
	addValueName(7, "Strobe Return Light Detected"_s);
}

ExifTIFFTagSet$Flash::ExifTIFFTagSet$Flash() {
}

$Class* ExifTIFFTagSet$Flash::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$Flash, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$Flash", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "Flash", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$Flash",
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
	$loadClass(ExifTIFFTagSet$Flash, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$Flash);
	});
	return class$;
}

$Class* ExifTIFFTagSet$Flash::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax