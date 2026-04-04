#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDifferential.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void ExifGPSTagSet$GPSDifferential::init$() {
	$TIFFTag::init$("GPSDifferential"_s, 30, $sl(1, $TIFFTag::TIFF_SHORT));
	addValueName(0, "Measurement without differential correction"_s);
	addValueName(1, "Differential correction applied"_s);
}

ExifGPSTagSet$GPSDifferential::ExifGPSTagSet$GPSDifferential() {
}

$Class* ExifGPSTagSet$GPSDifferential::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSDifferential, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDifferential", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDifferential", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDifferential",
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
	$loadClass(ExifGPSTagSet$GPSDifferential, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSDifferential);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSDifferential::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax