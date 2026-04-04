#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubjectDistance.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_RATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void ExifTIFFTagSet$SubjectDistance::init$() {
	$TIFFTag::init$("SubjectDistance"_s, 0x00009206, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

ExifTIFFTagSet$SubjectDistance::ExifTIFFTagSet$SubjectDistance() {
}

$Class* ExifTIFFTagSet$SubjectDistance::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$SubjectDistance, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectDistance", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubjectDistance", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectDistance",
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
	$loadClass(ExifTIFFTagSet$SubjectDistance, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$SubjectDistance);
	});
	return class$;
}

$Class* ExifTIFFTagSet$SubjectDistance::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax