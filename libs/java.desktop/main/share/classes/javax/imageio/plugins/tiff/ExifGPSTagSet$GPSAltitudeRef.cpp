#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSAltitudeRef.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_BYTE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void ExifGPSTagSet$GPSAltitudeRef::init$() {
	$TIFFTag::init$("GPSAltitudeRef"_s, 5, $sl(1, $TIFFTag::TIFF_BYTE));
	addValueName(0, "Sea level"_s);
	addValueName(1, "Sea level reference (negative value)"_s);
}

ExifGPSTagSet$GPSAltitudeRef::ExifGPSTagSet$GPSAltitudeRef() {
}

$Class* ExifGPSTagSet$GPSAltitudeRef::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSAltitudeRef, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSAltitudeRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSAltitudeRef", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSAltitudeRef",
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
	$loadClass(ExifGPSTagSet$GPSAltitudeRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSAltitudeRef);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSAltitudeRef::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax