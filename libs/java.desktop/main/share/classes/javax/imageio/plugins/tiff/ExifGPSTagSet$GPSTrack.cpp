#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSTrack.h>
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

void ExifGPSTagSet$GPSTrack::init$() {
	$TIFFTag::init$("GPSTrack"_s, 15, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

ExifGPSTagSet$GPSTrack::ExifGPSTagSet$GPSTrack() {
}

$Class* ExifGPSTagSet$GPSTrack::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSTrack, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSTrack", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSTrack", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSTrack",
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
	$loadClass(ExifGPSTagSet$GPSTrack, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSTrack);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSTrack::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax