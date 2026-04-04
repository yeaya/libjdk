#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSSpeed.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_RATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void ExifGPSTagSet$GPSSpeed::init$() {
	$TIFFTag::init$("GPSSpeed"_s, 13, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

ExifGPSTagSet$GPSSpeed::ExifGPSTagSet$GPSSpeed() {
}

$Class* ExifGPSTagSet$GPSSpeed::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSSpeed, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSSpeed", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSSpeed", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSSpeed",
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
	$loadClass(ExifGPSTagSet$GPSSpeed, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSSpeed);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSSpeed::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax