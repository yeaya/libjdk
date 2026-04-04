#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSLongitude.h>
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

void ExifGPSTagSet$GPSLongitude::init$() {
	$TIFFTag::init$("GPSLongitude"_s, 4, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

ExifGPSTagSet$GPSLongitude::ExifGPSTagSet$GPSLongitude() {
}

$Class* ExifGPSTagSet$GPSLongitude::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSLongitude, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLongitude", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSLongitude", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLongitude",
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
	$loadClass(ExifGPSTagSet$GPSLongitude, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSLongitude);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSLongitude::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax