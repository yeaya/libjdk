#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDestBearingRef.h>
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

void ExifGPSTagSet$GPSDestBearingRef::init$() {
	$TIFFTag::init$("GPSDestBearingRef"_s, 23, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSDestBearingRef::ExifGPSTagSet$GPSDestBearingRef() {
}

$Class* ExifGPSTagSet$GPSDestBearingRef::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSDestBearingRef, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestBearingRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDestBearingRef", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestBearingRef",
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
	$loadClass(ExifGPSTagSet$GPSDestBearingRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSDestBearingRef);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSDestBearingRef::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax