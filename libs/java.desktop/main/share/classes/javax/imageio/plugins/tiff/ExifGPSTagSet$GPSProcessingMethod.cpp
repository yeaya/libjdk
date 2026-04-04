#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSProcessingMethod.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_UNDEFINED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void ExifGPSTagSet$GPSProcessingMethod::init$() {
	$TIFFTag::init$("GPSProcessingMethod"_s, 27, $sl(1, $TIFFTag::TIFF_UNDEFINED));
}

ExifGPSTagSet$GPSProcessingMethod::ExifGPSTagSet$GPSProcessingMethod() {
}

$Class* ExifGPSTagSet$GPSProcessingMethod::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSProcessingMethod, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSProcessingMethod", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSProcessingMethod", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSProcessingMethod",
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
	$loadClass(ExifGPSTagSet$GPSProcessingMethod, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSProcessingMethod);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSProcessingMethod::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax