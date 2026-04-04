#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDateStamp.h>
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

void ExifGPSTagSet$GPSDateStamp::init$() {
	$TIFFTag::init$("GPSDateStamp"_s, 29, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSDateStamp::ExifGPSTagSet$GPSDateStamp() {
}

$Class* ExifGPSTagSet$GPSDateStamp::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSDateStamp, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDateStamp", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDateStamp", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDateStamp",
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
	$loadClass(ExifGPSTagSet$GPSDateStamp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSDateStamp);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSDateStamp::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax