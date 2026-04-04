#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSSpeedRef.h>
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

void ExifGPSTagSet$GPSSpeedRef::init$() {
	$TIFFTag::init$("GPSSpeedRef"_s, 12, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSSpeedRef::ExifGPSTagSet$GPSSpeedRef() {
}

$Class* ExifGPSTagSet$GPSSpeedRef::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSSpeedRef, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSSpeedRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSSpeedRef", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSSpeedRef",
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
	$loadClass(ExifGPSTagSet$GPSSpeedRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSSpeedRef);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSSpeedRef::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax