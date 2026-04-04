#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSMeasureMode.h>
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

void ExifGPSTagSet$GPSMeasureMode::init$() {
	$TIFFTag::init$("GPSMeasureMode"_s, 10, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSMeasureMode::ExifGPSTagSet$GPSMeasureMode() {
}

$Class* ExifGPSTagSet$GPSMeasureMode::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSMeasureMode, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSMeasureMode", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSMeasureMode", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSMeasureMode",
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
	$loadClass(ExifGPSTagSet$GPSMeasureMode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSMeasureMode);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSMeasureMode::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax