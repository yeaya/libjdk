#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSImgDirection.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet.h>
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

void ExifGPSTagSet$GPSImgDirection::init$() {
	$TIFFTag::init$("GPSImgDirection"_s, 17, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

ExifGPSTagSet$GPSImgDirection::ExifGPSTagSet$GPSImgDirection() {
}

$Class* ExifGPSTagSet$GPSImgDirection::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSImgDirection, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSImgDirection", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSImgDirection", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSImgDirection",
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
		"javax.imageio.plugins.tiff.ExifGPSTagSet"
	};
	$loadClass(ExifGPSTagSet$GPSImgDirection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSImgDirection);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSImgDirection::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax