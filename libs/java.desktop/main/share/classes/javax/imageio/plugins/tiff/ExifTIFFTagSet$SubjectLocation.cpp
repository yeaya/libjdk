#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubjectLocation.h>
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

void ExifTIFFTagSet$SubjectLocation::init$() {
	$TIFFTag::init$("SubjectLocation"_s, 0x0000a214, $sl(1, $TIFFTag::TIFF_SHORT), 2);
}

ExifTIFFTagSet$SubjectLocation::ExifTIFFTagSet$SubjectLocation() {
}

$Class* ExifTIFFTagSet$SubjectLocation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$SubjectLocation, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectLocation", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubjectLocation", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectLocation",
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
	$loadClass(ExifTIFFTagSet$SubjectLocation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$SubjectLocation);
	});
	return class$;
}

$Class* ExifTIFFTagSet$SubjectLocation::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax