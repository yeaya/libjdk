#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSLatitudeRef.h>
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

void ExifGPSTagSet$GPSLatitudeRef::init$() {
	$TIFFTag::init$("GPSLatitudeRef"_s, 1, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSLatitudeRef::ExifGPSTagSet$GPSLatitudeRef() {
}

$Class* ExifGPSTagSet$GPSLatitudeRef::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSLatitudeRef, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLatitudeRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSLatitudeRef", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLatitudeRef",
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
	$loadClass(ExifGPSTagSet$GPSLatitudeRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSLatitudeRef);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSLatitudeRef::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax