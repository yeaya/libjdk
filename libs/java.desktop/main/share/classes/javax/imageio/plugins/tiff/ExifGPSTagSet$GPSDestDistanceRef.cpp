#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDestDistanceRef.h>
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

void ExifGPSTagSet$GPSDestDistanceRef::init$() {
	$TIFFTag::init$("GPSDestDistanceRef"_s, 25, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSDestDistanceRef::ExifGPSTagSet$GPSDestDistanceRef() {
}

$Class* ExifGPSTagSet$GPSDestDistanceRef::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSDestDistanceRef, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestDistanceRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDestDistanceRef", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestDistanceRef",
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
	$loadClass(ExifGPSTagSet$GPSDestDistanceRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSDestDistanceRef);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSDestDistanceRef::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax