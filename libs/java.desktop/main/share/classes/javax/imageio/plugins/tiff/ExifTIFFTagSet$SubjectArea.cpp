#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubjectArea.h>
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

void ExifTIFFTagSet$SubjectArea::init$() {
	$TIFFTag::init$("SubjectArea"_s, 0x00009214, $sl(1, $TIFFTag::TIFF_SHORT));
}

ExifTIFFTagSet$SubjectArea::ExifTIFFTagSet$SubjectArea() {
}

$Class* ExifTIFFTagSet$SubjectArea::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$SubjectArea, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectArea", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubjectArea", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectArea",
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
	$loadClass(ExifTIFFTagSet$SubjectArea, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$SubjectArea);
	});
	return class$;
}

$Class* ExifTIFFTagSet$SubjectArea::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax