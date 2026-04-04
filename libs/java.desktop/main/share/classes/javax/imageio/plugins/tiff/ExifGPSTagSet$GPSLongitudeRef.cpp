#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSLongitudeRef.h>
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

void ExifGPSTagSet$GPSLongitudeRef::init$() {
	$TIFFTag::init$("GPSLongitudeRef"_s, 3, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSLongitudeRef::ExifGPSTagSet$GPSLongitudeRef() {
}

$Class* ExifGPSTagSet$GPSLongitudeRef::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSLongitudeRef, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLongitudeRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSLongitudeRef", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLongitudeRef",
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
	$loadClass(ExifGPSTagSet$GPSLongitudeRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSLongitudeRef);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSLongitudeRef::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax