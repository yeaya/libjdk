#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSSatellites.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_ASCII

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void ExifGPSTagSet$GPSSatellites::init$() {
	$TIFFTag::init$("GPSSatellites"_s, 8, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSSatellites::ExifGPSTagSet$GPSSatellites() {
}

$Class* ExifGPSTagSet$GPSSatellites::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSSatellites, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSSatellites", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSSatellites", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSSatellites",
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
	$loadClass(ExifGPSTagSet$GPSSatellites, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSSatellites);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSSatellites::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax