#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubjectDistanceRange.h>
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

void ExifTIFFTagSet$SubjectDistanceRange::init$() {
	$TIFFTag::init$("SubjectDistanceRange"_s, 0x0000a40c, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "unknown"_s);
	addValueName(1, "Macro"_s);
	addValueName(2, "Close view"_s);
	addValueName(3, "Distant view"_s);
}

ExifTIFFTagSet$SubjectDistanceRange::ExifTIFFTagSet$SubjectDistanceRange() {
}

$Class* ExifTIFFTagSet$SubjectDistanceRange::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$SubjectDistanceRange, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectDistanceRange", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubjectDistanceRange", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectDistanceRange",
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
	$loadClass(ExifTIFFTagSet$SubjectDistanceRange, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$SubjectDistanceRange);
	});
	return class$;
}

$Class* ExifTIFFTagSet$SubjectDistanceRange::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax