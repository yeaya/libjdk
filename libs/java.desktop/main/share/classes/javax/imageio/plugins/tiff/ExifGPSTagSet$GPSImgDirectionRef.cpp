#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSImgDirectionRef.h>
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

void ExifGPSTagSet$GPSImgDirectionRef::init$() {
	$TIFFTag::init$("GPSImgDirectionRef"_s, 16, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSImgDirectionRef::ExifGPSTagSet$GPSImgDirectionRef() {
}

$Class* ExifGPSTagSet$GPSImgDirectionRef::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifGPSTagSet$GPSImgDirectionRef, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSImgDirectionRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSImgDirectionRef", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSImgDirectionRef",
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
	$loadClass(ExifGPSTagSet$GPSImgDirectionRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifGPSTagSet$GPSImgDirectionRef);
	});
	return class$;
}

$Class* ExifGPSTagSet$GPSImgDirectionRef::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax