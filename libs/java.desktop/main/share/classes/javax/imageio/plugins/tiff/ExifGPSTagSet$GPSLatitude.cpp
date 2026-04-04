#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSLatitude.h>
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

void ExifGPSTagSet$GPSLatitude::init$() {
	$TIFFTag::init$("GPSLatitude"_s, 2, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

ExifGPSTagSet$GPSLatitude::ExifGPSTagSet$GPSLatitude() {
}

$Class* ExifGPSTagSet$GPSLatitude::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSLatitude, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLatitude", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSLatitude", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLatitude",
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
	$loadClass(ExifGPSTagSet$GPSLatitude, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSLatitude);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSLatitude::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax