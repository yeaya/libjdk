#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSTimeStamp.h>
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

void ExifGPSTagSet$GPSTimeStamp::init$() {
	$TIFFTag::init$("GPSTimeStamp"_s, 7, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

ExifGPSTagSet$GPSTimeStamp::ExifGPSTagSet$GPSTimeStamp() {
}

$Class* ExifGPSTagSet$GPSTimeStamp::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSTimeStamp, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSTimeStamp", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSTimeStamp", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSTimeStamp",
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
	$loadClass(ExifGPSTagSet$GPSTimeStamp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSTimeStamp);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSTimeStamp::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax