#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FocalPlaneYResolution.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
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

void ExifTIFFTagSet$FocalPlaneYResolution::init$() {
	$TIFFTag::init$("FocalPlaneYResolution"_s, 0x0000a20f, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

ExifTIFFTagSet$FocalPlaneYResolution::ExifTIFFTagSet$FocalPlaneYResolution() {
}

$Class* ExifTIFFTagSet$FocalPlaneYResolution::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExifTIFFTagSet$FocalPlaneYResolution, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalPlaneYResolution", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FocalPlaneYResolution", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalPlaneYResolution",
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
		"javax.imageio.plugins.tiff.ExifTIFFTagSet"
	};
	$loadClass(ExifTIFFTagSet$FocalPlaneYResolution, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExifTIFFTagSet$FocalPlaneYResolution);
	});
	return class$;
}

$Class* ExifTIFFTagSet$FocalPlaneYResolution::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax