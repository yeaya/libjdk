#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$DigitalZoomRatio.h>
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

void ExifTIFFTagSet$DigitalZoomRatio::init$() {
	$TIFFTag::init$("DigitalZoomRatio"_s, 0x0000a404, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

ExifTIFFTagSet$DigitalZoomRatio::ExifTIFFTagSet$DigitalZoomRatio() {
}

$Class* ExifTIFFTagSet$DigitalZoomRatio::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$DigitalZoomRatio, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$DigitalZoomRatio", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "DigitalZoomRatio", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$DigitalZoomRatio",
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
	$loadClass(ExifTIFFTagSet$DigitalZoomRatio, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$DigitalZoomRatio);
	});
	return class$;
}

$Class* ExifTIFFTagSet$DigitalZoomRatio::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax