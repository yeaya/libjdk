#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ExifVersion.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_UNDEFINED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void ExifTIFFTagSet$ExifVersion::init$() {
	$TIFFTag::init$("ExifVersion"_s, 0x00009000, $sl(1, $TIFFTag::TIFF_UNDEFINED), 4);
}

ExifTIFFTagSet$ExifVersion::ExifTIFFTagSet$ExifVersion() {
}

$Class* ExifTIFFTagSet$ExifVersion::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$ExifVersion, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExifVersion", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ExifVersion", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExifVersion",
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
	$loadClass(ExifTIFFTagSet$ExifVersion, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$ExifVersion);
	});
	return class$;
}

$Class* ExifTIFFTagSet$ExifVersion::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax