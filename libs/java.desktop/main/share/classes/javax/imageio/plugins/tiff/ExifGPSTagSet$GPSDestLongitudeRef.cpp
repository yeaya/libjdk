#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDestLongitudeRef.h>
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

void ExifGPSTagSet$GPSDestLongitudeRef::init$() {
	$TIFFTag::init$("GPSDestLongitudeRef"_s, 21, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSDestLongitudeRef::ExifGPSTagSet$GPSDestLongitudeRef() {
}

$Class* ExifGPSTagSet$GPSDestLongitudeRef::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSDestLongitudeRef, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestLongitudeRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDestLongitudeRef", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestLongitudeRef",
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
	$loadClass(ExifGPSTagSet$GPSDestLongitudeRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSDestLongitudeRef);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSDestLongitudeRef::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax