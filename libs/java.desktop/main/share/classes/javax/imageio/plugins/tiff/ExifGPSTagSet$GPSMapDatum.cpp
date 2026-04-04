#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSMapDatum.h>
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

void ExifGPSTagSet$GPSMapDatum::init$() {
	$TIFFTag::init$("GPSMapDatum"_s, 18, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSMapDatum::ExifGPSTagSet$GPSMapDatum() {
}

$Class* ExifGPSTagSet$GPSMapDatum::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSMapDatum, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSMapDatum", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSMapDatum", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSMapDatum",
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
	$loadClass(ExifGPSTagSet$GPSMapDatum, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSMapDatum);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSMapDatum::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax