#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDestLatitudeRef.h>
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

void ExifGPSTagSet$GPSDestLatitudeRef::init$() {
	$TIFFTag::init$("GPSDestLatitudeRef"_s, 19, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSDestLatitudeRef::ExifGPSTagSet$GPSDestLatitudeRef() {
}

$Class* ExifGPSTagSet$GPSDestLatitudeRef::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSDestLatitudeRef, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestLatitudeRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDestLatitudeRef", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestLatitudeRef",
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
	$loadClass(ExifGPSTagSet$GPSDestLatitudeRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSDestLatitudeRef);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSDestLatitudeRef::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax