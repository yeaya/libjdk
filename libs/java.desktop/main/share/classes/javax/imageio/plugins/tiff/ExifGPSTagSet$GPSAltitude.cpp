#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSAltitude.h>
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

void ExifGPSTagSet$GPSAltitude::init$() {
	$TIFFTag::init$("GPSAltitude"_s, 6, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

ExifGPSTagSet$GPSAltitude::ExifGPSTagSet$GPSAltitude() {
}

$Class* ExifGPSTagSet$GPSAltitude::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSAltitude, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSAltitude", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSAltitude", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSAltitude",
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
	$loadClass(ExifGPSTagSet$GPSAltitude, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSAltitude);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSAltitude::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax